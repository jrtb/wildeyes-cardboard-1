#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3545;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m22106_gshared (DefaultComparer_t3545 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m22106(__this, method) (( void (*) (DefaultComparer_t3545 *, MethodInfo*))DefaultComparer__ctor_m22106_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22107_gshared (DefaultComparer_t3545 * __this, TimeSpan_t1092  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m22107(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3545 *, TimeSpan_t1092 , MethodInfo*))DefaultComparer_GetHashCode_m22107_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22108_gshared (DefaultComparer_t3545 * __this, TimeSpan_t1092  ___x, TimeSpan_t1092  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m22108(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3545 *, TimeSpan_t1092 , TimeSpan_t1092 , MethodInfo*))DefaultComparer_Equals_m22108_gshared)(__this, ___x, ___y, method)
