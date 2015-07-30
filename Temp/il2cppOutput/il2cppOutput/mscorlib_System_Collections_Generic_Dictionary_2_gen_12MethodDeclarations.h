#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1054;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t647;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t3736;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t3424;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t3428;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2438;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3737;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3738;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t3739;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24MethodDeclarations.h"
#define Dictionary_2__ctor_m21120(__this, method) (( void (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2__ctor_m21121_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m5279(__this, ___comparer, method) (( void (*) (Dictionary_2_t1054 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m21122_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m21123(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1054 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m21124_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
#define Dictionary_2__ctor_m21125(__this, ___capacity, method) (( void (*) (Dictionary_2_t1054 *, int32_t, MethodInfo*))Dictionary_2__ctor_m21126_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m21127(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1054 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m21128_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m21129(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1054 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m21130_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21131(__this, method) (( Object_t* (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21132_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21133(__this, method) (( Object_t* (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21134_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21135(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1054 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21136_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21137(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1054 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21138_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m21139(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1054 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21140_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m21141(__this, ___key, method) (( bool (*) (Dictionary_2_t1054 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21142_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m21143(__this, ___key, method) (( void (*) (Dictionary_2_t1054 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21144_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21145(__this, method) (( bool (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21146_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21147(__this, method) (( Object_t * (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21148_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21149(__this, method) (( bool (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21150_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21151(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1054 *, KeyValuePair_2_t3419 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21152_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21153(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1054 *, KeyValuePair_2_t3419 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21154_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21155(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1054 *, KeyValuePair_2U5BU5D_t3738*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21156_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21157(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1054 *, KeyValuePair_2_t3419 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21158_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21159(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1054 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21160_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21161(__this, method) (( Object_t * (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21162_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21163(__this, method) (( Object_t* (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21164_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21165(__this, method) (( Object_t * (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21166_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
#define Dictionary_2_get_Count_m21167(__this, method) (( int32_t (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_get_Count_m21168_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
#define Dictionary_2_get_Item_m21169(__this, ___key, method) (( bool (*) (Dictionary_2_t1054 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m21170_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m21171(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1054 *, String_t*, bool, MethodInfo*))Dictionary_2_set_Item_m21172_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m21173(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1054 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m21174_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m21175(__this, ___size, method) (( void (*) (Dictionary_2_t1054 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m21176_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m21177(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1054 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m21178_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m21179(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3419  (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_make_pair_m21180_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m21181(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_pick_key_m21182_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m21183(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_pick_value_m21184_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m21185(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1054 *, KeyValuePair_2U5BU5D_t3738*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m21186_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
#define Dictionary_2_Resize_m21187(__this, method) (( void (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_Resize_m21188_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
#define Dictionary_2_Add_m5280(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1054 *, String_t*, bool, MethodInfo*))Dictionary_2_Add_m21189_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
#define Dictionary_2_Clear_m21190(__this, method) (( void (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_Clear_m21191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m21192(__this, ___key, method) (( bool (*) (Dictionary_2_t1054 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m21193_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m21194(__this, ___value, method) (( bool (*) (Dictionary_2_t1054 *, bool, MethodInfo*))Dictionary_2_ContainsValue_m21195_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m21196(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1054 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m21197_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m21198(__this, ___sender, method) (( void (*) (Dictionary_2_t1054 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m21199_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
#define Dictionary_2_Remove_m21200(__this, ___key, method) (( bool (*) (Dictionary_2_t1054 *, String_t*, MethodInfo*))Dictionary_2_Remove_m21201_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m21202(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1054 *, String_t*, bool*, MethodInfo*))Dictionary_2_TryGetValue_m21203_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Keys()
#define Dictionary_2_get_Keys_m21204(__this, method) (( KeyCollection_t3424 * (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_get_Keys_m21205_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
#define Dictionary_2_get_Values_m21206(__this, method) (( ValueCollection_t3428 * (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_get_Values_m21207_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m21208(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1054 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m21209_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m21210(__this, ___value, method) (( bool (*) (Dictionary_2_t1054 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m21211_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m21212(__this, ___pair, method) (( bool (*) (Dictionary_2_t1054 *, KeyValuePair_2_t3419 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21213_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m21214(__this, method) (( Enumerator_t3426  (*) (Dictionary_2_t1054 *, MethodInfo*))Dictionary_2_GetEnumerator_m21215_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m21216(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21217_gshared)(__this /* static, unused */, ___key, ___value, method)
