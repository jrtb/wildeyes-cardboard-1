#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ShimEnumerator_t3306;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3297;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20289_gshared (ShimEnumerator_t3306 * __this, Dictionary_2_t3297 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m20289(__this, ___host, method) (( void (*) (ShimEnumerator_t3306 *, Dictionary_2_t3297 *, MethodInfo*))ShimEnumerator__ctor_m20289_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20290_gshared (ShimEnumerator_t3306 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m20290(__this, method) (( bool (*) (ShimEnumerator_t3306 *, MethodInfo*))ShimEnumerator_MoveNext_m20290_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Entry()
extern "C" DictionaryEntry_t1014  ShimEnumerator_get_Entry_m20291_gshared (ShimEnumerator_t3306 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m20291(__this, method) (( DictionaryEntry_t1014  (*) (ShimEnumerator_t3306 *, MethodInfo*))ShimEnumerator_get_Entry_m20291_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20292_gshared (ShimEnumerator_t3306 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m20292(__this, method) (( Object_t * (*) (ShimEnumerator_t3306 *, MethodInfo*))ShimEnumerator_get_Key_m20292_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20293_gshared (ShimEnumerator_t3306 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m20293(__this, method) (( Object_t * (*) (ShimEnumerator_t3306 *, MethodInfo*))ShimEnumerator_get_Value_m20293_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20294_gshared (ShimEnumerator_t3306 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m20294(__this, method) (( Object_t * (*) (ShimEnumerator_t3306 *, MethodInfo*))ShimEnumerator_get_Current_m20294_gshared)(__this, method)
