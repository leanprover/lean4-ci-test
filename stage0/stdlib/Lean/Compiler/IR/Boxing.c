// Lean compiler output
// Module: Lean.Compiler.IR.Boxing
// Imports: Init Lean.Runtime Lean.Compiler.ClosedTermCache Lean.Compiler.ExternAttr Lean.Compiler.IR.Basic Lean.Compiler.IR.CompilerM Lean.Compiler.IR.FreeVars Lean.Compiler.IR.ElimDeadVars
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
uint8_t l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(lean_object*, lean_object*);
uint8_t l_Lean_IR_ExplicitBoxing_eqvTypes(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgIfNeeded_match__1(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_IR_ExplicitBoxing_castResultIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_boxArgsIfNeeded_match__1(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_addBoxedVersions(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___boxed(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1;
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_ExplicitBoxing_mkCast___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__3(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedName(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkCast_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_visitFnBody_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_requiresBoxedVersion___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getVarType___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__2(lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_IR_ExplicitBoxing_withJDecl(lean_object*);
extern lean_object* l_Lean_closureMaxArgs;
lean_object* l_Lean_IR_ExplicitBoxing_withParams(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getJPParams(lean_object*, lean_object*);
uint8_t l_Lean_IR_CtorInfo_isScalar(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_getScrutineeType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_Decl_Lean_Compiler_IR_Basic___instance__17___closed__1;
lean_object* l_Lean_IR_ExplicitBoxing_isBoxedName_match__1(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkCast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_getEnv___rarg(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_explicitBoxing___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_N_mkFresh(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_requiresBoxedVersion___boxed(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_addBoxedVersions___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_resultType(lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgIfNeeded_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_BoxingState_auxDeclCache___default;
lean_object* l_Lean_IR_ExplicitBoxing_getLocalContext(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getVarType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_addBoxedVersions___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getType(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_run(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getResultType___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_visitVDeclExpr_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_withParams___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_run_match__1(lean_object*);
lean_object* l_Array_forInUnsafe_loop___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getDecl_match__1(lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___at_Lean_IR_LocalContext_addParams___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkCast___closed__4;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__2(lean_object*);
lean_object* l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_run___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkCast___closed__2;
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType_match__2___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_visitFnBody_match__1(lean_object*);
lean_object* l_Lean_IR_LocalContext_addJP(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Data_Format_0__Lean_Format_be___closed__1;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_appendIndexAfter(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType_match__2(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkCast___closed__1;
lean_object* l_Lean_IR_ExplicitBoxing_mkCast___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_FnBody_beq(lean_object*, lean_object*);
lean_object* l_Nat_foldM_loop___at_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_run_match__2(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getValue(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType_match__1(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getJPParams_match__1(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___boxed(lean_object*);
uint8_t l_Lean_IR_IRType_beq(lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_IR_findEnvDecl_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getJPParams_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_explicitBoxing(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getJPParams___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_withParams___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType___boxed(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_visitVDeclExpr_match__1(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkCast_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__1(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeeded_match__1(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_BoxingState_auxDecls___default;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_withJDecl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_withVDecl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_run_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeeded_match__1___rarg(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_getScrutineeType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkCast_match__1(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_isBoxedName___boxed(lean_object*);
lean_object* l_Lean_IR_Decl_elimDead(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getVarType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux_match__1(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersion___boxed(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castResultIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_BoxingContext_resultType___default;
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_boxArgsIfNeeded_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2___closed__1;
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getLocalContext___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkCast_match__2(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_visitFnBody(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_ExplicitBoxing_isBoxedName(lean_object*);
lean_object* l_Lean_IR_reshape(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_addBoxedVersions___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getEnv___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersion(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_unboxResultIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_addLocal(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux_match__2(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_eqvTypes___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_run_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getResultType(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_BoxingState_nextAuxId___default;
lean_object* l_Lean_IR_ExplicitBoxing_getVarType_match__1(lean_object*);
extern lean_object* l_Lean_IR_Lean_Compiler_IR_Basic___instance__14;
lean_object* l_Lean_IR_ExplicitBoxing_BoxingContext_f___default;
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_visitVDeclExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getDecl___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_isBoxedName_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___at_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_withVDecl(lean_object*);
lean_object* l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_run___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_requiresBoxedVersion___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___at_Array_append___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__3(lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castVarIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkSepArray___closed__1;
lean_object* l_Lean_IR_ExplicitBoxing_BoxingContext_localCtx___default;
lean_object* l_ReaderT_Init_Control_Reader___instance__4___rarg(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkCast___closed__3;
lean_object* l_Lean_IR_Decl_params(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getJPParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_boxArgsIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldM_loop___at_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_getEnv(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__1;
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__1(lean_object*);
extern lean_object* l_Lean_importModules___closed__2;
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_MaxIndex_collectDecl(lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_unboxResultIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_IRType_isScalar(lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__2;
static lean_object* _init_l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_boxed");
return x_1;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedName(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_isBoxedName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; size_t x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_usize(x_1, 2);
x_7 = l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1;
x_8 = lean_string_dec_eq(x_5, x_7);
lean_dec(x_5);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = lean_box_usize(x_6);
x_11 = lean_apply_2(x_2, x_4, x_10);
return x_11;
}
}
else
{
lean_object* x_12; 
lean_dec(x_2);
x_12 = lean_apply_1(x_3, x_1);
return x_12;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_isBoxedName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_isBoxedName_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_IR_ExplicitBoxing_isBoxedName(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1;
x_4 = lean_string_dec_eq(x_2, x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_isBoxedName___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_IR_ExplicitBoxing_isBoxedName(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_N_mkFresh(lean_object* x_1) {
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
uint8_t l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_requiresBoxedVersion___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = l_Lean_IR_IRType_isScalar(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_7, sizeof(void*)*2);
lean_dec(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = 1;
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_7);
lean_dec(x_4);
x_15 = 1;
return x_15;
}
}
}
}
uint8_t l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; uint8_t x_13; 
x_3 = l_Lean_IR_Decl_params(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
x_7 = l_Lean_IR_Decl_resultType(x_2);
x_8 = l_Lean_IR_IRType_isScalar(x_7);
lean_dec(x_7);
x_9 = l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_requiresBoxedVersion___spec__1(x_2, x_3, x_4, x_5);
lean_dec(x_3);
x_10 = l_Lean_IR_Decl_name(x_2);
x_11 = l_Lean_isExtern(x_1, x_10);
x_12 = l_Lean_closureMaxArgs;
x_13 = lean_nat_dec_lt(x_12, x_4);
lean_dec(x_4);
if (x_8 == 0)
{
if (x_9 == 0)
{
if (x_6 == 0)
{
return x_13;
}
else
{
if (x_11 == 0)
{
return x_13;
}
else
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
}
}
else
{
if (x_6 == 0)
{
return x_13;
}
else
{
uint8_t x_15; 
x_15 = 1;
return x_15;
}
}
}
else
{
if (x_6 == 0)
{
return x_13;
}
else
{
uint8_t x_16; 
x_16 = 1;
return x_16;
}
}
}
}
lean_object* l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_requiresBoxedVersion___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_requiresBoxedVersion___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_requiresBoxedVersion___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_umapMAux___at_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = x_2;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_fset(x_2, x_1, x_8);
x_10 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_N_mkFresh(x_3);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 0;
x_14 = lean_box(7);
x_15 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_uint8(x_15, sizeof(void*)*2, x_13);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_1, x_16);
x_18 = x_15;
x_19 = lean_array_fset(x_9, x_1, x_18);
lean_dec(x_1);
x_1 = x_17;
x_2 = x_19;
x_3 = x_12;
goto _start;
}
}
}
lean_object* l_Nat_foldM_loop___at_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_11 = lean_nat_sub(x_3, x_10);
x_12 = lean_nat_sub(x_11, x_9);
lean_dec(x_11);
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
x_16 = l_Lean_IR_Lean_Compiler_IR_Basic___instance__14;
x_17 = lean_array_get(x_16, x_1, x_12);
x_18 = lean_array_get(x_16, x_2, x_12);
lean_dec(x_12);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_IR_IRType_isScalar(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_19);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_array_push(x_15, x_22);
lean_ctor_set(x_5, 1, x_23);
x_4 = x_10;
goto _start;
}
else
{
lean_object* x_25; uint8_t x_26; 
lean_free_object(x_5);
x_25 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_N_mkFresh(x_6);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
x_29 = lean_ctor_get(x_18, 0);
lean_inc(x_29);
lean_dec(x_18);
x_30 = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_box(13);
lean_inc(x_27);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_19);
lean_ctor_set(x_32, 2, x_30);
lean_ctor_set(x_32, 3, x_31);
x_33 = lean_array_push(x_14, x_32);
x_34 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_34, 0, x_27);
x_35 = lean_array_push(x_15, x_34);
lean_ctor_set(x_25, 1, x_35);
lean_ctor_set(x_25, 0, x_33);
x_4 = x_10;
x_5 = x_25;
x_6 = x_28;
goto _start;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_37 = lean_ctor_get(x_25, 0);
x_38 = lean_ctor_get(x_25, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_25);
x_39 = lean_ctor_get(x_18, 0);
lean_inc(x_39);
lean_dec(x_18);
x_40 = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_box(13);
lean_inc(x_37);
x_42 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_19);
lean_ctor_set(x_42, 2, x_40);
lean_ctor_set(x_42, 3, x_41);
x_43 = lean_array_push(x_14, x_42);
x_44 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_44, 0, x_37);
x_45 = lean_array_push(x_15, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_45);
x_4 = x_10;
x_5 = x_46;
x_6 = x_38;
goto _start;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_48 = lean_ctor_get(x_5, 0);
x_49 = lean_ctor_get(x_5, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_5);
x_50 = l_Lean_IR_Lean_Compiler_IR_Basic___instance__14;
x_51 = lean_array_get(x_50, x_1, x_12);
x_52 = lean_array_get(x_50, x_2, x_12);
lean_dec(x_12);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_IR_IRType_isScalar(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_53);
x_55 = lean_ctor_get(x_52, 0);
lean_inc(x_55);
lean_dec(x_52);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_57 = lean_array_push(x_49, x_56);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_48);
lean_ctor_set(x_58, 1, x_57);
x_4 = x_10;
x_5 = x_58;
goto _start;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_60 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_N_mkFresh(x_6);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_63 = x_60;
} else {
 lean_dec_ref(x_60);
 x_63 = lean_box(0);
}
x_64 = lean_ctor_get(x_52, 0);
lean_inc(x_64);
lean_dec(x_52);
x_65 = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_box(13);
lean_inc(x_61);
x_67 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_67, 0, x_61);
lean_ctor_set(x_67, 1, x_53);
lean_ctor_set(x_67, 2, x_65);
lean_ctor_set(x_67, 3, x_66);
x_68 = lean_array_push(x_48, x_67);
x_69 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_69, 0, x_61);
x_70 = lean_array_push(x_49, x_69);
if (lean_is_scalar(x_63)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_63;
}
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
x_4 = x_10;
x_5 = x_71;
x_6 = x_62;
goto _start;
}
}
}
else
{
lean_object* x_73; 
lean_dec(x_4);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_5);
lean_ctor_set(x_73, 1, x_6);
return x_73;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1;
x_6 = lean_name_mk_string(x_1, x_5);
x_7 = lean_box(7);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_7);
lean_ctor_set(x_8, 3, x_3);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_3 = l_Lean_IR_Decl_params(x_1);
lean_inc(x_3);
x_4 = x_3;
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_closure((void*)(l_Array_umapMAux___at_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___spec__1), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = x_6;
x_8 = lean_apply_1(x_7, x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_array_get_size(x_9);
x_12 = l_Lean_importModules___closed__2;
lean_inc(x_11);
x_13 = l_Nat_foldM_loop___at_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___spec__2(x_3, x_9, x_11, x_11, x_12, x_10);
lean_dec(x_11);
lean_dec(x_3);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_N_mkFresh(x_15);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_IR_Decl_resultType(x_1);
x_22 = l_Lean_IR_Decl_name(x_1);
lean_inc(x_22);
x_23 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_17);
x_24 = lean_box(13);
lean_inc(x_21);
lean_inc(x_19);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_21);
lean_ctor_set(x_25, 2, x_23);
lean_ctor_set(x_25, 3, x_24);
x_26 = lean_array_push(x_16, x_25);
x_27 = l_Lean_IR_IRType_isScalar(x_21);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_21);
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_19);
x_29 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = l_Lean_IR_reshape(x_26, x_29);
x_31 = l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___lambda__1(x_22, x_9, x_30, x_20);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_32 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_N_mkFresh(x_20);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_35, 0, x_21);
lean_ctor_set(x_35, 1, x_19);
x_36 = lean_box(7);
lean_inc(x_33);
x_37 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_37, 2, x_35);
lean_ctor_set(x_37, 3, x_24);
x_38 = lean_array_push(x_26, x_37);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_33);
x_40 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = l_Lean_IR_reshape(x_38, x_40);
x_42 = l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___lambda__1(x_22, x_9, x_41, x_34);
return x_42;
}
}
}
lean_object* l_Nat_foldM_loop___at_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_foldM_loop___at_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersion(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Lean_IR_ExplicitBoxing_mkBoxedVersionAux(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersion___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_ExplicitBoxing_mkBoxedVersion(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_addBoxedVersions___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
return x_5;
}
else
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_fget(x_3, x_4);
x_9 = l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(x_1, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
if (x_9 == 0)
{
lean_dec(x_8);
x_4 = x_11;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_IR_ExplicitBoxing_mkBoxedVersion(x_8);
lean_dec(x_8);
x_14 = lean_array_push(x_5, x_13);
x_4 = x_11;
x_5 = x_14;
goto _start;
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_addBoxedVersions(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Array_empty___closed__1;
x_5 = l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_addBoxedVersions___spec__1(x_1, x_2, x_2, x_3, x_4);
x_6 = l_Array_iterateMAux___at_Array_append___spec__1___rarg(x_5, x_5, x_3, x_2);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_addBoxedVersions___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_addBoxedVersions___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_addBoxedVersions___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_ExplicitBoxing_addBoxedVersions(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_getScrutineeType_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType_match__2___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_getScrutineeType_match__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_IR_ExplicitBoxing_getScrutineeType_match__2___rarg(x_4, x_2, x_3);
return x_5;
}
}
uint8_t l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_getScrutineeType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_4);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_IR_CtorInfo_isScalar(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_4);
x_10 = 1;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_4 = x_12;
goto _start;
}
}
else
{
uint8_t x_14; 
lean_dec(x_7);
lean_dec(x_4);
x_14 = 1;
return x_14;
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_dec_lt(x_3, x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_getScrutineeType___spec__1(x_1, x_1, x_2, x_5);
if (x_6 == 0)
{
if (x_4 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_box(7);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(256u);
x_9 = lean_nat_dec_lt(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(65536u);
x_11 = lean_nat_dec_lt(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_cstr_to_nat("4294967296");
x_13 = lean_nat_dec_lt(x_2, x_12);
lean_dec(x_2);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_box(7);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_box(3);
return x_15;
}
}
else
{
lean_object* x_16; 
lean_dec(x_2);
x_16 = lean_box(2);
return x_16;
}
}
else
{
lean_object* x_17; 
lean_dec(x_2);
x_17 = lean_box(1);
return x_17;
}
}
}
else
{
lean_object* x_18; 
lean_dec(x_2);
x_18 = lean_box(7);
return x_18;
}
}
}
lean_object* l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_getScrutineeType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___at_Lean_IR_ExplicitBoxing_getScrutineeType___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getScrutineeType___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_ExplicitBoxing_getScrutineeType(x_1);
lean_dec(x_1);
return x_2;
}
}
uint8_t l_Lean_IR_ExplicitBoxing_eqvTypes(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; 
x_3 = l_Lean_IR_IRType_isScalar(x_1);
x_4 = l_Lean_IR_IRType_isScalar(x_2);
if (x_3 == 0)
{
if (x_4 == 0)
{
uint8_t x_9; 
x_9 = 1;
x_5 = x_9;
goto block_8;
}
else
{
uint8_t x_10; 
x_10 = 0;
x_5 = x_10;
goto block_8;
}
}
else
{
if (x_4 == 0)
{
uint8_t x_11; 
x_11 = 0;
x_5 = x_11;
goto block_8;
}
else
{
uint8_t x_12; 
x_12 = 1;
x_5 = x_12;
goto block_8;
}
}
block_8:
{
if (x_3 == 0)
{
return x_5;
}
else
{
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = l_Lean_IR_IRType_beq(x_1, x_2);
return x_7;
}
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_eqvTypes___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_BoxingContext_f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_BoxingContext_localCtx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_BoxingContext_resultType___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(6);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_BoxingState_auxDecls___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_BoxingState_auxDeclCache___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_BoxingState_nextAuxId___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1u);
return x_1;
}
}
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_3, x_4);
lean_ctor_set(x_1, 0, x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_7, x_11);
x_13 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_8);
lean_ctor_set(x_13, 2, x_9);
lean_ctor_set(x_13, 3, x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg), 1, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getEnv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 4);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getEnv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_ExplicitBoxing_getEnv(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getLocalContext(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getLocalContext___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_ExplicitBoxing_getLocalContext(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getResultType(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getResultType___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_ExplicitBoxing_getResultType(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getVarType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_ExplicitBoxing_getVarType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_getVarType_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getVarType(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_IR_ExplicitBoxing_getLocalContext(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_IR_LocalContext_getType(x_6, x_1);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_box(7);
lean_ctor_set(x_4, 0, x_8);
return x_4;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
lean_ctor_set(x_4, 0, x_9);
return x_4;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_4);
x_12 = l_Lean_IR_LocalContext_getType(x_10, x_1);
lean_dec(x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_11);
return x_16;
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getVarType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_ExplicitBoxing_getVarType(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getJPParams_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_ExplicitBoxing_getJPParams_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_getJPParams_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getJPParams(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_IR_ExplicitBoxing_getLocalContext(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_IR_LocalContext_getJPParams(x_6, x_1);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = l_Array_empty___closed__1;
lean_ctor_set(x_4, 0, x_8);
return x_4;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
lean_ctor_set(x_4, 0, x_9);
return x_4;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_4);
x_12 = l_Lean_IR_LocalContext_getJPParams(x_10, x_1);
lean_dec(x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Array_empty___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_11);
return x_16;
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getJPParams___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_ExplicitBoxing_getJPParams(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_ExplicitBoxing_getDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_getDecl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 4);
x_5 = lean_ctor_get(x_2, 3);
x_6 = l_Lean_IR_findEnvDecl_x27(x_4, x_1, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_IR_Decl_Lean_Compiler_IR_Basic___instance__17___closed__1;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_getDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_ExplicitBoxing_getDecl(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_withParams___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_iterateMAux___at_Lean_IR_LocalContext_addParams___spec__1(x_1, x_1, x_7, x_6);
lean_ctor_set(x_3, 1, x_8);
x_9 = lean_apply_2(x_2, x_3, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
x_13 = lean_ctor_get(x_3, 3);
x_14 = lean_ctor_get(x_3, 4);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_iterateMAux___at_Lean_IR_LocalContext_addParams___spec__1(x_1, x_1, x_15, x_11);
x_17 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_12);
lean_ctor_set(x_17, 3, x_13);
lean_ctor_set(x_17, 4, x_14);
x_18 = lean_apply_2(x_2, x_17, x_4);
return x_18;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_withParams(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_withParams___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_withParams___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_ExplicitBoxing_withParams___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_withVDecl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_5, 1);
x_9 = l_Lean_IR_LocalContext_addLocal(x_8, x_1, x_2, x_3);
lean_ctor_set(x_5, 1, x_9);
x_10 = lean_apply_2(x_4, x_5, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_ctor_get(x_5, 2);
x_14 = lean_ctor_get(x_5, 3);
x_15 = lean_ctor_get(x_5, 4);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_5);
x_16 = l_Lean_IR_LocalContext_addLocal(x_12, x_1, x_2, x_3);
x_17 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_13);
lean_ctor_set(x_17, 3, x_14);
lean_ctor_set(x_17, 4, x_15);
x_18 = lean_apply_2(x_4, x_17, x_6);
return x_18;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_withVDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_withVDecl___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_withJDecl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_5, 1);
x_9 = l_Lean_IR_LocalContext_addJP(x_8, x_1, x_2, x_3);
lean_ctor_set(x_5, 1, x_9);
x_10 = lean_apply_2(x_4, x_5, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_ctor_get(x_5, 2);
x_14 = lean_ctor_get(x_5, 3);
x_15 = lean_ctor_get(x_5, 4);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_5);
x_16 = l_Lean_IR_LocalContext_addJP(x_12, x_1, x_2, x_3);
x_17 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_13);
lean_ctor_set(x_17, 3, x_14);
lean_ctor_set(x_17, 4, x_15);
x_18 = lean_apply_2(x_4, x_17, x_6);
return x_18;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_withJDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_withJDecl___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 6:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_3, x_5, x_6);
return x_7;
}
case 11:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_2, x_8);
return x_9;
}
default: 
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_apply_1(x_4, x_1);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 2:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_apply_1(x_4, x_1);
return x_9;
}
}
}
}
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing_match__3___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_IR_IRType_isScalar(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_4);
return x_11;
}
default: 
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_IR_ExplicitBoxing_getLocalContext(x_3, x_4);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_IR_LocalContext_getValue(x_14, x_1);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_box(0);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_15, 0);
switch (lean_obj_tag(x_18)) {
case 6:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_array_get_size(x_19);
lean_dec(x_19);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_eq(x_20, x_21);
lean_dec(x_20);
if (x_22 == 0)
{
lean_object* x_23; 
lean_free_object(x_15);
lean_dec(x_18);
x_23 = lean_box(0);
lean_ctor_set(x_12, 0, x_23);
return x_12;
}
else
{
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
}
case 11:
{
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
default: 
{
lean_object* x_24; 
lean_free_object(x_15);
lean_dec(x_18);
x_24 = lean_box(0);
lean_ctor_set(x_12, 0, x_24);
return x_12;
}
}
}
else
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_15, 0);
lean_inc(x_25);
lean_dec(x_15);
switch (lean_obj_tag(x_25)) {
case 6:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
x_27 = lean_array_get_size(x_26);
lean_dec(x_26);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_nat_dec_eq(x_27, x_28);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_25);
x_30 = lean_box(0);
lean_ctor_set(x_12, 0, x_30);
return x_12;
}
else
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_12, 0, x_31);
return x_12;
}
}
case 11:
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_12, 0, x_32);
return x_12;
}
default: 
{
lean_object* x_33; 
lean_dec(x_25);
x_33 = lean_box(0);
lean_ctor_set(x_12, 0, x_33);
return x_12;
}
}
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_12, 0);
x_35 = lean_ctor_get(x_12, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_12);
x_36 = l_Lean_IR_LocalContext_getValue(x_34, x_1);
lean_dec(x_34);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 0);
lean_inc(x_39);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 x_40 = x_36;
} else {
 lean_dec_ref(x_36);
 x_40 = lean_box(0);
}
switch (lean_obj_tag(x_39)) {
case 6:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
x_42 = lean_array_get_size(x_41);
lean_dec(x_41);
x_43 = lean_unsigned_to_nat(0u);
x_44 = lean_nat_dec_eq(x_42, x_43);
lean_dec(x_42);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_40);
lean_dec(x_39);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_35);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; 
if (lean_is_scalar(x_40)) {
 x_47 = lean_alloc_ctor(1, 1, 0);
} else {
 x_47 = x_40;
}
lean_ctor_set(x_47, 0, x_39);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_35);
return x_48;
}
}
case 11:
{
lean_object* x_49; lean_object* x_50; 
if (lean_is_scalar(x_40)) {
 x_49 = lean_alloc_ctor(1, 1, 0);
} else {
 x_49 = x_40;
}
lean_ctor_set(x_49, 0, x_39);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_35);
return x_50;
}
default: 
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_40);
lean_dec(x_39);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_35);
return x_52;
}
}
}
}
}
}
}
}
}
lean_object* l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkCast_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_ExplicitBoxing_mkCast_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_mkCast_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkCast_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_ExplicitBoxing_mkCast_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_mkCast_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_ExplicitBoxing_mkCast___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
x_7 = l_Lean_IR_FnBody_beq(x_4, x_1);
if (x_7 == 0)
{
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_mkCast___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_mkCast___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_IR_ExplicitBoxing_mkCast___closed__1;
x_2 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_mkCast___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_boxed_const");
return x_1;
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_mkCast___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_IR_ExplicitBoxing_mkCast___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkCast(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_isExpensiveConstantValueBoxing(x_1, x_2, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
lean_dec(x_3);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
x_10 = l_Lean_IR_IRType_isScalar(x_2);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_6, 0, x_11);
return x_6;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_1);
lean_ctor_set(x_6, 0, x_12);
return x_6;
}
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_dec(x_6);
x_14 = l_Lean_IR_IRType_isScalar(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
x_15 = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(x_15, 0, x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
}
}
else
{
uint8_t x_19; 
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_6);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_20 = lean_ctor_get(x_6, 1);
x_21 = lean_ctor_get(x_6, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_7, 0);
lean_inc(x_22);
lean_dec(x_7);
x_23 = lean_unsigned_to_nat(1u);
lean_inc(x_2);
x_24 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_24, 0, x_2);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_unsigned_to_nat(2u);
x_26 = l_Lean_IR_ExplicitBoxing_mkCast___closed__2;
lean_inc(x_3);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_3);
lean_ctor_set(x_27, 2, x_24);
lean_ctor_set(x_27, 3, x_26);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_2);
lean_ctor_set(x_28, 2, x_22);
lean_ctor_set(x_28, 3, x_27);
x_29 = lean_ctor_get(x_20, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_20, 2);
lean_inc(x_31);
x_32 = lean_ctor_get(x_20, 3);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_28);
x_33 = l_Std_AssocList_find_x3f___at_Lean_IR_ExplicitBoxing_mkCast___spec__1(x_28, x_31);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_35 = lean_ctor_get(x_20, 3);
lean_dec(x_35);
x_36 = lean_ctor_get(x_20, 2);
lean_dec(x_36);
x_37 = lean_ctor_get(x_20, 1);
lean_dec(x_37);
x_38 = lean_ctor_get(x_20, 0);
lean_dec(x_38);
x_39 = lean_ctor_get(x_4, 0);
x_40 = l_Lean_IR_ExplicitBoxing_mkCast___closed__4;
lean_inc(x_32);
x_41 = l_Lean_Name_appendIndexAfter(x_40, x_32);
x_42 = l_Lean_Name_append(x_39, x_41);
x_43 = l_Array_empty___closed__1;
lean_inc(x_42);
x_44 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
lean_inc(x_28);
x_45 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
lean_ctor_set(x_45, 2, x_3);
lean_ctor_set(x_45, 3, x_28);
x_46 = lean_array_push(x_30, x_45);
lean_inc(x_44);
x_47 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_47, 0, x_28);
lean_ctor_set(x_47, 1, x_44);
lean_ctor_set(x_47, 2, x_31);
x_48 = lean_nat_add(x_32, x_23);
lean_dec(x_32);
lean_ctor_set(x_20, 3, x_48);
lean_ctor_set(x_20, 2, x_47);
lean_ctor_set(x_20, 1, x_46);
lean_ctor_set(x_6, 0, x_44);
return x_6;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_20);
x_49 = lean_ctor_get(x_4, 0);
x_50 = l_Lean_IR_ExplicitBoxing_mkCast___closed__4;
lean_inc(x_32);
x_51 = l_Lean_Name_appendIndexAfter(x_50, x_32);
x_52 = l_Lean_Name_append(x_49, x_51);
x_53 = l_Array_empty___closed__1;
lean_inc(x_52);
x_54 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
lean_inc(x_28);
x_55 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
lean_ctor_set(x_55, 2, x_3);
lean_ctor_set(x_55, 3, x_28);
x_56 = lean_array_push(x_30, x_55);
lean_inc(x_54);
x_57 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_57, 0, x_28);
lean_ctor_set(x_57, 1, x_54);
lean_ctor_set(x_57, 2, x_31);
x_58 = lean_nat_add(x_32, x_23);
lean_dec(x_32);
x_59 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_59, 0, x_29);
lean_ctor_set(x_59, 1, x_56);
lean_ctor_set(x_59, 2, x_57);
lean_ctor_set(x_59, 3, x_58);
lean_ctor_set(x_6, 1, x_59);
lean_ctor_set(x_6, 0, x_54);
return x_6;
}
}
else
{
lean_object* x_60; 
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_3);
x_60 = lean_ctor_get(x_33, 0);
lean_inc(x_60);
lean_dec(x_33);
lean_ctor_set(x_6, 0, x_60);
return x_6;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_61 = lean_ctor_get(x_6, 1);
lean_inc(x_61);
lean_dec(x_6);
x_62 = lean_ctor_get(x_7, 0);
lean_inc(x_62);
lean_dec(x_7);
x_63 = lean_unsigned_to_nat(1u);
lean_inc(x_2);
x_64 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_64, 0, x_2);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_unsigned_to_nat(2u);
x_66 = l_Lean_IR_ExplicitBoxing_mkCast___closed__2;
lean_inc(x_3);
x_67 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_3);
lean_ctor_set(x_67, 2, x_64);
lean_ctor_set(x_67, 3, x_66);
x_68 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_2);
lean_ctor_set(x_68, 2, x_62);
lean_ctor_set(x_68, 3, x_67);
x_69 = lean_ctor_get(x_61, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_61, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_61, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_61, 3);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_68);
x_73 = l_Std_AssocList_find_x3f___at_Lean_IR_ExplicitBoxing_mkCast___spec__1(x_68, x_71);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 lean_ctor_release(x_61, 2);
 lean_ctor_release(x_61, 3);
 x_74 = x_61;
} else {
 lean_dec_ref(x_61);
 x_74 = lean_box(0);
}
x_75 = lean_ctor_get(x_4, 0);
x_76 = l_Lean_IR_ExplicitBoxing_mkCast___closed__4;
lean_inc(x_72);
x_77 = l_Lean_Name_appendIndexAfter(x_76, x_72);
x_78 = l_Lean_Name_append(x_75, x_77);
x_79 = l_Array_empty___closed__1;
lean_inc(x_78);
x_80 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
lean_inc(x_68);
x_81 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
lean_ctor_set(x_81, 2, x_3);
lean_ctor_set(x_81, 3, x_68);
x_82 = lean_array_push(x_70, x_81);
lean_inc(x_80);
x_83 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_83, 0, x_68);
lean_ctor_set(x_83, 1, x_80);
lean_ctor_set(x_83, 2, x_71);
x_84 = lean_nat_add(x_72, x_63);
lean_dec(x_72);
if (lean_is_scalar(x_74)) {
 x_85 = lean_alloc_ctor(0, 4, 0);
} else {
 x_85 = x_74;
}
lean_ctor_set(x_85, 0, x_69);
lean_ctor_set(x_85, 1, x_82);
lean_ctor_set(x_85, 2, x_83);
lean_ctor_set(x_85, 3, x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_80);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_3);
x_87 = lean_ctor_get(x_73, 0);
lean_inc(x_87);
lean_dec(x_73);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_61);
return x_88;
}
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_mkCast___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_ExplicitBoxing_mkCast(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castVarIfNeeded(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = l_Lean_IR_ExplicitBoxing_getVarType(x_1, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_7, x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_10 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_2);
x_13 = l_Lean_IR_ExplicitBoxing_mkCast(x_1, x_7, x_2, x_4, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_11);
x_16 = lean_apply_3(x_3, x_11, x_4, x_15);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_2);
lean_ctor_set(x_19, 2, x_14);
lean_ctor_set(x_19, 3, x_18);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_16);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_11);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set(x_22, 2, x_14);
lean_ctor_set(x_22, 3, x_20);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; 
lean_dec(x_7);
lean_dec(x_2);
x_24 = lean_apply_3(x_3, x_1, x_4, x_8);
return x_24;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgIfNeeded_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgIfNeeded_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_castArgIfNeeded_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgIfNeeded(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = l_Lean_IR_ExplicitBoxing_getVarType(x_7, x_4, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_9, x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_12 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_2);
x_15 = l_Lean_IR_ExplicitBoxing_mkCast(x_7, x_9, x_2, x_4, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_13);
lean_ctor_set(x_1, 0, x_13);
x_18 = lean_apply_3(x_3, x_1, x_4, x_17);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_2);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_13);
lean_ctor_set(x_24, 1, x_2);
lean_ctor_set(x_24, 2, x_16);
lean_ctor_set(x_24, 3, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; 
lean_dec(x_9);
lean_dec(x_2);
x_26 = lean_apply_3(x_3, x_1, x_4, x_10);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
lean_dec(x_1);
x_28 = l_Lean_IR_ExplicitBoxing_getVarType(x_27, x_4, x_5);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_29, x_2);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_32 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_30);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_2);
x_35 = l_Lean_IR_ExplicitBoxing_mkCast(x_27, x_29, x_2, x_4, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
lean_inc(x_33);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_33);
x_39 = lean_apply_3(x_3, x_38, x_4, x_37);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_42 = x_39;
} else {
 lean_dec_ref(x_39);
 x_42 = lean_box(0);
}
x_43 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_43, 0, x_33);
lean_ctor_set(x_43, 1, x_2);
lean_ctor_set(x_43, 2, x_36);
lean_ctor_set(x_43, 3, x_40);
if (lean_is_scalar(x_42)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_42;
}
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_29);
lean_dec(x_2);
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_27);
x_46 = lean_apply_3(x_3, x_45, x_4, x_30);
return x_46;
}
}
}
else
{
lean_object* x_47; 
lean_dec(x_2);
x_47 = lean_apply_3(x_3, x_1, x_4, x_5);
return x_47;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_3, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
return x_12;
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
lean_inc(x_9);
x_10 = lean_apply_1(x_1, x_9);
x_11 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2___closed__1;
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = l_Lean_IR_ExplicitBoxing_getVarType(x_13, x_4, x_5);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_15, x_10);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_18 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_16);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_10);
x_21 = l_Lean_IR_ExplicitBoxing_mkCast(x_13, x_15, x_10, x_4, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_box(13);
lean_inc(x_19);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_10);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_24);
lean_ctor_set(x_2, 0, x_19);
x_26 = lean_array_push(x_7, x_2);
x_27 = lean_array_push(x_8, x_25);
x_28 = lean_box(0);
x_29 = lean_apply_6(x_11, x_26, x_27, x_9, x_28, x_4, x_23);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_15);
lean_dec(x_10);
x_30 = lean_array_push(x_7, x_2);
x_31 = lean_box(0);
x_32 = lean_apply_6(x_11, x_30, x_8, x_9, x_31, x_4, x_16);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_2, 0);
lean_inc(x_33);
lean_dec(x_2);
x_34 = l_Lean_IR_ExplicitBoxing_getVarType(x_33, x_4, x_5);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_35, x_10);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_38 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_36);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
lean_inc(x_10);
x_41 = l_Lean_IR_ExplicitBoxing_mkCast(x_33, x_35, x_10, x_4, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_box(13);
lean_inc(x_39);
x_45 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_45, 0, x_39);
lean_ctor_set(x_45, 1, x_10);
lean_ctor_set(x_45, 2, x_42);
lean_ctor_set(x_45, 3, x_44);
x_46 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_46, 0, x_39);
x_47 = lean_array_push(x_7, x_46);
x_48 = lean_array_push(x_8, x_45);
x_49 = lean_box(0);
x_50 = lean_apply_6(x_11, x_47, x_48, x_9, x_49, x_4, x_43);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_35);
lean_dec(x_10);
x_51 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_51, 0, x_33);
x_52 = lean_array_push(x_7, x_51);
x_53 = lean_box(0);
x_54 = lean_apply_6(x_11, x_52, x_8, x_9, x_53, x_4, x_36);
return x_54;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_10);
x_55 = lean_array_push(x_7, x_2);
x_56 = lean_box(0);
x_57 = lean_apply_6(x_11, x_55, x_8, x_9, x_56, x_4, x_5);
return x_57;
}
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Data_Format_0__Lean_Format_be___closed__1;
x_2 = l_ReaderT_Init_Control_Reader___instance__4___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_mkSepArray___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_5 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2), 5, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_array_get_size(x_1);
x_7 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_8 = 0;
x_9 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__1;
x_10 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__2;
x_11 = l_Array_forInUnsafe_loop___rarg(x_9, x_1, x_5, x_7, x_8, x_10);
x_12 = lean_apply_2(x_11, x_3, x_4);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_12, 1);
x_17 = lean_ctor_get(x_12, 0);
lean_dec(x_17);
x_18 = lean_ctor_get(x_13, 0);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec(x_14);
lean_ctor_set(x_12, 1, x_19);
lean_ctor_set(x_12, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_12);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_dec(x_12);
x_22 = lean_ctor_get(x_13, 0);
lean_inc(x_22);
lean_dec(x_13);
x_23 = lean_ctor_get(x_14, 0);
lean_inc(x_23);
lean_dec(x_14);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
return x_25;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeeded_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeeded_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_castArgsIfNeeded_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_array_uget(x_2, x_4);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_IR_Lean_Compiler_IR_Basic___instance__14;
x_16 = lean_array_get(x_15, x_1, x_14);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2___closed__1;
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_10);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = l_Lean_IR_ExplicitBoxing_getVarType(x_20, x_6, x_7);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_22, x_17);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_25 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_23);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_17);
x_28 = l_Lean_IR_ExplicitBoxing_mkCast(x_20, x_22, x_17, x_6, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_box(13);
lean_inc(x_26);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_17);
lean_ctor_set(x_32, 2, x_29);
lean_ctor_set(x_32, 3, x_31);
lean_ctor_set(x_10, 0, x_26);
x_33 = lean_array_push(x_12, x_10);
x_34 = lean_array_push(x_13, x_32);
x_35 = lean_box(0);
lean_inc(x_6);
x_36 = lean_apply_6(x_18, x_33, x_34, x_14, x_35, x_6, x_30);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
lean_dec(x_6);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 0);
lean_dec(x_39);
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_40);
lean_dec(x_37);
lean_ctor_set(x_36, 0, x_40);
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = lean_ctor_get(x_37, 0);
lean_inc(x_42);
lean_dec(x_37);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; size_t x_46; size_t x_47; 
x_44 = lean_ctor_get(x_36, 1);
lean_inc(x_44);
lean_dec(x_36);
x_45 = lean_ctor_get(x_37, 0);
lean_inc(x_45);
lean_dec(x_37);
x_46 = 1;
x_47 = x_4 + x_46;
x_4 = x_47;
x_5 = x_45;
x_7 = x_44;
goto _start;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_22);
lean_dec(x_17);
x_49 = lean_array_push(x_12, x_10);
x_50 = lean_box(0);
lean_inc(x_6);
x_51 = lean_apply_6(x_18, x_49, x_13, x_14, x_50, x_6, x_23);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
if (lean_obj_tag(x_52) == 0)
{
uint8_t x_53; 
lean_dec(x_6);
x_53 = !lean_is_exclusive(x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_51, 0);
lean_dec(x_54);
x_55 = lean_ctor_get(x_52, 0);
lean_inc(x_55);
lean_dec(x_52);
lean_ctor_set(x_51, 0, x_55);
return x_51;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_dec(x_51);
x_57 = lean_ctor_get(x_52, 0);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; size_t x_61; size_t x_62; 
x_59 = lean_ctor_get(x_51, 1);
lean_inc(x_59);
lean_dec(x_51);
x_60 = lean_ctor_get(x_52, 0);
lean_inc(x_60);
lean_dec(x_52);
x_61 = 1;
x_62 = x_4 + x_61;
x_4 = x_62;
x_5 = x_60;
x_7 = x_59;
goto _start;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_64 = lean_ctor_get(x_10, 0);
lean_inc(x_64);
lean_dec(x_10);
x_65 = l_Lean_IR_ExplicitBoxing_getVarType(x_64, x_6, x_7);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_66, x_17);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_69 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_67);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
lean_inc(x_17);
x_72 = l_Lean_IR_ExplicitBoxing_mkCast(x_64, x_66, x_17, x_6, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_box(13);
lean_inc(x_70);
x_76 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_76, 0, x_70);
lean_ctor_set(x_76, 1, x_17);
lean_ctor_set(x_76, 2, x_73);
lean_ctor_set(x_76, 3, x_75);
x_77 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_77, 0, x_70);
x_78 = lean_array_push(x_12, x_77);
x_79 = lean_array_push(x_13, x_76);
x_80 = lean_box(0);
lean_inc(x_6);
x_81 = lean_apply_6(x_18, x_78, x_79, x_14, x_80, x_6, x_74);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_6);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_84 = x_81;
} else {
 lean_dec_ref(x_81);
 x_84 = lean_box(0);
}
x_85 = lean_ctor_get(x_82, 0);
lean_inc(x_85);
lean_dec(x_82);
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_83);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; size_t x_89; size_t x_90; 
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
lean_dec(x_81);
x_88 = lean_ctor_get(x_82, 0);
lean_inc(x_88);
lean_dec(x_82);
x_89 = 1;
x_90 = x_4 + x_89;
x_4 = x_90;
x_5 = x_88;
x_7 = x_87;
goto _start;
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_66);
lean_dec(x_17);
x_92 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_92, 0, x_64);
x_93 = lean_array_push(x_12, x_92);
x_94 = lean_box(0);
lean_inc(x_6);
x_95 = lean_apply_6(x_18, x_93, x_13, x_14, x_94, x_6, x_67);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_6);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_98 = x_95;
} else {
 lean_dec_ref(x_95);
 x_98 = lean_box(0);
}
x_99 = lean_ctor_get(x_96, 0);
lean_inc(x_99);
lean_dec(x_96);
if (lean_is_scalar(x_98)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_98;
}
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_97);
return x_100;
}
else
{
lean_object* x_101; lean_object* x_102; size_t x_103; size_t x_104; 
x_101 = lean_ctor_get(x_95, 1);
lean_inc(x_101);
lean_dec(x_95);
x_102 = lean_ctor_get(x_96, 0);
lean_inc(x_102);
lean_dec(x_96);
x_103 = 1;
x_104 = x_4 + x_103;
x_4 = x_104;
x_5 = x_102;
x_7 = x_101;
goto _start;
}
}
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_17);
x_106 = lean_array_push(x_12, x_10);
x_107 = lean_box(0);
lean_inc(x_6);
x_108 = lean_apply_6(x_18, x_106, x_13, x_14, x_107, x_6, x_7);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
if (lean_obj_tag(x_109) == 0)
{
uint8_t x_110; 
lean_dec(x_6);
x_110 = !lean_is_exclusive(x_108);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_108, 0);
lean_dec(x_111);
x_112 = lean_ctor_get(x_109, 0);
lean_inc(x_112);
lean_dec(x_109);
lean_ctor_set(x_108, 0, x_112);
return x_108;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_108, 1);
lean_inc(x_113);
lean_dec(x_108);
x_114 = lean_ctor_get(x_109, 0);
lean_inc(x_114);
lean_dec(x_109);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
else
{
lean_object* x_116; lean_object* x_117; size_t x_118; size_t x_119; 
x_116 = lean_ctor_get(x_108, 1);
lean_inc(x_116);
lean_dec(x_108);
x_117 = lean_ctor_get(x_109, 0);
lean_inc(x_117);
lean_dec(x_109);
x_118 = 1;
x_119 = x_4 + x_118;
x_4 = x_119;
x_5 = x_117;
x_7 = x_116;
goto _start;
}
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__2;
x_9 = l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__2(x_1, x_2, x_6, x_7, x_8, x_3, x_4);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_9, 1);
x_14 = lean_ctor_get(x_9, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
lean_ctor_set(x_9, 1, x_16);
lean_ctor_set(x_9, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_ctor_get(x_10, 0);
lean_inc(x_19);
lean_dec(x_10);
x_20 = lean_ctor_get(x_11, 0);
lean_inc(x_20);
lean_dec(x_11);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeeded(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_inc(x_4);
x_6 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__1(x_2, x_1, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_apply_3(x_3, x_9, x_4, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l_Lean_IR_reshape(x_10, x_13);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = l_Lean_IR_reshape(x_10, x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__2(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_castArgsIfNeeded___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeeded___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_ExplicitBoxing_castArgsIfNeeded(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_boxArgsIfNeeded_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_IR_ExplicitBoxing_boxArgsIfNeeded_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_boxArgsIfNeeded_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 < x_2;
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_array_uget(x_1, x_3);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2___closed__1;
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = l_Lean_IR_ExplicitBoxing_getVarType(x_16, x_5, x_6);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_box(7);
x_21 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_18, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_22 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_19);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_IR_ExplicitBoxing_mkCast(x_16, x_18, x_20, x_5, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_box(13);
lean_inc(x_23);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_20);
lean_ctor_set(x_29, 2, x_26);
lean_ctor_set(x_29, 3, x_28);
lean_ctor_set(x_9, 0, x_23);
x_30 = lean_array_push(x_11, x_9);
x_31 = lean_array_push(x_12, x_29);
x_32 = lean_box(0);
lean_inc(x_5);
x_33 = lean_apply_6(x_14, x_30, x_31, x_13, x_32, x_5, x_27);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
lean_dec(x_5);
x_35 = !lean_is_exclusive(x_33);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 0);
lean_dec(x_36);
x_37 = lean_ctor_get(x_34, 0);
lean_inc(x_37);
lean_dec(x_34);
lean_ctor_set(x_33, 0, x_37);
return x_33;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_dec(x_33);
x_39 = lean_ctor_get(x_34, 0);
lean_inc(x_39);
lean_dec(x_34);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; 
x_41 = lean_ctor_get(x_33, 1);
lean_inc(x_41);
lean_dec(x_33);
x_42 = lean_ctor_get(x_34, 0);
lean_inc(x_42);
lean_dec(x_34);
x_43 = 1;
x_44 = x_3 + x_43;
x_3 = x_44;
x_4 = x_42;
x_6 = x_41;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_18);
x_46 = lean_array_push(x_11, x_9);
x_47 = lean_box(0);
lean_inc(x_5);
x_48 = lean_apply_6(x_14, x_46, x_12, x_13, x_47, x_5, x_19);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
lean_dec(x_5);
x_50 = !lean_is_exclusive(x_48);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_48, 0);
lean_dec(x_51);
x_52 = lean_ctor_get(x_49, 0);
lean_inc(x_52);
lean_dec(x_49);
lean_ctor_set(x_48, 0, x_52);
return x_48;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_48, 1);
lean_inc(x_53);
lean_dec(x_48);
x_54 = lean_ctor_get(x_49, 0);
lean_inc(x_54);
lean_dec(x_49);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; size_t x_58; size_t x_59; 
x_56 = lean_ctor_get(x_48, 1);
lean_inc(x_56);
lean_dec(x_48);
x_57 = lean_ctor_get(x_49, 0);
lean_inc(x_57);
lean_dec(x_49);
x_58 = 1;
x_59 = x_3 + x_58;
x_3 = x_59;
x_4 = x_57;
x_6 = x_56;
goto _start;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_61 = lean_ctor_get(x_9, 0);
lean_inc(x_61);
lean_dec(x_9);
x_62 = l_Lean_IR_ExplicitBoxing_getVarType(x_61, x_5, x_6);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_box(7);
x_66 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_63, x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_67 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_64);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_IR_ExplicitBoxing_mkCast(x_61, x_63, x_65, x_5, x_69);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_box(13);
lean_inc(x_68);
x_74 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_74, 0, x_68);
lean_ctor_set(x_74, 1, x_65);
lean_ctor_set(x_74, 2, x_71);
lean_ctor_set(x_74, 3, x_73);
x_75 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_75, 0, x_68);
x_76 = lean_array_push(x_11, x_75);
x_77 = lean_array_push(x_12, x_74);
x_78 = lean_box(0);
lean_inc(x_5);
x_79 = lean_apply_6(x_14, x_76, x_77, x_13, x_78, x_5, x_72);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_5);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_82 = x_79;
} else {
 lean_dec_ref(x_79);
 x_82 = lean_box(0);
}
x_83 = lean_ctor_get(x_80, 0);
lean_inc(x_83);
lean_dec(x_80);
if (lean_is_scalar(x_82)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_82;
}
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_81);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; size_t x_87; size_t x_88; 
x_85 = lean_ctor_get(x_79, 1);
lean_inc(x_85);
lean_dec(x_79);
x_86 = lean_ctor_get(x_80, 0);
lean_inc(x_86);
lean_dec(x_80);
x_87 = 1;
x_88 = x_3 + x_87;
x_3 = x_88;
x_4 = x_86;
x_6 = x_85;
goto _start;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_63);
x_90 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_90, 0, x_61);
x_91 = lean_array_push(x_11, x_90);
x_92 = lean_box(0);
lean_inc(x_5);
x_93 = lean_apply_6(x_14, x_91, x_12, x_13, x_92, x_5, x_64);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_5);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_96 = x_93;
} else {
 lean_dec_ref(x_93);
 x_96 = lean_box(0);
}
x_97 = lean_ctor_get(x_94, 0);
lean_inc(x_97);
lean_dec(x_94);
if (lean_is_scalar(x_96)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_96;
}
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_95);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; size_t x_101; size_t x_102; 
x_99 = lean_ctor_get(x_93, 1);
lean_inc(x_99);
lean_dec(x_93);
x_100 = lean_ctor_get(x_94, 0);
lean_inc(x_100);
lean_dec(x_94);
x_101 = 1;
x_102 = x_3 + x_101;
x_3 = x_102;
x_4 = x_100;
x_6 = x_99;
goto _start;
}
}
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_array_push(x_11, x_9);
x_105 = lean_box(0);
lean_inc(x_5);
x_106 = lean_apply_6(x_14, x_104, x_12, x_13, x_105, x_5, x_6);
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
if (lean_obj_tag(x_107) == 0)
{
uint8_t x_108; 
lean_dec(x_5);
x_108 = !lean_is_exclusive(x_106);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_106, 0);
lean_dec(x_109);
x_110 = lean_ctor_get(x_107, 0);
lean_inc(x_110);
lean_dec(x_107);
lean_ctor_set(x_106, 0, x_110);
return x_106;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_106, 1);
lean_inc(x_111);
lean_dec(x_106);
x_112 = lean_ctor_get(x_107, 0);
lean_inc(x_112);
lean_dec(x_107);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
return x_113;
}
}
else
{
lean_object* x_114; lean_object* x_115; size_t x_116; size_t x_117; 
x_114 = lean_ctor_get(x_106, 1);
lean_inc(x_114);
lean_dec(x_106);
x_115 = lean_ctor_get(x_107, 0);
lean_inc(x_115);
lean_dec(x_107);
x_116 = 1;
x_117 = x_3 + x_116;
x_3 = x_117;
x_4 = x_115;
x_6 = x_114;
goto _start;
}
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_6 = 0;
x_7 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__2;
x_8 = l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__2(x_1, x_5, x_6, x_7, x_2, x_3);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_8, 1);
x_13 = lean_ctor_get(x_8, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
lean_ctor_set(x_8, 1, x_15);
lean_ctor_set(x_8, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_8);
lean_ctor_set(x_16, 1, x_12);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_ctor_get(x_10, 0);
lean_inc(x_19);
lean_dec(x_10);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_17);
return x_21;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_boxArgsIfNeeded(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_3);
x_5 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_1, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_apply_3(x_2, x_8, x_3, x_7);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_IR_reshape(x_9, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l_Lean_IR_reshape(x_9, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__2(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_ExplicitBoxing_boxArgsIfNeeded(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_unboxResultIfNeeded(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Lean_IR_IRType_isScalar(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_6);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_2);
lean_ctor_set(x_14, 2, x_13);
lean_ctor_set(x_14, 3, x_4);
x_15 = lean_box(7);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_3);
lean_ctor_set(x_16, 3, x_14);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_10, 0);
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_10);
lean_inc(x_17);
x_19 = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(x_19, 0, x_17);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_2);
lean_ctor_set(x_20, 2, x_19);
lean_ctor_set(x_20, 3, x_4);
x_21 = lean_box(7);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_22, 2, x_3);
lean_ctor_set(x_22, 3, x_20);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_18);
return x_23;
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_unboxResultIfNeeded___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_IR_ExplicitBoxing_unboxResultIfNeeded(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castResultIfNeeded(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_2, x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_2);
lean_inc(x_4);
lean_inc(x_10);
x_12 = l_Lean_IR_ExplicitBoxing_mkCast(x_10, x_4, x_2, x_6, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_2);
lean_ctor_set(x_15, 2, x_14);
lean_ctor_set(x_15, 3, x_5);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_4);
lean_ctor_set(x_16, 2, x_3);
lean_ctor_set(x_16, 3, x_15);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_2);
lean_ctor_set(x_19, 2, x_17);
lean_ctor_set(x_19, 3, x_5);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_10);
lean_ctor_set(x_20, 1, x_4);
lean_ctor_set(x_20, 2, x_3);
lean_ctor_set(x_20, 3, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_4);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set(x_22, 2, x_3);
lean_ctor_set(x_22, 3, x_5);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_7);
return x_23;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castResultIfNeeded___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_IR_ExplicitBoxing_castResultIfNeeded(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_visitVDeclExpr_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_2, x_8, x_9);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_box(x_13);
x_16 = lean_apply_4(x_3, x_11, x_12, x_15, x_14);
return x_16;
}
case 6:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_apply_2(x_4, x_17, x_18);
return x_19;
}
case 7:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_apply_2(x_5, x_20, x_21);
return x_22;
}
case 8:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_apply_2(x_6, x_23, x_24);
return x_25;
}
default: 
{
lean_object* x_26; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_apply_1(x_7, x_1);
return x_26;
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_visitVDeclExpr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_visitVDeclExpr_match__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_array_uget(x_2, x_4);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_IR_Lean_Compiler_IR_Basic___instance__14;
x_16 = lean_array_get(x_15, x_1, x_14);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2___closed__1;
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_10);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = l_Lean_IR_ExplicitBoxing_getVarType(x_20, x_6, x_7);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_22, x_17);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_25 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_23);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_17);
x_28 = l_Lean_IR_ExplicitBoxing_mkCast(x_20, x_22, x_17, x_6, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_box(13);
lean_inc(x_26);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_17);
lean_ctor_set(x_32, 2, x_29);
lean_ctor_set(x_32, 3, x_31);
lean_ctor_set(x_10, 0, x_26);
x_33 = lean_array_push(x_12, x_10);
x_34 = lean_array_push(x_13, x_32);
x_35 = lean_box(0);
lean_inc(x_6);
x_36 = lean_apply_6(x_18, x_33, x_34, x_14, x_35, x_6, x_30);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
lean_dec(x_6);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 0);
lean_dec(x_39);
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_40);
lean_dec(x_37);
lean_ctor_set(x_36, 0, x_40);
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = lean_ctor_get(x_37, 0);
lean_inc(x_42);
lean_dec(x_37);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; size_t x_46; size_t x_47; 
x_44 = lean_ctor_get(x_36, 1);
lean_inc(x_44);
lean_dec(x_36);
x_45 = lean_ctor_get(x_37, 0);
lean_inc(x_45);
lean_dec(x_37);
x_46 = 1;
x_47 = x_4 + x_46;
x_4 = x_47;
x_5 = x_45;
x_7 = x_44;
goto _start;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_22);
lean_dec(x_17);
x_49 = lean_array_push(x_12, x_10);
x_50 = lean_box(0);
lean_inc(x_6);
x_51 = lean_apply_6(x_18, x_49, x_13, x_14, x_50, x_6, x_23);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
if (lean_obj_tag(x_52) == 0)
{
uint8_t x_53; 
lean_dec(x_6);
x_53 = !lean_is_exclusive(x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_51, 0);
lean_dec(x_54);
x_55 = lean_ctor_get(x_52, 0);
lean_inc(x_55);
lean_dec(x_52);
lean_ctor_set(x_51, 0, x_55);
return x_51;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_dec(x_51);
x_57 = lean_ctor_get(x_52, 0);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; size_t x_61; size_t x_62; 
x_59 = lean_ctor_get(x_51, 1);
lean_inc(x_59);
lean_dec(x_51);
x_60 = lean_ctor_get(x_52, 0);
lean_inc(x_60);
lean_dec(x_52);
x_61 = 1;
x_62 = x_4 + x_61;
x_4 = x_62;
x_5 = x_60;
x_7 = x_59;
goto _start;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_64 = lean_ctor_get(x_10, 0);
lean_inc(x_64);
lean_dec(x_10);
x_65 = l_Lean_IR_ExplicitBoxing_getVarType(x_64, x_6, x_7);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_66, x_17);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_69 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_67);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
lean_inc(x_17);
x_72 = l_Lean_IR_ExplicitBoxing_mkCast(x_64, x_66, x_17, x_6, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_box(13);
lean_inc(x_70);
x_76 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_76, 0, x_70);
lean_ctor_set(x_76, 1, x_17);
lean_ctor_set(x_76, 2, x_73);
lean_ctor_set(x_76, 3, x_75);
x_77 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_77, 0, x_70);
x_78 = lean_array_push(x_12, x_77);
x_79 = lean_array_push(x_13, x_76);
x_80 = lean_box(0);
lean_inc(x_6);
x_81 = lean_apply_6(x_18, x_78, x_79, x_14, x_80, x_6, x_74);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_6);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_84 = x_81;
} else {
 lean_dec_ref(x_81);
 x_84 = lean_box(0);
}
x_85 = lean_ctor_get(x_82, 0);
lean_inc(x_85);
lean_dec(x_82);
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_83);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; size_t x_89; size_t x_90; 
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
lean_dec(x_81);
x_88 = lean_ctor_get(x_82, 0);
lean_inc(x_88);
lean_dec(x_82);
x_89 = 1;
x_90 = x_4 + x_89;
x_4 = x_90;
x_5 = x_88;
x_7 = x_87;
goto _start;
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_66);
lean_dec(x_17);
x_92 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_92, 0, x_64);
x_93 = lean_array_push(x_12, x_92);
x_94 = lean_box(0);
lean_inc(x_6);
x_95 = lean_apply_6(x_18, x_93, x_13, x_14, x_94, x_6, x_67);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_6);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_98 = x_95;
} else {
 lean_dec_ref(x_95);
 x_98 = lean_box(0);
}
x_99 = lean_ctor_get(x_96, 0);
lean_inc(x_99);
lean_dec(x_96);
if (lean_is_scalar(x_98)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_98;
}
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_97);
return x_100;
}
else
{
lean_object* x_101; lean_object* x_102; size_t x_103; size_t x_104; 
x_101 = lean_ctor_get(x_95, 1);
lean_inc(x_101);
lean_dec(x_95);
x_102 = lean_ctor_get(x_96, 0);
lean_inc(x_102);
lean_dec(x_96);
x_103 = 1;
x_104 = x_4 + x_103;
x_4 = x_104;
x_5 = x_102;
x_7 = x_101;
goto _start;
}
}
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_17);
x_106 = lean_array_push(x_12, x_10);
x_107 = lean_box(0);
lean_inc(x_6);
x_108 = lean_apply_6(x_18, x_106, x_13, x_14, x_107, x_6, x_7);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
if (lean_obj_tag(x_109) == 0)
{
uint8_t x_110; 
lean_dec(x_6);
x_110 = !lean_is_exclusive(x_108);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_108, 0);
lean_dec(x_111);
x_112 = lean_ctor_get(x_109, 0);
lean_inc(x_112);
lean_dec(x_109);
lean_ctor_set(x_108, 0, x_112);
return x_108;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_108, 1);
lean_inc(x_113);
lean_dec(x_108);
x_114 = lean_ctor_get(x_109, 0);
lean_inc(x_114);
lean_dec(x_109);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
else
{
lean_object* x_116; lean_object* x_117; size_t x_118; size_t x_119; 
x_116 = lean_ctor_get(x_108, 1);
lean_inc(x_116);
lean_dec(x_108);
x_117 = lean_ctor_get(x_109, 0);
lean_inc(x_117);
lean_dec(x_109);
x_118 = 1;
x_119 = x_4 + x_118;
x_4 = x_119;
x_5 = x_117;
x_7 = x_116;
goto _start;
}
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__2;
x_9 = l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__2(x_1, x_2, x_6, x_7, x_8, x_3, x_4);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_9, 1);
x_14 = lean_ctor_get(x_9, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
lean_ctor_set(x_9, 1, x_16);
lean_ctor_set(x_9, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_ctor_get(x_10, 0);
lean_inc(x_19);
lean_dec(x_10);
x_20 = lean_ctor_get(x_11, 0);
lean_inc(x_20);
lean_dec(x_11);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_visitVDeclExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
x_10 = l_Lean_IR_CtorInfo_isScalar(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_9, x_5, x_6);
lean_dec(x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_ctor_set(x_3, 1, x_15);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_3);
lean_ctor_set(x_17, 3, x_4);
x_18 = l_Lean_IR_reshape(x_16, x_17);
lean_ctor_set(x_12, 1, x_13);
lean_ctor_set(x_12, 0, x_18);
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
lean_ctor_set(x_3, 1, x_19);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_2);
lean_ctor_set(x_21, 2, x_3);
lean_ctor_set(x_21, 3, x_4);
x_22 = l_Lean_IR_reshape(x_20, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_13);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = l_Lean_IR_IRType_isScalar(x_2);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_9, x_5, x_6);
lean_dec(x_9);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_26, 0);
x_30 = lean_ctor_get(x_26, 1);
lean_ctor_set(x_3, 1, x_29);
x_31 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_2);
lean_ctor_set(x_31, 2, x_3);
lean_ctor_set(x_31, 3, x_4);
x_32 = l_Lean_IR_reshape(x_30, x_31);
lean_ctor_set(x_26, 1, x_27);
lean_ctor_set(x_26, 0, x_32);
return x_26;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_26, 0);
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_26);
lean_ctor_set(x_3, 1, x_33);
x_35 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_35, 0, x_1);
lean_ctor_set(x_35, 1, x_2);
lean_ctor_set(x_35, 2, x_3);
lean_ctor_set(x_35, 3, x_4);
x_36 = l_Lean_IR_reshape(x_34, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_27);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_free_object(x_3);
lean_dec(x_9);
lean_dec(x_5);
x_38 = lean_ctor_get(x_8, 1);
lean_inc(x_38);
lean_dec(x_8);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_41, 0, x_1);
lean_ctor_set(x_41, 1, x_2);
lean_ctor_set(x_41, 2, x_40);
lean_ctor_set(x_41, 3, x_4);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_43 = lean_ctor_get(x_3, 0);
x_44 = lean_ctor_get(x_3, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_3);
x_45 = l_Lean_IR_CtorInfo_isScalar(x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_46 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_44, x_5, x_6);
lean_dec(x_44);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_ctor_get(x_47, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_51 = x_47;
} else {
 lean_dec_ref(x_47);
 x_51 = lean_box(0);
}
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_43);
lean_ctor_set(x_52, 1, x_49);
x_53 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_53, 0, x_1);
lean_ctor_set(x_53, 1, x_2);
lean_ctor_set(x_53, 2, x_52);
lean_ctor_set(x_53, 3, x_4);
x_54 = l_Lean_IR_reshape(x_50, x_53);
if (lean_is_scalar(x_51)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_51;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_48);
return x_55;
}
else
{
uint8_t x_56; 
x_56 = l_Lean_IR_IRType_isScalar(x_2);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_57 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_44, x_5, x_6);
lean_dec(x_44);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_ctor_get(x_58, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_58, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_62 = x_58;
} else {
 lean_dec_ref(x_58);
 x_62 = lean_box(0);
}
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_43);
lean_ctor_set(x_63, 1, x_60);
x_64 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_64, 0, x_1);
lean_ctor_set(x_64, 1, x_2);
lean_ctor_set(x_64, 2, x_63);
lean_ctor_set(x_64, 3, x_4);
x_65 = l_Lean_IR_reshape(x_61, x_64);
if (lean_is_scalar(x_62)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_62;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_59);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_44);
lean_dec(x_5);
x_67 = lean_ctor_get(x_43, 1);
lean_inc(x_67);
lean_dec(x_43);
x_68 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_69 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_69, 0, x_68);
x_70 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_70, 0, x_1);
lean_ctor_set(x_70, 1, x_2);
lean_ctor_set(x_70, 2, x_69);
lean_ctor_set(x_70, 3, x_4);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_6);
return x_71;
}
}
}
}
case 2:
{
uint8_t x_72; 
x_72 = !lean_is_exclusive(x_3);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_73 = lean_ctor_get(x_3, 2);
x_74 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_73, x_5, x_6);
lean_dec(x_73);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = !lean_is_exclusive(x_75);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_75, 0);
x_79 = lean_ctor_get(x_75, 1);
lean_ctor_set(x_3, 2, x_78);
x_80 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_80, 0, x_1);
lean_ctor_set(x_80, 1, x_2);
lean_ctor_set(x_80, 2, x_3);
lean_ctor_set(x_80, 3, x_4);
x_81 = l_Lean_IR_reshape(x_79, x_80);
lean_ctor_set(x_75, 1, x_76);
lean_ctor_set(x_75, 0, x_81);
return x_75;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_82 = lean_ctor_get(x_75, 0);
x_83 = lean_ctor_get(x_75, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_75);
lean_ctor_set(x_3, 2, x_82);
x_84 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_84, 0, x_1);
lean_ctor_set(x_84, 1, x_2);
lean_ctor_set(x_84, 2, x_3);
lean_ctor_set(x_84, 3, x_4);
x_85 = l_Lean_IR_reshape(x_83, x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_76);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_87 = lean_ctor_get(x_3, 0);
x_88 = lean_ctor_get(x_3, 1);
x_89 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_90 = lean_ctor_get(x_3, 2);
lean_inc(x_90);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_3);
x_91 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_90, x_5, x_6);
lean_dec(x_90);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_ctor_get(x_92, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_92, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_96 = x_92;
} else {
 lean_dec_ref(x_92);
 x_96 = lean_box(0);
}
x_97 = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(x_97, 0, x_87);
lean_ctor_set(x_97, 1, x_88);
lean_ctor_set(x_97, 2, x_94);
lean_ctor_set_uint8(x_97, sizeof(void*)*3, x_89);
x_98 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_98, 0, x_1);
lean_ctor_set(x_98, 1, x_2);
lean_ctor_set(x_98, 2, x_97);
lean_ctor_set(x_98, 3, x_4);
x_99 = l_Lean_IR_reshape(x_95, x_98);
if (lean_is_scalar(x_96)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_96;
}
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_93);
return x_100;
}
}
case 6:
{
uint8_t x_101; 
x_101 = !lean_is_exclusive(x_3);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_102 = lean_ctor_get(x_3, 0);
x_103 = lean_ctor_get(x_3, 1);
x_104 = l_Lean_IR_ExplicitBoxing_getDecl(x_102, x_5, x_6);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
lean_dec(x_104);
x_107 = l_Lean_IR_Decl_params(x_105);
lean_inc(x_5);
x_108 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__1(x_107, x_103, x_5, x_106);
lean_dec(x_103);
lean_dec(x_107);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = lean_ctor_get(x_109, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_109, 1);
lean_inc(x_112);
lean_dec(x_109);
lean_ctor_set(x_3, 1, x_111);
x_113 = l_Lean_IR_Decl_resultType(x_105);
lean_dec(x_105);
x_114 = l_Lean_IR_ExplicitBoxing_castResultIfNeeded(x_1, x_2, x_3, x_113, x_4, x_5, x_110);
lean_dec(x_5);
x_115 = !lean_is_exclusive(x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; 
x_116 = lean_ctor_get(x_114, 0);
x_117 = l_Lean_IR_reshape(x_112, x_116);
lean_ctor_set(x_114, 0, x_117);
return x_114;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_118 = lean_ctor_get(x_114, 0);
x_119 = lean_ctor_get(x_114, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_114);
x_120 = l_Lean_IR_reshape(x_112, x_118);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_122 = lean_ctor_get(x_3, 0);
x_123 = lean_ctor_get(x_3, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_3);
x_124 = l_Lean_IR_ExplicitBoxing_getDecl(x_122, x_5, x_6);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = l_Lean_IR_Decl_params(x_125);
lean_inc(x_5);
x_128 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__1(x_127, x_123, x_5, x_126);
lean_dec(x_123);
lean_dec(x_127);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_ctor_get(x_129, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_129, 1);
lean_inc(x_132);
lean_dec(x_129);
x_133 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_133, 0, x_122);
lean_ctor_set(x_133, 1, x_131);
x_134 = l_Lean_IR_Decl_resultType(x_125);
lean_dec(x_125);
x_135 = l_Lean_IR_ExplicitBoxing_castResultIfNeeded(x_1, x_2, x_133, x_134, x_4, x_5, x_130);
lean_dec(x_5);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_138 = x_135;
} else {
 lean_dec_ref(x_135);
 x_138 = lean_box(0);
}
x_139 = l_Lean_IR_reshape(x_132, x_136);
if (lean_is_scalar(x_138)) {
 x_140 = lean_alloc_ctor(0, 2, 0);
} else {
 x_140 = x_138;
}
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_137);
return x_140;
}
}
case 7:
{
uint8_t x_141; 
x_141 = !lean_is_exclusive(x_3);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; uint8_t x_150; lean_object* x_151; 
x_142 = lean_ctor_get(x_3, 0);
x_143 = lean_ctor_get(x_3, 1);
x_144 = l_Lean_IR_ExplicitBoxing_getEnv(x_5, x_6);
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
lean_dec(x_144);
x_147 = l_Lean_IR_ExplicitBoxing_getDecl(x_142, x_5, x_146);
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_147, 1);
lean_inc(x_149);
lean_dec(x_147);
x_150 = l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(x_145, x_148);
lean_dec(x_148);
lean_dec(x_145);
x_151 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_143, x_5, x_149);
lean_dec(x_143);
if (x_150 == 0)
{
lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
lean_dec(x_151);
x_154 = !lean_is_exclusive(x_152);
if (x_154 == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_155 = lean_ctor_get(x_152, 0);
x_156 = lean_ctor_get(x_152, 1);
lean_ctor_set(x_3, 1, x_155);
x_157 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_157, 0, x_1);
lean_ctor_set(x_157, 1, x_2);
lean_ctor_set(x_157, 2, x_3);
lean_ctor_set(x_157, 3, x_4);
x_158 = l_Lean_IR_reshape(x_156, x_157);
lean_ctor_set(x_152, 1, x_153);
lean_ctor_set(x_152, 0, x_158);
return x_152;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_159 = lean_ctor_get(x_152, 0);
x_160 = lean_ctor_get(x_152, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_152);
lean_ctor_set(x_3, 1, x_159);
x_161 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_161, 0, x_1);
lean_ctor_set(x_161, 1, x_2);
lean_ctor_set(x_161, 2, x_3);
lean_ctor_set(x_161, 3, x_4);
x_162 = l_Lean_IR_reshape(x_160, x_161);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_153);
return x_163;
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; 
x_164 = l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1;
x_165 = lean_name_mk_string(x_142, x_164);
x_166 = lean_ctor_get(x_151, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_151, 1);
lean_inc(x_167);
lean_dec(x_151);
x_168 = !lean_is_exclusive(x_166);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_169 = lean_ctor_get(x_166, 0);
x_170 = lean_ctor_get(x_166, 1);
lean_ctor_set(x_3, 1, x_169);
lean_ctor_set(x_3, 0, x_165);
x_171 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_171, 0, x_1);
lean_ctor_set(x_171, 1, x_2);
lean_ctor_set(x_171, 2, x_3);
lean_ctor_set(x_171, 3, x_4);
x_172 = l_Lean_IR_reshape(x_170, x_171);
lean_ctor_set(x_166, 1, x_167);
lean_ctor_set(x_166, 0, x_172);
return x_166;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_173 = lean_ctor_get(x_166, 0);
x_174 = lean_ctor_get(x_166, 1);
lean_inc(x_174);
lean_inc(x_173);
lean_dec(x_166);
lean_ctor_set(x_3, 1, x_173);
lean_ctor_set(x_3, 0, x_165);
x_175 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_175, 0, x_1);
lean_ctor_set(x_175, 1, x_2);
lean_ctor_set(x_175, 2, x_3);
lean_ctor_set(x_175, 3, x_4);
x_176 = l_Lean_IR_reshape(x_174, x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_167);
return x_177;
}
}
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; lean_object* x_187; 
x_178 = lean_ctor_get(x_3, 0);
x_179 = lean_ctor_get(x_3, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_3);
x_180 = l_Lean_IR_ExplicitBoxing_getEnv(x_5, x_6);
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
x_183 = l_Lean_IR_ExplicitBoxing_getDecl(x_178, x_5, x_182);
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_183, 1);
lean_inc(x_185);
lean_dec(x_183);
x_186 = l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(x_181, x_184);
lean_dec(x_184);
lean_dec(x_181);
x_187 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_179, x_5, x_185);
lean_dec(x_179);
if (x_186 == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
lean_dec(x_187);
x_190 = lean_ctor_get(x_188, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_188, 1);
lean_inc(x_191);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_192 = x_188;
} else {
 lean_dec_ref(x_188);
 x_192 = lean_box(0);
}
x_193 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_193, 0, x_178);
lean_ctor_set(x_193, 1, x_190);
x_194 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_194, 0, x_1);
lean_ctor_set(x_194, 1, x_2);
lean_ctor_set(x_194, 2, x_193);
lean_ctor_set(x_194, 3, x_4);
x_195 = l_Lean_IR_reshape(x_191, x_194);
if (lean_is_scalar(x_192)) {
 x_196 = lean_alloc_ctor(0, 2, 0);
} else {
 x_196 = x_192;
}
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_189);
return x_196;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_197 = l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1;
x_198 = lean_name_mk_string(x_178, x_197);
x_199 = lean_ctor_get(x_187, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_187, 1);
lean_inc(x_200);
lean_dec(x_187);
x_201 = lean_ctor_get(x_199, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_199, 1);
lean_inc(x_202);
if (lean_is_exclusive(x_199)) {
 lean_ctor_release(x_199, 0);
 lean_ctor_release(x_199, 1);
 x_203 = x_199;
} else {
 lean_dec_ref(x_199);
 x_203 = lean_box(0);
}
x_204 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_204, 0, x_198);
lean_ctor_set(x_204, 1, x_201);
x_205 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_205, 0, x_1);
lean_ctor_set(x_205, 1, x_2);
lean_ctor_set(x_205, 2, x_204);
lean_ctor_set(x_205, 3, x_4);
x_206 = l_Lean_IR_reshape(x_202, x_205);
if (lean_is_scalar(x_203)) {
 x_207 = lean_alloc_ctor(0, 2, 0);
} else {
 x_207 = x_203;
}
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_200);
return x_207;
}
}
}
case 8:
{
uint8_t x_208; 
x_208 = !lean_is_exclusive(x_3);
if (x_208 == 0)
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; uint8_t x_216; 
x_209 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_210 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_209, x_5, x_6);
lean_dec(x_209);
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
lean_dec(x_210);
x_213 = lean_ctor_get(x_211, 0);
lean_inc(x_213);
x_214 = lean_ctor_get(x_211, 1);
lean_inc(x_214);
lean_dec(x_211);
lean_ctor_set(x_3, 1, x_213);
x_215 = l_Lean_IR_ExplicitBoxing_unboxResultIfNeeded(x_1, x_2, x_3, x_4, x_5, x_212);
lean_dec(x_5);
x_216 = !lean_is_exclusive(x_215);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; 
x_217 = lean_ctor_get(x_215, 0);
x_218 = l_Lean_IR_reshape(x_214, x_217);
lean_ctor_set(x_215, 0, x_218);
return x_215;
}
else
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_219 = lean_ctor_get(x_215, 0);
x_220 = lean_ctor_get(x_215, 1);
lean_inc(x_220);
lean_inc(x_219);
lean_dec(x_215);
x_221 = l_Lean_IR_reshape(x_214, x_219);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_220);
return x_222;
}
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_223 = lean_ctor_get(x_3, 0);
x_224 = lean_ctor_get(x_3, 1);
lean_inc(x_224);
lean_inc(x_223);
lean_dec(x_3);
lean_inc(x_5);
x_225 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_boxArgsIfNeeded___spec__1(x_224, x_5, x_6);
lean_dec(x_224);
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
lean_dec(x_225);
x_228 = lean_ctor_get(x_226, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_226, 1);
lean_inc(x_229);
lean_dec(x_226);
x_230 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_230, 0, x_223);
lean_ctor_set(x_230, 1, x_228);
x_231 = l_Lean_IR_ExplicitBoxing_unboxResultIfNeeded(x_1, x_2, x_230, x_4, x_5, x_227);
lean_dec(x_5);
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_231, 1);
lean_inc(x_233);
if (lean_is_exclusive(x_231)) {
 lean_ctor_release(x_231, 0);
 lean_ctor_release(x_231, 1);
 x_234 = x_231;
} else {
 lean_dec_ref(x_231);
 x_234 = lean_box(0);
}
x_235 = l_Lean_IR_reshape(x_229, x_232);
if (lean_is_scalar(x_234)) {
 x_236 = lean_alloc_ctor(0, 2, 0);
} else {
 x_236 = x_234;
}
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_233);
return x_236;
}
}
default: 
{
lean_object* x_237; lean_object* x_238; 
lean_dec(x_5);
x_237 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_237, 0, x_1);
lean_ctor_set(x_237, 1, x_2);
lean_ctor_set(x_237, 2, x_3);
lean_ctor_set(x_237, 3, x_4);
x_238 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_238, 1, x_6);
return x_238;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__2(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitVDeclExpr___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_visitFnBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_4(x_2, x_11, x_12, x_13, x_14);
return x_15;
}
case 1:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_apply_4(x_3, x_16, x_17, x_18, x_19);
return x_20;
}
case 4:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 3);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_apply_4(x_4, x_21, x_22, x_23, x_24);
return x_25;
}
case 5:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 3);
lean_inc(x_29);
x_30 = lean_ctor_get(x_1, 4);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 5);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_apply_6(x_5, x_26, x_27, x_28, x_29, x_30, x_31);
return x_32;
}
case 9:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 1);
lean_inc(x_34);
lean_dec(x_1);
x_35 = lean_apply_2(x_6, x_33, x_34);
return x_35;
}
case 10:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_1, 2);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 3);
lean_inc(x_39);
lean_dec(x_1);
x_40 = lean_apply_4(x_7, x_36, x_37, x_38, x_39);
return x_40;
}
case 11:
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
lean_dec(x_1);
x_42 = lean_apply_1(x_8, x_41);
return x_42;
}
case 12:
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_ctor_get(x_1, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_1, 1);
lean_inc(x_44);
lean_dec(x_1);
x_45 = lean_apply_2(x_9, x_43, x_44);
return x_45;
}
default: 
{
lean_object* x_46; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_46 = lean_apply_1(x_10, x_1);
return x_46;
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_visitFnBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_visitFnBody_match__1___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Array_umapMAux___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_1, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = x_2;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_array_fget(x_2, x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_fset(x_2, x_1, x_10);
x_12 = x_9;
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_3);
x_15 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_14, x_3, x_4);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_ctor_set(x_12, 1, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_1, x_18);
x_20 = x_12;
x_21 = lean_array_fset(x_11, x_1, x_20);
lean_dec(x_1);
x_1 = x_19;
x_2 = x_21;
x_4 = x_17;
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
lean_inc(x_3);
x_25 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_24, x_3, x_4);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_1, x_29);
x_31 = x_28;
x_32 = lean_array_fset(x_11, x_1, x_31);
lean_dec(x_1);
x_1 = x_30;
x_2 = x_32;
x_4 = x_27;
goto _start;
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_12);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_35 = lean_ctor_get(x_12, 0);
lean_inc(x_3);
x_36 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_35, x_3, x_4);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
lean_ctor_set(x_12, 0, x_37);
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_add(x_1, x_39);
x_41 = x_12;
x_42 = lean_array_fset(x_11, x_1, x_41);
lean_dec(x_1);
x_1 = x_40;
x_2 = x_42;
x_4 = x_38;
goto _start;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_44 = lean_ctor_get(x_12, 0);
lean_inc(x_44);
lean_dec(x_12);
lean_inc(x_3);
x_45 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_44, x_3, x_4);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_46);
x_49 = lean_unsigned_to_nat(1u);
x_50 = lean_nat_add(x_1, x_49);
x_51 = x_48;
x_52 = lean_array_fset(x_11, x_1, x_51);
lean_dec(x_1);
x_1 = x_50;
x_2 = x_52;
x_4 = x_47;
goto _start;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_4 < x_3;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_array_uget(x_2, x_4);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_IR_Lean_Compiler_IR_Basic___instance__14;
x_16 = lean_array_get(x_15, x_1, x_14);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2___closed__1;
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_10);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = l_Lean_IR_ExplicitBoxing_getVarType(x_20, x_6, x_7);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_22, x_17);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_25 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_23);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_17);
x_28 = l_Lean_IR_ExplicitBoxing_mkCast(x_20, x_22, x_17, x_6, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_box(13);
lean_inc(x_26);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_17);
lean_ctor_set(x_32, 2, x_29);
lean_ctor_set(x_32, 3, x_31);
lean_ctor_set(x_10, 0, x_26);
x_33 = lean_array_push(x_12, x_10);
x_34 = lean_array_push(x_13, x_32);
x_35 = lean_box(0);
lean_inc(x_6);
x_36 = lean_apply_6(x_18, x_33, x_34, x_14, x_35, x_6, x_30);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
lean_dec(x_6);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 0);
lean_dec(x_39);
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_40);
lean_dec(x_37);
lean_ctor_set(x_36, 0, x_40);
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = lean_ctor_get(x_37, 0);
lean_inc(x_42);
lean_dec(x_37);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; size_t x_46; size_t x_47; 
x_44 = lean_ctor_get(x_36, 1);
lean_inc(x_44);
lean_dec(x_36);
x_45 = lean_ctor_get(x_37, 0);
lean_inc(x_45);
lean_dec(x_37);
x_46 = 1;
x_47 = x_4 + x_46;
x_4 = x_47;
x_5 = x_45;
x_7 = x_44;
goto _start;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_22);
lean_dec(x_17);
x_49 = lean_array_push(x_12, x_10);
x_50 = lean_box(0);
lean_inc(x_6);
x_51 = lean_apply_6(x_18, x_49, x_13, x_14, x_50, x_6, x_23);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
if (lean_obj_tag(x_52) == 0)
{
uint8_t x_53; 
lean_dec(x_6);
x_53 = !lean_is_exclusive(x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_51, 0);
lean_dec(x_54);
x_55 = lean_ctor_get(x_52, 0);
lean_inc(x_55);
lean_dec(x_52);
lean_ctor_set(x_51, 0, x_55);
return x_51;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_dec(x_51);
x_57 = lean_ctor_get(x_52, 0);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; size_t x_61; size_t x_62; 
x_59 = lean_ctor_get(x_51, 1);
lean_inc(x_59);
lean_dec(x_51);
x_60 = lean_ctor_get(x_52, 0);
lean_inc(x_60);
lean_dec(x_52);
x_61 = 1;
x_62 = x_4 + x_61;
x_4 = x_62;
x_5 = x_60;
x_7 = x_59;
goto _start;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_64 = lean_ctor_get(x_10, 0);
lean_inc(x_64);
lean_dec(x_10);
x_65 = l_Lean_IR_ExplicitBoxing_getVarType(x_64, x_6, x_7);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_66, x_17);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_69 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_67);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
lean_inc(x_17);
x_72 = l_Lean_IR_ExplicitBoxing_mkCast(x_64, x_66, x_17, x_6, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_box(13);
lean_inc(x_70);
x_76 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_76, 0, x_70);
lean_ctor_set(x_76, 1, x_17);
lean_ctor_set(x_76, 2, x_73);
lean_ctor_set(x_76, 3, x_75);
x_77 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_77, 0, x_70);
x_78 = lean_array_push(x_12, x_77);
x_79 = lean_array_push(x_13, x_76);
x_80 = lean_box(0);
lean_inc(x_6);
x_81 = lean_apply_6(x_18, x_78, x_79, x_14, x_80, x_6, x_74);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_6);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_84 = x_81;
} else {
 lean_dec_ref(x_81);
 x_84 = lean_box(0);
}
x_85 = lean_ctor_get(x_82, 0);
lean_inc(x_85);
lean_dec(x_82);
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_83);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; size_t x_89; size_t x_90; 
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
lean_dec(x_81);
x_88 = lean_ctor_get(x_82, 0);
lean_inc(x_88);
lean_dec(x_82);
x_89 = 1;
x_90 = x_4 + x_89;
x_4 = x_90;
x_5 = x_88;
x_7 = x_87;
goto _start;
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_66);
lean_dec(x_17);
x_92 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_92, 0, x_64);
x_93 = lean_array_push(x_12, x_92);
x_94 = lean_box(0);
lean_inc(x_6);
x_95 = lean_apply_6(x_18, x_93, x_13, x_14, x_94, x_6, x_67);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_6);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_98 = x_95;
} else {
 lean_dec_ref(x_95);
 x_98 = lean_box(0);
}
x_99 = lean_ctor_get(x_96, 0);
lean_inc(x_99);
lean_dec(x_96);
if (lean_is_scalar(x_98)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_98;
}
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_97);
return x_100;
}
else
{
lean_object* x_101; lean_object* x_102; size_t x_103; size_t x_104; 
x_101 = lean_ctor_get(x_95, 1);
lean_inc(x_101);
lean_dec(x_95);
x_102 = lean_ctor_get(x_96, 0);
lean_inc(x_102);
lean_dec(x_96);
x_103 = 1;
x_104 = x_4 + x_103;
x_4 = x_104;
x_5 = x_102;
x_7 = x_101;
goto _start;
}
}
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_17);
x_106 = lean_array_push(x_12, x_10);
x_107 = lean_box(0);
lean_inc(x_6);
x_108 = lean_apply_6(x_18, x_106, x_13, x_14, x_107, x_6, x_7);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
if (lean_obj_tag(x_109) == 0)
{
uint8_t x_110; 
lean_dec(x_6);
x_110 = !lean_is_exclusive(x_108);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_108, 0);
lean_dec(x_111);
x_112 = lean_ctor_get(x_109, 0);
lean_inc(x_112);
lean_dec(x_109);
lean_ctor_set(x_108, 0, x_112);
return x_108;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_108, 1);
lean_inc(x_113);
lean_dec(x_108);
x_114 = lean_ctor_get(x_109, 0);
lean_inc(x_114);
lean_dec(x_109);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
else
{
lean_object* x_116; lean_object* x_117; size_t x_118; size_t x_119; 
x_116 = lean_ctor_get(x_108, 1);
lean_inc(x_116);
lean_dec(x_108);
x_117 = lean_ctor_get(x_109, 0);
lean_inc(x_117);
lean_dec(x_109);
x_118 = 1;
x_119 = x_4 + x_118;
x_4 = x_119;
x_5 = x_117;
x_7 = x_116;
goto _start;
}
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__2;
x_9 = l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__3(x_1, x_2, x_6, x_7, x_8, x_3, x_4);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_9, 1);
x_14 = lean_ctor_get(x_9, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
lean_ctor_set(x_9, 1, x_16);
lean_ctor_set(x_9, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_ctor_get(x_10, 0);
lean_inc(x_19);
lean_dec(x_10);
x_20 = lean_ctor_get(x_11, 0);
lean_inc(x_20);
lean_dec(x_11);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_visitFnBody(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 3);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 4);
lean_inc(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l_Lean_IR_LocalContext_addLocal(x_9, x_4, x_5, x_6);
x_14 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_14, 2, x_10);
lean_ctor_set(x_14, 3, x_11);
lean_ctor_set(x_14, 4, x_12);
x_15 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_7, x_14, x_3);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_IR_ExplicitBoxing_visitVDeclExpr(x_4, x_5, x_6, x_16, x_2, x_17);
return x_18;
}
case 1:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = lean_ctor_get(x_1, 1);
x_23 = lean_ctor_get(x_1, 2);
x_24 = lean_ctor_get(x_1, 3);
x_25 = lean_ctor_get(x_2, 0);
x_26 = lean_ctor_get(x_2, 1);
x_27 = lean_ctor_get(x_2, 2);
x_28 = lean_ctor_get(x_2, 3);
x_29 = lean_ctor_get(x_2, 4);
x_30 = lean_unsigned_to_nat(0u);
lean_inc(x_26);
x_31 = l_Array_iterateMAux___at_Lean_IR_LocalContext_addParams___spec__1(x_22, x_22, x_30, x_26);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_25);
lean_ctor_set(x_2, 1, x_31);
x_32 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_23, x_2, x_3);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_33);
lean_inc(x_22);
lean_inc(x_21);
x_35 = l_Lean_IR_LocalContext_addJP(x_26, x_21, x_22, x_33);
x_36 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_36, 0, x_25);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_36, 2, x_27);
lean_ctor_set(x_36, 3, x_28);
lean_ctor_set(x_36, 4, x_29);
x_37 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_24, x_36, x_34);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_37, 0);
lean_ctor_set(x_1, 3, x_39);
lean_ctor_set(x_1, 2, x_33);
lean_ctor_set(x_37, 0, x_1);
return x_37;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_37, 0);
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_37);
lean_ctor_set(x_1, 3, x_40);
lean_ctor_set(x_1, 2, x_33);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_1);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_43 = lean_ctor_get(x_1, 0);
x_44 = lean_ctor_get(x_1, 1);
x_45 = lean_ctor_get(x_1, 2);
x_46 = lean_ctor_get(x_1, 3);
x_47 = lean_ctor_get(x_2, 0);
x_48 = lean_ctor_get(x_2, 1);
x_49 = lean_ctor_get(x_2, 2);
x_50 = lean_ctor_get(x_2, 3);
x_51 = lean_ctor_get(x_2, 4);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_2);
x_52 = lean_unsigned_to_nat(0u);
lean_inc(x_48);
x_53 = l_Array_iterateMAux___at_Lean_IR_LocalContext_addParams___spec__1(x_44, x_44, x_52, x_48);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_47);
x_54 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_54, 0, x_47);
lean_ctor_set(x_54, 1, x_53);
lean_ctor_set(x_54, 2, x_49);
lean_ctor_set(x_54, 3, x_50);
lean_ctor_set(x_54, 4, x_51);
x_55 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_45, x_54, x_3);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
lean_inc(x_56);
lean_inc(x_44);
lean_inc(x_43);
x_58 = l_Lean_IR_LocalContext_addJP(x_48, x_43, x_44, x_56);
x_59 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_59, 0, x_47);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set(x_59, 2, x_49);
lean_ctor_set(x_59, 3, x_50);
lean_ctor_set(x_59, 4, x_51);
x_60 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_46, x_59, x_57);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_63 = x_60;
} else {
 lean_dec_ref(x_60);
 x_63 = lean_box(0);
}
lean_ctor_set(x_1, 3, x_61);
lean_ctor_set(x_1, 2, x_56);
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_1);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_65 = lean_ctor_get(x_1, 0);
x_66 = lean_ctor_get(x_1, 1);
x_67 = lean_ctor_get(x_1, 2);
x_68 = lean_ctor_get(x_1, 3);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_1);
x_69 = lean_ctor_get(x_2, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_2, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_2, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_2, 3);
lean_inc(x_72);
x_73 = lean_ctor_get(x_2, 4);
lean_inc(x_73);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 x_74 = x_2;
} else {
 lean_dec_ref(x_2);
 x_74 = lean_box(0);
}
x_75 = lean_unsigned_to_nat(0u);
lean_inc(x_70);
x_76 = l_Array_iterateMAux___at_Lean_IR_LocalContext_addParams___spec__1(x_66, x_66, x_75, x_70);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_69);
if (lean_is_scalar(x_74)) {
 x_77 = lean_alloc_ctor(0, 5, 0);
} else {
 x_77 = x_74;
}
lean_ctor_set(x_77, 0, x_69);
lean_ctor_set(x_77, 1, x_76);
lean_ctor_set(x_77, 2, x_71);
lean_ctor_set(x_77, 3, x_72);
lean_ctor_set(x_77, 4, x_73);
x_78 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_67, x_77, x_3);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
lean_inc(x_79);
lean_inc(x_66);
lean_inc(x_65);
x_81 = l_Lean_IR_LocalContext_addJP(x_70, x_65, x_66, x_79);
x_82 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_82, 0, x_69);
lean_ctor_set(x_82, 1, x_81);
lean_ctor_set(x_82, 2, x_71);
lean_ctor_set(x_82, 3, x_72);
lean_ctor_set(x_82, 4, x_73);
x_83 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_68, x_82, x_80);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_86 = x_83;
} else {
 lean_dec_ref(x_83);
 x_86 = lean_box(0);
}
x_87 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_87, 0, x_65);
lean_ctor_set(x_87, 1, x_66);
lean_ctor_set(x_87, 2, x_79);
lean_ctor_set(x_87, 3, x_84);
if (lean_is_scalar(x_86)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_86;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_85);
return x_88;
}
}
case 4:
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_1);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_90 = lean_ctor_get(x_1, 2);
x_91 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
x_92 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_91, x_2, x_3);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = l_Lean_IR_ExplicitBoxing_getVarType(x_90, x_2, x_94);
x_96 = !lean_is_exclusive(x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_97 = lean_ctor_get(x_95, 0);
x_98 = lean_ctor_get(x_95, 1);
x_99 = lean_box(5);
x_100 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_97, x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
lean_free_object(x_95);
x_101 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_98);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = l_Lean_IR_ExplicitBoxing_mkCast(x_90, x_97, x_99, x_2, x_103);
lean_dec(x_2);
x_105 = !lean_is_exclusive(x_104);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_104, 0);
lean_inc(x_102);
lean_ctor_set(x_1, 3, x_93);
lean_ctor_set(x_1, 2, x_102);
x_107 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_107, 0, x_102);
lean_ctor_set(x_107, 1, x_99);
lean_ctor_set(x_107, 2, x_106);
lean_ctor_set(x_107, 3, x_1);
lean_ctor_set(x_104, 0, x_107);
return x_104;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_108 = lean_ctor_get(x_104, 0);
x_109 = lean_ctor_get(x_104, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_104);
lean_inc(x_102);
lean_ctor_set(x_1, 3, x_93);
lean_ctor_set(x_1, 2, x_102);
x_110 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_110, 0, x_102);
lean_ctor_set(x_110, 1, x_99);
lean_ctor_set(x_110, 2, x_108);
lean_ctor_set(x_110, 3, x_1);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
else
{
lean_dec(x_97);
lean_dec(x_2);
lean_ctor_set(x_1, 3, x_93);
lean_ctor_set(x_95, 0, x_1);
return x_95;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_112 = lean_ctor_get(x_95, 0);
x_113 = lean_ctor_get(x_95, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_95);
x_114 = lean_box(5);
x_115 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_112, x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_116 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_113);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = l_Lean_IR_ExplicitBoxing_mkCast(x_90, x_112, x_114, x_2, x_118);
lean_dec(x_2);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_122 = x_119;
} else {
 lean_dec_ref(x_119);
 x_122 = lean_box(0);
}
lean_inc(x_117);
lean_ctor_set(x_1, 3, x_93);
lean_ctor_set(x_1, 2, x_117);
x_123 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_123, 0, x_117);
lean_ctor_set(x_123, 1, x_114);
lean_ctor_set(x_123, 2, x_120);
lean_ctor_set(x_123, 3, x_1);
if (lean_is_scalar(x_122)) {
 x_124 = lean_alloc_ctor(0, 2, 0);
} else {
 x_124 = x_122;
}
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_121);
return x_124;
}
else
{
lean_object* x_125; 
lean_dec(x_112);
lean_dec(x_2);
lean_ctor_set(x_1, 3, x_93);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_1);
lean_ctor_set(x_125, 1, x_113);
return x_125;
}
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; uint8_t x_138; 
x_126 = lean_ctor_get(x_1, 0);
x_127 = lean_ctor_get(x_1, 1);
x_128 = lean_ctor_get(x_1, 2);
x_129 = lean_ctor_get(x_1, 3);
lean_inc(x_129);
lean_inc(x_128);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_1);
lean_inc(x_2);
x_130 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_129, x_2, x_3);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = l_Lean_IR_ExplicitBoxing_getVarType(x_128, x_2, x_132);
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_133, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_136 = x_133;
} else {
 lean_dec_ref(x_133);
 x_136 = lean_box(0);
}
x_137 = lean_box(5);
x_138 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_134, x_137);
if (x_138 == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_136);
x_139 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_135);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
x_142 = l_Lean_IR_ExplicitBoxing_mkCast(x_128, x_134, x_137, x_2, x_141);
lean_dec(x_2);
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_145 = x_142;
} else {
 lean_dec_ref(x_142);
 x_145 = lean_box(0);
}
lean_inc(x_140);
x_146 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_146, 0, x_126);
lean_ctor_set(x_146, 1, x_127);
lean_ctor_set(x_146, 2, x_140);
lean_ctor_set(x_146, 3, x_131);
x_147 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_147, 0, x_140);
lean_ctor_set(x_147, 1, x_137);
lean_ctor_set(x_147, 2, x_143);
lean_ctor_set(x_147, 3, x_146);
if (lean_is_scalar(x_145)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_145;
}
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_144);
return x_148;
}
else
{
lean_object* x_149; lean_object* x_150; 
lean_dec(x_134);
lean_dec(x_2);
x_149 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_149, 0, x_126);
lean_ctor_set(x_149, 1, x_127);
lean_ctor_set(x_149, 2, x_128);
lean_ctor_set(x_149, 3, x_131);
if (lean_is_scalar(x_136)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_136;
}
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_135);
return x_150;
}
}
}
case 5:
{
uint8_t x_151; 
x_151 = !lean_is_exclusive(x_1);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_152 = lean_ctor_get(x_1, 3);
x_153 = lean_ctor_get(x_1, 4);
x_154 = lean_ctor_get(x_1, 5);
lean_inc(x_2);
x_155 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_154, x_2, x_3);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = l_Lean_IR_ExplicitBoxing_getVarType(x_152, x_2, x_157);
x_159 = !lean_is_exclusive(x_158);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; uint8_t x_162; 
x_160 = lean_ctor_get(x_158, 0);
x_161 = lean_ctor_get(x_158, 1);
x_162 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_160, x_153);
if (x_162 == 0)
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; 
lean_free_object(x_158);
x_163 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_161);
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_163, 1);
lean_inc(x_165);
lean_dec(x_163);
lean_inc(x_153);
x_166 = l_Lean_IR_ExplicitBoxing_mkCast(x_152, x_160, x_153, x_2, x_165);
lean_dec(x_2);
x_167 = !lean_is_exclusive(x_166);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; 
x_168 = lean_ctor_get(x_166, 0);
lean_inc(x_153);
lean_inc(x_164);
lean_ctor_set(x_1, 5, x_156);
lean_ctor_set(x_1, 3, x_164);
x_169 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_169, 0, x_164);
lean_ctor_set(x_169, 1, x_153);
lean_ctor_set(x_169, 2, x_168);
lean_ctor_set(x_169, 3, x_1);
lean_ctor_set(x_166, 0, x_169);
return x_166;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_170 = lean_ctor_get(x_166, 0);
x_171 = lean_ctor_get(x_166, 1);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_166);
lean_inc(x_153);
lean_inc(x_164);
lean_ctor_set(x_1, 5, x_156);
lean_ctor_set(x_1, 3, x_164);
x_172 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_172, 0, x_164);
lean_ctor_set(x_172, 1, x_153);
lean_ctor_set(x_172, 2, x_170);
lean_ctor_set(x_172, 3, x_1);
x_173 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_171);
return x_173;
}
}
else
{
lean_dec(x_160);
lean_dec(x_2);
lean_ctor_set(x_1, 5, x_156);
lean_ctor_set(x_158, 0, x_1);
return x_158;
}
}
else
{
lean_object* x_174; lean_object* x_175; uint8_t x_176; 
x_174 = lean_ctor_get(x_158, 0);
x_175 = lean_ctor_get(x_158, 1);
lean_inc(x_175);
lean_inc(x_174);
lean_dec(x_158);
x_176 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_174, x_153);
if (x_176 == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_177 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_175);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
lean_dec(x_177);
lean_inc(x_153);
x_180 = l_Lean_IR_ExplicitBoxing_mkCast(x_152, x_174, x_153, x_2, x_179);
lean_dec(x_2);
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
if (lean_is_exclusive(x_180)) {
 lean_ctor_release(x_180, 0);
 lean_ctor_release(x_180, 1);
 x_183 = x_180;
} else {
 lean_dec_ref(x_180);
 x_183 = lean_box(0);
}
lean_inc(x_153);
lean_inc(x_178);
lean_ctor_set(x_1, 5, x_156);
lean_ctor_set(x_1, 3, x_178);
x_184 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_184, 0, x_178);
lean_ctor_set(x_184, 1, x_153);
lean_ctor_set(x_184, 2, x_181);
lean_ctor_set(x_184, 3, x_1);
if (lean_is_scalar(x_183)) {
 x_185 = lean_alloc_ctor(0, 2, 0);
} else {
 x_185 = x_183;
}
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_182);
return x_185;
}
else
{
lean_object* x_186; 
lean_dec(x_174);
lean_dec(x_2);
lean_ctor_set(x_1, 5, x_156);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_1);
lean_ctor_set(x_186, 1, x_175);
return x_186;
}
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_187 = lean_ctor_get(x_1, 0);
x_188 = lean_ctor_get(x_1, 1);
x_189 = lean_ctor_get(x_1, 2);
x_190 = lean_ctor_get(x_1, 3);
x_191 = lean_ctor_get(x_1, 4);
x_192 = lean_ctor_get(x_1, 5);
lean_inc(x_192);
lean_inc(x_191);
lean_inc(x_190);
lean_inc(x_189);
lean_inc(x_188);
lean_inc(x_187);
lean_dec(x_1);
lean_inc(x_2);
x_193 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_192, x_2, x_3);
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
x_196 = l_Lean_IR_ExplicitBoxing_getVarType(x_190, x_2, x_195);
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_196, 1);
lean_inc(x_198);
if (lean_is_exclusive(x_196)) {
 lean_ctor_release(x_196, 0);
 lean_ctor_release(x_196, 1);
 x_199 = x_196;
} else {
 lean_dec_ref(x_196);
 x_199 = lean_box(0);
}
x_200 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_197, x_191);
if (x_200 == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
lean_dec(x_199);
x_201 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_198);
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_201, 1);
lean_inc(x_203);
lean_dec(x_201);
lean_inc(x_191);
x_204 = l_Lean_IR_ExplicitBoxing_mkCast(x_190, x_197, x_191, x_2, x_203);
lean_dec(x_2);
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
if (lean_is_exclusive(x_204)) {
 lean_ctor_release(x_204, 0);
 lean_ctor_release(x_204, 1);
 x_207 = x_204;
} else {
 lean_dec_ref(x_204);
 x_207 = lean_box(0);
}
lean_inc(x_191);
lean_inc(x_202);
x_208 = lean_alloc_ctor(5, 6, 0);
lean_ctor_set(x_208, 0, x_187);
lean_ctor_set(x_208, 1, x_188);
lean_ctor_set(x_208, 2, x_189);
lean_ctor_set(x_208, 3, x_202);
lean_ctor_set(x_208, 4, x_191);
lean_ctor_set(x_208, 5, x_194);
x_209 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_209, 0, x_202);
lean_ctor_set(x_209, 1, x_191);
lean_ctor_set(x_209, 2, x_205);
lean_ctor_set(x_209, 3, x_208);
if (lean_is_scalar(x_207)) {
 x_210 = lean_alloc_ctor(0, 2, 0);
} else {
 x_210 = x_207;
}
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_206);
return x_210;
}
else
{
lean_object* x_211; lean_object* x_212; 
lean_dec(x_197);
lean_dec(x_2);
x_211 = lean_alloc_ctor(5, 6, 0);
lean_ctor_set(x_211, 0, x_187);
lean_ctor_set(x_211, 1, x_188);
lean_ctor_set(x_211, 2, x_189);
lean_ctor_set(x_211, 3, x_190);
lean_ctor_set(x_211, 4, x_191);
lean_ctor_set(x_211, 5, x_194);
if (lean_is_scalar(x_199)) {
 x_212 = lean_alloc_ctor(0, 2, 0);
} else {
 x_212 = x_199;
}
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_198);
return x_212;
}
}
}
case 9:
{
uint8_t x_213; 
x_213 = !lean_is_exclusive(x_1);
if (x_213 == 0)
{
lean_object* x_214; lean_object* x_215; uint8_t x_216; 
x_214 = lean_ctor_get(x_1, 1);
x_215 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_214, x_2, x_3);
x_216 = !lean_is_exclusive(x_215);
if (x_216 == 0)
{
lean_object* x_217; 
x_217 = lean_ctor_get(x_215, 0);
lean_ctor_set(x_1, 1, x_217);
lean_ctor_set(x_215, 0, x_1);
return x_215;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_218 = lean_ctor_get(x_215, 0);
x_219 = lean_ctor_get(x_215, 1);
lean_inc(x_219);
lean_inc(x_218);
lean_dec(x_215);
lean_ctor_set(x_1, 1, x_218);
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_1);
lean_ctor_set(x_220, 1, x_219);
return x_220;
}
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_221 = lean_ctor_get(x_1, 0);
x_222 = lean_ctor_get(x_1, 1);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_1);
x_223 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_222, x_2, x_3);
x_224 = lean_ctor_get(x_223, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_223, 1);
lean_inc(x_225);
if (lean_is_exclusive(x_223)) {
 lean_ctor_release(x_223, 0);
 lean_ctor_release(x_223, 1);
 x_226 = x_223;
} else {
 lean_dec_ref(x_223);
 x_226 = lean_box(0);
}
x_227 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_227, 0, x_221);
lean_ctor_set(x_227, 1, x_224);
if (lean_is_scalar(x_226)) {
 x_228 = lean_alloc_ctor(0, 2, 0);
} else {
 x_228 = x_226;
}
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_225);
return x_228;
}
}
case 10:
{
uint8_t x_229; 
x_229 = !lean_is_exclusive(x_1);
if (x_229 == 0)
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_230 = lean_ctor_get(x_1, 1);
x_231 = lean_ctor_get(x_1, 3);
x_232 = lean_ctor_get(x_1, 2);
lean_dec(x_232);
x_233 = l_Lean_IR_ExplicitBoxing_getScrutineeType(x_231);
x_234 = x_231;
x_235 = lean_unsigned_to_nat(0u);
x_236 = lean_alloc_closure((void*)(l_Array_umapMAux___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__1), 4, 2);
lean_closure_set(x_236, 0, x_235);
lean_closure_set(x_236, 1, x_234);
x_237 = x_236;
lean_inc(x_2);
x_238 = lean_apply_2(x_237, x_2, x_3);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = l_Lean_IR_ExplicitBoxing_getVarType(x_230, x_2, x_240);
x_242 = !lean_is_exclusive(x_241);
if (x_242 == 0)
{
lean_object* x_243; lean_object* x_244; uint8_t x_245; 
x_243 = lean_ctor_get(x_241, 0);
x_244 = lean_ctor_get(x_241, 1);
x_245 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_243, x_233);
if (x_245 == 0)
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; uint8_t x_250; 
lean_free_object(x_241);
x_246 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_244);
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
lean_dec(x_246);
lean_inc(x_233);
x_249 = l_Lean_IR_ExplicitBoxing_mkCast(x_230, x_243, x_233, x_2, x_248);
lean_dec(x_2);
x_250 = !lean_is_exclusive(x_249);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; 
x_251 = lean_ctor_get(x_249, 0);
lean_inc(x_233);
lean_inc(x_247);
lean_ctor_set(x_1, 3, x_239);
lean_ctor_set(x_1, 2, x_233);
lean_ctor_set(x_1, 1, x_247);
x_252 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_252, 0, x_247);
lean_ctor_set(x_252, 1, x_233);
lean_ctor_set(x_252, 2, x_251);
lean_ctor_set(x_252, 3, x_1);
lean_ctor_set(x_249, 0, x_252);
return x_249;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_253 = lean_ctor_get(x_249, 0);
x_254 = lean_ctor_get(x_249, 1);
lean_inc(x_254);
lean_inc(x_253);
lean_dec(x_249);
lean_inc(x_233);
lean_inc(x_247);
lean_ctor_set(x_1, 3, x_239);
lean_ctor_set(x_1, 2, x_233);
lean_ctor_set(x_1, 1, x_247);
x_255 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_255, 0, x_247);
lean_ctor_set(x_255, 1, x_233);
lean_ctor_set(x_255, 2, x_253);
lean_ctor_set(x_255, 3, x_1);
x_256 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_256, 0, x_255);
lean_ctor_set(x_256, 1, x_254);
return x_256;
}
}
else
{
lean_dec(x_243);
lean_dec(x_2);
lean_ctor_set(x_1, 3, x_239);
lean_ctor_set(x_1, 2, x_233);
lean_ctor_set(x_241, 0, x_1);
return x_241;
}
}
else
{
lean_object* x_257; lean_object* x_258; uint8_t x_259; 
x_257 = lean_ctor_get(x_241, 0);
x_258 = lean_ctor_get(x_241, 1);
lean_inc(x_258);
lean_inc(x_257);
lean_dec(x_241);
x_259 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_257, x_233);
if (x_259 == 0)
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_260 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_258);
x_261 = lean_ctor_get(x_260, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_260, 1);
lean_inc(x_262);
lean_dec(x_260);
lean_inc(x_233);
x_263 = l_Lean_IR_ExplicitBoxing_mkCast(x_230, x_257, x_233, x_2, x_262);
lean_dec(x_2);
x_264 = lean_ctor_get(x_263, 0);
lean_inc(x_264);
x_265 = lean_ctor_get(x_263, 1);
lean_inc(x_265);
if (lean_is_exclusive(x_263)) {
 lean_ctor_release(x_263, 0);
 lean_ctor_release(x_263, 1);
 x_266 = x_263;
} else {
 lean_dec_ref(x_263);
 x_266 = lean_box(0);
}
lean_inc(x_233);
lean_inc(x_261);
lean_ctor_set(x_1, 3, x_239);
lean_ctor_set(x_1, 2, x_233);
lean_ctor_set(x_1, 1, x_261);
x_267 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_267, 0, x_261);
lean_ctor_set(x_267, 1, x_233);
lean_ctor_set(x_267, 2, x_264);
lean_ctor_set(x_267, 3, x_1);
if (lean_is_scalar(x_266)) {
 x_268 = lean_alloc_ctor(0, 2, 0);
} else {
 x_268 = x_266;
}
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_265);
return x_268;
}
else
{
lean_object* x_269; 
lean_dec(x_257);
lean_dec(x_2);
lean_ctor_set(x_1, 3, x_239);
lean_ctor_set(x_1, 2, x_233);
x_269 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_269, 0, x_1);
lean_ctor_set(x_269, 1, x_258);
return x_269;
}
}
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; uint8_t x_285; 
x_270 = lean_ctor_get(x_1, 0);
x_271 = lean_ctor_get(x_1, 1);
x_272 = lean_ctor_get(x_1, 3);
lean_inc(x_272);
lean_inc(x_271);
lean_inc(x_270);
lean_dec(x_1);
x_273 = l_Lean_IR_ExplicitBoxing_getScrutineeType(x_272);
x_274 = x_272;
x_275 = lean_unsigned_to_nat(0u);
x_276 = lean_alloc_closure((void*)(l_Array_umapMAux___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__1), 4, 2);
lean_closure_set(x_276, 0, x_275);
lean_closure_set(x_276, 1, x_274);
x_277 = x_276;
lean_inc(x_2);
x_278 = lean_apply_2(x_277, x_2, x_3);
x_279 = lean_ctor_get(x_278, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_278, 1);
lean_inc(x_280);
lean_dec(x_278);
x_281 = l_Lean_IR_ExplicitBoxing_getVarType(x_271, x_2, x_280);
x_282 = lean_ctor_get(x_281, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_281, 1);
lean_inc(x_283);
if (lean_is_exclusive(x_281)) {
 lean_ctor_release(x_281, 0);
 lean_ctor_release(x_281, 1);
 x_284 = x_281;
} else {
 lean_dec_ref(x_281);
 x_284 = lean_box(0);
}
x_285 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_282, x_273);
if (x_285 == 0)
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; 
lean_dec(x_284);
x_286 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_283);
x_287 = lean_ctor_get(x_286, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_286, 1);
lean_inc(x_288);
lean_dec(x_286);
lean_inc(x_273);
x_289 = l_Lean_IR_ExplicitBoxing_mkCast(x_271, x_282, x_273, x_2, x_288);
lean_dec(x_2);
x_290 = lean_ctor_get(x_289, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_289, 1);
lean_inc(x_291);
if (lean_is_exclusive(x_289)) {
 lean_ctor_release(x_289, 0);
 lean_ctor_release(x_289, 1);
 x_292 = x_289;
} else {
 lean_dec_ref(x_289);
 x_292 = lean_box(0);
}
lean_inc(x_273);
lean_inc(x_287);
x_293 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_293, 0, x_270);
lean_ctor_set(x_293, 1, x_287);
lean_ctor_set(x_293, 2, x_273);
lean_ctor_set(x_293, 3, x_279);
x_294 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_294, 0, x_287);
lean_ctor_set(x_294, 1, x_273);
lean_ctor_set(x_294, 2, x_290);
lean_ctor_set(x_294, 3, x_293);
if (lean_is_scalar(x_292)) {
 x_295 = lean_alloc_ctor(0, 2, 0);
} else {
 x_295 = x_292;
}
lean_ctor_set(x_295, 0, x_294);
lean_ctor_set(x_295, 1, x_291);
return x_295;
}
else
{
lean_object* x_296; lean_object* x_297; 
lean_dec(x_282);
lean_dec(x_2);
x_296 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_296, 0, x_270);
lean_ctor_set(x_296, 1, x_271);
lean_ctor_set(x_296, 2, x_273);
lean_ctor_set(x_296, 3, x_279);
if (lean_is_scalar(x_284)) {
 x_297 = lean_alloc_ctor(0, 2, 0);
} else {
 x_297 = x_284;
}
lean_ctor_set(x_297, 0, x_296);
lean_ctor_set(x_297, 1, x_283);
return x_297;
}
}
}
case 11:
{
uint8_t x_298; 
x_298 = !lean_is_exclusive(x_1);
if (x_298 == 0)
{
lean_object* x_299; lean_object* x_300; 
x_299 = lean_ctor_get(x_1, 0);
x_300 = l_Lean_IR_ExplicitBoxing_getResultType(x_2, x_3);
if (lean_obj_tag(x_299) == 0)
{
lean_object* x_301; lean_object* x_302; uint8_t x_303; 
x_301 = lean_ctor_get(x_300, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_300, 1);
lean_inc(x_302);
lean_dec(x_300);
x_303 = !lean_is_exclusive(x_299);
if (x_303 == 0)
{
lean_object* x_304; lean_object* x_305; uint8_t x_306; 
x_304 = lean_ctor_get(x_299, 0);
x_305 = l_Lean_IR_ExplicitBoxing_getVarType(x_304, x_2, x_302);
x_306 = !lean_is_exclusive(x_305);
if (x_306 == 0)
{
lean_object* x_307; lean_object* x_308; uint8_t x_309; 
x_307 = lean_ctor_get(x_305, 0);
x_308 = lean_ctor_get(x_305, 1);
x_309 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_307, x_301);
if (x_309 == 0)
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; uint8_t x_314; 
lean_free_object(x_305);
x_310 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_308);
x_311 = lean_ctor_get(x_310, 0);
lean_inc(x_311);
x_312 = lean_ctor_get(x_310, 1);
lean_inc(x_312);
lean_dec(x_310);
lean_inc(x_301);
x_313 = l_Lean_IR_ExplicitBoxing_mkCast(x_304, x_307, x_301, x_2, x_312);
lean_dec(x_2);
x_314 = !lean_is_exclusive(x_313);
if (x_314 == 0)
{
lean_object* x_315; lean_object* x_316; 
x_315 = lean_ctor_get(x_313, 0);
lean_inc(x_311);
lean_ctor_set(x_299, 0, x_311);
x_316 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_316, 0, x_311);
lean_ctor_set(x_316, 1, x_301);
lean_ctor_set(x_316, 2, x_315);
lean_ctor_set(x_316, 3, x_1);
lean_ctor_set(x_313, 0, x_316);
return x_313;
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; 
x_317 = lean_ctor_get(x_313, 0);
x_318 = lean_ctor_get(x_313, 1);
lean_inc(x_318);
lean_inc(x_317);
lean_dec(x_313);
lean_inc(x_311);
lean_ctor_set(x_299, 0, x_311);
x_319 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_319, 0, x_311);
lean_ctor_set(x_319, 1, x_301);
lean_ctor_set(x_319, 2, x_317);
lean_ctor_set(x_319, 3, x_1);
x_320 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_320, 0, x_319);
lean_ctor_set(x_320, 1, x_318);
return x_320;
}
}
else
{
lean_dec(x_307);
lean_dec(x_301);
lean_dec(x_2);
lean_ctor_set(x_305, 0, x_1);
return x_305;
}
}
else
{
lean_object* x_321; lean_object* x_322; uint8_t x_323; 
x_321 = lean_ctor_get(x_305, 0);
x_322 = lean_ctor_get(x_305, 1);
lean_inc(x_322);
lean_inc(x_321);
lean_dec(x_305);
x_323 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_321, x_301);
if (x_323 == 0)
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_324 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_322);
x_325 = lean_ctor_get(x_324, 0);
lean_inc(x_325);
x_326 = lean_ctor_get(x_324, 1);
lean_inc(x_326);
lean_dec(x_324);
lean_inc(x_301);
x_327 = l_Lean_IR_ExplicitBoxing_mkCast(x_304, x_321, x_301, x_2, x_326);
lean_dec(x_2);
x_328 = lean_ctor_get(x_327, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_327, 1);
lean_inc(x_329);
if (lean_is_exclusive(x_327)) {
 lean_ctor_release(x_327, 0);
 lean_ctor_release(x_327, 1);
 x_330 = x_327;
} else {
 lean_dec_ref(x_327);
 x_330 = lean_box(0);
}
lean_inc(x_325);
lean_ctor_set(x_299, 0, x_325);
x_331 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_331, 0, x_325);
lean_ctor_set(x_331, 1, x_301);
lean_ctor_set(x_331, 2, x_328);
lean_ctor_set(x_331, 3, x_1);
if (lean_is_scalar(x_330)) {
 x_332 = lean_alloc_ctor(0, 2, 0);
} else {
 x_332 = x_330;
}
lean_ctor_set(x_332, 0, x_331);
lean_ctor_set(x_332, 1, x_329);
return x_332;
}
else
{
lean_object* x_333; 
lean_dec(x_321);
lean_dec(x_301);
lean_dec(x_2);
x_333 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_333, 0, x_1);
lean_ctor_set(x_333, 1, x_322);
return x_333;
}
}
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_339; 
x_334 = lean_ctor_get(x_299, 0);
lean_inc(x_334);
lean_dec(x_299);
x_335 = l_Lean_IR_ExplicitBoxing_getVarType(x_334, x_2, x_302);
x_336 = lean_ctor_get(x_335, 0);
lean_inc(x_336);
x_337 = lean_ctor_get(x_335, 1);
lean_inc(x_337);
if (lean_is_exclusive(x_335)) {
 lean_ctor_release(x_335, 0);
 lean_ctor_release(x_335, 1);
 x_338 = x_335;
} else {
 lean_dec_ref(x_335);
 x_338 = lean_box(0);
}
x_339 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_336, x_301);
if (x_339 == 0)
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; 
lean_dec(x_338);
x_340 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_337);
x_341 = lean_ctor_get(x_340, 0);
lean_inc(x_341);
x_342 = lean_ctor_get(x_340, 1);
lean_inc(x_342);
lean_dec(x_340);
lean_inc(x_301);
x_343 = l_Lean_IR_ExplicitBoxing_mkCast(x_334, x_336, x_301, x_2, x_342);
lean_dec(x_2);
x_344 = lean_ctor_get(x_343, 0);
lean_inc(x_344);
x_345 = lean_ctor_get(x_343, 1);
lean_inc(x_345);
if (lean_is_exclusive(x_343)) {
 lean_ctor_release(x_343, 0);
 lean_ctor_release(x_343, 1);
 x_346 = x_343;
} else {
 lean_dec_ref(x_343);
 x_346 = lean_box(0);
}
lean_inc(x_341);
x_347 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_347, 0, x_341);
lean_ctor_set(x_1, 0, x_347);
x_348 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_348, 0, x_341);
lean_ctor_set(x_348, 1, x_301);
lean_ctor_set(x_348, 2, x_344);
lean_ctor_set(x_348, 3, x_1);
if (lean_is_scalar(x_346)) {
 x_349 = lean_alloc_ctor(0, 2, 0);
} else {
 x_349 = x_346;
}
lean_ctor_set(x_349, 0, x_348);
lean_ctor_set(x_349, 1, x_345);
return x_349;
}
else
{
lean_object* x_350; lean_object* x_351; 
lean_dec(x_336);
lean_dec(x_301);
lean_dec(x_2);
x_350 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_350, 0, x_334);
lean_ctor_set(x_1, 0, x_350);
if (lean_is_scalar(x_338)) {
 x_351 = lean_alloc_ctor(0, 2, 0);
} else {
 x_351 = x_338;
}
lean_ctor_set(x_351, 0, x_1);
lean_ctor_set(x_351, 1, x_337);
return x_351;
}
}
}
else
{
uint8_t x_352; 
lean_dec(x_2);
x_352 = !lean_is_exclusive(x_300);
if (x_352 == 0)
{
lean_object* x_353; 
x_353 = lean_ctor_get(x_300, 0);
lean_dec(x_353);
lean_ctor_set(x_300, 0, x_1);
return x_300;
}
else
{
lean_object* x_354; lean_object* x_355; 
x_354 = lean_ctor_get(x_300, 1);
lean_inc(x_354);
lean_dec(x_300);
x_355 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_355, 0, x_1);
lean_ctor_set(x_355, 1, x_354);
return x_355;
}
}
}
else
{
lean_object* x_356; lean_object* x_357; 
x_356 = lean_ctor_get(x_1, 0);
lean_inc(x_356);
lean_dec(x_1);
x_357 = l_Lean_IR_ExplicitBoxing_getResultType(x_2, x_3);
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; uint8_t x_366; 
x_358 = lean_ctor_get(x_357, 0);
lean_inc(x_358);
x_359 = lean_ctor_get(x_357, 1);
lean_inc(x_359);
lean_dec(x_357);
x_360 = lean_ctor_get(x_356, 0);
lean_inc(x_360);
if (lean_is_exclusive(x_356)) {
 lean_ctor_release(x_356, 0);
 x_361 = x_356;
} else {
 lean_dec_ref(x_356);
 x_361 = lean_box(0);
}
x_362 = l_Lean_IR_ExplicitBoxing_getVarType(x_360, x_2, x_359);
x_363 = lean_ctor_get(x_362, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_362, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_362)) {
 lean_ctor_release(x_362, 0);
 lean_ctor_release(x_362, 1);
 x_365 = x_362;
} else {
 lean_dec_ref(x_362);
 x_365 = lean_box(0);
}
x_366 = l_Lean_IR_ExplicitBoxing_eqvTypes(x_363, x_358);
if (x_366 == 0)
{
lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; 
lean_dec(x_365);
x_367 = l___private_Lean_Compiler_IR_Boxing_0__Lean_IR_ExplicitBoxing_M_mkFresh___rarg(x_364);
x_368 = lean_ctor_get(x_367, 0);
lean_inc(x_368);
x_369 = lean_ctor_get(x_367, 1);
lean_inc(x_369);
lean_dec(x_367);
lean_inc(x_358);
x_370 = l_Lean_IR_ExplicitBoxing_mkCast(x_360, x_363, x_358, x_2, x_369);
lean_dec(x_2);
x_371 = lean_ctor_get(x_370, 0);
lean_inc(x_371);
x_372 = lean_ctor_get(x_370, 1);
lean_inc(x_372);
if (lean_is_exclusive(x_370)) {
 lean_ctor_release(x_370, 0);
 lean_ctor_release(x_370, 1);
 x_373 = x_370;
} else {
 lean_dec_ref(x_370);
 x_373 = lean_box(0);
}
lean_inc(x_368);
if (lean_is_scalar(x_361)) {
 x_374 = lean_alloc_ctor(0, 1, 0);
} else {
 x_374 = x_361;
}
lean_ctor_set(x_374, 0, x_368);
x_375 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_375, 0, x_374);
x_376 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_376, 0, x_368);
lean_ctor_set(x_376, 1, x_358);
lean_ctor_set(x_376, 2, x_371);
lean_ctor_set(x_376, 3, x_375);
if (lean_is_scalar(x_373)) {
 x_377 = lean_alloc_ctor(0, 2, 0);
} else {
 x_377 = x_373;
}
lean_ctor_set(x_377, 0, x_376);
lean_ctor_set(x_377, 1, x_372);
return x_377;
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; 
lean_dec(x_363);
lean_dec(x_358);
lean_dec(x_2);
if (lean_is_scalar(x_361)) {
 x_378 = lean_alloc_ctor(0, 1, 0);
} else {
 x_378 = x_361;
}
lean_ctor_set(x_378, 0, x_360);
x_379 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_379, 0, x_378);
if (lean_is_scalar(x_365)) {
 x_380 = lean_alloc_ctor(0, 2, 0);
} else {
 x_380 = x_365;
}
lean_ctor_set(x_380, 0, x_379);
lean_ctor_set(x_380, 1, x_364);
return x_380;
}
}
else
{
lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
lean_dec(x_2);
x_381 = lean_ctor_get(x_357, 1);
lean_inc(x_381);
if (lean_is_exclusive(x_357)) {
 lean_ctor_release(x_357, 0);
 lean_ctor_release(x_357, 1);
 x_382 = x_357;
} else {
 lean_dec_ref(x_357);
 x_382 = lean_box(0);
}
x_383 = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(x_383, 0, x_356);
if (lean_is_scalar(x_382)) {
 x_384 = lean_alloc_ctor(0, 2, 0);
} else {
 x_384 = x_382;
}
lean_ctor_set(x_384, 0, x_383);
lean_ctor_set(x_384, 1, x_381);
return x_384;
}
}
}
case 12:
{
uint8_t x_385; 
x_385 = !lean_is_exclusive(x_1);
if (x_385 == 0)
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; uint8_t x_394; 
x_386 = lean_ctor_get(x_1, 0);
x_387 = lean_ctor_get(x_1, 1);
x_388 = l_Lean_IR_ExplicitBoxing_getJPParams(x_386, x_2, x_3);
x_389 = lean_ctor_get(x_388, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_388, 1);
lean_inc(x_390);
lean_dec(x_388);
x_391 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__2(x_389, x_387, x_2, x_390);
lean_dec(x_387);
lean_dec(x_389);
x_392 = lean_ctor_get(x_391, 0);
lean_inc(x_392);
x_393 = lean_ctor_get(x_391, 1);
lean_inc(x_393);
lean_dec(x_391);
x_394 = !lean_is_exclusive(x_392);
if (x_394 == 0)
{
lean_object* x_395; lean_object* x_396; lean_object* x_397; 
x_395 = lean_ctor_get(x_392, 0);
x_396 = lean_ctor_get(x_392, 1);
lean_ctor_set(x_1, 1, x_395);
x_397 = l_Lean_IR_reshape(x_396, x_1);
lean_ctor_set(x_392, 1, x_393);
lean_ctor_set(x_392, 0, x_397);
return x_392;
}
else
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; 
x_398 = lean_ctor_get(x_392, 0);
x_399 = lean_ctor_get(x_392, 1);
lean_inc(x_399);
lean_inc(x_398);
lean_dec(x_392);
lean_ctor_set(x_1, 1, x_398);
x_400 = l_Lean_IR_reshape(x_399, x_1);
x_401 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_401, 0, x_400);
lean_ctor_set(x_401, 1, x_393);
return x_401;
}
}
else
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; 
x_402 = lean_ctor_get(x_1, 0);
x_403 = lean_ctor_get(x_1, 1);
lean_inc(x_403);
lean_inc(x_402);
lean_dec(x_1);
x_404 = l_Lean_IR_ExplicitBoxing_getJPParams(x_402, x_2, x_3);
x_405 = lean_ctor_get(x_404, 0);
lean_inc(x_405);
x_406 = lean_ctor_get(x_404, 1);
lean_inc(x_406);
lean_dec(x_404);
x_407 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__2(x_405, x_403, x_2, x_406);
lean_dec(x_403);
lean_dec(x_405);
x_408 = lean_ctor_get(x_407, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_407, 1);
lean_inc(x_409);
lean_dec(x_407);
x_410 = lean_ctor_get(x_408, 0);
lean_inc(x_410);
x_411 = lean_ctor_get(x_408, 1);
lean_inc(x_411);
if (lean_is_exclusive(x_408)) {
 lean_ctor_release(x_408, 0);
 lean_ctor_release(x_408, 1);
 x_412 = x_408;
} else {
 lean_dec_ref(x_408);
 x_412 = lean_box(0);
}
x_413 = lean_alloc_ctor(12, 2, 0);
lean_ctor_set(x_413, 0, x_402);
lean_ctor_set(x_413, 1, x_410);
x_414 = l_Lean_IR_reshape(x_411, x_413);
if (lean_is_scalar(x_412)) {
 x_415 = lean_alloc_ctor(0, 2, 0);
} else {
 x_415 = x_412;
}
lean_ctor_set(x_415, 0, x_414);
lean_ctor_set(x_415, 1, x_409);
return x_415;
}
}
default: 
{
lean_object* x_416; 
lean_dec(x_2);
x_416 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_416, 0, x_1);
lean_ctor_set(x_416, 1, x_3);
return x_416;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__3(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___at_Lean_IR_ExplicitBoxing_visitFnBody___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_run_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_IR_ExplicitBoxing_run_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_run_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_IR_ExplicitBoxing_run_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_2, x_4, x_5, x_6, x_7);
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
lean_object* l_Lean_IR_ExplicitBoxing_run_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_ExplicitBoxing_run_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_run___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_5);
x_9 = lean_nat_dec_lt(x_6, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_array_fget(x_5, x_6);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_6, x_11);
lean_dec(x_6);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_10, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_10, 3);
lean_inc(x_16);
x_17 = lean_unsigned_to_nat(0u);
lean_inc(x_10);
x_18 = l_Lean_IR_MaxIndex_collectDecl(x_10, x_17);
x_19 = !lean_is_exclusive(x_10);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_20 = lean_ctor_get(x_10, 3);
lean_dec(x_20);
x_21 = lean_ctor_get(x_10, 2);
lean_dec(x_21);
x_22 = lean_ctor_get(x_10, 1);
lean_dec(x_22);
x_23 = lean_ctor_get(x_10, 0);
lean_dec(x_23);
x_24 = lean_nat_add(x_18, x_11);
lean_dec(x_18);
x_25 = lean_box(0);
lean_inc(x_4);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_4);
lean_ctor_set(x_26, 2, x_25);
lean_ctor_set(x_26, 3, x_11);
lean_inc(x_3);
x_27 = l_Array_iterateMAux___at_Lean_IR_LocalContext_addParams___spec__1(x_14, x_14, x_17, x_3);
lean_inc(x_1);
lean_inc(x_2);
lean_inc(x_15);
lean_inc(x_13);
x_28 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_28, 0, x_13);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_28, 2, x_15);
lean_ctor_set(x_28, 3, x_2);
lean_ctor_set(x_28, 4, x_1);
x_29 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_16, x_28, x_26);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Array_iterateMAux___at_Array_append___spec__1___rarg(x_32, x_32, x_17, x_7);
lean_dec(x_32);
lean_ctor_set(x_10, 3, x_30);
x_34 = l_Lean_IR_Decl_elimDead(x_10);
x_35 = lean_array_push(x_33, x_34);
x_6 = x_12;
x_7 = x_35;
goto _start;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_10);
x_37 = lean_nat_add(x_18, x_11);
lean_dec(x_18);
x_38 = lean_box(0);
lean_inc(x_4);
x_39 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_4);
lean_ctor_set(x_39, 2, x_38);
lean_ctor_set(x_39, 3, x_11);
lean_inc(x_3);
x_40 = l_Array_iterateMAux___at_Lean_IR_LocalContext_addParams___spec__1(x_14, x_14, x_17, x_3);
lean_inc(x_1);
lean_inc(x_2);
lean_inc(x_15);
lean_inc(x_13);
x_41 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_41, 0, x_13);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_41, 2, x_15);
lean_ctor_set(x_41, 3, x_2);
lean_ctor_set(x_41, 4, x_1);
x_42 = l_Lean_IR_ExplicitBoxing_visitFnBody(x_16, x_41, x_39);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = l_Array_iterateMAux___at_Array_append___spec__1___rarg(x_45, x_45, x_17, x_7);
lean_dec(x_45);
x_47 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_47, 0, x_13);
lean_ctor_set(x_47, 1, x_14);
lean_ctor_set(x_47, 2, x_15);
lean_ctor_set(x_47, 3, x_43);
x_48 = l_Lean_IR_Decl_elimDead(x_47);
x_49 = lean_array_push(x_46, x_48);
x_6 = x_12;
x_7 = x_49;
goto _start;
}
}
else
{
lean_object* x_51; 
x_51 = lean_array_push(x_7, x_10);
x_6 = x_12;
x_7 = x_51;
goto _start;
}
}
}
}
lean_object* l_Lean_IR_ExplicitBoxing_run(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_box(0);
x_4 = l_Array_empty___closed__1;
x_5 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_run___spec__1(x_1, x_2, x_3, x_4, x_2, x_5, x_4);
lean_dec(x_2);
x_7 = l_Lean_IR_ExplicitBoxing_addBoxedVersions(x_1, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_run___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_iterateMAux___at_Lean_IR_ExplicitBoxing_run___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
lean_object* l_Lean_IR_explicitBoxing(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_IR_getEnv___rarg(x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_IR_ExplicitBoxing_run(x_6, x_1);
lean_ctor_set(x_4, 0, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = l_Lean_IR_ExplicitBoxing_run(x_8, x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
}
lean_object* l_Lean_IR_explicitBoxing___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_explicitBoxing(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Runtime(lean_object*);
lean_object* initialize_Lean_Compiler_ClosedTermCache(lean_object*);
lean_object* initialize_Lean_Compiler_ExternAttr(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Basic(lean_object*);
lean_object* initialize_Lean_Compiler_IR_CompilerM(lean_object*);
lean_object* initialize_Lean_Compiler_IR_FreeVars(lean_object*);
lean_object* initialize_Lean_Compiler_IR_ElimDeadVars(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_IR_Boxing(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Runtime(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ClosedTermCache(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExternAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_FreeVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_ElimDeadVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1 = _init_l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1);
l_Lean_IR_ExplicitBoxing_BoxingContext_f___default = _init_l_Lean_IR_ExplicitBoxing_BoxingContext_f___default();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_BoxingContext_f___default);
l_Lean_IR_ExplicitBoxing_BoxingContext_localCtx___default = _init_l_Lean_IR_ExplicitBoxing_BoxingContext_localCtx___default();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_BoxingContext_localCtx___default);
l_Lean_IR_ExplicitBoxing_BoxingContext_resultType___default = _init_l_Lean_IR_ExplicitBoxing_BoxingContext_resultType___default();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_BoxingContext_resultType___default);
l_Lean_IR_ExplicitBoxing_BoxingState_auxDecls___default = _init_l_Lean_IR_ExplicitBoxing_BoxingState_auxDecls___default();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_BoxingState_auxDecls___default);
l_Lean_IR_ExplicitBoxing_BoxingState_auxDeclCache___default = _init_l_Lean_IR_ExplicitBoxing_BoxingState_auxDeclCache___default();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_BoxingState_auxDeclCache___default);
l_Lean_IR_ExplicitBoxing_BoxingState_nextAuxId___default = _init_l_Lean_IR_ExplicitBoxing_BoxingState_nextAuxId___default();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_BoxingState_nextAuxId___default);
l_Lean_IR_ExplicitBoxing_mkCast___closed__1 = _init_l_Lean_IR_ExplicitBoxing_mkCast___closed__1();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_mkCast___closed__1);
l_Lean_IR_ExplicitBoxing_mkCast___closed__2 = _init_l_Lean_IR_ExplicitBoxing_mkCast___closed__2();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_mkCast___closed__2);
l_Lean_IR_ExplicitBoxing_mkCast___closed__3 = _init_l_Lean_IR_ExplicitBoxing_mkCast___closed__3();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_mkCast___closed__3);
l_Lean_IR_ExplicitBoxing_mkCast___closed__4 = _init_l_Lean_IR_ExplicitBoxing_mkCast___closed__4();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_mkCast___closed__4);
l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2___closed__1 = _init_l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2___closed__1();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___lambda__2___closed__1);
l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__1 = _init_l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__1();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__1);
l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__2 = _init_l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__2();
lean_mark_persistent(l_Lean_IR_ExplicitBoxing_castArgsIfNeededAux___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
