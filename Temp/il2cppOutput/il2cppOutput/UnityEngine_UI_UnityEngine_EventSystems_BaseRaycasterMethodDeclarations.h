#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t185;
// UnityEngine.Camera
struct Camera_t35;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t91;

// System.Void UnityEngine.EventSystems.BaseRaycaster::.ctor()
extern "C" void BaseRaycaster__ctor_m862 (BaseRaycaster_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
// UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera()
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_priority()
extern "C" int32_t BaseRaycaster_get_priority_m863 (BaseRaycaster_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_sortOrderPriority()
extern "C" int32_t BaseRaycaster_get_sortOrderPriority_m864 (BaseRaycaster_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_renderOrderPriority()
extern "C" int32_t BaseRaycaster_get_renderOrderPriority_m865 (BaseRaycaster_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnEnable()
extern "C" void BaseRaycaster_OnEnable_m866 (BaseRaycaster_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnDisable()
extern "C" void BaseRaycaster_OnDisable_m867 (BaseRaycaster_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
