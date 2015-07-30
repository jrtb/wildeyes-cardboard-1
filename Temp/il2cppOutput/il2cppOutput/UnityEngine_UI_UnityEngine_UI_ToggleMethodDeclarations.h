#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Toggle
struct Toggle_t309;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t308;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t90;
// UnityEngine.Transform
struct Transform_t38;
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Toggle::.ctor()
extern "C" void Toggle__ctor_m1539 (Toggle_t309 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::get_group()
extern "C" ToggleGroup_t308 * Toggle_get_group_m1540 (Toggle_t309 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
extern "C" void Toggle_set_group_m1541 (Toggle_t309 * __this, ToggleGroup_t308 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Toggle_Rebuild_m1542 (Toggle_t309 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnEnable()
extern "C" void Toggle_OnEnable_m1543 (Toggle_t309 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDisable()
extern "C" void Toggle_OnDisable_m1544 (Toggle_t309 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::SetToggleGroup(UnityEngine.UI.ToggleGroup,System.Boolean)
extern "C" void Toggle_SetToggleGroup_m1545 (Toggle_t309 * __this, ToggleGroup_t308 * ___newGroup, bool ___setMemberValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C" bool Toggle_get_isOn_m1546 (Toggle_t309 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C" void Toggle_set_isOn_m1547 (Toggle_t309 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean)
extern "C" void Toggle_Set_m1548 (Toggle_t309 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean,System.Boolean)
extern "C" void Toggle_Set_m1549 (Toggle_t309 * __this, bool ___value, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::PlayEffect(System.Boolean)
extern "C" void Toggle_PlayEffect_m1550 (Toggle_t309 * __this, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Start()
extern "C" void Toggle_Start_m1551 (Toggle_t309 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::InternalToggle()
extern "C" void Toggle_InternalToggle_m1552 (Toggle_t309 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Toggle_OnPointerClick_m1553 (Toggle_t309 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Toggle_OnSubmit_m1554 (Toggle_t309 * __this, BaseEventData_t90 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Toggle_UnityEngine_UI_ICanvasElement_IsDestroyed_m1555 (Toggle_t309 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t38 * Toggle_UnityEngine_UI_ICanvasElement_get_transform_m1556 (Toggle_t309 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
