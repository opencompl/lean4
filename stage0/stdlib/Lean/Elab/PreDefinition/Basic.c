// Lean compiler output
// Module: Lean.Elab.PreDefinition.Basic
// Imports: Init.ShareCommon Lean.Compiler.NoncomputableAttr Lean.Util.CollectLevelParams Lean.Util.NumObjs Lean.Util.NumApps Lean.PrettyPrinter Lean.Meta.AbstractNestedProofs Lean.Meta.ForEachExpr Lean.Elab.RecAppSyntax Lean.Elab.DefView Lean.Elab.PreDefinition.TerminationHint
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedPreDefinition;
extern lean_object* l_Lean_profiler;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_setMVarUserNamesAt___spec__3___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_CommandContextInfo_save___at_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_sortDeclLevelParams(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2;
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__10;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sharecommon_quick(lean_object*);
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__5;
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_addNonRec(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_div(double, double);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_levelMVarToParamPreDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2;
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3;
extern lean_object* l_Lean_noncomputableExt;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at_Lean_findField_x3f___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__4;
lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Elab_Term_mkCoe___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_abstractNestedProofs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6;
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_filterAttrs(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_fixLevelParams___closed__3;
uint8_t lean_float_decLt(double, double);
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_fixLevelParams___closed__5;
lean_object* l_Lean_profileitM___at_Lean_addDecl___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats(lean_object*);
lean_object* l_Lean_Option_register___at_Lean_initFn____x40_Lean_Util_RecDepth___hyg_6____spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo_go(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
static lean_object* l_Lean_Elab_fixLevelParams___lambda__1___closed__1;
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PreDefinition_filterAttrs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_fixLevelParams___lambda__1___closed__2;
extern lean_object* l_Lean_maxRecDepth;
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1(lean_object*, lean_object*, size_t, size_t);
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1;
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isExample(uint8_t);
lean_object* l_Lean_CollectLevelParams_main(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
extern lean_object* l_instInhabitedNat;
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_shareCommonPreDefs___closed__2;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(double, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_profileitM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyAttributesOf(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static double l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__3;
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__3;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_replace_expr(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__4;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_isTracingEnabledFor___at_Lean_compileDecl___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__1;
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1;
lean_object* l_Lean_getMaxHeight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_levelMVarToParamPreDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyAttributesOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_fixLevelParams___closed__2;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addNonRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3;
lean_object* l_Lean_Elab_Term_applyAttributesAt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_PersistentArray_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_diagnostics_threshold_proofSize;
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_outOfBounds___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Term_mkCoe___spec__2___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_fixLevelParams___closed__1;
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4;
lean_object* lean_array_to_list(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030_(lean_object*);
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4;
lean_object* lean_io_mono_nanos_now(lean_object*);
static double l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_abstractNestedProofs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Elab_InfoTree_substitute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16;
uint8_t l_Lean_hasRecAppSyntax(lean_object*);
lean_object* l_Lean_MessageData_ofConst(lean_object*);
lean_object* l_Lean_Option_set___at_Lean_Elab_Term_withoutMacroStackAtErr___spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5(lean_object*, size_t, size_t);
static lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_PrettyPrinter_Delaborator_returnsPi___spec__1___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7;
uint8_t l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_threshold;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
static double l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3;
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__2;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___boxed(lean_object**);
lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_compileDecl___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_hasRecAppSyntax___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
static lean_object* l_Lean_Elab_shareCommonPreDefs___closed__3;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2;
static lean_object* l_Lean_Elab_fixLevelParams___closed__6;
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13;
lean_object* l_Lean_Meta_forEachExpr___at_Lean_Meta_setMVarUserNamesAt___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__5;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_traceAtCmdPos___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_pp_sanitizeNames;
lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Term_withDeclName___spec__3___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntax(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9;
static lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1;
lean_object* l_Lean_indentExpr(lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2;
lean_object* l_Lean_TagDeclarationExtension_tag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__2(lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___lambda__1___boxed(lean_object*);
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3;
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__2;
lean_object* l_Lean_Expr_numApps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAsAxiom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAsAxiom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1;
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1;
lean_object* l_List_reverse___rarg(lean_object*);
static lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics_threshold;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_numObjs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___lambda__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4;
extern lean_object* l_Lean_trace_profiler;
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_compileDecl___spec__4___rarg(lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1;
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__8;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10;
uint32_t lean_uint32_add(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___boxed(lean_object**);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6;
lean_object* l_List_map___at_Lean_mkConstWithLevelParams___spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__7;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(lean_object*);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8;
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8;
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
static lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2;
lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_expandDeclId___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdataExpr_x21(lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2;
static lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isDiagnosticsEnabled(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_shareCommonPreDefs___closed__1;
static lean_object* l_Lean_Elab_fixLevelParams___closed__4;
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___boxed(lean_object**);
lean_object* l_Lean_addDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_sub(double, double);
static lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1;
lean_object* l_Lean_throwError___at_Lean_Elab_Term_expandDeclId___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; uint8_t x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = 0;
x_4 = 0;
x_5 = l_Lean_Elab_instInhabitedPreDefinition___closed__1;
x_6 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
lean_ctor_set_uint8(x_6, sizeof(void*)*2, x_2);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 1, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 2, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 3, x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Expr_bvar___override(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_1);
lean_ctor_set(x_4, 2, x_1);
lean_ctor_set(x_4, 3, x_1);
lean_ctor_set(x_4, 4, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = 0;
x_4 = l_Lean_Elab_instInhabitedPreDefinition___closed__2;
x_5 = lean_box(0);
x_6 = l_Lean_Elab_instInhabitedPreDefinition___closed__3;
x_7 = l_Lean_Elab_instInhabitedPreDefinition___closed__4;
x_8 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_1);
lean_ctor_set(x_8, 2, x_4);
lean_ctor_set(x_8, 3, x_5);
lean_ctor_set(x_8, 4, x_6);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set(x_8, 6, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*7, x_3);
return x_8;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_instInhabitedPreDefinition___closed__5;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PreDefinition_filterAttrs(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
x_5 = l_Lean_Elab_Modifiers_filterAttrs(x_4, x_2);
lean_ctor_set(x_1, 2, x_5);
return x_1;
}
else
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
x_12 = lean_ctor_get(x_1, 5);
x_13 = lean_ctor_get(x_1, 6);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_6);
lean_dec(x_1);
x_14 = l_Lean_Elab_Modifiers_filterAttrs(x_9, x_2);
x_15 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_8);
lean_ctor_set(x_15, 2, x_14);
lean_ctor_set(x_15, 3, x_10);
lean_ctor_set(x_15, 4, x_11);
lean_ctor_set(x_15, 5, x_12);
lean_ctor_set(x_15, 6, x_13);
lean_ctor_set_uint8(x_15, sizeof(void*)*7, x_7);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_lt(x_2, x_1);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_array_uget(x_3, x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_3, x_2, x_14);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; 
x_17 = lean_ctor_get(x_13, 4);
x_18 = lean_ctor_get(x_13, 5);
x_19 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_ctor_set(x_13, 5, x_23);
lean_ctor_set(x_13, 4, x_20);
x_25 = 1;
x_26 = lean_usize_add(x_2, x_25);
x_27 = lean_array_uset(x_15, x_2, x_13);
x_2 = x_26;
x_3 = x_27;
x_10 = x_24;
goto _start;
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; lean_object* x_46; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get_uint8(x_13, sizeof(void*)*7);
x_31 = lean_ctor_get(x_13, 1);
x_32 = lean_ctor_get(x_13, 2);
x_33 = lean_ctor_get(x_13, 3);
x_34 = lean_ctor_get(x_13, 4);
x_35 = lean_ctor_get(x_13, 5);
x_36 = lean_ctor_get(x_13, 6);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_29);
lean_dec(x_13);
x_37 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_34, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_35, x_4, x_5, x_6, x_7, x_8, x_9, x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_43, 0, x_29);
lean_ctor_set(x_43, 1, x_31);
lean_ctor_set(x_43, 2, x_32);
lean_ctor_set(x_43, 3, x_33);
lean_ctor_set(x_43, 4, x_38);
lean_ctor_set(x_43, 5, x_41);
lean_ctor_set(x_43, 6, x_36);
lean_ctor_set_uint8(x_43, sizeof(void*)*7, x_30);
x_44 = 1;
x_45 = lean_usize_add(x_2, x_44);
x_46 = lean_array_uset(x_15, x_2, x_43);
x_2 = x_45;
x_3 = x_46;
x_10 = x_42;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_array_size(x_1);
x_10 = 0;
x_11 = l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1(x_9, x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_instantiateMVarsAtPreDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT uint8_t l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_lt(x_2, x_1);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_array_uget(x_3, x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_3, x_2, x_14);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; 
x_17 = lean_ctor_get(x_13, 4);
x_18 = lean_ctor_get(x_13, 5);
x_19 = l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___closed__1;
x_20 = l_Lean_Elab_Term_levelMVarToParam(x_17, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Elab_Term_levelMVarToParam(x_18, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_ctor_set(x_13, 5, x_24);
lean_ctor_set(x_13, 4, x_21);
x_26 = 1;
x_27 = lean_usize_add(x_2, x_26);
x_28 = lean_array_uset(x_15, x_2, x_13);
x_2 = x_27;
x_3 = x_28;
x_10 = x_25;
goto _start;
}
else
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; size_t x_47; lean_object* x_48; 
x_30 = lean_ctor_get(x_13, 0);
x_31 = lean_ctor_get_uint8(x_13, sizeof(void*)*7);
x_32 = lean_ctor_get(x_13, 1);
x_33 = lean_ctor_get(x_13, 2);
x_34 = lean_ctor_get(x_13, 3);
x_35 = lean_ctor_get(x_13, 4);
x_36 = lean_ctor_get(x_13, 5);
x_37 = lean_ctor_get(x_13, 6);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_30);
lean_dec(x_13);
x_38 = l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___closed__1;
x_39 = l_Lean_Elab_Term_levelMVarToParam(x_35, x_38, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Elab_Term_levelMVarToParam(x_36, x_38, x_4, x_5, x_6, x_7, x_8, x_9, x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_45, 0, x_30);
lean_ctor_set(x_45, 1, x_32);
lean_ctor_set(x_45, 2, x_33);
lean_ctor_set(x_45, 3, x_34);
lean_ctor_set(x_45, 4, x_40);
lean_ctor_set(x_45, 5, x_43);
lean_ctor_set(x_45, 6, x_37);
lean_ctor_set_uint8(x_45, sizeof(void*)*7, x_31);
x_46 = 1;
x_47 = lean_usize_add(x_2, x_46);
x_48 = lean_array_uset(x_15, x_2, x_45);
x_2 = x_47;
x_3 = x_48;
x_10 = x_44;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_levelMVarToParamPreDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_array_size(x_1);
x_10 = 0;
x_11 = l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1(x_9, x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_levelMVarToParamPreDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_levelMVarToParamPreDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_3, x_2);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_14 = lean_array_uget(x_1, x_3);
x_15 = lean_ctor_get(x_14, 4);
lean_inc(x_15);
x_16 = l_Lean_CollectLevelParams_main(x_15, x_4);
x_17 = lean_ctor_get(x_14, 5);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_CollectLevelParams_main(x_17, x_16);
x_19 = 1;
x_20 = lean_usize_add(x_3, x_19);
x_3 = x_20;
x_4 = x_18;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_nextPowerOfTwo_go(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3;
x_2 = l_Lean_Elab_instInhabitedPreDefinition___closed__1;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_array_size(x_1);
x_12 = 0;
x_13 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4;
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(x_1, x_11, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_ctor_get(x_16, 2);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_sortDeclLevelParams(x_2, x_3, x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_free_object(x_14);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_ctor_set_tag(x_19, 3);
x_21 = l_Lean_MessageData_ofFormat(x_19);
x_22 = l_Lean_throwError___at_Lean_Elab_Term_expandDeclId___spec__11(x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_17);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_MessageData_ofFormat(x_24);
x_26 = l_Lean_throwError___at_Lean_Elab_Term_expandDeclId___spec__11(x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_17);
return x_26;
}
}
else
{
lean_object* x_27; 
lean_dec(x_4);
x_27 = lean_ctor_get(x_19, 0);
lean_inc(x_27);
lean_dec(x_19);
lean_ctor_set(x_14, 0, x_27);
return x_14;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_14, 0);
x_29 = lean_ctor_get(x_14, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_14);
x_30 = lean_ctor_get(x_28, 2);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Elab_sortDeclLevelParams(x_2, x_3, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 x_33 = x_31;
} else {
 lean_dec_ref(x_31);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(3, 1, 0);
} else {
 x_34 = x_33;
 lean_ctor_set_tag(x_34, 3);
}
lean_ctor_set(x_34, 0, x_32);
x_35 = l_Lean_MessageData_ofFormat(x_34);
x_36 = l_Lean_throwError___at_Lean_Elab_Term_expandDeclId___spec__11(x_35, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_4);
x_37 = lean_ctor_get(x_31, 0);
lean_inc(x_37);
lean_dec(x_31);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_29);
return x_38;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_name_eq(x_7, x_1);
lean_dec(x_7);
if (x_8 == 0)
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_3 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_array_get_size(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_box(0);
return x_8;
}
else
{
size_t x_9; size_t x_10; uint8_t x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1(x_4, x_1, x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_box(0);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Expr_const___override(x_4, x_2);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
else
{
lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_box(0);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_5, x_4);
if (x_7 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_uget(x_6, x_5);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_6, x_5, x_9);
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_8, 4);
x_13 = lean_ctor_get(x_8, 5);
x_14 = lean_ctor_get(x_8, 1);
lean_dec(x_14);
lean_inc(x_3);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1___boxed), 3, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_3);
x_16 = lean_replace_expr(x_15, x_12);
lean_dec(x_12);
x_17 = lean_replace_expr(x_15, x_13);
lean_dec(x_13);
lean_dec(x_15);
lean_inc(x_2);
lean_ctor_set(x_8, 5, x_17);
lean_ctor_set(x_8, 4, x_16);
lean_ctor_set(x_8, 1, x_2);
x_18 = 1;
x_19 = lean_usize_add(x_5, x_18);
x_20 = lean_array_uset(x_10, x_5, x_8);
x_5 = x_19;
x_6 = x_20;
goto _start;
}
else
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; size_t x_33; size_t x_34; lean_object* x_35; 
x_22 = lean_ctor_get(x_8, 0);
x_23 = lean_ctor_get_uint8(x_8, sizeof(void*)*7);
x_24 = lean_ctor_get(x_8, 2);
x_25 = lean_ctor_get(x_8, 3);
x_26 = lean_ctor_get(x_8, 4);
x_27 = lean_ctor_get(x_8, 5);
x_28 = lean_ctor_get(x_8, 6);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_22);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_1);
x_29 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1___boxed), 3, 2);
lean_closure_set(x_29, 0, x_1);
lean_closure_set(x_29, 1, x_3);
x_30 = lean_replace_expr(x_29, x_26);
lean_dec(x_26);
x_31 = lean_replace_expr(x_29, x_27);
lean_dec(x_27);
lean_dec(x_29);
lean_inc(x_2);
x_32 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_32, 0, x_22);
lean_ctor_set(x_32, 1, x_2);
lean_ctor_set(x_32, 2, x_24);
lean_ctor_set(x_32, 3, x_25);
lean_ctor_set(x_32, 4, x_30);
lean_ctor_set(x_32, 5, x_31);
lean_ctor_set(x_32, 6, x_28);
lean_ctor_set_uint8(x_32, sizeof(void*)*7, x_23);
x_33 = 1;
x_34 = lean_usize_add(x_5, x_33);
x_35 = lean_array_uset(x_10, x_5, x_32);
x_5 = x_34;
x_6 = x_35;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_11);
x_14 = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Elab_Term_mkCoe___spec__3(x_1, x_5, x_2, x_3, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_4, x_7, x_8, x_9, x_10, x_11, x_12, x_15);
lean_dec(x_11);
return x_16;
}
}
static double _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; double x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = 0;
x_3 = l_Float_ofScientific(x_1, x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_profiler;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8, double x_9, double x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
double x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
lean_inc(x_3);
lean_inc(x_1);
x_20 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_3);
lean_ctor_set_float(x_20, sizeof(void*)*2, x_19);
lean_ctor_set_float(x_20, sizeof(void*)*2 + 8, x_19);
lean_ctor_set_uint8(x_20, sizeof(void*)*2 + 16, x_2);
x_21 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__2;
x_22 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_7, x_21);
if (x_22 == 0)
{
if (x_8 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_3);
lean_dec(x_1);
x_23 = lean_box(0);
x_24 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1(x_4, x_5, x_11, x_6, x_20, x_23, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_20);
x_25 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_3);
lean_ctor_set_float(x_25, sizeof(void*)*2, x_9);
lean_ctor_set_float(x_25, sizeof(void*)*2 + 8, x_10);
lean_ctor_set_uint8(x_25, sizeof(void*)*2 + 16, x_2);
x_26 = lean_box(0);
x_27 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1(x_4, x_5, x_11, x_6, x_25, x_26, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_20);
x_28 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_3);
lean_ctor_set_float(x_28, sizeof(void*)*2, x_9);
lean_ctor_set_float(x_28, sizeof(void*)*2 + 8, x_10);
lean_ctor_set_uint8(x_28, sizeof(void*)*2 + 16, x_2);
x_29 = lean_box(0);
x_30 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1(x_4, x_5, x_11, x_6, x_28, x_29, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
return x_30;
}
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("<exception thrown while producing trace node message>", 53, 53);
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, double x_8, double x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 5);
lean_inc(x_19);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_5);
x_20 = lean_apply_8(x_10, x_5, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_19, x_5, x_6, x_7, x_8, x_9, x_21, x_12, x_13, x_14, x_15, x_16, x_17, x_22);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_5);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2;
x_26 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_19, x_5, x_6, x_7, x_8, x_9, x_25, x_12, x_13, x_14, x_15, x_16, x_17, x_24);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_5);
return x_26;
}
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler_useHeartbeats;
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler;
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler_threshold;
return x_1;
}
}
static double _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1000u);
x_2 = 0;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Float_ofScientific(x_1, x_2, x_3);
return x_4;
}
}
static double _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1000000000u);
x_2 = 0;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Float_ofScientific(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Term_mkCoe___spec__2___rarg(x_14, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1;
x_20 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_io_mono_nanos_now(x_18);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_92 = lean_apply_7(x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_91);
if (lean_obj_tag(x_92) == 0)
{
uint8_t x_93; 
x_93 = !lean_is_exclusive(x_92);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_94 = lean_ctor_get(x_92, 0);
x_95 = lean_ctor_get(x_92, 1);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_94);
x_97 = lean_io_mono_nanos_now(x_95);
x_98 = !lean_is_exclusive(x_97);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; uint8_t x_101; lean_object* x_102; double x_103; double x_104; double x_105; double x_106; double x_107; lean_object* x_108; lean_object* x_109; 
x_99 = lean_ctor_get(x_97, 0);
x_100 = lean_ctor_get(x_97, 1);
x_101 = 0;
x_102 = lean_unsigned_to_nat(0u);
x_103 = l_Float_ofScientific(x_90, x_101, x_102);
lean_dec(x_90);
x_104 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_105 = lean_float_div(x_103, x_104);
x_106 = l_Float_ofScientific(x_99, x_101, x_102);
lean_dec(x_99);
x_107 = lean_float_div(x_106, x_104);
x_108 = lean_box_float(x_105);
x_109 = lean_box_float(x_107);
lean_ctor_set(x_97, 1, x_109);
lean_ctor_set(x_97, 0, x_108);
lean_ctor_set(x_92, 1, x_97);
lean_ctor_set(x_92, 0, x_96);
x_21 = x_92;
x_22 = x_100;
goto block_88;
}
else
{
lean_object* x_110; lean_object* x_111; uint8_t x_112; lean_object* x_113; double x_114; double x_115; double x_116; double x_117; double x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_110 = lean_ctor_get(x_97, 0);
x_111 = lean_ctor_get(x_97, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_97);
x_112 = 0;
x_113 = lean_unsigned_to_nat(0u);
x_114 = l_Float_ofScientific(x_90, x_112, x_113);
lean_dec(x_90);
x_115 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_116 = lean_float_div(x_114, x_115);
x_117 = l_Float_ofScientific(x_110, x_112, x_113);
lean_dec(x_110);
x_118 = lean_float_div(x_117, x_115);
x_119 = lean_box_float(x_116);
x_120 = lean_box_float(x_118);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
lean_ctor_set(x_92, 1, x_121);
lean_ctor_set(x_92, 0, x_96);
x_21 = x_92;
x_22 = x_111;
goto block_88;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; lean_object* x_130; double x_131; double x_132; double x_133; double x_134; double x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_122 = lean_ctor_get(x_92, 0);
x_123 = lean_ctor_get(x_92, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_92);
x_124 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_124, 0, x_122);
x_125 = lean_io_mono_nanos_now(x_123);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_128 = x_125;
} else {
 lean_dec_ref(x_125);
 x_128 = lean_box(0);
}
x_129 = 0;
x_130 = lean_unsigned_to_nat(0u);
x_131 = l_Float_ofScientific(x_90, x_129, x_130);
lean_dec(x_90);
x_132 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_133 = lean_float_div(x_131, x_132);
x_134 = l_Float_ofScientific(x_126, x_129, x_130);
lean_dec(x_126);
x_135 = lean_float_div(x_134, x_132);
x_136 = lean_box_float(x_133);
x_137 = lean_box_float(x_135);
if (lean_is_scalar(x_128)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_128;
}
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_124);
lean_ctor_set(x_139, 1, x_138);
x_21 = x_139;
x_22 = x_127;
goto block_88;
}
}
else
{
uint8_t x_140; 
x_140 = !lean_is_exclusive(x_92);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
x_141 = lean_ctor_get(x_92, 0);
x_142 = lean_ctor_get(x_92, 1);
x_143 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_143, 0, x_141);
x_144 = lean_io_mono_nanos_now(x_142);
x_145 = !lean_is_exclusive(x_144);
if (x_145 == 0)
{
lean_object* x_146; lean_object* x_147; uint8_t x_148; lean_object* x_149; double x_150; double x_151; double x_152; double x_153; double x_154; lean_object* x_155; lean_object* x_156; 
x_146 = lean_ctor_get(x_144, 0);
x_147 = lean_ctor_get(x_144, 1);
x_148 = 0;
x_149 = lean_unsigned_to_nat(0u);
x_150 = l_Float_ofScientific(x_90, x_148, x_149);
lean_dec(x_90);
x_151 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_152 = lean_float_div(x_150, x_151);
x_153 = l_Float_ofScientific(x_146, x_148, x_149);
lean_dec(x_146);
x_154 = lean_float_div(x_153, x_151);
x_155 = lean_box_float(x_152);
x_156 = lean_box_float(x_154);
lean_ctor_set(x_144, 1, x_156);
lean_ctor_set(x_144, 0, x_155);
lean_ctor_set_tag(x_92, 0);
lean_ctor_set(x_92, 1, x_144);
lean_ctor_set(x_92, 0, x_143);
x_21 = x_92;
x_22 = x_147;
goto block_88;
}
else
{
lean_object* x_157; lean_object* x_158; uint8_t x_159; lean_object* x_160; double x_161; double x_162; double x_163; double x_164; double x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_157 = lean_ctor_get(x_144, 0);
x_158 = lean_ctor_get(x_144, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_144);
x_159 = 0;
x_160 = lean_unsigned_to_nat(0u);
x_161 = l_Float_ofScientific(x_90, x_159, x_160);
lean_dec(x_90);
x_162 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_163 = lean_float_div(x_161, x_162);
x_164 = l_Float_ofScientific(x_157, x_159, x_160);
lean_dec(x_157);
x_165 = lean_float_div(x_164, x_162);
x_166 = lean_box_float(x_163);
x_167 = lean_box_float(x_165);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
lean_ctor_set_tag(x_92, 0);
lean_ctor_set(x_92, 1, x_168);
lean_ctor_set(x_92, 0, x_143);
x_21 = x_92;
x_22 = x_158;
goto block_88;
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; uint8_t x_176; lean_object* x_177; double x_178; double x_179; double x_180; double x_181; double x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_169 = lean_ctor_get(x_92, 0);
x_170 = lean_ctor_get(x_92, 1);
lean_inc(x_170);
lean_inc(x_169);
lean_dec(x_92);
x_171 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_171, 0, x_169);
x_172 = lean_io_mono_nanos_now(x_170);
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_175 = x_172;
} else {
 lean_dec_ref(x_172);
 x_175 = lean_box(0);
}
x_176 = 0;
x_177 = lean_unsigned_to_nat(0u);
x_178 = l_Float_ofScientific(x_90, x_176, x_177);
lean_dec(x_90);
x_179 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_180 = lean_float_div(x_178, x_179);
x_181 = l_Float_ofScientific(x_173, x_176, x_177);
lean_dec(x_173);
x_182 = lean_float_div(x_181, x_179);
x_183 = lean_box_float(x_180);
x_184 = lean_box_float(x_182);
if (lean_is_scalar(x_175)) {
 x_185 = lean_alloc_ctor(0, 2, 0);
} else {
 x_185 = x_175;
}
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_171);
lean_ctor_set(x_186, 1, x_185);
x_21 = x_186;
x_22 = x_174;
goto block_88;
}
}
block_88:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_74; uint8_t x_75; 
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_74 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_75 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_74);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = 0;
x_27 = x_76;
goto block_73;
}
else
{
double x_77; double x_78; double x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; double x_84; double x_85; double x_86; uint8_t x_87; 
x_77 = lean_unbox_float(x_26);
x_78 = lean_unbox_float(x_25);
x_79 = lean_float_sub(x_77, x_78);
x_80 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3;
x_81 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_80);
x_82 = 0;
x_83 = lean_unsigned_to_nat(0u);
x_84 = l_Float_ofScientific(x_81, x_82, x_83);
lean_dec(x_81);
x_85 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4;
x_86 = lean_float_div(x_84, x_85);
x_87 = lean_float_decLt(x_86, x_79);
x_27 = x_87;
goto block_73;
}
block_73:
{
if (x_6 == 0)
{
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_28 = lean_st_ref_take(x_14, x_22);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = !lean_is_exclusive(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_29, 3);
x_33 = l_Lean_PersistentArray_append___rarg(x_17, x_32);
lean_dec(x_32);
lean_ctor_set(x_29, 3, x_33);
x_34 = lean_st_ref_set(x_14, x_29, x_30);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_24, x_9, x_10, x_11, x_12, x_13, x_14, x_35);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_24);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
return x_36;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_36);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_36);
if (x_41 == 0)
{
return x_36;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_36, 0);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_36);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_45 = lean_ctor_get(x_29, 0);
x_46 = lean_ctor_get(x_29, 1);
x_47 = lean_ctor_get(x_29, 2);
x_48 = lean_ctor_get(x_29, 3);
x_49 = lean_ctor_get(x_29, 4);
x_50 = lean_ctor_get(x_29, 5);
x_51 = lean_ctor_get(x_29, 6);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_29);
x_52 = l_Lean_PersistentArray_append___rarg(x_17, x_48);
lean_dec(x_48);
x_53 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_53, 0, x_45);
lean_ctor_set(x_53, 1, x_46);
lean_ctor_set(x_53, 2, x_47);
lean_ctor_set(x_53, 3, x_52);
lean_ctor_set(x_53, 4, x_49);
lean_ctor_set(x_53, 5, x_50);
lean_ctor_set(x_53, 6, x_51);
x_54 = lean_st_ref_set(x_14, x_53, x_30);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_24, x_9, x_10, x_11, x_12, x_13, x_14, x_55);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_24);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_59 = x_56;
} else {
 lean_dec_ref(x_56);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_56, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_63 = x_56;
} else {
 lean_dec_ref(x_56);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
else
{
lean_object* x_65; double x_66; double x_67; lean_object* x_68; 
x_65 = lean_box(0);
x_66 = lean_unbox_float(x_25);
lean_dec(x_25);
x_67 = lean_unbox_float(x_26);
lean_dec(x_26);
x_68 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_2, x_3, x_4, x_17, x_24, x_1, x_27, x_66, x_67, x_5, x_65, x_9, x_10, x_11, x_12, x_13, x_14, x_22);
return x_68;
}
}
else
{
lean_object* x_69; double x_70; double x_71; lean_object* x_72; 
x_69 = lean_box(0);
x_70 = lean_unbox_float(x_25);
lean_dec(x_25);
x_71 = lean_unbox_float(x_26);
lean_dec(x_26);
x_72 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_2, x_3, x_4, x_17, x_24, x_1, x_27, x_70, x_71, x_5, x_69, x_9, x_10, x_11, x_12, x_13, x_14, x_22);
return x_72;
}
}
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_253 = lean_io_get_num_heartbeats(x_18);
x_254 = lean_ctor_get(x_253, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_253, 1);
lean_inc(x_255);
lean_dec(x_253);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_256 = lean_apply_7(x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_255);
if (lean_obj_tag(x_256) == 0)
{
uint8_t x_257; 
x_257 = !lean_is_exclusive(x_256);
if (x_257 == 0)
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; uint8_t x_262; 
x_258 = lean_ctor_get(x_256, 0);
x_259 = lean_ctor_get(x_256, 1);
x_260 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_260, 0, x_258);
x_261 = lean_io_get_num_heartbeats(x_259);
x_262 = !lean_is_exclusive(x_261);
if (x_262 == 0)
{
lean_object* x_263; lean_object* x_264; uint8_t x_265; lean_object* x_266; double x_267; double x_268; lean_object* x_269; lean_object* x_270; 
x_263 = lean_ctor_get(x_261, 0);
x_264 = lean_ctor_get(x_261, 1);
x_265 = 0;
x_266 = lean_unsigned_to_nat(0u);
x_267 = l_Float_ofScientific(x_254, x_265, x_266);
lean_dec(x_254);
x_268 = l_Float_ofScientific(x_263, x_265, x_266);
lean_dec(x_263);
x_269 = lean_box_float(x_267);
x_270 = lean_box_float(x_268);
lean_ctor_set(x_261, 1, x_270);
lean_ctor_set(x_261, 0, x_269);
lean_ctor_set(x_256, 1, x_261);
lean_ctor_set(x_256, 0, x_260);
x_187 = x_256;
x_188 = x_264;
goto block_252;
}
else
{
lean_object* x_271; lean_object* x_272; uint8_t x_273; lean_object* x_274; double x_275; double x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_271 = lean_ctor_get(x_261, 0);
x_272 = lean_ctor_get(x_261, 1);
lean_inc(x_272);
lean_inc(x_271);
lean_dec(x_261);
x_273 = 0;
x_274 = lean_unsigned_to_nat(0u);
x_275 = l_Float_ofScientific(x_254, x_273, x_274);
lean_dec(x_254);
x_276 = l_Float_ofScientific(x_271, x_273, x_274);
lean_dec(x_271);
x_277 = lean_box_float(x_275);
x_278 = lean_box_float(x_276);
x_279 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_279, 0, x_277);
lean_ctor_set(x_279, 1, x_278);
lean_ctor_set(x_256, 1, x_279);
lean_ctor_set(x_256, 0, x_260);
x_187 = x_256;
x_188 = x_272;
goto block_252;
}
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; lean_object* x_288; double x_289; double x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_280 = lean_ctor_get(x_256, 0);
x_281 = lean_ctor_get(x_256, 1);
lean_inc(x_281);
lean_inc(x_280);
lean_dec(x_256);
x_282 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_282, 0, x_280);
x_283 = lean_io_get_num_heartbeats(x_281);
x_284 = lean_ctor_get(x_283, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_283, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_283)) {
 lean_ctor_release(x_283, 0);
 lean_ctor_release(x_283, 1);
 x_286 = x_283;
} else {
 lean_dec_ref(x_283);
 x_286 = lean_box(0);
}
x_287 = 0;
x_288 = lean_unsigned_to_nat(0u);
x_289 = l_Float_ofScientific(x_254, x_287, x_288);
lean_dec(x_254);
x_290 = l_Float_ofScientific(x_284, x_287, x_288);
lean_dec(x_284);
x_291 = lean_box_float(x_289);
x_292 = lean_box_float(x_290);
if (lean_is_scalar(x_286)) {
 x_293 = lean_alloc_ctor(0, 2, 0);
} else {
 x_293 = x_286;
}
lean_ctor_set(x_293, 0, x_291);
lean_ctor_set(x_293, 1, x_292);
x_294 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_294, 0, x_282);
lean_ctor_set(x_294, 1, x_293);
x_187 = x_294;
x_188 = x_285;
goto block_252;
}
}
else
{
uint8_t x_295; 
x_295 = !lean_is_exclusive(x_256);
if (x_295 == 0)
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; uint8_t x_300; 
x_296 = lean_ctor_get(x_256, 0);
x_297 = lean_ctor_get(x_256, 1);
x_298 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_298, 0, x_296);
x_299 = lean_io_get_num_heartbeats(x_297);
x_300 = !lean_is_exclusive(x_299);
if (x_300 == 0)
{
lean_object* x_301; lean_object* x_302; uint8_t x_303; lean_object* x_304; double x_305; double x_306; lean_object* x_307; lean_object* x_308; 
x_301 = lean_ctor_get(x_299, 0);
x_302 = lean_ctor_get(x_299, 1);
x_303 = 0;
x_304 = lean_unsigned_to_nat(0u);
x_305 = l_Float_ofScientific(x_254, x_303, x_304);
lean_dec(x_254);
x_306 = l_Float_ofScientific(x_301, x_303, x_304);
lean_dec(x_301);
x_307 = lean_box_float(x_305);
x_308 = lean_box_float(x_306);
lean_ctor_set(x_299, 1, x_308);
lean_ctor_set(x_299, 0, x_307);
lean_ctor_set_tag(x_256, 0);
lean_ctor_set(x_256, 1, x_299);
lean_ctor_set(x_256, 0, x_298);
x_187 = x_256;
x_188 = x_302;
goto block_252;
}
else
{
lean_object* x_309; lean_object* x_310; uint8_t x_311; lean_object* x_312; double x_313; double x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_309 = lean_ctor_get(x_299, 0);
x_310 = lean_ctor_get(x_299, 1);
lean_inc(x_310);
lean_inc(x_309);
lean_dec(x_299);
x_311 = 0;
x_312 = lean_unsigned_to_nat(0u);
x_313 = l_Float_ofScientific(x_254, x_311, x_312);
lean_dec(x_254);
x_314 = l_Float_ofScientific(x_309, x_311, x_312);
lean_dec(x_309);
x_315 = lean_box_float(x_313);
x_316 = lean_box_float(x_314);
x_317 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_317, 0, x_315);
lean_ctor_set(x_317, 1, x_316);
lean_ctor_set_tag(x_256, 0);
lean_ctor_set(x_256, 1, x_317);
lean_ctor_set(x_256, 0, x_298);
x_187 = x_256;
x_188 = x_310;
goto block_252;
}
}
else
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; uint8_t x_325; lean_object* x_326; double x_327; double x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_318 = lean_ctor_get(x_256, 0);
x_319 = lean_ctor_get(x_256, 1);
lean_inc(x_319);
lean_inc(x_318);
lean_dec(x_256);
x_320 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_320, 0, x_318);
x_321 = lean_io_get_num_heartbeats(x_319);
x_322 = lean_ctor_get(x_321, 0);
lean_inc(x_322);
x_323 = lean_ctor_get(x_321, 1);
lean_inc(x_323);
if (lean_is_exclusive(x_321)) {
 lean_ctor_release(x_321, 0);
 lean_ctor_release(x_321, 1);
 x_324 = x_321;
} else {
 lean_dec_ref(x_321);
 x_324 = lean_box(0);
}
x_325 = 0;
x_326 = lean_unsigned_to_nat(0u);
x_327 = l_Float_ofScientific(x_254, x_325, x_326);
lean_dec(x_254);
x_328 = l_Float_ofScientific(x_322, x_325, x_326);
lean_dec(x_322);
x_329 = lean_box_float(x_327);
x_330 = lean_box_float(x_328);
if (lean_is_scalar(x_324)) {
 x_331 = lean_alloc_ctor(0, 2, 0);
} else {
 x_331 = x_324;
}
lean_ctor_set(x_331, 0, x_329);
lean_ctor_set(x_331, 1, x_330);
x_332 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_332, 0, x_320);
lean_ctor_set(x_332, 1, x_331);
x_187 = x_332;
x_188 = x_323;
goto block_252;
}
}
block_252:
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; uint8_t x_193; lean_object* x_240; uint8_t x_241; 
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
x_190 = lean_ctor_get(x_187, 0);
lean_inc(x_190);
lean_dec(x_187);
x_191 = lean_ctor_get(x_189, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_189, 1);
lean_inc(x_192);
lean_dec(x_189);
x_240 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_241 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_240);
if (x_241 == 0)
{
uint8_t x_242; 
x_242 = 0;
x_193 = x_242;
goto block_239;
}
else
{
double x_243; double x_244; double x_245; lean_object* x_246; lean_object* x_247; uint8_t x_248; lean_object* x_249; double x_250; uint8_t x_251; 
x_243 = lean_unbox_float(x_192);
x_244 = lean_unbox_float(x_191);
x_245 = lean_float_sub(x_243, x_244);
x_246 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3;
x_247 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_246);
x_248 = 0;
x_249 = lean_unsigned_to_nat(0u);
x_250 = l_Float_ofScientific(x_247, x_248, x_249);
lean_dec(x_247);
x_251 = lean_float_decLt(x_250, x_245);
x_193 = x_251;
goto block_239;
}
block_239:
{
if (x_6 == 0)
{
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; uint8_t x_197; 
lean_dec(x_192);
lean_dec(x_191);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_194 = lean_st_ref_take(x_14, x_188);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
x_197 = !lean_is_exclusive(x_195);
if (x_197 == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_198 = lean_ctor_get(x_195, 3);
x_199 = l_Lean_PersistentArray_append___rarg(x_17, x_198);
lean_dec(x_198);
lean_ctor_set(x_195, 3, x_199);
x_200 = lean_st_ref_set(x_14, x_195, x_196);
x_201 = lean_ctor_get(x_200, 1);
lean_inc(x_201);
lean_dec(x_200);
x_202 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_190, x_9, x_10, x_11, x_12, x_13, x_14, x_201);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_190);
if (lean_obj_tag(x_202) == 0)
{
uint8_t x_203; 
x_203 = !lean_is_exclusive(x_202);
if (x_203 == 0)
{
return x_202;
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_204 = lean_ctor_get(x_202, 0);
x_205 = lean_ctor_get(x_202, 1);
lean_inc(x_205);
lean_inc(x_204);
lean_dec(x_202);
x_206 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_206, 0, x_204);
lean_ctor_set(x_206, 1, x_205);
return x_206;
}
}
else
{
uint8_t x_207; 
x_207 = !lean_is_exclusive(x_202);
if (x_207 == 0)
{
return x_202;
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_202, 0);
x_209 = lean_ctor_get(x_202, 1);
lean_inc(x_209);
lean_inc(x_208);
lean_dec(x_202);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_208);
lean_ctor_set(x_210, 1, x_209);
return x_210;
}
}
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_211 = lean_ctor_get(x_195, 0);
x_212 = lean_ctor_get(x_195, 1);
x_213 = lean_ctor_get(x_195, 2);
x_214 = lean_ctor_get(x_195, 3);
x_215 = lean_ctor_get(x_195, 4);
x_216 = lean_ctor_get(x_195, 5);
x_217 = lean_ctor_get(x_195, 6);
lean_inc(x_217);
lean_inc(x_216);
lean_inc(x_215);
lean_inc(x_214);
lean_inc(x_213);
lean_inc(x_212);
lean_inc(x_211);
lean_dec(x_195);
x_218 = l_Lean_PersistentArray_append___rarg(x_17, x_214);
lean_dec(x_214);
x_219 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_219, 0, x_211);
lean_ctor_set(x_219, 1, x_212);
lean_ctor_set(x_219, 2, x_213);
lean_ctor_set(x_219, 3, x_218);
lean_ctor_set(x_219, 4, x_215);
lean_ctor_set(x_219, 5, x_216);
lean_ctor_set(x_219, 6, x_217);
x_220 = lean_st_ref_set(x_14, x_219, x_196);
x_221 = lean_ctor_get(x_220, 1);
lean_inc(x_221);
lean_dec(x_220);
x_222 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_190, x_9, x_10, x_11, x_12, x_13, x_14, x_221);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_190);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_223 = lean_ctor_get(x_222, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_222, 1);
lean_inc(x_224);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 x_225 = x_222;
} else {
 lean_dec_ref(x_222);
 x_225 = lean_box(0);
}
if (lean_is_scalar(x_225)) {
 x_226 = lean_alloc_ctor(0, 2, 0);
} else {
 x_226 = x_225;
}
lean_ctor_set(x_226, 0, x_223);
lean_ctor_set(x_226, 1, x_224);
return x_226;
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_227 = lean_ctor_get(x_222, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_222, 1);
lean_inc(x_228);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 x_229 = x_222;
} else {
 lean_dec_ref(x_222);
 x_229 = lean_box(0);
}
if (lean_is_scalar(x_229)) {
 x_230 = lean_alloc_ctor(1, 2, 0);
} else {
 x_230 = x_229;
}
lean_ctor_set(x_230, 0, x_227);
lean_ctor_set(x_230, 1, x_228);
return x_230;
}
}
}
else
{
lean_object* x_231; double x_232; double x_233; lean_object* x_234; 
x_231 = lean_box(0);
x_232 = lean_unbox_float(x_191);
lean_dec(x_191);
x_233 = lean_unbox_float(x_192);
lean_dec(x_192);
x_234 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_2, x_3, x_4, x_17, x_190, x_1, x_193, x_232, x_233, x_5, x_231, x_9, x_10, x_11, x_12, x_13, x_14, x_188);
return x_234;
}
}
else
{
lean_object* x_235; double x_236; double x_237; lean_object* x_238; 
x_235 = lean_box(0);
x_236 = lean_unbox_float(x_191);
lean_dec(x_191);
x_237 = lean_unbox_float(x_192);
lean_dec(x_192);
x_238 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_2, x_3, x_4, x_17, x_190, x_1, x_193, x_236, x_237, x_5, x_235, x_9, x_10, x_11, x_12, x_13, x_14, x_188);
return x_238;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_10, 2);
lean_inc(x_13);
lean_inc(x_1);
x_14 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_19 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_13, x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_20 = lean_apply_7(x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_17);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_29 = lean_box(0);
x_30 = lean_unbox(x_15);
lean_dec(x_15);
x_31 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4(x_13, x_1, x_4, x_5, x_2, x_30, x_3, x_29, x_6, x_7, x_8, x_9, x_10, x_11, x_17);
lean_dec(x_13);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_dec(x_14);
x_33 = lean_box(0);
x_34 = lean_unbox(x_15);
lean_dec(x_15);
x_35 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4(x_13, x_1, x_4, x_5, x_2, x_34, x_3, x_33, x_6, x_7, x_8, x_9, x_10, x_11, x_32);
lean_dec(x_13);
return x_35;
}
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("fix level params", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_fixLevelParams___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Elab_fixLevelParams___lambda__1___closed__2;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = l_List_map___at_Lean_mkConstWithLevelParams___spec__1(x_13);
x_15 = lean_array_size(x_1);
x_16 = 0;
lean_inc(x_1);
x_17 = l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_13, x_14, x_15, x_16, x_1);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_11);
lean_inc(x_18);
x_20 = l_List_map___at_Lean_mkConstWithLevelParams___spec__1(x_18);
x_21 = lean_array_size(x_1);
x_22 = 0;
lean_inc(x_1);
x_23 = l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_18, x_20, x_21, x_22, x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_11);
if (x_25 == 0)
{
return x_11;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_11, 0);
x_27 = lean_ctor_get(x_11, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_11);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Elab", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("def", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("fixLevelParams", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_fixLevelParams___closed__1;
x_2 = l_Lean_Elab_fixLevelParams___closed__2;
x_3 = l_Lean_Elab_fixLevelParams___closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_fixLevelParams___lambda__1___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_8, 2);
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_fixLevelParams___lambda__2___boxed), 10, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
x_13 = l_Lean_Elab_fixLevelParams___closed__4;
x_14 = l_Lean_Elab_fixLevelParams___closed__5;
x_15 = 1;
x_16 = l_Lean_Elab_fixLevelParams___closed__6;
x_17 = lean_box(x_15);
x_18 = lean_alloc_closure((void*)(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___boxed), 12, 5);
lean_closure_set(x_18, 0, x_13);
lean_closure_set(x_18, 1, x_14);
lean_closure_set(x_18, 2, x_12);
lean_closure_set(x_18, 3, x_17);
lean_closure_set(x_18, 4, x_16);
x_19 = l_Lean_Elab_fixLevelParams___lambda__1___closed__1;
x_20 = lean_box(0);
x_21 = l_Lean_profileitM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__11___rarg(x_19, x_11, x_18, x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_11);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; uint8_t x_20; double x_21; double x_22; lean_object* x_23; 
x_19 = lean_unbox(x_2);
lean_dec(x_2);
x_20 = lean_unbox(x_8);
lean_dec(x_8);
x_21 = lean_unbox_float(x_9);
lean_dec(x_9);
x_22 = lean_unbox_float(x_10);
lean_dec(x_10);
x_23 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2(x_1, x_19, x_3, x_4, x_5, x_6, x_7, x_20, x_21, x_22, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; uint8_t x_20; double x_21; double x_22; lean_object* x_23; 
x_19 = lean_unbox(x_2);
lean_dec(x_2);
x_20 = lean_unbox(x_7);
lean_dec(x_7);
x_21 = lean_unbox_float(x_8);
lean_dec(x_8);
x_22 = lean_unbox_float(x_9);
lean_dec(x_9);
x_23 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_1, x_19, x_3, x_4, x_5, x_6, x_20, x_21, x_22, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_11);
lean_dec(x_6);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_unbox(x_3);
lean_dec(x_3);
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4(x_1, x_2, x_16, x_4, x_5, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_fixLevelParams___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_fixLevelParams___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(uint8_t x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
x_15 = lean_array_uget(x_2, x_4);
x_16 = lean_ctor_get(x_15, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 2);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = l_Lean_Elab_Term_applyAttributesAt(x_16, x_18, x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = 1;
x_22 = lean_usize_add(x_4, x_21);
x_23 = lean_box(0);
x_4 = x_22;
x_5 = x_23;
x_12 = x_20;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyAttributesOf(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_array_size(x_1);
x_11 = 0;
x_12 = lean_box(0);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(x_2, x_1, x_10, x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; size_t x_14; size_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_16 = l_Array_forInUnsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(x_13, x_2, x_14, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyAttributesOf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Elab_applyAttributesOf(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_abstractNestedProofs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 4);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 5);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 6);
lean_inc(x_14);
x_15 = l_Lean_Elab_DefKind_isTheorem(x_8);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = l_Lean_Elab_DefKind_isExample(x_8);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_1);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_18 = lean_ctor_get(x_1, 6);
lean_dec(x_18);
x_19 = lean_ctor_get(x_1, 5);
lean_dec(x_19);
x_20 = lean_ctor_get(x_1, 4);
lean_dec(x_20);
x_21 = lean_ctor_get(x_1, 3);
lean_dec(x_21);
x_22 = lean_ctor_get(x_1, 2);
lean_dec(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = !lean_is_exclusive(x_4);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_4, 5);
x_27 = l_Lean_replaceRef(x_7, x_26);
lean_dec(x_26);
lean_ctor_set(x_4, 5, x_27);
lean_inc(x_11);
x_28 = l_Lean_Meta_abstractNestedProofs(x_11, x_13, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_ctor_set(x_1, 5, x_30);
lean_ctor_set(x_28, 0, x_1);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_28, 0);
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_28);
lean_ctor_set(x_1, 5, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_free_object(x_1);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_28, 0);
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_28);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_38 = lean_ctor_get(x_4, 0);
x_39 = lean_ctor_get(x_4, 1);
x_40 = lean_ctor_get(x_4, 2);
x_41 = lean_ctor_get(x_4, 3);
x_42 = lean_ctor_get(x_4, 4);
x_43 = lean_ctor_get(x_4, 5);
x_44 = lean_ctor_get(x_4, 6);
x_45 = lean_ctor_get(x_4, 7);
x_46 = lean_ctor_get(x_4, 8);
x_47 = lean_ctor_get(x_4, 9);
x_48 = lean_ctor_get(x_4, 10);
x_49 = lean_ctor_get_uint8(x_4, sizeof(void*)*12);
x_50 = lean_ctor_get(x_4, 11);
x_51 = lean_ctor_get_uint8(x_4, sizeof(void*)*12 + 1);
lean_inc(x_50);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_4);
x_52 = l_Lean_replaceRef(x_7, x_43);
lean_dec(x_43);
x_53 = lean_alloc_ctor(0, 12, 2);
lean_ctor_set(x_53, 0, x_38);
lean_ctor_set(x_53, 1, x_39);
lean_ctor_set(x_53, 2, x_40);
lean_ctor_set(x_53, 3, x_41);
lean_ctor_set(x_53, 4, x_42);
lean_ctor_set(x_53, 5, x_52);
lean_ctor_set(x_53, 6, x_44);
lean_ctor_set(x_53, 7, x_45);
lean_ctor_set(x_53, 8, x_46);
lean_ctor_set(x_53, 9, x_47);
lean_ctor_set(x_53, 10, x_48);
lean_ctor_set(x_53, 11, x_50);
lean_ctor_set_uint8(x_53, sizeof(void*)*12, x_49);
lean_ctor_set_uint8(x_53, sizeof(void*)*12 + 1, x_51);
lean_inc(x_11);
x_54 = l_Lean_Meta_abstractNestedProofs(x_11, x_13, x_2, x_3, x_53, x_5, x_6);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_57 = x_54;
} else {
 lean_dec_ref(x_54);
 x_57 = lean_box(0);
}
lean_ctor_set(x_1, 5, x_55);
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_1);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_free_object(x_1);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
x_59 = lean_ctor_get(x_54, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_54, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_61 = x_54;
} else {
 lean_dec_ref(x_54);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_1);
x_63 = lean_ctor_get(x_4, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_4, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_4, 2);
lean_inc(x_65);
x_66 = lean_ctor_get(x_4, 3);
lean_inc(x_66);
x_67 = lean_ctor_get(x_4, 4);
lean_inc(x_67);
x_68 = lean_ctor_get(x_4, 5);
lean_inc(x_68);
x_69 = lean_ctor_get(x_4, 6);
lean_inc(x_69);
x_70 = lean_ctor_get(x_4, 7);
lean_inc(x_70);
x_71 = lean_ctor_get(x_4, 8);
lean_inc(x_71);
x_72 = lean_ctor_get(x_4, 9);
lean_inc(x_72);
x_73 = lean_ctor_get(x_4, 10);
lean_inc(x_73);
x_74 = lean_ctor_get_uint8(x_4, sizeof(void*)*12);
x_75 = lean_ctor_get(x_4, 11);
lean_inc(x_75);
x_76 = lean_ctor_get_uint8(x_4, sizeof(void*)*12 + 1);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 lean_ctor_release(x_4, 3);
 lean_ctor_release(x_4, 4);
 lean_ctor_release(x_4, 5);
 lean_ctor_release(x_4, 6);
 lean_ctor_release(x_4, 7);
 lean_ctor_release(x_4, 8);
 lean_ctor_release(x_4, 9);
 lean_ctor_release(x_4, 10);
 lean_ctor_release(x_4, 11);
 x_77 = x_4;
} else {
 lean_dec_ref(x_4);
 x_77 = lean_box(0);
}
x_78 = l_Lean_replaceRef(x_7, x_68);
lean_dec(x_68);
if (lean_is_scalar(x_77)) {
 x_79 = lean_alloc_ctor(0, 12, 2);
} else {
 x_79 = x_77;
}
lean_ctor_set(x_79, 0, x_63);
lean_ctor_set(x_79, 1, x_64);
lean_ctor_set(x_79, 2, x_65);
lean_ctor_set(x_79, 3, x_66);
lean_ctor_set(x_79, 4, x_67);
lean_ctor_set(x_79, 5, x_78);
lean_ctor_set(x_79, 6, x_69);
lean_ctor_set(x_79, 7, x_70);
lean_ctor_set(x_79, 8, x_71);
lean_ctor_set(x_79, 9, x_72);
lean_ctor_set(x_79, 10, x_73);
lean_ctor_set(x_79, 11, x_75);
lean_ctor_set_uint8(x_79, sizeof(void*)*12, x_74);
lean_ctor_set_uint8(x_79, sizeof(void*)*12 + 1, x_76);
lean_inc(x_11);
x_80 = l_Lean_Meta_abstractNestedProofs(x_11, x_13, x_2, x_3, x_79, x_5, x_6);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_83 = x_80;
} else {
 lean_dec_ref(x_80);
 x_83 = lean_box(0);
}
x_84 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_84, 0, x_7);
lean_ctor_set(x_84, 1, x_9);
lean_ctor_set(x_84, 2, x_10);
lean_ctor_set(x_84, 3, x_11);
lean_ctor_set(x_84, 4, x_12);
lean_ctor_set(x_84, 5, x_81);
lean_ctor_set(x_84, 6, x_14);
lean_ctor_set_uint8(x_84, sizeof(void*)*7, x_8);
if (lean_is_scalar(x_83)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_83;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_82);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
x_86 = lean_ctor_get(x_80, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_80, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_88 = x_80;
} else {
 lean_dec_ref(x_80);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
}
else
{
lean_object* x_90; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_1);
lean_ctor_set(x_90, 1, x_6);
return x_90;
}
}
else
{
lean_object* x_91; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_1);
lean_ctor_set(x_91, 1, x_6);
return x_91;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAsAxiom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 3);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*2 + 3);
x_14 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set_uint8(x_14, sizeof(void*)*1, x_13);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = !lean_is_exclusive(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_4, 5);
x_18 = l_Lean_replaceRef(x_7, x_17);
lean_dec(x_17);
lean_ctor_set(x_4, 5, x_18);
x_19 = l_Lean_addDecl(x_15, x_4, x_5, x_6);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_ctor_get(x_4, 1);
x_22 = lean_ctor_get(x_4, 2);
x_23 = lean_ctor_get(x_4, 3);
x_24 = lean_ctor_get(x_4, 4);
x_25 = lean_ctor_get(x_4, 5);
x_26 = lean_ctor_get(x_4, 6);
x_27 = lean_ctor_get(x_4, 7);
x_28 = lean_ctor_get(x_4, 8);
x_29 = lean_ctor_get(x_4, 9);
x_30 = lean_ctor_get(x_4, 10);
x_31 = lean_ctor_get_uint8(x_4, sizeof(void*)*12);
x_32 = lean_ctor_get(x_4, 11);
x_33 = lean_ctor_get_uint8(x_4, sizeof(void*)*12 + 1);
lean_inc(x_32);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_4);
x_34 = l_Lean_replaceRef(x_7, x_25);
lean_dec(x_25);
x_35 = lean_alloc_ctor(0, 12, 2);
lean_ctor_set(x_35, 0, x_20);
lean_ctor_set(x_35, 1, x_21);
lean_ctor_set(x_35, 2, x_22);
lean_ctor_set(x_35, 3, x_23);
lean_ctor_set(x_35, 4, x_24);
lean_ctor_set(x_35, 5, x_34);
lean_ctor_set(x_35, 6, x_26);
lean_ctor_set(x_35, 7, x_27);
lean_ctor_set(x_35, 8, x_28);
lean_ctor_set(x_35, 9, x_29);
lean_ctor_set(x_35, 10, x_30);
lean_ctor_set(x_35, 11, x_32);
lean_ctor_set_uint8(x_35, sizeof(void*)*12, x_31);
lean_ctor_set_uint8(x_35, sizeof(void*)*12 + 1, x_33);
x_36 = l_Lean_addDecl(x_15, x_35, x_5, x_6);
return x_36;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAsAxiom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_addAsAxiom(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_3 = l_Lean_Elab_DefKind_isTheorem(x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_ctor_get_uint8(x_4, sizeof(void*)*2 + 1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 1;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___lambda__1___boxed), 8, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
x_9 = l_Lean_compileDecl(x_1, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___closed__1;
x_13 = lean_apply_8(x_12, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = l_Lean_Exception_isInterrupt(x_15);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = l_Lean_Exception_isRuntime(x_15);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = lean_ctor_get_uint8(x_2, sizeof(void*)*9 + 5);
lean_dec(x_2);
if (x_18 == 0)
{
return x_9;
}
else
{
uint8_t x_19; lean_object* x_20; 
lean_dec(x_15);
x_19 = 0;
x_20 = lean_box(x_19);
lean_ctor_set_tag(x_9, 0);
lean_ctor_set(x_9, 0, x_20);
return x_9;
}
}
else
{
lean_dec(x_2);
return x_9;
}
}
else
{
lean_dec(x_2);
return x_9;
}
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_23 = l_Lean_Exception_isInterrupt(x_21);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = l_Lean_Exception_isRuntime(x_21);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = lean_ctor_get_uint8(x_2, sizeof(void*)*9 + 5);
lean_dec(x_2);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
else
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_21);
x_27 = 0;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_22);
return x_29;
}
}
else
{
lean_object* x_30; 
lean_dec(x_2);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_21);
lean_ctor_set(x_30, 1, x_22);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_dec(x_2);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_21);
lean_ctor_set(x_31, 1, x_22);
return x_31;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("diagnostics", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("threshold", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("proofSize", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__1;
x_2 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__2;
x_3 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("only display proof statistics when proof has at least this number of terms", 74, 74);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(16384u);
x_2 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__1;
x_3 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__5;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__7;
x_2 = l_Lean_Elab_fixLevelParams___closed__1;
x_3 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__1;
x_4 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__2;
x_5 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__3;
x_6 = l_Lean_Name_mkStr5(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__4;
x_3 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__6;
x_4 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__8;
x_5 = l_Lean_Option_register___at_Lean_initFn____x40_Lean_Util_RecDepth___hyg_6____spec__1(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("occs", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ↦ ", 5, 3);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(double x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_lt(x_5, x_4);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_array_uget(x_6, x_5);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_uset(x_6, x_5, x_17);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_7);
x_22 = l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_expandDeclId___spec__7(x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; size_t x_38; size_t x_39; lean_object* x_40; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2;
x_26 = 1;
x_27 = l_Lean_Elab_fixLevelParams___closed__6;
x_28 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set_float(x_28, sizeof(void*)*2, x_1);
lean_ctor_set_float(x_28, sizeof(void*)*2 + 8, x_1);
lean_ctor_set_uint8(x_28, sizeof(void*)*2 + 16, x_26);
x_29 = l_Lean_MessageData_ofConst(x_23);
lean_inc(x_2);
lean_ctor_set_tag(x_16, 7);
lean_ctor_set(x_16, 1, x_29);
lean_ctor_set(x_16, 0, x_2);
x_30 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4;
x_31 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_31, 0, x_16);
lean_ctor_set(x_31, 1, x_30);
x_32 = l___private_Init_Data_Repr_0__Nat_reprFast(x_21);
x_33 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = l_Lean_MessageData_ofFormat(x_33);
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_31);
lean_ctor_set(x_35, 1, x_34);
lean_inc(x_2);
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_2);
lean_inc(x_3);
x_37 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_37, 0, x_28);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_37, 2, x_3);
x_38 = 1;
x_39 = lean_usize_add(x_5, x_38);
x_40 = lean_array_uset(x_18, x_5, x_37);
x_5 = x_39;
x_6 = x_40;
x_13 = x_24;
goto _start;
}
else
{
uint8_t x_42; 
lean_free_object(x_16);
lean_dec(x_21);
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_22);
if (x_42 == 0)
{
return x_22;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_22, 0);
x_44 = lean_ctor_get(x_22, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_22);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_16, 0);
x_47 = lean_ctor_get(x_16, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_16);
lean_inc(x_7);
x_48 = l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_expandDeclId___spec__7(x_46, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; size_t x_65; size_t x_66; lean_object* x_67; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2;
x_52 = 1;
x_53 = l_Lean_Elab_fixLevelParams___closed__6;
x_54 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
lean_ctor_set_float(x_54, sizeof(void*)*2, x_1);
lean_ctor_set_float(x_54, sizeof(void*)*2 + 8, x_1);
lean_ctor_set_uint8(x_54, sizeof(void*)*2 + 16, x_52);
x_55 = l_Lean_MessageData_ofConst(x_49);
lean_inc(x_2);
x_56 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_56, 0, x_2);
lean_ctor_set(x_56, 1, x_55);
x_57 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4;
x_58 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = l___private_Init_Data_Repr_0__Nat_reprFast(x_47);
x_60 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = l_Lean_MessageData_ofFormat(x_60);
x_62 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_62, 0, x_58);
lean_ctor_set(x_62, 1, x_61);
lean_inc(x_2);
x_63 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_2);
lean_inc(x_3);
x_64 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_64, 0, x_54);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_64, 2, x_3);
x_65 = 1;
x_66 = lean_usize_add(x_5, x_65);
x_67 = lean_array_uset(x_18, x_5, x_64);
x_5 = x_66;
x_6 = x_67;
x_13 = x_50;
goto _start;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_47);
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_69 = lean_ctor_get(x_48, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_48, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_71 = x_48;
} else {
 lean_dec_ref(x_48);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_diagnostics_threshold_proofSize;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("size", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4() {
_start:
{
lean_object* x_1; double x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3;
x_2 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
x_3 = 1;
x_4 = l_Lean_Elab_fixLevelParams___closed__6;
x_5 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set_float(x_5, sizeof(void*)*2, x_2);
lean_ctor_set_float(x_5, sizeof(void*)*2 + 8, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*2 + 16, x_3);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_fixLevelParams___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_diagnostics_threshold;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("theorem", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9() {
_start:
{
lean_object* x_1; double x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8;
x_2 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
x_3 = 1;
x_4 = l_Lean_Elab_fixLevelParams___closed__6;
x_5 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set_float(x_5, sizeof(void*)*2, x_2);
lean_ctor_set_float(x_5, sizeof(void*)*2 + 8, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*2 + 16, x_3);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_isDiagnosticsEnabled(x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_dec(x_9);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_19);
x_20 = l_Lean_Expr_numObjs(x_19, x_18);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = lean_ctor_get(x_6, 2);
lean_inc(x_24);
x_25 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1;
x_26 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_24, x_25);
x_27 = lean_nat_dec_lt(x_26, x_22);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_box(0);
lean_ctor_set(x_20, 0, x_28);
return x_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_free_object(x_20);
x_29 = l___private_Init_Data_Repr_0__Nat_reprFast(x_22);
x_30 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = l_Lean_MessageData_ofFormat(x_30);
x_32 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4;
x_36 = l_Lean_Elab_instInhabitedPreDefinition___closed__1;
x_37 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_36);
x_38 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6;
x_39 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_24, x_38);
lean_dec(x_24);
x_40 = l_Lean_Expr_numApps(x_19, x_39, x_23);
lean_dec(x_39);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; double x_46; lean_object* x_47; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_ctor_get(x_40, 1);
x_44 = lean_array_size(x_42);
x_45 = 0;
x_46 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
lean_inc(x_2);
x_47 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(x_46, x_32, x_36, x_44, x_45, x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_43);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
lean_dec(x_1);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
lean_dec(x_50);
x_52 = l_Lean_MessageData_ofName(x_51);
lean_ctor_set_tag(x_40, 7);
lean_ctor_set(x_40, 1, x_52);
lean_ctor_set(x_40, 0, x_32);
x_53 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_53, 0, x_40);
lean_ctor_set(x_53, 1, x_32);
x_54 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__10;
x_55 = lean_array_push(x_54, x_37);
x_56 = l_Array_append___rarg(x_55, x_48);
lean_dec(x_48);
x_57 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9;
x_58 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_53);
lean_ctor_set(x_58, 2, x_56);
x_59 = 0;
x_60 = l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(x_58, x_59, x_2, x_3, x_4, x_5, x_6, x_7, x_49);
lean_dec(x_2);
return x_60;
}
else
{
uint8_t x_61; 
lean_free_object(x_40);
lean_dec(x_37);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_61 = !lean_is_exclusive(x_47);
if (x_61 == 0)
{
return x_47;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_47, 0);
x_63 = lean_ctor_get(x_47, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_47);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; size_t x_67; size_t x_68; double x_69; lean_object* x_70; 
x_65 = lean_ctor_get(x_40, 0);
x_66 = lean_ctor_get(x_40, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_40);
x_67 = lean_array_size(x_65);
x_68 = 0;
x_69 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
lean_inc(x_2);
x_70 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(x_69, x_32, x_36, x_67, x_68, x_65, x_2, x_3, x_4, x_5, x_6, x_7, x_66);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_1, 0);
lean_inc(x_73);
lean_dec(x_1);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
lean_dec(x_73);
x_75 = l_Lean_MessageData_ofName(x_74);
x_76 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_76, 0, x_32);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_32);
x_78 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__10;
x_79 = lean_array_push(x_78, x_37);
x_80 = l_Array_append___rarg(x_79, x_71);
lean_dec(x_71);
x_81 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9;
x_82 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_77);
lean_ctor_set(x_82, 2, x_80);
x_83 = 0;
x_84 = l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(x_82, x_83, x_2, x_3, x_4, x_5, x_6, x_7, x_72);
lean_dec(x_2);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_37);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_85 = lean_ctor_get(x_70, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_70, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_87 = x_70;
} else {
 lean_dec_ref(x_70);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_89 = lean_ctor_get(x_20, 0);
x_90 = lean_ctor_get(x_20, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_20);
x_91 = lean_ctor_get(x_6, 2);
lean_inc(x_91);
x_92 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1;
x_93 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_91, x_92);
x_94 = lean_nat_dec_lt(x_93, x_89);
lean_dec(x_93);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; 
lean_dec(x_91);
lean_dec(x_89);
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_95 = lean_box(0);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_90);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; size_t x_112; size_t x_113; double x_114; lean_object* x_115; 
x_97 = l___private_Init_Data_Repr_0__Nat_reprFast(x_89);
x_98 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_99 = l_Lean_MessageData_ofFormat(x_98);
x_100 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
x_101 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
x_102 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
x_103 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4;
x_104 = l_Lean_Elab_instInhabitedPreDefinition___closed__1;
x_105 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_102);
lean_ctor_set(x_105, 2, x_104);
x_106 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6;
x_107 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_91, x_106);
lean_dec(x_91);
x_108 = l_Lean_Expr_numApps(x_19, x_107, x_90);
lean_dec(x_107);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_111 = x_108;
} else {
 lean_dec_ref(x_108);
 x_111 = lean_box(0);
}
x_112 = lean_array_size(x_109);
x_113 = 0;
x_114 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
lean_inc(x_2);
x_115 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(x_114, x_100, x_104, x_112, x_113, x_109, x_2, x_3, x_4, x_5, x_6, x_7, x_110);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; lean_object* x_129; 
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = lean_ctor_get(x_1, 0);
lean_inc(x_118);
lean_dec(x_1);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
lean_dec(x_118);
x_120 = l_Lean_MessageData_ofName(x_119);
if (lean_is_scalar(x_111)) {
 x_121 = lean_alloc_ctor(7, 2, 0);
} else {
 x_121 = x_111;
 lean_ctor_set_tag(x_121, 7);
}
lean_ctor_set(x_121, 0, x_100);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_100);
x_123 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__10;
x_124 = lean_array_push(x_123, x_105);
x_125 = l_Array_append___rarg(x_124, x_116);
lean_dec(x_116);
x_126 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9;
x_127 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_122);
lean_ctor_set(x_127, 2, x_125);
x_128 = 0;
x_129 = l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(x_127, x_128, x_2, x_3, x_4, x_5, x_6, x_7, x_117);
lean_dec(x_2);
return x_129;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_111);
lean_dec(x_105);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_130 = lean_ctor_get(x_115, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_115, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_115)) {
 lean_ctor_release(x_115, 0);
 lean_ctor_release(x_115, 1);
 x_132 = x_115;
} else {
 lean_dec_ref(x_115);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 2, 0);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
double x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_14 = lean_unbox_float(x_1);
lean_dec(x_1);
x_15 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_16 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_17 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(x_14, x_2, x_3, x_15, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_17;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__4(x_1, x_2, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = lean_usize_add(x_4, x_21);
x_23 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_22;
x_5 = x_23;
x_12 = x_20;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
return x_18;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = l_Lean_Elab_InfoTree_substitute(x_15, x_18);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = lean_apply_7(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = lean_usize_add(x_4, x_23);
x_25 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_24;
x_5 = x_25;
x_12 = x_22;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
x_30 = 1;
x_31 = lean_usize_add(x_4, x_30);
x_32 = lean_array_uset(x_17, x_4, x_29);
x_4 = x_31;
x_5 = x_32;
x_12 = x_27;
goto _start;
}
}
else
{
uint8_t x_34; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_array_size(x_12);
x_14 = 0;
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5(x_1, x_2, x_13, x_14, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_3, 0, x_17);
lean_ctor_set(x_15, 0, x_3);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_free_object(x_3);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_3, 0);
lean_inc(x_25);
lean_dec(x_3);
x_26 = lean_array_size(x_25);
x_27 = 0;
x_28 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5(x_1, x_2, x_26, x_27, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_29);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_28, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_36 = x_28;
} else {
 lean_dec_ref(x_28);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(1, 2, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_3);
if (x_38 == 0)
{
lean_object* x_39; size_t x_40; size_t x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_array_size(x_39);
x_41 = 0;
x_42 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6(x_1, x_2, x_40, x_41, x_39, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_ctor_set(x_3, 0, x_44);
lean_ctor_set(x_42, 0, x_3);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_42, 0);
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_42);
lean_ctor_set(x_3, 0, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_3);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_free_object(x_3);
x_48 = !lean_is_exclusive(x_42);
if (x_48 == 0)
{
return x_42;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_42, 0);
x_50 = lean_ctor_get(x_42, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_42);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; size_t x_53; size_t x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_3, 0);
lean_inc(x_52);
lean_dec(x_3);
x_53 = lean_array_size(x_52);
x_54 = 0;
x_55 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6(x_1, x_2, x_53, x_54, x_52, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_56);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_55, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_55, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_63 = x_55;
} else {
 lean_dec_ref(x_55);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = l_Lean_Elab_InfoTree_substitute(x_15, x_18);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = lean_apply_7(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = lean_usize_add(x_4, x_23);
x_25 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_24;
x_5 = x_25;
x_12 = x_22;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
x_30 = 1;
x_31 = lean_usize_add(x_4, x_30);
x_32 = lean_array_uset(x_17, x_4, x_29);
x_4 = x_31;
x_5 = x_32;
x_12 = x_27;
goto _start;
}
}
else
{
uint8_t x_34; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_3, 2);
x_15 = lean_ctor_get(x_3, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__4(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_size(x_13);
x_20 = 0;
x_21 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7(x_1, x_2, x_19, x_20, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_ctor_set(x_3, 1, x_23);
lean_ctor_set(x_3, 0, x_17);
lean_ctor_set(x_21, 0, x_3);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_21);
lean_ctor_set(x_3, 1, x_24);
lean_ctor_set(x_3, 0, x_17);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_3);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_14);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_16);
if (x_31 == 0)
{
return x_16;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_16, 0);
x_33 = lean_ctor_get(x_16, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_16);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; size_t x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_3, 0);
x_36 = lean_ctor_get(x_3, 1);
x_37 = lean_ctor_get(x_3, 2);
x_38 = lean_ctor_get_usize(x_3, 4);
x_39 = lean_ctor_get(x_3, 3);
lean_inc(x_39);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_40 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__4(x_1, x_2, x_35, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_array_size(x_36);
x_44 = 0;
x_45 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7(x_1, x_2, x_43, x_44, x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_42);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_48 = x_45;
} else {
 lean_dec_ref(x_45);
 x_48 = lean_box(0);
}
x_49 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_49, 0, x_41);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set(x_49, 2, x_37);
lean_ctor_set(x_49, 3, x_39);
lean_ctor_set_usize(x_49, 4, x_38);
if (lean_is_scalar(x_48)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_48;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_41);
lean_dec(x_39);
lean_dec(x_37);
x_51 = lean_ctor_get(x_45, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_45, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_53 = x_45;
} else {
 lean_dec_ref(x_45);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_39);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_ctor_get(x_40, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_40, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_57 = x_40;
} else {
 lean_dec_ref(x_40);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__9(x_1, x_2, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = lean_usize_add(x_4, x_21);
x_23 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_22;
x_5 = x_23;
x_12 = x_20;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
return x_18;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = l_Lean_Elab_InfoTree_substitute(x_15, x_18);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = lean_apply_7(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = lean_usize_add(x_4, x_23);
x_25 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_24;
x_5 = x_25;
x_12 = x_22;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
x_30 = 1;
x_31 = lean_usize_add(x_4, x_30);
x_32 = lean_array_uset(x_17, x_4, x_29);
x_4 = x_31;
x_5 = x_32;
x_12 = x_27;
goto _start;
}
}
else
{
uint8_t x_34; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_array_size(x_12);
x_14 = 0;
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10(x_1, x_2, x_13, x_14, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_3, 0, x_17);
lean_ctor_set(x_15, 0, x_3);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_free_object(x_3);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_3, 0);
lean_inc(x_25);
lean_dec(x_3);
x_26 = lean_array_size(x_25);
x_27 = 0;
x_28 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10(x_1, x_2, x_26, x_27, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_29);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_28, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_36 = x_28;
} else {
 lean_dec_ref(x_28);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(1, 2, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_3);
if (x_38 == 0)
{
lean_object* x_39; size_t x_40; size_t x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_array_size(x_39);
x_41 = 0;
x_42 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11(x_1, x_2, x_40, x_41, x_39, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_ctor_set(x_3, 0, x_44);
lean_ctor_set(x_42, 0, x_3);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_42, 0);
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_42);
lean_ctor_set(x_3, 0, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_3);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_free_object(x_3);
x_48 = !lean_is_exclusive(x_42);
if (x_48 == 0)
{
return x_42;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_42, 0);
x_50 = lean_ctor_get(x_42, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_42);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; size_t x_53; size_t x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_3, 0);
lean_inc(x_52);
lean_dec(x_3);
x_53 = lean_array_size(x_52);
x_54 = 0;
x_55 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11(x_1, x_2, x_53, x_54, x_52, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_56);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_55, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_55, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_63 = x_55;
} else {
 lean_dec_ref(x_55);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = l_Lean_Elab_InfoTree_substitute(x_15, x_18);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = lean_apply_7(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = lean_usize_add(x_4, x_23);
x_25 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_24;
x_5 = x_25;
x_12 = x_22;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
x_30 = 1;
x_31 = lean_usize_add(x_4, x_30);
x_32 = lean_array_uset(x_17, x_4, x_29);
x_4 = x_31;
x_5 = x_32;
x_12 = x_27;
goto _start;
}
}
else
{
uint8_t x_34; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_3, 2);
x_15 = lean_ctor_get(x_3, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__9(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_size(x_13);
x_20 = 0;
x_21 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12(x_1, x_2, x_19, x_20, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_ctor_set(x_3, 1, x_23);
lean_ctor_set(x_3, 0, x_17);
lean_ctor_set(x_21, 0, x_3);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_21);
lean_ctor_set(x_3, 1, x_24);
lean_ctor_set(x_3, 0, x_17);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_3);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_14);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_16);
if (x_31 == 0)
{
return x_16;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_16, 0);
x_33 = lean_ctor_get(x_16, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_16);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; size_t x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_3, 0);
x_36 = lean_ctor_get(x_3, 1);
x_37 = lean_ctor_get(x_3, 2);
x_38 = lean_ctor_get_usize(x_3, 4);
x_39 = lean_ctor_get(x_3, 3);
lean_inc(x_39);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_40 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__9(x_1, x_2, x_35, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_array_size(x_36);
x_44 = 0;
x_45 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12(x_1, x_2, x_43, x_44, x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_42);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_48 = x_45;
} else {
 lean_dec_ref(x_45);
 x_48 = lean_box(0);
}
x_49 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_49, 0, x_41);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set(x_49, 2, x_37);
lean_ctor_set(x_49, 3, x_39);
lean_ctor_set_usize(x_49, 4, x_38);
if (lean_is_scalar(x_48)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_48;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_41);
lean_dec(x_39);
lean_dec(x_37);
x_51 = lean_ctor_get(x_45, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_45, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_53 = x_45;
} else {
 lean_dec_ref(x_45);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_39);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_ctor_get(x_40, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_40, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_57 = x_40;
} else {
 lean_dec_ref(x_40);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Term_withDeclName___spec__3___rarg(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_14 = lean_apply_7(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_9, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 6);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_inc(x_9);
x_22 = l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__3(x_2, x_20, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_st_ref_take(x_9, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 6);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = !lean_is_exclusive(x_26);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_26, 6);
lean_dec(x_30);
x_31 = !lean_is_exclusive(x_27);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_27, 1);
lean_dec(x_32);
x_33 = l_Lean_PersistentArray_append___rarg(x_12, x_23);
lean_dec(x_23);
lean_ctor_set(x_27, 1, x_33);
x_34 = lean_st_ref_set(x_9, x_26, x_28);
lean_dec(x_9);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_15);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_15);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get_uint8(x_27, sizeof(void*)*2);
x_40 = lean_ctor_get(x_27, 0);
lean_inc(x_40);
lean_dec(x_27);
x_41 = l_Lean_PersistentArray_append___rarg(x_12, x_23);
lean_dec(x_23);
x_42 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set_uint8(x_42, sizeof(void*)*2, x_39);
lean_ctor_set(x_26, 6, x_42);
x_43 = lean_st_ref_set(x_9, x_26, x_28);
lean_dec(x_9);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_45 = x_43;
} else {
 lean_dec_ref(x_43);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_15);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_47 = lean_ctor_get(x_26, 0);
x_48 = lean_ctor_get(x_26, 1);
x_49 = lean_ctor_get(x_26, 2);
x_50 = lean_ctor_get(x_26, 3);
x_51 = lean_ctor_get(x_26, 4);
x_52 = lean_ctor_get(x_26, 5);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_26);
x_53 = lean_ctor_get_uint8(x_27, sizeof(void*)*2);
x_54 = lean_ctor_get(x_27, 0);
lean_inc(x_54);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_55 = x_27;
} else {
 lean_dec_ref(x_27);
 x_55 = lean_box(0);
}
x_56 = l_Lean_PersistentArray_append___rarg(x_12, x_23);
lean_dec(x_23);
if (lean_is_scalar(x_55)) {
 x_57 = lean_alloc_ctor(0, 2, 1);
} else {
 x_57 = x_55;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_56);
lean_ctor_set_uint8(x_57, sizeof(void*)*2, x_53);
x_58 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_58, 0, x_47);
lean_ctor_set(x_58, 1, x_48);
lean_ctor_set(x_58, 2, x_49);
lean_ctor_set(x_58, 3, x_50);
lean_ctor_set(x_58, 4, x_51);
lean_ctor_set(x_58, 5, x_52);
lean_ctor_set(x_58, 6, x_57);
x_59 = lean_st_ref_set(x_9, x_58, x_28);
lean_dec(x_9);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_15);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_9);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_67 = lean_ctor_get(x_14, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_14, 1);
lean_inc(x_68);
lean_dec(x_14);
x_69 = lean_st_ref_get(x_9, x_68);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_ctor_get(x_70, 6);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_inc(x_9);
x_74 = l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__8(x_2, x_72, x_73, x_4, x_5, x_6, x_7, x_8, x_9, x_71);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_st_ref_take(x_9, x_76);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_78, 6);
lean_inc(x_79);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
lean_dec(x_77);
x_81 = !lean_is_exclusive(x_78);
if (x_81 == 0)
{
lean_object* x_82; uint8_t x_83; 
x_82 = lean_ctor_get(x_78, 6);
lean_dec(x_82);
x_83 = !lean_is_exclusive(x_79);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_84 = lean_ctor_get(x_79, 1);
lean_dec(x_84);
x_85 = l_Lean_PersistentArray_append___rarg(x_12, x_75);
lean_dec(x_75);
lean_ctor_set(x_79, 1, x_85);
x_86 = lean_st_ref_set(x_9, x_78, x_80);
lean_dec(x_9);
x_87 = !lean_is_exclusive(x_86);
if (x_87 == 0)
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_86, 0);
lean_dec(x_88);
lean_ctor_set_tag(x_86, 1);
lean_ctor_set(x_86, 0, x_67);
return x_86;
}
else
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_86, 1);
lean_inc(x_89);
lean_dec(x_86);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_67);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
else
{
uint8_t x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_91 = lean_ctor_get_uint8(x_79, sizeof(void*)*2);
x_92 = lean_ctor_get(x_79, 0);
lean_inc(x_92);
lean_dec(x_79);
x_93 = l_Lean_PersistentArray_append___rarg(x_12, x_75);
lean_dec(x_75);
x_94 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
lean_ctor_set_uint8(x_94, sizeof(void*)*2, x_91);
lean_ctor_set(x_78, 6, x_94);
x_95 = lean_st_ref_set(x_9, x_78, x_80);
lean_dec(x_9);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_97 = x_95;
} else {
 lean_dec_ref(x_95);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_97;
 lean_ctor_set_tag(x_98, 1);
}
lean_ctor_set(x_98, 0, x_67);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_99 = lean_ctor_get(x_78, 0);
x_100 = lean_ctor_get(x_78, 1);
x_101 = lean_ctor_get(x_78, 2);
x_102 = lean_ctor_get(x_78, 3);
x_103 = lean_ctor_get(x_78, 4);
x_104 = lean_ctor_get(x_78, 5);
lean_inc(x_104);
lean_inc(x_103);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_78);
x_105 = lean_ctor_get_uint8(x_79, sizeof(void*)*2);
x_106 = lean_ctor_get(x_79, 0);
lean_inc(x_106);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_107 = x_79;
} else {
 lean_dec_ref(x_79);
 x_107 = lean_box(0);
}
x_108 = l_Lean_PersistentArray_append___rarg(x_12, x_75);
lean_dec(x_75);
if (lean_is_scalar(x_107)) {
 x_109 = lean_alloc_ctor(0, 2, 1);
} else {
 x_109 = x_107;
}
lean_ctor_set(x_109, 0, x_106);
lean_ctor_set(x_109, 1, x_108);
lean_ctor_set_uint8(x_109, sizeof(void*)*2, x_105);
x_110 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_110, 0, x_99);
lean_ctor_set(x_110, 1, x_100);
lean_ctor_set(x_110, 2, x_101);
lean_ctor_set(x_110, 3, x_102);
lean_ctor_set(x_110, 4, x_103);
lean_ctor_set(x_110, 5, x_104);
lean_ctor_set(x_110, 6, x_109);
x_111 = lean_st_ref_set(x_9, x_110, x_80);
lean_dec(x_9);
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_113 = x_111;
} else {
 lean_dec_ref(x_111);
 x_113 = lean_box(0);
}
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(1, 2, 0);
} else {
 x_114 = x_113;
 lean_ctor_set_tag(x_114, 1);
}
lean_ctor_set(x_114, 0, x_67);
lean_ctor_set(x_114, 1, x_112);
return x_114;
}
}
else
{
uint8_t x_115; 
lean_dec(x_67);
lean_dec(x_12);
lean_dec(x_9);
x_115 = !lean_is_exclusive(x_74);
if (x_115 == 0)
{
return x_74;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_74, 0);
x_117 = lean_ctor_get(x_74, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_74);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 6);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*2);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_dec(x_10);
x_25 = lean_box(0);
x_26 = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1(x_1, x_2, x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Elab_CommandContextInfo_save___at_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_8);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_13);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
return x_17;
}
}
}
static lean_object* _init_l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1___boxed), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1;
x_10 = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2(x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_3);
x_10 = l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_expandDeclId___spec__7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_box(0);
x_15 = lean_box(0);
x_16 = 1;
x_17 = l_Lean_Elab_Term_addTermInfo_x27(x_13, x_11, x_14, x_14, x_15, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (x_1 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
uint8_t x_13; lean_object* x_14; 
x_13 = 1;
x_14 = l_Lean_Elab_applyAttributesOf(x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(uint8_t x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (x_3 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
x_14 = lean_box(0);
x_15 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(x_1, x_2, x_14, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_5);
x_17 = lean_box(0);
x_18 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(x_1, x_2, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_18;
}
else
{
lean_object* x_19; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_19 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl(x_5, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_box(0);
x_22 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(x_1, x_2, x_21, x_7, x_8, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_23 = !lean_is_exclusive(x_19);
if (x_23 == 0)
{
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_19, 0);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_19);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_noncomputableExt;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3;
x_2 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3;
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5;
x_3 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
lean_ctor_set(x_3, 3, x_1);
lean_ctor_set(x_3, 4, x_1);
lean_ctor_set(x_3, 5, x_2);
lean_ctor_set(x_3, 6, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
x_12 = l_Lean_addDecl(x_4, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_inc(x_1);
lean_inc(x_14);
x_15 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__1), 9, 2);
lean_closure_set(x_15, 0, x_14);
lean_closure_set(x_15, 1, x_1);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1___boxed), 7, 0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2(x_15, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__10;
lean_inc(x_1);
x_20 = lean_array_push(x_19, x_1);
x_21 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_22 = l_Lean_Elab_applyAttributesOf(x_20, x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_1, 2);
lean_inc(x_23);
x_24 = lean_ctor_get_uint8(x_23, sizeof(void*)*2 + 1);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_14);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_box(0);
x_27 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_2, x_20, x_3, x_1, x_4, x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_1);
lean_dec(x_20);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_dec(x_22);
x_29 = lean_st_ref_take(x_10, x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_33 = lean_ctor_get(x_30, 0);
x_34 = lean_ctor_get(x_30, 4);
lean_dec(x_34);
x_35 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1;
x_36 = l_Lean_TagDeclarationExtension_tag(x_35, x_33, x_14);
x_37 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
lean_ctor_set(x_30, 4, x_37);
lean_ctor_set(x_30, 0, x_36);
x_38 = lean_st_ref_set(x_10, x_30, x_31);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_st_ref_take(x_8, x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = !lean_is_exclusive(x_41);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_41, 1);
lean_dec(x_44);
x_45 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6;
lean_ctor_set(x_41, 1, x_45);
x_46 = lean_st_ref_set(x_8, x_41, x_42);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = lean_box(0);
x_49 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_2, x_20, x_3, x_1, x_4, x_48, x_5, x_6, x_7, x_8, x_9, x_10, x_47);
lean_dec(x_1);
lean_dec(x_20);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_50 = lean_ctor_get(x_41, 0);
x_51 = lean_ctor_get(x_41, 2);
x_52 = lean_ctor_get(x_41, 3);
x_53 = lean_ctor_get(x_41, 4);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_41);
x_54 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6;
x_55 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_51);
lean_ctor_set(x_55, 3, x_52);
lean_ctor_set(x_55, 4, x_53);
x_56 = lean_st_ref_set(x_8, x_55, x_42);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_58 = lean_box(0);
x_59 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_2, x_20, x_3, x_1, x_4, x_58, x_5, x_6, x_7, x_8, x_9, x_10, x_57);
lean_dec(x_1);
lean_dec(x_20);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_60 = lean_ctor_get(x_30, 0);
x_61 = lean_ctor_get(x_30, 1);
x_62 = lean_ctor_get(x_30, 2);
x_63 = lean_ctor_get(x_30, 3);
x_64 = lean_ctor_get(x_30, 5);
x_65 = lean_ctor_get(x_30, 6);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_30);
x_66 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1;
x_67 = l_Lean_TagDeclarationExtension_tag(x_66, x_60, x_14);
x_68 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
x_69 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_61);
lean_ctor_set(x_69, 2, x_62);
lean_ctor_set(x_69, 3, x_63);
lean_ctor_set(x_69, 4, x_68);
lean_ctor_set(x_69, 5, x_64);
lean_ctor_set(x_69, 6, x_65);
x_70 = lean_st_ref_set(x_10, x_69, x_31);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_st_ref_take(x_8, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_ctor_get(x_73, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_73, 2);
lean_inc(x_76);
x_77 = lean_ctor_get(x_73, 3);
lean_inc(x_77);
x_78 = lean_ctor_get(x_73, 4);
lean_inc(x_78);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 lean_ctor_release(x_73, 2);
 lean_ctor_release(x_73, 3);
 lean_ctor_release(x_73, 4);
 x_79 = x_73;
} else {
 lean_dec_ref(x_73);
 x_79 = lean_box(0);
}
x_80 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6;
if (lean_is_scalar(x_79)) {
 x_81 = lean_alloc_ctor(0, 5, 0);
} else {
 x_81 = x_79;
}
lean_ctor_set(x_81, 0, x_75);
lean_ctor_set(x_81, 1, x_80);
lean_ctor_set(x_81, 2, x_76);
lean_ctor_set(x_81, 3, x_77);
lean_ctor_set(x_81, 4, x_78);
x_82 = lean_st_ref_set(x_8, x_81, x_74);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = lean_box(0);
x_85 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_2, x_20, x_3, x_1, x_4, x_84, x_5, x_6, x_7, x_8, x_9, x_10, x_83);
lean_dec(x_1);
lean_dec(x_20);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_22);
if (x_86 == 0)
{
return x_22;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_22, 0);
x_88 = lean_ctor_get(x_22, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_22);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_90 = !lean_is_exclusive(x_17);
if (x_90 == 0)
{
return x_17;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_17, 0);
x_92 = lean_ctor_get(x_17, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_17);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
else
{
uint8_t x_94; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_12);
if (x_94 == 0)
{
return x_12;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_12, 0);
x_96 = lean_ctor_get(x_12, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_12);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 5);
x_15 = l_Lean_replaceRef(x_12, x_14);
lean_dec(x_14);
lean_dec(x_12);
lean_ctor_set(x_9, 5, x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = l_Lean_Elab_abstractNestedProofs(x_1, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get_uint8(x_17, sizeof(void*)*7);
x_19 = lean_box(x_18);
switch (lean_obj_tag(x_19)) {
case 1:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_ctor_get(x_17, 3);
lean_inc(x_21);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_17, 4);
lean_inc(x_23);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_22);
lean_ctor_set(x_24, 2, x_23);
x_25 = lean_ctor_get(x_17, 5);
lean_inc(x_25);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_3);
lean_inc(x_9);
lean_inc(x_5);
lean_inc(x_26);
x_27 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_29, 0, x_26);
x_30 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_17, x_4, x_2, x_29, x_5, x_6, x_7, x_8, x_9, x_10, x_28);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_31 = !lean_is_exclusive(x_27);
if (x_31 == 0)
{
return x_27;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_27, 0);
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_27);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
case 3:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_35 = lean_ctor_get(x_16, 1);
lean_inc(x_35);
lean_dec(x_16);
x_36 = lean_ctor_get(x_17, 3);
lean_inc(x_36);
x_37 = lean_ctor_get(x_17, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_17, 4);
lean_inc(x_38);
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_37);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_ctor_get(x_17, 5);
lean_inc(x_40);
x_41 = lean_ctor_get(x_17, 2);
lean_inc(x_41);
x_42 = lean_ctor_get_uint8(x_41, sizeof(void*)*2 + 3);
lean_dec(x_41);
x_43 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_43, 0, x_39);
lean_ctor_set(x_43, 1, x_40);
lean_ctor_set(x_43, 2, x_3);
lean_ctor_set_uint8(x_43, sizeof(void*)*3, x_42);
x_44 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_17, x_4, x_2, x_44, x_5, x_6, x_7, x_8, x_9, x_10, x_35);
return x_45;
}
case 4:
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_46 = lean_ctor_get(x_16, 1);
lean_inc(x_46);
lean_dec(x_16);
x_47 = lean_ctor_get(x_17, 3);
lean_inc(x_47);
x_48 = lean_ctor_get(x_17, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_17, 4);
lean_inc(x_49);
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
lean_ctor_set(x_50, 2, x_49);
x_51 = lean_ctor_get(x_17, 2);
lean_inc(x_51);
x_52 = lean_ctor_get_uint8(x_51, sizeof(void*)*2 + 3);
lean_dec(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_17, 5);
lean_inc(x_53);
x_54 = lean_box(1);
x_55 = 1;
x_56 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_56, 0, x_50);
lean_ctor_set(x_56, 1, x_53);
lean_ctor_set(x_56, 2, x_54);
lean_ctor_set(x_56, 3, x_3);
lean_ctor_set_uint8(x_56, sizeof(void*)*4, x_55);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_17, x_4, x_2, x_57, x_5, x_6, x_7, x_8, x_9, x_10, x_46);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_59 = lean_ctor_get(x_17, 5);
lean_inc(x_59);
x_60 = lean_box(1);
x_61 = 0;
x_62 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_62, 0, x_50);
lean_ctor_set(x_62, 1, x_59);
lean_ctor_set(x_62, 2, x_60);
lean_ctor_set(x_62, 3, x_3);
lean_ctor_set_uint8(x_62, sizeof(void*)*4, x_61);
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_64 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_17, x_4, x_2, x_63, x_5, x_6, x_7, x_8, x_9, x_10, x_46);
return x_64;
}
}
default: 
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint32_t x_76; uint32_t x_77; uint32_t x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
lean_dec(x_19);
x_65 = lean_ctor_get(x_16, 1);
lean_inc(x_65);
lean_dec(x_16);
x_66 = lean_st_ref_get(x_10, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_ctor_get(x_67, 0);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_ctor_get(x_17, 3);
lean_inc(x_70);
x_71 = lean_ctor_get(x_17, 1);
lean_inc(x_71);
x_72 = lean_ctor_get(x_17, 4);
lean_inc(x_72);
x_73 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_71);
lean_ctor_set(x_73, 2, x_72);
x_74 = lean_ctor_get(x_17, 5);
lean_inc(x_74);
lean_inc(x_74);
x_75 = l_Lean_getMaxHeight(x_69, x_74);
x_76 = lean_unbox_uint32(x_75);
lean_dec(x_75);
x_77 = 1;
x_78 = lean_uint32_add(x_76, x_77);
x_79 = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(x_79, 0, x_78);
x_80 = lean_ctor_get(x_17, 2);
lean_inc(x_80);
x_81 = lean_ctor_get_uint8(x_80, sizeof(void*)*2 + 3);
lean_dec(x_80);
if (x_81 == 0)
{
uint8_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = 1;
x_83 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_83, 0, x_73);
lean_ctor_set(x_83, 1, x_74);
lean_ctor_set(x_83, 2, x_79);
lean_ctor_set(x_83, 3, x_3);
lean_ctor_set_uint8(x_83, sizeof(void*)*4, x_82);
x_84 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_84, 0, x_83);
x_85 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_17, x_4, x_2, x_84, x_5, x_6, x_7, x_8, x_9, x_10, x_68);
return x_85;
}
else
{
uint8_t x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = 0;
x_87 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_87, 0, x_73);
lean_ctor_set(x_87, 1, x_74);
lean_ctor_set(x_87, 2, x_79);
lean_ctor_set(x_87, 3, x_3);
lean_ctor_set_uint8(x_87, sizeof(void*)*4, x_86);
x_88 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_88, 0, x_87);
x_89 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_17, x_4, x_2, x_88, x_5, x_6, x_7, x_8, x_9, x_10, x_68);
return x_89;
}
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_90 = !lean_is_exclusive(x_16);
if (x_90 == 0)
{
return x_16;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_16, 0);
x_92 = lean_ctor_get(x_16, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_16);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_94 = lean_ctor_get(x_9, 0);
x_95 = lean_ctor_get(x_9, 1);
x_96 = lean_ctor_get(x_9, 2);
x_97 = lean_ctor_get(x_9, 3);
x_98 = lean_ctor_get(x_9, 4);
x_99 = lean_ctor_get(x_9, 5);
x_100 = lean_ctor_get(x_9, 6);
x_101 = lean_ctor_get(x_9, 7);
x_102 = lean_ctor_get(x_9, 8);
x_103 = lean_ctor_get(x_9, 9);
x_104 = lean_ctor_get(x_9, 10);
x_105 = lean_ctor_get_uint8(x_9, sizeof(void*)*12);
x_106 = lean_ctor_get(x_9, 11);
x_107 = lean_ctor_get_uint8(x_9, sizeof(void*)*12 + 1);
lean_inc(x_106);
lean_inc(x_104);
lean_inc(x_103);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_9);
x_108 = l_Lean_replaceRef(x_12, x_99);
lean_dec(x_99);
lean_dec(x_12);
x_109 = lean_alloc_ctor(0, 12, 2);
lean_ctor_set(x_109, 0, x_94);
lean_ctor_set(x_109, 1, x_95);
lean_ctor_set(x_109, 2, x_96);
lean_ctor_set(x_109, 3, x_97);
lean_ctor_set(x_109, 4, x_98);
lean_ctor_set(x_109, 5, x_108);
lean_ctor_set(x_109, 6, x_100);
lean_ctor_set(x_109, 7, x_101);
lean_ctor_set(x_109, 8, x_102);
lean_ctor_set(x_109, 9, x_103);
lean_ctor_set(x_109, 10, x_104);
lean_ctor_set(x_109, 11, x_106);
lean_ctor_set_uint8(x_109, sizeof(void*)*12, x_105);
lean_ctor_set_uint8(x_109, sizeof(void*)*12 + 1, x_107);
lean_inc(x_10);
lean_inc(x_109);
lean_inc(x_8);
lean_inc(x_7);
x_110 = l_Lean_Elab_abstractNestedProofs(x_1, x_7, x_8, x_109, x_10, x_11);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; uint8_t x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get_uint8(x_111, sizeof(void*)*7);
x_113 = lean_box(x_112);
switch (lean_obj_tag(x_113)) {
case 1:
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_114 = lean_ctor_get(x_110, 1);
lean_inc(x_114);
lean_dec(x_110);
x_115 = lean_ctor_get(x_111, 3);
lean_inc(x_115);
x_116 = lean_ctor_get(x_111, 1);
lean_inc(x_116);
x_117 = lean_ctor_get(x_111, 4);
lean_inc(x_117);
x_118 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_116);
lean_ctor_set(x_118, 2, x_117);
x_119 = lean_ctor_get(x_111, 5);
lean_inc(x_119);
x_120 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
lean_ctor_set(x_120, 2, x_3);
lean_inc(x_109);
lean_inc(x_5);
lean_inc(x_120);
x_121 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(x_120, x_5, x_6, x_7, x_8, x_109, x_10, x_114);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_121, 1);
lean_inc(x_122);
lean_dec(x_121);
x_123 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_123, 0, x_120);
x_124 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_111, x_4, x_2, x_123, x_5, x_6, x_7, x_8, x_109, x_10, x_122);
return x_124;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_120);
lean_dec(x_111);
lean_dec(x_109);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_125 = lean_ctor_get(x_121, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_121, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_127 = x_121;
} else {
 lean_dec_ref(x_121);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(1, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
case 3:
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_129 = lean_ctor_get(x_110, 1);
lean_inc(x_129);
lean_dec(x_110);
x_130 = lean_ctor_get(x_111, 3);
lean_inc(x_130);
x_131 = lean_ctor_get(x_111, 1);
lean_inc(x_131);
x_132 = lean_ctor_get(x_111, 4);
lean_inc(x_132);
x_133 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_131);
lean_ctor_set(x_133, 2, x_132);
x_134 = lean_ctor_get(x_111, 5);
lean_inc(x_134);
x_135 = lean_ctor_get(x_111, 2);
lean_inc(x_135);
x_136 = lean_ctor_get_uint8(x_135, sizeof(void*)*2 + 3);
lean_dec(x_135);
x_137 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_137, 0, x_133);
lean_ctor_set(x_137, 1, x_134);
lean_ctor_set(x_137, 2, x_3);
lean_ctor_set_uint8(x_137, sizeof(void*)*3, x_136);
x_138 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_138, 0, x_137);
x_139 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_111, x_4, x_2, x_138, x_5, x_6, x_7, x_8, x_109, x_10, x_129);
return x_139;
}
case 4:
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; 
x_140 = lean_ctor_get(x_110, 1);
lean_inc(x_140);
lean_dec(x_110);
x_141 = lean_ctor_get(x_111, 3);
lean_inc(x_141);
x_142 = lean_ctor_get(x_111, 1);
lean_inc(x_142);
x_143 = lean_ctor_get(x_111, 4);
lean_inc(x_143);
x_144 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_144, 0, x_141);
lean_ctor_set(x_144, 1, x_142);
lean_ctor_set(x_144, 2, x_143);
x_145 = lean_ctor_get(x_111, 2);
lean_inc(x_145);
x_146 = lean_ctor_get_uint8(x_145, sizeof(void*)*2 + 3);
lean_dec(x_145);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; uint8_t x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_147 = lean_ctor_get(x_111, 5);
lean_inc(x_147);
x_148 = lean_box(1);
x_149 = 1;
x_150 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_150, 0, x_144);
lean_ctor_set(x_150, 1, x_147);
lean_ctor_set(x_150, 2, x_148);
lean_ctor_set(x_150, 3, x_3);
lean_ctor_set_uint8(x_150, sizeof(void*)*4, x_149);
x_151 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_151, 0, x_150);
x_152 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_111, x_4, x_2, x_151, x_5, x_6, x_7, x_8, x_109, x_10, x_140);
return x_152;
}
else
{
lean_object* x_153; lean_object* x_154; uint8_t x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_153 = lean_ctor_get(x_111, 5);
lean_inc(x_153);
x_154 = lean_box(1);
x_155 = 0;
x_156 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_156, 0, x_144);
lean_ctor_set(x_156, 1, x_153);
lean_ctor_set(x_156, 2, x_154);
lean_ctor_set(x_156, 3, x_3);
lean_ctor_set_uint8(x_156, sizeof(void*)*4, x_155);
x_157 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_157, 0, x_156);
x_158 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_111, x_4, x_2, x_157, x_5, x_6, x_7, x_8, x_109, x_10, x_140);
return x_158;
}
}
default: 
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; uint32_t x_170; uint32_t x_171; uint32_t x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; 
lean_dec(x_113);
x_159 = lean_ctor_get(x_110, 1);
lean_inc(x_159);
lean_dec(x_110);
x_160 = lean_st_ref_get(x_10, x_159);
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_160, 1);
lean_inc(x_162);
lean_dec(x_160);
x_163 = lean_ctor_get(x_161, 0);
lean_inc(x_163);
lean_dec(x_161);
x_164 = lean_ctor_get(x_111, 3);
lean_inc(x_164);
x_165 = lean_ctor_get(x_111, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_111, 4);
lean_inc(x_166);
x_167 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_167, 0, x_164);
lean_ctor_set(x_167, 1, x_165);
lean_ctor_set(x_167, 2, x_166);
x_168 = lean_ctor_get(x_111, 5);
lean_inc(x_168);
lean_inc(x_168);
x_169 = l_Lean_getMaxHeight(x_163, x_168);
x_170 = lean_unbox_uint32(x_169);
lean_dec(x_169);
x_171 = 1;
x_172 = lean_uint32_add(x_170, x_171);
x_173 = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(x_173, 0, x_172);
x_174 = lean_ctor_get(x_111, 2);
lean_inc(x_174);
x_175 = lean_ctor_get_uint8(x_174, sizeof(void*)*2 + 3);
lean_dec(x_174);
if (x_175 == 0)
{
uint8_t x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_176 = 1;
x_177 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_177, 0, x_167);
lean_ctor_set(x_177, 1, x_168);
lean_ctor_set(x_177, 2, x_173);
lean_ctor_set(x_177, 3, x_3);
lean_ctor_set_uint8(x_177, sizeof(void*)*4, x_176);
x_178 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_178, 0, x_177);
x_179 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_111, x_4, x_2, x_178, x_5, x_6, x_7, x_8, x_109, x_10, x_162);
return x_179;
}
else
{
uint8_t x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_180 = 0;
x_181 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_181, 0, x_167);
lean_ctor_set(x_181, 1, x_168);
lean_ctor_set(x_181, 2, x_173);
lean_ctor_set(x_181, 3, x_3);
lean_ctor_set_uint8(x_181, sizeof(void*)*4, x_180);
x_182 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_182, 0, x_181);
x_183 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_111, x_4, x_2, x_182, x_5, x_6, x_7, x_8, x_109, x_10, x_162);
return x_183;
}
}
}
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
lean_dec(x_109);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_184 = lean_ctor_get(x_110, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_110, 1);
lean_inc(x_185);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_186 = x_110;
} else {
 lean_dec_ref(x_110);
 x_186 = lean_box(0);
}
if (lean_is_scalar(x_186)) {
 x_187 = lean_alloc_ctor(1, 2, 0);
} else {
 x_187 = x_186;
}
lean_ctor_set(x_187, 0, x_184);
lean_ctor_set(x_187, 1, x_185);
return x_187;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_1);
lean_dec(x_1);
x_15 = lean_unbox(x_3);
lean_dec(x_3);
x_16 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_14, x_2, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_1, x_12, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileNonRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_1, x_10, x_2, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addNonRec(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 0;
x_12 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_1, x_11, x_3, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addNonRec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Lean_Elab_addNonRec(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
static lean_object* _init_l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_hasRecAppSyntax(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Expr_mdataExpr_x21(x_1);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
}
}
static lean_object* _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_hasRecAppSyntax___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1;
x_6 = lean_find_expr(x_5, x_1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
x_8 = l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2;
x_9 = l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3;
x_10 = l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(x_1, x_8, x_9, x_2, x_3, x_4);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntax(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
x_10 = lean_ctor_get(x_1, 4);
x_11 = lean_ctor_get(x_1, 5);
x_12 = lean_ctor_get(x_1, 6);
x_13 = l_Lean_Elab_eraseRecAppSyntaxExpr(x_11, x_2, x_3, x_4);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_1, 5, x_15);
lean_ctor_set(x_13, 0, x_1);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 5, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_1, 0);
x_24 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_25 = lean_ctor_get(x_1, 1);
x_26 = lean_ctor_get(x_1, 2);
x_27 = lean_ctor_get(x_1, 3);
x_28 = lean_ctor_get(x_1, 4);
x_29 = lean_ctor_get(x_1, 5);
x_30 = lean_ctor_get(x_1, 6);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_23);
lean_dec(x_1);
x_31 = l_Lean_Elab_eraseRecAppSyntaxExpr(x_29, x_2, x_3, x_4);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_34 = x_31;
} else {
 lean_dec_ref(x_31);
 x_34 = lean_box(0);
}
x_35 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_35, 0, x_23);
lean_ctor_set(x_35, 1, x_25);
lean_ctor_set(x_35, 2, x_26);
lean_ctor_set(x_35, 3, x_27);
lean_ctor_set(x_35, 4, x_28);
lean_ctor_set(x_35, 5, x_32);
lean_ctor_set(x_35, 6, x_30);
lean_ctor_set_uint8(x_35, sizeof(void*)*7, x_24);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_23);
x_37 = lean_ctor_get(x_31, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_39 = x_31;
} else {
 lean_dec_ref(x_31);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_lt(x_2, x_1);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_array_uget(x_3, x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_3, x_2, x_14);
lean_inc(x_9);
lean_inc(x_8);
x_16 = l_Lean_Elab_eraseRecAppSyntax(x_13, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = lean_usize_add(x_2, x_19);
x_21 = lean_array_uset(x_15, x_2, x_17);
x_2 = x_20;
x_3 = x_21;
x_10 = x_18;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
return x_16;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_16, 0);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_16);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_4, 3);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__2(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 3);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__2(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_12 = l_List_reverse___rarg(x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
x_17 = lean_ctor_get(x_15, 3);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_15, 4);
lean_inc(x_19);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_19);
x_21 = lean_ctor_get(x_15, 5);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_box(0);
lean_inc(x_2);
x_23 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set(x_23, 3, x_2);
lean_ctor_set_uint8(x_23, sizeof(void*)*4, x_1);
lean_ctor_set(x_3, 1, x_4);
lean_ctor_set(x_3, 0, x_23);
{
lean_object* _tmp_2 = x_16;
lean_object* _tmp_3 = x_3;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_25 = lean_ctor_get(x_3, 0);
x_26 = lean_ctor_get(x_3, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_3);
x_27 = lean_ctor_get(x_25, 3);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_25, 4);
lean_inc(x_29);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_29);
x_31 = lean_ctor_get(x_25, 5);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_box(0);
lean_inc(x_2);
x_33 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_31);
lean_ctor_set(x_33, 2, x_32);
lean_ctor_set(x_33, 3, x_2);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_1);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_4);
x_3 = x_26;
x_4 = x_34;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_3, x_2);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_3);
x_15 = lean_ctor_get(x_14, 3);
lean_inc(x_15);
lean_inc(x_5);
x_16 = l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_expandDeclId___spec__7(x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_box(0);
x_21 = lean_box(0);
x_22 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_23 = l_Lean_Elab_Term_addTermInfo_x27(x_19, x_17, x_20, x_20, x_21, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = 1;
x_26 = lean_usize_add(x_3, x_25);
x_27 = lean_box(0);
x_3 = x_26;
x_4 = x_27;
x_11 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_29 = !lean_is_exclusive(x_23);
if (x_29 == 0)
{
return x_23;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_23, 0);
x_31 = lean_ctor_get(x_23, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_23);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_33 = !lean_is_exclusive(x_16);
if (x_33 == 0)
{
return x_16;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_16, 0);
x_35 = lean_ctor_get(x_16, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_16);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___lambda__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Array_forInUnsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4(x_1, x_2, x_3, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
static lean_object* _init_l_Lean_Elab_addAndCompileUnsafe___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_array_size(x_1);
x_11 = 0;
lean_inc(x_8);
lean_inc(x_7);
x_12 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(x_10, x_11, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_array_get_size(x_13);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_lt(x_16, x_15);
lean_dec(x_15);
lean_inc(x_13);
x_18 = lean_array_to_list(lean_box(0), x_13);
lean_inc(x_18);
x_19 = l_List_map___at_Lean_Elab_addAndCompileUnsafe___spec__2(x_18);
x_20 = lean_box(0);
x_21 = lean_ctor_get(x_7, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_7, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_7, 3);
lean_inc(x_24);
x_25 = lean_ctor_get(x_7, 4);
lean_inc(x_25);
x_26 = lean_ctor_get(x_7, 5);
lean_inc(x_26);
x_27 = lean_ctor_get(x_7, 6);
lean_inc(x_27);
x_28 = lean_ctor_get(x_7, 7);
lean_inc(x_28);
x_29 = lean_ctor_get(x_7, 8);
lean_inc(x_29);
x_30 = lean_ctor_get(x_7, 9);
lean_inc(x_30);
x_31 = lean_ctor_get(x_7, 10);
lean_inc(x_31);
x_32 = lean_ctor_get_uint8(x_7, sizeof(void*)*12);
x_33 = lean_ctor_get(x_7, 11);
lean_inc(x_33);
x_34 = lean_ctor_get_uint8(x_7, sizeof(void*)*12 + 1);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 lean_ctor_release(x_7, 5);
 lean_ctor_release(x_7, 6);
 lean_ctor_release(x_7, 7);
 lean_ctor_release(x_7, 8);
 lean_ctor_release(x_7, 9);
 lean_ctor_release(x_7, 10);
 lean_ctor_release(x_7, 11);
 x_35 = x_7;
} else {
 lean_dec_ref(x_7);
 x_35 = lean_box(0);
}
if (x_17 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = l_Lean_Elab_instInhabitedPreDefinition;
x_88 = l_outOfBounds___rarg(x_87);
x_36 = x_88;
goto block_86;
}
else
{
lean_object* x_89; 
x_89 = lean_array_fget(x_13, x_16);
x_36 = x_89;
goto block_86;
}
block_86:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
lean_dec(x_36);
x_38 = l_Lean_replaceRef(x_37, x_26);
lean_dec(x_26);
lean_dec(x_37);
if (lean_is_scalar(x_35)) {
 x_39 = lean_alloc_ctor(0, 12, 2);
} else {
 x_39 = x_35;
}
lean_ctor_set(x_39, 0, x_21);
lean_ctor_set(x_39, 1, x_22);
lean_ctor_set(x_39, 2, x_23);
lean_ctor_set(x_39, 3, x_24);
lean_ctor_set(x_39, 4, x_25);
lean_ctor_set(x_39, 5, x_38);
lean_ctor_set(x_39, 6, x_27);
lean_ctor_set(x_39, 7, x_28);
lean_ctor_set(x_39, 8, x_29);
lean_ctor_set(x_39, 9, x_30);
lean_ctor_set(x_39, 10, x_31);
lean_ctor_set(x_39, 11, x_33);
lean_ctor_set_uint8(x_39, sizeof(void*)*12, x_32);
lean_ctor_set_uint8(x_39, sizeof(void*)*12 + 1, x_34);
x_40 = l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3(x_2, x_19, x_18, x_20, x_3, x_4, x_5, x_6, x_39, x_8, x_14);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_43, 0, x_41);
lean_inc(x_8);
lean_inc(x_39);
lean_inc(x_43);
x_44 = l_Lean_addDecl(x_43, x_39, x_8, x_42);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; size_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_array_size(x_13);
x_47 = lean_box_usize(x_46);
x_48 = l_Lean_Elab_addAndCompileUnsafe___boxed__const__1;
lean_inc(x_13);
x_49 = lean_alloc_closure((void*)(l_Lean_Elab_addAndCompileUnsafe___lambda__1___boxed), 10, 3);
lean_closure_set(x_49, 0, x_13);
lean_closure_set(x_49, 1, x_47);
lean_closure_set(x_49, 2, x_48);
x_50 = l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1;
lean_inc(x_8);
lean_inc(x_39);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_51 = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2(x_49, x_50, x_3, x_4, x_5, x_6, x_39, x_8, x_45);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; uint8_t x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = 0;
lean_inc(x_8);
lean_inc(x_39);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_54 = l_Lean_Elab_applyAttributesOf(x_13, x_53, x_3, x_4, x_5, x_6, x_39, x_8, x_52);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
lean_inc(x_8);
lean_inc(x_39);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_56 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl(x_43, x_3, x_4, x_5, x_6, x_39, x_8, x_55);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; uint8_t x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_58 = 1;
x_59 = l_Lean_Elab_applyAttributesOf(x_13, x_58, x_3, x_4, x_5, x_6, x_39, x_8, x_57);
lean_dec(x_13);
if (lean_obj_tag(x_59) == 0)
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_59, 0);
lean_dec(x_61);
x_62 = lean_box(0);
lean_ctor_set(x_59, 0, x_62);
return x_59;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
lean_dec(x_59);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
else
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_59);
if (x_66 == 0)
{
return x_59;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_59, 0);
x_68 = lean_ctor_get(x_59, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_59);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_39);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_70 = !lean_is_exclusive(x_56);
if (x_70 == 0)
{
return x_56;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_56, 0);
x_72 = lean_ctor_get(x_56, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_56);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_43);
lean_dec(x_39);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_74 = !lean_is_exclusive(x_54);
if (x_74 == 0)
{
return x_54;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_54, 0);
x_76 = lean_ctor_get(x_54, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_54);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_43);
lean_dec(x_39);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_78 = !lean_is_exclusive(x_51);
if (x_78 == 0)
{
return x_51;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_51, 0);
x_80 = lean_ctor_get(x_51, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_51);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_43);
lean_dec(x_39);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_82 = !lean_is_exclusive(x_44);
if (x_82 == 0)
{
return x_44;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_44, 0);
x_84 = lean_ctor_get(x_44, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_44);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_90 = !lean_is_exclusive(x_12);
if (x_90 == 0)
{
return x_12;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_12, 0);
x_92 = lean_ctor_get(x_12, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_12);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = l_Lean_Elab_addAndCompileUnsafe___lambda__1(x_1, x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Elab_addAndCompileUnsafe(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_name_eq(x_7, x_1);
lean_dec(x_7);
if (x_8 == 0)
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_3 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_unsafe_rec", 11, 11);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_1);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
size_t x_9; size_t x_10; uint8_t x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_1);
x_11 = l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_4, x_2, x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
x_12 = lean_box(0);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1;
x_14 = l_Lean_Name_str___override(x_4, x_13);
x_15 = l_Lean_Expr_const___override(x_14, x_5);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
else
{
lean_object* x_17; 
lean_dec(x_3);
x_17 = lean_box(0);
return x_17;
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; uint8_t x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = 0;
x_4 = 2;
x_5 = l_Lean_Elab_instInhabitedPreDefinition___closed__1;
x_6 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
lean_ctor_set_uint8(x_6, sizeof(void*)*2, x_2);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 1, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 2, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 3, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_4, x_3);
if (x_6 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_uget(x_5, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_5, x_4, x_8);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = lean_ctor_get(x_7, 5);
x_13 = lean_ctor_get(x_7, 2);
lean_dec(x_13);
x_14 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1;
x_15 = l_Lean_Name_str___override(x_11, x_14);
lean_inc(x_1);
lean_inc(x_2);
x_16 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___boxed), 3, 2);
lean_closure_set(x_16, 0, x_2);
lean_closure_set(x_16, 1, x_1);
x_17 = lean_replace_expr(x_16, x_12);
lean_dec(x_12);
lean_dec(x_16);
x_18 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___closed__1;
lean_ctor_set(x_7, 5, x_17);
lean_ctor_set(x_7, 3, x_15);
lean_ctor_set(x_7, 2, x_18);
x_19 = 1;
x_20 = lean_usize_add(x_4, x_19);
x_21 = lean_array_uset(x_9, x_4, x_7);
x_4 = x_20;
x_5 = x_21;
goto _start;
}
else
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; 
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get_uint8(x_7, sizeof(void*)*7);
x_25 = lean_ctor_get(x_7, 1);
x_26 = lean_ctor_get(x_7, 3);
x_27 = lean_ctor_get(x_7, 4);
x_28 = lean_ctor_get(x_7, 5);
x_29 = lean_ctor_get(x_7, 6);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_23);
lean_dec(x_7);
x_30 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1;
x_31 = l_Lean_Name_str___override(x_26, x_30);
lean_inc(x_1);
lean_inc(x_2);
x_32 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___boxed), 3, 2);
lean_closure_set(x_32, 0, x_2);
lean_closure_set(x_32, 1, x_1);
x_33 = lean_replace_expr(x_32, x_28);
lean_dec(x_28);
lean_dec(x_32);
x_34 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___closed__1;
x_35 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_35, 0, x_23);
lean_ctor_set(x_35, 1, x_25);
lean_ctor_set(x_35, 2, x_34);
lean_ctor_set(x_35, 3, x_31);
lean_ctor_set(x_35, 4, x_27);
lean_ctor_set(x_35, 5, x_33);
lean_ctor_set(x_35, 6, x_29);
lean_ctor_set_uint8(x_35, sizeof(void*)*7, x_24);
x_36 = 1;
x_37 = lean_usize_add(x_4, x_36);
x_38 = lean_array_uset(x_9, x_4, x_35);
x_4 = x_37;
x_5 = x_38;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_st_ref_take(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 6);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_10, 6);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
lean_ctor_set_uint8(x_11, sizeof(void*)*2, x_1);
x_16 = lean_st_ref_set(x_7, x_10, x_12);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set_uint8(x_25, sizeof(void*)*2, x_1);
lean_ctor_set(x_10, 6, x_25);
x_26 = lean_st_ref_set(x_7, x_10, x_12);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_31 = lean_ctor_get(x_10, 0);
x_32 = lean_ctor_get(x_10, 1);
x_33 = lean_ctor_get(x_10, 2);
x_34 = lean_ctor_get(x_10, 3);
x_35 = lean_ctor_get(x_10, 4);
x_36 = lean_ctor_get(x_10, 5);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_10);
x_37 = lean_ctor_get(x_11, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_11, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_39 = x_11;
} else {
 lean_dec_ref(x_11);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(0, 2, 1);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*2, x_1);
x_41 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_41, 0, x_31);
lean_ctor_set(x_41, 1, x_32);
lean_ctor_set(x_41, 2, x_33);
lean_ctor_set(x_41, 3, x_34);
lean_ctor_set(x_41, 4, x_35);
lean_ctor_set(x_41, 5, x_36);
lean_ctor_set(x_41, 6, x_40);
x_42 = lean_st_ref_set(x_7, x_41, x_12);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_44 = x_42;
} else {
 lean_dec_ref(x_42);
 x_44 = lean_box(0);
}
x_45 = lean_box(0);
if (lean_is_scalar(x_44)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_44;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_43);
return x_46;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 6);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get_uint8(x_13, sizeof(void*)*2);
lean_dec(x_13);
x_15 = l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_17 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_17, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_dec(x_17);
x_27 = l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set_tag(x_27, 1);
lean_ctor_set(x_27, 0, x_25);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
else
{
size_t x_8; size_t x_9; 
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
goto _start;
}
}
else
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_20; uint8_t x_21; 
x_9 = lean_array_get_size(x_1);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_lt(x_20, x_9);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_box(0);
x_10 = x_22;
goto block_19;
}
else
{
size_t x_23; size_t x_24; uint8_t x_25; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_9);
x_25 = l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5(x_1, x_23, x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_box(0);
x_10 = x_26;
goto block_19;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_8);
return x_28;
}
}
block_19:
{
size_t x_11; size_t x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_dec(x_10);
x_11 = lean_array_size(x_1);
x_12 = 0;
lean_inc(x_1);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(x_1, x_9, x_11, x_12, x_1);
x_14 = 2;
x_15 = lean_box(x_14);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_addAndCompileUnsafe___boxed), 9, 2);
lean_closure_set(x_16, 0, x_13);
lean_closure_set(x_16, 1, x_15);
x_17 = 0;
x_18 = l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3(x_17, x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Expr_isConst(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Expr_constName_x21(x_2);
x_6 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_1, x_5);
lean_dec(x_5);
return x_6;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_find_expr(x_3, x_2);
lean_dec(x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 1;
return x_6;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unexpected occurrence of recursive application", 46, 46);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Expr_getAppFn(x_2);
x_9 = l_Lean_Expr_isConst(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Expr_constName_x21(x_8);
lean_dec(x_8);
x_13 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_1, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_7);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = l_Lean_indentExpr(x_2);
x_17 = l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
x_20 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_20, x_3, x_4, x_5, x_6, x_7);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
lean_inc(x_1);
x_8 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn(x_1, x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_ensureNoRecFn___lambda__1___boxed), 7, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = l_Lean_Meta_forEachExpr___at_Lean_Meta_setMVarUserNamesAt___spec__5(x_2, x_11, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_ensureNoRecFn___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1___boxed), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_lt(x_2, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_11 = lean_array_uget(x_3, x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_uset(x_3, x_2, x_12);
x_14 = lean_ctor_get(x_11, 5);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1;
x_16 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_Meta_lambdaTelescope___at_Lean_PrettyPrinter_Delaborator_returnsPi___spec__1___rarg(x_14, x_15, x_16, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = lean_usize_add(x_2, x_20);
x_22 = lean_array_uset(x_13, x_2, x_18);
x_2 = x_21;
x_3 = x_22;
x_8 = x_19;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
return x_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_17, 0);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_17);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_maxRecDepth;
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid mutual definition, result types must be in the same universe ", 69, 69);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("level, resulting type ", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3;
x_2 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5;
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("for `", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` is", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" : ", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("and for `", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_10, 4);
lean_dec(x_14);
x_15 = lean_ctor_get(x_10, 2);
lean_dec(x_15);
x_16 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1;
x_17 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_16);
lean_ctor_set(x_10, 4, x_17);
lean_ctor_set(x_10, 2, x_1);
lean_ctor_set_uint8(x_10, sizeof(void*)*12, x_2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = lean_infer_type(x_3, x_4, x_5, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_6);
x_21 = lean_infer_type(x_6, x_4, x_5, x_10, x_11, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_7, 3);
lean_inc(x_24);
lean_dec(x_7);
x_25 = l_Lean_MessageData_ofName(x_24);
x_26 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10;
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_indentExpr(x_3);
x_31 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12;
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_MessageData_ofExpr(x_19);
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14;
x_37 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6;
x_39 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = lean_ctor_get(x_8, 3);
lean_inc(x_40);
lean_dec(x_8);
x_41 = l_Lean_MessageData_ofName(x_40);
x_42 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16;
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_28);
x_45 = l_Lean_indentExpr(x_6);
x_46 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_32);
x_48 = l_Lean_MessageData_ofExpr(x_22);
x_49 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
x_51 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_52, 0, x_39);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_throwError___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__1(x_52, x_4, x_5, x_10, x_11, x_23);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_53;
}
else
{
uint8_t x_54; 
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_54 = !lean_is_exclusive(x_21);
if (x_54 == 0)
{
return x_21;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_21, 0);
x_56 = lean_ctor_get(x_21, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_21);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_10);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_58 = !lean_is_exclusive(x_18);
if (x_58 == 0)
{
return x_18;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_18, 0);
x_60 = lean_ctor_get(x_18, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_18);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_62 = lean_ctor_get(x_10, 0);
x_63 = lean_ctor_get(x_10, 1);
x_64 = lean_ctor_get(x_10, 3);
x_65 = lean_ctor_get(x_10, 5);
x_66 = lean_ctor_get(x_10, 6);
x_67 = lean_ctor_get(x_10, 7);
x_68 = lean_ctor_get(x_10, 8);
x_69 = lean_ctor_get(x_10, 9);
x_70 = lean_ctor_get(x_10, 10);
x_71 = lean_ctor_get(x_10, 11);
x_72 = lean_ctor_get_uint8(x_10, sizeof(void*)*12 + 1);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_10);
x_73 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1;
x_74 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_73);
x_75 = lean_alloc_ctor(0, 12, 2);
lean_ctor_set(x_75, 0, x_62);
lean_ctor_set(x_75, 1, x_63);
lean_ctor_set(x_75, 2, x_1);
lean_ctor_set(x_75, 3, x_64);
lean_ctor_set(x_75, 4, x_74);
lean_ctor_set(x_75, 5, x_65);
lean_ctor_set(x_75, 6, x_66);
lean_ctor_set(x_75, 7, x_67);
lean_ctor_set(x_75, 8, x_68);
lean_ctor_set(x_75, 9, x_69);
lean_ctor_set(x_75, 10, x_70);
lean_ctor_set(x_75, 11, x_71);
lean_ctor_set_uint8(x_75, sizeof(void*)*12, x_2);
lean_ctor_set_uint8(x_75, sizeof(void*)*12 + 1, x_72);
lean_inc(x_11);
lean_inc(x_75);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_76 = lean_infer_type(x_3, x_4, x_5, x_75, x_11, x_12);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
lean_inc(x_11);
lean_inc(x_75);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_6);
x_79 = lean_infer_type(x_6, x_4, x_5, x_75, x_11, x_78);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = lean_ctor_get(x_7, 3);
lean_inc(x_82);
lean_dec(x_7);
x_83 = l_Lean_MessageData_ofName(x_82);
x_84 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8;
x_85 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
x_86 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10;
x_87 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
x_88 = l_Lean_indentExpr(x_3);
x_89 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12;
x_91 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_Lean_MessageData_ofExpr(x_77);
x_93 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14;
x_95 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
x_96 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6;
x_97 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
x_98 = lean_ctor_get(x_8, 3);
lean_inc(x_98);
lean_dec(x_8);
x_99 = l_Lean_MessageData_ofName(x_98);
x_100 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16;
x_101 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
x_102 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_86);
x_103 = l_Lean_indentExpr(x_6);
x_104 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_90);
x_106 = l_Lean_MessageData_ofExpr(x_80);
x_107 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
x_108 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
x_109 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_110, 0, x_97);
lean_ctor_set(x_110, 1, x_109);
x_111 = l_Lean_throwError___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__1(x_110, x_4, x_5, x_75, x_11, x_81);
lean_dec(x_11);
lean_dec(x_75);
lean_dec(x_5);
lean_dec(x_4);
return x_111;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_77);
lean_dec(x_75);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_112 = lean_ctor_get(x_79, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_79, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_114 = x_79;
} else {
 lean_dec_ref(x_79);
 x_114 = lean_box(0);
}
if (lean_is_scalar(x_114)) {
 x_115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_115 = x_114;
}
lean_ctor_set(x_115, 0, x_112);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_75);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_116 = lean_ctor_get(x_76, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_76, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_118 = x_76;
} else {
 lean_dec_ref(x_76);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(1, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_sanitizeNames;
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_diagnostics;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_12 = l_Lean_Meta_getLevel(x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1(x_1, x_13, x_15, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; uint8_t x_31; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_ctor_get(x_9, 2);
lean_inc(x_20);
x_21 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1;
x_22 = 0;
x_23 = l_Lean_Option_set___at_Lean_Elab_Term_withoutMacroStackAtErr___spec__1(x_20, x_21, x_22);
x_24 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2;
x_25 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_23, x_24);
x_26 = lean_st_ref_get(x_10, x_19);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Kernel_isDiagnosticsEnabled(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
if (x_25 == 0)
{
x_31 = x_15;
goto block_59;
}
else
{
x_31 = x_22;
goto block_59;
}
}
else
{
if (x_25 == 0)
{
x_31 = x_22;
goto block_59;
}
else
{
x_31 = x_15;
goto block_59;
}
}
block_59:
{
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_st_ref_take(x_10, x_28);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = !lean_is_exclusive(x_33);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_36 = lean_ctor_get(x_33, 0);
x_37 = lean_ctor_get(x_33, 4);
lean_dec(x_37);
x_38 = l_Lean_Kernel_enableDiag(x_36, x_25);
x_39 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
lean_ctor_set(x_33, 4, x_39);
lean_ctor_set(x_33, 0, x_38);
x_40 = lean_st_ref_set(x_10, x_33, x_34);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_box(0);
x_43 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(x_23, x_25, x_2, x_7, x_8, x_6, x_3, x_4, x_42, x_9, x_10, x_41);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_44 = lean_ctor_get(x_33, 0);
x_45 = lean_ctor_get(x_33, 1);
x_46 = lean_ctor_get(x_33, 2);
x_47 = lean_ctor_get(x_33, 3);
x_48 = lean_ctor_get(x_33, 5);
x_49 = lean_ctor_get(x_33, 6);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_33);
x_50 = l_Lean_Kernel_enableDiag(x_44, x_25);
x_51 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
x_52 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_45);
lean_ctor_set(x_52, 2, x_46);
lean_ctor_set(x_52, 3, x_47);
lean_ctor_set(x_52, 4, x_51);
lean_ctor_set(x_52, 5, x_48);
lean_ctor_set(x_52, 6, x_49);
x_53 = lean_st_ref_set(x_10, x_52, x_34);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_box(0);
x_56 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(x_23, x_25, x_2, x_7, x_8, x_6, x_3, x_4, x_55, x_9, x_10, x_54);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_box(0);
x_58 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(x_23, x_25, x_2, x_7, x_8, x_6, x_3, x_4, x_57, x_9, x_10, x_28);
return x_58;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_60 = !lean_is_exclusive(x_16);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_16, 0);
lean_dec(x_61);
x_62 = lean_box(0);
lean_ctor_set(x_16, 0, x_62);
return x_16;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_16, 1);
lean_inc(x_63);
lean_dec(x_16);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_66 = !lean_is_exclusive(x_16);
if (x_66 == 0)
{
return x_16;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_16, 0);
x_68 = lean_ctor_get(x_16, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_16);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_12);
if (x_70 == 0)
{
return x_12;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_12, 0);
x_72 = lean_ctor_get(x_12, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_12);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
uint8_t x_18; 
x_18 = lean_nat_dec_le(x_10, x_9);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_8, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; uint8_t x_24; lean_object* x_25; 
lean_dec(x_12);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_8, x_21);
lean_dec(x_8);
x_23 = lean_nat_dec_lt(x_9, x_3);
x_24 = lean_nat_dec_lt(x_9, x_4);
if (x_23 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = l_Lean_Elab_instInhabitedPreDefinition;
x_55 = l_outOfBounds___rarg(x_54);
x_25 = x_55;
goto block_53;
}
else
{
lean_object* x_56; 
x_56 = lean_array_fget(x_1, x_9);
x_25 = x_56;
goto block_53;
}
block_53:
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 4);
lean_inc(x_26);
lean_inc(x_5);
lean_inc(x_6);
lean_inc(x_7);
x_27 = lean_alloc_closure((void*)(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___boxed), 11, 4);
lean_closure_set(x_27, 0, x_7);
lean_closure_set(x_27, 1, x_6);
lean_closure_set(x_27, 2, x_5);
lean_closure_set(x_27, 3, x_25);
if (x_24 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_28 = l_instInhabitedNat;
x_29 = l_outOfBounds___rarg(x_28);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = 0;
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_32 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_setMVarUserNamesAt___spec__3___rarg(x_26, x_30, x_27, x_31, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_nat_add(x_9, x_11);
lean_dec(x_9);
x_35 = lean_box(0);
x_8 = x_22;
x_9 = x_34;
x_12 = x_35;
x_17 = x_33;
goto _start;
}
else
{
uint8_t x_37; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; 
x_41 = lean_array_fget(x_2, x_9);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = 0;
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_44 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_setMVarUserNamesAt___spec__3___rarg(x_26, x_42, x_27, x_43, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_nat_add(x_9, x_11);
lean_dec(x_9);
x_47 = lean_box(0);
x_8 = x_22;
x_9 = x_46;
x_12 = x_47;
x_17 = x_45;
goto _start;
}
else
{
uint8_t x_49; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_49 = !lean_is_exclusive(x_44);
if (x_49 == 0)
{
return x_44;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_44, 0);
x_51 = lean_ctor_get(x_44, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_44);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
}
else
{
lean_object* x_57; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_12);
lean_ctor_set(x_57, 1, x_17);
return x_57;
}
}
else
{
lean_object* x_58; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_12);
lean_ctor_set(x_58, 1, x_17);
return x_58;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Lean_Meta_getLevel(x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_box(0);
lean_inc(x_3);
x_18 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2(x_1, x_2, x_3, x_4, x_5, x_7, x_14, x_3, x_16, x_3, x_16, x_17, x_8, x_9, x_10, x_11, x_15);
lean_dec(x_3);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_13);
if (x_27 == 0)
{
return x_13;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_13, 0);
x_29 = lean_ctor_get(x_13, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_13);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_array_size(x_1);
x_9 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1(x_8, x_9, x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_array_get_size(x_1);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_lt(x_14, x_13);
x_16 = lean_array_get_size(x_11);
x_17 = lean_nat_dec_lt(x_14, x_16);
if (x_15 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = l_Lean_Elab_instInhabitedPreDefinition;
x_32 = l_outOfBounds___rarg(x_31);
x_18 = x_32;
goto block_30;
}
else
{
lean_object* x_33; 
x_33 = lean_array_fget(x_1, x_14);
x_18 = x_33;
goto block_30;
}
block_30:
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 4);
lean_inc(x_19);
lean_inc(x_11);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_checkCodomainsLevel___lambda__1___boxed), 12, 5);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_11);
lean_closure_set(x_20, 2, x_13);
lean_closure_set(x_20, 3, x_16);
lean_closure_set(x_20, 4, x_18);
if (x_17 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
lean_dec(x_11);
x_21 = l_instInhabitedNat;
x_22 = l_outOfBounds___rarg(x_21);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = 0;
x_25 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(x_19, x_23, x_20, x_24, x_3, x_4, x_5, x_6, x_12);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_26 = lean_array_fget(x_11, x_14);
lean_dec(x_11);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = 0;
x_29 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(x_19, x_27, x_20, x_28, x_3, x_4, x_5, x_6, x_12);
return x_29;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_10);
if (x_34 == 0)
{
return x_10;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_10, 0);
x_36 = lean_ctor_get(x_10, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_10);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Elab_checkCodomainsLevel___lambda__2(x_1, x_10, x_2, x_3, x_4, x_5, x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_5);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
lean_object* x_18; 
x_18 = l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_checkCodomainsLevel___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_checkCodomainsLevel___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_3, x_2);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_10 = lean_array_uget(x_1, x_3);
x_11 = lean_ctor_get(x_10, 4);
lean_inc(x_11);
x_12 = lean_array_push(x_4, x_11);
x_13 = lean_ctor_get(x_10, 5);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_array_push(x_12, x_13);
x_15 = 1;
x_16 = lean_usize_add(x_3, x_15);
x_3 = x_16;
x_4 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = lean_nat_dec_lt(x_9, x_6);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_9);
lean_dec(x_8);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_eq(x_8, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_8, x_19);
lean_dec(x_8);
x_21 = lean_array_fget(x_1, x_9);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; uint8_t x_30; 
x_23 = lean_ctor_get(x_21, 5);
lean_dec(x_23);
x_24 = lean_ctor_get(x_21, 4);
lean_dec(x_24);
x_25 = lean_unsigned_to_nat(2u);
x_26 = lean_nat_mul(x_25, x_9);
x_27 = lean_array_get_size(x_2);
x_28 = lean_nat_dec_lt(x_26, x_27);
x_29 = lean_nat_add(x_26, x_19);
x_30 = lean_nat_dec_lt(x_29, x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_26);
x_31 = l_Lean_instInhabitedExpr;
x_32 = l_outOfBounds___rarg(x_31);
if (x_30 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_29);
x_33 = l_outOfBounds___rarg(x_31);
lean_ctor_set(x_21, 5, x_33);
lean_ctor_set(x_21, 4, x_32);
x_34 = lean_array_push(x_11, x_21);
x_35 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_20;
x_9 = x_35;
x_10 = lean_box(0);
x_11 = x_34;
goto _start;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_array_fget(x_2, x_29);
lean_dec(x_29);
lean_ctor_set(x_21, 5, x_37);
lean_ctor_set(x_21, 4, x_32);
x_38 = lean_array_push(x_11, x_21);
x_39 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_20;
x_9 = x_39;
x_10 = lean_box(0);
x_11 = x_38;
goto _start;
}
}
else
{
lean_object* x_41; 
x_41 = lean_array_fget(x_2, x_26);
lean_dec(x_26);
if (x_30 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_29);
x_42 = l_Lean_instInhabitedExpr;
x_43 = l_outOfBounds___rarg(x_42);
lean_ctor_set(x_21, 5, x_43);
lean_ctor_set(x_21, 4, x_41);
x_44 = lean_array_push(x_11, x_21);
x_45 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_20;
x_9 = x_45;
x_10 = lean_box(0);
x_11 = x_44;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_array_fget(x_2, x_29);
lean_dec(x_29);
lean_ctor_set(x_21, 5, x_47);
lean_ctor_set(x_21, 4, x_41);
x_48 = lean_array_push(x_11, x_21);
x_49 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_20;
x_9 = x_49;
x_10 = lean_box(0);
x_11 = x_48;
goto _start;
}
}
}
else
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; uint8_t x_62; 
x_51 = lean_ctor_get(x_21, 0);
x_52 = lean_ctor_get_uint8(x_21, sizeof(void*)*7);
x_53 = lean_ctor_get(x_21, 1);
x_54 = lean_ctor_get(x_21, 2);
x_55 = lean_ctor_get(x_21, 3);
x_56 = lean_ctor_get(x_21, 6);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_51);
lean_dec(x_21);
x_57 = lean_unsigned_to_nat(2u);
x_58 = lean_nat_mul(x_57, x_9);
x_59 = lean_array_get_size(x_2);
x_60 = lean_nat_dec_lt(x_58, x_59);
x_61 = lean_nat_add(x_58, x_19);
x_62 = lean_nat_dec_lt(x_61, x_59);
lean_dec(x_59);
if (x_60 == 0)
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_58);
x_63 = l_Lean_instInhabitedExpr;
x_64 = l_outOfBounds___rarg(x_63);
if (x_62 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_61);
x_65 = l_outOfBounds___rarg(x_63);
x_66 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_66, 0, x_51);
lean_ctor_set(x_66, 1, x_53);
lean_ctor_set(x_66, 2, x_54);
lean_ctor_set(x_66, 3, x_55);
lean_ctor_set(x_66, 4, x_64);
lean_ctor_set(x_66, 5, x_65);
lean_ctor_set(x_66, 6, x_56);
lean_ctor_set_uint8(x_66, sizeof(void*)*7, x_52);
x_67 = lean_array_push(x_11, x_66);
x_68 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_20;
x_9 = x_68;
x_10 = lean_box(0);
x_11 = x_67;
goto _start;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_70 = lean_array_fget(x_2, x_61);
lean_dec(x_61);
x_71 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_71, 0, x_51);
lean_ctor_set(x_71, 1, x_53);
lean_ctor_set(x_71, 2, x_54);
lean_ctor_set(x_71, 3, x_55);
lean_ctor_set(x_71, 4, x_64);
lean_ctor_set(x_71, 5, x_70);
lean_ctor_set(x_71, 6, x_56);
lean_ctor_set_uint8(x_71, sizeof(void*)*7, x_52);
x_72 = lean_array_push(x_11, x_71);
x_73 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_20;
x_9 = x_73;
x_10 = lean_box(0);
x_11 = x_72;
goto _start;
}
}
else
{
lean_object* x_75; 
x_75 = lean_array_fget(x_2, x_58);
lean_dec(x_58);
if (x_62 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_61);
x_76 = l_Lean_instInhabitedExpr;
x_77 = l_outOfBounds___rarg(x_76);
x_78 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_78, 0, x_51);
lean_ctor_set(x_78, 1, x_53);
lean_ctor_set(x_78, 2, x_54);
lean_ctor_set(x_78, 3, x_55);
lean_ctor_set(x_78, 4, x_75);
lean_ctor_set(x_78, 5, x_77);
lean_ctor_set(x_78, 6, x_56);
lean_ctor_set_uint8(x_78, sizeof(void*)*7, x_52);
x_79 = lean_array_push(x_11, x_78);
x_80 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_20;
x_9 = x_80;
x_10 = lean_box(0);
x_11 = x_79;
goto _start;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_array_fget(x_2, x_61);
lean_dec(x_61);
x_83 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_83, 0, x_51);
lean_ctor_set(x_83, 1, x_53);
lean_ctor_set(x_83, 2, x_54);
lean_ctor_set(x_83, 3, x_55);
lean_ctor_set(x_83, 4, x_75);
lean_ctor_set(x_83, 5, x_82);
lean_ctor_set(x_83, 6, x_56);
lean_ctor_set_uint8(x_83, sizeof(void*)*7, x_52);
x_84 = lean_array_push(x_11, x_83);
x_85 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_20;
x_9 = x_85;
x_10 = lean_box(0);
x_11 = x_84;
goto _start;
}
}
}
}
else
{
lean_object* x_87; 
lean_dec(x_9);
lean_dec(x_8);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_11);
lean_ctor_set(x_87, 1, x_14);
return x_87;
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_7);
x_10 = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_compileDecl___spec__5(x_1, x_5, x_2, x_3, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_4, x_7, x_8, x_11);
lean_dec(x_7);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8, double x_9, double x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
double x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
lean_inc(x_3);
lean_inc(x_1);
x_16 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_3);
lean_ctor_set_float(x_16, sizeof(void*)*2, x_15);
lean_ctor_set_float(x_16, sizeof(void*)*2 + 8, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*2 + 16, x_2);
x_17 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__2;
x_18 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_7, x_17);
if (x_18 == 0)
{
if (x_8 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_3);
lean_dec(x_1);
x_19 = lean_box(0);
x_20 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1(x_4, x_5, x_11, x_6, x_16, x_19, x_12, x_13, x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_16);
x_21 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_3);
lean_ctor_set_float(x_21, sizeof(void*)*2, x_9);
lean_ctor_set_float(x_21, sizeof(void*)*2 + 8, x_10);
lean_ctor_set_uint8(x_21, sizeof(void*)*2 + 16, x_2);
x_22 = lean_box(0);
x_23 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1(x_4, x_5, x_11, x_6, x_21, x_22, x_12, x_13, x_14);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_16);
x_24 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_24, 0, x_1);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set_float(x_24, sizeof(void*)*2, x_9);
lean_ctor_set_float(x_24, sizeof(void*)*2 + 8, x_10);
lean_ctor_set_uint8(x_24, sizeof(void*)*2 + 16, x_2);
x_25 = lean_box(0);
x_26 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1(x_4, x_5, x_11, x_6, x_24, x_25, x_12, x_13, x_14);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, double x_8, double x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 5);
lean_inc(x_15);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_5);
x_16 = lean_apply_4(x_10, x_5, x_12, x_13, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_15, x_5, x_6, x_7, x_8, x_9, x_17, x_12, x_13, x_18);
lean_dec(x_13);
lean_dec(x_5);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2;
x_22 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_15, x_5, x_6, x_7, x_8, x_9, x_21, x_12, x_13, x_20);
lean_dec(x_13);
lean_dec(x_5);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_compileDecl___spec__4___rarg(x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1;
x_16 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_85 = lean_io_mono_nanos_now(x_14);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
lean_inc(x_10);
lean_inc(x_9);
x_88 = lean_apply_3(x_7, x_9, x_10, x_87);
if (lean_obj_tag(x_88) == 0)
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_90 = lean_ctor_get(x_88, 0);
x_91 = lean_ctor_get(x_88, 1);
x_92 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_92, 0, x_90);
x_93 = lean_io_mono_nanos_now(x_91);
x_94 = !lean_is_exclusive(x_93);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; uint8_t x_97; lean_object* x_98; double x_99; double x_100; double x_101; double x_102; double x_103; lean_object* x_104; lean_object* x_105; 
x_95 = lean_ctor_get(x_93, 0);
x_96 = lean_ctor_get(x_93, 1);
x_97 = 0;
x_98 = lean_unsigned_to_nat(0u);
x_99 = l_Float_ofScientific(x_86, x_97, x_98);
lean_dec(x_86);
x_100 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_101 = lean_float_div(x_99, x_100);
x_102 = l_Float_ofScientific(x_95, x_97, x_98);
lean_dec(x_95);
x_103 = lean_float_div(x_102, x_100);
x_104 = lean_box_float(x_101);
x_105 = lean_box_float(x_103);
lean_ctor_set(x_93, 1, x_105);
lean_ctor_set(x_93, 0, x_104);
lean_ctor_set(x_88, 1, x_93);
lean_ctor_set(x_88, 0, x_92);
x_17 = x_88;
x_18 = x_96;
goto block_84;
}
else
{
lean_object* x_106; lean_object* x_107; uint8_t x_108; lean_object* x_109; double x_110; double x_111; double x_112; double x_113; double x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_106 = lean_ctor_get(x_93, 0);
x_107 = lean_ctor_get(x_93, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_93);
x_108 = 0;
x_109 = lean_unsigned_to_nat(0u);
x_110 = l_Float_ofScientific(x_86, x_108, x_109);
lean_dec(x_86);
x_111 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_112 = lean_float_div(x_110, x_111);
x_113 = l_Float_ofScientific(x_106, x_108, x_109);
lean_dec(x_106);
x_114 = lean_float_div(x_113, x_111);
x_115 = lean_box_float(x_112);
x_116 = lean_box_float(x_114);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
lean_ctor_set(x_88, 1, x_117);
lean_ctor_set(x_88, 0, x_92);
x_17 = x_88;
x_18 = x_107;
goto block_84;
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; double x_127; double x_128; double x_129; double x_130; double x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_118 = lean_ctor_get(x_88, 0);
x_119 = lean_ctor_get(x_88, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_88);
x_120 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_120, 0, x_118);
x_121 = lean_io_mono_nanos_now(x_119);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_124 = x_121;
} else {
 lean_dec_ref(x_121);
 x_124 = lean_box(0);
}
x_125 = 0;
x_126 = lean_unsigned_to_nat(0u);
x_127 = l_Float_ofScientific(x_86, x_125, x_126);
lean_dec(x_86);
x_128 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_129 = lean_float_div(x_127, x_128);
x_130 = l_Float_ofScientific(x_122, x_125, x_126);
lean_dec(x_122);
x_131 = lean_float_div(x_130, x_128);
x_132 = lean_box_float(x_129);
x_133 = lean_box_float(x_131);
if (lean_is_scalar(x_124)) {
 x_134 = lean_alloc_ctor(0, 2, 0);
} else {
 x_134 = x_124;
}
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_120);
lean_ctor_set(x_135, 1, x_134);
x_17 = x_135;
x_18 = x_123;
goto block_84;
}
}
else
{
uint8_t x_136; 
x_136 = !lean_is_exclusive(x_88);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
x_137 = lean_ctor_get(x_88, 0);
x_138 = lean_ctor_get(x_88, 1);
x_139 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_139, 0, x_137);
x_140 = lean_io_mono_nanos_now(x_138);
x_141 = !lean_is_exclusive(x_140);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; uint8_t x_144; lean_object* x_145; double x_146; double x_147; double x_148; double x_149; double x_150; lean_object* x_151; lean_object* x_152; 
x_142 = lean_ctor_get(x_140, 0);
x_143 = lean_ctor_get(x_140, 1);
x_144 = 0;
x_145 = lean_unsigned_to_nat(0u);
x_146 = l_Float_ofScientific(x_86, x_144, x_145);
lean_dec(x_86);
x_147 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_148 = lean_float_div(x_146, x_147);
x_149 = l_Float_ofScientific(x_142, x_144, x_145);
lean_dec(x_142);
x_150 = lean_float_div(x_149, x_147);
x_151 = lean_box_float(x_148);
x_152 = lean_box_float(x_150);
lean_ctor_set(x_140, 1, x_152);
lean_ctor_set(x_140, 0, x_151);
lean_ctor_set_tag(x_88, 0);
lean_ctor_set(x_88, 1, x_140);
lean_ctor_set(x_88, 0, x_139);
x_17 = x_88;
x_18 = x_143;
goto block_84;
}
else
{
lean_object* x_153; lean_object* x_154; uint8_t x_155; lean_object* x_156; double x_157; double x_158; double x_159; double x_160; double x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_153 = lean_ctor_get(x_140, 0);
x_154 = lean_ctor_get(x_140, 1);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_140);
x_155 = 0;
x_156 = lean_unsigned_to_nat(0u);
x_157 = l_Float_ofScientific(x_86, x_155, x_156);
lean_dec(x_86);
x_158 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_159 = lean_float_div(x_157, x_158);
x_160 = l_Float_ofScientific(x_153, x_155, x_156);
lean_dec(x_153);
x_161 = lean_float_div(x_160, x_158);
x_162 = lean_box_float(x_159);
x_163 = lean_box_float(x_161);
x_164 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
lean_ctor_set_tag(x_88, 0);
lean_ctor_set(x_88, 1, x_164);
lean_ctor_set(x_88, 0, x_139);
x_17 = x_88;
x_18 = x_154;
goto block_84;
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; lean_object* x_173; double x_174; double x_175; double x_176; double x_177; double x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_165 = lean_ctor_get(x_88, 0);
x_166 = lean_ctor_get(x_88, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_88);
x_167 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_167, 0, x_165);
x_168 = lean_io_mono_nanos_now(x_166);
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_168, 1);
lean_inc(x_170);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_171 = x_168;
} else {
 lean_dec_ref(x_168);
 x_171 = lean_box(0);
}
x_172 = 0;
x_173 = lean_unsigned_to_nat(0u);
x_174 = l_Float_ofScientific(x_86, x_172, x_173);
lean_dec(x_86);
x_175 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_176 = lean_float_div(x_174, x_175);
x_177 = l_Float_ofScientific(x_169, x_172, x_173);
lean_dec(x_169);
x_178 = lean_float_div(x_177, x_175);
x_179 = lean_box_float(x_176);
x_180 = lean_box_float(x_178);
if (lean_is_scalar(x_171)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_171;
}
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_182, 0, x_167);
lean_ctor_set(x_182, 1, x_181);
x_17 = x_182;
x_18 = x_170;
goto block_84;
}
}
block_84:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_70; uint8_t x_71; 
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_70 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_71 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_70);
if (x_71 == 0)
{
uint8_t x_72; 
x_72 = 0;
x_23 = x_72;
goto block_69;
}
else
{
double x_73; double x_74; double x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; double x_80; double x_81; double x_82; uint8_t x_83; 
x_73 = lean_unbox_float(x_22);
x_74 = lean_unbox_float(x_21);
x_75 = lean_float_sub(x_73, x_74);
x_76 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3;
x_77 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_76);
x_78 = 0;
x_79 = lean_unsigned_to_nat(0u);
x_80 = l_Float_ofScientific(x_77, x_78, x_79);
lean_dec(x_77);
x_81 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4;
x_82 = lean_float_div(x_80, x_81);
x_83 = lean_float_decLt(x_82, x_75);
x_23 = x_83;
goto block_69;
}
block_69:
{
if (x_6 == 0)
{
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_24 = lean_st_ref_take(x_10, x_18);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = !lean_is_exclusive(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_25, 3);
x_29 = l_Lean_PersistentArray_append___rarg(x_13, x_28);
lean_dec(x_28);
lean_ctor_set(x_25, 3, x_29);
x_30 = lean_st_ref_set(x_10, x_25, x_26);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_20, x_9, x_10, x_31);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_20);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
return x_32;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_41 = lean_ctor_get(x_25, 0);
x_42 = lean_ctor_get(x_25, 1);
x_43 = lean_ctor_get(x_25, 2);
x_44 = lean_ctor_get(x_25, 3);
x_45 = lean_ctor_get(x_25, 4);
x_46 = lean_ctor_get(x_25, 5);
x_47 = lean_ctor_get(x_25, 6);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_25);
x_48 = l_Lean_PersistentArray_append___rarg(x_13, x_44);
lean_dec(x_44);
x_49 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_49, 0, x_41);
lean_ctor_set(x_49, 1, x_42);
lean_ctor_set(x_49, 2, x_43);
lean_ctor_set(x_49, 3, x_48);
lean_ctor_set(x_49, 4, x_45);
lean_ctor_set(x_49, 5, x_46);
lean_ctor_set(x_49, 6, x_47);
x_50 = lean_st_ref_set(x_10, x_49, x_26);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_20, x_9, x_10, x_51);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_20);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_55 = x_52;
} else {
 lean_dec_ref(x_52);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_52, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_59 = x_52;
} else {
 lean_dec_ref(x_52);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
else
{
lean_object* x_61; double x_62; double x_63; lean_object* x_64; 
x_61 = lean_box(0);
x_62 = lean_unbox_float(x_21);
lean_dec(x_21);
x_63 = lean_unbox_float(x_22);
lean_dec(x_22);
x_64 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_2, x_3, x_4, x_13, x_20, x_1, x_23, x_62, x_63, x_5, x_61, x_9, x_10, x_18);
return x_64;
}
}
else
{
lean_object* x_65; double x_66; double x_67; lean_object* x_68; 
x_65 = lean_box(0);
x_66 = lean_unbox_float(x_21);
lean_dec(x_21);
x_67 = lean_unbox_float(x_22);
lean_dec(x_22);
x_68 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_2, x_3, x_4, x_13, x_20, x_1, x_23, x_66, x_67, x_5, x_65, x_9, x_10, x_18);
return x_68;
}
}
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_249 = lean_io_get_num_heartbeats(x_14);
x_250 = lean_ctor_get(x_249, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_249, 1);
lean_inc(x_251);
lean_dec(x_249);
lean_inc(x_10);
lean_inc(x_9);
x_252 = lean_apply_3(x_7, x_9, x_10, x_251);
if (lean_obj_tag(x_252) == 0)
{
uint8_t x_253; 
x_253 = !lean_is_exclusive(x_252);
if (x_253 == 0)
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; uint8_t x_258; 
x_254 = lean_ctor_get(x_252, 0);
x_255 = lean_ctor_get(x_252, 1);
x_256 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_256, 0, x_254);
x_257 = lean_io_get_num_heartbeats(x_255);
x_258 = !lean_is_exclusive(x_257);
if (x_258 == 0)
{
lean_object* x_259; lean_object* x_260; uint8_t x_261; lean_object* x_262; double x_263; double x_264; lean_object* x_265; lean_object* x_266; 
x_259 = lean_ctor_get(x_257, 0);
x_260 = lean_ctor_get(x_257, 1);
x_261 = 0;
x_262 = lean_unsigned_to_nat(0u);
x_263 = l_Float_ofScientific(x_250, x_261, x_262);
lean_dec(x_250);
x_264 = l_Float_ofScientific(x_259, x_261, x_262);
lean_dec(x_259);
x_265 = lean_box_float(x_263);
x_266 = lean_box_float(x_264);
lean_ctor_set(x_257, 1, x_266);
lean_ctor_set(x_257, 0, x_265);
lean_ctor_set(x_252, 1, x_257);
lean_ctor_set(x_252, 0, x_256);
x_183 = x_252;
x_184 = x_260;
goto block_248;
}
else
{
lean_object* x_267; lean_object* x_268; uint8_t x_269; lean_object* x_270; double x_271; double x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_267 = lean_ctor_get(x_257, 0);
x_268 = lean_ctor_get(x_257, 1);
lean_inc(x_268);
lean_inc(x_267);
lean_dec(x_257);
x_269 = 0;
x_270 = lean_unsigned_to_nat(0u);
x_271 = l_Float_ofScientific(x_250, x_269, x_270);
lean_dec(x_250);
x_272 = l_Float_ofScientific(x_267, x_269, x_270);
lean_dec(x_267);
x_273 = lean_box_float(x_271);
x_274 = lean_box_float(x_272);
x_275 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_275, 0, x_273);
lean_ctor_set(x_275, 1, x_274);
lean_ctor_set(x_252, 1, x_275);
lean_ctor_set(x_252, 0, x_256);
x_183 = x_252;
x_184 = x_268;
goto block_248;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; uint8_t x_283; lean_object* x_284; double x_285; double x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_276 = lean_ctor_get(x_252, 0);
x_277 = lean_ctor_get(x_252, 1);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_252);
x_278 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_278, 0, x_276);
x_279 = lean_io_get_num_heartbeats(x_277);
x_280 = lean_ctor_get(x_279, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_279, 1);
lean_inc(x_281);
if (lean_is_exclusive(x_279)) {
 lean_ctor_release(x_279, 0);
 lean_ctor_release(x_279, 1);
 x_282 = x_279;
} else {
 lean_dec_ref(x_279);
 x_282 = lean_box(0);
}
x_283 = 0;
x_284 = lean_unsigned_to_nat(0u);
x_285 = l_Float_ofScientific(x_250, x_283, x_284);
lean_dec(x_250);
x_286 = l_Float_ofScientific(x_280, x_283, x_284);
lean_dec(x_280);
x_287 = lean_box_float(x_285);
x_288 = lean_box_float(x_286);
if (lean_is_scalar(x_282)) {
 x_289 = lean_alloc_ctor(0, 2, 0);
} else {
 x_289 = x_282;
}
lean_ctor_set(x_289, 0, x_287);
lean_ctor_set(x_289, 1, x_288);
x_290 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_290, 0, x_278);
lean_ctor_set(x_290, 1, x_289);
x_183 = x_290;
x_184 = x_281;
goto block_248;
}
}
else
{
uint8_t x_291; 
x_291 = !lean_is_exclusive(x_252);
if (x_291 == 0)
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; uint8_t x_296; 
x_292 = lean_ctor_get(x_252, 0);
x_293 = lean_ctor_get(x_252, 1);
x_294 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_294, 0, x_292);
x_295 = lean_io_get_num_heartbeats(x_293);
x_296 = !lean_is_exclusive(x_295);
if (x_296 == 0)
{
lean_object* x_297; lean_object* x_298; uint8_t x_299; lean_object* x_300; double x_301; double x_302; lean_object* x_303; lean_object* x_304; 
x_297 = lean_ctor_get(x_295, 0);
x_298 = lean_ctor_get(x_295, 1);
x_299 = 0;
x_300 = lean_unsigned_to_nat(0u);
x_301 = l_Float_ofScientific(x_250, x_299, x_300);
lean_dec(x_250);
x_302 = l_Float_ofScientific(x_297, x_299, x_300);
lean_dec(x_297);
x_303 = lean_box_float(x_301);
x_304 = lean_box_float(x_302);
lean_ctor_set(x_295, 1, x_304);
lean_ctor_set(x_295, 0, x_303);
lean_ctor_set_tag(x_252, 0);
lean_ctor_set(x_252, 1, x_295);
lean_ctor_set(x_252, 0, x_294);
x_183 = x_252;
x_184 = x_298;
goto block_248;
}
else
{
lean_object* x_305; lean_object* x_306; uint8_t x_307; lean_object* x_308; double x_309; double x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_305 = lean_ctor_get(x_295, 0);
x_306 = lean_ctor_get(x_295, 1);
lean_inc(x_306);
lean_inc(x_305);
lean_dec(x_295);
x_307 = 0;
x_308 = lean_unsigned_to_nat(0u);
x_309 = l_Float_ofScientific(x_250, x_307, x_308);
lean_dec(x_250);
x_310 = l_Float_ofScientific(x_305, x_307, x_308);
lean_dec(x_305);
x_311 = lean_box_float(x_309);
x_312 = lean_box_float(x_310);
x_313 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_313, 0, x_311);
lean_ctor_set(x_313, 1, x_312);
lean_ctor_set_tag(x_252, 0);
lean_ctor_set(x_252, 1, x_313);
lean_ctor_set(x_252, 0, x_294);
x_183 = x_252;
x_184 = x_306;
goto block_248;
}
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; uint8_t x_321; lean_object* x_322; double x_323; double x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; 
x_314 = lean_ctor_get(x_252, 0);
x_315 = lean_ctor_get(x_252, 1);
lean_inc(x_315);
lean_inc(x_314);
lean_dec(x_252);
x_316 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_316, 0, x_314);
x_317 = lean_io_get_num_heartbeats(x_315);
x_318 = lean_ctor_get(x_317, 0);
lean_inc(x_318);
x_319 = lean_ctor_get(x_317, 1);
lean_inc(x_319);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 x_320 = x_317;
} else {
 lean_dec_ref(x_317);
 x_320 = lean_box(0);
}
x_321 = 0;
x_322 = lean_unsigned_to_nat(0u);
x_323 = l_Float_ofScientific(x_250, x_321, x_322);
lean_dec(x_250);
x_324 = l_Float_ofScientific(x_318, x_321, x_322);
lean_dec(x_318);
x_325 = lean_box_float(x_323);
x_326 = lean_box_float(x_324);
if (lean_is_scalar(x_320)) {
 x_327 = lean_alloc_ctor(0, 2, 0);
} else {
 x_327 = x_320;
}
lean_ctor_set(x_327, 0, x_325);
lean_ctor_set(x_327, 1, x_326);
x_328 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_328, 0, x_316);
lean_ctor_set(x_328, 1, x_327);
x_183 = x_328;
x_184 = x_319;
goto block_248;
}
}
block_248:
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; uint8_t x_189; lean_object* x_236; uint8_t x_237; 
x_185 = lean_ctor_get(x_183, 1);
lean_inc(x_185);
x_186 = lean_ctor_get(x_183, 0);
lean_inc(x_186);
lean_dec(x_183);
x_187 = lean_ctor_get(x_185, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_185, 1);
lean_inc(x_188);
lean_dec(x_185);
x_236 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_237 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_236);
if (x_237 == 0)
{
uint8_t x_238; 
x_238 = 0;
x_189 = x_238;
goto block_235;
}
else
{
double x_239; double x_240; double x_241; lean_object* x_242; lean_object* x_243; uint8_t x_244; lean_object* x_245; double x_246; uint8_t x_247; 
x_239 = lean_unbox_float(x_188);
x_240 = lean_unbox_float(x_187);
x_241 = lean_float_sub(x_239, x_240);
x_242 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3;
x_243 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_242);
x_244 = 0;
x_245 = lean_unsigned_to_nat(0u);
x_246 = l_Float_ofScientific(x_243, x_244, x_245);
lean_dec(x_243);
x_247 = lean_float_decLt(x_246, x_241);
x_189 = x_247;
goto block_235;
}
block_235:
{
if (x_6 == 0)
{
if (x_189 == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; uint8_t x_193; 
lean_dec(x_188);
lean_dec(x_187);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_190 = lean_st_ref_take(x_10, x_184);
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_190, 1);
lean_inc(x_192);
lean_dec(x_190);
x_193 = !lean_is_exclusive(x_191);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_194 = lean_ctor_get(x_191, 3);
x_195 = l_Lean_PersistentArray_append___rarg(x_13, x_194);
lean_dec(x_194);
lean_ctor_set(x_191, 3, x_195);
x_196 = lean_st_ref_set(x_10, x_191, x_192);
x_197 = lean_ctor_get(x_196, 1);
lean_inc(x_197);
lean_dec(x_196);
x_198 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_186, x_9, x_10, x_197);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_186);
if (lean_obj_tag(x_198) == 0)
{
uint8_t x_199; 
x_199 = !lean_is_exclusive(x_198);
if (x_199 == 0)
{
return x_198;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_198, 0);
x_201 = lean_ctor_get(x_198, 1);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_198);
x_202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_201);
return x_202;
}
}
else
{
uint8_t x_203; 
x_203 = !lean_is_exclusive(x_198);
if (x_203 == 0)
{
return x_198;
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_204 = lean_ctor_get(x_198, 0);
x_205 = lean_ctor_get(x_198, 1);
lean_inc(x_205);
lean_inc(x_204);
lean_dec(x_198);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_204);
lean_ctor_set(x_206, 1, x_205);
return x_206;
}
}
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_207 = lean_ctor_get(x_191, 0);
x_208 = lean_ctor_get(x_191, 1);
x_209 = lean_ctor_get(x_191, 2);
x_210 = lean_ctor_get(x_191, 3);
x_211 = lean_ctor_get(x_191, 4);
x_212 = lean_ctor_get(x_191, 5);
x_213 = lean_ctor_get(x_191, 6);
lean_inc(x_213);
lean_inc(x_212);
lean_inc(x_211);
lean_inc(x_210);
lean_inc(x_209);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_191);
x_214 = l_Lean_PersistentArray_append___rarg(x_13, x_210);
lean_dec(x_210);
x_215 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_215, 0, x_207);
lean_ctor_set(x_215, 1, x_208);
lean_ctor_set(x_215, 2, x_209);
lean_ctor_set(x_215, 3, x_214);
lean_ctor_set(x_215, 4, x_211);
lean_ctor_set(x_215, 5, x_212);
lean_ctor_set(x_215, 6, x_213);
x_216 = lean_st_ref_set(x_10, x_215, x_192);
x_217 = lean_ctor_get(x_216, 1);
lean_inc(x_217);
lean_dec(x_216);
x_218 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_186, x_9, x_10, x_217);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_186);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_218, 1);
lean_inc(x_220);
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 lean_ctor_release(x_218, 1);
 x_221 = x_218;
} else {
 lean_dec_ref(x_218);
 x_221 = lean_box(0);
}
if (lean_is_scalar(x_221)) {
 x_222 = lean_alloc_ctor(0, 2, 0);
} else {
 x_222 = x_221;
}
lean_ctor_set(x_222, 0, x_219);
lean_ctor_set(x_222, 1, x_220);
return x_222;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_223 = lean_ctor_get(x_218, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_218, 1);
lean_inc(x_224);
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 lean_ctor_release(x_218, 1);
 x_225 = x_218;
} else {
 lean_dec_ref(x_218);
 x_225 = lean_box(0);
}
if (lean_is_scalar(x_225)) {
 x_226 = lean_alloc_ctor(1, 2, 0);
} else {
 x_226 = x_225;
}
lean_ctor_set(x_226, 0, x_223);
lean_ctor_set(x_226, 1, x_224);
return x_226;
}
}
}
else
{
lean_object* x_227; double x_228; double x_229; lean_object* x_230; 
x_227 = lean_box(0);
x_228 = lean_unbox_float(x_187);
lean_dec(x_187);
x_229 = lean_unbox_float(x_188);
lean_dec(x_188);
x_230 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_2, x_3, x_4, x_13, x_186, x_1, x_189, x_228, x_229, x_5, x_227, x_9, x_10, x_184);
return x_230;
}
}
else
{
lean_object* x_231; double x_232; double x_233; lean_object* x_234; 
x_231 = lean_box(0);
x_232 = lean_unbox_float(x_187);
lean_dec(x_187);
x_233 = lean_unbox_float(x_188);
lean_dec(x_188);
x_234 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_2, x_3, x_4, x_13, x_186, x_1, x_189, x_232, x_233, x_5, x_231, x_9, x_10, x_184);
return x_234;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_6, 2);
lean_inc(x_9);
lean_inc(x_1);
x_10 = l_Lean_isTracingEnabledFor___at_Lean_compileDecl___spec__3(x_1, x_6, x_7, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_unbox(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_15 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_9, x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_apply_3(x_3, x_6, x_7, x_13);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_16);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_25 = lean_box(0);
x_26 = lean_unbox(x_11);
lean_dec(x_11);
x_27 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4(x_9, x_1, x_4, x_5, x_2, x_26, x_3, x_25, x_6, x_7, x_13);
lean_dec(x_9);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_10, 1);
lean_inc(x_28);
lean_dec(x_10);
x_29 = lean_box(0);
x_30 = lean_unbox(x_11);
lean_dec(x_11);
x_31 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4(x_9, x_1, x_4, x_5, x_2, x_30, x_3, x_29, x_6, x_7, x_28);
lean_dec(x_9);
return x_31;
}
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("share common exprs", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_inc(x_4);
x_8 = l_Array_forInUnsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_sharecommon_quick(x_9);
lean_dec(x_9);
x_12 = lean_array_get_size(x_1);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_unsigned_to_nat(1u);
lean_inc(x_12);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
lean_inc(x_12);
x_16 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2(x_1, x_11, x_12, x_15, x_13, x_12, x_14, x_12, x_13, lean_box(0), x_4, x_5, x_6, x_10);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("maxSharing", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_fixLevelParams___closed__1;
x_2 = l_Lean_Elab_fixLevelParams___closed__2;
x_3 = l_Lean_Elab_shareCommonPreDefs___closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_shareCommonPreDefs___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_array_size(x_1);
x_7 = l_Lean_Elab_instInhabitedPreDefinition___closed__1;
x_8 = lean_box_usize(x_6);
x_9 = l_Lean_Elab_shareCommonPreDefs___boxed__const__1;
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_shareCommonPreDefs___lambda__2___boxed), 7, 4);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_8);
lean_closure_set(x_10, 2, x_9);
lean_closure_set(x_10, 3, x_7);
x_11 = l_Lean_Elab_shareCommonPreDefs___closed__2;
x_12 = l_Lean_Elab_shareCommonPreDefs___closed__3;
x_13 = 1;
x_14 = l_Lean_Elab_fixLevelParams___closed__6;
x_15 = lean_box(x_13);
x_16 = lean_alloc_closure((void*)(l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___boxed), 8, 5);
lean_closure_set(x_16, 0, x_11);
lean_closure_set(x_16, 1, x_12);
lean_closure_set(x_16, 2, x_10);
lean_closure_set(x_16, 3, x_15);
lean_closure_set(x_16, 4, x_14);
x_17 = l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1;
x_18 = lean_box(0);
x_19 = l_Lean_profileitM___at_Lean_addDecl___spec__8___rarg(x_17, x_5, x_16, x_18, x_2, x_3, x_4);
lean_dec(x_5);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; double x_17; double x_18; lean_object* x_19; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = lean_unbox(x_8);
lean_dec(x_8);
x_17 = lean_unbox_float(x_9);
lean_dec(x_9);
x_18 = lean_unbox_float(x_10);
lean_dec(x_10);
x_19 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2(x_1, x_15, x_3, x_4, x_5, x_6, x_7, x_16, x_17, x_18, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; double x_17; double x_18; lean_object* x_19; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = lean_unbox(x_7);
lean_dec(x_7);
x_17 = lean_unbox_float(x_8);
lean_dec(x_8);
x_18 = lean_unbox_float(x_9);
lean_dec(x_9);
x_19 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_1, x_15, x_3, x_4, x_5, x_6, x_16, x_17, x_18, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_11);
lean_dec(x_6);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = lean_unbox(x_6);
lean_dec(x_6);
x_14 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4(x_1, x_2, x_12, x_4, x_5, x_13, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3(x_1, x_2, x_3, x_9, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_shareCommonPreDefs___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Lean_Elab_shareCommonPreDefs___lambda__2(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_10;
}
}
lean_object* initialize_Init_ShareCommon(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_CollectLevelParams(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_NumObjs(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_NumApps(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_AbstractNestedProofs(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_ForEachExpr(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_RecAppSyntax(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_DefView(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_TerminationHint(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_ShareCommon(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NoncomputableAttr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_NumObjs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_NumApps(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AbstractNestedProofs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ForEachExpr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_RecAppSyntax(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DefView(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_TerminationHint(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_instInhabitedPreDefinition___closed__1 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__1();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__1);
l_Lean_Elab_instInhabitedPreDefinition___closed__2 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__2();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__2);
l_Lean_Elab_instInhabitedPreDefinition___closed__3 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__3();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__3);
l_Lean_Elab_instInhabitedPreDefinition___closed__4 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__4();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__4);
l_Lean_Elab_instInhabitedPreDefinition___closed__5 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__5();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__5);
l_Lean_Elab_instInhabitedPreDefinition = _init_l_Lean_Elab_instInhabitedPreDefinition();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition);
l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamPreDecls___spec__1___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1();
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__2 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__2();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__2);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4();
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5();
l_Lean_Elab_fixLevelParams___lambda__1___closed__1 = _init_l_Lean_Elab_fixLevelParams___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___lambda__1___closed__1);
l_Lean_Elab_fixLevelParams___lambda__1___closed__2 = _init_l_Lean_Elab_fixLevelParams___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___lambda__1___closed__2);
l_Lean_Elab_fixLevelParams___closed__1 = _init_l_Lean_Elab_fixLevelParams___closed__1();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__1);
l_Lean_Elab_fixLevelParams___closed__2 = _init_l_Lean_Elab_fixLevelParams___closed__2();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__2);
l_Lean_Elab_fixLevelParams___closed__3 = _init_l_Lean_Elab_fixLevelParams___closed__3();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__3);
l_Lean_Elab_fixLevelParams___closed__4 = _init_l_Lean_Elab_fixLevelParams___closed__4();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__4);
l_Lean_Elab_fixLevelParams___closed__5 = _init_l_Lean_Elab_fixLevelParams___closed__5();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__5);
l_Lean_Elab_fixLevelParams___closed__6 = _init_l_Lean_Elab_fixLevelParams___closed__6();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__6);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___closed__1);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__1 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__1();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__1);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__2 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__2();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__2);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__3 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__3();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__3);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__4 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__4();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__4);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__5 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__5();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__5);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__6 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__6();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__6);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__7 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__7();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__7);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__8 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__8();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030____closed__8);
if (builtin) {res = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_1030_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_diagnostics_threshold_proofSize = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_diagnostics_threshold_proofSize);
lean_dec_ref(res);
}l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__10 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__10();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__10);
l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1 = _init_l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1();
lean_mark_persistent(l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6);
l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1 = _init_l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1);
l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1 = _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1();
lean_mark_persistent(l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1);
l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2 = _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2();
lean_mark_persistent(l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2);
l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3 = _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3();
lean_mark_persistent(l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3);
l_Lean_Elab_addAndCompileUnsafe___boxed__const__1 = _init_l_Lean_Elab_addAndCompileUnsafe___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_addAndCompileUnsafe___boxed__const__1);
l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1);
l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___closed__1);
l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1 = _init_l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1);
l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2 = _init_l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2);
l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1);
l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2);
l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1 = _init_l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1);
l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2 = _init_l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2);
l_Lean_Elab_shareCommonPreDefs___closed__1 = _init_l_Lean_Elab_shareCommonPreDefs___closed__1();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___closed__1);
l_Lean_Elab_shareCommonPreDefs___closed__2 = _init_l_Lean_Elab_shareCommonPreDefs___closed__2();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___closed__2);
l_Lean_Elab_shareCommonPreDefs___closed__3 = _init_l_Lean_Elab_shareCommonPreDefs___closed__3();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___closed__3);
l_Lean_Elab_shareCommonPreDefs___boxed__const__1 = _init_l_Lean_Elab_shareCommonPreDefs___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
