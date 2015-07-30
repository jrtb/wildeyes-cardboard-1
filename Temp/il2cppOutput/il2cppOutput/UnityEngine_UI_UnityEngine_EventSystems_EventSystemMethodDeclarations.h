#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t104;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t54;
// UnityEngine.GameObject
struct GameObject_t51;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t90;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t91;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
extern "C" void EventSystem__ctor_m656 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
extern "C" void EventSystem__cctor_m657 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" EventSystem_t104 * EventSystem_get_current_m658 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
extern "C" void EventSystem_set_current_m659 (Object_t * __this /* static, unused */, EventSystem_t104 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
extern "C" bool EventSystem_get_sendNavigationEvents_m660 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
extern "C" void EventSystem_set_sendNavigationEvents_m661 (EventSystem_t104 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
extern "C" int32_t EventSystem_get_pixelDragThreshold_m662 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
extern "C" void EventSystem_set_pixelDragThreshold_m663 (EventSystem_t104 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
extern "C" BaseInputModule_t54 * EventSystem_get_currentInputModule_m664 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
extern "C" GameObject_t51 * EventSystem_get_firstSelectedGameObject_m665 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
extern "C" void EventSystem_set_firstSelectedGameObject_m666 (EventSystem_t104 * __this, GameObject_t51 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C" GameObject_t51 * EventSystem_get_currentSelectedGameObject_m509 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
extern "C" GameObject_t51 * EventSystem_get_lastSelectedGameObject_m667 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
extern "C" void EventSystem_UpdateModules_m668 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
extern "C" bool EventSystem_get_alreadySelecting_m669 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventSystem_SetSelectedGameObject_m497 (EventSystem_t104 * __this, GameObject_t51 * ___selected, BaseEventData_t90 * ___pointer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
extern "C" BaseEventData_t90 * EventSystem_get_baseEventDataCache_m670 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
extern "C" void EventSystem_SetSelectedGameObject_m671 (EventSystem_t104 * __this, GameObject_t51 * ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
extern "C" int32_t EventSystem_RaycastComparer_m672 (Object_t * __this /* static, unused */, RaycastResult_t93  ___lhs, RaycastResult_t93  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void EventSystem_RaycastAll_m503 (EventSystem_t104 * __this, PointerEventData_t52 * ___eventData, List_1_t91 * ___raycastResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
extern "C" bool EventSystem_IsPointerOverGameObject_m673 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
extern "C" bool EventSystem_IsPointerOverGameObject_m674 (EventSystem_t104 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
extern "C" void EventSystem_OnEnable_m675 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
extern "C" void EventSystem_OnDisable_m676 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
extern "C" void EventSystem_TickModules_m677 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
extern "C" void EventSystem_Update_m678 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
extern "C" void EventSystem_ChangeEventModule_m679 (EventSystem_t104 * __this, BaseInputModule_t54 * ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
extern "C" String_t* EventSystem_ToString_m680 (EventSystem_t104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
