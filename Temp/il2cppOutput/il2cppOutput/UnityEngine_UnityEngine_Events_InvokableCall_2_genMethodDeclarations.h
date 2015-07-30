﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t3369;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t76;

// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_2__ctor_m20772_gshared (InvokableCall_2_t3369 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_2__ctor_m20772(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_2_t3369 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_2__ctor_m20772_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_2_Invoke_m20773_gshared (InvokableCall_2_t3369 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method);
#define InvokableCall_2_Invoke_m20773(__this, ___args, method) (( void (*) (InvokableCall_2_t3369 *, ObjectU5BU5D_t76*, MethodInfo*))InvokableCall_2_Invoke_m20773_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_2_Find_m20774_gshared (InvokableCall_2_t3369 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_2_Find_m20774(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_2_t3369 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_2_Find_m20774_gshared)(__this, ___targetObj, ___method, method)
