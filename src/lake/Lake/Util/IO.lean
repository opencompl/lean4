/-
Copyright (c) 2021 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
prelude
import Init.System.IO
import Init.Data.Option.Coe

namespace Lake

/-- Creates any missing parent directories of `path`. -/
def createParentDirs (path : System.FilePath) : IO Unit := do
  if let some dir := path.parent then IO.FS.createDirAll dir

/-- Copy a file from `src` to `dst`. -/
def copyFile (src dst : System.FilePath) : IO Unit := do
  let contents ← IO.FS.readBinFile src
  IO.FS.writeBinFile dst contents

/-- Returns the normalized real path of a file if it exists. Otherwise, returns `""`. -/
def resolvePath (path : System.FilePath) : BaseIO System.FilePath := do
  match (← (IO.FS.realPath path).toBaseIO) with
  | .ok path =>
    -- Real path does not guarantee the file exists on Windows
    if (← path.pathExists) then
      return path.normalize
    else
      return ""
  | _ =>
    return ""

/-- Returns the normalized real path of a file if and only if it exists. -/
@[inline] def resolvePath? (path : System.FilePath) : BaseIO (Option System.FilePath) := do
  let path ← resolvePath path
  return if path.toString.isEmpty then none else path
