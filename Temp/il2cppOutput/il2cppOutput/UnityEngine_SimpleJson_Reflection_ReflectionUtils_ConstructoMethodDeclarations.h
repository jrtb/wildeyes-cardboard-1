#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t659;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ConstructorDelegate__ctor_m3554 (ConstructorDelegate_t659 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" Object_t * ConstructorDelegate_Invoke_m3555 (ConstructorDelegate_t659 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern TypeInfo Object_t_il2cpp_TypeInfo;
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * pinvoke_delegate_wrapper_ConstructorDelegate_t659(Il2CppObject* delegate, ObjectU5BU5D_t76* ___args);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C" Object_t * ConstructorDelegate_BeginInvoke_m3556 (ConstructorDelegate_t659 * __this, ObjectU5BU5D_t76* ___args, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ConstructorDelegate_EndInvoke_m3557 (ConstructorDelegate_t659 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
