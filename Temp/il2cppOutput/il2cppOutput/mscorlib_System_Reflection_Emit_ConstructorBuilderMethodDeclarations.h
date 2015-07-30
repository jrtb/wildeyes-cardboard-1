#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1584;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1582;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1409;
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
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m8534 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t1582 * ConstructorBuilder_get_TypeBuilder_m8535 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t783* ConstructorBuilder_GetParameters_m8536 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern "C" ParameterInfoU5BU5D_t783* ConstructorBuilder_GetParametersInternal_m8537 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m8538 (ConstructorBuilder_t1584 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t790 * ___binder, ObjectU5BU5D_t76* ___parameters, CultureInfo_t757 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m8539 (ConstructorBuilder_t1584 * __this, int32_t ___invokeAttr, Binder_t790 * ___binder, ObjectU5BU5D_t76* ___parameters, CultureInfo_t757 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1585  ConstructorBuilder_get_MethodHandle_m8540 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C" int32_t ConstructorBuilder_get_Attributes_m8541 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m8542 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m8543 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern "C" String_t* ConstructorBuilder_get_Name_m8544 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool ConstructorBuilder_IsDefined_m8545 (ConstructorBuilder_t1584 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t76* ConstructorBuilder_GetCustomAttributes_m8546 (ConstructorBuilder_t1584 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t76* ConstructorBuilder_GetCustomAttributes_m8547 (ConstructorBuilder_t1584 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C" Module_t1409 * ConstructorBuilder_get_Module_m8548 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern "C" String_t* ConstructorBuilder_ToString_m8549 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m8550 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C" Exception_t110 * ConstructorBuilder_not_supported_m8551 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C" Exception_t110 * ConstructorBuilder_not_created_m8552 (ConstructorBuilder_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
