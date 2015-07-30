#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1864;
// System.Object
struct Object_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t1930;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UnhandledExceptionEventHandler__ctor_m10929 (UnhandledExceptionEventHandler_t1864 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" void UnhandledExceptionEventHandler_Invoke_m10930 (UnhandledExceptionEventHandler_t1864 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t1930 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t1864(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t1930 * ___e);
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m10931 (UnhandledExceptionEventHandler_t1864 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t1930 * ___e, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m10932 (UnhandledExceptionEventHandler_t1864 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
