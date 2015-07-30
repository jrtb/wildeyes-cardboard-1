#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t3418;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3407;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21295_gshared (ShimEnumerator_t3418 * __this, Dictionary_2_t3407 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m21295(__this, ___host, method) (( void (*) (ShimEnumerator_t3418 *, Dictionary_2_t3407 *, MethodInfo*))ShimEnumerator__ctor_m21295_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21296_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m21296(__this, method) (( bool (*) (ShimEnumerator_t3418 *, MethodInfo*))ShimEnumerator_MoveNext_m21296_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1014  ShimEnumerator_get_Entry_m21297_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m21297(__this, method) (( DictionaryEntry_t1014  (*) (ShimEnumerator_t3418 *, MethodInfo*))ShimEnumerator_get_Entry_m21297_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21298_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m21298(__this, method) (( Object_t * (*) (ShimEnumerator_t3418 *, MethodInfo*))ShimEnumerator_get_Key_m21298_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21299_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m21299(__this, method) (( Object_t * (*) (ShimEnumerator_t3418 *, MethodInfo*))ShimEnumerator_get_Value_m21299_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21300_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m21300(__this, method) (( Object_t * (*) (ShimEnumerator_t3418 *, MethodInfo*))ShimEnumerator_get_Current_m21300_gshared)(__this, method)
