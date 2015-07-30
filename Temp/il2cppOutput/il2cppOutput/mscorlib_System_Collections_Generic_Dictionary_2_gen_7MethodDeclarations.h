#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t618;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t647;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3672;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
struct KeyCollection_t3122;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
struct ValueCollection_t3126;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2438;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t3673;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t3674;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t3675;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
#define Dictionary_2__ctor_m18321(__this, method) (( void (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2__ctor_m18322_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18323(__this, ___comparer, method) (( void (*) (Dictionary_2_t618 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18324_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m18325(__this, ___dictionary, method) (( void (*) (Dictionary_2_t618 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18326_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Int32)
#define Dictionary_2__ctor_m18327(__this, ___capacity, method) (( void (*) (Dictionary_2_t618 *, int32_t, MethodInfo*))Dictionary_2__ctor_m18328_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18329(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t618 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m18330_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m18331(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t618 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m18332_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18333(__this, method) (( Object_t* (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18334_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18335(__this, method) (( Object_t* (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18337(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t618 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18338_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18339(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t618 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18340_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m18341(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t618 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18342_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m18343(__this, ___key, method) (( bool (*) (Dictionary_2_t618 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18344_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m18345(__this, ___key, method) (( void (*) (Dictionary_2_t618 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18346_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18347(__this, method) (( bool (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18348_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18349(__this, method) (( Object_t * (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18351(__this, method) (( bool (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18352_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18353(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t618 *, KeyValuePair_2_t3120 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18354_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18355(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t618 *, KeyValuePair_2_t3120 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18356_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18357(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t618 *, KeyValuePair_2U5BU5D_t3674*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18358_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18359(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t618 *, KeyValuePair_2_t3120 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18360_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18361(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t618 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18362_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18363(__this, method) (( Object_t * (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18364_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18365(__this, method) (( Object_t* (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18366_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18367(__this, method) (( Object_t * (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18368_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count()
#define Dictionary_2_get_Count_m3873(__this, method) (( int32_t (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_get_Count_m18369_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Item(TKey)
#define Dictionary_2_get_Item_m18370(__this, ___key, method) (( int64_t (*) (Dictionary_2_t618 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m18371_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m18372(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t618 *, String_t*, int64_t, MethodInfo*))Dictionary_2_set_Item_m18373_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m18374(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t618 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m18375_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m18376(__this, ___size, method) (( void (*) (Dictionary_2_t618 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m18377_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m18378(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t618 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m18379_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m18380(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3120  (*) (Object_t * /* static, unused */, String_t*, int64_t, MethodInfo*))Dictionary_2_make_pair_m18381_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m18382(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, int64_t, MethodInfo*))Dictionary_2_pick_key_m18383_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m18384(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, String_t*, int64_t, MethodInfo*))Dictionary_2_pick_value_m18385_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m18386(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t618 *, KeyValuePair_2U5BU5D_t3674*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m18387_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Resize()
#define Dictionary_2_Resize_m18388(__this, method) (( void (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_Resize_m18389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Add(TKey,TValue)
#define Dictionary_2_Add_m18390(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t618 *, String_t*, int64_t, MethodInfo*))Dictionary_2_Add_m18391_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Clear()
#define Dictionary_2_Clear_m18392(__this, method) (( void (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_Clear_m18393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m18394(__this, ___key, method) (( bool (*) (Dictionary_2_t618 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m18395_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m18396(__this, ___value, method) (( bool (*) (Dictionary_2_t618 *, int64_t, MethodInfo*))Dictionary_2_ContainsValue_m18397_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m18398(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t618 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m18399_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m18400(__this, ___sender, method) (( void (*) (Dictionary_2_t618 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m18401_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Remove(TKey)
#define Dictionary_2_Remove_m18402(__this, ___key, method) (( bool (*) (Dictionary_2_t618 *, String_t*, MethodInfo*))Dictionary_2_Remove_m18403_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m18404(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t618 *, String_t*, int64_t*, MethodInfo*))Dictionary_2_TryGetValue_m18405_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Keys()
#define Dictionary_2_get_Keys_m18406(__this, method) (( KeyCollection_t3122 * (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_get_Keys_m18407_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Values()
#define Dictionary_2_get_Values_m18408(__this, method) (( ValueCollection_t3126 * (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_get_Values_m18409_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m18410(__this, ___key, method) (( String_t* (*) (Dictionary_2_t618 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m18411_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m18412(__this, ___value, method) (( int64_t (*) (Dictionary_2_t618 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m18413_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m18414(__this, ___pair, method) (( bool (*) (Dictionary_2_t618 *, KeyValuePair_2_t3120 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18415_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m18416(__this, method) (( Enumerator_t3124  (*) (Dictionary_2_t618 *, MethodInfo*))Dictionary_2_GetEnumerator_m18417_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int64>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m18418(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, String_t*, int64_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18419_gshared)(__this /* static, unused */, ___key, ___value, method)
