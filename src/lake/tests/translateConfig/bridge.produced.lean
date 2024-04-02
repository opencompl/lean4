import Lake

open System Lake DSL

package test

require foo from "dir" with Lake.NameMap.empty |>.insert `foo "bar"

require bar from git "https://example.com"@"abc"/"sub/dir"

@[default_target] lean_lib A

@[test_runner] lean_exe b
