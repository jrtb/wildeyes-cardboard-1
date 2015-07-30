#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t716;
// UnityEngine.Object
struct Object_t79;
struct Object_t79_marshaled;
// System.String
struct String_t;

// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m3710 (ArgumentCache_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C" Object_t79 * ArgumentCache_get_unityObjectArgument_m3711 (ArgumentCache_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3712 (ArgumentCache_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C" int32_t ArgumentCache_get_intArgument_m3713 (ArgumentCache_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C" float ArgumentCache_get_floatArgument_m3714 (ArgumentCache_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C" String_t* ArgumentCache_get_stringArgument_m3715 (ArgumentCache_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C" bool ArgumentCache_get_boolArgument_m3716 (ArgumentCache_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern "C" void ArgumentCache_TidyAssemblyTypeName_m3717 (ArgumentCache_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m3718 (ArgumentCache_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m3719 (ArgumentCache_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
