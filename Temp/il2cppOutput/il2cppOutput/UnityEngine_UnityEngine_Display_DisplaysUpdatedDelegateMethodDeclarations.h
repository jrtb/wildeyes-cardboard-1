#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t571;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void DisplaysUpdatedDelegate__ctor_m3106 (DisplaysUpdatedDelegate_t571 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m3107 (DisplaysUpdatedDelegate_t571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t571(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m3108 (DisplaysUpdatedDelegate_t571 * __this, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m3109 (DisplaysUpdatedDelegate_t571 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
