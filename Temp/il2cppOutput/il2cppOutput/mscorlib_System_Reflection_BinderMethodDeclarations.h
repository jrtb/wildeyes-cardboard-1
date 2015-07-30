#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t790;
// System.Reflection.MethodBase
struct MethodBase_t772;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1606;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t791;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.String[]
struct StringU5BU5D_t87;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t658;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t785;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t783;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m8800 (Binder_t790 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m8801 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
// System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
// System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object)
// System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.PropertyInfo System.Reflection.Binder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t790 * Binder_get_DefaultBinder_m8802 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m8803 (Object_t * __this /* static, unused */, Binder_t790 * ___binder, ObjectU5BU5D_t76* ___args, ParameterInfoU5BU5D_t783* ___pinfo, CultureInfo_t757 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m8804 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t772 * Binder_FindMostDerivedMatch_m8805 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1606* ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
