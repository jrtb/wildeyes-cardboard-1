#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t645;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t647;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t648;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t755;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t756;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2438;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t615;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t649;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t651;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"
#define Dictionary_2__ctor_m3896(__this, method) (( void (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2__ctor_m14643_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19277(__this, ___comparer, method) (( void (*) (Dictionary_2_t645 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14645_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19278(__this, ___dictionary, method) (( void (*) (Dictionary_2_t645 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14647_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19279(__this, ___capacity, method) (( void (*) (Dictionary_2_t645 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14649_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19280(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t645 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m14651_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19281(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t645 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m14653_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19282(__this, method) (( Object_t* (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14655_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19283(__this, method) (( Object_t* (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14657_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19284(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t645 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14659_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19285(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t645 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14661_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19286(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t645 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14663_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19287(__this, ___key, method) (( bool (*) (Dictionary_2_t645 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14665_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19288(__this, ___key, method) (( void (*) (Dictionary_2_t645 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14667_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19289(__this, method) (( bool (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14669_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19290(__this, method) (( Object_t * (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19291(__this, method) (( bool (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14673_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19292(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t645 *, KeyValuePair_2_t650 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14675_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19293(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t645 *, KeyValuePair_2_t650 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14677_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19294(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t645 *, KeyValuePair_2U5BU5D_t649*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14679_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19295(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t645 *, KeyValuePair_2_t650 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14681_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19296(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t645 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14683_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19297(__this, method) (( Object_t * (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14685_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19298(__this, method) (( Object_t* (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14687_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19299(__this, method) (( Object_t * (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14689_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m3895(__this, method) (( int32_t (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_get_Count_m14691_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
#define Dictionary_2_get_Item_m3893(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t645 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m14693_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m3894(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t645 *, String_t*, Object_t *, MethodInfo*))Dictionary_2_set_Item_m14695_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19300(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t645 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14697_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19301(__this, ___size, method) (( void (*) (Dictionary_2_t645 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14699_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19302(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t645 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14701_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m19303(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t650  (*) (Object_t * /* static, unused */, String_t*, Object_t *, MethodInfo*))Dictionary_2_make_pair_m14703_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19304(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, MethodInfo*))Dictionary_2_pick_key_m14705_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19305(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, MethodInfo*))Dictionary_2_pick_value_m14707_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19306(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t645 *, KeyValuePair_2U5BU5D_t649*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14709_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Resize()
#define Dictionary_2_Resize_m19307(__this, method) (( void (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_Resize_m14711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
#define Dictionary_2_Add_m3897(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t645 *, String_t*, Object_t *, MethodInfo*))Dictionary_2_Add_m14712_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m3900(__this, method) (( void (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_Clear_m14714_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m3901(__this, ___key, method) (( bool (*) (Dictionary_2_t645 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m14716_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19308(__this, ___value, method) (( bool (*) (Dictionary_2_t645 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m14718_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m19309(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t645 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m14720_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m19310(__this, ___sender, method) (( void (*) (Dictionary_2_t645 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14722_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
#define Dictionary_2_Remove_m3898(__this, ___key, method) (( bool (*) (Dictionary_2_t645 *, String_t*, MethodInfo*))Dictionary_2_Remove_m14724_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m3899(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t645 *, String_t*, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m14725_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m3905(__this, method) (( KeyCollection_t755 * (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_get_Keys_m14727_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
#define Dictionary_2_get_Values_m3906(__this, method) (( ValueCollection_t756 * (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_get_Values_m14729_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m19311(__this, ___key, method) (( String_t* (*) (Dictionary_2_t645 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14731_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m19312(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t645 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14733_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m19313(__this, ___pair, method) (( bool (*) (Dictionary_2_t645 *, KeyValuePair_2_t650 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14735_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3907(__this, method) (( Enumerator_t753  (*) (Dictionary_2_t645 *, MethodInfo*))Dictionary_2_GetEnumerator_m14737_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Object>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m19314(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, String_t*, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14739_gshared)(__this /* static, unused */, ___key, ___value, method)
