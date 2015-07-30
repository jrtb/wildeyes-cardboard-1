#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct Enumerator_t3270;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t661;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct Dictionary_2_t3265;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5MethodDeclarations.h"
#define Enumerator__ctor_m19926(__this, ___dictionary, method) (( void (*) (Enumerator_t3270 *, Dictionary_2_t3265 *, MethodInfo*))Enumerator__ctor_m14770_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m19927(__this, method) (( Object_t * (*) (Enumerator_t3270 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14771_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19928(__this, method) (( DictionaryEntry_t1014  (*) (Enumerator_t3270 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14772_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19929(__this, method) (( Object_t * (*) (Enumerator_t3270 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14773_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19930(__this, method) (( Object_t * (*) (Enumerator_t3270 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::MoveNext()
#define Enumerator_MoveNext_m19931(__this, method) (( bool (*) (Enumerator_t3270 *, MethodInfo*))Enumerator_MoveNext_m14775_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_Current()
#define Enumerator_get_Current_m19932(__this, method) (( KeyValuePair_2_t3222  (*) (Enumerator_t3270 *, MethodInfo*))Enumerator_get_Current_m14776_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m19933(__this, method) (( Type_t * (*) (Enumerator_t3270 *, MethodInfo*))Enumerator_get_CurrentKey_m14777_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m19934(__this, method) (( Object_t* (*) (Enumerator_t3270 *, MethodInfo*))Enumerator_get_CurrentValue_m14778_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::VerifyState()
#define Enumerator_VerifyState_m19935(__this, method) (( void (*) (Enumerator_t3270 *, MethodInfo*))Enumerator_VerifyState_m14779_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m19936(__this, method) (( void (*) (Enumerator_t3270 *, MethodInfo*))Enumerator_VerifyCurrent_m14780_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::Dispose()
#define Enumerator_Dispose_m19937(__this, method) (( void (*) (Enumerator_t3270 *, MethodInfo*))Enumerator_Dispose_m14781_gshared)(__this, method)
