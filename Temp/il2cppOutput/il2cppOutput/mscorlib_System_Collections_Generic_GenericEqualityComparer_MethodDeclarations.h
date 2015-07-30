#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t1973;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11084_gshared (GenericEqualityComparer_1_t1973 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11084(__this, method) (( void (*) (GenericEqualityComparer_1_t1973 *, MethodInfo*))GenericEqualityComparer_1__ctor_m11084_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m22044_gshared (GenericEqualityComparer_1_t1973 * __this, DateTime_t524  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m22044(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1973 *, DateTime_t524 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m22044_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m22045_gshared (GenericEqualityComparer_1_t1973 * __this, DateTime_t524  ___x, DateTime_t524  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m22045(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1973 *, DateTime_t524 , DateTime_t524 , MethodInfo*))GenericEqualityComparer_1_Equals_m22045_gshared)(__this, ___x, ___y, method)
