#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.EventHandler
struct EventHandler_t1863;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1283;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandler__ctor_m10921 (EventHandler_t1863 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void EventHandler_Invoke_m10922 (EventHandler_t1863 * __this, Object_t * ___sender, EventArgs_t1283 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EventHandler_t1863(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t1283 * ___e);
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandler_BeginInvoke_m10923 (EventHandler_t1863 * __this, Object_t * ___sender, EventArgs_t1283 * ___e, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_EndInvoke_m10924 (EventHandler_t1863 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
