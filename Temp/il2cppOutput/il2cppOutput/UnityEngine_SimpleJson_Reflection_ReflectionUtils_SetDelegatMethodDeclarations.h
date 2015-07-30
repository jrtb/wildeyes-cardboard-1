#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t663;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SetDelegate__ctor_m3550 (SetDelegate_t663 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" void SetDelegate_Invoke_m3551 (SetDelegate_t663 * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t663(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SetDelegate_BeginInvoke_m3552 (SetDelegate_t663 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SetDelegate_EndInvoke_m3553 (SetDelegate_t663 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
