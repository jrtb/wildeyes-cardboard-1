#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.BackslashNumber
struct BackslashNumber_t1172;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1007;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1160;

// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
extern "C" void BackslashNumber__ctor_m5116 (BackslashNumber_t1172 * __this, bool ___ignore, bool ___ecma, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
extern "C" bool BackslashNumber_ResolveReference_m5117 (BackslashNumber_t1172 * __this, String_t* ___num_str, Hashtable_t1007 * ___groups, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void BackslashNumber_Compile_m5118 (BackslashNumber_t1172 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
