#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Activator
struct Activator_t1857;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Reflection.Binder
struct Binder_t790;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Object System.Activator::CreateInstance(System.Type)
extern "C" Object_t * Activator_CreateInstance_m10116 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
extern "C" Object_t * Activator_CreateInstance_m10117 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t76* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[],System.Object[])
extern "C" Object_t * Activator_CreateInstance_m10118 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t76* ___args, ObjectU5BU5D_t76* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
extern "C" Object_t * Activator_CreateInstance_m10119 (Object_t * __this /* static, unused */, Type_t * ___type, int32_t ___bindingAttr, Binder_t790 * ___binder, ObjectU5BU5D_t76* ___args, CultureInfo_t757 * ___culture, ObjectU5BU5D_t76* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
extern "C" Object_t * Activator_CreateInstance_m5288 (Object_t * __this /* static, unused */, Type_t * ___type, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckType(System.Type)
extern "C" void Activator_CheckType_m10120 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckAbstractType(System.Type)
extern "C" void Activator_CheckAbstractType_m10121 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstanceInternal(System.Type)
extern "C" Object_t * Activator_CreateInstanceInternal_m10122 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
