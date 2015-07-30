#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_t149;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t148;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t90;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t150;
// UnityEngine.EventSystems.EventTriggerType
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTriggerType.h"

// System.Void UnityEngine.EventSystems.EventTrigger::.ctor()
extern "C" void EventTrigger__ctor_m683 (EventTrigger_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::get_triggers()
extern "C" List_1_t148 * EventTrigger_get_triggers_m684 (EventTrigger_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::set_triggers(System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>)
extern "C" void EventTrigger_set_triggers_m685 (EventTrigger_t149 * __this, List_1_t148 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::Execute(UnityEngine.EventSystems.EventTriggerType,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_Execute_m686 (EventTrigger_t149 * __this, int32_t ___id, BaseEventData_t90 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerEnter_m687 (EventTrigger_t149 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerExit_m688 (EventTrigger_t149 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnDrag_m689 (EventTrigger_t149 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnDrop_m690 (EventTrigger_t149 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerDown_m691 (EventTrigger_t149 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerUp_m692 (EventTrigger_t149 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerClick_m693 (EventTrigger_t149 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnSelect_m694 (EventTrigger_t149 * __this, BaseEventData_t90 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnDeselect_m695 (EventTrigger_t149 * __this, BaseEventData_t90 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnScroll_m696 (EventTrigger_t149 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void EventTrigger_OnMove_m697 (EventTrigger_t149 * __this, AxisEventData_t150 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnUpdateSelected_m698 (EventTrigger_t149 * __this, BaseEventData_t90 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnInitializePotentialDrag_m699 (EventTrigger_t149 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnBeginDrag_m700 (EventTrigger_t149 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnEndDrag_m701 (EventTrigger_t149 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnSubmit_m702 (EventTrigger_t149 * __this, BaseEventData_t90 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnCancel_m703 (EventTrigger_t149 * __this, BaseEventData_t90 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
