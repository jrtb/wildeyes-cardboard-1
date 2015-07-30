#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t542;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t647;
// System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>
struct ICollection_1_t3651;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t525;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t3017;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t743;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2438;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GUIStyle>
struct IDictionary_2_t3652;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>[]
struct KeyValuePair_2U5BU5D_t3653;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct IEnumerator_1_t3654;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"
#define Dictionary_2__ctor_m17299(__this, method) (( void (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2__ctor_m14643_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m3801(__this, ___comparer, method) (( void (*) (Dictionary_2_t542 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14645_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m17300(__this, ___dictionary, method) (( void (*) (Dictionary_2_t542 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14647_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Int32)
#define Dictionary_2__ctor_m17301(__this, ___capacity, method) (( void (*) (Dictionary_2_t542 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14649_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17302(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t542 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m14651_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17303(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t542 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m14653_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17304(__this, method) (( Object_t* (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14655_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17305(__this, method) (( Object_t* (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14657_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17306(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t542 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14659_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17307(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t542 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14661_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m17308(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t542 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14663_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m17309(__this, ___key, method) (( bool (*) (Dictionary_2_t542 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14665_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m17310(__this, ___key, method) (( void (*) (Dictionary_2_t542 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14667_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17311(__this, method) (( bool (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14669_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17312(__this, method) (( Object_t * (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17313(__this, method) (( bool (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14673_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17314(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t542 *, KeyValuePair_2_t3015 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14675_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17315(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t542 *, KeyValuePair_2_t3015 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14677_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17316(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t542 *, KeyValuePair_2U5BU5D_t3653*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14679_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17317(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t542 *, KeyValuePair_2_t3015 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14681_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17318(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t542 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14683_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17319(__this, method) (( Object_t * (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14685_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17320(__this, method) (( Object_t* (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14687_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17321(__this, method) (( Object_t * (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14689_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Count()
#define Dictionary_2_get_Count_m17322(__this, method) (( int32_t (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_get_Count_m14691_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Item(TKey)
#define Dictionary_2_get_Item_m17323(__this, ___key, method) (( GUIStyle_t525 * (*) (Dictionary_2_t542 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m14693_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m3802(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t542 *, String_t*, GUIStyle_t525 *, MethodInfo*))Dictionary_2_set_Item_m14695_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17324(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t542 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14697_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17325(__this, ___size, method) (( void (*) (Dictionary_2_t542 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14699_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17326(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t542 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14701_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17327(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3015  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t525 *, MethodInfo*))Dictionary_2_make_pair_m14703_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m17328(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t525 *, MethodInfo*))Dictionary_2_pick_key_m14705_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17329(__this /* static, unused */, ___key, ___value, method) (( GUIStyle_t525 * (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t525 *, MethodInfo*))Dictionary_2_pick_value_m14707_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17330(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t542 *, KeyValuePair_2U5BU5D_t3653*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14709_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Resize()
#define Dictionary_2_Resize_m17331(__this, method) (( void (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_Resize_m14711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Add(TKey,TValue)
#define Dictionary_2_Add_m17332(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t542 *, String_t*, GUIStyle_t525 *, MethodInfo*))Dictionary_2_Add_m14712_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Clear()
#define Dictionary_2_Clear_m17333(__this, method) (( void (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_Clear_m14714_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m17334(__this, ___key, method) (( bool (*) (Dictionary_2_t542 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m14716_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17335(__this, ___value, method) (( bool (*) (Dictionary_2_t542 *, GUIStyle_t525 *, MethodInfo*))Dictionary_2_ContainsValue_m14718_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m17336(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t542 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m14720_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m17337(__this, ___sender, method) (( void (*) (Dictionary_2_t542 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14722_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Remove(TKey)
#define Dictionary_2_Remove_m17338(__this, ___key, method) (( bool (*) (Dictionary_2_t542 *, String_t*, MethodInfo*))Dictionary_2_Remove_m14724_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m3803(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t542 *, String_t*, GUIStyle_t525 **, MethodInfo*))Dictionary_2_TryGetValue_m14725_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Keys()
#define Dictionary_2_get_Keys_m17339(__this, method) (( KeyCollection_t3017 * (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_get_Keys_m14727_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
#define Dictionary_2_get_Values_m3804(__this, method) (( ValueCollection_t743 * (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_get_Values_m14729_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17340(__this, ___key, method) (( String_t* (*) (Dictionary_2_t542 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14731_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17341(__this, ___value, method) (( GUIStyle_t525 * (*) (Dictionary_2_t542 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14733_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17342(__this, ___pair, method) (( bool (*) (Dictionary_2_t542 *, KeyValuePair_2_t3015 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14735_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m17343(__this, method) (( Enumerator_t3019  (*) (Dictionary_2_t542 *, MethodInfo*))Dictionary_2_GetEnumerator_m14737_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17344(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t525 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14739_gshared)(__this /* static, unused */, ___key, ___value, method)
