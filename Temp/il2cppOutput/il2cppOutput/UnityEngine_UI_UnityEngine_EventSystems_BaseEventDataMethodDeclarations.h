#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t90;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t54;
// UnityEngine.GameObject
struct GameObject_t51;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t104;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void BaseEventData__ctor_m754 (BaseEventData_t90 * __this, EventSystem_t104 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
extern "C" void BaseEventData_Reset_m501 (BaseEventData_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
extern "C" void BaseEventData_Use_m755 (BaseEventData_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
extern "C" bool BaseEventData_get_used_m756 (BaseEventData_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C" BaseInputModule_t54 * BaseEventData_get_currentInputModule_m757 (BaseEventData_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C" GameObject_t51 * BaseEventData_get_selectedObject_m758 (BaseEventData_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C" void BaseEventData_set_selectedObject_m759 (BaseEventData_t90 * __this, GameObject_t51 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
