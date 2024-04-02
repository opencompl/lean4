#!/usr/bin/env bash
set -o xtrace
set -e

COMMIT_TO_BENCH="2024-04-01---22-10-tcg40"

if [[  $COMMIT_TO_BENCH != *$PWD* ]]; then
  echo "The commit to bench '${COMMIT_TO_BENCH}' is not contained in PWD '${PWD}'."
  read -p "Do you want to proceed? (y/n)" -n 1 -r
  echo    # Move to a new line
  if [[ $REPLY =~ ^[Yy]$ ]]; then
    echo "Proceeding to run..."
  else
    echo "Run aborted."
    exit 1
  fi
fi

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

COMMITS=("$COMMIT_TO_BENCH" "2024-borrowing-benching-baseline" )
KINDS=("reuse" "noreuse")


ntfysh() {
  curl -d "$1" ntfy.sh/xISSztEV8EoOchM2
}

clone_baseline() {
  ntfysh "started cloning baseline"
  mkdir -p "$EXPERIMENTDIR/builds/"

  if [ ! -d "${EXPERIMENTDIR}/builds/baseline-src-code" ]; then
    git clone git@github.com:opencompl/lean4.git \
      --depth 1 \
      --branch 2024-borrowing-benching-baseline \
      "$EXPERIMENTDIR/builds/baseline-src-code"
  fi
  ntfysh "done cloning baseline"
}


clone_repo() {
  local kind="$1"
  ntfysh "started cloning repo $kind"

  mkdir -p "$EXPERIMENTDIR/builds/"
  if [ ! -d "${EXPERIMENTDIR}/builds/${kind}" ]; then
    git clone git@github.com:opencompl/lean4.git  \
      --depth 1 \
      --branch "${COMMITS[i]}" "$EXPERIMENTDIR/builds/${kind}" \
      --reference /anfs/bigdisc/sb2743/24-borrowing/lean4.reference
  fi
  ntfysh "done cloning repo $kind"
}

build_stage0() {
  local kind="$1"
  ntfysh "starting stage0 $kind"

  if [ ! -f "${EXPERIMENTDIR}/builds/${kind}/build/release/stage0/bin/lean" ]; then
    mkdir -p "$EXPERIMENTDIR/builds/${kind}/build/release/"
    cd "$EXPERIMENTDIR/builds/${kind}/build/release/"
    # output log name from stage3 build.

    cmake ../../ \
      -DCCACHE=OFF \
      -DRUNTIME_STATS=ON \
      -DCMAKE_BUILD_TYPE=Release \
      -DLEAN_RESEARCH_COMPILER_PROFILE_CSV_PATH="$EXPERIMENTDIR/${kind}.stage3.compile.csv"
    make update-stage0
    rm -rf ../../src/; cp -r "$EXPERIMENTDIR/builds/baseline-src-code/src" ../../
    git checkout -- ../../src/runtime ../../src/include/lean/lean.h ../../src/library/compiler/ir_interpreter.h
  fi
  ntfysh "done stage0 $kind"
}

build_stage1() {
  ntfysh "starting stage1 $kind"
  local kind="$1"
  if [ ! -f "${EXPERIMENTDIR}/builds/${kind}/build/release/stage1/bin/lean" ]; then
    cd "$EXPERIMENTDIR/builds/${kind}/build/release/"
    make -j stage1
  fi
  ntfysh "done stage1 $kind"
}

build_stage2() {
  ntfysh "starting stage2 $kind"
  local kind="$1"
  if [ ! -f "${EXPERIMENTDIR}/builds/${kind}/build/release/stage2/bin/lean" ]; then
    cd "$EXPERIMENTDIR/builds/${kind}/build/release/"
    make -j stage2
  fi
  ntfysh "done stage2 $kind"
}

build_stage3() {
  ntfysh "starting stage3 $kind"
  local kind="$1"
  mkdir -p "$EXPERIMENTDIR/outputs"
  if [ ! -f "${EXPERIMENTDIR}/outputs/${kind}.stage3.compile.csv" ]; then
    rm "$EXPERIMENTDIR/${kind}.stage3.compile.csv"
    mkdir -p "$EXPERIMENTDIR/outputs/${kind}"
    $TIME -v make -j10 stage3 2>&1 | tee "$EXPERIMENTDIR/outputs/time-${kind}-stage3.txt"
    mv "$EXPERIMENTDIR/${kind}.stage3.compile.csv" "$EXPERIMENTDIR/outputs/${kind}.stage3.compile.csv"
  fi
  ntfysh "done stage3 $kind"
}


clone_baseline

for i in {0..1}; do
  clone_repo "${KINDS[i]}"
done;


for i in {0..1}; do
  build_stage0 "${KINDS[i]}"
done;

for i in {0..1}; do
  build_stage1 "${KINDS[i]}"
done;

for i in {0..1}; do
  build_stage2 "${KINDS[i]}"
done;

for i in {0..1}; do
  build_stage3 "${KINDS[i]}"
done;

#   echo "@@@ ${KINDS[i]} BUILD @@@"
#   curl -d "Started[Stage3-Bench-${KINDS[i]}]. run:$EXPERIMENTDIR. machine:$(uname -a)."  ntfy.sh/xISSztEV8EoOchM2
#   mkdir -p "$EXPERIMENTDIR/builds/"
#   if [ ! -d "${EXPERIMENTDIR}/builds/${KINDS[i]}" ]; then
#     git clone git@github.com:opencompl/lean4.git  \
#       --depth 1 \
#       --branch "${COMMITS[i]}" "$EXPERIMENTDIR/builds/${KINDS[i]}" \
#       --reference /anfs/bigdisc/sb2743/24-borrowing/lean4.reference
#   fi
#
#   CSVNAME="${KINDS[i]}.stage3.csv"
#
#   if [ ! -f "${EXPERIMENTDIR}/builds/${KINDS[i]}/build/release/stage2/bin/lean" ]; then
#     mkdir -p "$EXPERIMENTDIR/builds/${KINDS[i]}/build/release/"
#     cd "$EXPERIMENTDIR/builds/${KINDS[i]}/build/release/"
#     # output log name from stage3 build.
#
#     cmake ../../ \
#       -DCCACHE=OFF \
#       -DRUNTIME_STATS=ON \
#       -DCMAKE_BUILD_TYPE=Release \
#       -DLEAN_RESEARCH_COMPILER_PROFILE_CSV_PATH="$EXPERIMENTDIR/$CSVNAME"
#     make update-stage0
#     rm -rf ../../src/; cp -r "$EXPERIMENTDIR/builds/baseline-src-code/src" ../../
#     git checkout -- ../../src/runtime ../../src/include/lean/lean.h ../../src/library/compiler/ir_interpreter.h
#     make -j10 stage2
#   fi
#
#   if [ ! -f "${EXPERIMENTDIR}/outputs/${KINDS[i]}.stage3.compile.csv" ]; then
#     $TIME -v make -j10 stage3 2>&1 | tee "$EXPERIMENTDIR/time-${KINDS[i]}-stage3.txt"
#     mv "${EXPERIMENTDIR}/$CSVNAME" "$EXPERIMENTDIR/outputs/${KINDS[i]}.stage3-compile.csv"
#   fi
#   curl -d "Done[STAGE3-BENCH-${KINDS[i]}]. run:$EXPERIMENTDIR. machine:$(uname -a)."  ntfy.sh/xISSztEV8EoOchM2
# done;
#
#   # if [ ! -f "${EXPERIMENTDIR}/outputs/ctest-${KINDS[i]}-stage3.txt ]; then
#   #   (cd $EXPERIMENTDIR/builds/${KINDS[i]}/build/release/stage3 && (ctest -E handleLocking -j32 --output-on-failure 2>&1 | tee "$EXPERIMENTDIR/ctest-${KINDS[i]}-stage3.txt")) || true
#   #   mv
#   # fi
