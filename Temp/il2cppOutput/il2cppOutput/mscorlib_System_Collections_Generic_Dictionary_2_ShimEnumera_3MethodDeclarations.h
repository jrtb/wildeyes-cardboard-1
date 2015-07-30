#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2756;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2746;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14813_gshared (ShimEnumerator_t2756 * __this, Dictionary_2_t2746 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m14813(__this, ___host, method) (( void (*) (ShimEnumerator_t2756 *, Dictionary_2_t2746 *, MethodInfo*))ShimEnumerator__ctor_m14813_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14814_gshared (ShimEnumerator_t2756 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m14814(__this, method) (( bool (*) (ShimEnumerator_t2756 *, MethodInfo*))ShimEnumerator_MoveNext_m14814_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1014  ShimEnumerator_get_Entry_m14815_gshared (ShimEnumerator_t2756 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m14815(__this, method) (( DictionaryEntry_t1014  (*) (ShimEnumerator_t2756 *, MethodInfo*))ShimEnumerator_get_Entry_m14815_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14816_gshared (ShimEnumerator_t2756 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m14816(__this, method) (( Object_t * (*) (ShimEnumerator_t2756 *, MethodInfo*))ShimEnumerator_get_Key_m14816_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14817_gshared (ShimEnumerator_t2756 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m14817(__this, method) (( Object_t * (*) (ShimEnumerator_t2756 *, MethodInfo*))ShimEnumerator_get_Value_m14817_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14818_gshared (ShimEnumerator_t2756 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m14818(__this, method) (( Object_t * (*) (ShimEnumerator_t2756 *, MethodInfo*))ShimEnumerator_get_Current_m14818_gshared)(__this, method)
