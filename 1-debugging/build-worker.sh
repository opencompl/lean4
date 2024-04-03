#!/usr/bin/env bash
set -o xtrace
basedir=../build/2024-borrowing-upstream-base
base=$basedir/stage2/bin/lean
echo "base compiler version is: $($base --version)"

if [[ $($base --version) =~ "1f4dea8" ]]; then
  echo "OK: base version matches"
else
  echo "ERR: base version does not match"
  exit 1
fi


ctest --test-dir $basedir/stage2/ -R leanruntest_lcnf1
if [[ $? == 0 ]]; then
  echo "OK: base compiler test succeeded"
else
  echo "ERR: base compiler test failed"
  exit 1
fi

newdir=../build/apr-3-enable-all
new=$newdir/stage2/bin/lean
echo "new compiler version is: $($new --version)"

if [[ $($new --version) =~  "5281a01a" ]]; then
  echo "new version matches"
else
  echo "base version does not match"
  exit 1
fi

ctest --test-dir $newdir/stage2/ -R leanruntest_lcnf1
if [[ $? == 0 ]]; then
  echo "ERR: new compiler test succeeded"
  exit 1
else
  echo "OK: new compiler test failed"
fi


rm *.txt *.diff

$new miscompile.lean 2> out-enabled-all.txt
$base miscompile.lean 2> out-base.txt

sed -n '/\def Lean.Compiler.LCNF.JoinPointCommonArgs.reduce.goReduce (/,/def /p' out-enabled-all.txt > out-minified-enabled-all.txt
sed -n '/\def Lean.Compiler.LCNF.JoinPointCommonArgs.reduce.goReduce (/,/def /p' out-base.txt > out-minified-base.txt
diff out-minified-base.txt out-minified-enabled-all.txt > out-minified-diff.diff
