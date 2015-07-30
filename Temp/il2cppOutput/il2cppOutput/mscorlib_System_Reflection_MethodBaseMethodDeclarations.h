#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MethodBase
struct MethodBase_t772;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t783;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Reflection.Binder
struct Binder_t790;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.Type[]
struct TypeU5BU5D_t658;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.MethodBase::.ctor()
extern "C" void MethodBase__ctor_m8831 (MethodBase_t772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern "C" MethodBase_t772 * MethodBase_GetMethodFromHandleNoGenericCheck_m8832 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1585  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t772 * MethodBase_GetMethodFromIntPtr_m8833 (Object_t * __this /* static, unused */, IntPtr_t ___handle, IntPtr_t ___declaringType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern "C" MethodBase_t772 * MethodBase_GetMethodFromHandle_m8834 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1585  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t772 * MethodBase_GetMethodFromHandleInternalType_m8835 (Object_t * __this /* static, unused */, IntPtr_t ___method_handle, IntPtr_t ___type_handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters()
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C" Object_t * MethodBase_Invoke_m3978 (MethodBase_t772 * __this, Object_t * ___obj, ObjectU5BU5D_t76* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle()
// System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes()
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C" int32_t MethodBase_get_CallingConvention_m8836 (MethodBase_t772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C" bool MethodBase_get_IsPublic_m3951 (MethodBase_t772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" bool MethodBase_get_IsStatic_m3950 (MethodBase_t772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C" bool MethodBase_get_IsVirtual_m8837 (MethodBase_t772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern "C" TypeU5BU5D_t658* MethodBase_GetGenericArguments_m8838 (MethodBase_t772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern "C" bool MethodBase_get_ContainsGenericParameters_m8839 (MethodBase_t772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C" bool MethodBase_get_IsGenericMethodDefinition_m8840 (MethodBase_t772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern "C" bool MethodBase_get_IsGenericMethod_m8841 (MethodBase_t772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
