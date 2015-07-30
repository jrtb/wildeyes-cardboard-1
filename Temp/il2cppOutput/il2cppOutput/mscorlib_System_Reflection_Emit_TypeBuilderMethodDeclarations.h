#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1582;
// System.Reflection.Assembly
struct Assembly_t1194;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1409;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t664;
// System.Reflection.Binder
struct Binder_t790;
// System.Type[]
struct TypeU5BU5D_t658;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t791;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t781;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t787;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1410;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t785;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.String[]
struct StringU5BU5D_t87;
// System.Exception
struct Exception_t110;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m8696 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t1194 * TypeBuilder_get_Assembly_m8697 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m8698 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m8699 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m8700 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m8701 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m8702 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t1409 * TypeBuilder_get_Module_m8703 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m8704 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m8705 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m8706 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t664 * TypeBuilder_GetConstructorImpl_m8707 (TypeBuilder_t1582 * __this, int32_t ___bindingAttr, Binder_t790 * ___binder, int32_t ___callConvention, TypeU5BU5D_t658* ___types, ParameterModifierU5BU5D_t791* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeBuilder_IsDefined_m8708 (TypeBuilder_t1582 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t76* TypeBuilder_GetCustomAttributes_m8709 (TypeBuilder_t1582 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t76* TypeBuilder_GetCustomAttributes_m8710 (TypeBuilder_t1582 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t781* TypeBuilder_GetConstructors_m8711 (TypeBuilder_t1582 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t781* TypeBuilder_GetConstructorsInternal_m8712 (TypeBuilder_t1582 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C" Type_t * TypeBuilder_GetElementType_m8713 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeBuilder_GetEvent_m8714 (TypeBuilder_t1582 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeBuilder_GetField_m8715 (TypeBuilder_t1582 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t787* TypeBuilder_GetFields_m8716 (TypeBuilder_t1582 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t658* TypeBuilder_GetInterfaces_m8717 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t1410* TypeBuilder_GetMethodsByName_m8718 (TypeBuilder_t1582 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1410* TypeBuilder_GetMethods_m8719 (TypeBuilder_t1582 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * TypeBuilder_GetMethodImpl_m8720 (TypeBuilder_t1582 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t790 * ___binder, int32_t ___callConvention, TypeU5BU5D_t658* ___types, ParameterModifierU5BU5D_t791* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t785* TypeBuilder_GetProperties_m8721 (TypeBuilder_t1582 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeBuilder_GetPropertyImpl_m8722 (TypeBuilder_t1582 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t790 * ___binder, Type_t * ___returnType, TypeU5BU5D_t658* ___types, ParameterModifierU5BU5D_t791* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C" bool TypeBuilder_HasElementTypeImpl_m8723 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m8724 (TypeBuilder_t1582 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t790 * ___binder, Object_t * ___target, ObjectU5BU5D_t76* ___args, ParameterModifierU5BU5D_t791* ___modifiers, CultureInfo_t757 * ___culture, StringU5BU5D_t87* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C" bool TypeBuilder_IsArrayImpl_m8725 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C" bool TypeBuilder_IsByRefImpl_m8726 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C" bool TypeBuilder_IsPointerImpl_m8727 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C" bool TypeBuilder_IsPrimitiveImpl_m8728 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C" bool TypeBuilder_IsValueTypeImpl_m8729 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * TypeBuilder_MakeGenericType_m8730 (TypeBuilder_t1582 * __this, TypeU5BU5D_t658* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1408  TypeBuilder_get_TypeHandle_m8731 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m8732 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m8733 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C" Exception_t110 * TypeBuilder_not_supported_m8734 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m8735 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C" String_t* TypeBuilder_ToString_m8736 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C" bool TypeBuilder_IsAssignableFrom_m8737 (TypeBuilder_t1582 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C" bool TypeBuilder_IsSubclassOf_m8738 (TypeBuilder_t1582 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C" bool TypeBuilder_IsAssignableTo_m8739 (TypeBuilder_t1582 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t658* TypeBuilder_GetGenericArguments_m8740 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m8741 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m8742 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C" bool TypeBuilder_get_IsGenericParameter_m8743 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m8744 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C" bool TypeBuilder_get_IsGenericType_m8745 (TypeBuilder_t1582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
