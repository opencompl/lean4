#!/usr/bin/env bash

sed -i "s/COMMIT_TO_BENCH=.*/COMMIT_TO_BENCH=$(git rev-parse HEAD)/g" $EXPERIMENTDIR/speedcenter-worker.sh
source speedcenter-worker.sh


mkdir -p $EXPERIMENTDIR/builds-speedcenter
for i in {0..1}; do
    run_build_for_kind "${KINDS[i]}"
done;

for i in {0..1}; do
    run_benchmark_for_kind "${KINDS[i]}"
done;

for i in {0..1}; do
  cp "$EXPERIMENTDIR/speedcenter.exec.velcom.yaml" "$EXPERIMENTDIR/builds-speedcenter/${KINDS[i]}/tests/bench/speedcenter.exec.velcom.yaml"
  run_temci_for_kind "${KINDS[i]}"
done;

