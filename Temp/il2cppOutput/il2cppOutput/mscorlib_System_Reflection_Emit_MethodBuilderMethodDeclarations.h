#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t1589;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1409;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t783;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t790;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.Exception
struct Exception_t110;
// System.Type[]
struct TypeU5BU5D_t658;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern "C" bool MethodBuilder_get_ContainsGenericParameters_m8649 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1585  MethodBuilder_get_MethodHandle_m8650 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern "C" Type_t * MethodBuilder_get_ReturnType_m8651 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern "C" Type_t * MethodBuilder_get_ReflectedType_m8652 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C" Type_t * MethodBuilder_get_DeclaringType_m8653 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern "C" String_t* MethodBuilder_get_Name_m8654 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern "C" int32_t MethodBuilder_get_Attributes_m8655 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern "C" int32_t MethodBuilder_get_CallingConvention_m8656 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern "C" MethodInfo_t * MethodBuilder_GetBaseDefinition_m8657 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t783* MethodBuilder_GetParameters_m8658 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MethodBuilder_Invoke_m8659 (MethodBuilder_t1589 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t790 * ___binder, ObjectU5BU5D_t76* ___parameters, CultureInfo_t757 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool MethodBuilder_IsDefined_m8660 (MethodBuilder_t1589 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t76* MethodBuilder_GetCustomAttributes_m8661 (MethodBuilder_t1589 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t76* MethodBuilder_GetCustomAttributes_m8662 (MethodBuilder_t1589 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern "C" String_t* MethodBuilder_ToString_m8663 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern "C" bool MethodBuilder_Equals_m8664 (MethodBuilder_t1589 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern "C" int32_t MethodBuilder_GetHashCode_m8665 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern "C" Exception_t110 * MethodBuilder_NotSupported_m8666 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern "C" MethodInfo_t * MethodBuilder_MakeGenericMethod_m8667 (MethodBuilder_t1589 * __this, TypeU5BU5D_t658* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern "C" bool MethodBuilder_get_IsGenericMethodDefinition_m8668 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern "C" bool MethodBuilder_get_IsGenericMethod_m8669 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t658* MethodBuilder_GetGenericArguments_m8670 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern "C" Module_t1409 * MethodBuilder_get_Module_m8671 (MethodBuilder_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
