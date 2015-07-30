#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoCMethod
struct MonoCMethod_t1619;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t783;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Exception
struct Exception_t110;
// System.Reflection.Binder
struct Binder_t790;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C" void MonoCMethod__ctor_m8936 (MonoCMethod_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t783* MonoCMethod_GetParameters_m8937 (MonoCMethod_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoCMethod_InternalInvoke_m8938 (MonoCMethod_t1619 * __this, Object_t * ___obj, ObjectU5BU5D_t76* ___parameters, Exception_t110 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m8939 (MonoCMethod_t1619 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t790 * ___binder, ObjectU5BU5D_t76* ___parameters, CultureInfo_t757 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m8940 (MonoCMethod_t1619 * __this, int32_t ___invokeAttr, Binder_t790 * ___binder, ObjectU5BU5D_t76* ___parameters, CultureInfo_t757 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1585  MonoCMethod_get_MethodHandle_m8941 (MonoCMethod_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern "C" int32_t MonoCMethod_get_Attributes_m8942 (MonoCMethod_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C" int32_t MonoCMethod_get_CallingConvention_m8943 (MonoCMethod_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C" Type_t * MonoCMethod_get_ReflectedType_m8944 (MonoCMethod_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C" Type_t * MonoCMethod_get_DeclaringType_m8945 (MonoCMethod_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C" String_t* MonoCMethod_get_Name_m8946 (MonoCMethod_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoCMethod_IsDefined_m8947 (MonoCMethod_t1619 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t76* MonoCMethod_GetCustomAttributes_m8948 (MonoCMethod_t1619 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t76* MonoCMethod_GetCustomAttributes_m8949 (MonoCMethod_t1619 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
extern "C" String_t* MonoCMethod_ToString_m8950 (MonoCMethod_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoCMethod_GetObjectData_m8951 (MonoCMethod_t1619 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
