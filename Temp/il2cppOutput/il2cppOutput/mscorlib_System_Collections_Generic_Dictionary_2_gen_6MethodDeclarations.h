#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t560;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t647;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t3042;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t3045;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2438;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t760;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t3659;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t3660;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"
#define Dictionary_2__ctor_m3833(__this, method) (( void (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2__ctor_m14643_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17573(__this, ___comparer, method) (( void (*) (Dictionary_2_t560 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14645_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m17574(__this, ___dictionary, method) (( void (*) (Dictionary_2_t560 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14647_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m17575(__this, ___capacity, method) (( void (*) (Dictionary_2_t560 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14649_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17576(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t560 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m14651_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17577(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t560 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m14653_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17578(__this, method) (( Object_t* (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14655_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17579(__this, method) (( Object_t* (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14657_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17580(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t560 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14659_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17581(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t560 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14661_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m17582(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t560 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14663_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m17583(__this, ___key, method) (( bool (*) (Dictionary_2_t560 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14665_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m17584(__this, ___key, method) (( void (*) (Dictionary_2_t560 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14667_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17585(__this, method) (( bool (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14669_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17586(__this, method) (( Object_t * (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17587(__this, method) (( bool (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14673_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17588(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t560 *, KeyValuePair_2_t747 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14675_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17589(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t560 *, KeyValuePair_2_t747 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14677_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17590(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t560 *, KeyValuePair_2U5BU5D_t3659*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14679_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17591(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t560 *, KeyValuePair_2_t747 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14681_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17592(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t560 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14683_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17593(__this, method) (( Object_t * (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14685_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17594(__this, method) (( Object_t* (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14687_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17595(__this, method) (( Object_t * (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14689_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
#define Dictionary_2_get_Count_m3831(__this, method) (( int32_t (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_get_Count_m14691_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m17596(__this, ___key, method) (( String_t* (*) (Dictionary_2_t560 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m14693_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m3837(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t560 *, String_t*, String_t*, MethodInfo*))Dictionary_2_set_Item_m14695_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17597(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t560 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14697_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17598(__this, ___size, method) (( void (*) (Dictionary_2_t560 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14699_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17599(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t560 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14701_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17600(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t747  (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_make_pair_m14703_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m17601(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_pick_key_m14705_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17602(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_pick_value_m14707_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17603(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t560 *, KeyValuePair_2U5BU5D_t3659*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14709_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Resize()
#define Dictionary_2_Resize_m17604(__this, method) (( void (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_Resize_m14711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m17605(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t560 *, String_t*, String_t*, MethodInfo*))Dictionary_2_Add_m14712_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
#define Dictionary_2_Clear_m17606(__this, method) (( void (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_Clear_m14714_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m17607(__this, ___key, method) (( bool (*) (Dictionary_2_t560 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m14716_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17608(__this, ___value, method) (( bool (*) (Dictionary_2_t560 *, String_t*, MethodInfo*))Dictionary_2_ContainsValue_m14718_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m17609(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t560 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m14720_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m17610(__this, ___sender, method) (( void (*) (Dictionary_2_t560 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14722_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m17611(__this, ___key, method) (( bool (*) (Dictionary_2_t560 *, String_t*, MethodInfo*))Dictionary_2_Remove_m14724_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m3825(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t560 *, String_t*, String_t**, MethodInfo*))Dictionary_2_TryGetValue_m14725_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m17612(__this, method) (( KeyCollection_t3042 * (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_get_Keys_m14727_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Values()
#define Dictionary_2_get_Values_m17613(__this, method) (( ValueCollection_t3045 * (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_get_Values_m14729_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17614(__this, ___key, method) (( String_t* (*) (Dictionary_2_t560 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14731_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17615(__this, ___value, method) (( String_t* (*) (Dictionary_2_t560 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14733_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17616(__this, ___pair, method) (( bool (*) (Dictionary_2_t560 *, KeyValuePair_2_t747 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14735_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3840(__this, method) (( Enumerator_t746  (*) (Dictionary_2_t560 *, MethodInfo*))Dictionary_2_GetEnumerator_m14737_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17617(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14739_gshared)(__this /* static, unused */, ___key, ___value, method)
