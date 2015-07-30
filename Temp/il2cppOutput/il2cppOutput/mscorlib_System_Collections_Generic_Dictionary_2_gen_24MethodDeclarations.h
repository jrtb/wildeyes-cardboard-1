#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3407;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t648;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t3740;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t3410;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t3414;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2704;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t3741;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t3742;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t3743;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m21121_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m21121(__this, method) (( void (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2__ctor_m21121_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21122_gshared (Dictionary_2_t3407 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m21122(__this, ___comparer, method) (( void (*) (Dictionary_2_t3407 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m21122_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21124_gshared (Dictionary_2_t3407 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m21124(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3407 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m21124_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21126_gshared (Dictionary_2_t3407 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m21126(__this, ___capacity, method) (( void (*) (Dictionary_2_t3407 *, int32_t, MethodInfo*))Dictionary_2__ctor_m21126_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21128_gshared (Dictionary_2_t3407 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m21128(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3407 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m21128_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21130_gshared (Dictionary_2_t3407 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m21130(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3407 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m21130_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21132_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21132(__this, method) (( Object_t* (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21132_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21134_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21134(__this, method) (( Object_t* (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21134_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21136_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21136(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3407 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21136_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21138_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21138(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3407 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21138_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21140_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21140(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3407 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21140_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21142_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21142(__this, ___key, method) (( bool (*) (Dictionary_2_t3407 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21142_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21144_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21144(__this, ___key, method) (( void (*) (Dictionary_2_t3407 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21144_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21146_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21146(__this, method) (( bool (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21146_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21148_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21148(__this, method) (( Object_t * (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21148_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21150_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21150(__this, method) (( bool (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21150_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21152_gshared (Dictionary_2_t3407 * __this, KeyValuePair_2_t3408  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21152(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3407 *, KeyValuePair_2_t3408 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21152_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21154_gshared (Dictionary_2_t3407 * __this, KeyValuePair_2_t3408  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21154(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3407 *, KeyValuePair_2_t3408 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21154_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21156_gshared (Dictionary_2_t3407 * __this, KeyValuePair_2U5BU5D_t3742* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21156(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3407 *, KeyValuePair_2U5BU5D_t3742*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21156_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21158_gshared (Dictionary_2_t3407 * __this, KeyValuePair_2_t3408  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21158(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3407 *, KeyValuePair_2_t3408 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21158_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21160_gshared (Dictionary_2_t3407 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21160(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3407 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21160_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21162_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21162(__this, method) (( Object_t * (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21162_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21164_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21164(__this, method) (( Object_t* (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21164_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21166_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21166(__this, method) (( Object_t * (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21166_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21168_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m21168(__this, method) (( int32_t (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_get_Count_m21168_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m21170_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m21170(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t3407 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m21170_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21172_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m21172(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3407 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_set_Item_m21172_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21174_gshared (Dictionary_2_t3407 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m21174(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3407 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m21174_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21176_gshared (Dictionary_2_t3407 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m21176(__this, ___size, method) (( void (*) (Dictionary_2_t3407 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m21176_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21178_gshared (Dictionary_2_t3407 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21178(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3407 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m21178_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3408  Dictionary_2_make_pair_m21180_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m21180(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3408  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_make_pair_m21180_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21182_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m21182(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_key_m21182_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m21184_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m21184(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_value_m21184_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21186_gshared (Dictionary_2_t3407 * __this, KeyValuePair_2U5BU5D_t3742* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m21186(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3407 *, KeyValuePair_2U5BU5D_t3742*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m21186_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m21188_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m21188(__this, method) (( void (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_Resize_m21188_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21189_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m21189(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3407 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_Add_m21189_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m21191_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m21191(__this, method) (( void (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_Clear_m21191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21193_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m21193(__this, ___key, method) (( bool (*) (Dictionary_2_t3407 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m21193_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21195_gshared (Dictionary_2_t3407 * __this, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m21195(__this, ___value, method) (( bool (*) (Dictionary_2_t3407 *, uint8_t, MethodInfo*))Dictionary_2_ContainsValue_m21195_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21197_gshared (Dictionary_2_t3407 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m21197(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3407 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m21197_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21199_gshared (Dictionary_2_t3407 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21199(__this, ___sender, method) (( void (*) (Dictionary_2_t3407 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m21199_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21201_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m21201(__this, ___key, method) (( bool (*) (Dictionary_2_t3407 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m21201_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21203_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, uint8_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m21203(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3407 *, Object_t *, uint8_t*, MethodInfo*))Dictionary_2_TryGetValue_m21203_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t3410 * Dictionary_2_get_Keys_m21205_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m21205(__this, method) (( KeyCollection_t3410 * (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_get_Keys_m21205_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t3414 * Dictionary_2_get_Values_m21207_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m21207(__this, method) (( ValueCollection_t3414 * (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_get_Values_m21207_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21209_gshared (Dictionary_2_t3407 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m21209(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3407 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m21209_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m21211_gshared (Dictionary_2_t3407 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m21211(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t3407 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m21211_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21213_gshared (Dictionary_2_t3407 * __this, KeyValuePair_2_t3408  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21213(__this, ___pair, method) (( bool (*) (Dictionary_2_t3407 *, KeyValuePair_2_t3408 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21213_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t3412  Dictionary_2_GetEnumerator_m21215_gshared (Dictionary_2_t3407 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21215(__this, method) (( Enumerator_t3412  (*) (Dictionary_2_t3407 *, MethodInfo*))Dictionary_2_GetEnumerator_m21215_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1014  Dictionary_2_U3CCopyToU3Em__0_m21217_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21217(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21217_gshared)(__this /* static, unused */, ___key, ___value, method)
