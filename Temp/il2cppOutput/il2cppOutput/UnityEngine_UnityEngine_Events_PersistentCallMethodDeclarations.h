#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.PersistentCall
struct PersistentCall_t720;
// UnityEngine.Object
struct Object_t79;
struct Object_t79_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t716;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t717;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t721;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C" void PersistentCall__ctor_m3726 (PersistentCall_t720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t79 * PersistentCall_get_target_m3727 (PersistentCall_t720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m3728 (PersistentCall_t720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m3729 (PersistentCall_t720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t716 * PersistentCall_get_arguments_m3730 (PersistentCall_t720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C" bool PersistentCall_IsValid_m3731 (PersistentCall_t720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C" BaseInvokableCall_t717 * PersistentCall_GetRuntimeCall_m3732 (PersistentCall_t720 * __this, UnityEventBase_t721 * ___theEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C" BaseInvokableCall_t717 * PersistentCall_GetObjectCall_m3733 (Object_t * __this /* static, unused */, Object_t79 * ___target, MethodInfo_t * ___method, ArgumentCache_t716 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
