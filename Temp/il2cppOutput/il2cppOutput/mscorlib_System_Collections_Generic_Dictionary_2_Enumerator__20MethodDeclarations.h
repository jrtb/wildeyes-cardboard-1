#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Enumerator_t3300;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3297;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20242_gshared (Enumerator_t3300 * __this, Dictionary_2_t3297 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m20242(__this, ___dictionary, method) (( void (*) (Enumerator_t3300 *, Dictionary_2_t3297 *, MethodInfo*))Enumerator__ctor_m20242_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20243_gshared (Enumerator_t3300 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20243(__this, method) (( Object_t * (*) (Enumerator_t3300 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20243_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1014  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20244_gshared (Enumerator_t3300 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20244(__this, method) (( DictionaryEntry_t1014  (*) (Enumerator_t3300 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20244_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20245_gshared (Enumerator_t3300 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20245(__this, method) (( Object_t * (*) (Enumerator_t3300 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20245_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20246_gshared (Enumerator_t3300 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20246(__this, method) (( Object_t * (*) (Enumerator_t3300 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20246_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20247_gshared (Enumerator_t3300 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m20247(__this, method) (( bool (*) (Enumerator_t3300 *, MethodInfo*))Enumerator_MoveNext_m20247_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Current()
extern "C" KeyValuePair_2_t3223  Enumerator_get_Current_m20248_gshared (Enumerator_t3300 * __this, MethodInfo* method);
#define Enumerator_get_Current_m20248(__this, method) (( KeyValuePair_2_t3223  (*) (Enumerator_t3300 *, MethodInfo*))Enumerator_get_Current_m20248_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m20249_gshared (Enumerator_t3300 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m20249(__this, method) (( Object_t * (*) (Enumerator_t3300 *, MethodInfo*))Enumerator_get_CurrentKey_m20249_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_CurrentValue()
extern "C" KeyValuePair_2_t775  Enumerator_get_CurrentValue_m20250_gshared (Enumerator_t3300 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m20250(__this, method) (( KeyValuePair_2_t775  (*) (Enumerator_t3300 *, MethodInfo*))Enumerator_get_CurrentValue_m20250_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::VerifyState()
extern "C" void Enumerator_VerifyState_m20251_gshared (Enumerator_t3300 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m20251(__this, method) (( void (*) (Enumerator_t3300 *, MethodInfo*))Enumerator_VerifyState_m20251_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20252_gshared (Enumerator_t3300 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m20252(__this, method) (( void (*) (Enumerator_t3300 *, MethodInfo*))Enumerator_VerifyCurrent_m20252_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Dispose()
extern "C" void Enumerator_Dispose_m20253_gshared (Enumerator_t3300 * __this, MethodInfo* method);
#define Enumerator_Dispose_m20253(__this, method) (( void (*) (Enumerator_t3300 *, MethodInfo*))Enumerator_Dispose_m20253_gshared)(__this, method)
