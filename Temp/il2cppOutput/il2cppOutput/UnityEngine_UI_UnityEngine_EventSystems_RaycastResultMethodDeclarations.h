#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t93;
// UnityEngine.GameObject
struct GameObject_t51;
// System.String
struct String_t;

// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
extern "C" GameObject_t51 * RaycastResult_get_gameObject_m508 (RaycastResult_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::set_gameObject(UnityEngine.GameObject)
extern "C" void RaycastResult_set_gameObject_m741 (RaycastResult_t93 * __this, GameObject_t51 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.RaycastResult::get_isValid()
extern "C" bool RaycastResult_get_isValid_m742 (RaycastResult_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::Clear()
extern "C" void RaycastResult_Clear_m743 (RaycastResult_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.RaycastResult::ToString()
extern "C" String_t* RaycastResult_ToString_m744 (RaycastResult_t93 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
