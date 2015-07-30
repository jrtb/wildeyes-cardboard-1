#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t721;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t717;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t720;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Type[]
struct TypeU5BU5D_t658;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C" void UnityEventBase__ctor_m3742 (UnityEventBase_t721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m2393 (UnityEventBase_t721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m2394 (UnityEventBase_t721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3743 (UnityEventBase_t721 * __this, PersistentCall_t720 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m3744 (UnityEventBase_t721 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m3745 (UnityEventBase_t721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m3746 (UnityEventBase_t721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void UnityEventBase_AddCall_m3747 (UnityEventBase_t721 * __this, BaseInvokableCall_t717 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void UnityEventBase_RemoveListener_m3748 (UnityEventBase_t721 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C" void UnityEventBase_Invoke_m3749 (UnityEventBase_t721 * __this, ObjectU5BU5D_t76* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern "C" String_t* UnityEventBase_ToString_m2392 (UnityEventBase_t721 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3750 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t658* ___argumentTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
