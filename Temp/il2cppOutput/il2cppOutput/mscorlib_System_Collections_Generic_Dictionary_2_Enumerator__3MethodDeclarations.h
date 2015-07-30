#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2710;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2702;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14306_gshared (Enumerator_t2710 * __this, Dictionary_2_t2702 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14306(__this, ___dictionary, method) (( void (*) (Enumerator_t2710 *, Dictionary_2_t2702 *, MethodInfo*))Enumerator__ctor_m14306_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14307_gshared (Enumerator_t2710 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14307(__this, method) (( Object_t * (*) (Enumerator_t2710 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14307_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1014  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14308_gshared (Enumerator_t2710 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14308(__this, method) (( DictionaryEntry_t1014  (*) (Enumerator_t2710 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14308_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14309_gshared (Enumerator_t2710 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14309(__this, method) (( Object_t * (*) (Enumerator_t2710 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14309_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14310_gshared (Enumerator_t2710 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14310(__this, method) (( Object_t * (*) (Enumerator_t2710 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14310_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14311_gshared (Enumerator_t2710 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14311(__this, method) (( bool (*) (Enumerator_t2710 *, MethodInfo*))Enumerator_MoveNext_m14311_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2706  Enumerator_get_Current_m14312_gshared (Enumerator_t2710 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14312(__this, method) (( KeyValuePair_2_t2706  (*) (Enumerator_t2710 *, MethodInfo*))Enumerator_get_Current_m14312_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14313_gshared (Enumerator_t2710 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14313(__this, method) (( Object_t * (*) (Enumerator_t2710 *, MethodInfo*))Enumerator_get_CurrentKey_m14313_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14314_gshared (Enumerator_t2710 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14314(__this, method) (( int32_t (*) (Enumerator_t2710 *, MethodInfo*))Enumerator_get_CurrentValue_m14314_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14315_gshared (Enumerator_t2710 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14315(__this, method) (( void (*) (Enumerator_t2710 *, MethodInfo*))Enumerator_VerifyState_m14315_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14316_gshared (Enumerator_t2710 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14316(__this, method) (( void (*) (Enumerator_t2710 *, MethodInfo*))Enumerator_VerifyCurrent_m14316_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14317_gshared (Enumerator_t2710 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14317(__this, method) (( void (*) (Enumerator_t2710 *, MethodInfo*))Enumerator_Dispose_m14317_gshared)(__this, method)
