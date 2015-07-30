#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t198;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// System.String
struct String_t;

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
extern "C" void TouchInputModule__ctor_m849 (TouchInputModule_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
extern "C" bool TouchInputModule_get_allowActivationOnStandalone_m850 (TouchInputModule_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
extern "C" void TouchInputModule_set_allowActivationOnStandalone_m851 (TouchInputModule_t198 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
extern "C" void TouchInputModule_UpdateModule_m852 (TouchInputModule_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
extern "C" bool TouchInputModule_IsModuleSupported_m853 (TouchInputModule_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
extern "C" bool TouchInputModule_ShouldActivateModule_m854 (TouchInputModule_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
extern "C" bool TouchInputModule_UseFakeInput_m855 (TouchInputModule_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
extern "C" void TouchInputModule_Process_m856 (TouchInputModule_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
extern "C" void TouchInputModule_FakeTouches_m857 (TouchInputModule_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
extern "C" void TouchInputModule_ProcessTouchEvents_m858 (TouchInputModule_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C" void TouchInputModule_ProcessTouchPress_m859 (TouchInputModule_t198 * __this, PointerEventData_t52 * ___pointerEvent, bool ___pressed, bool ___released, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
extern "C" void TouchInputModule_DeactivateModule_m860 (TouchInputModule_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
extern "C" String_t* TouchInputModule_ToString_m861 (TouchInputModule_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
