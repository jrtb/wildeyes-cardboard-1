#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t3110;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3102;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18465_gshared (Enumerator_t3110 * __this, Dictionary_2_t3102 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m18465(__this, ___dictionary, method) (( void (*) (Enumerator_t3110 *, Dictionary_2_t3102 *, MethodInfo*))Enumerator__ctor_m18465_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18466_gshared (Enumerator_t3110 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18466(__this, method) (( Object_t * (*) (Enumerator_t3110 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18466_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1014  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18467_gshared (Enumerator_t3110 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18467(__this, method) (( DictionaryEntry_t1014  (*) (Enumerator_t3110 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18467_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18468_gshared (Enumerator_t3110 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18468(__this, method) (( Object_t * (*) (Enumerator_t3110 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18468_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18469_gshared (Enumerator_t3110 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18469(__this, method) (( Object_t * (*) (Enumerator_t3110 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18469_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18470_gshared (Enumerator_t3110 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m18470(__this, method) (( bool (*) (Enumerator_t3110 *, MethodInfo*))Enumerator_MoveNext_m18470_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t3103  Enumerator_get_Current_m18471_gshared (Enumerator_t3110 * __this, MethodInfo* method);
#define Enumerator_get_Current_m18471(__this, method) (( KeyValuePair_2_t3103  (*) (Enumerator_t3110 *, MethodInfo*))Enumerator_get_Current_m18471_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18472_gshared (Enumerator_t3110 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m18472(__this, method) (( Object_t * (*) (Enumerator_t3110 *, MethodInfo*))Enumerator_get_CurrentKey_m18472_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m18473_gshared (Enumerator_t3110 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m18473(__this, method) (( int64_t (*) (Enumerator_t3110 *, MethodInfo*))Enumerator_get_CurrentValue_m18473_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m18474_gshared (Enumerator_t3110 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m18474(__this, method) (( void (*) (Enumerator_t3110 *, MethodInfo*))Enumerator_VerifyState_m18474_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18475_gshared (Enumerator_t3110 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m18475(__this, method) (( void (*) (Enumerator_t3110 *, MethodInfo*))Enumerator_VerifyCurrent_m18475_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m18476_gshared (Enumerator_t3110 * __this, MethodInfo* method);
#define Enumerator_Dispose_m18476(__this, method) (( void (*) (Enumerator_t3110 *, MethodInfo*))Enumerator_Dispose_m18476_gshared)(__this, method)
