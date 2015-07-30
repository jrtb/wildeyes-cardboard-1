#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty
struct MonoProperty_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1410;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t783;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1623;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t790;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.Type[]
struct TypeU5BU5D_t658;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoProperty::.ctor()
extern "C" void MonoProperty__ctor_m8958 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C" void MonoProperty_CachePropertyInfo_m8959 (MonoProperty_t * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern "C" int32_t MonoProperty_get_Attributes_m8960 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern "C" bool MonoProperty_get_CanRead_m8961 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern "C" bool MonoProperty_get_CanWrite_m8962 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C" Type_t * MonoProperty_get_PropertyType_m8963 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C" Type_t * MonoProperty_get_ReflectedType_m8964 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern "C" Type_t * MonoProperty_get_DeclaringType_m8965 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::get_Name()
extern "C" String_t* MonoProperty_get_Name_m8966 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern "C" MethodInfoU5BU5D_t1410* MonoProperty_GetAccessors_m8967 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetGetMethod_m8968 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern "C" ParameterInfoU5BU5D_t783* MonoProperty_GetIndexParameters_m8969 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetSetMethod_m8970 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoProperty_IsDefined_m8971 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t76* MonoProperty_GetCustomAttributes_m8972 (MonoProperty_t * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t76* MonoProperty_GetCustomAttributes_m8973 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern "C" GetterAdapter_t1623 * MonoProperty_CreateGetterDelegate_m8974 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern "C" Object_t * MonoProperty_GetValue_m8975 (MonoProperty_t * __this, Object_t * ___obj, ObjectU5BU5D_t76* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoProperty_GetValue_m8976 (MonoProperty_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t790 * ___binder, ObjectU5BU5D_t76* ___index, CultureInfo_t757 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" void MonoProperty_SetValue_m8977 (MonoProperty_t * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t790 * ___binder, ObjectU5BU5D_t76* ___index, CultureInfo_t757 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::ToString()
extern "C" String_t* MonoProperty_ToString_m8978 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern "C" TypeU5BU5D_t658* MonoProperty_GetOptionalCustomModifiers_m8979 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern "C" TypeU5BU5D_t658* MonoProperty_GetRequiredCustomModifiers_m8980 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoProperty_GetObjectData_m8981 (MonoProperty_t * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
