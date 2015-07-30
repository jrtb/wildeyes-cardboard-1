#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Module
struct Module_t1409;
// System.Reflection.Assembly
struct Assembly_t1194;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.Module::.ctor()
extern "C" void Module__ctor_m8853 (Module_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::.cctor()
extern "C" void Module__cctor_m8854 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C" Assembly_t1194 * Module_get_Assembly_m8855 (Module_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::get_ScopeName()
extern "C" String_t* Module_get_ScopeName_m8856 (Module_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t76* Module_GetCustomAttributes_m8857 (Module_t1409 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Module_GetObjectData_m8858 (Module_t1409 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
extern "C" bool Module_IsDefined_m8859 (Module_t1409 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsResource()
extern "C" bool Module_IsResource_m8860 (Module_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::ToString()
extern "C" String_t* Module_ToString_m8861 (Module_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_m8862 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_ignore_case_m8863 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
