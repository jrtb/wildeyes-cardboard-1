#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_t240;
// System.Collections.Generic.ICollection`1<UnityEngine.Canvas>
struct ICollection_1_t3614;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ICollection_1_t3617;
// System.Object
struct Object_t;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t376;
// UnityEngine.Canvas
struct Canvas_t229;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct KeyCollection_t2851;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ValueCollection_t2855;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Canvas>
struct IEqualityComparer_1_t2832;
// System.Collections.Generic.IDictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct IDictionary_2_t3618;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>[]
struct KeyValuePair_2U5BU5D_t3619;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
struct IEnumerator_1_t3620;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"
#define Dictionary_2__ctor_m2059(__this, method) (( void (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2__ctor_m14643_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15559(__this, ___comparer, method) (( void (*) (Dictionary_2_t240 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14645_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m15560(__this, ___dictionary, method) (( void (*) (Dictionary_2_t240 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14647_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m15561(__this, ___capacity, method) (( void (*) (Dictionary_2_t240 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14649_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15562(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t240 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m14651_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m15563(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t240 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m14653_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15564(__this, method) (( Object_t* (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14655_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15565(__this, method) (( Object_t* (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14657_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15566(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t240 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14659_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15567(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t240 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14661_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m15568(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t240 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14663_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m15569(__this, ___key, method) (( bool (*) (Dictionary_2_t240 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14665_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m15570(__this, ___key, method) (( void (*) (Dictionary_2_t240 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14667_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15571(__this, method) (( bool (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14669_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15572(__this, method) (( Object_t * (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15573(__this, method) (( bool (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14673_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15574(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t240 *, KeyValuePair_2_t2834 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14675_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15575(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t240 *, KeyValuePair_2_t2834 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14677_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15576(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t240 *, KeyValuePair_2U5BU5D_t3619*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14679_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15577(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t240 *, KeyValuePair_2_t2834 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14681_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15578(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t240 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14683_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15579(__this, method) (( Object_t * (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14685_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15580(__this, method) (( Object_t* (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14687_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15581(__this, method) (( Object_t * (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14689_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Count()
#define Dictionary_2_get_Count_m15582(__this, method) (( int32_t (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_get_Count_m14691_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Item(TKey)
#define Dictionary_2_get_Item_m15583(__this, ___key, method) (( IndexedSet_1_t376 * (*) (Dictionary_2_t240 *, Canvas_t229 *, MethodInfo*))Dictionary_2_get_Item_m14693_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m15584(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t240 *, Canvas_t229 *, IndexedSet_1_t376 *, MethodInfo*))Dictionary_2_set_Item_m14695_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m15585(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t240 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14697_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m15586(__this, ___size, method) (( void (*) (Dictionary_2_t240 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14699_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m15587(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t240 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14701_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m15588(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2834  (*) (Object_t * /* static, unused */, Canvas_t229 *, IndexedSet_1_t376 *, MethodInfo*))Dictionary_2_make_pair_m14703_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m15589(__this /* static, unused */, ___key, ___value, method) (( Canvas_t229 * (*) (Object_t * /* static, unused */, Canvas_t229 *, IndexedSet_1_t376 *, MethodInfo*))Dictionary_2_pick_key_m14705_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m15590(__this /* static, unused */, ___key, ___value, method) (( IndexedSet_1_t376 * (*) (Object_t * /* static, unused */, Canvas_t229 *, IndexedSet_1_t376 *, MethodInfo*))Dictionary_2_pick_value_m14707_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m15591(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t240 *, KeyValuePair_2U5BU5D_t3619*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14709_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Resize()
#define Dictionary_2_Resize_m15592(__this, method) (( void (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_Resize_m14711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Add(TKey,TValue)
#define Dictionary_2_Add_m2063(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t240 *, Canvas_t229 *, IndexedSet_1_t376 *, MethodInfo*))Dictionary_2_Add_m14712_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Clear()
#define Dictionary_2_Clear_m15593(__this, method) (( void (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_Clear_m14714_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m15594(__this, ___key, method) (( bool (*) (Dictionary_2_t240 *, Canvas_t229 *, MethodInfo*))Dictionary_2_ContainsKey_m14716_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m15595(__this, ___value, method) (( bool (*) (Dictionary_2_t240 *, IndexedSet_1_t376 *, MethodInfo*))Dictionary_2_ContainsValue_m14718_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m15596(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t240 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m14720_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m15597(__this, ___sender, method) (( void (*) (Dictionary_2_t240 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14722_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Remove(TKey)
#define Dictionary_2_Remove_m15598(__this, ___key, method) (( bool (*) (Dictionary_2_t240 *, Canvas_t229 *, MethodInfo*))Dictionary_2_Remove_m14724_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m2060(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t240 *, Canvas_t229 *, IndexedSet_1_t376 **, MethodInfo*))Dictionary_2_TryGetValue_m14725_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Keys()
#define Dictionary_2_get_Keys_m15599(__this, method) (( KeyCollection_t2851 * (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_get_Keys_m14727_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Values()
#define Dictionary_2_get_Values_m15600(__this, method) (( ValueCollection_t2855 * (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_get_Values_m14729_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m15601(__this, ___key, method) (( Canvas_t229 * (*) (Dictionary_2_t240 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14731_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m15602(__this, ___value, method) (( IndexedSet_1_t376 * (*) (Dictionary_2_t240 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14733_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m15603(__this, ___pair, method) (( bool (*) (Dictionary_2_t240 *, KeyValuePair_2_t2834 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14735_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m15604(__this, method) (( Enumerator_t2853  (*) (Dictionary_2_t240 *, MethodInfo*))Dictionary_2_GetEnumerator_m14737_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m15605(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, Canvas_t229 *, IndexedSet_1_t376 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14739_gshared)(__this /* static, unused */, ___key, ___value, method)
