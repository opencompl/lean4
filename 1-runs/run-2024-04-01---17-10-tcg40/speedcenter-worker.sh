#!/usr/bin/env bash
set -o xtrace

COMMIT_TO_BENCH="run-2024-04-01---17-10-tcg40"

# --------

EXPERIMENTDIR=$(pwd)
echo "pwd: $EXPERIMENTDIR"
DATE=$(date)
echo "date: $DATE"
MACHINE=$(uname -a)
echo "machine: $MACHINE"
echo "git status: $(git status --short)"
echo "git commit: $(git rev-parse HEAD)"
ROOT=$(git rev-parse --show-toplevel)
echo "root folder: $ROOT"
echo "out folder: $OUTFOLDER"

if [ "$(uname -s)" = "Darwin" ]; then
    TIME="gtime"
else
    TIME="command time"
fi
echo "time: $TIME"
$TIME -v echo "time"

COMMITS=("$COMMIT_TO_BENCH" "2024-borrowing-benchmarking-baseline-v4")
KINDS=("reuse" "noreuse")

run_benchmark_for_kind() {
  # argument: kind
  local kind="$1"
  local BENCHMARKS=("binarytrees.lean"
  # binarytrees.st
    "const_fold.lean"
    "deriv.lean"
    "liasolver.lean"
    # parser.lean
    # reduceMatch.lean
    # "qsort.lean"
    # "rbmap_checkpoint.lean"
    "rbmap_fbip.lean"
    "rbmap.lean"
    "unionfind.lean")
  local outfile="$EXPERIMENTDIR/outputs/benchmarks-allocator-log-$kind.csv"
  local outfile_temp="$outfile.temp"
  rm "$outfile_temp" || true
  if [ ! -f "${outfile}" ]; then
    # link lean tooolchain
    # # https://leanprover.zulipchat.com/#narrow/stream/270676-lean4/topic/elan.20toolchain.20link.3A.20three.20hyphens.20becomes.20colon.3F/near/430447189
    # # Lean toolchain does not like having three dash, so for now, just name it based on KINDS.
    LEAN_TOOLCHAIN="$kind"

    # TODO: elan does not like '---' in folder name?
    elan toolchain link "$LEAN_TOOLCHAIN" "$EXPERIMENTDIR/builds-speedcenter/$kind/build/release/stage2"
    cd "$EXPERIMENTDIR/builds-speedcenter/$kind/tests/bench/" || exit 1
    elan override set "$LEAN_TOOLCHAIN" # set override for temci
    mkdir -p "$EXPERIMENTDIR/outputs/"
    for benchmark in "${BENCHMARKS[@]}"; do
      RESEARCH_LEAN_RUNTIME_ALLOCATOR_LOG=./log.txt ./test_single.sh "${benchmark}"
      # run benchmark, write result to CSV file.
      while read -r line; do echo "$benchmark,$line"; done < log.txt >> "$outfile_temp"
    done;
    mv "$outfile_temp" "$outfile"
  fi
}

run_build_for_kind() {
  local kind="$1"
  mkdir -p "${EXPERIMENTDIR}/builds-speedcenter"
  if [ ! -d "${EXPERIMENTDIR}/builds-speedcenter/${KINDS[i]}" ]; then
    git clone --depth 1 git@github.com:opencompl/lean4.git --branch "${COMMITS[i]}" "$EXPERIMENTDIR/builds-speedcenter/${KINDS[i]}"
  fi
  # build
  mkdir -p "$EXPERIMENTDIR/builds-speedcenter/$kind/build/release/"
  cd "$EXPERIMENTDIR/builds-speedcenter/$kind/build/release/" || exit 1
  # build stage2, with ccache, since we are only interested in benching the microbenchmarks
  if [ ! -f "${EXPERIMENTDIR}/builds-speedcenter/$kind/build/release/stage2/bin/lean" ]; then
    cmake ../../ \
      -DCCACHE=ON \
      -DRUNTIME_STATS=ON \
      -DCMAKE_BUILD_TYPE=Release
    make -j30 stage2
  fi
}

run_ctest_for_kind() {
  # run ctest to make sure our toolchain is legit.
  local kind="$1"
  mkdir -p "$EXPERIMENTDIR/outputs/"
  cd "$EXPERIMENTDIR/builds-speedcenter/$kind/build/release/stage2" && \
    (ctest -E handleLocking -j32 --output-on-failure 2>&1 | tee "$EXPERIMENTDIR/outputs/ctest-speedcenter-$kind-stage2.txt")
}

run_temci_for_kind() {
  local kind="$1"
  local outfile="$EXPERIMENTDIR/outputs/${KINDS[i]}.speedcenter.bench.yaml"
  local outfile_temp="$outfile.temp"
  rm "$outfile_temp" || true
  if [ ! -f "${outfile}" ]; then
    # link lean tooolchain
    # # https://leanprover.zulipchat.com/#narrow/stream/270676-lean4/topic/elan.20toolchain.20link.3A.20three.20hyphens.20becomes.20colon.3F/near/430447189
    # # Lean toolchain does not like having three dash, so for now, just name it based on KINDS.
    LEAN_TOOLCHAIN="$kind"

    # TODO: elan does not like '---' in folder name?
    elan toolchain link "$LEAN_TOOLCHAIN" "$EXPERIMENTDIR/builds-speedcenter/$kind/build/release/stage2"
    cd "$EXPERIMENTDIR/builds-speedcenter/$kind/tests/bench/" || exit 1
    elan override set "$LEAN_TOOLCHAIN" # set override for temci
    temci exec --config speedcenter.yaml --out "$outfile_temp" --included_blocks suite # run temci
    mkdir -p "$EXPERIMENTDIR/outputs/"
    mv "$outfile_temp" "$outfile"
  fi
  local temci_report_outfile="$EXPERIMENTDIR/outputs/temci-report.txt"
  if [ ! -f "${temci_report_outfile}" ]; then
    temci report "$EXPERIMENTDIR/outputs${KINDS[0]}.speedcenter.bench.yaml" \
      "$EXPERIMENTDIR/outputs${KINDS[1]}.speedcenter.bench.yaml" > "$temci_report_outfile"
  fi
}

run() {
  for i in {0..1}; do
    curl -d "Start[MICROBENCHMARK-RUNTIME-ALLOCATOR-LOG-${KINDS[i]}]. run:$EXPERIMENTDIR. machine:$(uname -a)."  ntfy.sh/xISSztEV8EoOchM2
    mkdir -p builds-speedcenter
    # clone
    run_build_for_kind "${KINDS[i]}"
    run_benchmark_for_kind "${KINDS[i]}"
    run_temci_for_kind "${KINDS[i]}"
    # TODO: add run_temci
    curl -d "Done[MICROBENCHMARK-RUNTIME-ALLOCATOR-LOG-${KINDS[i]}]. run:$EXPERIMENTDIR. machine:$(uname -a)."  ntfy.sh/xISSztEV8EoOchM2
  done;

  # for i in {0..1}; do
  #   run_ctest_for_kind ${KINDS[i]}
  # done
}


run
