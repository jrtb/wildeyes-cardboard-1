#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t3171;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3163;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19060_gshared (Enumerator_t3171 * __this, Dictionary_2_t3163 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m19060(__this, ___dictionary, method) (( void (*) (Enumerator_t3171 *, Dictionary_2_t3163 *, MethodInfo*))Enumerator__ctor_m19060_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19061_gshared (Enumerator_t3171 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19061(__this, method) (( Object_t * (*) (Enumerator_t3171 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19061_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1014  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19062_gshared (Enumerator_t3171 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19062(__this, method) (( DictionaryEntry_t1014  (*) (Enumerator_t3171 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19062_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19063_gshared (Enumerator_t3171 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19063(__this, method) (( Object_t * (*) (Enumerator_t3171 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19063_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19064_gshared (Enumerator_t3171 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19064(__this, method) (( Object_t * (*) (Enumerator_t3171 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19064_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19065_gshared (Enumerator_t3171 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m19065(__this, method) (( bool (*) (Enumerator_t3171 *, MethodInfo*))Enumerator_MoveNext_m19065_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3164  Enumerator_get_Current_m19066_gshared (Enumerator_t3171 * __this, MethodInfo* method);
#define Enumerator_get_Current_m19066(__this, method) (( KeyValuePair_2_t3164  (*) (Enumerator_t3171 *, MethodInfo*))Enumerator_get_Current_m19066_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m19067_gshared (Enumerator_t3171 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m19067(__this, method) (( uint64_t (*) (Enumerator_t3171 *, MethodInfo*))Enumerator_get_CurrentKey_m19067_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m19068_gshared (Enumerator_t3171 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m19068(__this, method) (( Object_t * (*) (Enumerator_t3171 *, MethodInfo*))Enumerator_get_CurrentValue_m19068_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m19069_gshared (Enumerator_t3171 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m19069(__this, method) (( void (*) (Enumerator_t3171 *, MethodInfo*))Enumerator_VerifyState_m19069_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19070_gshared (Enumerator_t3171 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m19070(__this, method) (( void (*) (Enumerator_t3171 *, MethodInfo*))Enumerator_VerifyCurrent_m19070_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m19071_gshared (Enumerator_t3171 * __this, MethodInfo* method);
#define Enumerator_Dispose_m19071(__this, method) (( void (*) (Enumerator_t3171 *, MethodInfo*))Enumerator_Dispose_m19071_gshared)(__this, method)
