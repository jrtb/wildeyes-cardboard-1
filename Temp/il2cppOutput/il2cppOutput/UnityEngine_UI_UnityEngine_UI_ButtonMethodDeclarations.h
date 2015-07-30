#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t210;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t208;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t90;
// System.Collections.IEnumerator
struct IEnumerator_t31;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m910 (Button_t210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t208 * Button_get_onClick_m911 (Button_t210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m912 (Button_t210 * __this, ButtonClickedEvent_t208 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m913 (Button_t210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m914 (Button_t210 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m915 (Button_t210 * __this, BaseEventData_t90 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m916 (Button_t210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
