#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t1168;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1163;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1157;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t1167;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1160;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m5081 (CaptureAssertion_t1168 * __this, Literal_t1167 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m5082 (CaptureAssertion_t1168 * __this, CapturingGroup_t1163 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m5083 (CaptureAssertion_t1168 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m5084 (CaptureAssertion_t1168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t1157 * CaptureAssertion_get_Alternate_m5085 (CaptureAssertion_t1168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
