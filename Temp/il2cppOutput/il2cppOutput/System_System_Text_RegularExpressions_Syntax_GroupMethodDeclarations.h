#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Group
struct Group_t1154;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1156;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1160;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1161;

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C" void Group__ctor_m5045 (Group_t1154 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Group_AppendExpression_m5046 (Group_t1154 * __this, Expression_t1156 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Group_Compile_m5047 (Group_t1154 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern "C" void Group_GetWidth_m5048 (Group_t1154 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t1161 * Group_GetAnchorInfo_m5049 (Group_t1154 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
