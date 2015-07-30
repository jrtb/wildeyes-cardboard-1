#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2635;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2543;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t717;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m13541_gshared (UnityEvent_1_t2635 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m13541(__this, method) (( void (*) (UnityEvent_1_t2635 *, MethodInfo*))UnityEvent_1__ctor_m13541_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m13543_gshared (UnityEvent_1_t2635 * __this, UnityAction_1_t2543 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m13543(__this, ___call, method) (( void (*) (UnityEvent_1_t2635 *, UnityAction_1_t2543 *, MethodInfo*))UnityEvent_1_AddListener_m13543_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13545_gshared (UnityEvent_1_t2635 * __this, UnityAction_1_t2543 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13545(__this, ___call, method) (( void (*) (UnityEvent_1_t2635 *, UnityAction_1_t2543 *, MethodInfo*))UnityEvent_1_RemoveListener_m13545_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13546_gshared (UnityEvent_1_t2635 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m13546(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t2635 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m13546_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t717 * UnityEvent_1_GetDelegate_m13547_gshared (UnityEvent_1_t2635 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13547(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t717 * (*) (UnityEvent_1_t2635 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m13547_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t717 * UnityEvent_1_GetDelegate_m13549_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2543 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13549(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t717 * (*) (Object_t * /* static, unused */, UnityAction_1_t2543 *, MethodInfo*))UnityEvent_1_GetDelegate_m13549_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m13550_gshared (UnityEvent_1_t2635 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m13550(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2635 *, Object_t *, MethodInfo*))UnityEvent_1_Invoke_m13550_gshared)(__this, ___arg0, method)
