#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t3447;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1124;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21519_gshared (Enumerator_t3447 * __this, Dictionary_2_t1124 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m21519(__this, ___dictionary, method) (( void (*) (Enumerator_t3447 *, Dictionary_2_t1124 *, MethodInfo*))Enumerator__ctor_m21519_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21520_gshared (Enumerator_t3447 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21520(__this, method) (( Object_t * (*) (Enumerator_t3447 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21520_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1014  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21521_gshared (Enumerator_t3447 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21521(__this, method) (( DictionaryEntry_t1014  (*) (Enumerator_t3447 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21521_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21522_gshared (Enumerator_t3447 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21522(__this, method) (( Object_t * (*) (Enumerator_t3447 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21522_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21523_gshared (Enumerator_t3447 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21523(__this, method) (( Object_t * (*) (Enumerator_t3447 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21523_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21524_gshared (Enumerator_t3447 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m21524(__this, method) (( bool (*) (Enumerator_t3447 *, MethodInfo*))Enumerator_MoveNext_m21524_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3443  Enumerator_get_Current_m21525_gshared (Enumerator_t3447 * __this, MethodInfo* method);
#define Enumerator_get_Current_m21525(__this, method) (( KeyValuePair_2_t3443  (*) (Enumerator_t3447 *, MethodInfo*))Enumerator_get_Current_m21525_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m21526_gshared (Enumerator_t3447 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m21526(__this, method) (( int32_t (*) (Enumerator_t3447 *, MethodInfo*))Enumerator_get_CurrentKey_m21526_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m21527_gshared (Enumerator_t3447 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m21527(__this, method) (( int32_t (*) (Enumerator_t3447 *, MethodInfo*))Enumerator_get_CurrentValue_m21527_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m21528_gshared (Enumerator_t3447 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m21528(__this, method) (( void (*) (Enumerator_t3447 *, MethodInfo*))Enumerator_VerifyState_m21528_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21529_gshared (Enumerator_t3447 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m21529(__this, method) (( void (*) (Enumerator_t3447 *, MethodInfo*))Enumerator_VerifyCurrent_m21529_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m21530_gshared (Enumerator_t3447 * __this, MethodInfo* method);
#define Enumerator_Dispose_m21530(__this, method) (( void (*) (Enumerator_t3447 *, MethodInfo*))Enumerator_Dispose_m21530_gshared)(__this, method)
