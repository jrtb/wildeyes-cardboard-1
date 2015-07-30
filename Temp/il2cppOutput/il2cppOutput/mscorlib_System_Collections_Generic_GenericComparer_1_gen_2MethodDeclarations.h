#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1978;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m11107_gshared (GenericComparer_1_t1978 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m11107(__this, method) (( void (*) (GenericComparer_1_t1978 *, MethodInfo*))GenericComparer_1__ctor_m11107_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m22092_gshared (GenericComparer_1_t1978 * __this, TimeSpan_t1092  ___x, TimeSpan_t1092  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m22092(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1978 *, TimeSpan_t1092 , TimeSpan_t1092 , MethodInfo*))GenericComparer_1_Compare_m22092_gshared)(__this, ___x, ___y, method)
