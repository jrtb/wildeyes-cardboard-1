#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3543;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m22097_gshared (DefaultComparer_t3543 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m22097(__this, method) (( void (*) (DefaultComparer_t3543 *, MethodInfo*))DefaultComparer__ctor_m22097_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m22098_gshared (DefaultComparer_t3543 * __this, TimeSpan_t1092  ___x, TimeSpan_t1092  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m22098(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3543 *, TimeSpan_t1092 , TimeSpan_t1092 , MethodInfo*))DefaultComparer_Compare_m22098_gshared)(__this, ___x, ___y, method)
