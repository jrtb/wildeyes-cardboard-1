#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.ReplacementEvaluator
struct ReplacementEvaluator_t1158;
// System.Text.RegularExpressions.Regex
struct Regex_t111;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t1109;
// System.Text.StringBuilder
struct StringBuilder_t353;

// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern "C" void ReplacementEvaluator__ctor_m5024 (ReplacementEvaluator_t1158 * __this, Regex_t111 * ___regex, String_t* ___replacement, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern "C" String_t* ReplacementEvaluator_Evaluate_m5025 (ReplacementEvaluator_t1158 * __this, Match_t1109 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C" void ReplacementEvaluator_EvaluateAppend_m5026 (ReplacementEvaluator_t1158 * __this, Match_t1109 * ___match, StringBuilder_t353 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern "C" bool ReplacementEvaluator_get_NeedsGroupsOrCaptures_m5027 (ReplacementEvaluator_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern "C" void ReplacementEvaluator_Ensure_m5028 (ReplacementEvaluator_t1158 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern "C" void ReplacementEvaluator_AddFromReplacement_m5029 (ReplacementEvaluator_t1158 * __this, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern "C" void ReplacementEvaluator_AddInt_m5030 (ReplacementEvaluator_t1158 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern "C" void ReplacementEvaluator_Compile_m5031 (ReplacementEvaluator_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern "C" int32_t ReplacementEvaluator_CompileTerm_m5032 (ReplacementEvaluator_t1158 * __this, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
