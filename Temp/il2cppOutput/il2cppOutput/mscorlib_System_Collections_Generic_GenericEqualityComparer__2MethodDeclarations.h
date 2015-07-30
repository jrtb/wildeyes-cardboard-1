#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t1979;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11108_gshared (GenericEqualityComparer_1_t1979 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11108(__this, method) (( void (*) (GenericEqualityComparer_1_t1979 *, MethodInfo*))GenericEqualityComparer_1__ctor_m11108_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m22099_gshared (GenericEqualityComparer_1_t1979 * __this, TimeSpan_t1092  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m22099(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1979 *, TimeSpan_t1092 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m22099_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m22100_gshared (GenericEqualityComparer_1_t1979 * __this, TimeSpan_t1092  ___x, TimeSpan_t1092  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m22100(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1979 *, TimeSpan_t1092 , TimeSpan_t1092 , MethodInfo*))GenericEqualityComparer_1_Equals_m22100_gshared)(__this, ___x, ___y, method)
