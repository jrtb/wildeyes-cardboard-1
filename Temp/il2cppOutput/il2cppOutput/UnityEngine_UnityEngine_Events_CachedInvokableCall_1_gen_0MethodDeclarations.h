#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t795;
// UnityEngine.Object
struct Object_t79;
struct Object_t79_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t76;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m4031_gshared (CachedInvokableCall_1_t795 * __this, Object_t79 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m4031(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t795 *, Object_t79 *, MethodInfo_t *, int32_t, MethodInfo*))CachedInvokableCall_1__ctor_m4031_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m20796_gshared (CachedInvokableCall_1_t795 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m20796(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t795 *, ObjectU5BU5D_t76*, MethodInfo*))CachedInvokableCall_1_Invoke_m20796_gshared)(__this, ___args, method)
