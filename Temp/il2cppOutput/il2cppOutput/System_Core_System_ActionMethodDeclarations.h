#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action
struct Action_t28;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" void Action__ctor_m4256 (Action_t28 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C" void Action_Invoke_m389 (Action_t28 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Action_t28(Il2CppObject* delegate);
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Action_BeginInvoke_m4257 (Action_t28 * __this, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::EndInvoke(System.IAsyncResult)
extern "C" void Action_EndInvoke_m4258 (Action_t28 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
