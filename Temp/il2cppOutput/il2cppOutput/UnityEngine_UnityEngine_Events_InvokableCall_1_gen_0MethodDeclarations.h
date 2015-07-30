#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>
struct InvokableCall_1_t2638;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t2637;
// System.Object[]
struct ObjectU5BU5D_t76;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
#define InvokableCall_1__ctor_m13559(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2638 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m13551_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m13560(__this, ___callback, method) (( void (*) (InvokableCall_1_t2638 *, UnityAction_1_t2637 *, MethodInfo*))InvokableCall_1__ctor_m13552_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m13561(__this, ___args, method) (( void (*) (InvokableCall_1_t2638 *, ObjectU5BU5D_t76*, MethodInfo*))InvokableCall_1_Invoke_m13553_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m13562(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2638 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m13554_gshared)(__this, ___targetObj, ___method, method)
