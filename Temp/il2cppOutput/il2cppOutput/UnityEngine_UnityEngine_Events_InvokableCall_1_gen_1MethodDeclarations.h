﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t2700;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t206;
// System.Object[]
struct ObjectU5BU5D_t76;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m14196_gshared (InvokableCall_1_t2700 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m14196(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2700 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m14196_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m14197_gshared (InvokableCall_1_t2700 * __this, UnityAction_1_t206 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m14197(__this, ___callback, method) (( void (*) (InvokableCall_1_t2700 *, UnityAction_1_t206 *, MethodInfo*))InvokableCall_1__ctor_m14197_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m14198_gshared (InvokableCall_1_t2700 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m14198(__this, ___args, method) (( void (*) (InvokableCall_1_t2700 *, ObjectU5BU5D_t76*, MethodInfo*))InvokableCall_1_Invoke_m14198_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m14199_gshared (InvokableCall_1_t2700 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m14199(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2700 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m14199_gshared)(__this, ___targetObj, ___method, method)
