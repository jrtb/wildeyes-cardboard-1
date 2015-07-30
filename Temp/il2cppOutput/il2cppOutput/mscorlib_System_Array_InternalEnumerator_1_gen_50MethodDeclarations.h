#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct InternalEnumerator_1_t2658;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13838_gshared (InternalEnumerator_1_t2658 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m13838(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2658 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m13838_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13839_gshared (InternalEnumerator_1_t2658 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13839(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2658 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13839_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13840_gshared (InternalEnumerator_1_t2658 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13840(__this, method) (( void (*) (InternalEnumerator_1_t2658 *, MethodInfo*))InternalEnumerator_1_Dispose_m13840_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13841_gshared (InternalEnumerator_1_t2658 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13841(__this, method) (( bool (*) (InternalEnumerator_1_t2658 *, MethodInfo*))InternalEnumerator_1_MoveNext_m13841_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2657  InternalEnumerator_1_get_Current_m13842_gshared (InternalEnumerator_1_t2658 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13842(__this, method) (( KeyValuePair_2_t2657  (*) (InternalEnumerator_1_t2658 *, MethodInfo*))InternalEnumerator_1_get_Current_m13842_gshared)(__this, method)
