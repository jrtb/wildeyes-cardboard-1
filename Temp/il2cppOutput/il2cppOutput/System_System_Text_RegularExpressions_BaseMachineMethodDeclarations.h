#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t1111;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t111;
// System.Text.RegularExpressions.Match
struct Match_t1109;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t1110;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1112;

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C" void BaseMachine__ctor_m4761 (BaseMachine_t1111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_Replace_m4762 (BaseMachine_t1111 * __this, Regex_t111 * ___regex, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t1109 * BaseMachine_Scan_m4763 (BaseMachine_t1111 * __this, Regex_t111 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
extern "C" String_t* BaseMachine_LTRReplace_m4764 (BaseMachine_t1111 * __this, Regex_t111 * ___regex, String_t* ___input, MatchAppendEvaluator_t1110 * ___evaluator, int32_t ___count, int32_t ___startat, bool ___needs_groups_or_captures, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_RTLReplace_m4765 (BaseMachine_t1111 * __this, Regex_t111 * ___regex, String_t* ___input, MatchEvaluator_t1112 * ___evaluator, int32_t ___count, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
