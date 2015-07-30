#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GameObject
struct GameObject_t51;
// UnityEngine.Transform
struct Transform_t38;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t71;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" void GameObject__ctor_m361 (GameObject_t51 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t71 * GameObject_GetComponent_m3159 (GameObject_t51 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void GameObject_GetComponentFastPath_m3160 (GameObject_t51 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
extern "C" Component_t71 * GameObject_GetComponentInParent_m3161 (GameObject_t51 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" Array_t * GameObject_GetComponentsInternal_m3162 (GameObject_t51 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t38 * GameObject_get_transform_m362 (GameObject_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m2163 (GameObject_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" void GameObject_set_layer_m2164 (GameObject_t51 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m498 (GameObject_t51 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m309 (GameObject_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m3163 (GameObject_t51 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t71 * GameObject_Internal_AddComponentWithType_m3164 (GameObject_t51 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t71 * GameObject_AddComponent_m3165 (GameObject_t51 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m3166 (Object_t * __this /* static, unused */, GameObject_t51 * ___mono, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
