#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t3116;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3102;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18512_gshared (ShimEnumerator_t3116 * __this, Dictionary_2_t3102 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m18512(__this, ___host, method) (( void (*) (ShimEnumerator_t3116 *, Dictionary_2_t3102 *, MethodInfo*))ShimEnumerator__ctor_m18512_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18513_gshared (ShimEnumerator_t3116 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m18513(__this, method) (( bool (*) (ShimEnumerator_t3116 *, MethodInfo*))ShimEnumerator_MoveNext_m18513_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1014  ShimEnumerator_get_Entry_m18514_gshared (ShimEnumerator_t3116 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m18514(__this, method) (( DictionaryEntry_t1014  (*) (ShimEnumerator_t3116 *, MethodInfo*))ShimEnumerator_get_Entry_m18514_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18515_gshared (ShimEnumerator_t3116 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m18515(__this, method) (( Object_t * (*) (ShimEnumerator_t3116 *, MethodInfo*))ShimEnumerator_get_Key_m18515_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18516_gshared (ShimEnumerator_t3116 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m18516(__this, method) (( Object_t * (*) (ShimEnumerator_t3116 *, MethodInfo*))ShimEnumerator_get_Value_m18516_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18517_gshared (ShimEnumerator_t3116 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m18517(__this, method) (( Object_t * (*) (ShimEnumerator_t3116 *, MethodInfo*))ShimEnumerator_get_Current_m18517_gshared)(__this, method)
