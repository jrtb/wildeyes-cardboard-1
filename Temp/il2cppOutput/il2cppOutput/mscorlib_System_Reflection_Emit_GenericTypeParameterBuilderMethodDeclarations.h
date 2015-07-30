#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t1590;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t1194;
// System.String
struct String_t;
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
// System.Object[]
struct ObjectU5BU5D_t76;
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

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern "C" bool GenericTypeParameterBuilder_IsSubclassOf_m8602 (GenericTypeParameterBuilder_t1590 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern "C" int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m8603 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t664 * GenericTypeParameterBuilder_GetConstructorImpl_m8604 (GenericTypeParameterBuilder_t1590 * __this, int32_t ___bindingAttr, Binder_t790 * ___binder, int32_t ___callConvention, TypeU5BU5D_t658* ___types, ParameterModifierU5BU5D_t791* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t781* GenericTypeParameterBuilder_GetConstructors_m8605 (GenericTypeParameterBuilder_t1590 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * GenericTypeParameterBuilder_GetEvent_m8606 (GenericTypeParameterBuilder_t1590 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * GenericTypeParameterBuilder_GetField_m8607 (GenericTypeParameterBuilder_t1590 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t787* GenericTypeParameterBuilder_GetFields_m8608 (GenericTypeParameterBuilder_t1590 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t658* GenericTypeParameterBuilder_GetInterfaces_m8609 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1410* GenericTypeParameterBuilder_GetMethods_m8610 (GenericTypeParameterBuilder_t1590 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m8611 (GenericTypeParameterBuilder_t1590 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t790 * ___binder, int32_t ___callConvention, TypeU5BU5D_t658* ___types, ParameterModifierU5BU5D_t791* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t785* GenericTypeParameterBuilder_GetProperties_m8612 (GenericTypeParameterBuilder_t1590 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m8613 (GenericTypeParameterBuilder_t1590 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t790 * ___binder, Type_t * ___returnType, TypeU5BU5D_t658* ___types, ParameterModifierU5BU5D_t791* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern "C" bool GenericTypeParameterBuilder_HasElementTypeImpl_m8614 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern "C" bool GenericTypeParameterBuilder_IsAssignableFrom_m8615 (GenericTypeParameterBuilder_t1590 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern "C" bool GenericTypeParameterBuilder_IsInstanceOfType_m8616 (GenericTypeParameterBuilder_t1590 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern "C" bool GenericTypeParameterBuilder_IsArrayImpl_m8617 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern "C" bool GenericTypeParameterBuilder_IsByRefImpl_m8618 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern "C" bool GenericTypeParameterBuilder_IsPointerImpl_m8619 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern "C" bool GenericTypeParameterBuilder_IsPrimitiveImpl_m8620 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern "C" bool GenericTypeParameterBuilder_IsValueTypeImpl_m8621 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * GenericTypeParameterBuilder_InvokeMember_m8622 (GenericTypeParameterBuilder_t1590 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t790 * ___binder, Object_t * ___target, ObjectU5BU5D_t76* ___args, ParameterModifierU5BU5D_t791* ___modifiers, CultureInfo_t757 * ___culture, StringU5BU5D_t87* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern "C" Type_t * GenericTypeParameterBuilder_GetElementType_m8623 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern "C" Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m8624 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern "C" Assembly_t1194 * GenericTypeParameterBuilder_get_Assembly_m8625 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern "C" String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m8626 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C" Type_t * GenericTypeParameterBuilder_get_BaseType_m8627 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern "C" String_t* GenericTypeParameterBuilder_get_FullName_m8628 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool GenericTypeParameterBuilder_IsDefined_m8629 (GenericTypeParameterBuilder_t1590 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t76* GenericTypeParameterBuilder_GetCustomAttributes_m8630 (GenericTypeParameterBuilder_t1590 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t76* GenericTypeParameterBuilder_GetCustomAttributes_m8631 (GenericTypeParameterBuilder_t1590 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern "C" String_t* GenericTypeParameterBuilder_get_Name_m8632 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern "C" String_t* GenericTypeParameterBuilder_get_Namespace_m8633 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern "C" Module_t1409 * GenericTypeParameterBuilder_get_Module_m8634 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C" Type_t * GenericTypeParameterBuilder_get_DeclaringType_m8635 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern "C" Type_t * GenericTypeParameterBuilder_get_ReflectedType_m8636 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1408  GenericTypeParameterBuilder_get_TypeHandle_m8637 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t658* GenericTypeParameterBuilder_GetGenericArguments_m8638 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern "C" Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m8639 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern "C" bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m8640 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericParameter_m8641 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericType_m8642 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m8643 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern "C" Exception_t110 * GenericTypeParameterBuilder_not_supported_m8644 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern "C" String_t* GenericTypeParameterBuilder_ToString_m8645 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern "C" bool GenericTypeParameterBuilder_Equals_m8646 (GenericTypeParameterBuilder_t1590 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern "C" int32_t GenericTypeParameterBuilder_GetHashCode_m8647 (GenericTypeParameterBuilder_t1590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * GenericTypeParameterBuilder_MakeGenericType_m8648 (GenericTypeParameterBuilder_t1590 * __this, TypeU5BU5D_t658* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
