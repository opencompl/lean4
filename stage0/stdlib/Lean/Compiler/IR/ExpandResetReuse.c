// Lean compiler output
// Module: Lean.Compiler.IR.ExpandResetReuse
// Imports: Lean.Compiler.IR.CompilerM Lean.Compiler.IR.NormIds Lean.Compiler.IR.FreeVars
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
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_isSelfSet___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_eraseProjIncFor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__10(lean_object*);
static lean_object* l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__1;
LEAN_EXPORT lean_object* l_Nat_foldTR_loop___at_Lean_IR_ExpandResetReuse_setFields___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__18___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_eraseProjIncForAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__21___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_isSelfSSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_releaseUnreadFields(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1___lambda__2(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__12(lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_IR_push(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__2(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_Lean_IR_ExpandResetReuse_releaseUnreadFields___closed__1;
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__21(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_GetElem_0__outOfBounds___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_adjustReferenceCountsSlowPath(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_main___spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__18(lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedFnBody;
lean_object* l_Lean_IR_FnBody_replaceVar(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_IR_ExpandResetReuse_null___closed__1;
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_expandResetReuse(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_setFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeDrop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkProjMap(lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldTR_loop___at_Lean_IR_ExpandResetReuse_setFields___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_null;
lean_object* l_Array_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_adjustReferenceCountsSlowPath___spec__1(lean_object*, size_t, size_t, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFresh(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReset___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReuse___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFresh___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at_Lean_IR_ExpandResetReuse_isSelfSet___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_eraseProjIncFor___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeDrop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_main(lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_ExpandResetReuse_isSelfSet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_isSelfSet___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__13(lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedArg;
LEAN_EXPORT uint8_t l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_158____at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_mkProjMap___spec__1___boxed(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedVarId;
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReuse(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__8(lean_object*, lean_object*);
size_t lean_hashmap_mk_idx(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__19(lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__3;
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_mkIf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__9(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_updateBody_x21(lean_object*, lean_object*);
static lean_object* l_Lean_IR_ExpandResetReuse_null___closed__2;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_main___spec__2___boxed(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_main___spec__1(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_releaseUnreadFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__14___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__4;
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_ExpandResetReuse_isSelfSSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__20(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_IR_ExpandResetReuse_mkJoin1___closed__2;
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_IR_AltCore_body(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__24(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__11___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_MaxIndex_collectDecl(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_ExpandResetReuse_isSelfUSet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkHashMapImp___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_main___spec__2(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_eraseProjIncForAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__16___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_setFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_searchAndSpecialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_isSelfUSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__5___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__2;
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_adjustReferenceCountsSlowPath___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__5___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_IR_reshape(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_normalizeIds(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReuse___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__16(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_isSelfSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_158____at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFresh___rarg(lean_object*);
lean_object* l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_mkProjMap___spec__1(lean_object*);
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_nat_dec_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 2);
x_7 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_8 = lean_apply_1(x_1, x_5);
x_9 = lean_unbox_uint64(x_8);
lean_dec(x_8);
x_10 = lean_hashmap_mk_idx(x_7, x_9);
x_11 = lean_array_uget(x_2, x_10);
lean_ctor_set(x_3, 2, x_11);
x_12 = lean_array_uset(x_2, x_10, x_3);
x_2 = x_12;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint64_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_ctor_get(x_3, 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_3);
x_17 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_14);
x_18 = lean_apply_1(x_1, x_14);
x_19 = lean_unbox_uint64(x_18);
lean_dec(x_18);
x_20 = lean_hashmap_mk_idx(x_17, x_19);
x_21 = lean_array_uget(x_2, x_20);
x_22 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_15);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_array_uset(x_2, x_20, x_22);
x_2 = x_23;
x_3 = x_16;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__5___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = lean_uint64_of_nat(x_4);
x_8 = lean_hashmap_mk_idx(x_6, x_7);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = lean_uint64_of_nat(x_12);
x_17 = lean_hashmap_mk_idx(x_15, x_16);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__5___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__6(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_HashMapImp_moveEntries___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__4(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_nat_dec_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__7(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_nat_dec_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__7(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_uint64_of_nat(x_2);
lean_inc(x_7);
x_9 = lean_hashmap_mk_idx(x_7, x_8);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__2(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_13);
x_17 = lean_nat_dec_le(x_16, x_7);
lean_dec(x_7);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_free_object(x_1);
x_18 = l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__3(x_13, x_15);
return x_18;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_7);
x_19 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__7(x_2, x_3, x_10);
x_20 = lean_array_uset(x_6, x_9, x_19);
lean_ctor_set(x_1, 1, x_20);
return x_1;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint64_t x_24; size_t x_25; lean_object* x_26; uint8_t x_27; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_1);
x_23 = lean_array_get_size(x_22);
x_24 = lean_uint64_of_nat(x_2);
lean_inc(x_23);
x_25 = lean_hashmap_mk_idx(x_23, x_24);
x_26 = lean_array_uget(x_22, x_25);
x_27 = l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__2(x_2, x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_21, x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_3);
lean_ctor_set(x_30, 2, x_26);
x_31 = lean_array_uset(x_22, x_25, x_30);
x_32 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_29);
x_33 = lean_nat_dec_le(x_32, x_23);
lean_dec(x_23);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__3(x_29, x_31);
return x_34;
}
else
{
lean_object* x_35; 
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_31);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_23);
x_36 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__7(x_2, x_3, x_26);
x_37 = lean_array_uset(x_22, x_25, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_21);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 3:
{
lean_object* x_4; 
x_4 = l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__1(x_3, x_1, x_2);
return x_4;
}
case 4:
{
lean_object* x_5; 
x_5 = l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__1(x_3, x_1, x_2);
return x_5;
}
case 5:
{
lean_object* x_6; 
x_6 = l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__1(x_3, x_1, x_2);
return x_6;
}
default: 
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_IR_AltCore_body(x_6);
lean_dec(x_6);
x_8 = l_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody(x_7, x_4);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_2 = x_10;
x_4 = x_8;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody(x_5, x_2);
switch (lean_obj_tag(x_4)) {
case 3:
{
lean_object* x_7; 
x_7 = l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__1(x_6, x_3, x_4);
return x_7;
}
case 4:
{
lean_object* x_8; 
x_8 = l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__1(x_6, x_3, x_4);
return x_8;
}
case 5:
{
lean_object* x_9; 
x_9 = l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectVDecl___spec__1(x_6, x_3, x_4);
return x_9;
}
default: 
{
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
}
case 1:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody(x_11, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
case 10:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_array_get_size(x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_lt(x_16, x_15);
if (x_17 == 0)
{
lean_dec(x_15);
lean_dec(x_14);
return x_2;
}
else
{
uint8_t x_18; 
x_18 = lean_nat_dec_le(x_15, x_15);
if (x_18 == 0)
{
lean_dec(x_15);
lean_dec(x_14);
return x_2;
}
else
{
size_t x_19; size_t x_20; lean_object* x_21; 
x_19 = 0;
x_20 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_21 = l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody___spec__1(x_14, x_19, x_20, x_2);
lean_dec(x_14);
return x_21;
}
}
}
default: 
{
uint8_t x_22; 
x_22 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = l_Lean_IR_FnBody_body(x_1);
lean_dec(x_1);
x_1 = x_23;
goto _start;
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_mkProjMap___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkProjMap(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_unsigned_to_nat(8u);
x_4 = l_Lean_mkHashMapImp___rarg(x_3);
x_5 = l_Lean_IR_ExpandResetReuse_CollectProjMap_collectFnBody(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(8u);
x_7 = l_Lean_mkHashMapImp___rarg(x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_mkProjMap___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_mkProjMap___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFresh___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFresh(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkFresh___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFresh___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_ExpandResetReuse_mkFresh(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_eraseProjIncForAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_nat_dec_lt(x_5, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_IR_instInhabitedFnBody;
x_9 = l_Array_back___rarg(x_8, x_2);
switch (lean_obj_tag(x_9)) {
case 0:
{
lean_object* x_10; 
lean_dec(x_5);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
switch (lean_obj_tag(x_10)) {
case 4:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_10);
x_11 = lean_array_pop(x_2);
x_12 = lean_array_push(x_4, x_9);
x_2 = x_11;
x_4 = x_12;
goto _start;
}
case 5:
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
x_14 = lean_array_pop(x_2);
x_15 = lean_array_push(x_4, x_9);
x_2 = x_14;
x_4 = x_15;
goto _start;
}
default: 
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_10);
lean_dec(x_9);
x_17 = l_Array_reverse___rarg(x_4);
x_18 = l_Array_append___rarg(x_2, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
}
}
case 6:
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_58; uint8_t x_59; 
x_20 = lean_ctor_get(x_9, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
x_22 = lean_ctor_get_uint8(x_9, sizeof(void*)*3);
x_23 = lean_ctor_get_uint8(x_9, sizeof(void*)*3 + 1);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 lean_ctor_release(x_9, 2);
 x_24 = x_9;
} else {
 lean_dec_ref(x_9);
 x_24 = lean_box(0);
}
x_58 = lean_unsigned_to_nat(0u);
x_59 = lean_nat_dec_eq(x_21, x_58);
if (x_59 == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_nat_sub(x_5, x_6);
x_61 = lean_nat_dec_lt(x_60, x_5);
lean_dec(x_5);
if (x_61 == 0)
{
lean_object* x_62; 
lean_dec(x_60);
x_62 = l___private_Init_GetElem_0__outOfBounds___rarg(x_8);
x_25 = x_62;
goto block_57;
}
else
{
lean_object* x_63; 
x_63 = lean_array_fget(x_2, x_60);
lean_dec(x_60);
x_25 = x_63;
goto block_57;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_5);
x_64 = l_Array_reverse___rarg(x_4);
x_65 = l_Array_append___rarg(x_2, x_64);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_3);
return x_66;
}
block_57:
{
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 2);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 3)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_nat_dec_eq(x_27, x_20);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_20);
x_31 = l_Array_reverse___rarg(x_4);
x_32 = l_Array_append___rarg(x_2, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_3);
return x_33;
}
else
{
uint8_t x_34; 
x_34 = lean_nat_dec_eq(x_1, x_29);
lean_dec(x_29);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_28);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_20);
x_35 = l_Array_reverse___rarg(x_4);
x_36 = l_Array_append___rarg(x_2, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_3);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_38 = lean_array_pop(x_2);
x_39 = lean_array_pop(x_38);
lean_inc(x_20);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_20);
x_41 = lean_array_set(x_3, x_28, x_40);
lean_dec(x_28);
x_42 = lean_array_push(x_4, x_25);
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_dec_eq(x_21, x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_nat_sub(x_21, x_43);
lean_dec(x_21);
x_46 = lean_box(13);
if (lean_is_scalar(x_24)) {
 x_47 = lean_alloc_ctor(6, 3, 2);
} else {
 x_47 = x_24;
}
lean_ctor_set(x_47, 0, x_20);
lean_ctor_set(x_47, 1, x_45);
lean_ctor_set(x_47, 2, x_46);
lean_ctor_set_uint8(x_47, sizeof(void*)*3, x_22);
lean_ctor_set_uint8(x_47, sizeof(void*)*3 + 1, x_23);
x_48 = lean_array_push(x_42, x_47);
x_2 = x_39;
x_3 = x_41;
x_4 = x_48;
goto _start;
}
else
{
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_20);
x_2 = x_39;
x_3 = x_41;
x_4 = x_42;
goto _start;
}
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_20);
x_51 = l_Array_reverse___rarg(x_4);
x_52 = l_Array_append___rarg(x_2, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_3);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_20);
x_54 = l_Array_reverse___rarg(x_4);
x_55 = l_Array_append___rarg(x_2, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_3);
return x_56;
}
}
}
default: 
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_9);
lean_dec(x_5);
x_67 = l_Array_reverse___rarg(x_4);
x_68 = l_Array_append___rarg(x_2, x_67);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_3);
return x_69;
}
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_5);
x_70 = l_Array_reverse___rarg(x_4);
x_71 = l_Array_append___rarg(x_2, x_70);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_3);
return x_72;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_eraseProjIncForAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_ExpandResetReuse_eraseProjIncForAux(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_eraseProjIncFor(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_box(0);
x_5 = lean_mk_array(x_1, x_4);
x_6 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
x_7 = l_Lean_IR_ExpandResetReuse_eraseProjIncForAux(x_2, x_3, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_eraseProjIncFor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
x_6 = lean_box(7);
x_7 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 2, x_5);
lean_ctor_set(x_7, 3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = 1;
x_5 = 0;
x_6 = lean_alloc_ctor(7, 3, 2);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_2);
lean_ctor_set_uint8(x_6, sizeof(void*)*3, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*3 + 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_4, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_4, x_10);
lean_dec(x_4);
x_12 = lean_nat_sub(x_3, x_11);
x_13 = lean_nat_sub(x_12, x_10);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = lean_array_get(x_14, x_2, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_7);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_17);
lean_inc(x_1);
x_19 = lean_alloc_closure((void*)(l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1___lambda__1), 4, 3);
lean_closure_set(x_19, 0, x_13);
lean_closure_set(x_19, 1, x_1);
lean_closure_set(x_19, 2, x_17);
x_20 = lean_alloc_closure((void*)(l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1___lambda__2), 2, 1);
lean_closure_set(x_20, 0, x_17);
x_21 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_21, 0, x_20);
lean_closure_set(x_21, 1, x_5);
x_22 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_22, 0, x_19);
lean_closure_set(x_22, 1, x_21);
x_4 = x_11;
x_5 = x_22;
x_7 = x_18;
goto _start;
}
else
{
lean_dec(x_15);
lean_dec(x_13);
x_4 = x_11;
goto _start;
}
}
else
{
lean_object* x_25; 
lean_dec(x_4);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_7);
return x_25;
}
}
}
static lean_object* _init_l_Lean_IR_ExpandResetReuse_releaseUnreadFields___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_releaseUnreadFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_array_get_size(x_2);
x_6 = l_Lean_IR_ExpandResetReuse_releaseUnreadFields___closed__1;
lean_inc(x_5);
x_7 = l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1(x_1, x_2, x_5, x_5, x_6, x_3, x_4);
lean_dec(x_3);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Nat_foldM_loop___at_Lean_IR_ExpandResetReuse_releaseUnreadFields___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_releaseUnreadFields___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_ExpandResetReuse_releaseUnreadFields(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_isSelfSet___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_nat_dec_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at_Lean_IR_ExpandResetReuse_isSelfSet___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_uint64_of_nat(x_2);
x_6 = lean_hashmap_mk_idx(x_4, x_5);
x_7 = lean_array_uget(x_3, x_6);
lean_dec(x_3);
x_8 = l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_isSelfSet___spec__2(x_2, x_7);
lean_dec(x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_ExpandResetReuse_isSelfSet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_HashMapImp_find_x3f___at_Lean_IR_ExpandResetReuse_isSelfSet___spec__1(x_6, x_5);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
if (lean_obj_tag(x_9) == 3)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_nat_dec_eq(x_10, x_3);
lean_dec(x_10);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_11);
x_13 = 0;
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_eq(x_11, x_2);
lean_dec(x_11);
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_9);
x_15 = 0;
return x_15;
}
}
}
else
{
uint8_t x_16; 
lean_dec(x_1);
x_16 = 0;
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_isSelfSet___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_isSelfSet___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_isSelfSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Lean_IR_ExpandResetReuse_isSelfSet(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_foldTR_loop___at_Lean_IR_ExpandResetReuse_setFields___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_6, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_6, x_10);
lean_dec(x_6);
x_12 = lean_nat_add(x_11, x_10);
x_13 = lean_nat_sub(x_5, x_12);
lean_dec(x_12);
x_14 = l_Lean_IR_instInhabitedArg;
x_15 = lean_array_get(x_14, x_4, x_13);
lean_inc(x_15);
lean_inc(x_1);
x_16 = l_Lean_IR_ExpandResetReuse_isSelfSet(x_1, x_3, x_13, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_inc(x_2);
x_17 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_13);
lean_ctor_set(x_17, 2, x_15);
lean_ctor_set(x_17, 3, x_7);
x_6 = x_11;
x_7 = x_17;
goto _start;
}
else
{
lean_dec(x_15);
lean_dec(x_13);
x_6 = x_11;
goto _start;
}
}
else
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_setFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_array_get_size(x_4);
lean_inc(x_6);
x_7 = l_Nat_foldTR_loop___at_Lean_IR_ExpandResetReuse_setFields___spec__1(x_1, x_2, x_3, x_4, x_6, x_6, x_5);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_foldTR_loop___at_Lean_IR_ExpandResetReuse_setFields___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Nat_foldTR_loop___at_Lean_IR_ExpandResetReuse_setFields___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_setFields___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_ExpandResetReuse_setFields(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_ExpandResetReuse_isSelfUSet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Lean_HashMapImp_find_x3f___at_Lean_IR_ExpandResetReuse_isSelfSet___spec__1(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
if (lean_obj_tag(x_8) == 4)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_nat_dec_eq(x_9, x_3);
lean_dec(x_9);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_10);
x_12 = 0;
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_eq(x_10, x_2);
lean_dec(x_10);
return x_13;
}
}
else
{
uint8_t x_14; 
lean_dec(x_8);
x_14 = 0;
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_isSelfUSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Lean_IR_ExpandResetReuse_isSelfUSet(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_ExpandResetReuse_isSelfSSet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_HashMapImp_find_x3f___at_Lean_IR_ExpandResetReuse_isSelfSet___spec__1(x_6, x_5);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
if (lean_obj_tag(x_9) == 5)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 2);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_nat_dec_eq(x_3, x_10);
lean_dec(x_10);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_12);
lean_dec(x_11);
x_14 = 0;
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_eq(x_11, x_4);
lean_dec(x_11);
if (x_15 == 0)
{
uint8_t x_16; 
lean_dec(x_12);
x_16 = 0;
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_eq(x_12, x_2);
lean_dec(x_12);
return x_17;
}
}
}
else
{
uint8_t x_18; 
lean_dec(x_9);
x_18 = 0;
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_isSelfSSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Lean_IR_ExpandResetReuse_isSelfSSet(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_IR_ExpandResetReuse_null___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_ExpandResetReuse_null___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_IR_ExpandResetReuse_null___closed__1;
x_2 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_ExpandResetReuse_null() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_IR_ExpandResetReuse_null___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 11)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_apply_1(x_2, x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_apply_1(x_2, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_4);
return x_11;
}
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___rarg(x_4);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
lean_inc(x_14);
x_16 = lean_alloc_ctor(12, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_apply_1(x_2, x_16);
x_18 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_15);
lean_ctor_set(x_18, 2, x_1);
lean_ctor_set(x_18, 3, x_17);
lean_ctor_set(x_12, 0, x_18);
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
lean_inc(x_19);
x_22 = lean_alloc_ctor(12, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_apply_1(x_2, x_22);
x_24 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_1);
lean_ctor_set(x_24, 3, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_ExpandResetReuse_mkJoin0(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_array_push(x_1, x_4);
x_6 = lean_alloc_ctor(12, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_ExpandResetReuse_mkJoin1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__2), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = 0;
lean_inc(x_12);
x_14 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_2);
lean_ctor_set_uint8(x_14, sizeof(void*)*2, x_13);
x_15 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_16 = lean_array_push(x_15, x_14);
lean_inc(x_3);
x_17 = l_Lean_IR_FnBody_replaceVar(x_1, x_12, x_3);
x_18 = !lean_is_exclusive(x_3);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_3, 3);
lean_dec(x_19);
x_20 = lean_ctor_get(x_3, 2);
lean_dec(x_20);
x_21 = lean_ctor_get(x_3, 1);
lean_dec(x_21);
x_22 = lean_ctor_get(x_3, 0);
lean_dec(x_22);
lean_inc(x_8);
x_23 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_23, 0, x_15);
lean_closure_set(x_23, 1, x_8);
x_24 = lean_apply_1(x_4, x_23);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 3, x_24);
lean_ctor_set(x_3, 2, x_17);
lean_ctor_set(x_3, 1, x_16);
lean_ctor_set(x_3, 0, x_8);
lean_ctor_set(x_10, 0, x_3);
return x_10;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_3);
lean_inc(x_8);
x_25 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_25, 0, x_15);
lean_closure_set(x_25, 1, x_8);
x_26 = lean_apply_1(x_4, x_25);
x_27 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_27, 0, x_8);
lean_ctor_set(x_27, 1, x_16);
lean_ctor_set(x_27, 2, x_17);
lean_ctor_set(x_27, 3, x_26);
lean_ctor_set(x_10, 0, x_27);
return x_10;
}
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_28 = lean_ctor_get(x_10, 0);
x_29 = lean_ctor_get(x_10, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_10);
x_30 = 0;
lean_inc(x_28);
x_31 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_2);
lean_ctor_set_uint8(x_31, sizeof(void*)*2, x_30);
x_32 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_33 = lean_array_push(x_32, x_31);
lean_inc(x_3);
x_34 = l_Lean_IR_FnBody_replaceVar(x_1, x_28, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_35 = x_3;
} else {
 lean_dec_ref(x_3);
 x_35 = lean_box(0);
}
lean_inc(x_8);
x_36 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_36, 0, x_32);
lean_closure_set(x_36, 1, x_8);
x_37 = lean_apply_1(x_4, x_36);
if (lean_is_scalar(x_35)) {
 x_38 = lean_alloc_ctor(1, 4, 0);
} else {
 x_38 = x_35;
 lean_ctor_set_tag(x_38, 1);
}
lean_ctor_set(x_38, 0, x_8);
lean_ctor_set(x_38, 1, x_33);
lean_ctor_set(x_38, 2, x_34);
lean_ctor_set(x_38, 3, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_29);
return x_39;
}
}
case 1:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_40 = l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___rarg(x_6);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_42);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = 0;
lean_inc(x_45);
x_47 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_2);
lean_ctor_set_uint8(x_47, sizeof(void*)*2, x_46);
x_48 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_49 = lean_array_push(x_48, x_47);
lean_inc(x_3);
x_50 = l_Lean_IR_FnBody_replaceVar(x_1, x_45, x_3);
x_51 = !lean_is_exclusive(x_3);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_52 = lean_ctor_get(x_3, 3);
lean_dec(x_52);
x_53 = lean_ctor_get(x_3, 2);
lean_dec(x_53);
x_54 = lean_ctor_get(x_3, 1);
lean_dec(x_54);
x_55 = lean_ctor_get(x_3, 0);
lean_dec(x_55);
lean_inc(x_41);
x_56 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_56, 0, x_48);
lean_closure_set(x_56, 1, x_41);
x_57 = lean_apply_1(x_4, x_56);
lean_ctor_set(x_3, 3, x_57);
lean_ctor_set(x_3, 2, x_50);
lean_ctor_set(x_3, 1, x_49);
lean_ctor_set(x_3, 0, x_41);
lean_ctor_set(x_43, 0, x_3);
return x_43;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_3);
lean_inc(x_41);
x_58 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_58, 0, x_48);
lean_closure_set(x_58, 1, x_41);
x_59 = lean_apply_1(x_4, x_58);
x_60 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_60, 0, x_41);
lean_ctor_set(x_60, 1, x_49);
lean_ctor_set(x_60, 2, x_50);
lean_ctor_set(x_60, 3, x_59);
lean_ctor_set(x_43, 0, x_60);
return x_43;
}
}
else
{
lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_61 = lean_ctor_get(x_43, 0);
x_62 = lean_ctor_get(x_43, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_43);
x_63 = 0;
lean_inc(x_61);
x_64 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_2);
lean_ctor_set_uint8(x_64, sizeof(void*)*2, x_63);
x_65 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_66 = lean_array_push(x_65, x_64);
lean_inc(x_3);
x_67 = l_Lean_IR_FnBody_replaceVar(x_1, x_61, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_68 = x_3;
} else {
 lean_dec_ref(x_3);
 x_68 = lean_box(0);
}
lean_inc(x_41);
x_69 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_69, 0, x_65);
lean_closure_set(x_69, 1, x_41);
x_70 = lean_apply_1(x_4, x_69);
if (lean_is_scalar(x_68)) {
 x_71 = lean_alloc_ctor(1, 4, 0);
} else {
 x_71 = x_68;
}
lean_ctor_set(x_71, 0, x_41);
lean_ctor_set(x_71, 1, x_66);
lean_ctor_set(x_71, 2, x_67);
lean_ctor_set(x_71, 3, x_70);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_62);
return x_72;
}
}
case 2:
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_73 = l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___rarg(x_6);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_75);
x_77 = !lean_is_exclusive(x_76);
if (x_77 == 0)
{
lean_object* x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_78 = lean_ctor_get(x_76, 0);
x_79 = 0;
lean_inc(x_78);
x_80 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_2);
lean_ctor_set_uint8(x_80, sizeof(void*)*2, x_79);
x_81 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_82 = lean_array_push(x_81, x_80);
lean_inc(x_3);
x_83 = l_Lean_IR_FnBody_replaceVar(x_1, x_78, x_3);
x_84 = !lean_is_exclusive(x_3);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_85 = lean_ctor_get(x_3, 3);
lean_dec(x_85);
x_86 = lean_ctor_get(x_3, 2);
lean_dec(x_86);
x_87 = lean_ctor_get(x_3, 1);
lean_dec(x_87);
x_88 = lean_ctor_get(x_3, 0);
lean_dec(x_88);
lean_inc(x_74);
x_89 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_89, 0, x_81);
lean_closure_set(x_89, 1, x_74);
x_90 = lean_apply_1(x_4, x_89);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 3, x_90);
lean_ctor_set(x_3, 2, x_83);
lean_ctor_set(x_3, 1, x_82);
lean_ctor_set(x_3, 0, x_74);
lean_ctor_set(x_76, 0, x_3);
return x_76;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_3);
lean_inc(x_74);
x_91 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_91, 0, x_81);
lean_closure_set(x_91, 1, x_74);
x_92 = lean_apply_1(x_4, x_91);
x_93 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_93, 0, x_74);
lean_ctor_set(x_93, 1, x_82);
lean_ctor_set(x_93, 2, x_83);
lean_ctor_set(x_93, 3, x_92);
lean_ctor_set(x_76, 0, x_93);
return x_76;
}
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_94 = lean_ctor_get(x_76, 0);
x_95 = lean_ctor_get(x_76, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_76);
x_96 = 0;
lean_inc(x_94);
x_97 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_2);
lean_ctor_set_uint8(x_97, sizeof(void*)*2, x_96);
x_98 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_99 = lean_array_push(x_98, x_97);
lean_inc(x_3);
x_100 = l_Lean_IR_FnBody_replaceVar(x_1, x_94, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_101 = x_3;
} else {
 lean_dec_ref(x_3);
 x_101 = lean_box(0);
}
lean_inc(x_74);
x_102 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_102, 0, x_98);
lean_closure_set(x_102, 1, x_74);
x_103 = lean_apply_1(x_4, x_102);
if (lean_is_scalar(x_101)) {
 x_104 = lean_alloc_ctor(1, 4, 0);
} else {
 x_104 = x_101;
 lean_ctor_set_tag(x_104, 1);
}
lean_ctor_set(x_104, 0, x_74);
lean_ctor_set(x_104, 1, x_99);
lean_ctor_set(x_104, 2, x_100);
lean_ctor_set(x_104, 3, x_103);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_95);
return x_105;
}
}
case 4:
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_106 = l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___rarg(x_6);
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_109 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_108);
x_110 = !lean_is_exclusive(x_109);
if (x_110 == 0)
{
lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_111 = lean_ctor_get(x_109, 0);
x_112 = 0;
lean_inc(x_111);
x_113 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_2);
lean_ctor_set_uint8(x_113, sizeof(void*)*2, x_112);
x_114 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_115 = lean_array_push(x_114, x_113);
lean_inc(x_3);
x_116 = l_Lean_IR_FnBody_replaceVar(x_1, x_111, x_3);
x_117 = !lean_is_exclusive(x_3);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_118 = lean_ctor_get(x_3, 3);
lean_dec(x_118);
x_119 = lean_ctor_get(x_3, 2);
lean_dec(x_119);
x_120 = lean_ctor_get(x_3, 1);
lean_dec(x_120);
x_121 = lean_ctor_get(x_3, 0);
lean_dec(x_121);
lean_inc(x_107);
x_122 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_122, 0, x_114);
lean_closure_set(x_122, 1, x_107);
x_123 = lean_apply_1(x_4, x_122);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 3, x_123);
lean_ctor_set(x_3, 2, x_116);
lean_ctor_set(x_3, 1, x_115);
lean_ctor_set(x_3, 0, x_107);
lean_ctor_set(x_109, 0, x_3);
return x_109;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_3);
lean_inc(x_107);
x_124 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_124, 0, x_114);
lean_closure_set(x_124, 1, x_107);
x_125 = lean_apply_1(x_4, x_124);
x_126 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_126, 0, x_107);
lean_ctor_set(x_126, 1, x_115);
lean_ctor_set(x_126, 2, x_116);
lean_ctor_set(x_126, 3, x_125);
lean_ctor_set(x_109, 0, x_126);
return x_109;
}
}
else
{
lean_object* x_127; lean_object* x_128; uint8_t x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_127 = lean_ctor_get(x_109, 0);
x_128 = lean_ctor_get(x_109, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_109);
x_129 = 0;
lean_inc(x_127);
x_130 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_130, 0, x_127);
lean_ctor_set(x_130, 1, x_2);
lean_ctor_set_uint8(x_130, sizeof(void*)*2, x_129);
x_131 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_132 = lean_array_push(x_131, x_130);
lean_inc(x_3);
x_133 = l_Lean_IR_FnBody_replaceVar(x_1, x_127, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_134 = x_3;
} else {
 lean_dec_ref(x_3);
 x_134 = lean_box(0);
}
lean_inc(x_107);
x_135 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_135, 0, x_131);
lean_closure_set(x_135, 1, x_107);
x_136 = lean_apply_1(x_4, x_135);
if (lean_is_scalar(x_134)) {
 x_137 = lean_alloc_ctor(1, 4, 0);
} else {
 x_137 = x_134;
 lean_ctor_set_tag(x_137, 1);
}
lean_ctor_set(x_137, 0, x_107);
lean_ctor_set(x_137, 1, x_132);
lean_ctor_set(x_137, 2, x_133);
lean_ctor_set(x_137, 3, x_136);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_128);
return x_138;
}
}
case 10:
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
x_139 = l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___rarg(x_6);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
x_142 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_141);
x_143 = !lean_is_exclusive(x_142);
if (x_143 == 0)
{
lean_object* x_144; uint8_t x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; uint8_t x_150; 
x_144 = lean_ctor_get(x_142, 0);
x_145 = 0;
lean_inc(x_144);
x_146 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_2);
lean_ctor_set_uint8(x_146, sizeof(void*)*2, x_145);
x_147 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_148 = lean_array_push(x_147, x_146);
lean_inc(x_3);
x_149 = l_Lean_IR_FnBody_replaceVar(x_1, x_144, x_3);
x_150 = !lean_is_exclusive(x_3);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_151 = lean_ctor_get(x_3, 3);
lean_dec(x_151);
x_152 = lean_ctor_get(x_3, 2);
lean_dec(x_152);
x_153 = lean_ctor_get(x_3, 1);
lean_dec(x_153);
x_154 = lean_ctor_get(x_3, 0);
lean_dec(x_154);
lean_inc(x_140);
x_155 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_155, 0, x_147);
lean_closure_set(x_155, 1, x_140);
x_156 = lean_apply_1(x_4, x_155);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 3, x_156);
lean_ctor_set(x_3, 2, x_149);
lean_ctor_set(x_3, 1, x_148);
lean_ctor_set(x_3, 0, x_140);
lean_ctor_set(x_142, 0, x_3);
return x_142;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_3);
lean_inc(x_140);
x_157 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_157, 0, x_147);
lean_closure_set(x_157, 1, x_140);
x_158 = lean_apply_1(x_4, x_157);
x_159 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_159, 0, x_140);
lean_ctor_set(x_159, 1, x_148);
lean_ctor_set(x_159, 2, x_149);
lean_ctor_set(x_159, 3, x_158);
lean_ctor_set(x_142, 0, x_159);
return x_142;
}
}
else
{
lean_object* x_160; lean_object* x_161; uint8_t x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_160 = lean_ctor_get(x_142, 0);
x_161 = lean_ctor_get(x_142, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_142);
x_162 = 0;
lean_inc(x_160);
x_163 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_163, 0, x_160);
lean_ctor_set(x_163, 1, x_2);
lean_ctor_set_uint8(x_163, sizeof(void*)*2, x_162);
x_164 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_165 = lean_array_push(x_164, x_163);
lean_inc(x_3);
x_166 = l_Lean_IR_FnBody_replaceVar(x_1, x_160, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_167 = x_3;
} else {
 lean_dec_ref(x_3);
 x_167 = lean_box(0);
}
lean_inc(x_140);
x_168 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_168, 0, x_164);
lean_closure_set(x_168, 1, x_140);
x_169 = lean_apply_1(x_4, x_168);
if (lean_is_scalar(x_167)) {
 x_170 = lean_alloc_ctor(1, 4, 0);
} else {
 x_170 = x_167;
 lean_ctor_set_tag(x_170, 1);
}
lean_ctor_set(x_170, 0, x_140);
lean_ctor_set(x_170, 1, x_165);
lean_ctor_set(x_170, 2, x_166);
lean_ctor_set(x_170, 3, x_169);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_161);
return x_171;
}
}
case 11:
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_172 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__2;
x_173 = lean_apply_1(x_4, x_172);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_6);
return x_174;
}
default: 
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; uint8_t x_179; 
x_175 = l_Lean_IR_ExpandResetReuse_mkFreshJoinPoint___rarg(x_6);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_177);
x_179 = !lean_is_exclusive(x_178);
if (x_179 == 0)
{
lean_object* x_180; uint8_t x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_180 = lean_ctor_get(x_178, 0);
x_181 = 0;
lean_inc(x_180);
x_182 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_2);
lean_ctor_set_uint8(x_182, sizeof(void*)*2, x_181);
x_183 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_184 = lean_array_push(x_183, x_182);
x_185 = l_Lean_IR_FnBody_replaceVar(x_1, x_180, x_3);
lean_inc(x_176);
x_186 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_186, 0, x_183);
lean_closure_set(x_186, 1, x_176);
x_187 = lean_apply_1(x_4, x_186);
x_188 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_188, 0, x_176);
lean_ctor_set(x_188, 1, x_184);
lean_ctor_set(x_188, 2, x_185);
lean_ctor_set(x_188, 3, x_187);
lean_ctor_set(x_178, 0, x_188);
return x_178;
}
else
{
lean_object* x_189; lean_object* x_190; uint8_t x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_189 = lean_ctor_get(x_178, 0);
x_190 = lean_ctor_get(x_178, 1);
lean_inc(x_190);
lean_inc(x_189);
lean_dec(x_178);
x_191 = 0;
lean_inc(x_189);
x_192 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_192, 0, x_189);
lean_ctor_set(x_192, 1, x_2);
lean_ctor_set_uint8(x_192, sizeof(void*)*2, x_191);
x_193 = l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1;
x_194 = lean_array_push(x_193, x_192);
x_195 = l_Lean_IR_FnBody_replaceVar(x_1, x_189, x_3);
lean_inc(x_176);
x_196 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_mkJoin1___lambda__1), 3, 2);
lean_closure_set(x_196, 0, x_193);
lean_closure_set(x_196, 1, x_176);
x_197 = lean_apply_1(x_4, x_196);
x_198 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_198, 0, x_176);
lean_ctor_set(x_198, 1, x_194);
lean_ctor_set(x_198, 2, x_195);
lean_ctor_set(x_198, 3, x_197);
x_199 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_199, 0, x_198);
lean_ctor_set(x_199, 1, x_190);
return x_199;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_mkJoin1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_IR_ExpandResetReuse_mkJoin1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReuse___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_1);
x_11 = lean_alloc_ctor(13, 1, 0);
lean_ctor_set(x_11, 0, x_1);
lean_inc(x_3);
lean_inc(x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_3);
lean_inc(x_10);
lean_inc(x_4);
x_13 = lean_apply_1(x_10, x_4);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_5);
lean_ctor_set(x_14, 2, x_12);
lean_ctor_set(x_14, 3, x_13);
lean_inc(x_1);
x_15 = lean_apply_1(x_10, x_1);
lean_inc(x_1);
x_16 = l_Lean_IR_ExpandResetReuse_setFields(x_6, x_1, x_7, x_3, x_15);
lean_dec(x_3);
if (x_8 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_9);
x_17 = l_Lean_IR_mkIf(x_9, x_14, x_16);
x_18 = lean_box(1);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_19, 2, x_11);
lean_ctor_set(x_19, 3, x_17);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_16);
lean_inc(x_9);
x_22 = l_Lean_IR_mkIf(x_9, x_14, x_21);
x_23 = lean_box(1);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_9);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_24, 2, x_11);
lean_ctor_set(x_24, 3, x_22);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReuse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_box(x_5);
lean_inc(x_9);
lean_inc(x_6);
x_18 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_specializeReuse___lambda__1___boxed), 10, 9);
lean_closure_set(x_18, 0, x_2);
lean_closure_set(x_18, 1, x_4);
lean_closure_set(x_18, 2, x_7);
lean_closure_set(x_18, 3, x_15);
lean_closure_set(x_18, 4, x_6);
lean_closure_set(x_18, 5, x_9);
lean_closure_set(x_18, 6, x_3);
lean_closure_set(x_18, 7, x_17);
lean_closure_set(x_18, 8, x_12);
x_19 = l_Lean_IR_ExpandResetReuse_mkJoin1(x_1, x_6, x_8, x_18, x_9, x_16);
lean_dec(x_9);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReuse___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_8);
lean_dec(x_8);
x_12 = l_Lean_IR_ExpandResetReuse_specializeReuse___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_9, x_10);
lean_dec(x_7);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReuse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_5);
lean_dec(x_5);
x_12 = l_Lean_IR_ExpandResetReuse_specializeReuse(x_1, x_2, x_3, x_4, x_11, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_adjustReferenceCountsSlowPath___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = lean_usize_add(x_2, x_7);
if (lean_obj_tag(x_6) == 0)
{
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_unsigned_to_nat(1u);
x_12 = 1;
x_13 = 0;
x_14 = lean_alloc_ctor(6, 3, 2);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_4);
lean_ctor_set_uint8(x_14, sizeof(void*)*3, x_12);
lean_ctor_set_uint8(x_14, sizeof(void*)*3 + 1, x_13);
x_2 = x_8;
x_4 = x_14;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_adjustReferenceCountsSlowPath(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = 1;
x_6 = 0;
x_7 = lean_alloc_ctor(7, 3, 2);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set_uint8(x_7, sizeof(void*)*3, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*3 + 1, x_6);
x_8 = lean_array_get_size(x_2);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_2);
return x_7;
}
else
{
uint8_t x_11; 
x_11 = lean_nat_dec_le(x_8, x_8);
if (x_11 == 0)
{
lean_dec(x_8);
lean_dec(x_2);
return x_7;
}
else
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = 0;
x_13 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_adjustReferenceCountsSlowPath___spec__1(x_2, x_12, x_13, x_7);
lean_dec(x_2);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_adjustReferenceCountsSlowPath___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_IR_ExpandResetReuse_adjustReferenceCountsSlowPath___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReset___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_1);
x_7 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_7, 0, x_1);
lean_inc(x_6);
lean_inc(x_2);
x_8 = lean_apply_1(x_6, x_2);
x_9 = lean_box(7);
x_10 = l_Lean_IR_ExpandResetReuse_null;
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set(x_11, 3, x_8);
lean_inc(x_1);
x_12 = l_Lean_IR_ExpandResetReuse_adjustReferenceCountsSlowPath(x_1, x_3, x_11);
x_13 = lean_apply_1(x_6, x_1);
x_14 = lean_apply_1(x_4, x_13);
lean_inc(x_5);
x_15 = l_Lean_IR_mkIf(x_5, x_12, x_14);
x_16 = lean_box(1);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_5);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_7);
lean_ctor_set(x_17, 3, x_15);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeReset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_7 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_5);
lean_inc(x_2);
x_13 = l_Lean_IR_ExpandResetReuse_releaseUnreadFields(x_2, x_3, x_5, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_specializeReset___lambda__1), 6, 5);
lean_closure_set(x_16, 0, x_2);
lean_closure_set(x_16, 1, x_11);
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, x_14);
lean_closure_set(x_16, 4, x_8);
x_17 = lean_box(7);
x_18 = l_Lean_IR_ExpandResetReuse_mkJoin1(x_1, x_17, x_4, x_16, x_5, x_15);
lean_dec(x_5);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeDrop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_1);
x_6 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_6, 0, x_1);
lean_inc(x_5);
lean_inc(x_1);
x_7 = l_Lean_IR_ExpandResetReuse_adjustReferenceCountsSlowPath(x_1, x_2, x_5);
x_8 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_5);
x_9 = lean_apply_1(x_3, x_8);
lean_inc(x_4);
x_10 = l_Lean_IR_mkIf(x_4, x_7, x_9);
x_11 = lean_box(1);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_6);
lean_ctor_set(x_12, 3, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_specializeDrop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = l_Lean_IR_ExpandResetReuse_mkFresh___rarg(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_4);
lean_inc(x_1);
x_9 = l_Lean_IR_ExpandResetReuse_releaseUnreadFields(x_1, x_2, x_4, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_closure((void*)(l_Lean_IR_ExpandResetReuse_specializeDrop___lambda__1), 5, 4);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_10);
lean_closure_set(x_12, 3, x_7);
x_13 = l_Lean_IR_ExpandResetReuse_mkJoin0(x_3, x_12, x_4, x_11);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_nat_dec_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 2);
x_7 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_8 = lean_apply_1(x_1, x_5);
x_9 = lean_unbox_uint64(x_8);
lean_dec(x_8);
x_10 = lean_hashmap_mk_idx(x_7, x_9);
x_11 = lean_array_uget(x_2, x_10);
lean_ctor_set(x_3, 2, x_11);
x_12 = lean_array_uset(x_2, x_10, x_3);
x_2 = x_12;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint64_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_ctor_get(x_3, 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_3);
x_17 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_14);
x_18 = lean_apply_1(x_1, x_14);
x_19 = lean_unbox_uint64(x_18);
lean_dec(x_18);
x_20 = lean_hashmap_mk_idx(x_17, x_19);
x_21 = lean_array_uget(x_2, x_20);
x_22 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_15);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_array_uset(x_2, x_20, x_22);
x_2 = x_23;
x_3 = x_16;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__5___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = lean_uint64_of_nat(x_4);
x_8 = lean_hashmap_mk_idx(x_6, x_7);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = lean_uint64_of_nat(x_12);
x_17 = lean_hashmap_mk_idx(x_15, x_16);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__5___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__6(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_HashMapImp_moveEntries___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__4(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_nat_dec_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__7(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_nat_dec_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__7(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_uint64_of_nat(x_2);
lean_inc(x_7);
x_9 = lean_hashmap_mk_idx(x_7, x_8);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__2(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_13);
x_17 = lean_nat_dec_le(x_16, x_7);
lean_dec(x_7);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_free_object(x_1);
x_18 = l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__3(x_13, x_15);
return x_18;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_7);
x_19 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__7(x_2, x_3, x_10);
x_20 = lean_array_uset(x_6, x_9, x_19);
lean_ctor_set(x_1, 1, x_20);
return x_1;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint64_t x_24; size_t x_25; lean_object* x_26; uint8_t x_27; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_1);
x_23 = lean_array_get_size(x_22);
x_24 = lean_uint64_of_nat(x_2);
lean_inc(x_23);
x_25 = lean_hashmap_mk_idx(x_23, x_24);
x_26 = lean_array_uget(x_22, x_25);
x_27 = l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__2(x_2, x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_21, x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_3);
lean_ctor_set(x_30, 2, x_26);
x_31 = lean_array_uset(x_22, x_25, x_30);
x_32 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_29);
x_33 = lean_nat_dec_le(x_32, x_23);
lean_dec(x_23);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__3(x_29, x_31);
return x_34;
}
else
{
lean_object* x_35; 
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_31);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_23);
x_36 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__7(x_2, x_3, x_26);
x_37 = lean_array_uset(x_22, x_25, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_21);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_nat_dec_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_uint64_of_nat(x_2);
x_6 = lean_hashmap_mk_idx(x_4, x_5);
x_7 = lean_array_uget(x_3, x_6);
lean_dec(x_3);
x_8 = l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__9(x_2, x_7);
lean_dec(x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_IR_instInhabitedVarId;
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__12(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_nat_dec_eq(x_1, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
size_t x_8; size_t x_9; 
x_8 = 1;
x_9 = lean_usize_add(x_3, x_8);
x_3 = x_9;
goto _start;
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
LEAN_EXPORT uint8_t l_Array_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
size_t x_7; size_t x_8; uint8_t x_9; 
x_7 = 0;
x_8 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_9 = l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__12(x_2, x_1, x_7, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_nat_dec_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_uint64_of_nat(x_2);
x_6 = lean_hashmap_mk_idx(x_4, x_5);
x_7 = lean_array_uget(x_3, x_6);
lean_dec(x_3);
x_8 = l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__14(x_2, x_7);
lean_dec(x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_158____at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_nat_dec_eq(x_6, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__16(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_box(0);
x_7 = l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_158____at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__15(x_5, x_6);
lean_dec(x_5);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
else
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_2 = x_10;
goto _start;
}
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_nat_dec_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 2);
x_7 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_8 = lean_apply_1(x_1, x_5);
x_9 = lean_unbox_uint64(x_8);
lean_dec(x_8);
x_10 = lean_hashmap_mk_idx(x_7, x_9);
x_11 = lean_array_uget(x_2, x_10);
lean_ctor_set(x_3, 2, x_11);
x_12 = lean_array_uset(x_2, x_10, x_3);
x_2 = x_12;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint64_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_ctor_get(x_3, 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_3);
x_17 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_14);
x_18 = lean_apply_1(x_1, x_14);
x_19 = lean_unbox_uint64(x_18);
lean_dec(x_18);
x_20 = lean_hashmap_mk_idx(x_17, x_19);
x_21 = lean_array_uget(x_2, x_20);
x_22 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_15);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_array_uset(x_2, x_20, x_22);
x_2 = x_23;
x_3 = x_16;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__21___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__22(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = lean_uint64_of_nat(x_4);
x_8 = lean_hashmap_mk_idx(x_6, x_7);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = lean_uint64_of_nat(x_12);
x_17 = lean_hashmap_mk_idx(x_15, x_16);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_moveEntries___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Lean_AssocList_foldlM___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__21___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__22(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__19(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_HashMapImp_moveEntries___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__20(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__23(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_nat_dec_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__23(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_nat_dec_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__23(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_uint64_of_nat(x_2);
lean_inc(x_7);
x_9 = lean_hashmap_mk_idx(x_7, x_8);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__18(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_13);
x_17 = lean_nat_dec_le(x_16, x_7);
lean_dec(x_7);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_free_object(x_1);
x_18 = l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__19(x_13, x_15);
return x_18;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_7);
x_19 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__23(x_2, x_3, x_10);
x_20 = lean_array_uset(x_6, x_9, x_19);
lean_ctor_set(x_1, 1, x_20);
return x_1;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint64_t x_24; size_t x_25; lean_object* x_26; uint8_t x_27; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_1);
x_23 = lean_array_get_size(x_22);
x_24 = lean_uint64_of_nat(x_2);
lean_inc(x_23);
x_25 = lean_hashmap_mk_idx(x_23, x_24);
x_26 = lean_array_uget(x_22, x_25);
x_27 = l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__18(x_2, x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_21, x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_3);
lean_ctor_set(x_30, 2, x_26);
x_31 = lean_array_uset(x_22, x_25, x_30);
x_32 = l___private_Lean_Data_HashMap_0__Lean_numBucketsForCapacity(x_29);
x_33 = lean_nat_dec_le(x_32, x_23);
lean_dec(x_23);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = l_Lean_HashMapImp_expand___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__19(x_29, x_31);
return x_34;
}
else
{
lean_object* x_35; 
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_31);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_23);
x_36 = l_Lean_AssocList_replace___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__23(x_2, x_3, x_26);
x_37 = lean_array_uset(x_22, x_25, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_21);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_lt(x_5, x_4);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_array_uget(x_6, x_5);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_uset(x_6, x_5, x_12);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
x_17 = lean_ctor_get(x_7, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_15, 2);
lean_inc(x_19);
lean_inc(x_3);
x_20 = l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__17(x_18, x_3, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
lean_inc(x_2);
lean_inc(x_1);
x_23 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_16, x_22, x_1, x_2, x_21, x_8);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_ctor_set(x_11, 1, x_24);
x_26 = 1;
x_27 = lean_usize_add(x_5, x_26);
x_28 = lean_array_uset(x_13, x_5, x_11);
x_5 = x_27;
x_6 = x_28;
x_8 = x_25;
goto _start;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; 
x_30 = lean_ctor_get(x_11, 0);
x_31 = lean_ctor_get(x_11, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_11);
x_32 = lean_ctor_get(x_7, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_7, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_30, 2);
lean_inc(x_34);
lean_inc(x_3);
x_35 = l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__17(x_33, x_3, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
lean_inc(x_2);
lean_inc(x_1);
x_38 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_31, x_37, x_1, x_2, x_36, x_8);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_30);
lean_ctor_set(x_41, 1, x_39);
x_42 = 1;
x_43 = lean_usize_add(x_5, x_42);
x_44 = lean_array_uset(x_13, x_5, x_41);
x_5 = x_43;
x_6 = x_44;
x_8 = x_40;
goto _start;
}
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_11);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; size_t x_52; size_t x_53; lean_object* x_54; 
x_47 = lean_ctor_get(x_11, 0);
x_48 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_49 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_47, x_48, x_1, x_2, x_7, x_8);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
lean_ctor_set(x_11, 0, x_50);
x_52 = 1;
x_53 = lean_usize_add(x_5, x_52);
x_54 = lean_array_uset(x_13, x_5, x_11);
x_5 = x_53;
x_6 = x_54;
x_8 = x_51;
goto _start;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; size_t x_62; size_t x_63; lean_object* x_64; 
x_56 = lean_ctor_get(x_11, 0);
lean_inc(x_56);
lean_dec(x_11);
x_57 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_58 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_56, x_57, x_1, x_2, x_7, x_8);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_59);
x_62 = 1;
x_63 = lean_usize_add(x_5, x_62);
x_64 = lean_array_uset(x_13, x_5, x_61);
x_5 = x_63;
x_6 = x_64;
x_8 = x_60;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Data.HashMap", 17);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.HashMap.find!", 18);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("key is not in the map", 21);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__1;
x_2 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__2;
x_3 = lean_unsigned_to_nat(210u);
x_4 = lean_unsigned_to_nat(14u);
x_5 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_searchAndSpecialize(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
switch (lean_obj_tag(x_7)) {
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor(x_12, x_11, x_2);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_8);
x_16 = lean_array_push(x_3, x_8);
lean_inc(x_11);
lean_inc(x_8);
x_17 = l_Lean_HashMap_insert___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__1(x_4, x_8, x_11);
x_18 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
lean_inc(x_5);
x_19 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_9, x_18, x_16, x_17, x_5, x_6);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_IR_ExpandResetReuse_specializeReset(x_8, x_11, x_15, x_20, x_5, x_21);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = l_Lean_IR_reshape(x_14, x_24);
lean_ctor_set(x_22, 0, x_25);
return x_22;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_22, 0);
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_22);
x_28 = l_Lean_IR_reshape(x_14, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
case 2:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 3);
lean_inc(x_32);
lean_dec(x_1);
x_33 = lean_ctor_get(x_7, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_7, 1);
lean_inc(x_34);
x_35 = lean_ctor_get_uint8(x_7, sizeof(void*)*3);
x_36 = lean_ctor_get(x_7, 2);
lean_inc(x_36);
lean_dec(x_7);
x_37 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
lean_inc(x_5);
lean_inc(x_4);
x_38 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_32, x_37, x_3, x_4, x_5, x_6);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
lean_inc(x_33);
x_41 = l_Lean_HashMapImp_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__8(x_4, x_33);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__4;
x_43 = l_panic___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__10(x_42);
x_44 = l_Lean_IR_ExpandResetReuse_specializeReuse(x_30, x_33, x_43, x_34, x_35, x_31, x_36, x_39, x_5, x_40);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = l_Lean_IR_reshape(x_2, x_46);
lean_ctor_set(x_44, 0, x_47);
return x_44;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_44, 0);
x_49 = lean_ctor_get(x_44, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_44);
x_50 = l_Lean_IR_reshape(x_2, x_48);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_52 = lean_ctor_get(x_41, 0);
lean_inc(x_52);
lean_dec(x_41);
x_53 = l_Lean_IR_ExpandResetReuse_specializeReuse(x_30, x_33, x_52, x_34, x_35, x_31, x_36, x_39, x_5, x_40);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_53, 0);
x_56 = l_Lean_IR_reshape(x_2, x_55);
lean_ctor_set(x_53, 0, x_56);
return x_53;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_53, 0);
x_58 = lean_ctor_get(x_53, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_53);
x_59 = l_Lean_IR_reshape(x_2, x_57);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
default: 
{
uint8_t x_61; 
lean_dec(x_7);
x_61 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = l_Lean_IR_FnBody_body(x_1);
x_63 = l_Lean_IR_push(x_2, x_1);
x_1 = x_62;
x_2 = x_63;
goto _start;
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_65 = l_Lean_IR_reshape(x_2, x_1);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_6);
return x_66;
}
}
}
}
case 1:
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_1);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_68 = lean_ctor_get(x_1, 2);
x_69 = lean_ctor_get(x_1, 3);
x_70 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_71 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_68, x_70, x_3, x_4, x_5, x_6);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_69, x_70, x_3, x_4, x_5, x_73);
x_75 = !lean_is_exclusive(x_74);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_74, 0);
lean_ctor_set(x_1, 3, x_76);
lean_ctor_set(x_1, 2, x_72);
x_77 = l_Lean_IR_reshape(x_2, x_1);
lean_ctor_set(x_74, 0, x_77);
return x_74;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_74, 0);
x_79 = lean_ctor_get(x_74, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_74);
lean_ctor_set(x_1, 3, x_78);
lean_ctor_set(x_1, 2, x_72);
x_80 = l_Lean_IR_reshape(x_2, x_1);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_82 = lean_ctor_get(x_1, 0);
x_83 = lean_ctor_get(x_1, 1);
x_84 = lean_ctor_get(x_1, 2);
x_85 = lean_ctor_get(x_1, 3);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_1);
x_86 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_87 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_84, x_86, x_3, x_4, x_5, x_6);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_85, x_86, x_3, x_4, x_5, x_89);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_93 = x_90;
} else {
 lean_dec_ref(x_90);
 x_93 = lean_box(0);
}
x_94 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_94, 0, x_82);
lean_ctor_set(x_94, 1, x_83);
lean_ctor_set(x_94, 2, x_88);
lean_ctor_set(x_94, 3, x_91);
x_95 = l_Lean_IR_reshape(x_2, x_94);
if (lean_is_scalar(x_93)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_93;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_92);
return x_96;
}
}
case 7:
{
lean_object* x_97; lean_object* x_98; uint8_t x_99; uint8_t x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_97 = lean_ctor_get(x_1, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_1, 1);
lean_inc(x_98);
x_99 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_100 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
x_101 = lean_ctor_get(x_1, 2);
lean_inc(x_101);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 x_102 = x_1;
} else {
 lean_dec_ref(x_1);
 x_102 = lean_box(0);
}
x_103 = l_Array_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__11(x_3, x_97);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; 
x_104 = lean_ctor_get(x_5, 1);
lean_inc(x_104);
lean_inc(x_97);
x_105 = l_Lean_HashMapImp_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__13(x_104, x_97);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_106 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
x_107 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_101, x_106, x_3, x_4, x_5, x_6);
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_107, 0);
if (lean_is_scalar(x_102)) {
 x_110 = lean_alloc_ctor(7, 3, 2);
} else {
 x_110 = x_102;
}
lean_ctor_set(x_110, 0, x_97);
lean_ctor_set(x_110, 1, x_98);
lean_ctor_set(x_110, 2, x_109);
lean_ctor_set_uint8(x_110, sizeof(void*)*3, x_99);
lean_ctor_set_uint8(x_110, sizeof(void*)*3 + 1, x_100);
x_111 = l_Lean_IR_reshape(x_2, x_110);
lean_ctor_set(x_107, 0, x_111);
return x_107;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_112 = lean_ctor_get(x_107, 0);
x_113 = lean_ctor_get(x_107, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_107);
if (lean_is_scalar(x_102)) {
 x_114 = lean_alloc_ctor(7, 3, 2);
} else {
 x_114 = x_102;
}
lean_ctor_set(x_114, 0, x_97);
lean_ctor_set(x_114, 1, x_98);
lean_ctor_set(x_114, 2, x_112);
lean_ctor_set_uint8(x_114, sizeof(void*)*3, x_99);
lean_ctor_set_uint8(x_114, sizeof(void*)*3 + 1, x_100);
x_115 = l_Lean_IR_reshape(x_2, x_114);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_113);
return x_116;
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_117 = lean_ctor_get(x_105, 0);
lean_inc(x_117);
lean_dec(x_105);
x_118 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor(x_117, x_97, x_2);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
if (x_100 == 0)
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; 
x_134 = lean_array_get_size(x_120);
x_135 = lean_unsigned_to_nat(0u);
x_136 = lean_nat_dec_lt(x_135, x_134);
if (x_136 == 0)
{
lean_object* x_137; 
lean_dec(x_134);
lean_dec(x_120);
x_137 = lean_box(0);
x_121 = x_137;
goto block_133;
}
else
{
size_t x_138; size_t x_139; uint8_t x_140; 
x_138 = 0;
x_139 = lean_usize_of_nat(x_134);
lean_dec(x_134);
x_140 = l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__16(x_120, x_138, x_139);
if (x_140 == 0)
{
lean_object* x_141; 
lean_dec(x_120);
x_141 = lean_box(0);
x_121 = x_141;
goto block_133;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
lean_dec(x_102);
lean_dec(x_98);
x_142 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
lean_inc(x_5);
x_143 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_101, x_142, x_3, x_4, x_5, x_6);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
lean_dec(x_143);
x_146 = l_Lean_IR_ExpandResetReuse_specializeDrop(x_97, x_120, x_144, x_5, x_145);
x_147 = !lean_is_exclusive(x_146);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; 
x_148 = lean_ctor_get(x_146, 0);
x_149 = l_Lean_IR_reshape(x_119, x_148);
lean_ctor_set(x_146, 0, x_149);
return x_146;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_150 = lean_ctor_get(x_146, 0);
x_151 = lean_ctor_get(x_146, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_146);
x_152 = l_Lean_IR_reshape(x_119, x_150);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_151);
return x_153;
}
}
}
}
else
{
lean_object* x_154; 
lean_dec(x_120);
x_154 = lean_box(0);
x_121 = x_154;
goto block_133;
}
block_133:
{
lean_object* x_122; lean_object* x_123; uint8_t x_124; 
lean_dec(x_121);
x_122 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
x_123 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_101, x_122, x_3, x_4, x_5, x_6);
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_123, 0);
if (lean_is_scalar(x_102)) {
 x_126 = lean_alloc_ctor(7, 3, 2);
} else {
 x_126 = x_102;
}
lean_ctor_set(x_126, 0, x_97);
lean_ctor_set(x_126, 1, x_98);
lean_ctor_set(x_126, 2, x_125);
lean_ctor_set_uint8(x_126, sizeof(void*)*3, x_99);
lean_ctor_set_uint8(x_126, sizeof(void*)*3 + 1, x_100);
x_127 = l_Lean_IR_reshape(x_119, x_126);
lean_ctor_set(x_123, 0, x_127);
return x_123;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_128 = lean_ctor_get(x_123, 0);
x_129 = lean_ctor_get(x_123, 1);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_123);
if (lean_is_scalar(x_102)) {
 x_130 = lean_alloc_ctor(7, 3, 2);
} else {
 x_130 = x_102;
}
lean_ctor_set(x_130, 0, x_97);
lean_ctor_set(x_130, 1, x_98);
lean_ctor_set(x_130, 2, x_128);
lean_ctor_set_uint8(x_130, sizeof(void*)*3, x_99);
lean_ctor_set_uint8(x_130, sizeof(void*)*3 + 1, x_100);
x_131 = l_Lean_IR_reshape(x_119, x_130);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_129);
return x_132;
}
}
}
}
else
{
lean_object* x_155; lean_object* x_156; uint8_t x_157; 
lean_dec(x_102);
lean_dec(x_98);
x_155 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
x_156 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_101, x_155, x_3, x_4, x_5, x_6);
x_157 = !lean_is_exclusive(x_156);
if (x_157 == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_156, 0);
x_159 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_159, 0, x_97);
lean_ctor_set(x_159, 1, x_158);
x_160 = l_Lean_IR_reshape(x_2, x_159);
lean_ctor_set(x_156, 0, x_160);
return x_156;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_161 = lean_ctor_get(x_156, 0);
x_162 = lean_ctor_get(x_156, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_156);
x_163 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_163, 0, x_97);
lean_ctor_set(x_163, 1, x_161);
x_164 = l_Lean_IR_reshape(x_2, x_163);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_162);
return x_165;
}
}
}
case 10:
{
uint8_t x_166; 
x_166 = !lean_is_exclusive(x_1);
if (x_166 == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; size_t x_170; size_t x_171; lean_object* x_172; uint8_t x_173; 
x_167 = lean_ctor_get(x_1, 1);
x_168 = lean_ctor_get(x_1, 3);
x_169 = lean_array_get_size(x_168);
x_170 = lean_usize_of_nat(x_169);
lean_dec(x_169);
x_171 = 0;
lean_inc(x_167);
x_172 = l_Array_mapMUnsafe_map___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__24(x_3, x_4, x_167, x_170, x_171, x_168, x_5, x_6);
x_173 = !lean_is_exclusive(x_172);
if (x_173 == 0)
{
lean_object* x_174; lean_object* x_175; 
x_174 = lean_ctor_get(x_172, 0);
lean_ctor_set(x_1, 3, x_174);
x_175 = l_Lean_IR_reshape(x_2, x_1);
lean_ctor_set(x_172, 0, x_175);
return x_172;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_176 = lean_ctor_get(x_172, 0);
x_177 = lean_ctor_get(x_172, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_172);
lean_ctor_set(x_1, 3, x_176);
x_178 = l_Lean_IR_reshape(x_2, x_1);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_177);
return x_179;
}
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; size_t x_185; size_t x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_180 = lean_ctor_get(x_1, 0);
x_181 = lean_ctor_get(x_1, 1);
x_182 = lean_ctor_get(x_1, 2);
x_183 = lean_ctor_get(x_1, 3);
lean_inc(x_183);
lean_inc(x_182);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_1);
x_184 = lean_array_get_size(x_183);
x_185 = lean_usize_of_nat(x_184);
lean_dec(x_184);
x_186 = 0;
lean_inc(x_181);
x_187 = l_Array_mapMUnsafe_map___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__24(x_3, x_4, x_181, x_185, x_186, x_183, x_5, x_6);
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_190 = x_187;
} else {
 lean_dec_ref(x_187);
 x_190 = lean_box(0);
}
x_191 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_191, 0, x_180);
lean_ctor_set(x_191, 1, x_181);
lean_ctor_set(x_191, 2, x_182);
lean_ctor_set(x_191, 3, x_188);
x_192 = l_Lean_IR_reshape(x_2, x_191);
if (lean_is_scalar(x_190)) {
 x_193 = lean_alloc_ctor(0, 2, 0);
} else {
 x_193 = x_190;
}
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_189);
return x_193;
}
}
default: 
{
uint8_t x_194; 
x_194 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; 
x_195 = l_Lean_IR_FnBody_body(x_1);
x_196 = l_Lean_IR_push(x_2, x_1);
x_1 = x_195;
x_2 = x_196;
goto _start;
}
else
{
lean_object* x_198; lean_object* x_199; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_198 = l_Lean_IR_reshape(x_2, x_1);
x_199 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_199, 0, x_198);
lean_ctor_set(x_199, 1, x_6);
return x_199;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__9(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__12(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__11___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__11(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__14___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_AssocList_find_x3f___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__14(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_158____at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__15___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_158____at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__15(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__16(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__18___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_AssocList_contains___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__18(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__24___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_11 = l_Array_mapMUnsafe_map___at_Lean_IR_ExpandResetReuse_searchAndSpecialize___spec__24(x_1, x_2, x_3, x_9, x_10, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_main___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_main___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ExpandResetReuse_main(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_2 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_Lean_IR_ExpandResetReuse_mkProjMap(x_1);
x_4 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_5 = l_Lean_IR_MaxIndex_collectDecl(x_1, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_5, x_6);
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(8u);
x_9 = l_Lean_mkHashMapImp___rarg(x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1;
x_12 = l_Lean_IR_ExpandResetReuse_searchAndSpecialize(x_2, x_11, x_11, x_9, x_10, x_7);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_IR_Decl_updateBody_x21(x_1, x_13);
return x_14;
}
else
{
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_main___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_main___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_main___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHashMap___at_Lean_IR_ExpandResetReuse_main___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_expandResetReuse(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_IR_ExpandResetReuse_main(x_1);
x_3 = l_Lean_IR_Decl_normalizeIds(x_2);
return x_3;
}
}
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_IR_NormIds(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_IR_FreeVars(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_ExpandResetReuse(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_CompilerM(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_NormIds(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_FreeVars(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1 = _init_l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1();
lean_mark_persistent(l_Lean_IR_ExpandResetReuse_eraseProjIncFor___closed__1);
l_Lean_IR_ExpandResetReuse_releaseUnreadFields___closed__1 = _init_l_Lean_IR_ExpandResetReuse_releaseUnreadFields___closed__1();
lean_mark_persistent(l_Lean_IR_ExpandResetReuse_releaseUnreadFields___closed__1);
l_Lean_IR_ExpandResetReuse_null___closed__1 = _init_l_Lean_IR_ExpandResetReuse_null___closed__1();
lean_mark_persistent(l_Lean_IR_ExpandResetReuse_null___closed__1);
l_Lean_IR_ExpandResetReuse_null___closed__2 = _init_l_Lean_IR_ExpandResetReuse_null___closed__2();
lean_mark_persistent(l_Lean_IR_ExpandResetReuse_null___closed__2);
l_Lean_IR_ExpandResetReuse_null = _init_l_Lean_IR_ExpandResetReuse_null();
lean_mark_persistent(l_Lean_IR_ExpandResetReuse_null);
l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1 = _init_l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1();
lean_mark_persistent(l_Lean_IR_ExpandResetReuse_mkJoin1___closed__1);
l_Lean_IR_ExpandResetReuse_mkJoin1___closed__2 = _init_l_Lean_IR_ExpandResetReuse_mkJoin1___closed__2();
lean_mark_persistent(l_Lean_IR_ExpandResetReuse_mkJoin1___closed__2);
l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__1 = _init_l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__1();
lean_mark_persistent(l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__1);
l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__2 = _init_l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__2();
lean_mark_persistent(l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__2);
l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__3 = _init_l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__3();
lean_mark_persistent(l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__3);
l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__4 = _init_l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__4();
lean_mark_persistent(l_Lean_IR_ExpandResetReuse_searchAndSpecialize___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
