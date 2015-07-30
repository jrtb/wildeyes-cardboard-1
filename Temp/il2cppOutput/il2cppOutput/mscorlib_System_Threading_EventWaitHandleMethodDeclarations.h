#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.EventWaitHandle
struct EventWaitHandle_t1845;
// System.Threading.EventResetMode
#include "mscorlib_System_Threading_EventResetMode.h"

// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
extern "C" void EventWaitHandle__ctor_m10060 (EventWaitHandle_t1845 * __this, bool ___initialState, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::IsManualReset(System.Threading.EventResetMode)
extern "C" bool EventWaitHandle_IsManualReset_m10061 (EventWaitHandle_t1845 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Reset()
extern "C" bool EventWaitHandle_Reset_m6495 (EventWaitHandle_t1845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" bool EventWaitHandle_Set_m6493 (EventWaitHandle_t1845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
