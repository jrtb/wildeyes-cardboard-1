#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t1110;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Match
struct Match_t1109;
// System.Text.StringBuilder
struct StringBuilder_t353;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::.ctor(System.Object,System.IntPtr)
extern "C" void MatchAppendEvaluator__ctor_m4757 (MatchAppendEvaluator_t1110 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::Invoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C" void MatchAppendEvaluator_Invoke_m4758 (MatchAppendEvaluator_t1110 * __this, Match_t1109 * ___match, StringBuilder_t353 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
extern "C" void pinvoke_delegate_wrapper_MatchAppendEvaluator_t1110(Il2CppObject* delegate, Match_t1109 * ___match, StringBuilder_t353 * ___sb);
// System.IAsyncResult System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder,System.AsyncCallback,System.Object)
extern "C" Object_t * MatchAppendEvaluator_BeginInvoke_m4759 (MatchAppendEvaluator_t1110 * __this, Match_t1109 * ___match, StringBuilder_t353 * ___sb, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::EndInvoke(System.IAsyncResult)
extern "C" void MatchAppendEvaluator_EndInvoke_m4760 (MatchAppendEvaluator_t1110 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
