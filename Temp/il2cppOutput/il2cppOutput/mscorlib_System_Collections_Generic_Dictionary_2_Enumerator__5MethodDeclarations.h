#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2751;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2746;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14770_gshared (Enumerator_t2751 * __this, Dictionary_2_t2746 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14770(__this, ___dictionary, method) (( void (*) (Enumerator_t2751 *, Dictionary_2_t2746 *, MethodInfo*))Enumerator__ctor_m14770_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14771_gshared (Enumerator_t2751 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14771(__this, method) (( Object_t * (*) (Enumerator_t2751 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14771_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1014  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14772_gshared (Enumerator_t2751 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14772(__this, method) (( DictionaryEntry_t1014  (*) (Enumerator_t2751 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14772_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14773_gshared (Enumerator_t2751 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14773(__this, method) (( Object_t * (*) (Enumerator_t2751 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14773_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14774_gshared (Enumerator_t2751 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14774(__this, method) (( Object_t * (*) (Enumerator_t2751 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14775_gshared (Enumerator_t2751 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14775(__this, method) (( bool (*) (Enumerator_t2751 *, MethodInfo*))Enumerator_MoveNext_m14775_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2747  Enumerator_get_Current_m14776_gshared (Enumerator_t2751 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14776(__this, method) (( KeyValuePair_2_t2747  (*) (Enumerator_t2751 *, MethodInfo*))Enumerator_get_Current_m14776_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14777_gshared (Enumerator_t2751 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14777(__this, method) (( Object_t * (*) (Enumerator_t2751 *, MethodInfo*))Enumerator_get_CurrentKey_m14777_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14778_gshared (Enumerator_t2751 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14778(__this, method) (( Object_t * (*) (Enumerator_t2751 *, MethodInfo*))Enumerator_get_CurrentValue_m14778_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14779_gshared (Enumerator_t2751 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14779(__this, method) (( void (*) (Enumerator_t2751 *, MethodInfo*))Enumerator_VerifyState_m14779_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14780_gshared (Enumerator_t2751 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14780(__this, method) (( void (*) (Enumerator_t2751 *, MethodInfo*))Enumerator_VerifyCurrent_m14780_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14781_gshared (Enumerator_t2751 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14781(__this, method) (( void (*) (Enumerator_t2751 *, MethodInfo*))Enumerator_Dispose_m14781_gshared)(__this, method)
