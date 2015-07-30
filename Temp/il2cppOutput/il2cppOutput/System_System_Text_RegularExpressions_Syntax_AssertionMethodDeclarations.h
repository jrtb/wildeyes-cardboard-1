#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t1155;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1156;

// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
extern "C" void Assertion__ctor_m5075 (Assertion_t1155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
extern "C" Expression_t1156 * Assertion_get_TrueExpression_m5076 (Assertion_t1155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_TrueExpression_m5077 (Assertion_t1155 * __this, Expression_t1156 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
extern "C" Expression_t1156 * Assertion_get_FalseExpression_m5078 (Assertion_t1155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_FalseExpression_m5079 (Assertion_t1155 * __this, Expression_t1156 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
extern "C" void Assertion_GetWidth_m5080 (Assertion_t1155 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
