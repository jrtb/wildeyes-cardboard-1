#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2801;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m15239_gshared (DefaultComparer_t2801 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m15239(__this, method) (( void (*) (DefaultComparer_t2801 *, MethodInfo*))DefaultComparer__ctor_m15239_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15240_gshared (DefaultComparer_t2801 * __this, UIVertex_t253  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m15240(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2801 *, UIVertex_t253 , MethodInfo*))DefaultComparer_GetHashCode_m15240_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15241_gshared (DefaultComparer_t2801 * __this, UIVertex_t253  ___x, UIVertex_t253  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m15241(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2801 *, UIVertex_t253 , UIVertex_t253 , MethodInfo*))DefaultComparer_Equals_m15241_gshared)(__this, ___x, ___y, method)
