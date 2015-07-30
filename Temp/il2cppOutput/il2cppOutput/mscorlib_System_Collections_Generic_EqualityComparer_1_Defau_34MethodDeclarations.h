#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t3094;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m18295_gshared (DefaultComparer_t3094 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m18295(__this, method) (( void (*) (DefaultComparer_t3094 *, MethodInfo*))DefaultComparer__ctor_m18295_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18296_gshared (DefaultComparer_t3094 * __this, UILineInfo_t384  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m18296(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3094 *, UILineInfo_t384 , MethodInfo*))DefaultComparer_GetHashCode_m18296_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18297_gshared (DefaultComparer_t3094 * __this, UILineInfo_t384  ___x, UILineInfo_t384  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m18297(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3094 *, UILineInfo_t384 , UILineInfo_t384 , MethodInfo*))DefaultComparer_Equals_m18297_gshared)(__this, ___x, ___y, method)
