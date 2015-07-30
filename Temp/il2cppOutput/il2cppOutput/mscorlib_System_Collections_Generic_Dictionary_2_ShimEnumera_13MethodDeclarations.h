#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3177;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3163;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19107_gshared (ShimEnumerator_t3177 * __this, Dictionary_2_t3163 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m19107(__this, ___host, method) (( void (*) (ShimEnumerator_t3177 *, Dictionary_2_t3163 *, MethodInfo*))ShimEnumerator__ctor_m19107_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19108_gshared (ShimEnumerator_t3177 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m19108(__this, method) (( bool (*) (ShimEnumerator_t3177 *, MethodInfo*))ShimEnumerator_MoveNext_m19108_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1014  ShimEnumerator_get_Entry_m19109_gshared (ShimEnumerator_t3177 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m19109(__this, method) (( DictionaryEntry_t1014  (*) (ShimEnumerator_t3177 *, MethodInfo*))ShimEnumerator_get_Entry_m19109_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19110_gshared (ShimEnumerator_t3177 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m19110(__this, method) (( Object_t * (*) (ShimEnumerator_t3177 *, MethodInfo*))ShimEnumerator_get_Key_m19110_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19111_gshared (ShimEnumerator_t3177 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m19111(__this, method) (( Object_t * (*) (ShimEnumerator_t3177 *, MethodInfo*))ShimEnumerator_get_Value_m19111_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19112_gshared (ShimEnumerator_t3177 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m19112(__this, method) (( Object_t * (*) (ShimEnumerator_t3177 *, MethodInfo*))ShimEnumerator_get_Current_m19112_gshared)(__this, method)
