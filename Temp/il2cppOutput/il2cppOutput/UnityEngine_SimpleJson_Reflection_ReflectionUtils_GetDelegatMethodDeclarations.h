#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t662;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void GetDelegate__ctor_m3546 (GetDelegate_t662 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" Object_t * GetDelegate_Invoke_m3547 (GetDelegate_t662 * __this, Object_t * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_GetDelegate_t662(Il2CppObject* delegate, Object_t * ___source);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * GetDelegate_BeginInvoke_m3548 (GetDelegate_t662 * __this, Object_t * ___source, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * GetDelegate_EndInvoke_m3549 (GetDelegate_t662 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
