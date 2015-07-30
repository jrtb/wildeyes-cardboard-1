#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
struct DefaultComparer_t3119;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::.ctor()
extern "C" void DefaultComparer__ctor_m18526_gshared (DefaultComparer_t3119 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m18526(__this, method) (( void (*) (DefaultComparer_t3119 *, MethodInfo*))DefaultComparer__ctor_m18526_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18527_gshared (DefaultComparer_t3119 * __this, int64_t ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m18527(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3119 *, int64_t, MethodInfo*))DefaultComparer_GetHashCode_m18527_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18528_gshared (DefaultComparer_t3119 * __this, int64_t ___x, int64_t ___y, MethodInfo* method);
#define DefaultComparer_Equals_m18528(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3119 *, int64_t, int64_t, MethodInfo*))DefaultComparer_Equals_m18528_gshared)(__this, ___x, ___y, method)
