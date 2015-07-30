#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2636;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2543;
// System.Object[]
struct ObjectU5BU5D_t76;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13551_gshared (InvokableCall_1_t2636 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m13551(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2636 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m13551_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13552_gshared (InvokableCall_1_t2636 * __this, UnityAction_1_t2543 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m13552(__this, ___callback, method) (( void (*) (InvokableCall_1_t2636 *, UnityAction_1_t2543 *, MethodInfo*))InvokableCall_1__ctor_m13552_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13553_gshared (InvokableCall_1_t2636 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m13553(__this, ___args, method) (( void (*) (InvokableCall_1_t2636 *, ObjectU5BU5D_t76*, MethodInfo*))InvokableCall_1_Invoke_m13553_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13554_gshared (InvokableCall_1_t2636 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m13554(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2636 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m13554_gshared)(__this, ___targetObj, ___method, method)
