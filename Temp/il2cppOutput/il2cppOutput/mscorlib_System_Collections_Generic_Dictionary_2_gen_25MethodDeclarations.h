#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1124;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3575;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t3445;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t3449;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2653;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t3746;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3747;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t3748;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m21439_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m21439(__this, method) (( void (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2__ctor_m21439_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21440_gshared (Dictionary_2_t1124 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m21440(__this, ___comparer, method) (( void (*) (Dictionary_2_t1124 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m21440_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21441_gshared (Dictionary_2_t1124 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m21441(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1124 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m21441_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21442_gshared (Dictionary_2_t1124 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m21442(__this, ___capacity, method) (( void (*) (Dictionary_2_t1124 *, int32_t, MethodInfo*))Dictionary_2__ctor_m21442_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21443_gshared (Dictionary_2_t1124 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m21443(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1124 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m21443_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21444_gshared (Dictionary_2_t1124 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m21444(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1124 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m21444_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21445_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21445(__this, method) (( Object_t* (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21445_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21446_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21446(__this, method) (( Object_t* (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21446_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21447_gshared (Dictionary_2_t1124 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21447(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1124 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21447_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21448_gshared (Dictionary_2_t1124 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21448(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1124 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21448_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21449_gshared (Dictionary_2_t1124 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21449(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1124 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21449_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21450_gshared (Dictionary_2_t1124 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21450(__this, ___key, method) (( bool (*) (Dictionary_2_t1124 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21450_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21451_gshared (Dictionary_2_t1124 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21451(__this, ___key, method) (( void (*) (Dictionary_2_t1124 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21451_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21452_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21452(__this, method) (( bool (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21452_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21453_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21453(__this, method) (( Object_t * (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21453_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21454_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21454(__this, method) (( bool (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21454_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21455_gshared (Dictionary_2_t1124 * __this, KeyValuePair_2_t3443  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21455(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1124 *, KeyValuePair_2_t3443 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21455_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21456_gshared (Dictionary_2_t1124 * __this, KeyValuePair_2_t3443  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21456(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1124 *, KeyValuePair_2_t3443 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21456_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21457_gshared (Dictionary_2_t1124 * __this, KeyValuePair_2U5BU5D_t3747* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21457(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1124 *, KeyValuePair_2U5BU5D_t3747*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21457_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21458_gshared (Dictionary_2_t1124 * __this, KeyValuePair_2_t3443  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21458(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1124 *, KeyValuePair_2_t3443 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21458_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21459_gshared (Dictionary_2_t1124 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21459(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1124 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21459_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21460_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21460(__this, method) (( Object_t * (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21460_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21461_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21461(__this, method) (( Object_t* (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21461_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21462_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21462(__this, method) (( Object_t * (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21462_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21463_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m21463(__this, method) (( int32_t (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_get_Count_m21463_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m21464_gshared (Dictionary_2_t1124 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m21464(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1124 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m21464_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21465_gshared (Dictionary_2_t1124 * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m21465(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1124 *, int32_t, int32_t, MethodInfo*))Dictionary_2_set_Item_m21465_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21466_gshared (Dictionary_2_t1124 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m21466(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1124 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m21466_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21467_gshared (Dictionary_2_t1124 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m21467(__this, ___size, method) (( void (*) (Dictionary_2_t1124 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m21467_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21468_gshared (Dictionary_2_t1124 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21468(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1124 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m21468_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3443  Dictionary_2_make_pair_m21469_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m21469(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3443  (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_make_pair_m21469_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m21470_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m21470(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_pick_key_m21470_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m21471_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m21471(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_pick_value_m21471_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21472_gshared (Dictionary_2_t1124 * __this, KeyValuePair_2U5BU5D_t3747* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m21472(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1124 *, KeyValuePair_2U5BU5D_t3747*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m21472_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m21473_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m21473(__this, method) (( void (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_Resize_m21473_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21474_gshared (Dictionary_2_t1124 * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m21474(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1124 *, int32_t, int32_t, MethodInfo*))Dictionary_2_Add_m21474_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m21475_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m21475(__this, method) (( void (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_Clear_m21475_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21476_gshared (Dictionary_2_t1124 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m21476(__this, ___key, method) (( bool (*) (Dictionary_2_t1124 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m21476_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21477_gshared (Dictionary_2_t1124 * __this, int32_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m21477(__this, ___value, method) (( bool (*) (Dictionary_2_t1124 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m21477_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21478_gshared (Dictionary_2_t1124 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m21478(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1124 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m21478_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21479_gshared (Dictionary_2_t1124 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21479(__this, ___sender, method) (( void (*) (Dictionary_2_t1124 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m21479_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21480_gshared (Dictionary_2_t1124 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m21480(__this, ___key, method) (( bool (*) (Dictionary_2_t1124 *, int32_t, MethodInfo*))Dictionary_2_Remove_m21480_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21481_gshared (Dictionary_2_t1124 * __this, int32_t ___key, int32_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m21481(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1124 *, int32_t, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m21481_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t3445 * Dictionary_2_get_Keys_m21482_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m21482(__this, method) (( KeyCollection_t3445 * (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_get_Keys_m21482_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t3449 * Dictionary_2_get_Values_m21483_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m21483(__this, method) (( ValueCollection_t3449 * (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_get_Values_m21483_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m21484_gshared (Dictionary_2_t1124 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m21484(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1124 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m21484_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m21485_gshared (Dictionary_2_t1124 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m21485(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1124 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m21485_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21486_gshared (Dictionary_2_t1124 * __this, KeyValuePair_2_t3443  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21486(__this, ___pair, method) (( bool (*) (Dictionary_2_t1124 *, KeyValuePair_2_t3443 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21486_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3447  Dictionary_2_GetEnumerator_m21487_gshared (Dictionary_2_t1124 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21487(__this, method) (( Enumerator_t3447  (*) (Dictionary_2_t1124 *, MethodInfo*))Dictionary_2_GetEnumerator_m21487_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1014  Dictionary_2_U3CCopyToU3Em__0_m21488_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21488(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21488_gshared)(__this /* static, unused */, ___key, ___value, method)
