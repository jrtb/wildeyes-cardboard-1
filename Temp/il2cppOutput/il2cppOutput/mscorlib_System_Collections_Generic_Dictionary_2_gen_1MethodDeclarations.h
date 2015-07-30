#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct Dictionary_2_t377;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t375;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3575;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t233;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.Graphic,System.Int32>
struct KeyCollection_t2839;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
struct ValueCollection_t2843;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Graphic>
struct IEqualityComparer_1_t2835;
// System.Collections.Generic.IDictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct IDictionary_2_t3621;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3622;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
struct IEnumerator_1_t3623;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
#define Dictionary_2__ctor_m15626(__this, method) (( void (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2__ctor_m14226_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15627(__this, ___comparer, method) (( void (*) (Dictionary_2_t377 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14227_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m15628(__this, ___dictionary, method) (( void (*) (Dictionary_2_t377 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14228_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m15629(__this, ___capacity, method) (( void (*) (Dictionary_2_t377 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14229_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15630(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t377 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m14230_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m15631(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t377 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m14231_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15632(__this, method) (( Object_t* (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14232_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15633(__this, method) (( Object_t* (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14233_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15634(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t377 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14234_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15635(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t377 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14235_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m15636(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t377 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14236_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m15637(__this, ___key, method) (( bool (*) (Dictionary_2_t377 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14237_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m15638(__this, ___key, method) (( void (*) (Dictionary_2_t377 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14238_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15639(__this, method) (( bool (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14239_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15640(__this, method) (( Object_t * (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14240_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15641(__this, method) (( bool (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14241_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15642(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t377 *, KeyValuePair_2_t2837 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14242_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15643(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t377 *, KeyValuePair_2_t2837 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14243_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15644(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t377 *, KeyValuePair_2U5BU5D_t3622*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14244_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15645(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t377 *, KeyValuePair_2_t2837 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14245_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15646(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t377 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14246_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15647(__this, method) (( Object_t * (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14247_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15648(__this, method) (( Object_t* (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14248_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15649(__this, method) (( Object_t * (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14249_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m15650(__this, method) (( int32_t (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_get_Count_m14250_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m15651(__this, ___key, method) (( int32_t (*) (Dictionary_2_t377 *, Graphic_t233 *, MethodInfo*))Dictionary_2_get_Item_m14251_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m15652(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t377 *, Graphic_t233 *, int32_t, MethodInfo*))Dictionary_2_set_Item_m14252_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m15653(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t377 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14253_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m15654(__this, ___size, method) (( void (*) (Dictionary_2_t377 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14254_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m15655(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t377 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14255_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m15656(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2837  (*) (Object_t * /* static, unused */, Graphic_t233 *, int32_t, MethodInfo*))Dictionary_2_make_pair_m14256_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m15657(__this /* static, unused */, ___key, ___value, method) (( Graphic_t233 * (*) (Object_t * /* static, unused */, Graphic_t233 *, int32_t, MethodInfo*))Dictionary_2_pick_key_m14257_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m15658(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Graphic_t233 *, int32_t, MethodInfo*))Dictionary_2_pick_value_m14258_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m15659(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t377 *, KeyValuePair_2U5BU5D_t3622*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14259_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Resize()
#define Dictionary_2_Resize_m15660(__this, method) (( void (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_Resize_m14260_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m15661(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t377 *, Graphic_t233 *, int32_t, MethodInfo*))Dictionary_2_Add_m14261_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Clear()
#define Dictionary_2_Clear_m15662(__this, method) (( void (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_Clear_m14262_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m15663(__this, ___key, method) (( bool (*) (Dictionary_2_t377 *, Graphic_t233 *, MethodInfo*))Dictionary_2_ContainsKey_m14263_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m15664(__this, ___value, method) (( bool (*) (Dictionary_2_t377 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m14264_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m15665(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t377 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m14265_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m15666(__this, ___sender, method) (( void (*) (Dictionary_2_t377 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14266_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m15667(__this, ___key, method) (( bool (*) (Dictionary_2_t377 *, Graphic_t233 *, MethodInfo*))Dictionary_2_Remove_m14267_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m15668(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t377 *, Graphic_t233 *, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m14268_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Keys()
#define Dictionary_2_get_Keys_m15669(__this, method) (( KeyCollection_t2839 * (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_get_Keys_m14269_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m15670(__this, method) (( ValueCollection_t2843 * (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_get_Values_m14270_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m15671(__this, ___key, method) (( Graphic_t233 * (*) (Dictionary_2_t377 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14271_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m15672(__this, ___value, method) (( int32_t (*) (Dictionary_2_t377 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14272_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m15673(__this, ___pair, method) (( bool (*) (Dictionary_2_t377 *, KeyValuePair_2_t2837 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14273_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m15674(__this, method) (( Enumerator_t2841  (*) (Dictionary_2_t377 *, MethodInfo*))Dictionary_2_GetEnumerator_m14274_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m15675(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, Graphic_t233 *, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14275_gshared)(__this /* static, unused */, ___key, ___value, method)
