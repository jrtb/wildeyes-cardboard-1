#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t794;
// UnityEngine.Object
struct Object_t79;
struct Object_t79_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t76;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m4030_gshared (CachedInvokableCall_1_t794 * __this, Object_t79 * ___target, MethodInfo_t * ___theFunction, float ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m4030(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t794 *, Object_t79 *, MethodInfo_t *, float, MethodInfo*))CachedInvokableCall_1__ctor_m4030_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m20795_gshared (CachedInvokableCall_1_t794 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m20795(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t794 *, ObjectU5BU5D_t76*, MethodInfo*))CachedInvokableCall_1_Invoke_m20795_gshared)(__this, ___args, method)
