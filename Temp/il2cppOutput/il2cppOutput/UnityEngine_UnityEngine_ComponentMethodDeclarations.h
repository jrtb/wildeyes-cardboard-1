#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Component
struct Component_t71;
// UnityEngine.Transform
struct Transform_t38;
// UnityEngine.GameObject
struct GameObject_t51;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t335;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m3155 (Component_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t38 * Component_get_transform_m283 (Component_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t51 * Component_get_gameObject_m308 (Component_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t71 * Component_GetComponent_m2341 (Component_t71 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m3156 (Component_t71 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C" Component_t71 * Component_GetComponentInParent_m3157 (Component_t71 * __this, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m3158 (Component_t71 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m1996 (Component_t71 * __this, Type_t * ___type, List_1_t335 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
