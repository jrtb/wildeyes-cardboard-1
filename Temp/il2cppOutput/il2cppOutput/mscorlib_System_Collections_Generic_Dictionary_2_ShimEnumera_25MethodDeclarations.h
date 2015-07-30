#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t3452;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1124;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21562_gshared (ShimEnumerator_t3452 * __this, Dictionary_2_t1124 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m21562(__this, ___host, method) (( void (*) (ShimEnumerator_t3452 *, Dictionary_2_t1124 *, MethodInfo*))ShimEnumerator__ctor_m21562_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21563_gshared (ShimEnumerator_t3452 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m21563(__this, method) (( bool (*) (ShimEnumerator_t3452 *, MethodInfo*))ShimEnumerator_MoveNext_m21563_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1014  ShimEnumerator_get_Entry_m21564_gshared (ShimEnumerator_t3452 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m21564(__this, method) (( DictionaryEntry_t1014  (*) (ShimEnumerator_t3452 *, MethodInfo*))ShimEnumerator_get_Entry_m21564_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21565_gshared (ShimEnumerator_t3452 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m21565(__this, method) (( Object_t * (*) (ShimEnumerator_t3452 *, MethodInfo*))ShimEnumerator_get_Key_m21565_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21566_gshared (ShimEnumerator_t3452 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m21566(__this, method) (( Object_t * (*) (ShimEnumerator_t3452 *, MethodInfo*))ShimEnumerator_get_Value_m21566_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21567_gshared (ShimEnumerator_t3452 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m21567(__this, method) (( Object_t * (*) (ShimEnumerator_t3452 *, MethodInfo*))ShimEnumerator_get_Current_m21567_gshared)(__this, method)
