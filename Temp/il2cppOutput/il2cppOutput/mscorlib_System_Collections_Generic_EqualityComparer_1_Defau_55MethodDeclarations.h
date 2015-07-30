#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3541;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m22089_gshared (DefaultComparer_t3541 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m22089(__this, method) (( void (*) (DefaultComparer_t3541 *, MethodInfo*))DefaultComparer__ctor_m22089_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22090_gshared (DefaultComparer_t3541 * __this, Guid_t777  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m22090(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3541 *, Guid_t777 , MethodInfo*))DefaultComparer_GetHashCode_m22090_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22091_gshared (DefaultComparer_t3541 * __this, Guid_t777  ___x, Guid_t777  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m22091(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3541 *, Guid_t777 , Guid_t777 , MethodInfo*))DefaultComparer_Equals_m22091_gshared)(__this, ___x, ___y, method)
