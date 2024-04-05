// Lean compiler output
// Module: Lean.Compiler.IR.ResetReuse
// Imports: Lean.Compiler.IR.Basic Lean.Compiler.IR.LiveVars Lean.Compiler.IR.Format Lean.Compiler.IR.Borrow
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___rarg(lean_object*);
lean_object* lean_ir_find_env_decl(lean_object*, lean_object*);
uint8_t l_Lean_IR_HasIndex_visitFnBody(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_IR_CtorInfo_isScalar(lean_object*);
lean_object* l_Lean_IR_getEnv___rarg(lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Lean_IR_FnBody_hasLiveVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_params(lean_object*);
lean_object* l_Array_zip___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ResetReuse_R(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_inferReuse___spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_insertResetReuse(lean_object*, lean_object*);
uint8_t l_Lean_IR_FnBody_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_setBody(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_updateBody_x21(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_D(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_inferReuse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_MaxIndex_collectDecl(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_inferReuse___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_addJP(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_inferReuse___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 2);
x_4 = lean_ctor_get(x_2, 2);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_ctor_get(x_2, 3);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 4);
x_12 = lean_ctor_get(x_2, 4);
x_13 = lean_nat_dec_eq(x_11, x_12);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_4, x_3);
if (x_6 == 0)
{
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_7 = lean_array_uget(x_5, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_5, x_4, x_8);
x_10 = 1;
x_11 = lean_usize_add(x_4, x_10);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_1);
x_14 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_13);
lean_ctor_set(x_7, 1, x_14);
x_15 = lean_array_uset(x_9, x_4, x_7);
x_4 = x_11;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_7);
lean_inc(x_1);
x_19 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_array_uset(x_9, x_4, x_20);
x_4 = x_11;
x_5 = x_21;
goto _start;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_7);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_7, 0);
lean_inc(x_1);
x_25 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_24);
lean_ctor_set(x_7, 0, x_25);
x_26 = lean_array_uset(x_9, x_4, x_7);
x_4 = x_11;
x_5 = x_26;
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_7, 0);
lean_inc(x_28);
lean_dec(x_7);
lean_inc(x_1);
x_29 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_28);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_uset(x_9, x_4, x_30);
x_4 = x_11;
x_5 = x_31;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 2);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_3, 3);
x_7 = lean_ctor_get(x_3, 2);
lean_dec(x_7);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
x_10 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse(x_2, x_8);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_9);
lean_dec(x_8);
x_11 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_6);
lean_ctor_set(x_3, 3, x_11);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_4);
x_12 = lean_ctor_get(x_2, 1);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; lean_object* x_16; 
x_15 = 1;
x_16 = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_8);
lean_ctor_set(x_16, 2, x_9);
lean_ctor_set_uint8(x_16, sizeof(void*)*3, x_15);
lean_ctor_set(x_3, 2, x_16);
return x_3;
}
else
{
uint8_t x_17; lean_object* x_18; 
x_17 = 0;
x_18 = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_8);
lean_ctor_set(x_18, 2, x_9);
lean_ctor_set_uint8(x_18, sizeof(void*)*3, x_17);
lean_ctor_set(x_3, 2, x_18);
return x_3;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
x_21 = lean_ctor_get(x_3, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_3);
x_22 = lean_ctor_get(x_4, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_4, 1);
lean_inc(x_23);
x_24 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse(x_2, x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_23);
lean_dec(x_22);
x_25 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_21);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_20);
lean_ctor_set(x_26, 2, x_4);
lean_ctor_set(x_26, 3, x_25);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_4);
x_27 = lean_ctor_get(x_2, 1);
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
x_29 = lean_nat_dec_eq(x_27, x_28);
lean_dec(x_28);
if (x_29 == 0)
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_30 = 1;
x_31 = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_22);
lean_ctor_set(x_31, 2, x_23);
lean_ctor_set_uint8(x_31, sizeof(void*)*3, x_30);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_20);
lean_ctor_set(x_32, 2, x_31);
lean_ctor_set(x_32, 3, x_21);
return x_32;
}
else
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_33 = 0;
x_34 = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(x_34, 0, x_1);
lean_ctor_set(x_34, 1, x_22);
lean_ctor_set(x_34, 2, x_23);
lean_ctor_set_uint8(x_34, sizeof(void*)*3, x_33);
x_35 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_35, 0, x_19);
lean_ctor_set(x_35, 1, x_20);
lean_ctor_set(x_35, 2, x_34);
lean_ctor_set(x_35, 3, x_21);
return x_35;
}
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_4);
x_36 = l_Lean_IR_FnBody_isTerminal(x_3);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = l_Lean_IR_FnBody_body(x_3);
x_38 = lean_box(13);
x_39 = l_Lean_IR_FnBody_setBody(x_3, x_38);
x_40 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_37);
x_41 = l_Lean_IR_FnBody_setBody(x_39, x_40);
return x_41;
}
else
{
lean_dec(x_1);
return x_3;
}
}
}
case 1:
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_3);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_43 = lean_ctor_get(x_3, 2);
x_44 = lean_ctor_get(x_3, 3);
lean_inc(x_43);
lean_inc(x_1);
x_45 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_43);
lean_inc(x_45);
lean_inc(x_43);
x_46 = l_Lean_IR_FnBody_beq(x_43, x_45);
if (x_46 == 0)
{
lean_dec(x_43);
lean_dec(x_1);
lean_ctor_set(x_3, 2, x_45);
return x_3;
}
else
{
lean_object* x_47; 
lean_dec(x_45);
x_47 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_44);
lean_ctor_set(x_3, 3, x_47);
return x_3;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_48 = lean_ctor_get(x_3, 0);
x_49 = lean_ctor_get(x_3, 1);
x_50 = lean_ctor_get(x_3, 2);
x_51 = lean_ctor_get(x_3, 3);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_3);
lean_inc(x_50);
lean_inc(x_1);
x_52 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_50);
lean_inc(x_52);
lean_inc(x_50);
x_53 = l_Lean_IR_FnBody_beq(x_50, x_52);
if (x_53 == 0)
{
lean_object* x_54; 
lean_dec(x_50);
lean_dec(x_1);
x_54 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_49);
lean_ctor_set(x_54, 2, x_52);
lean_ctor_set(x_54, 3, x_51);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_52);
x_55 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_51);
x_56 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_56, 0, x_48);
lean_ctor_set(x_56, 1, x_49);
lean_ctor_set(x_56, 2, x_50);
lean_ctor_set(x_56, 3, x_55);
return x_56;
}
}
}
case 10:
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_3);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; size_t x_60; size_t x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_3, 3);
x_59 = lean_array_get_size(x_58);
x_60 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_61 = 0;
x_62 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1(x_1, x_2, x_60, x_61, x_58);
lean_ctor_set(x_3, 3, x_62);
return x_3;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; size_t x_68; size_t x_69; lean_object* x_70; lean_object* x_71; 
x_63 = lean_ctor_get(x_3, 0);
x_64 = lean_ctor_get(x_3, 1);
x_65 = lean_ctor_get(x_3, 2);
x_66 = lean_ctor_get(x_3, 3);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_3);
x_67 = lean_array_get_size(x_66);
x_68 = lean_usize_of_nat(x_67);
lean_dec(x_67);
x_69 = 0;
x_70 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1(x_1, x_2, x_68, x_69, x_66);
x_71 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_71, 0, x_63);
lean_ctor_set(x_71, 1, x_64);
lean_ctor_set(x_71, 2, x_65);
lean_ctor_set(x_71, 3, x_70);
return x_71;
}
}
default: 
{
uint8_t x_72; 
x_72 = l_Lean_IR_FnBody_isTerminal(x_3);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_73 = l_Lean_IR_FnBody_body(x_3);
x_74 = lean_box(13);
x_75 = l_Lean_IR_FnBody_setBody(x_3, x_74);
x_76 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_73);
x_77 = l_Lean_IR_FnBody_setBody(x_75, x_76);
return x_77;
}
else
{
lean_dec(x_1);
return x_3;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___rarg(lean_object* x_1) {
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___rarg(x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_3);
lean_inc(x_8);
x_9 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_8, x_2, x_3);
lean_inc(x_9);
lean_inc(x_3);
x_10 = l_Lean_IR_FnBody_beq(x_3, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_1);
x_12 = lean_box(7);
x_13 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_13, 2, x_11);
lean_ctor_set(x_13, 3, x_9);
lean_ctor_set(x_6, 0, x_13);
return x_6;
}
else
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
lean_ctor_set(x_6, 0, x_3);
return x_6;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
lean_inc(x_3);
lean_inc(x_14);
x_16 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_14, x_2, x_3);
lean_inc(x_16);
lean_inc(x_3);
x_17 = l_Lean_IR_FnBody_beq(x_3, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_1);
x_19 = lean_box(7);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_18);
lean_ctor_set(x_20, 3, x_16);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_15);
return x_21;
}
else
{
lean_object* x_22; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_3);
lean_ctor_set(x_22, 1, x_15);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(x_1, x_2, x_8, x_4, x_5);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_3, 1);
lean_dec(x_11);
lean_ctor_set(x_3, 1, x_5);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_array_uget(x_2, x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_nat_dec_eq(x_1, x_7);
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
size_t x_13; size_t x_14; 
x_13 = 1;
x_14 = lean_usize_add(x_3, x_13);
x_3 = x_14;
goto _start;
}
}
else
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1(x_2, x_1, x_7, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_array_uget(x_3, x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get_uint8(x_9, sizeof(void*)*2);
lean_dec(x_9);
x_12 = lean_nat_dec_eq(x_1, x_10);
lean_dec(x_10);
if (x_12 == 0)
{
size_t x_13; size_t x_14; 
x_13 = 1;
x_14 = lean_usize_add(x_4, x_13);
x_4 = x_14;
goto _start;
}
else
{
if (x_11 == 0)
{
uint8_t x_16; 
x_16 = 1;
return x_16;
}
else
{
size_t x_17; size_t x_18; 
x_17 = 1;
x_18 = lean_usize_add(x_4, x_17);
x_4 = x_18;
goto _start;
}
}
}
else
{
uint8_t x_20; 
lean_dec(x_7);
x_20 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(x_2, x_1);
if (x_20 == 0)
{
size_t x_21; size_t x_22; 
x_21 = 1;
x_22 = lean_usize_add(x_4, x_21);
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; 
x_24 = 1;
return x_24;
}
}
}
else
{
uint8_t x_25; 
x_25 = 0;
return x_25;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_5; uint8_t x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(x_5, x_2);
lean_dec(x_2);
lean_dec(x_5);
return x_6;
}
case 1:
{
lean_object* x_7; uint8_t x_8; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_nat_dec_eq(x_2, x_7);
lean_dec(x_7);
lean_dec(x_2);
return x_8;
}
case 2:
{
lean_object* x_9; uint8_t x_10; 
lean_dec(x_3);
x_9 = lean_ctor_get(x_4, 2);
lean_inc(x_9);
lean_dec(x_4);
x_10 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(x_9, x_2);
lean_dec(x_2);
lean_dec(x_9);
return x_10;
}
case 6:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_dec(x_4);
x_13 = lean_ir_find_env_decl(x_3, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(x_12, x_2);
lean_dec(x_2);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_IR_Decl_params(x_15);
lean_dec(x_15);
x_17 = l_Array_zip___rarg(x_12, x_16);
lean_dec(x_16);
x_18 = lean_array_get_size(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_lt(x_19, x_18);
if (x_20 == 0)
{
uint8_t x_21; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_2);
x_21 = 0;
return x_21;
}
else
{
size_t x_22; size_t x_23; uint8_t x_24; 
x_22 = 0;
x_23 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_24 = l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming___spec__1(x_2, x_12, x_17, x_22, x_23);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_2);
return x_24;
}
}
}
case 7:
{
lean_object* x_25; uint8_t x_26; 
lean_dec(x_3);
x_25 = lean_ctor_get(x_4, 1);
lean_inc(x_25);
lean_dec(x_4);
x_26 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(x_25, x_2);
lean_dec(x_2);
lean_dec(x_25);
return x_26;
}
case 8:
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_3);
x_27 = lean_ctor_get(x_4, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_4, 1);
lean_inc(x_28);
lean_dec(x_4);
x_29 = lean_nat_dec_eq(x_2, x_27);
lean_dec(x_27);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(x_28, x_2);
lean_dec(x_2);
lean_dec(x_28);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_28);
lean_dec(x_2);
x_31 = 1;
return x_31;
}
}
default: 
{
uint8_t x_32; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = 0;
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = 0;
return x_33;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; uint8_t x_8; lean_object* x_9; 
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_8 = l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming___spec__1(x_1, x_2, x_3, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_4, x_3);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_array_uget(x_5, x_4);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_5, x_4, x_11);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_14, x_6, x_7);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_16, x_6, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_ctor_set(x_10, 1, x_19);
x_21 = 1;
x_22 = lean_usize_add(x_4, x_21);
x_23 = lean_array_uset(x_12, x_4, x_10);
x_4 = x_22;
x_5 = x_23;
x_7 = x_20;
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; size_t x_34; size_t x_35; lean_object* x_36; 
x_25 = lean_ctor_get(x_10, 0);
x_26 = lean_ctor_get(x_10, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_27 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_26, x_6, x_7);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_2);
lean_inc(x_1);
x_30 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_28, x_6, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_25);
lean_ctor_set(x_33, 1, x_31);
x_34 = 1;
x_35 = lean_usize_add(x_4, x_34);
x_36 = lean_array_uset(x_12, x_4, x_33);
x_4 = x_35;
x_5 = x_36;
x_7 = x_32;
goto _start;
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_10);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; size_t x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_10, 0);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_40 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_39, x_6, x_7);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_inc(x_2);
lean_inc(x_1);
x_43 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_41, x_6, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
lean_ctor_set(x_10, 0, x_44);
x_46 = 1;
x_47 = lean_usize_add(x_4, x_46);
x_48 = lean_array_uset(x_12, x_4, x_10);
x_4 = x_47;
x_5 = x_48;
x_7 = x_45;
goto _start;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; size_t x_58; size_t x_59; lean_object* x_60; 
x_50 = lean_ctor_get(x_10, 0);
lean_inc(x_50);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_51 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_50, x_6, x_7);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
lean_inc(x_2);
lean_inc(x_1);
x_54 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_52, x_6, x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_55);
x_58 = 1;
x_59 = lean_usize_add(x_4, x_58);
x_60 = lean_array_uset(x_12, x_4, x_57);
x_4 = x_59;
x_5 = x_60;
x_7 = x_56;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_ctor_get(x_3, 2);
x_10 = lean_ctor_get(x_3, 3);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Lean_IR_LocalContext_addJP(x_12, x_7, x_8, x_9);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_10, x_14, x_5);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_9, x_4, x_17);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_dec(x_25);
lean_ctor_set(x_3, 3, x_18);
lean_ctor_set(x_3, 2, x_24);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 0, x_3);
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_22, 0);
lean_inc(x_26);
lean_dec(x_22);
lean_ctor_set(x_3, 3, x_18);
lean_ctor_set(x_3, 2, x_26);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_3);
lean_ctor_set(x_27, 1, x_19);
lean_ctor_set(x_20, 0, x_27);
return x_20;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_20, 0);
x_29 = lean_ctor_get(x_20, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_20);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
lean_ctor_set(x_3, 3, x_18);
lean_ctor_set(x_3, 2, x_30);
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_3);
lean_ctor_set(x_32, 1, x_19);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_29);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_34 = lean_ctor_get(x_3, 0);
x_35 = lean_ctor_get(x_3, 1);
x_36 = lean_ctor_get(x_3, 2);
x_37 = lean_ctor_get(x_3, 3);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_3);
x_38 = lean_ctor_get(x_4, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_4, 1);
lean_inc(x_39);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
x_40 = l_Lean_IR_LocalContext_addJP(x_39, x_34, x_35, x_36);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_40);
lean_inc(x_2);
lean_inc(x_1);
x_42 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_37, x_41, x_5);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get(x_43, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_36, x_4, x_44);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_50 = x_47;
} else {
 lean_dec_ref(x_47);
 x_50 = lean_box(0);
}
x_51 = lean_ctor_get(x_48, 0);
lean_inc(x_51);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_52 = x_48;
} else {
 lean_dec_ref(x_48);
 x_52 = lean_box(0);
}
x_53 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_53, 0, x_34);
lean_ctor_set(x_53, 1, x_35);
lean_ctor_set(x_53, 2, x_51);
lean_ctor_set(x_53, 3, x_45);
if (lean_is_scalar(x_52)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_52;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_46);
if (lean_is_scalar(x_50)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_50;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_49);
return x_55;
}
}
case 10:
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_56 = lean_ctor_get(x_3, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_3, 1);
lean_inc(x_57);
x_58 = lean_ctor_get(x_3, 2);
lean_inc(x_58);
x_59 = lean_ctor_get(x_3, 3);
lean_inc(x_59);
x_60 = lean_ctor_get(x_4, 1);
lean_inc(x_60);
lean_inc(x_3);
x_61 = l_Lean_IR_FnBody_hasLiveVar(x_3, x_60, x_1);
x_62 = lean_unbox(x_61);
lean_dec(x_61);
if (x_62 == 0)
{
uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_63 = 0;
x_64 = lean_box(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_3);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_5);
return x_66;
}
else
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_3);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; uint8_t x_76; 
x_68 = lean_ctor_get(x_3, 3);
lean_dec(x_68);
x_69 = lean_ctor_get(x_3, 2);
lean_dec(x_69);
x_70 = lean_ctor_get(x_3, 1);
lean_dec(x_70);
x_71 = lean_ctor_get(x_3, 0);
lean_dec(x_71);
x_72 = lean_array_get_size(x_59);
x_73 = lean_usize_of_nat(x_72);
lean_dec(x_72);
x_74 = 0;
x_75 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1(x_1, x_2, x_73, x_74, x_59, x_4, x_5);
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_ctor_get(x_75, 0);
x_78 = lean_ctor_get(x_75, 1);
lean_ctor_set(x_3, 3, x_77);
x_79 = 1;
x_80 = lean_box(x_79);
lean_ctor_set(x_75, 1, x_80);
lean_ctor_set(x_75, 0, x_3);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_75);
lean_ctor_set(x_81, 1, x_78);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_82 = lean_ctor_get(x_75, 0);
x_83 = lean_ctor_get(x_75, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_75);
lean_ctor_set(x_3, 3, x_82);
x_84 = 1;
x_85 = lean_box(x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_3);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_83);
return x_87;
}
}
else
{
lean_object* x_88; size_t x_89; size_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_3);
x_88 = lean_array_get_size(x_59);
x_89 = lean_usize_of_nat(x_88);
lean_dec(x_88);
x_90 = 0;
x_91 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1(x_1, x_2, x_89, x_90, x_59, x_4, x_5);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
 x_94 = lean_box(0);
}
x_95 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_95, 0, x_56);
lean_ctor_set(x_95, 1, x_57);
lean_ctor_set(x_95, 2, x_58);
lean_ctor_set(x_95, 3, x_92);
x_96 = 1;
x_97 = lean_box(x_96);
if (lean_is_scalar(x_94)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_94;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_93);
return x_99;
}
}
}
default: 
{
uint8_t x_100; 
x_100 = l_Lean_IR_FnBody_isTerminal(x_3);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_101 = l_Lean_IR_FnBody_body(x_3);
x_102 = lean_box(13);
x_103 = l_Lean_IR_FnBody_setBody(x_3, x_102);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_104 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_101, x_4, x_5);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
x_107 = lean_unbox(x_106);
lean_dec(x_106);
if (x_107 == 0)
{
uint8_t x_108; 
x_108 = !lean_is_exclusive(x_104);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_109 = lean_ctor_get(x_104, 1);
x_110 = lean_ctor_get(x_104, 0);
lean_dec(x_110);
x_111 = !lean_is_exclusive(x_105);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_112 = lean_ctor_get(x_105, 0);
x_113 = lean_ctor_get(x_105, 1);
lean_dec(x_113);
x_114 = lean_ctor_get(x_4, 0);
lean_inc(x_114);
lean_inc(x_1);
lean_inc(x_103);
x_115 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming(x_103, x_1, x_114);
if (x_115 == 0)
{
uint8_t x_116; 
lean_inc(x_103);
x_116 = l_Lean_IR_HasIndex_visitFnBody(x_1, x_103);
if (x_116 == 0)
{
lean_object* x_117; uint8_t x_118; lean_object* x_119; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_117 = l_Lean_IR_FnBody_setBody(x_103, x_112);
x_118 = 0;
x_119 = lean_box(x_118);
lean_ctor_set(x_105, 1, x_119);
lean_ctor_set(x_105, 0, x_117);
return x_104;
}
else
{
lean_object* x_120; uint8_t x_121; 
lean_free_object(x_104);
x_120 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(x_1, x_2, x_112, x_4, x_109);
lean_dec(x_4);
x_121 = !lean_is_exclusive(x_120);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; 
x_122 = lean_ctor_get(x_120, 0);
x_123 = lean_ctor_get(x_120, 1);
x_124 = l_Lean_IR_FnBody_setBody(x_103, x_122);
x_125 = 1;
x_126 = lean_box(x_125);
lean_ctor_set(x_120, 1, x_126);
lean_ctor_set(x_120, 0, x_124);
lean_ctor_set(x_105, 1, x_123);
lean_ctor_set(x_105, 0, x_120);
return x_105;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; lean_object* x_131; lean_object* x_132; 
x_127 = lean_ctor_get(x_120, 0);
x_128 = lean_ctor_get(x_120, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_120);
x_129 = l_Lean_IR_FnBody_setBody(x_103, x_127);
x_130 = 1;
x_131 = lean_box(x_130);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_129);
lean_ctor_set(x_132, 1, x_131);
lean_ctor_set(x_105, 1, x_128);
lean_ctor_set(x_105, 0, x_132);
return x_105;
}
}
}
else
{
lean_object* x_133; uint8_t x_134; lean_object* x_135; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_133 = l_Lean_IR_FnBody_setBody(x_103, x_112);
x_134 = 1;
x_135 = lean_box(x_134);
lean_ctor_set(x_105, 1, x_135);
lean_ctor_set(x_105, 0, x_133);
return x_104;
}
}
else
{
lean_object* x_136; lean_object* x_137; uint8_t x_138; 
x_136 = lean_ctor_get(x_105, 0);
lean_inc(x_136);
lean_dec(x_105);
x_137 = lean_ctor_get(x_4, 0);
lean_inc(x_137);
lean_inc(x_1);
lean_inc(x_103);
x_138 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming(x_103, x_1, x_137);
if (x_138 == 0)
{
uint8_t x_139; 
lean_inc(x_103);
x_139 = l_Lean_IR_HasIndex_visitFnBody(x_1, x_103);
if (x_139 == 0)
{
lean_object* x_140; uint8_t x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_140 = l_Lean_IR_FnBody_setBody(x_103, x_136);
x_141 = 0;
x_142 = lean_box(x_141);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_140);
lean_ctor_set(x_143, 1, x_142);
lean_ctor_set(x_104, 0, x_143);
return x_104;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_free_object(x_104);
x_144 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(x_1, x_2, x_136, x_4, x_109);
lean_dec(x_4);
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 x_147 = x_144;
} else {
 lean_dec_ref(x_144);
 x_147 = lean_box(0);
}
x_148 = l_Lean_IR_FnBody_setBody(x_103, x_145);
x_149 = 1;
x_150 = lean_box(x_149);
if (lean_is_scalar(x_147)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_147;
}
lean_ctor_set(x_151, 0, x_148);
lean_ctor_set(x_151, 1, x_150);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_146);
return x_152;
}
}
else
{
lean_object* x_153; uint8_t x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_153 = l_Lean_IR_FnBody_setBody(x_103, x_136);
x_154 = 1;
x_155 = lean_box(x_154);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_155);
lean_ctor_set(x_104, 0, x_156);
return x_104;
}
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; 
x_157 = lean_ctor_get(x_104, 1);
lean_inc(x_157);
lean_dec(x_104);
x_158 = lean_ctor_get(x_105, 0);
lean_inc(x_158);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_159 = x_105;
} else {
 lean_dec_ref(x_105);
 x_159 = lean_box(0);
}
x_160 = lean_ctor_get(x_4, 0);
lean_inc(x_160);
lean_inc(x_1);
lean_inc(x_103);
x_161 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isConsuming(x_103, x_1, x_160);
if (x_161 == 0)
{
uint8_t x_162; 
lean_inc(x_103);
x_162 = l_Lean_IR_HasIndex_visitFnBody(x_1, x_103);
if (x_162 == 0)
{
lean_object* x_163; uint8_t x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_163 = l_Lean_IR_FnBody_setBody(x_103, x_158);
x_164 = 0;
x_165 = lean_box(x_164);
if (lean_is_scalar(x_159)) {
 x_166 = lean_alloc_ctor(0, 2, 0);
} else {
 x_166 = x_159;
}
lean_ctor_set(x_166, 0, x_163);
lean_ctor_set(x_166, 1, x_165);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_157);
return x_167;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_168 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(x_1, x_2, x_158, x_4, x_157);
lean_dec(x_4);
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
x_172 = l_Lean_IR_FnBody_setBody(x_103, x_169);
x_173 = 1;
x_174 = lean_box(x_173);
if (lean_is_scalar(x_171)) {
 x_175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_175 = x_171;
}
lean_ctor_set(x_175, 0, x_172);
lean_ctor_set(x_175, 1, x_174);
if (lean_is_scalar(x_159)) {
 x_176 = lean_alloc_ctor(0, 2, 0);
} else {
 x_176 = x_159;
}
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_170);
return x_176;
}
}
else
{
lean_object* x_177; uint8_t x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_177 = l_Lean_IR_FnBody_setBody(x_103, x_158);
x_178 = 1;
x_179 = lean_box(x_178);
if (lean_is_scalar(x_159)) {
 x_180 = lean_alloc_ctor(0, 2, 0);
} else {
 x_180 = x_159;
}
lean_ctor_set(x_180, 0, x_177);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_157);
return x_181;
}
}
}
else
{
uint8_t x_182; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_182 = !lean_is_exclusive(x_104);
if (x_182 == 0)
{
lean_object* x_183; uint8_t x_184; 
x_183 = lean_ctor_get(x_104, 0);
lean_dec(x_183);
x_184 = !lean_is_exclusive(x_105);
if (x_184 == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; uint8_t x_188; lean_object* x_189; 
x_185 = lean_ctor_get(x_105, 0);
x_186 = lean_ctor_get(x_105, 1);
lean_dec(x_186);
x_187 = l_Lean_IR_FnBody_setBody(x_103, x_185);
x_188 = 1;
x_189 = lean_box(x_188);
lean_ctor_set(x_105, 1, x_189);
lean_ctor_set(x_105, 0, x_187);
return x_104;
}
else
{
lean_object* x_190; lean_object* x_191; uint8_t x_192; lean_object* x_193; lean_object* x_194; 
x_190 = lean_ctor_get(x_105, 0);
lean_inc(x_190);
lean_dec(x_105);
x_191 = l_Lean_IR_FnBody_setBody(x_103, x_190);
x_192 = 1;
x_193 = lean_box(x_192);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_191);
lean_ctor_set(x_194, 1, x_193);
lean_ctor_set(x_104, 0, x_194);
return x_104;
}
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; uint8_t x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_195 = lean_ctor_get(x_104, 1);
lean_inc(x_195);
lean_dec(x_104);
x_196 = lean_ctor_get(x_105, 0);
lean_inc(x_196);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_197 = x_105;
} else {
 lean_dec_ref(x_105);
 x_197 = lean_box(0);
}
x_198 = l_Lean_IR_FnBody_setBody(x_103, x_196);
x_199 = 1;
x_200 = lean_box(x_199);
if (lean_is_scalar(x_197)) {
 x_201 = lean_alloc_ctor(0, 2, 0);
} else {
 x_201 = x_197;
}
lean_ctor_set(x_201, 0, x_198);
lean_ctor_set(x_201, 1, x_200);
x_202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_195);
return x_202;
}
}
}
else
{
lean_object* x_203; lean_object* x_204; uint8_t x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
lean_dec(x_2);
x_203 = lean_ctor_get(x_4, 1);
lean_inc(x_203);
lean_dec(x_4);
lean_inc(x_3);
x_204 = l_Lean_IR_FnBody_hasLiveVar(x_3, x_203, x_1);
lean_dec(x_1);
x_205 = lean_unbox(x_204);
lean_dec(x_204);
x_206 = lean_box(x_205);
x_207 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_207, 0, x_3);
lean_ctor_set(x_207, 1, x_206);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_5);
return x_208;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_D(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_7, x_4, x_8);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_3, x_2);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_array_uget(x_4, x_3);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_uset(x_4, x_3, x_10);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_5);
x_15 = l_Lean_IR_ResetReuse_R(x_14, x_5, x_6);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_16);
lean_inc(x_13);
lean_ctor_set(x_9, 1, x_16);
x_18 = l_Lean_IR_CtorInfo_isScalar(x_13);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
lean_dec(x_9);
lean_inc(x_5);
lean_inc(x_13);
lean_inc(x_1);
x_19 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_D(x_1, x_13, x_16, x_5, x_17);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_20);
x_23 = 1;
x_24 = lean_usize_add(x_3, x_23);
x_25 = lean_array_uset(x_11, x_3, x_22);
x_3 = x_24;
x_4 = x_25;
x_6 = x_21;
goto _start;
}
else
{
size_t x_27; size_t x_28; lean_object* x_29; 
lean_dec(x_16);
lean_dec(x_13);
x_27 = 1;
x_28 = lean_usize_add(x_3, x_27);
x_29 = lean_array_uset(x_11, x_3, x_9);
x_3 = x_28;
x_4 = x_29;
x_6 = x_17;
goto _start;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_31 = lean_ctor_get(x_9, 0);
x_32 = lean_ctor_get(x_9, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_9);
lean_inc(x_5);
x_33 = l_Lean_IR_ResetReuse_R(x_32, x_5, x_6);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
lean_inc(x_34);
lean_inc(x_31);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_IR_CtorInfo_isScalar(x_31);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; 
lean_dec(x_36);
lean_inc(x_5);
lean_inc(x_31);
lean_inc(x_1);
x_38 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_D(x_1, x_31, x_34, x_5, x_35);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_31);
lean_ctor_set(x_41, 1, x_39);
x_42 = 1;
x_43 = lean_usize_add(x_3, x_42);
x_44 = lean_array_uset(x_11, x_3, x_41);
x_3 = x_43;
x_4 = x_44;
x_6 = x_40;
goto _start;
}
else
{
size_t x_46; size_t x_47; lean_object* x_48; 
lean_dec(x_34);
lean_dec(x_31);
x_46 = 1;
x_47 = lean_usize_add(x_3, x_46);
x_48 = lean_array_uset(x_11, x_3, x_36);
x_3 = x_47;
x_4 = x_48;
x_6 = x_35;
goto _start;
}
}
}
else
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_9);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; size_t x_55; size_t x_56; lean_object* x_57; 
x_51 = lean_ctor_get(x_9, 0);
lean_inc(x_5);
x_52 = l_Lean_IR_ResetReuse_R(x_51, x_5, x_6);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
lean_ctor_set(x_9, 0, x_53);
x_55 = 1;
x_56 = lean_usize_add(x_3, x_55);
x_57 = lean_array_uset(x_11, x_3, x_9);
x_3 = x_56;
x_4 = x_57;
x_6 = x_54;
goto _start;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; size_t x_64; size_t x_65; lean_object* x_66; 
x_59 = lean_ctor_get(x_9, 0);
lean_inc(x_59);
lean_dec(x_9);
lean_inc(x_5);
x_60 = l_Lean_IR_ResetReuse_R(x_59, x_5, x_6);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_61);
x_64 = 1;
x_65 = lean_usize_add(x_3, x_64);
x_66 = lean_array_uset(x_11, x_3, x_63);
x_3 = x_65;
x_4 = x_66;
x_6 = x_62;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ResetReuse_R(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
x_9 = l_Lean_IR_ResetReuse_R(x_7, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_IR_LocalContext_addJP(x_13, x_5, x_6, x_10);
lean_ctor_set(x_2, 1, x_14);
x_15 = l_Lean_IR_ResetReuse_R(x_8, x_2, x_11);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_1, 3, x_17);
lean_ctor_set(x_1, 2, x_10);
lean_ctor_set(x_15, 0, x_1);
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
lean_ctor_set(x_1, 3, x_18);
lean_ctor_set(x_1, 2, x_10);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
lean_inc(x_10);
lean_inc(x_6);
lean_inc(x_5);
x_23 = l_Lean_IR_LocalContext_addJP(x_22, x_5, x_6, x_10);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_IR_ResetReuse_R(x_8, x_24, x_11);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_28 = x_25;
} else {
 lean_dec_ref(x_25);
 x_28 = lean_box(0);
}
lean_ctor_set(x_1, 3, x_26);
lean_ctor_set(x_1, 2, x_10);
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_1);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_30 = lean_ctor_get(x_1, 0);
x_31 = lean_ctor_get(x_1, 1);
x_32 = lean_ctor_get(x_1, 2);
x_33 = lean_ctor_get(x_1, 3);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_1);
lean_inc(x_2);
x_34 = l_Lean_IR_ResetReuse_R(x_32, x_2, x_3);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_2, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_2, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_39 = x_2;
} else {
 lean_dec_ref(x_2);
 x_39 = lean_box(0);
}
lean_inc(x_35);
lean_inc(x_31);
lean_inc(x_30);
x_40 = l_Lean_IR_LocalContext_addJP(x_38, x_30, x_31, x_35);
if (lean_is_scalar(x_39)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_39;
}
lean_ctor_set(x_41, 0, x_37);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Lean_IR_ResetReuse_R(x_33, x_41, x_36);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_45 = x_42;
} else {
 lean_dec_ref(x_42);
 x_45 = lean_box(0);
}
x_46 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_46, 0, x_30);
lean_ctor_set(x_46, 1, x_31);
lean_ctor_set(x_46, 2, x_35);
lean_ctor_set(x_46, 3, x_43);
if (lean_is_scalar(x_45)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_45;
}
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
}
case 10:
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_1);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; size_t x_52; size_t x_53; lean_object* x_54; uint8_t x_55; 
x_49 = lean_ctor_get(x_1, 1);
x_50 = lean_ctor_get(x_1, 3);
x_51 = lean_array_get_size(x_50);
x_52 = lean_usize_of_nat(x_51);
lean_dec(x_51);
x_53 = 0;
lean_inc(x_49);
x_54 = l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__1(x_49, x_52, x_53, x_50, x_2, x_3);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_54, 0);
lean_ctor_set(x_1, 3, x_56);
lean_ctor_set(x_54, 0, x_1);
return x_54;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_54, 0);
x_58 = lean_ctor_get(x_54, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_54);
lean_ctor_set(x_1, 3, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_1);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; size_t x_65; size_t x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_60 = lean_ctor_get(x_1, 0);
x_61 = lean_ctor_get(x_1, 1);
x_62 = lean_ctor_get(x_1, 2);
x_63 = lean_ctor_get(x_1, 3);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_1);
x_64 = lean_array_get_size(x_63);
x_65 = lean_usize_of_nat(x_64);
lean_dec(x_64);
x_66 = 0;
lean_inc(x_61);
x_67 = l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__1(x_61, x_65, x_66, x_63, x_2, x_3);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_70 = x_67;
} else {
 lean_dec_ref(x_67);
 x_70 = lean_box(0);
}
x_71 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_71, 0, x_60);
lean_ctor_set(x_71, 1, x_61);
lean_ctor_set(x_71, 2, x_62);
lean_ctor_set(x_71, 3, x_68);
if (lean_is_scalar(x_70)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_70;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_69);
return x_72;
}
}
default: 
{
uint8_t x_73; 
x_73 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_74 = l_Lean_IR_FnBody_body(x_1);
x_75 = lean_box(13);
x_76 = l_Lean_IR_FnBody_setBody(x_1, x_75);
x_77 = l_Lean_IR_ResetReuse_R(x_74, x_2, x_3);
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = l_Lean_IR_FnBody_setBody(x_76, x_79);
lean_ctor_set(x_77, 0, x_80);
return x_77;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_77, 0);
x_82 = lean_ctor_get(x_77, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_77);
x_83 = l_Lean_IR_FnBody_setBody(x_76, x_81);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
else
{
lean_object* x_85; 
lean_dec(x_2);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_1);
lean_ctor_set(x_85, 1, x_3);
return x_85;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_insertResetReuse(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
x_4 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_5 = l_Lean_IR_MaxIndex_collectDecl(x_1, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_5, x_6);
lean_dec(x_5);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Lean_IR_ResetReuse_R(x_3, x_9, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_IR_Decl_updateBody_x21(x_1, x_11);
return x_12;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_inferReuse___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_3, x_2);
if (x_5 == 0)
{
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; 
x_6 = lean_array_uget(x_4, x_3);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_4, x_3, x_7);
lean_inc(x_1);
x_9 = l_Lean_IR_Decl_insertResetReuse(x_6, x_1);
x_10 = 1;
x_11 = lean_usize_add(x_3, x_10);
x_12 = lean_array_uset(x_8, x_3, x_9);
x_3 = x_11;
x_4 = x_12;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_inferReuse(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_IR_getEnv___rarg(x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_array_get_size(x_1);
x_8 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_9 = 0;
x_10 = l_Array_mapMUnsafe_map___at_Lean_IR_inferReuse___spec__1(x_6, x_8, x_9, x_1);
lean_ctor_set(x_4, 0, x_10);
return x_4;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_13 = lean_array_get_size(x_1);
x_14 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = l_Array_mapMUnsafe_map___at_Lean_IR_inferReuse___spec__1(x_11, x_14, x_15, x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_inferReuse___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_IR_inferReuse___spec__1(x_1, x_5, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_inferReuse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_inferReuse(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Lean_Compiler_IR_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_IR_LiveVars(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_IR_Format(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_IR_Borrow(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_ResetReuse(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_LiveVars(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Format(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Borrow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
