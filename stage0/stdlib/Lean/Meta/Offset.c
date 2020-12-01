// Lean compiler output
// Module: Lean.Meta.Offset
// Imports: Init Lean.Data.LBool Lean.Meta.InferType
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
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__1(lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__3___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__4(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__3(lean_object*);
lean_object* l_Lean_Meta_isExprDefEqAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat_visit_match__1(lean_object*);
lean_object* l_Lean_Meta_instantiateMVars___at___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__1___rarg(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__4(lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__5___rarg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__5(lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__3___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__2(lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__5(lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_706____closed__6;
lean_object* l_Lean_Meta_isDefEqOffset_match__6(lean_object*);
extern lean_object* l_Lean_Literal_type___closed__1;
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat_match__1(lean_object*);
extern lean_object* l_Lean_Expr_isCharLit___closed__3;
lean_object* l_Lean_Meta_isDefEqOffset_match__1(lean_object*);
extern lean_object* l_Lean_Literal_type___closed__2;
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_538____closed__7;
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__2(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_370____closed__6;
lean_object* l_Lean_Meta_evalNat_visit___closed__6;
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat_visit___closed__8;
lean_object* l_Lean_Meta_evalNat_visit___closed__4;
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat_visit___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_538____closed__6;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_706____closed__7;
uint8_t l_Bool_toLBool(uint8_t);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat_visit___closed__3;
lean_object* l_Lean_Meta_isDefEqOffset_match__5___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat_visit___closed__2;
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset___closed__1;
lean_object* l_Lean_Meta_isDefEqOffset_match__3(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_evalNat_visit___closed__7;
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Syntax_decodeNatLitVal___closed__1;
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero_match__1(lean_object*);
lean_object* l_Lean_Meta_evalNat_visit_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat_match__1___rarg___closed__1;
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars(lean_object*);
lean_object* l_Lean_Meta_evalNat_visit___closed__5;
lean_object* l_Lean_Meta_evalNat_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__6___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_370____closed__7;
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars___at___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_instantiateMVarsImp(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_7);
if (x_15 == 0)
{
return x_7;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_7, 0);
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_7);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l_Lean_Meta_instantiateMVars___at___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_8, 1);
x_18 = lean_ctor_get(x_8, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_9, 0);
lean_inc(x_19);
lean_dec(x_9);
x_20 = l_Lean_Expr_getAppFn(x_19);
x_21 = l_Lean_Expr_isMVar(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_free_object(x_8);
x_22 = lean_apply_6(x_2, x_19, x_3, x_4, x_5, x_6, x_17);
return x_22;
}
else
{
lean_object* x_23; 
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_box(0);
lean_ctor_set(x_8, 0, x_23);
return x_8;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
lean_dec(x_8);
x_25 = lean_ctor_get(x_9, 0);
lean_inc(x_25);
lean_dec(x_9);
x_26 = l_Lean_Expr_getAppFn(x_25);
x_27 = l_Lean_Expr_isMVar(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_apply_6(x_2, x_25, x_3, x_4, x_5, x_6, x_24);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_25);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
return x_30;
}
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_8);
if (x_31 == 0)
{
return x_8;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_8, 0);
x_33 = lean_ctor_get(x_8, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_8);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_evalNat_visit_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_2(x_2, x_5, x_7);
return x_8;
}
case 4:
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_3, x_9, x_10, x_12);
return x_13;
}
default: 
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
}
}
}
lean_object* l_Lean_Meta_evalNat_visit_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_evalNat_visit_match__1___rarg), 4, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_evalNat_match__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("zero");
return x_1;
}
}
lean_object* l_Lean_Meta_evalNat_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_10 = lean_box_uint64(x_9);
x_11 = lean_apply_3(x_6, x_1, x_8, x_10);
return x_11;
}
case 4:
{
lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 1)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
uint64_t x_17; lean_object* x_18; size_t x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_18 = lean_ctor_get(x_12, 1);
x_19 = lean_ctor_get_usize(x_12, 2);
x_20 = lean_ctor_get(x_12, 0);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
lean_object* x_22; size_t x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_13, 1);
x_23 = lean_ctor_get_usize(x_13, 2);
x_24 = lean_ctor_get(x_13, 0);
lean_dec(x_24);
x_25 = l_Lean_Literal_type___closed__1;
x_26 = lean_string_dec_eq(x_22, x_25);
lean_dec(x_22);
if (x_26 == 0)
{
lean_object* x_27; 
lean_free_object(x_13);
lean_free_object(x_12);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_4);
x_27 = lean_apply_1(x_7, x_1);
return x_27;
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_1);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_1, 1);
lean_dec(x_29);
x_30 = lean_ctor_get(x_1, 0);
lean_dec(x_30);
x_31 = l_Lean_Meta_evalNat_match__1___rarg___closed__1;
x_32 = lean_string_dec_eq(x_18, x_31);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_4);
lean_ctor_set(x_13, 1, x_25);
x_33 = lean_apply_1(x_7, x_1);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_free_object(x_1);
lean_free_object(x_13);
lean_free_object(x_12);
lean_dec(x_18);
lean_dec(x_7);
x_34 = lean_box_uint64(x_17);
x_35 = lean_box_usize(x_23);
x_36 = lean_box_usize(x_19);
x_37 = lean_apply_4(x_4, x_15, x_34, x_35, x_36);
return x_37;
}
}
else
{
lean_object* x_38; uint8_t x_39; 
lean_dec(x_1);
x_38 = l_Lean_Meta_evalNat_match__1___rarg___closed__1;
x_39 = lean_string_dec_eq(x_18, x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_4);
lean_ctor_set(x_13, 1, x_25);
x_40 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_40, 0, x_12);
lean_ctor_set(x_40, 1, x_15);
lean_ctor_set_uint64(x_40, sizeof(void*)*2, x_17);
x_41 = lean_apply_1(x_7, x_40);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_free_object(x_13);
lean_free_object(x_12);
lean_dec(x_18);
lean_dec(x_7);
x_42 = lean_box_uint64(x_17);
x_43 = lean_box_usize(x_23);
x_44 = lean_box_usize(x_19);
x_45 = lean_apply_4(x_4, x_15, x_42, x_43, x_44);
return x_45;
}
}
}
}
else
{
lean_object* x_46; size_t x_47; lean_object* x_48; uint8_t x_49; 
x_46 = lean_ctor_get(x_13, 1);
x_47 = lean_ctor_get_usize(x_13, 2);
lean_inc(x_46);
lean_dec(x_13);
x_48 = l_Lean_Literal_type___closed__1;
x_49 = lean_string_dec_eq(x_46, x_48);
lean_dec(x_46);
if (x_49 == 0)
{
lean_object* x_50; 
lean_free_object(x_12);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_4);
x_50 = lean_apply_1(x_7, x_1);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_51 = x_1;
} else {
 lean_dec_ref(x_1);
 x_51 = lean_box(0);
}
x_52 = l_Lean_Meta_evalNat_match__1___rarg___closed__1;
x_53 = lean_string_dec_eq(x_18, x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_4);
x_54 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_54, 0, x_14);
lean_ctor_set(x_54, 1, x_48);
lean_ctor_set_usize(x_54, 2, x_47);
lean_ctor_set(x_12, 0, x_54);
if (lean_is_scalar(x_51)) {
 x_55 = lean_alloc_ctor(4, 2, 8);
} else {
 x_55 = x_51;
}
lean_ctor_set(x_55, 0, x_12);
lean_ctor_set(x_55, 1, x_15);
lean_ctor_set_uint64(x_55, sizeof(void*)*2, x_17);
x_56 = lean_apply_1(x_7, x_55);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_51);
lean_free_object(x_12);
lean_dec(x_18);
lean_dec(x_7);
x_57 = lean_box_uint64(x_17);
x_58 = lean_box_usize(x_47);
x_59 = lean_box_usize(x_19);
x_60 = lean_apply_4(x_4, x_15, x_57, x_58, x_59);
return x_60;
}
}
}
}
else
{
uint64_t x_61; lean_object* x_62; size_t x_63; lean_object* x_64; size_t x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_61 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_62 = lean_ctor_get(x_12, 1);
x_63 = lean_ctor_get_usize(x_12, 2);
lean_inc(x_62);
lean_dec(x_12);
x_64 = lean_ctor_get(x_13, 1);
lean_inc(x_64);
x_65 = lean_ctor_get_usize(x_13, 2);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_66 = x_13;
} else {
 lean_dec_ref(x_13);
 x_66 = lean_box(0);
}
x_67 = l_Lean_Literal_type___closed__1;
x_68 = lean_string_dec_eq(x_64, x_67);
lean_dec(x_64);
if (x_68 == 0)
{
lean_object* x_69; 
lean_dec(x_66);
lean_dec(x_62);
lean_dec(x_15);
lean_dec(x_4);
x_69 = lean_apply_1(x_7, x_1);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_70 = x_1;
} else {
 lean_dec_ref(x_1);
 x_70 = lean_box(0);
}
x_71 = l_Lean_Meta_evalNat_match__1___rarg___closed__1;
x_72 = lean_string_dec_eq(x_62, x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_4);
if (lean_is_scalar(x_66)) {
 x_73 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_73 = x_66;
}
lean_ctor_set(x_73, 0, x_14);
lean_ctor_set(x_73, 1, x_67);
lean_ctor_set_usize(x_73, 2, x_65);
x_74 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_62);
lean_ctor_set_usize(x_74, 2, x_63);
if (lean_is_scalar(x_70)) {
 x_75 = lean_alloc_ctor(4, 2, 8);
} else {
 x_75 = x_70;
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_15);
lean_ctor_set_uint64(x_75, sizeof(void*)*2, x_61);
x_76 = lean_apply_1(x_7, x_75);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_70);
lean_dec(x_66);
lean_dec(x_62);
lean_dec(x_7);
x_77 = lean_box_uint64(x_61);
x_78 = lean_box_usize(x_65);
x_79 = lean_box_usize(x_63);
x_80 = lean_apply_4(x_4, x_15, x_77, x_78, x_79);
return x_80;
}
}
}
}
else
{
lean_object* x_81; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_4);
x_81 = lean_apply_1(x_7, x_1);
return x_81;
}
}
else
{
lean_object* x_82; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_4);
x_82 = lean_apply_1(x_7, x_1);
return x_82;
}
}
else
{
lean_object* x_83; 
lean_dec(x_12);
lean_dec(x_4);
x_83 = lean_apply_1(x_7, x_1);
return x_83;
}
}
case 5:
{
lean_object* x_84; lean_object* x_85; uint64_t x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_84 = lean_ctor_get(x_1, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_1, 1);
lean_inc(x_85);
x_86 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_87 = lean_box_uint64(x_86);
x_88 = lean_apply_4(x_5, x_1, x_84, x_85, x_87);
return x_88;
}
case 9:
{
lean_object* x_89; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_89 = lean_ctor_get(x_1, 0);
lean_inc(x_89);
if (lean_obj_tag(x_89) == 0)
{
uint64_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_7);
x_90 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_91 = lean_ctor_get(x_89, 0);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_box_uint64(x_90);
x_93 = lean_apply_2(x_2, x_91, x_92);
return x_93;
}
else
{
lean_object* x_94; 
lean_dec(x_89);
lean_dec(x_2);
x_94 = lean_apply_1(x_7, x_1);
return x_94;
}
}
case 10:
{
lean_object* x_95; lean_object* x_96; uint64_t x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_95 = lean_ctor_get(x_1, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_1, 1);
lean_inc(x_96);
x_97 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_98 = lean_box_uint64(x_97);
x_99 = lean_apply_3(x_3, x_95, x_96, x_98);
return x_99;
}
default: 
{
lean_object* x_100; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_100 = lean_apply_1(x_7, x_1);
return x_100;
}
}
}
}
lean_object* l_Lean_Meta_evalNat_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_evalNat_match__1___rarg), 7, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_evalNat_visit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("OfNat");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_evalNat_visit___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_evalNat_visit___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_evalNat_visit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_evalNat_visit___closed__2;
x_2 = l_Lean_Expr_isCharLit___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_evalNat_visit___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_myMacro____x40_Init_Notation___hyg_370____closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_evalNat_visit___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_myMacro____x40_Init_Notation___hyg_538____closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_evalNat_visit___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_myMacro____x40_Init_Notation___hyg_706____closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_evalNat_visit___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("succ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_evalNat_visit___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Literal_type___closed__2;
x_2 = l_Lean_Meta_evalNat_visit___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_evalNat_visit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Expr_getAppFn(x_1);
switch (lean_obj_tag(x_7)) {
case 2:
{
lean_object* x_8; 
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_Lean_Meta_instantiateMVars___at___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_8, 1);
x_18 = lean_ctor_get(x_8, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_9, 0);
lean_inc(x_19);
lean_dec(x_9);
x_20 = l_Lean_Expr_getAppFn(x_19);
x_21 = l_Lean_Expr_isMVar(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_free_object(x_8);
x_22 = l_Lean_Meta_evalNat(x_19, x_2, x_3, x_4, x_5, x_17);
return x_22;
}
else
{
lean_object* x_23; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_box(0);
lean_ctor_set(x_8, 0, x_23);
return x_8;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
lean_dec(x_8);
x_25 = lean_ctor_get(x_9, 0);
lean_inc(x_25);
lean_dec(x_9);
x_26 = l_Lean_Expr_getAppFn(x_25);
x_27 = l_Lean_Expr_isMVar(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = l_Lean_Meta_evalNat(x_25, x_2, x_3, x_4, x_5, x_24);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_25);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
return x_30;
}
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_8);
if (x_31 == 0)
{
return x_8;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_8, 0);
x_33 = lean_ctor_get(x_8, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_8);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
case 4:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_53; lean_object* x_214; lean_object* x_369; uint8_t x_370; 
x_35 = lean_ctor_get(x_7, 0);
lean_inc(x_35);
lean_dec(x_7);
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Lean_Expr_getAppNumArgsAux(x_1, x_36);
x_369 = l_Lean_Meta_evalNat_visit___closed__8;
x_370 = lean_name_eq(x_35, x_369);
if (x_370 == 0)
{
lean_object* x_371; 
x_371 = lean_box(0);
x_214 = x_371;
goto block_368;
}
else
{
lean_object* x_372; uint8_t x_373; 
x_372 = lean_unsigned_to_nat(1u);
x_373 = lean_nat_dec_eq(x_37, x_372);
if (x_373 == 0)
{
lean_object* x_374; 
x_374 = lean_box(0);
x_214 = x_374;
goto block_368;
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; 
lean_dec(x_35);
x_375 = lean_nat_sub(x_37, x_36);
lean_dec(x_37);
x_376 = lean_nat_sub(x_375, x_372);
lean_dec(x_375);
x_377 = l_Lean_Expr_getRevArg_x21(x_1, x_376);
lean_dec(x_1);
x_378 = l_Lean_Meta_evalNat(x_377, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_378) == 0)
{
lean_object* x_379; 
x_379 = lean_ctor_get(x_378, 0);
lean_inc(x_379);
if (lean_obj_tag(x_379) == 0)
{
uint8_t x_380; 
x_380 = !lean_is_exclusive(x_378);
if (x_380 == 0)
{
lean_object* x_381; lean_object* x_382; 
x_381 = lean_ctor_get(x_378, 0);
lean_dec(x_381);
x_382 = lean_box(0);
lean_ctor_set(x_378, 0, x_382);
return x_378;
}
else
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; 
x_383 = lean_ctor_get(x_378, 1);
lean_inc(x_383);
lean_dec(x_378);
x_384 = lean_box(0);
x_385 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_385, 0, x_384);
lean_ctor_set(x_385, 1, x_383);
return x_385;
}
}
else
{
uint8_t x_386; 
x_386 = !lean_is_exclusive(x_378);
if (x_386 == 0)
{
lean_object* x_387; uint8_t x_388; 
x_387 = lean_ctor_get(x_378, 0);
lean_dec(x_387);
x_388 = !lean_is_exclusive(x_379);
if (x_388 == 0)
{
lean_object* x_389; lean_object* x_390; 
x_389 = lean_ctor_get(x_379, 0);
x_390 = lean_nat_add(x_389, x_372);
lean_dec(x_389);
lean_ctor_set(x_379, 0, x_390);
return x_378;
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; 
x_391 = lean_ctor_get(x_379, 0);
lean_inc(x_391);
lean_dec(x_379);
x_392 = lean_nat_add(x_391, x_372);
lean_dec(x_391);
x_393 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_393, 0, x_392);
lean_ctor_set(x_378, 0, x_393);
return x_378;
}
}
else
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; 
x_394 = lean_ctor_get(x_378, 1);
lean_inc(x_394);
lean_dec(x_378);
x_395 = lean_ctor_get(x_379, 0);
lean_inc(x_395);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 x_396 = x_379;
} else {
 lean_dec_ref(x_379);
 x_396 = lean_box(0);
}
x_397 = lean_nat_add(x_395, x_372);
lean_dec(x_395);
if (lean_is_scalar(x_396)) {
 x_398 = lean_alloc_ctor(1, 1, 0);
} else {
 x_398 = x_396;
}
lean_ctor_set(x_398, 0, x_397);
x_399 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_399, 0, x_398);
lean_ctor_set(x_399, 1, x_394);
return x_399;
}
}
}
else
{
uint8_t x_400; 
x_400 = !lean_is_exclusive(x_378);
if (x_400 == 0)
{
return x_378;
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; 
x_401 = lean_ctor_get(x_378, 0);
x_402 = lean_ctor_get(x_378, 1);
lean_inc(x_402);
lean_inc(x_401);
lean_dec(x_378);
x_403 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_403, 0, x_401);
lean_ctor_set(x_403, 1, x_402);
return x_403;
}
}
}
}
block_52:
{
lean_object* x_39; uint8_t x_40; 
lean_dec(x_38);
x_39 = l_Lean_Meta_evalNat_visit___closed__3;
x_40 = lean_name_eq(x_35, x_39);
lean_dec(x_35);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
return x_42;
}
else
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_unsigned_to_nat(3u);
x_44 = lean_nat_dec_eq(x_37, x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_6);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_nat_sub(x_37, x_47);
lean_dec(x_37);
x_49 = lean_nat_sub(x_48, x_47);
lean_dec(x_48);
x_50 = l_Lean_Expr_getRevArg_x21(x_1, x_49);
lean_dec(x_1);
x_51 = l_Lean_Meta_evalNat(x_50, x_2, x_3, x_4, x_5, x_6);
return x_51;
}
}
}
block_213:
{
lean_object* x_54; uint8_t x_55; lean_object* x_56; uint8_t x_57; 
lean_dec(x_53);
x_54 = l_myMacro____x40_Init_Notation___hyg_370____closed__7;
x_55 = lean_name_eq(x_35, x_54);
x_56 = lean_unsigned_to_nat(4u);
x_57 = lean_nat_dec_eq(x_37, x_56);
if (x_55 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = l_myMacro____x40_Init_Notation___hyg_538____closed__7;
x_59 = lean_name_eq(x_35, x_58);
if (x_59 == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = l_myMacro____x40_Init_Notation___hyg_706____closed__7;
x_61 = lean_name_eq(x_35, x_60);
if (x_61 == 0)
{
lean_object* x_62; 
x_62 = lean_box(0);
x_38 = x_62;
goto block_52;
}
else
{
if (x_57 == 0)
{
lean_object* x_63; 
x_63 = lean_box(0);
x_38 = x_63;
goto block_52;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_35);
x_64 = lean_unsigned_to_nat(2u);
x_65 = lean_nat_sub(x_37, x_64);
x_66 = lean_unsigned_to_nat(1u);
x_67 = lean_nat_sub(x_65, x_66);
lean_dec(x_65);
x_68 = l_Lean_Expr_getRevArg_x21(x_1, x_67);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_69 = l_Lean_Meta_evalNat(x_68, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
if (lean_obj_tag(x_70) == 0)
{
uint8_t x_71; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_69);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_69, 0);
lean_dec(x_72);
x_73 = lean_box(0);
lean_ctor_set(x_69, 0, x_73);
return x_69;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_69, 1);
lean_inc(x_74);
lean_dec(x_69);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_77 = lean_ctor_get(x_69, 1);
lean_inc(x_77);
lean_dec(x_69);
x_78 = lean_ctor_get(x_70, 0);
lean_inc(x_78);
lean_dec(x_70);
x_79 = lean_unsigned_to_nat(3u);
x_80 = lean_nat_sub(x_37, x_79);
lean_dec(x_37);
x_81 = lean_nat_sub(x_80, x_66);
lean_dec(x_80);
x_82 = l_Lean_Expr_getRevArg_x21(x_1, x_81);
lean_dec(x_1);
x_83 = l_Lean_Meta_evalNat(x_82, x_2, x_3, x_4, x_5, x_77);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
if (lean_obj_tag(x_84) == 0)
{
uint8_t x_85; 
lean_dec(x_78);
x_85 = !lean_is_exclusive(x_83);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_83, 0);
lean_dec(x_86);
x_87 = lean_box(0);
lean_ctor_set(x_83, 0, x_87);
return x_83;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_83, 1);
lean_inc(x_88);
lean_dec(x_83);
x_89 = lean_box(0);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
return x_90;
}
}
else
{
uint8_t x_91; 
x_91 = !lean_is_exclusive(x_83);
if (x_91 == 0)
{
lean_object* x_92; uint8_t x_93; 
x_92 = lean_ctor_get(x_83, 0);
lean_dec(x_92);
x_93 = !lean_is_exclusive(x_84);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_84, 0);
x_95 = lean_nat_mul(x_78, x_94);
lean_dec(x_94);
lean_dec(x_78);
lean_ctor_set(x_84, 0, x_95);
return x_83;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_84, 0);
lean_inc(x_96);
lean_dec(x_84);
x_97 = lean_nat_mul(x_78, x_96);
lean_dec(x_96);
lean_dec(x_78);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_83, 0, x_98);
return x_83;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_99 = lean_ctor_get(x_83, 1);
lean_inc(x_99);
lean_dec(x_83);
x_100 = lean_ctor_get(x_84, 0);
lean_inc(x_100);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 x_101 = x_84;
} else {
 lean_dec_ref(x_84);
 x_101 = lean_box(0);
}
x_102 = lean_nat_mul(x_78, x_100);
lean_dec(x_100);
lean_dec(x_78);
if (lean_is_scalar(x_101)) {
 x_103 = lean_alloc_ctor(1, 1, 0);
} else {
 x_103 = x_101;
}
lean_ctor_set(x_103, 0, x_102);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_99);
return x_104;
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_78);
x_105 = !lean_is_exclusive(x_83);
if (x_105 == 0)
{
return x_83;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_83, 0);
x_107 = lean_ctor_get(x_83, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_83);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
}
else
{
uint8_t x_109; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_109 = !lean_is_exclusive(x_69);
if (x_109 == 0)
{
return x_69;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_69, 0);
x_111 = lean_ctor_get(x_69, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_69);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
}
}
else
{
if (x_57 == 0)
{
lean_object* x_113; 
x_113 = lean_box(0);
x_38 = x_113;
goto block_52;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_35);
x_114 = lean_unsigned_to_nat(2u);
x_115 = lean_nat_sub(x_37, x_114);
x_116 = lean_unsigned_to_nat(1u);
x_117 = lean_nat_sub(x_115, x_116);
lean_dec(x_115);
x_118 = l_Lean_Expr_getRevArg_x21(x_1, x_117);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_119 = l_Lean_Meta_evalNat(x_118, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
if (lean_obj_tag(x_120) == 0)
{
uint8_t x_121; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_121 = !lean_is_exclusive(x_119);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_ctor_get(x_119, 0);
lean_dec(x_122);
x_123 = lean_box(0);
lean_ctor_set(x_119, 0, x_123);
return x_119;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_119, 1);
lean_inc(x_124);
lean_dec(x_119);
x_125 = lean_box(0);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_127 = lean_ctor_get(x_119, 1);
lean_inc(x_127);
lean_dec(x_119);
x_128 = lean_ctor_get(x_120, 0);
lean_inc(x_128);
lean_dec(x_120);
x_129 = lean_unsigned_to_nat(3u);
x_130 = lean_nat_sub(x_37, x_129);
lean_dec(x_37);
x_131 = lean_nat_sub(x_130, x_116);
lean_dec(x_130);
x_132 = l_Lean_Expr_getRevArg_x21(x_1, x_131);
lean_dec(x_1);
x_133 = l_Lean_Meta_evalNat(x_132, x_2, x_3, x_4, x_5, x_127);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; 
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
if (lean_obj_tag(x_134) == 0)
{
uint8_t x_135; 
lean_dec(x_128);
x_135 = !lean_is_exclusive(x_133);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; 
x_136 = lean_ctor_get(x_133, 0);
lean_dec(x_136);
x_137 = lean_box(0);
lean_ctor_set(x_133, 0, x_137);
return x_133;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_133, 1);
lean_inc(x_138);
lean_dec(x_133);
x_139 = lean_box(0);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
else
{
uint8_t x_141; 
x_141 = !lean_is_exclusive(x_133);
if (x_141 == 0)
{
lean_object* x_142; uint8_t x_143; 
x_142 = lean_ctor_get(x_133, 0);
lean_dec(x_142);
x_143 = !lean_is_exclusive(x_134);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; 
x_144 = lean_ctor_get(x_134, 0);
x_145 = lean_nat_sub(x_128, x_144);
lean_dec(x_144);
lean_dec(x_128);
lean_ctor_set(x_134, 0, x_145);
return x_133;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_134, 0);
lean_inc(x_146);
lean_dec(x_134);
x_147 = lean_nat_sub(x_128, x_146);
lean_dec(x_146);
lean_dec(x_128);
x_148 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_133, 0, x_148);
return x_133;
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_149 = lean_ctor_get(x_133, 1);
lean_inc(x_149);
lean_dec(x_133);
x_150 = lean_ctor_get(x_134, 0);
lean_inc(x_150);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 x_151 = x_134;
} else {
 lean_dec_ref(x_134);
 x_151 = lean_box(0);
}
x_152 = lean_nat_sub(x_128, x_150);
lean_dec(x_150);
lean_dec(x_128);
if (lean_is_scalar(x_151)) {
 x_153 = lean_alloc_ctor(1, 1, 0);
} else {
 x_153 = x_151;
}
lean_ctor_set(x_153, 0, x_152);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_149);
return x_154;
}
}
}
else
{
uint8_t x_155; 
lean_dec(x_128);
x_155 = !lean_is_exclusive(x_133);
if (x_155 == 0)
{
return x_133;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_133, 0);
x_157 = lean_ctor_get(x_133, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_133);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
}
else
{
uint8_t x_159; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_159 = !lean_is_exclusive(x_119);
if (x_159 == 0)
{
return x_119;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_119, 0);
x_161 = lean_ctor_get(x_119, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_119);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
}
}
else
{
if (x_57 == 0)
{
lean_object* x_163; 
x_163 = lean_box(0);
x_38 = x_163;
goto block_52;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_35);
x_164 = lean_unsigned_to_nat(2u);
x_165 = lean_nat_sub(x_37, x_164);
x_166 = lean_unsigned_to_nat(1u);
x_167 = lean_nat_sub(x_165, x_166);
lean_dec(x_165);
x_168 = l_Lean_Expr_getRevArg_x21(x_1, x_167);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_169 = l_Lean_Meta_evalNat(x_168, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
if (lean_obj_tag(x_170) == 0)
{
uint8_t x_171; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_171 = !lean_is_exclusive(x_169);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_ctor_get(x_169, 0);
lean_dec(x_172);
x_173 = lean_box(0);
lean_ctor_set(x_169, 0, x_173);
return x_169;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_169, 1);
lean_inc(x_174);
lean_dec(x_169);
x_175 = lean_box(0);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_174);
return x_176;
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_177 = lean_ctor_get(x_169, 1);
lean_inc(x_177);
lean_dec(x_169);
x_178 = lean_ctor_get(x_170, 0);
lean_inc(x_178);
lean_dec(x_170);
x_179 = lean_unsigned_to_nat(3u);
x_180 = lean_nat_sub(x_37, x_179);
lean_dec(x_37);
x_181 = lean_nat_sub(x_180, x_166);
lean_dec(x_180);
x_182 = l_Lean_Expr_getRevArg_x21(x_1, x_181);
lean_dec(x_1);
x_183 = l_Lean_Meta_evalNat(x_182, x_2, x_3, x_4, x_5, x_177);
if (lean_obj_tag(x_183) == 0)
{
lean_object* x_184; 
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
if (lean_obj_tag(x_184) == 0)
{
uint8_t x_185; 
lean_dec(x_178);
x_185 = !lean_is_exclusive(x_183);
if (x_185 == 0)
{
lean_object* x_186; lean_object* x_187; 
x_186 = lean_ctor_get(x_183, 0);
lean_dec(x_186);
x_187 = lean_box(0);
lean_ctor_set(x_183, 0, x_187);
return x_183;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_183, 1);
lean_inc(x_188);
lean_dec(x_183);
x_189 = lean_box(0);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_188);
return x_190;
}
}
else
{
uint8_t x_191; 
x_191 = !lean_is_exclusive(x_183);
if (x_191 == 0)
{
lean_object* x_192; uint8_t x_193; 
x_192 = lean_ctor_get(x_183, 0);
lean_dec(x_192);
x_193 = !lean_is_exclusive(x_184);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; 
x_194 = lean_ctor_get(x_184, 0);
x_195 = lean_nat_add(x_178, x_194);
lean_dec(x_194);
lean_dec(x_178);
lean_ctor_set(x_184, 0, x_195);
return x_183;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = lean_ctor_get(x_184, 0);
lean_inc(x_196);
lean_dec(x_184);
x_197 = lean_nat_add(x_178, x_196);
lean_dec(x_196);
lean_dec(x_178);
x_198 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_183, 0, x_198);
return x_183;
}
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_199 = lean_ctor_get(x_183, 1);
lean_inc(x_199);
lean_dec(x_183);
x_200 = lean_ctor_get(x_184, 0);
lean_inc(x_200);
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 x_201 = x_184;
} else {
 lean_dec_ref(x_184);
 x_201 = lean_box(0);
}
x_202 = lean_nat_add(x_178, x_200);
lean_dec(x_200);
lean_dec(x_178);
if (lean_is_scalar(x_201)) {
 x_203 = lean_alloc_ctor(1, 1, 0);
} else {
 x_203 = x_201;
}
lean_ctor_set(x_203, 0, x_202);
x_204 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_199);
return x_204;
}
}
}
else
{
uint8_t x_205; 
lean_dec(x_178);
x_205 = !lean_is_exclusive(x_183);
if (x_205 == 0)
{
return x_183;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_183, 0);
x_207 = lean_ctor_get(x_183, 1);
lean_inc(x_207);
lean_inc(x_206);
lean_dec(x_183);
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
return x_208;
}
}
}
}
else
{
uint8_t x_209; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_209 = !lean_is_exclusive(x_169);
if (x_209 == 0)
{
return x_169;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_169, 0);
x_211 = lean_ctor_get(x_169, 1);
lean_inc(x_211);
lean_inc(x_210);
lean_dec(x_169);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
}
}
}
block_368:
{
lean_object* x_215; uint8_t x_216; lean_object* x_217; uint8_t x_218; 
lean_dec(x_214);
x_215 = l_Lean_Meta_evalNat_visit___closed__4;
x_216 = lean_name_eq(x_35, x_215);
x_217 = lean_unsigned_to_nat(2u);
x_218 = lean_nat_dec_eq(x_37, x_217);
if (x_216 == 0)
{
lean_object* x_219; uint8_t x_220; 
x_219 = l_Lean_Meta_evalNat_visit___closed__5;
x_220 = lean_name_eq(x_35, x_219);
if (x_220 == 0)
{
lean_object* x_221; uint8_t x_222; 
x_221 = l_Lean_Meta_evalNat_visit___closed__6;
x_222 = lean_name_eq(x_35, x_221);
if (x_222 == 0)
{
lean_object* x_223; 
x_223 = lean_box(0);
x_53 = x_223;
goto block_213;
}
else
{
if (x_218 == 0)
{
lean_object* x_224; 
x_224 = lean_box(0);
x_53 = x_224;
goto block_213;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
lean_dec(x_35);
x_225 = lean_nat_sub(x_37, x_36);
x_226 = lean_unsigned_to_nat(1u);
x_227 = lean_nat_sub(x_225, x_226);
lean_dec(x_225);
x_228 = l_Lean_Expr_getRevArg_x21(x_1, x_227);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_229 = l_Lean_Meta_evalNat(x_228, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_229) == 0)
{
lean_object* x_230; 
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
if (lean_obj_tag(x_230) == 0)
{
uint8_t x_231; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_231 = !lean_is_exclusive(x_229);
if (x_231 == 0)
{
lean_object* x_232; lean_object* x_233; 
x_232 = lean_ctor_get(x_229, 0);
lean_dec(x_232);
x_233 = lean_box(0);
lean_ctor_set(x_229, 0, x_233);
return x_229;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_234 = lean_ctor_get(x_229, 1);
lean_inc(x_234);
lean_dec(x_229);
x_235 = lean_box(0);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_234);
return x_236;
}
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_237 = lean_ctor_get(x_229, 1);
lean_inc(x_237);
lean_dec(x_229);
x_238 = lean_ctor_get(x_230, 0);
lean_inc(x_238);
lean_dec(x_230);
x_239 = lean_nat_sub(x_37, x_226);
lean_dec(x_37);
x_240 = lean_nat_sub(x_239, x_226);
lean_dec(x_239);
x_241 = l_Lean_Expr_getRevArg_x21(x_1, x_240);
lean_dec(x_1);
x_242 = l_Lean_Meta_evalNat(x_241, x_2, x_3, x_4, x_5, x_237);
if (lean_obj_tag(x_242) == 0)
{
lean_object* x_243; 
x_243 = lean_ctor_get(x_242, 0);
lean_inc(x_243);
if (lean_obj_tag(x_243) == 0)
{
uint8_t x_244; 
lean_dec(x_238);
x_244 = !lean_is_exclusive(x_242);
if (x_244 == 0)
{
lean_object* x_245; lean_object* x_246; 
x_245 = lean_ctor_get(x_242, 0);
lean_dec(x_245);
x_246 = lean_box(0);
lean_ctor_set(x_242, 0, x_246);
return x_242;
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_247 = lean_ctor_get(x_242, 1);
lean_inc(x_247);
lean_dec(x_242);
x_248 = lean_box(0);
x_249 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_247);
return x_249;
}
}
else
{
uint8_t x_250; 
x_250 = !lean_is_exclusive(x_242);
if (x_250 == 0)
{
lean_object* x_251; uint8_t x_252; 
x_251 = lean_ctor_get(x_242, 0);
lean_dec(x_251);
x_252 = !lean_is_exclusive(x_243);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; 
x_253 = lean_ctor_get(x_243, 0);
x_254 = lean_nat_mul(x_238, x_253);
lean_dec(x_253);
lean_dec(x_238);
lean_ctor_set(x_243, 0, x_254);
return x_242;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_255 = lean_ctor_get(x_243, 0);
lean_inc(x_255);
lean_dec(x_243);
x_256 = lean_nat_mul(x_238, x_255);
lean_dec(x_255);
lean_dec(x_238);
x_257 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_242, 0, x_257);
return x_242;
}
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_258 = lean_ctor_get(x_242, 1);
lean_inc(x_258);
lean_dec(x_242);
x_259 = lean_ctor_get(x_243, 0);
lean_inc(x_259);
if (lean_is_exclusive(x_243)) {
 lean_ctor_release(x_243, 0);
 x_260 = x_243;
} else {
 lean_dec_ref(x_243);
 x_260 = lean_box(0);
}
x_261 = lean_nat_mul(x_238, x_259);
lean_dec(x_259);
lean_dec(x_238);
if (lean_is_scalar(x_260)) {
 x_262 = lean_alloc_ctor(1, 1, 0);
} else {
 x_262 = x_260;
}
lean_ctor_set(x_262, 0, x_261);
x_263 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_258);
return x_263;
}
}
}
else
{
uint8_t x_264; 
lean_dec(x_238);
x_264 = !lean_is_exclusive(x_242);
if (x_264 == 0)
{
return x_242;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_265 = lean_ctor_get(x_242, 0);
x_266 = lean_ctor_get(x_242, 1);
lean_inc(x_266);
lean_inc(x_265);
lean_dec(x_242);
x_267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_267, 0, x_265);
lean_ctor_set(x_267, 1, x_266);
return x_267;
}
}
}
}
else
{
uint8_t x_268; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_268 = !lean_is_exclusive(x_229);
if (x_268 == 0)
{
return x_229;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; 
x_269 = lean_ctor_get(x_229, 0);
x_270 = lean_ctor_get(x_229, 1);
lean_inc(x_270);
lean_inc(x_269);
lean_dec(x_229);
x_271 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_271, 0, x_269);
lean_ctor_set(x_271, 1, x_270);
return x_271;
}
}
}
}
}
else
{
if (x_218 == 0)
{
lean_object* x_272; 
x_272 = lean_box(0);
x_53 = x_272;
goto block_213;
}
else
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
lean_dec(x_35);
x_273 = lean_nat_sub(x_37, x_36);
x_274 = lean_unsigned_to_nat(1u);
x_275 = lean_nat_sub(x_273, x_274);
lean_dec(x_273);
x_276 = l_Lean_Expr_getRevArg_x21(x_1, x_275);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_277 = l_Lean_Meta_evalNat(x_276, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_277) == 0)
{
lean_object* x_278; 
x_278 = lean_ctor_get(x_277, 0);
lean_inc(x_278);
if (lean_obj_tag(x_278) == 0)
{
uint8_t x_279; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_279 = !lean_is_exclusive(x_277);
if (x_279 == 0)
{
lean_object* x_280; lean_object* x_281; 
x_280 = lean_ctor_get(x_277, 0);
lean_dec(x_280);
x_281 = lean_box(0);
lean_ctor_set(x_277, 0, x_281);
return x_277;
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_282 = lean_ctor_get(x_277, 1);
lean_inc(x_282);
lean_dec(x_277);
x_283 = lean_box(0);
x_284 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_284, 0, x_283);
lean_ctor_set(x_284, 1, x_282);
return x_284;
}
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_285 = lean_ctor_get(x_277, 1);
lean_inc(x_285);
lean_dec(x_277);
x_286 = lean_ctor_get(x_278, 0);
lean_inc(x_286);
lean_dec(x_278);
x_287 = lean_nat_sub(x_37, x_274);
lean_dec(x_37);
x_288 = lean_nat_sub(x_287, x_274);
lean_dec(x_287);
x_289 = l_Lean_Expr_getRevArg_x21(x_1, x_288);
lean_dec(x_1);
x_290 = l_Lean_Meta_evalNat(x_289, x_2, x_3, x_4, x_5, x_285);
if (lean_obj_tag(x_290) == 0)
{
lean_object* x_291; 
x_291 = lean_ctor_get(x_290, 0);
lean_inc(x_291);
if (lean_obj_tag(x_291) == 0)
{
uint8_t x_292; 
lean_dec(x_286);
x_292 = !lean_is_exclusive(x_290);
if (x_292 == 0)
{
lean_object* x_293; lean_object* x_294; 
x_293 = lean_ctor_get(x_290, 0);
lean_dec(x_293);
x_294 = lean_box(0);
lean_ctor_set(x_290, 0, x_294);
return x_290;
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; 
x_295 = lean_ctor_get(x_290, 1);
lean_inc(x_295);
lean_dec(x_290);
x_296 = lean_box(0);
x_297 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_297, 0, x_296);
lean_ctor_set(x_297, 1, x_295);
return x_297;
}
}
else
{
uint8_t x_298; 
x_298 = !lean_is_exclusive(x_290);
if (x_298 == 0)
{
lean_object* x_299; uint8_t x_300; 
x_299 = lean_ctor_get(x_290, 0);
lean_dec(x_299);
x_300 = !lean_is_exclusive(x_291);
if (x_300 == 0)
{
lean_object* x_301; lean_object* x_302; 
x_301 = lean_ctor_get(x_291, 0);
x_302 = lean_nat_sub(x_286, x_301);
lean_dec(x_301);
lean_dec(x_286);
lean_ctor_set(x_291, 0, x_302);
return x_290;
}
else
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; 
x_303 = lean_ctor_get(x_291, 0);
lean_inc(x_303);
lean_dec(x_291);
x_304 = lean_nat_sub(x_286, x_303);
lean_dec(x_303);
lean_dec(x_286);
x_305 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_290, 0, x_305);
return x_290;
}
}
else
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_306 = lean_ctor_get(x_290, 1);
lean_inc(x_306);
lean_dec(x_290);
x_307 = lean_ctor_get(x_291, 0);
lean_inc(x_307);
if (lean_is_exclusive(x_291)) {
 lean_ctor_release(x_291, 0);
 x_308 = x_291;
} else {
 lean_dec_ref(x_291);
 x_308 = lean_box(0);
}
x_309 = lean_nat_sub(x_286, x_307);
lean_dec(x_307);
lean_dec(x_286);
if (lean_is_scalar(x_308)) {
 x_310 = lean_alloc_ctor(1, 1, 0);
} else {
 x_310 = x_308;
}
lean_ctor_set(x_310, 0, x_309);
x_311 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_311, 0, x_310);
lean_ctor_set(x_311, 1, x_306);
return x_311;
}
}
}
else
{
uint8_t x_312; 
lean_dec(x_286);
x_312 = !lean_is_exclusive(x_290);
if (x_312 == 0)
{
return x_290;
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_313 = lean_ctor_get(x_290, 0);
x_314 = lean_ctor_get(x_290, 1);
lean_inc(x_314);
lean_inc(x_313);
lean_dec(x_290);
x_315 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_315, 0, x_313);
lean_ctor_set(x_315, 1, x_314);
return x_315;
}
}
}
}
else
{
uint8_t x_316; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_316 = !lean_is_exclusive(x_277);
if (x_316 == 0)
{
return x_277;
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_317 = lean_ctor_get(x_277, 0);
x_318 = lean_ctor_get(x_277, 1);
lean_inc(x_318);
lean_inc(x_317);
lean_dec(x_277);
x_319 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_319, 0, x_317);
lean_ctor_set(x_319, 1, x_318);
return x_319;
}
}
}
}
}
else
{
if (x_218 == 0)
{
lean_object* x_320; 
x_320 = lean_box(0);
x_53 = x_320;
goto block_213;
}
else
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
lean_dec(x_35);
x_321 = lean_nat_sub(x_37, x_36);
x_322 = lean_unsigned_to_nat(1u);
x_323 = lean_nat_sub(x_321, x_322);
lean_dec(x_321);
x_324 = l_Lean_Expr_getRevArg_x21(x_1, x_323);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_325 = l_Lean_Meta_evalNat(x_324, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_325) == 0)
{
lean_object* x_326; 
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
if (lean_obj_tag(x_326) == 0)
{
uint8_t x_327; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_327 = !lean_is_exclusive(x_325);
if (x_327 == 0)
{
lean_object* x_328; lean_object* x_329; 
x_328 = lean_ctor_get(x_325, 0);
lean_dec(x_328);
x_329 = lean_box(0);
lean_ctor_set(x_325, 0, x_329);
return x_325;
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_330 = lean_ctor_get(x_325, 1);
lean_inc(x_330);
lean_dec(x_325);
x_331 = lean_box(0);
x_332 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_332, 0, x_331);
lean_ctor_set(x_332, 1, x_330);
return x_332;
}
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
x_333 = lean_ctor_get(x_325, 1);
lean_inc(x_333);
lean_dec(x_325);
x_334 = lean_ctor_get(x_326, 0);
lean_inc(x_334);
lean_dec(x_326);
x_335 = lean_nat_sub(x_37, x_322);
lean_dec(x_37);
x_336 = lean_nat_sub(x_335, x_322);
lean_dec(x_335);
x_337 = l_Lean_Expr_getRevArg_x21(x_1, x_336);
lean_dec(x_1);
x_338 = l_Lean_Meta_evalNat(x_337, x_2, x_3, x_4, x_5, x_333);
if (lean_obj_tag(x_338) == 0)
{
lean_object* x_339; 
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
if (lean_obj_tag(x_339) == 0)
{
uint8_t x_340; 
lean_dec(x_334);
x_340 = !lean_is_exclusive(x_338);
if (x_340 == 0)
{
lean_object* x_341; lean_object* x_342; 
x_341 = lean_ctor_get(x_338, 0);
lean_dec(x_341);
x_342 = lean_box(0);
lean_ctor_set(x_338, 0, x_342);
return x_338;
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; 
x_343 = lean_ctor_get(x_338, 1);
lean_inc(x_343);
lean_dec(x_338);
x_344 = lean_box(0);
x_345 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_345, 0, x_344);
lean_ctor_set(x_345, 1, x_343);
return x_345;
}
}
else
{
uint8_t x_346; 
x_346 = !lean_is_exclusive(x_338);
if (x_346 == 0)
{
lean_object* x_347; uint8_t x_348; 
x_347 = lean_ctor_get(x_338, 0);
lean_dec(x_347);
x_348 = !lean_is_exclusive(x_339);
if (x_348 == 0)
{
lean_object* x_349; lean_object* x_350; 
x_349 = lean_ctor_get(x_339, 0);
x_350 = lean_nat_add(x_334, x_349);
lean_dec(x_349);
lean_dec(x_334);
lean_ctor_set(x_339, 0, x_350);
return x_338;
}
else
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; 
x_351 = lean_ctor_get(x_339, 0);
lean_inc(x_351);
lean_dec(x_339);
x_352 = lean_nat_add(x_334, x_351);
lean_dec(x_351);
lean_dec(x_334);
x_353 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_353, 0, x_352);
lean_ctor_set(x_338, 0, x_353);
return x_338;
}
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; 
x_354 = lean_ctor_get(x_338, 1);
lean_inc(x_354);
lean_dec(x_338);
x_355 = lean_ctor_get(x_339, 0);
lean_inc(x_355);
if (lean_is_exclusive(x_339)) {
 lean_ctor_release(x_339, 0);
 x_356 = x_339;
} else {
 lean_dec_ref(x_339);
 x_356 = lean_box(0);
}
x_357 = lean_nat_add(x_334, x_355);
lean_dec(x_355);
lean_dec(x_334);
if (lean_is_scalar(x_356)) {
 x_358 = lean_alloc_ctor(1, 1, 0);
} else {
 x_358 = x_356;
}
lean_ctor_set(x_358, 0, x_357);
x_359 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_359, 0, x_358);
lean_ctor_set(x_359, 1, x_354);
return x_359;
}
}
}
else
{
uint8_t x_360; 
lean_dec(x_334);
x_360 = !lean_is_exclusive(x_338);
if (x_360 == 0)
{
return x_338;
}
else
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; 
x_361 = lean_ctor_get(x_338, 0);
x_362 = lean_ctor_get(x_338, 1);
lean_inc(x_362);
lean_inc(x_361);
lean_dec(x_338);
x_363 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_363, 0, x_361);
lean_ctor_set(x_363, 1, x_362);
return x_363;
}
}
}
}
else
{
uint8_t x_364; 
lean_dec(x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_364 = !lean_is_exclusive(x_325);
if (x_364 == 0)
{
return x_325;
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_365 = lean_ctor_get(x_325, 0);
x_366 = lean_ctor_get(x_325, 1);
lean_inc(x_366);
lean_inc(x_365);
lean_dec(x_325);
x_367 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_367, 0, x_365);
lean_ctor_set(x_367, 1, x_366);
return x_367;
}
}
}
}
}
}
default: 
{
lean_object* x_404; lean_object* x_405; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_404 = lean_box(0);
x_405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_405, 0, x_404);
lean_ctor_set(x_405, 1, x_6);
return x_405;
}
}
}
}
lean_object* l_Lean_Meta_evalNat(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_evalNat_visit(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
case 4:
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Literal_type___closed__1;
x_14 = lean_string_dec_eq(x_12, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_6);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_Meta_evalNat_match__1___rarg___closed__1;
x_18 = lean_string_dec_eq(x_11, x_17);
lean_dec(x_11);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_6);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = l_Lean_Syntax_decodeNatLitVal___closed__1;
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_6);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_6);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_9);
lean_dec(x_8);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_6);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_8);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_6);
return x_28;
}
}
case 5:
{
lean_object* x_29; 
x_29 = l_Lean_Meta_evalNat_visit(x_1, x_2, x_3, x_4, x_5, x_6);
return x_29;
}
case 9:
{
lean_object* x_30; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
lean_dec(x_1);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_6);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_30);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_6);
return x_35;
}
}
case 10:
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
lean_dec(x_1);
x_1 = x_36;
goto _start;
}
default: 
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_6);
return x_39;
}
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_2(x_2, x_5, x_7);
return x_8;
}
case 4:
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_3, x_9, x_10, x_12);
return x_13;
}
default: 
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__4___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__5___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_8 = lean_box_uint64(x_7);
x_9 = lean_box(x_2);
x_10 = lean_apply_5(x_3, x_1, x_5, x_6, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_box(x_2);
x_12 = lean_apply_2(x_4, x_1, x_11);
return x_12;
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__5___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__5___rarg(x_1, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = l_Lean_Expr_getAppFn(x_1);
switch (lean_obj_tag(x_9)) {
case 2:
{
lean_object* x_10; 
lean_dec(x_9);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = l_Lean_Meta_instantiateMVars___at___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_10, 1);
x_20 = lean_ctor_get(x_10, 0);
lean_dec(x_20);
x_21 = lean_ctor_get(x_11, 0);
lean_inc(x_21);
lean_dec(x_11);
x_22 = l_Lean_Expr_getAppFn(x_21);
x_23 = l_Lean_Expr_isMVar(x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_free_object(x_10);
x_1 = x_21;
x_7 = x_19;
goto _start;
}
else
{
lean_object* x_25; 
lean_dec(x_21);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_25 = lean_box(0);
lean_ctor_set(x_10, 0, x_25);
return x_10;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_10, 1);
lean_inc(x_26);
lean_dec(x_10);
x_27 = lean_ctor_get(x_11, 0);
lean_inc(x_27);
lean_dec(x_11);
x_28 = l_Lean_Expr_getAppFn(x_27);
x_29 = l_Lean_Expr_isMVar(x_28);
lean_dec(x_28);
if (x_29 == 0)
{
x_1 = x_27;
x_7 = x_26;
goto _start;
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_27);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_26);
return x_32;
}
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_33 = !lean_is_exclusive(x_10);
if (x_33 == 0)
{
return x_10;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_10, 0);
x_35 = lean_ctor_get(x_10, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_10);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
case 4:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_121; lean_object* x_186; uint8_t x_187; 
x_37 = lean_ctor_get(x_9, 0);
lean_inc(x_37);
lean_dec(x_9);
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Lean_Expr_getAppNumArgsAux(x_1, x_38);
x_186 = l_Lean_Meta_evalNat_visit___closed__8;
x_187 = lean_name_eq(x_37, x_186);
if (x_187 == 0)
{
lean_object* x_188; uint8_t x_189; 
lean_dec(x_8);
x_188 = l_Lean_Meta_evalNat_visit___closed__4;
x_189 = lean_name_eq(x_37, x_188);
if (x_189 == 0)
{
lean_object* x_190; 
x_190 = lean_box(0);
x_40 = x_190;
goto block_120;
}
else
{
lean_object* x_191; uint8_t x_192; 
x_191 = lean_unsigned_to_nat(2u);
x_192 = lean_nat_dec_eq(x_39, x_191);
if (x_192 == 0)
{
lean_object* x_193; 
x_193 = lean_box(0);
x_40 = x_193;
goto block_120;
}
else
{
lean_object* x_194; 
lean_dec(x_37);
x_194 = lean_box(0);
x_121 = x_194;
goto block_185;
}
}
}
else
{
lean_object* x_195; uint8_t x_196; 
x_195 = lean_unsigned_to_nat(1u);
x_196 = lean_nat_dec_eq(x_39, x_195);
if (x_196 == 0)
{
lean_object* x_197; uint8_t x_198; 
lean_dec(x_8);
x_197 = l_Lean_Meta_evalNat_visit___closed__4;
x_198 = lean_name_eq(x_37, x_197);
if (x_198 == 0)
{
lean_object* x_199; 
x_199 = lean_box(0);
x_40 = x_199;
goto block_120;
}
else
{
lean_object* x_200; uint8_t x_201; 
x_200 = lean_unsigned_to_nat(2u);
x_201 = lean_nat_dec_eq(x_39, x_200);
if (x_201 == 0)
{
lean_object* x_202; 
x_202 = lean_box(0);
x_40 = x_202;
goto block_120;
}
else
{
lean_object* x_203; 
lean_dec(x_37);
x_203 = lean_box(0);
x_121 = x_203;
goto block_185;
}
}
}
else
{
uint8_t x_204; lean_object* x_205; 
lean_dec(x_39);
lean_dec(x_37);
lean_dec(x_1);
x_204 = 0;
x_205 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_8, x_204, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_205) == 0)
{
lean_object* x_206; 
x_206 = lean_ctor_get(x_205, 0);
lean_inc(x_206);
if (lean_obj_tag(x_206) == 0)
{
uint8_t x_207; 
x_207 = !lean_is_exclusive(x_205);
if (x_207 == 0)
{
lean_object* x_208; lean_object* x_209; 
x_208 = lean_ctor_get(x_205, 0);
lean_dec(x_208);
x_209 = lean_box(0);
lean_ctor_set(x_205, 0, x_209);
return x_205;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_205, 1);
lean_inc(x_210);
lean_dec(x_205);
x_211 = lean_box(0);
x_212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_210);
return x_212;
}
}
else
{
uint8_t x_213; 
x_213 = !lean_is_exclusive(x_206);
if (x_213 == 0)
{
uint8_t x_214; 
x_214 = !lean_is_exclusive(x_205);
if (x_214 == 0)
{
lean_object* x_215; lean_object* x_216; uint8_t x_217; 
x_215 = lean_ctor_get(x_206, 0);
x_216 = lean_ctor_get(x_205, 0);
lean_dec(x_216);
x_217 = !lean_is_exclusive(x_215);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; 
x_218 = lean_ctor_get(x_215, 1);
x_219 = lean_nat_add(x_218, x_195);
lean_dec(x_218);
lean_ctor_set(x_215, 1, x_219);
return x_205;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_220 = lean_ctor_get(x_215, 0);
x_221 = lean_ctor_get(x_215, 1);
lean_inc(x_221);
lean_inc(x_220);
lean_dec(x_215);
x_222 = lean_nat_add(x_221, x_195);
lean_dec(x_221);
x_223 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_223, 0, x_220);
lean_ctor_set(x_223, 1, x_222);
lean_ctor_set(x_206, 0, x_223);
return x_205;
}
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_224 = lean_ctor_get(x_206, 0);
x_225 = lean_ctor_get(x_205, 1);
lean_inc(x_225);
lean_dec(x_205);
x_226 = lean_ctor_get(x_224, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_224, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_224)) {
 lean_ctor_release(x_224, 0);
 lean_ctor_release(x_224, 1);
 x_228 = x_224;
} else {
 lean_dec_ref(x_224);
 x_228 = lean_box(0);
}
x_229 = lean_nat_add(x_227, x_195);
lean_dec(x_227);
if (lean_is_scalar(x_228)) {
 x_230 = lean_alloc_ctor(0, 2, 0);
} else {
 x_230 = x_228;
}
lean_ctor_set(x_230, 0, x_226);
lean_ctor_set(x_230, 1, x_229);
lean_ctor_set(x_206, 0, x_230);
x_231 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_231, 0, x_206);
lean_ctor_set(x_231, 1, x_225);
return x_231;
}
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_232 = lean_ctor_get(x_206, 0);
lean_inc(x_232);
lean_dec(x_206);
x_233 = lean_ctor_get(x_205, 1);
lean_inc(x_233);
if (lean_is_exclusive(x_205)) {
 lean_ctor_release(x_205, 0);
 lean_ctor_release(x_205, 1);
 x_234 = x_205;
} else {
 lean_dec_ref(x_205);
 x_234 = lean_box(0);
}
x_235 = lean_ctor_get(x_232, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_232, 1);
lean_inc(x_236);
if (lean_is_exclusive(x_232)) {
 lean_ctor_release(x_232, 0);
 lean_ctor_release(x_232, 1);
 x_237 = x_232;
} else {
 lean_dec_ref(x_232);
 x_237 = lean_box(0);
}
x_238 = lean_nat_add(x_236, x_195);
lean_dec(x_236);
if (lean_is_scalar(x_237)) {
 x_239 = lean_alloc_ctor(0, 2, 0);
} else {
 x_239 = x_237;
}
lean_ctor_set(x_239, 0, x_235);
lean_ctor_set(x_239, 1, x_238);
x_240 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_240, 0, x_239);
if (lean_is_scalar(x_234)) {
 x_241 = lean_alloc_ctor(0, 2, 0);
} else {
 x_241 = x_234;
}
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_233);
return x_241;
}
}
}
else
{
uint8_t x_242; 
x_242 = !lean_is_exclusive(x_205);
if (x_242 == 0)
{
return x_205;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_243 = lean_ctor_get(x_205, 0);
x_244 = lean_ctor_get(x_205, 1);
lean_inc(x_244);
lean_inc(x_243);
lean_dec(x_205);
x_245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_245, 0, x_243);
lean_ctor_set(x_245, 1, x_244);
return x_245;
}
}
}
}
block_120:
{
lean_object* x_41; uint8_t x_42; 
lean_dec(x_40);
x_41 = l_myMacro____x40_Init_Notation___hyg_370____closed__7;
x_42 = lean_name_eq(x_37, x_41);
lean_dec(x_37);
if (x_42 == 0)
{
lean_dec(x_39);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_1);
lean_ctor_set(x_43, 1, x_38);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_7);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_1);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_7);
return x_47;
}
}
else
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_unsigned_to_nat(4u);
x_49 = lean_nat_dec_eq(x_39, x_48);
if (x_49 == 0)
{
lean_dec(x_39);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_1);
lean_ctor_set(x_50, 1, x_38);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_7);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_1);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_7);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_unsigned_to_nat(3u);
x_56 = lean_nat_sub(x_39, x_55);
x_57 = lean_unsigned_to_nat(1u);
x_58 = lean_nat_sub(x_56, x_57);
lean_dec(x_56);
x_59 = l_Lean_Expr_getRevArg_x21(x_1, x_58);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_60 = l_Lean_Meta_evalNat(x_59, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
if (lean_obj_tag(x_61) == 0)
{
uint8_t x_62; 
lean_dec(x_39);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_60, 0);
lean_dec(x_63);
x_64 = lean_box(0);
lean_ctor_set(x_60, 0, x_64);
return x_60;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_60, 1);
lean_inc(x_65);
lean_dec(x_60);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; 
x_68 = lean_ctor_get(x_60, 1);
lean_inc(x_68);
lean_dec(x_60);
x_69 = lean_ctor_get(x_61, 0);
lean_inc(x_69);
lean_dec(x_61);
x_70 = lean_unsigned_to_nat(2u);
x_71 = lean_nat_sub(x_39, x_70);
lean_dec(x_39);
x_72 = lean_nat_sub(x_71, x_57);
lean_dec(x_71);
x_73 = l_Lean_Expr_getRevArg_x21(x_1, x_72);
lean_dec(x_1);
x_74 = 0;
x_75 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_73, x_74, x_3, x_4, x_5, x_6, x_68);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
if (lean_obj_tag(x_76) == 0)
{
uint8_t x_77; 
lean_dec(x_69);
x_77 = !lean_is_exclusive(x_75);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_75, 0);
lean_dec(x_78);
x_79 = lean_box(0);
lean_ctor_set(x_75, 0, x_79);
return x_75;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_75, 1);
lean_inc(x_80);
lean_dec(x_75);
x_81 = lean_box(0);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
else
{
uint8_t x_83; 
x_83 = !lean_is_exclusive(x_76);
if (x_83 == 0)
{
uint8_t x_84; 
x_84 = !lean_is_exclusive(x_75);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_85 = lean_ctor_get(x_76, 0);
x_86 = lean_ctor_get(x_75, 0);
lean_dec(x_86);
x_87 = !lean_is_exclusive(x_85);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_85, 1);
x_89 = lean_nat_add(x_88, x_69);
lean_dec(x_69);
lean_dec(x_88);
lean_ctor_set(x_85, 1, x_89);
return x_75;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_85, 0);
x_91 = lean_ctor_get(x_85, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_85);
x_92 = lean_nat_add(x_91, x_69);
lean_dec(x_69);
lean_dec(x_91);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_92);
lean_ctor_set(x_76, 0, x_93);
return x_75;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_94 = lean_ctor_get(x_76, 0);
x_95 = lean_ctor_get(x_75, 1);
lean_inc(x_95);
lean_dec(x_75);
x_96 = lean_ctor_get(x_94, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_98 = x_94;
} else {
 lean_dec_ref(x_94);
 x_98 = lean_box(0);
}
x_99 = lean_nat_add(x_97, x_69);
lean_dec(x_69);
lean_dec(x_97);
if (lean_is_scalar(x_98)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_98;
}
lean_ctor_set(x_100, 0, x_96);
lean_ctor_set(x_100, 1, x_99);
lean_ctor_set(x_76, 0, x_100);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_76);
lean_ctor_set(x_101, 1, x_95);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_102 = lean_ctor_get(x_76, 0);
lean_inc(x_102);
lean_dec(x_76);
x_103 = lean_ctor_get(x_75, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_104 = x_75;
} else {
 lean_dec_ref(x_75);
 x_104 = lean_box(0);
}
x_105 = lean_ctor_get(x_102, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_102, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_107 = x_102;
} else {
 lean_dec_ref(x_102);
 x_107 = lean_box(0);
}
x_108 = lean_nat_add(x_106, x_69);
lean_dec(x_69);
lean_dec(x_106);
if (lean_is_scalar(x_107)) {
 x_109 = lean_alloc_ctor(0, 2, 0);
} else {
 x_109 = x_107;
}
lean_ctor_set(x_109, 0, x_105);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_110, 0, x_109);
if (lean_is_scalar(x_104)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_104;
}
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_103);
return x_111;
}
}
}
else
{
uint8_t x_112; 
lean_dec(x_69);
x_112 = !lean_is_exclusive(x_75);
if (x_112 == 0)
{
return x_75;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_75, 0);
x_114 = lean_ctor_get(x_75, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_75);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
}
else
{
uint8_t x_116; 
lean_dec(x_39);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_116 = !lean_is_exclusive(x_60);
if (x_116 == 0)
{
return x_60;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_60, 0);
x_118 = lean_ctor_get(x_60, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_60);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
}
}
block_185:
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_121);
x_122 = lean_unsigned_to_nat(1u);
x_123 = lean_nat_sub(x_39, x_122);
x_124 = lean_nat_sub(x_123, x_122);
lean_dec(x_123);
x_125 = l_Lean_Expr_getRevArg_x21(x_1, x_124);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_126 = l_Lean_Meta_evalNat(x_125, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
if (lean_obj_tag(x_127) == 0)
{
uint8_t x_128; 
lean_dec(x_39);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_128 = !lean_is_exclusive(x_126);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_ctor_get(x_126, 0);
lean_dec(x_129);
x_130 = lean_box(0);
lean_ctor_set(x_126, 0, x_130);
return x_126;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_126, 1);
lean_inc(x_131);
lean_dec(x_126);
x_132 = lean_box(0);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; uint8_t x_139; lean_object* x_140; 
x_134 = lean_ctor_get(x_126, 1);
lean_inc(x_134);
lean_dec(x_126);
x_135 = lean_ctor_get(x_127, 0);
lean_inc(x_135);
lean_dec(x_127);
x_136 = lean_nat_sub(x_39, x_38);
lean_dec(x_39);
x_137 = lean_nat_sub(x_136, x_122);
lean_dec(x_136);
x_138 = l_Lean_Expr_getRevArg_x21(x_1, x_137);
lean_dec(x_1);
x_139 = 0;
x_140 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_138, x_139, x_3, x_4, x_5, x_6, x_134);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
if (lean_obj_tag(x_141) == 0)
{
uint8_t x_142; 
lean_dec(x_135);
x_142 = !lean_is_exclusive(x_140);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; 
x_143 = lean_ctor_get(x_140, 0);
lean_dec(x_143);
x_144 = lean_box(0);
lean_ctor_set(x_140, 0, x_144);
return x_140;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_140, 1);
lean_inc(x_145);
lean_dec(x_140);
x_146 = lean_box(0);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_145);
return x_147;
}
}
else
{
uint8_t x_148; 
x_148 = !lean_is_exclusive(x_141);
if (x_148 == 0)
{
uint8_t x_149; 
x_149 = !lean_is_exclusive(x_140);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_150 = lean_ctor_get(x_141, 0);
x_151 = lean_ctor_get(x_140, 0);
lean_dec(x_151);
x_152 = !lean_is_exclusive(x_150);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; 
x_153 = lean_ctor_get(x_150, 1);
x_154 = lean_nat_add(x_153, x_135);
lean_dec(x_135);
lean_dec(x_153);
lean_ctor_set(x_150, 1, x_154);
return x_140;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_155 = lean_ctor_get(x_150, 0);
x_156 = lean_ctor_get(x_150, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_150);
x_157 = lean_nat_add(x_156, x_135);
lean_dec(x_135);
lean_dec(x_156);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_155);
lean_ctor_set(x_158, 1, x_157);
lean_ctor_set(x_141, 0, x_158);
return x_140;
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_159 = lean_ctor_get(x_141, 0);
x_160 = lean_ctor_get(x_140, 1);
lean_inc(x_160);
lean_dec(x_140);
x_161 = lean_ctor_get(x_159, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_159, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_163 = x_159;
} else {
 lean_dec_ref(x_159);
 x_163 = lean_box(0);
}
x_164 = lean_nat_add(x_162, x_135);
lean_dec(x_135);
lean_dec(x_162);
if (lean_is_scalar(x_163)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_163;
}
lean_ctor_set(x_165, 0, x_161);
lean_ctor_set(x_165, 1, x_164);
lean_ctor_set(x_141, 0, x_165);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_141);
lean_ctor_set(x_166, 1, x_160);
return x_166;
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_167 = lean_ctor_get(x_141, 0);
lean_inc(x_167);
lean_dec(x_141);
x_168 = lean_ctor_get(x_140, 1);
lean_inc(x_168);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_169 = x_140;
} else {
 lean_dec_ref(x_140);
 x_169 = lean_box(0);
}
x_170 = lean_ctor_get(x_167, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_167, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_167)) {
 lean_ctor_release(x_167, 0);
 lean_ctor_release(x_167, 1);
 x_172 = x_167;
} else {
 lean_dec_ref(x_167);
 x_172 = lean_box(0);
}
x_173 = lean_nat_add(x_171, x_135);
lean_dec(x_135);
lean_dec(x_171);
if (lean_is_scalar(x_172)) {
 x_174 = lean_alloc_ctor(0, 2, 0);
} else {
 x_174 = x_172;
}
lean_ctor_set(x_174, 0, x_170);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_175, 0, x_174);
if (lean_is_scalar(x_169)) {
 x_176 = lean_alloc_ctor(0, 2, 0);
} else {
 x_176 = x_169;
}
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_168);
return x_176;
}
}
}
else
{
uint8_t x_177; 
lean_dec(x_135);
x_177 = !lean_is_exclusive(x_140);
if (x_177 == 0)
{
return x_140;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_140, 0);
x_179 = lean_ctor_get(x_140, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_140);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
}
}
}
else
{
uint8_t x_181; 
lean_dec(x_39);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_181 = !lean_is_exclusive(x_126);
if (x_181 == 0)
{
return x_126;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_126, 0);
x_183 = lean_ctor_get(x_126, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_126);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_183);
return x_184;
}
}
}
}
default: 
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_246 = lean_unsigned_to_nat(0u);
x_247 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_247, 0, x_1);
lean_ctor_set(x_247, 1, x_246);
x_248 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_248, 0, x_247);
x_249 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_7);
return x_249;
}
else
{
lean_object* x_250; lean_object* x_251; 
lean_dec(x_1);
x_250 = lean_box(0);
x_251 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_7);
return x_251;
}
}
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_252 = lean_unsigned_to_nat(0u);
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_1);
lean_ctor_set(x_253, 1, x_252);
x_254 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_254, 0, x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_7);
return x_255;
}
else
{
lean_object* x_256; lean_object* x_257; 
lean_dec(x_1);
x_256 = lean_box(0);
x_257 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_7);
return x_257;
}
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = 1;
x_8 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_2(x_2, x_5, x_7);
return x_8;
}
case 4:
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_3, x_9, x_10, x_12);
return x_13;
}
default: 
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_4(x_2, x_1, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_7; 
x_7 = l_Lean_Expr_getAppFn(x_1);
switch (lean_obj_tag(x_7)) {
case 2:
{
lean_object* x_8; 
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_Lean_Meta_instantiateMVars___at___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_8, 1);
x_18 = lean_ctor_get(x_8, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_9, 0);
lean_inc(x_19);
lean_dec(x_9);
x_20 = l_Lean_Expr_getAppFn(x_19);
x_21 = l_Lean_Expr_isMVar(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_free_object(x_8);
x_1 = x_19;
x_6 = x_17;
goto _start;
}
else
{
lean_object* x_23; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_box(0);
lean_ctor_set(x_8, 0, x_23);
return x_8;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
lean_dec(x_8);
x_25 = lean_ctor_get(x_9, 0);
lean_inc(x_25);
lean_dec(x_9);
x_26 = l_Lean_Expr_getAppFn(x_25);
x_27 = l_Lean_Expr_isMVar(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
x_1 = x_25;
x_6 = x_24;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_25);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
return x_30;
}
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_8);
if (x_31 == 0)
{
return x_8;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_8, 0);
x_33 = lean_ctor_get(x_8, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_8);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
case 4:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; uint8_t x_47; uint8_t x_48; 
x_35 = lean_ctor_get(x_7, 0);
lean_inc(x_35);
lean_dec(x_7);
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Lean_Expr_getAppNumArgsAux(x_1, x_36);
x_38 = l_Lean_Meta_evalNat_visit___closed__8;
x_39 = lean_name_eq(x_35, x_38);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_dec_eq(x_37, x_40);
x_42 = l_Lean_Meta_evalNat_visit___closed__4;
x_43 = lean_name_eq(x_35, x_42);
x_44 = lean_unsigned_to_nat(2u);
x_45 = lean_nat_dec_eq(x_37, x_44);
x_46 = l_myMacro____x40_Init_Notation___hyg_370____closed__7;
x_47 = lean_name_eq(x_35, x_46);
lean_dec(x_35);
if (x_39 == 0)
{
if (x_43 == 0)
{
uint8_t x_62; 
x_62 = 0;
x_48 = x_62;
goto block_61;
}
else
{
x_48 = x_45;
goto block_61;
}
}
else
{
if (x_43 == 0)
{
if (x_41 == 0)
{
uint8_t x_63; 
x_63 = 0;
x_48 = x_63;
goto block_61;
}
else
{
uint8_t x_64; lean_object* x_65; 
lean_dec(x_37);
x_64 = 1;
x_65 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_64, x_2, x_3, x_4, x_5, x_6);
return x_65;
}
}
else
{
if (x_41 == 0)
{
x_48 = x_45;
goto block_61;
}
else
{
uint8_t x_66; lean_object* x_67; 
lean_dec(x_37);
x_66 = 1;
x_67 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_66, x_2, x_3, x_4, x_5, x_6);
return x_67;
}
}
}
block_61:
{
if (x_47 == 0)
{
lean_dec(x_37);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_6);
return x_50;
}
else
{
uint8_t x_51; lean_object* x_52; 
x_51 = 1;
x_52 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_51, x_2, x_3, x_4, x_5, x_6);
return x_52;
}
}
else
{
if (x_48 == 0)
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_unsigned_to_nat(4u);
x_54 = lean_nat_dec_eq(x_37, x_53);
lean_dec(x_37);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_6);
return x_56;
}
else
{
uint8_t x_57; lean_object* x_58; 
x_57 = 1;
x_58 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_57, x_2, x_3, x_4, x_5, x_6);
return x_58;
}
}
else
{
uint8_t x_59; lean_object* x_60; 
lean_dec(x_37);
x_59 = 1;
x_60 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_59, x_2, x_3, x_4, x_5, x_6);
return x_60;
}
}
}
}
default: 
{
lean_object* x_68; lean_object* x_69; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_6);
return x_69;
}
}
}
else
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = lean_box(0);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_6);
return x_71;
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_evalNat(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = 0;
x_12 = lean_box(x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_7, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_8, 0);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_eq(x_19, x_20);
lean_dec(x_19);
x_22 = lean_box(x_21);
lean_ctor_set(x_7, 0, x_22);
return x_7;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
lean_dec(x_7);
x_24 = lean_ctor_get(x_8, 0);
lean_inc(x_24);
lean_dec(x_8);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_nat_dec_eq(x_24, x_25);
lean_dec(x_24);
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_23);
return x_28;
}
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_7);
if (x_29 == 0)
{
return x_7;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_7, 0);
x_31 = lean_ctor_get(x_7, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_7);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_evalNat_visit___closed__4;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_1);
x_10 = l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = l_Lean_mkNatLit(x_2);
x_16 = l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset___closed__1;
x_17 = l_Lean_mkAppB(x_16, x_1, x_15);
lean_ctor_set(x_10, 0, x_17);
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_dec(x_10);
x_19 = l_Lean_mkNatLit(x_2);
x_20 = l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset___closed__1;
x_21 = l_Lean_mkAppB(x_20, x_1, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_10);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_10, 0);
lean_dec(x_24);
x_25 = l_Lean_mkNatLit(x_2);
lean_ctor_set(x_10, 0, x_25);
return x_10;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_10, 1);
lean_inc(x_26);
lean_dec(x_10);
x_27 = l_Lean_mkNatLit(x_2);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_10);
if (x_29 == 0)
{
return x_10;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_10, 0);
x_31 = lean_ctor_get(x_10, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_10);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_7);
return x_33;
}
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEqOffset_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEqOffset_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEqOffset_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEqOffset_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEqOffset_match__5___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEqOffset_match__6___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isDefEqOffset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = l_Lean_Meta_evalNat(x_1, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_11, 0);
lean_dec(x_14);
x_15 = 2;
x_16 = lean_box(x_15);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = 2;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_dec(x_11);
x_22 = lean_ctor_get(x_12, 0);
lean_inc(x_22);
lean_dec(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_23 = l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset(x_2, x_3, x_4, x_5, x_6, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Meta_evalNat(x_2, x_3, x_4, x_5, x_6, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
lean_dec(x_22);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_26, 0);
lean_dec(x_29);
x_30 = 2;
x_31 = lean_box(x_30);
lean_ctor_set(x_26, 0, x_31);
return x_26;
}
else
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
x_33 = 2;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_26);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; uint8_t x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_26, 0);
lean_dec(x_37);
x_38 = lean_ctor_get(x_27, 0);
lean_inc(x_38);
lean_dec(x_27);
x_39 = lean_nat_dec_eq(x_22, x_38);
lean_dec(x_38);
lean_dec(x_22);
x_40 = l_Bool_toLBool(x_39);
x_41 = lean_box(x_40);
lean_ctor_set(x_26, 0, x_41);
return x_26;
}
else
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; 
x_42 = lean_ctor_get(x_26, 1);
lean_inc(x_42);
lean_dec(x_26);
x_43 = lean_ctor_get(x_27, 0);
lean_inc(x_43);
lean_dec(x_27);
x_44 = lean_nat_dec_eq(x_22, x_43);
lean_dec(x_43);
lean_dec(x_22);
x_45 = l_Bool_toLBool(x_44);
x_46 = lean_box(x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_42);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_22);
x_48 = !lean_is_exclusive(x_26);
if (x_48 == 0)
{
return x_26;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_26, 0);
x_50 = lean_ctor_get(x_26, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_26);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; uint8_t x_53; 
lean_dec(x_2);
x_52 = lean_ctor_get(x_24, 0);
lean_inc(x_52);
lean_dec(x_24);
x_53 = !lean_is_exclusive(x_23);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_23, 1);
x_55 = lean_ctor_get(x_23, 0);
lean_dec(x_55);
x_56 = lean_ctor_get(x_52, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_nat_dec_le(x_57, x_22);
if (x_58 == 0)
{
uint8_t x_59; lean_object* x_60; 
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_59 = 0;
x_60 = lean_box(x_59);
lean_ctor_set(x_23, 0, x_60);
return x_23;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_free_object(x_23);
x_61 = lean_nat_sub(x_22, x_57);
lean_dec(x_57);
lean_dec(x_22);
x_62 = l_Lean_mkNatLit(x_61);
x_63 = l_Lean_Meta_isExprDefEqAux(x_62, x_56, x_3, x_4, x_5, x_6, x_54);
if (lean_obj_tag(x_63) == 0)
{
uint8_t x_64; 
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
lean_object* x_65; uint8_t x_66; uint8_t x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_63, 0);
x_66 = lean_unbox(x_65);
lean_dec(x_65);
x_67 = l_Bool_toLBool(x_66);
x_68 = lean_box(x_67);
lean_ctor_set(x_63, 0, x_68);
return x_63;
}
else
{
lean_object* x_69; lean_object* x_70; uint8_t x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; 
x_69 = lean_ctor_get(x_63, 0);
x_70 = lean_ctor_get(x_63, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_63);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_72 = l_Bool_toLBool(x_71);
x_73 = lean_box(x_72);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_70);
return x_74;
}
}
else
{
uint8_t x_75; 
x_75 = !lean_is_exclusive(x_63);
if (x_75 == 0)
{
return x_63;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_63, 0);
x_77 = lean_ctor_get(x_63, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_63);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_79 = lean_ctor_get(x_23, 1);
lean_inc(x_79);
lean_dec(x_23);
x_80 = lean_ctor_get(x_52, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_52, 1);
lean_inc(x_81);
lean_dec(x_52);
x_82 = lean_nat_dec_le(x_81, x_22);
if (x_82 == 0)
{
uint8_t x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_83 = 0;
x_84 = lean_box(x_83);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_79);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_nat_sub(x_22, x_81);
lean_dec(x_81);
lean_dec(x_22);
x_87 = l_Lean_mkNatLit(x_86);
x_88 = l_Lean_Meta_isExprDefEqAux(x_87, x_80, x_3, x_4, x_5, x_6, x_79);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; uint8_t x_93; lean_object* x_94; lean_object* x_95; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_91 = x_88;
} else {
 lean_dec_ref(x_88);
 x_91 = lean_box(0);
}
x_92 = lean_unbox(x_89);
lean_dec(x_89);
x_93 = l_Bool_toLBool(x_92);
x_94 = lean_box(x_93);
if (lean_is_scalar(x_91)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_91;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_90);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = lean_ctor_get(x_88, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_88, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_98 = x_88;
} else {
 lean_dec_ref(x_88);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(1, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
}
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_100 = !lean_is_exclusive(x_23);
if (x_100 == 0)
{
return x_23;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_23, 0);
x_102 = lean_ctor_get(x_23, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_23);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_104 = !lean_is_exclusive(x_11);
if (x_104 == 0)
{
return x_11;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_11, 0);
x_106 = lean_ctor_get(x_11, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_11);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_1);
x_108 = lean_ctor_get(x_9, 0);
lean_inc(x_108);
lean_dec(x_9);
x_109 = lean_ctor_get(x_8, 1);
lean_inc(x_109);
lean_dec(x_8);
x_110 = lean_ctor_get(x_108, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_108, 1);
lean_inc(x_111);
lean_dec(x_108);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_112 = l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset(x_2, x_3, x_4, x_5, x_6, x_109);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; 
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_115 = l_Lean_Meta_evalNat(x_2, x_3, x_4, x_5, x_6, x_114);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; 
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
if (lean_obj_tag(x_116) == 0)
{
uint8_t x_117; 
lean_dec(x_111);
lean_dec(x_110);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_117 = !lean_is_exclusive(x_115);
if (x_117 == 0)
{
lean_object* x_118; uint8_t x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_115, 0);
lean_dec(x_118);
x_119 = 2;
x_120 = lean_box(x_119);
lean_ctor_set(x_115, 0, x_120);
return x_115;
}
else
{
lean_object* x_121; uint8_t x_122; lean_object* x_123; lean_object* x_124; 
x_121 = lean_ctor_get(x_115, 1);
lean_inc(x_121);
lean_dec(x_115);
x_122 = 2;
x_123 = lean_box(x_122);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_121);
return x_124;
}
}
else
{
uint8_t x_125; 
x_125 = !lean_is_exclusive(x_115);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_126 = lean_ctor_get(x_115, 1);
x_127 = lean_ctor_get(x_115, 0);
lean_dec(x_127);
x_128 = lean_ctor_get(x_116, 0);
lean_inc(x_128);
lean_dec(x_116);
x_129 = lean_nat_dec_le(x_111, x_128);
if (x_129 == 0)
{
uint8_t x_130; lean_object* x_131; 
lean_dec(x_128);
lean_dec(x_111);
lean_dec(x_110);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_130 = 0;
x_131 = lean_box(x_130);
lean_ctor_set(x_115, 0, x_131);
return x_115;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_free_object(x_115);
x_132 = lean_nat_sub(x_128, x_111);
lean_dec(x_111);
lean_dec(x_128);
x_133 = l_Lean_mkNatLit(x_132);
x_134 = l_Lean_Meta_isExprDefEqAux(x_110, x_133, x_3, x_4, x_5, x_6, x_126);
if (lean_obj_tag(x_134) == 0)
{
uint8_t x_135; 
x_135 = !lean_is_exclusive(x_134);
if (x_135 == 0)
{
lean_object* x_136; uint8_t x_137; uint8_t x_138; lean_object* x_139; 
x_136 = lean_ctor_get(x_134, 0);
x_137 = lean_unbox(x_136);
lean_dec(x_136);
x_138 = l_Bool_toLBool(x_137);
x_139 = lean_box(x_138);
lean_ctor_set(x_134, 0, x_139);
return x_134;
}
else
{
lean_object* x_140; lean_object* x_141; uint8_t x_142; uint8_t x_143; lean_object* x_144; lean_object* x_145; 
x_140 = lean_ctor_get(x_134, 0);
x_141 = lean_ctor_get(x_134, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_134);
x_142 = lean_unbox(x_140);
lean_dec(x_140);
x_143 = l_Bool_toLBool(x_142);
x_144 = lean_box(x_143);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_141);
return x_145;
}
}
else
{
uint8_t x_146; 
x_146 = !lean_is_exclusive(x_134);
if (x_146 == 0)
{
return x_134;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_134, 0);
x_148 = lean_ctor_get(x_134, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_134);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
return x_149;
}
}
}
}
else
{
lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_150 = lean_ctor_get(x_115, 1);
lean_inc(x_150);
lean_dec(x_115);
x_151 = lean_ctor_get(x_116, 0);
lean_inc(x_151);
lean_dec(x_116);
x_152 = lean_nat_dec_le(x_111, x_151);
if (x_152 == 0)
{
uint8_t x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_151);
lean_dec(x_111);
lean_dec(x_110);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_153 = 0;
x_154 = lean_box(x_153);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_150);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_nat_sub(x_151, x_111);
lean_dec(x_111);
lean_dec(x_151);
x_157 = l_Lean_mkNatLit(x_156);
x_158 = l_Lean_Meta_isExprDefEqAux(x_110, x_157, x_3, x_4, x_5, x_6, x_150);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; uint8_t x_162; uint8_t x_163; lean_object* x_164; lean_object* x_165; 
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_158, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_161 = x_158;
} else {
 lean_dec_ref(x_158);
 x_161 = lean_box(0);
}
x_162 = lean_unbox(x_159);
lean_dec(x_159);
x_163 = l_Bool_toLBool(x_162);
x_164 = lean_box(x_163);
if (lean_is_scalar(x_161)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_161;
}
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_160);
return x_165;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_166 = lean_ctor_get(x_158, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_158, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_168 = x_158;
} else {
 lean_dec_ref(x_158);
 x_168 = lean_box(0);
}
if (lean_is_scalar(x_168)) {
 x_169 = lean_alloc_ctor(1, 2, 0);
} else {
 x_169 = x_168;
}
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
}
}
}
else
{
uint8_t x_170; 
lean_dec(x_111);
lean_dec(x_110);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_170 = !lean_is_exclusive(x_115);
if (x_170 == 0)
{
return x_115;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_115, 0);
x_172 = lean_ctor_get(x_115, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_115);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
return x_173;
}
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; 
lean_dec(x_2);
x_174 = lean_ctor_get(x_113, 0);
lean_inc(x_174);
lean_dec(x_113);
x_175 = lean_ctor_get(x_112, 1);
lean_inc(x_175);
lean_dec(x_112);
x_176 = lean_ctor_get(x_174, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_174, 1);
lean_inc(x_177);
lean_dec(x_174);
x_178 = lean_nat_dec_eq(x_111, x_177);
if (x_178 == 0)
{
uint8_t x_179; 
x_179 = lean_nat_dec_lt(x_111, x_177);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; 
x_180 = lean_nat_sub(x_111, x_177);
lean_dec(x_177);
lean_dec(x_111);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_181 = l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset(x_110, x_180, x_3, x_4, x_5, x_6, x_175);
if (lean_obj_tag(x_181) == 0)
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
lean_dec(x_181);
x_184 = l_Lean_Meta_isExprDefEqAux(x_182, x_176, x_3, x_4, x_5, x_6, x_183);
if (lean_obj_tag(x_184) == 0)
{
uint8_t x_185; 
x_185 = !lean_is_exclusive(x_184);
if (x_185 == 0)
{
lean_object* x_186; uint8_t x_187; uint8_t x_188; lean_object* x_189; 
x_186 = lean_ctor_get(x_184, 0);
x_187 = lean_unbox(x_186);
lean_dec(x_186);
x_188 = l_Bool_toLBool(x_187);
x_189 = lean_box(x_188);
lean_ctor_set(x_184, 0, x_189);
return x_184;
}
else
{
lean_object* x_190; lean_object* x_191; uint8_t x_192; uint8_t x_193; lean_object* x_194; lean_object* x_195; 
x_190 = lean_ctor_get(x_184, 0);
x_191 = lean_ctor_get(x_184, 1);
lean_inc(x_191);
lean_inc(x_190);
lean_dec(x_184);
x_192 = lean_unbox(x_190);
lean_dec(x_190);
x_193 = l_Bool_toLBool(x_192);
x_194 = lean_box(x_193);
x_195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_191);
return x_195;
}
}
else
{
uint8_t x_196; 
x_196 = !lean_is_exclusive(x_184);
if (x_196 == 0)
{
return x_184;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_197 = lean_ctor_get(x_184, 0);
x_198 = lean_ctor_get(x_184, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_184);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
}
else
{
uint8_t x_200; 
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_200 = !lean_is_exclusive(x_181);
if (x_200 == 0)
{
return x_181;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_201 = lean_ctor_get(x_181, 0);
x_202 = lean_ctor_get(x_181, 1);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_181);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
return x_203;
}
}
}
else
{
lean_object* x_204; lean_object* x_205; 
x_204 = lean_nat_sub(x_177, x_111);
lean_dec(x_111);
lean_dec(x_177);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_205 = l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset(x_176, x_204, x_3, x_4, x_5, x_6, x_175);
if (lean_obj_tag(x_205) == 0)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_205, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_205, 1);
lean_inc(x_207);
lean_dec(x_205);
x_208 = l_Lean_Meta_isExprDefEqAux(x_110, x_206, x_3, x_4, x_5, x_6, x_207);
if (lean_obj_tag(x_208) == 0)
{
uint8_t x_209; 
x_209 = !lean_is_exclusive(x_208);
if (x_209 == 0)
{
lean_object* x_210; uint8_t x_211; uint8_t x_212; lean_object* x_213; 
x_210 = lean_ctor_get(x_208, 0);
x_211 = lean_unbox(x_210);
lean_dec(x_210);
x_212 = l_Bool_toLBool(x_211);
x_213 = lean_box(x_212);
lean_ctor_set(x_208, 0, x_213);
return x_208;
}
else
{
lean_object* x_214; lean_object* x_215; uint8_t x_216; uint8_t x_217; lean_object* x_218; lean_object* x_219; 
x_214 = lean_ctor_get(x_208, 0);
x_215 = lean_ctor_get(x_208, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_208);
x_216 = lean_unbox(x_214);
lean_dec(x_214);
x_217 = l_Bool_toLBool(x_216);
x_218 = lean_box(x_217);
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_218);
lean_ctor_set(x_219, 1, x_215);
return x_219;
}
}
else
{
uint8_t x_220; 
x_220 = !lean_is_exclusive(x_208);
if (x_220 == 0)
{
return x_208;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_221 = lean_ctor_get(x_208, 0);
x_222 = lean_ctor_get(x_208, 1);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_208);
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_221);
lean_ctor_set(x_223, 1, x_222);
return x_223;
}
}
}
else
{
uint8_t x_224; 
lean_dec(x_110);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_224 = !lean_is_exclusive(x_205);
if (x_224 == 0)
{
return x_205;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_225 = lean_ctor_get(x_205, 0);
x_226 = lean_ctor_get(x_205, 1);
lean_inc(x_226);
lean_inc(x_225);
lean_dec(x_205);
x_227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_227, 0, x_225);
lean_ctor_set(x_227, 1, x_226);
return x_227;
}
}
}
}
else
{
lean_object* x_228; 
lean_dec(x_177);
lean_dec(x_111);
x_228 = l_Lean_Meta_isExprDefEqAux(x_110, x_176, x_3, x_4, x_5, x_6, x_175);
if (lean_obj_tag(x_228) == 0)
{
uint8_t x_229; 
x_229 = !lean_is_exclusive(x_228);
if (x_229 == 0)
{
lean_object* x_230; uint8_t x_231; uint8_t x_232; lean_object* x_233; 
x_230 = lean_ctor_get(x_228, 0);
x_231 = lean_unbox(x_230);
lean_dec(x_230);
x_232 = l_Bool_toLBool(x_231);
x_233 = lean_box(x_232);
lean_ctor_set(x_228, 0, x_233);
return x_228;
}
else
{
lean_object* x_234; lean_object* x_235; uint8_t x_236; uint8_t x_237; lean_object* x_238; lean_object* x_239; 
x_234 = lean_ctor_get(x_228, 0);
x_235 = lean_ctor_get(x_228, 1);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_228);
x_236 = lean_unbox(x_234);
lean_dec(x_234);
x_237 = l_Bool_toLBool(x_236);
x_238 = lean_box(x_237);
x_239 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_235);
return x_239;
}
}
else
{
uint8_t x_240; 
x_240 = !lean_is_exclusive(x_228);
if (x_240 == 0)
{
return x_228;
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_241 = lean_ctor_get(x_228, 0);
x_242 = lean_ctor_get(x_228, 1);
lean_inc(x_242);
lean_inc(x_241);
lean_dec(x_228);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_241);
lean_ctor_set(x_243, 1, x_242);
return x_243;
}
}
}
}
}
else
{
uint8_t x_244; 
lean_dec(x_111);
lean_dec(x_110);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_244 = !lean_is_exclusive(x_112);
if (x_244 == 0)
{
return x_112;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_245 = lean_ctor_get(x_112, 0);
x_246 = lean_ctor_get(x_112, 1);
lean_inc(x_246);
lean_inc(x_245);
lean_dec(x_112);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set(x_247, 1, x_246);
return x_247;
}
}
}
}
else
{
uint8_t x_248; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_248 = !lean_is_exclusive(x_8);
if (x_248 == 0)
{
return x_8;
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_249 = lean_ctor_get(x_8, 0);
x_250 = lean_ctor_get(x_8, 1);
lean_inc(x_250);
lean_inc(x_249);
lean_dec(x_8);
x_251 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_251, 0, x_249);
lean_ctor_set(x_251, 1, x_250);
return x_251;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Data_LBool(lean_object*);
lean_object* initialize_Lean_Meta_InferType(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Offset(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_LBool(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_InferType(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_evalNat_match__1___rarg___closed__1 = _init_l_Lean_Meta_evalNat_match__1___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_evalNat_match__1___rarg___closed__1);
l_Lean_Meta_evalNat_visit___closed__1 = _init_l_Lean_Meta_evalNat_visit___closed__1();
lean_mark_persistent(l_Lean_Meta_evalNat_visit___closed__1);
l_Lean_Meta_evalNat_visit___closed__2 = _init_l_Lean_Meta_evalNat_visit___closed__2();
lean_mark_persistent(l_Lean_Meta_evalNat_visit___closed__2);
l_Lean_Meta_evalNat_visit___closed__3 = _init_l_Lean_Meta_evalNat_visit___closed__3();
lean_mark_persistent(l_Lean_Meta_evalNat_visit___closed__3);
l_Lean_Meta_evalNat_visit___closed__4 = _init_l_Lean_Meta_evalNat_visit___closed__4();
lean_mark_persistent(l_Lean_Meta_evalNat_visit___closed__4);
l_Lean_Meta_evalNat_visit___closed__5 = _init_l_Lean_Meta_evalNat_visit___closed__5();
lean_mark_persistent(l_Lean_Meta_evalNat_visit___closed__5);
l_Lean_Meta_evalNat_visit___closed__6 = _init_l_Lean_Meta_evalNat_visit___closed__6();
lean_mark_persistent(l_Lean_Meta_evalNat_visit___closed__6);
l_Lean_Meta_evalNat_visit___closed__7 = _init_l_Lean_Meta_evalNat_visit___closed__7();
lean_mark_persistent(l_Lean_Meta_evalNat_visit___closed__7);
l_Lean_Meta_evalNat_visit___closed__8 = _init_l_Lean_Meta_evalNat_visit___closed__8();
lean_mark_persistent(l_Lean_Meta_evalNat_visit___closed__8);
l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset___closed__1 = _init_l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
