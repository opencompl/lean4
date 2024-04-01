#!/usr/bin/env bash
set -o xtrace
set -e

COMMIT_TO_BENCH="2024-03-31---19-38---tcg40"

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

COMMITS=("2024-borrowing-benchmarking-baseline-v3" "$COMMIT_TO_BENCH")
KINDS=("noreuse" "reuse")

run_benchmark_for_kind() {
  # argument: kind
  local kind="${KINDS[i]}"
  local BENCHMARKS=("binarytrees.lean"
  # binarytrees.st
    "const_fold.lean"
    "deriv.lean"
    "liasolver.lean"
    # parser.lean
    # reduceMatch.lean
    "qsort.lean"
    "rbmap_checkpoint.lean"
    "rbmap_fbip.lean"
    "rbmap.lean"
    "unionfind.lean")
  # link lean tooolchain
  # # https://leanprover.zulipchat.com/#narrow/stream/270676-lean4/topic/elan.20toolchain.20link.3A.20three.20hyphens.20becomes.20colon.3F/near/430447189
  # # Lean toolchain does not like having three dash, so for now, just name it based on KINDS.
  LEAN_TOOLCHAIN="$kind"
  # TODO: elan does not like '---' in folder name?
  elan toolchain link "$LEAN_TOOLCHAIN" "$EXPERIMENTDIR/builds-speedcenter/$kind/build/release/stage2"
  cd "$EXPERIMENTDIR/builds-speedcenter/$kind/tests/bench/"
  elan override set "$LEAN_TOOLCHAIN" # set override for temci
  mkdir -p "$EXPERIMENTDIR/outputs/"
  for benchmark in "${BENCHMARKS[@]}"; do
    RESEARCH_LEAN_RUNTIME_ALLOCATOR_LOG=./log.txt ./test_single.sh "${benchmark}"
    # run benchmark, write result to CSV file.
    while read -r line; do echo "$benchmark,$line"; done < log.txt >> "$EXPERIMENTDIR/outputs/benchmarks-allocator-log-$kind.csv"
  done;
}

for i in {0..1}; do
  curl -d "Start[MICROBENCHMARK-RUNTIME-ALLOCATOR-LOG-${KINDS[i]}]. run:$EXPERIMENTDIR. machine:$(uname -a)."  ntfy.sh/xISSztEV8EoOchM2
  mkdir -p builds-speedcenter
  # clone
  git clone --depth 1 git@github.com:opencompl/lean4.git --branch "${COMMITS[i]}" "$EXPERIMENTDIR/builds-speedcenter/${KINDS[i]}"
  # build
  cd "$EXPERIMENTDIR/builds-speedcenter/${KINDS[i]}/build/release/"
  # build stage2, with ccache, since we are only interested in benching the microbenchmarks
  cmake ../../ \
    -DCCACHE=ON \
    -DRUNTIME_STATS=ON \
    -DCMAKE_BUILD_TYPE=Release
  make -j20 stage2
  # run ctest to make sure our toolchain is legit.
  cd "$EXPERIMENTDIR/builds-speedcenter/${KINDS[i]}/build/release/stage2" && \
    (ctest -E handleLocking -j32 --output-on-failure 2>&1 | tee "$EXPERIMENTDIR/outputs/ctest-speedcenter-${KINDS[i]}-stage2.txt")
  run_benchmark_for_kind "${KINDS[i]}"

  # TODO: add run_temci
  curl -d "Done[MICROBENCHMARK-RUNTIME-ALLOCATOR-LOG-${KINDS[i]}]. run:$EXPERIMENTDIR. machine:$(uname -a)."  ntfy.sh/xISSztEV8EoOchM2
done;
