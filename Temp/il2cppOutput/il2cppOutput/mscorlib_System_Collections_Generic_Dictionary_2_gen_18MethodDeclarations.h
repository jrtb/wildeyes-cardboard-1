#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3163;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t3691;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t648;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3169;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t3173;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3161;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t3692;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t3693;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t3694;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m18917_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m18917(__this, method) (( void (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2__ctor_m18917_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18919_gshared (Dictionary_2_t3163 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m18919(__this, ___comparer, method) (( void (*) (Dictionary_2_t3163 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18919_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18921_gshared (Dictionary_2_t3163 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m18921(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3163 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18921_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18923_gshared (Dictionary_2_t3163 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m18923(__this, ___capacity, method) (( void (*) (Dictionary_2_t3163 *, int32_t, MethodInfo*))Dictionary_2__ctor_m18923_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18925_gshared (Dictionary_2_t3163 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m18925(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3163 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m18925_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18927_gshared (Dictionary_2_t3163 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m18927(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3163 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m18927_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18929_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18929(__this, method) (( Object_t* (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18929_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18931_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18931(__this, method) (( Object_t* (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18931_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18933_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18933(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18933_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18935_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18935(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3163 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18935_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18937_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18937(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3163 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18937_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18939_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18939(__this, ___key, method) (( bool (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18939_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18941_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18941(__this, ___key, method) (( void (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18941_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18943_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18943(__this, method) (( bool (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18943_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18945_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18945(__this, method) (( Object_t * (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18945_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18947_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18947(__this, method) (( bool (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18947_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18949_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2_t3164  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18949(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3163 *, KeyValuePair_2_t3164 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18949_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18951_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2_t3164  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18951(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3163 *, KeyValuePair_2_t3164 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18951_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18953_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2U5BU5D_t3693* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18953(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3163 *, KeyValuePair_2U5BU5D_t3693*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18953_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18955_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2_t3164  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18955(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3163 *, KeyValuePair_2_t3164 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18955_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18957_gshared (Dictionary_2_t3163 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18957(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18957_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18959_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18959(__this, method) (( Object_t * (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18959_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18961_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18961(__this, method) (( Object_t* (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18961_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18963_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18963(__this, method) (( Object_t * (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18963_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18965_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m18965(__this, method) (( int32_t (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_get_Count_m18965_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m18967_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m18967(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3163 *, uint64_t, MethodInfo*))Dictionary_2_get_Item_m18967_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18969_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m18969(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3163 *, uint64_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m18969_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18971_gshared (Dictionary_2_t3163 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m18971(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3163 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m18971_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18973_gshared (Dictionary_2_t3163 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m18973(__this, ___size, method) (( void (*) (Dictionary_2_t3163 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m18973_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18975_gshared (Dictionary_2_t3163 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18975(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m18975_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3164  Dictionary_2_make_pair_m18977_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m18977(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3164  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m18977_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m18979_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m18979(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_pick_key_m18979_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m18981_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m18981(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m18981_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18983_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2U5BU5D_t3693* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m18983(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3163 *, KeyValuePair_2U5BU5D_t3693*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m18983_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m18985_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m18985(__this, method) (( void (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_Resize_m18985_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18987_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m18987(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3163 *, uint64_t, Object_t *, MethodInfo*))Dictionary_2_Add_m18987_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m18989_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m18989(__this, method) (( void (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_Clear_m18989_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18991_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m18991(__this, ___key, method) (( bool (*) (Dictionary_2_t3163 *, uint64_t, MethodInfo*))Dictionary_2_ContainsKey_m18991_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18993_gshared (Dictionary_2_t3163 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m18993(__this, ___value, method) (( bool (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m18993_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18995_gshared (Dictionary_2_t3163 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m18995(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3163 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m18995_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18997_gshared (Dictionary_2_t3163 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18997(__this, ___sender, method) (( void (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m18997_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18999_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m18999(__this, ___key, method) (( bool (*) (Dictionary_2_t3163 *, uint64_t, MethodInfo*))Dictionary_2_Remove_m18999_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19000_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m19000(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3163 *, uint64_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m19000_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3169 * Dictionary_2_get_Keys_m19002_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m19002(__this, method) (( KeyCollection_t3169 * (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_get_Keys_m19002_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3173 * Dictionary_2_get_Values_m19004_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m19004(__this, method) (( ValueCollection_t3173 * (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_get_Values_m19004_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m19006_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m19006(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m19006_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m19008_gshared (Dictionary_2_t3163 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m19008(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m19008_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19010_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2_t3164  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19010(__this, ___pair, method) (( bool (*) (Dictionary_2_t3163 *, KeyValuePair_2_t3164 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19010_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3171  Dictionary_2_GetEnumerator_m19012_gshared (Dictionary_2_t3163 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19012(__this, method) (( Enumerator_t3171  (*) (Dictionary_2_t3163 *, MethodInfo*))Dictionary_2_GetEnumerator_m19012_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1014  Dictionary_2_U3CCopyToU3Em__0_m19014_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19014(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19014_gshared)(__this /* static, unused */, ___key, ___value, method)
