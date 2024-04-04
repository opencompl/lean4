#!/usr/bin/env bash
set -o xtrace
set -e

# HERE BE DRAGONS!
# ~~~~~~~~~~~~~~~~~
# Manually changed things:
# Need to set options "hardcoded" in stage0 CmakeLists, because
# for whatever reason, it does not carry over options:
# So for now, I manually set PROFILE_PATH=/tmp/profile.csv and RUNTIME_STATS=ON.
# This should be improved in the next iteration of this benchmark script.
# # Furthermore, the Lean build system is even more schizo: It seems to want these options
# # set in `src/CMakeLists.txt`.
# # In an abundance of caution, I also set them in `stage0/src/CMakeLists.txt`. I am
# # not sure this is necessary, but it's totally opaque to me how options get forwarded.

COMMIT_TO_BENCH="2024-borrowing-benchmarking-ONLY-reuse-across-types-tag"

if [[  $PWD  != *$COMMIT_TO_BENCH* ]]; then
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

COMMITS=("$COMMIT_TO_BENCH" "2024-borrowing-benchmarking-baseline-v5" )
KINDS=("reuse" "noreuse")


ntfysh() {
  curl -d "$1" ntfy.sh/xISSztEV8EoOchM2 || true
}

clone_baseline() {
  ntfysh "started cloning baseline"
  mkdir -p "$EXPERIMENTDIR/builds/"

  if [ ! -d "${EXPERIMENTDIR}/builds/baseline-src-code" ]; then
    git clone git@github.com:opencompl/lean4.git \
      --depth 1 \
      --branch 2024-borrowing-benchmarking-baseline-v5 \
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
      -DCCACHE=ON \
      -DRUNTIME_STATS=ON \
      -DCMAKE_BUILD_TYPE=Release \
      -DLEAN_RESEARCH_COMPILER_PROFILE_CSV_PATH="/tmp/profile.csv"
    make update-stage0 -j20
    rm -rf ../../src/; cp -r "$EXPERIMENTDIR/builds/baseline-src-code/src" ../../
    cd ../../; rm -rf build; mkdir -p build/release; cd build/release
    git checkout -- ../../src/runtime ../../src/include/lean/lean.h ../../src/library/compiler/ir_interpreter.h
  fi
  ntfysh "done stage0 $kind"
}

build_stage1_stdlib() {
  ntfysh "starting stage1 stdlib $kind"
  local kind="$1"
  mkdir -p "$EXPERIMENTDIR/outputs"

  if [ ! -f "${EXPERIMENTDIR}/outputs/${kind}-stdlib-compile-profile.csv" ]; then
    cd "$EXPERIMENTDIR/builds/${kind}"
    rm -rf build/release || true
    mkdir -p build/release
    cd build/release
    # ensure ccache is off.
    cmake ../../ -DCCACHE=OFF -DRUNTIME_STATS=ON -DCMAKE_BUILD_TYPE=Release -DLEAN_RESEARCH_COMPILER_PROFILE_CSV_PATH="/tmp/profile.csv"
    make -j40 stage1 # ensure stage1
    touch ../../src/Init/Prelude.lean # touch stdlib
    make -j40 stage0 # rebuild stage0

    # time stage1.
    rm "/tmp/profile.csv" || true
    mkdir -p "$EXPERIMENTDIR/outputs/"
    $TIME -v make -j4 stage1 2>&1 | tee "$EXPERIMENTDIR/outputs/time-${kind}-stdlib.txt" # bench build stage1
    cp "/tmp/profile.csv" "$EXPERIMENTDIR/outputs/${kind}-stdlib-compile-profile.csv" # save script.
  fi
  ntfysh "done stage1 stdlib $kind"
}


clone_baseline

for i in {0..1}; do
  clone_repo "${KINDS[i]}"
done;

for i in {0..1}; do
  build_stage0 "${KINDS[i]}"
done;
for i in {0..1}; do
  build_stage1_stdlib "${KINDS[i]}"
done;
#
#
# for i in {0..1}; do
#   build_stage2 "${KINDS[i]}"
# done;
#
# for i in {0..1}; do
#   build_stage3 "${KINDS[i]}"
# done;


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
