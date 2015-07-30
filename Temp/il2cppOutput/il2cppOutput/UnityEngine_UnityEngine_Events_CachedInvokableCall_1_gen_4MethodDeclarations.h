#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
struct CachedInvokableCall_1_t3377;
// UnityEngine.Object
struct Object_t79;
struct Object_t79_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t76;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m20806_gshared (CachedInvokableCall_1_t3377 * __this, Object_t79 * ___target, MethodInfo_t * ___theFunction, uint8_t ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m20806(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t3377 *, Object_t79 *, MethodInfo_t *, uint8_t, MethodInfo*))CachedInvokableCall_1__ctor_m20806_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m20808_gshared (CachedInvokableCall_1_t3377 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m20808(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t3377 *, ObjectU5BU5D_t76*, MethodInfo*))CachedInvokableCall_1_Invoke_m20808_gshared)(__this, ___args, method)
