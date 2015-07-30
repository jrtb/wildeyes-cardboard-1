#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2526;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m12332_gshared (DefaultComparer_t2526 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m12332(__this, method) (( void (*) (DefaultComparer_t2526 *, MethodInfo*))DefaultComparer__ctor_m12332_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12333_gshared (DefaultComparer_t2526 * __this, RaycastResult_t93  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m12333(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2526 *, RaycastResult_t93 , MethodInfo*))DefaultComparer_GetHashCode_m12333_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12334_gshared (DefaultComparer_t2526 * __this, RaycastResult_t93  ___x, RaycastResult_t93  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m12334(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2526 *, RaycastResult_t93 , RaycastResult_t93 , MethodInfo*))DefaultComparer_Equals_m12334_gshared)(__this, ___x, ___y, method)
