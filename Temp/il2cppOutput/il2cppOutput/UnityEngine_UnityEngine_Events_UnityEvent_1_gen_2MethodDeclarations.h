#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t279;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t391;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t717;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m2213_gshared (UnityEvent_1_t279 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m2213(__this, method) (( void (*) (UnityEvent_1_t279 *, MethodInfo*))UnityEvent_1__ctor_m2213_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2247_gshared (UnityEvent_1_t279 * __this, UnityAction_1_t391 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m2247(__this, ___call, method) (( void (*) (UnityEvent_1_t279 *, UnityAction_1_t391 *, MethodInfo*))UnityEvent_1_AddListener_m2247_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m2246_gshared (UnityEvent_1_t279 * __this, UnityAction_1_t391 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2246(__this, ___call, method) (( void (*) (UnityEvent_1_t279 *, UnityAction_1_t391 *, MethodInfo*))UnityEvent_1_RemoveListener_m2246_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2441_gshared (UnityEvent_1_t279 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2441(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t279 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m2441_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t717 * UnityEvent_1_GetDelegate_m2442_gshared (UnityEvent_1_t279 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2442(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t717 * (*) (UnityEvent_1_t279 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m2442_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t717 * UnityEvent_1_GetDelegate_m15893_gshared (Object_t * __this /* static, unused */, UnityAction_1_t391 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15893(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t717 * (*) (Object_t * /* static, unused */, UnityAction_1_t391 *, MethodInfo*))UnityEvent_1_GetDelegate_m15893_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2222_gshared (UnityEvent_1_t279 * __this, float ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m2222(__this, ___arg0, method) (( void (*) (UnityEvent_1_t279 *, float, MethodInfo*))UnityEvent_1_Invoke_m2222_gshared)(__this, ___arg0, method)
