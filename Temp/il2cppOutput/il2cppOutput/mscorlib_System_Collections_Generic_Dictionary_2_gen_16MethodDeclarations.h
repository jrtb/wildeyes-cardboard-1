#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2746;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t648;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2749;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2753;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2704;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t3601;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3602;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3603;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14643_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m14643(__this, method) (( void (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2__ctor_m14643_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14645_gshared (Dictionary_2_t2746 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m14645(__this, ___comparer, method) (( void (*) (Dictionary_2_t2746 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14645_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m14647_gshared (Dictionary_2_t2746 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m14647(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2746 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14647_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14649_gshared (Dictionary_2_t2746 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m14649(__this, ___capacity, method) (( void (*) (Dictionary_2_t2746 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14649_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14651_gshared (Dictionary_2_t2746 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m14651(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2746 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m14651_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14653_gshared (Dictionary_2_t2746 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m14653(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2746 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m14653_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14655_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14655(__this, method) (( Object_t* (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14655_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14657_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14657(__this, method) (( Object_t* (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14657_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14659_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14659(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2746 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14659_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14661_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14661(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2746 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14661_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14663_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14663(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2746 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14663_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14665_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14665(__this, ___key, method) (( bool (*) (Dictionary_2_t2746 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14665_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14667_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14667(__this, ___key, method) (( void (*) (Dictionary_2_t2746 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14667_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14669_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14669(__this, method) (( bool (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14669_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14671_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14671(__this, method) (( Object_t * (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14673_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14673(__this, method) (( bool (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14673_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14675_gshared (Dictionary_2_t2746 * __this, KeyValuePair_2_t2747  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14675(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2746 *, KeyValuePair_2_t2747 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14675_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14677_gshared (Dictionary_2_t2746 * __this, KeyValuePair_2_t2747  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14677(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2746 *, KeyValuePair_2_t2747 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14677_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14679_gshared (Dictionary_2_t2746 * __this, KeyValuePair_2U5BU5D_t3602* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14679(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2746 *, KeyValuePair_2U5BU5D_t3602*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14679_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14681_gshared (Dictionary_2_t2746 * __this, KeyValuePair_2_t2747  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14681(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2746 *, KeyValuePair_2_t2747 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14681_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14683_gshared (Dictionary_2_t2746 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14683(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2746 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14683_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14685_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14685(__this, method) (( Object_t * (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14685_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14687_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14687(__this, method) (( Object_t* (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14687_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14689_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14689(__this, method) (( Object_t * (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14689_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14691_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m14691(__this, method) (( int32_t (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_get_Count_m14691_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14693_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m14693(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2746 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m14693_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14695_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m14695(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2746 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_set_Item_m14695_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14697_gshared (Dictionary_2_t2746 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m14697(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2746 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14697_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14699_gshared (Dictionary_2_t2746 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m14699(__this, ___size, method) (( void (*) (Dictionary_2_t2746 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14699_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14701_gshared (Dictionary_2_t2746 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14701(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2746 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14701_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2747  Dictionary_2_make_pair_m14703_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m14703(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2747  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_make_pair_m14703_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14705_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m14705(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_pick_key_m14705_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14707_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m14707(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_pick_value_m14707_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14709_gshared (Dictionary_2_t2746 * __this, KeyValuePair_2U5BU5D_t3602* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m14709(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2746 *, KeyValuePair_2U5BU5D_t3602*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14709_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14711_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m14711(__this, method) (( void (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_Resize_m14711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14712_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m14712(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2746 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_Add_m14712_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14714_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m14714(__this, method) (( void (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_Clear_m14714_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14716_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m14716(__this, ___key, method) (( bool (*) (Dictionary_2_t2746 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m14716_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14718_gshared (Dictionary_2_t2746 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m14718(__this, ___value, method) (( bool (*) (Dictionary_2_t2746 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m14718_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14720_gshared (Dictionary_2_t2746 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m14720(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2746 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m14720_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14722_gshared (Dictionary_2_t2746 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14722(__this, ___sender, method) (( void (*) (Dictionary_2_t2746 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14722_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14724_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m14724(__this, ___key, method) (( bool (*) (Dictionary_2_t2746 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m14724_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14725_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m14725(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2746 *, Object_t *, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m14725_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2749 * Dictionary_2_get_Keys_m14727_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m14727(__this, method) (( KeyCollection_t2749 * (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_get_Keys_m14727_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2753 * Dictionary_2_get_Values_m14729_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m14729(__this, method) (( ValueCollection_t2753 * (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_get_Values_m14729_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14731_gshared (Dictionary_2_t2746 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m14731(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2746 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14731_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14733_gshared (Dictionary_2_t2746 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m14733(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2746 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14733_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14735_gshared (Dictionary_2_t2746 * __this, KeyValuePair_2_t2747  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14735(__this, ___pair, method) (( bool (*) (Dictionary_2_t2746 *, KeyValuePair_2_t2747 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14735_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2751  Dictionary_2_GetEnumerator_m14737_gshared (Dictionary_2_t2746 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14737(__this, method) (( Enumerator_t2751  (*) (Dictionary_2_t2746 *, MethodInfo*))Dictionary_2_GetEnumerator_m14737_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1014  Dictionary_2_U3CCopyToU3Em__0_m14739_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14739(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14739_gshared)(__this /* static, unused */, ___key, ___value, method)
