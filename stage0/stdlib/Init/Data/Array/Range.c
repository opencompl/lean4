// Lean compiler output
// Module: Init.Data.Array.Range
// Imports: Init.Data.Array.Lemmas Init.Data.Array.Basic Init.Data.Array.OfFn Init.Data.Array.MapIdx Init.Data.Array.Zip Init.Data.List.Nat.Range
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
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__20;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__17;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__30;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__13;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__26;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__23;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__25;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__12;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__3;
LEAN_EXPORT lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093_;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__22;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__2;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__11;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__7;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__28;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__15;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__9;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__19;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__5;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__4;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__1;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__18;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__16;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__21;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__6;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__24;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__31;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__10;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__14;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__8;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__29;
static lean_object* l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__27;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = lean_apply_2(x_3, x_8, lean_box(0));
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = lean_apply_1(x_4, lean_box(0));
return x_10;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq", 9, 9);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__1;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__2;
x_3 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__3;
x_4 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__1;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__2;
x_3 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__3;
x_4 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__7;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("simp", 4, 4);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__1;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__2;
x_3 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__3;
x_4 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__11;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__11;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__6;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__13;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("optConfig", 9, 9);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__1;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__2;
x_3 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__3;
x_4 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__15;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__10;
x_3 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__6;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__6;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__17;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__16;
x_3 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__18;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__14;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__19;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__20;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__17;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__21;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__17;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__22;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__17;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__23;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__17;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__12;
x_3 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__24;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__6;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__25;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__10;
x_3 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__26;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__6;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__27;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__8;
x_3 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__28;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__6;
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__29;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__5;
x_3 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__30;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Init_Data_Array_Range___hyg_1093_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__31;
return x_1;
}
}
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_Array_OfFn(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_Array_MapIdx(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_Array_Zip(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_List_Nat_Range(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_Range(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_OfFn(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_MapIdx(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Zip(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Nat_Range(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__1 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__1();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__1);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__2 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__2();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__2);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__3 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__3();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__3);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__4 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__4();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__4);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__5 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__5();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__5);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__6 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__6();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__6);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__7 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__7();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__7);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__8 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__8();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__8);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__9 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__9();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__9);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__10 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__10();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__10);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__11 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__11();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__11);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__12 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__12();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__12);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__13 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__13();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__13);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__14 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__14();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__14);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__15 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__15();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__15);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__16 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__16();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__16);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__17 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__17();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__17);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__18 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__18();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__18);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__19 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__19();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__19);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__20 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__20();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__20);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__21 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__21();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__21);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__22 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__22();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__22);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__23 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__23();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__23);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__24 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__24();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__24);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__25 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__25();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__25);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__26 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__26();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__26);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__27 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__27();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__27);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__28 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__28();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__28);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__29 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__29();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__29);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__30 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__30();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__30);
l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__31 = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__31();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093____closed__31);
l___auto____x40_Init_Data_Array_Range___hyg_1093_ = _init_l___auto____x40_Init_Data_Array_Range___hyg_1093_();
lean_mark_persistent(l___auto____x40_Init_Data_Array_Range___hyg_1093_);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
