#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t54;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t104;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t91;
// UnityEngine.GameObject
struct GameObject_t51;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t150;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t90;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.EventSystems.MoveDirection
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
extern "C" void BaseInputModule__ctor_m491 (BaseInputModule_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
extern "C" EventSystem_t104 * BaseInputModule_get_eventSystem_m495 (BaseInputModule_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
extern "C" void BaseInputModule_OnEnable_m636 (BaseInputModule_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnDisable()
extern "C" void BaseInputModule_OnDisable_m638 (BaseInputModule_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::Process()
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" RaycastResult_t93  BaseInputModule_FindFirstRaycast_m504 (Object_t * __this /* static, unused */, List_1_t91 * ___candidates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single)
extern "C" int32_t BaseInputModule_DetermineMoveDirection_m789 (Object_t * __this /* static, unused */, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single,System.Single)
extern "C" int32_t BaseInputModule_DetermineMoveDirection_m790 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___deadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseInputModule::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" GameObject_t51 * BaseInputModule_FindCommonRoot_m791 (Object_t * __this /* static, unused */, GameObject_t51 * ___g1, GameObject_t51 * ___g2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
extern "C" void BaseInputModule_HandlePointerExitAndEnter_m494 (BaseInputModule_t54 * __this, PointerEventData_t52 * ___currentPointerData, GameObject_t51 * ___newEnterTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single)
extern "C" AxisEventData_t150 * BaseInputModule_GetAxisEventData_m647 (BaseInputModule_t54 * __this, float ___x, float ___y, float ___moveDeadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData()
extern "C" BaseEventData_t90 * BaseInputModule_GetBaseEventData_m496 (BaseInputModule_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool BaseInputModule_IsPointerOverGameObject_m792 (BaseInputModule_t54 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
extern "C" bool BaseInputModule_ShouldActivateModule_m492 (BaseInputModule_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
extern "C" void BaseInputModule_DeactivateModule_m493 (BaseInputModule_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
extern "C" void BaseInputModule_ActivateModule_m648 (BaseInputModule_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::UpdateModule()
extern "C" void BaseInputModule_UpdateModule_m649 (BaseInputModule_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsModuleSupported()
extern "C" bool BaseInputModule_IsModuleSupported_m650 (BaseInputModule_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
