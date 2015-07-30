#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3297;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t648;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ICollection_1_t3715;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct KeyCollection_t3298;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ValueCollection_t3302;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2704;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t3718;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>[]
struct KeyValuePair_2U5BU5D_t3719;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct IEnumerator_1_t3720;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__20.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor()
extern "C" void Dictionary_2__ctor_m20124_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m20124(__this, method) (( void (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2__ctor_m20124_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20126_gshared (Dictionary_2_t3297 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m20126(__this, ___comparer, method) (( void (*) (Dictionary_2_t3297 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20126_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20128_gshared (Dictionary_2_t3297 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m20128(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3297 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20128_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20130_gshared (Dictionary_2_t3297 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m20130(__this, ___capacity, method) (( void (*) (Dictionary_2_t3297 *, int32_t, MethodInfo*))Dictionary_2__ctor_m20130_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20132_gshared (Dictionary_2_t3297 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m20132(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3297 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m20132_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20134_gshared (Dictionary_2_t3297 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m20134(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3297 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m20134_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20136_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20136(__this, method) (( Object_t* (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20136_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20138_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20138(__this, method) (( Object_t* (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20138_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20140_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20140(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3297 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20140_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20142_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20142(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3297 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20142_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20144_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20144(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3297 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20144_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20146_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20146(__this, ___key, method) (( bool (*) (Dictionary_2_t3297 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20146_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20148_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20148(__this, ___key, method) (( void (*) (Dictionary_2_t3297 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20148_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20150_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20150(__this, method) (( bool (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20150_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20152_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20152(__this, method) (( Object_t * (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20152_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20154_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20154(__this, method) (( bool (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20154_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20156_gshared (Dictionary_2_t3297 * __this, KeyValuePair_2_t3223  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20156(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3297 *, KeyValuePair_2_t3223 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20156_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20158_gshared (Dictionary_2_t3297 * __this, KeyValuePair_2_t3223  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20158(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3297 *, KeyValuePair_2_t3223 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20158_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20160_gshared (Dictionary_2_t3297 * __this, KeyValuePair_2U5BU5D_t3719* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20160(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3297 *, KeyValuePair_2U5BU5D_t3719*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20160_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20162_gshared (Dictionary_2_t3297 * __this, KeyValuePair_2_t3223  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20162(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3297 *, KeyValuePair_2_t3223 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20162_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20164_gshared (Dictionary_2_t3297 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20164(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3297 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20164_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20166_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20166(__this, method) (( Object_t * (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20166_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20168_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20168(__this, method) (( Object_t* (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20168_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20170_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20170(__this, method) (( Object_t * (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20170_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20172_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m20172(__this, method) (( int32_t (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_get_Count_m20172_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Item(TKey)
extern "C" KeyValuePair_2_t775  Dictionary_2_get_Item_m20174_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m20174(__this, ___key, method) (( KeyValuePair_2_t775  (*) (Dictionary_2_t3297 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m20174_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20176_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, KeyValuePair_2_t775  ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m20176(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3297 *, Object_t *, KeyValuePair_2_t775 , MethodInfo*))Dictionary_2_set_Item_m20176_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20178_gshared (Dictionary_2_t3297 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m20178(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3297 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m20178_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20180_gshared (Dictionary_2_t3297 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m20180(__this, ___size, method) (( void (*) (Dictionary_2_t3297 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m20180_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20182_gshared (Dictionary_2_t3297 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20182(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3297 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m20182_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3223  Dictionary_2_make_pair_m20184_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t775  ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m20184(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3223  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t775 , MethodInfo*))Dictionary_2_make_pair_m20184_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m20186_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t775  ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m20186(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t775 , MethodInfo*))Dictionary_2_pick_key_m20186_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t775  Dictionary_2_pick_value_m20188_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t775  ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m20188(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t775  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t775 , MethodInfo*))Dictionary_2_pick_value_m20188_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20190_gshared (Dictionary_2_t3297 * __this, KeyValuePair_2U5BU5D_t3719* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m20190(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3297 *, KeyValuePair_2U5BU5D_t3719*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m20190_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Resize()
extern "C" void Dictionary_2_Resize_m20192_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m20192(__this, method) (( void (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_Resize_m20192_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20194_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, KeyValuePair_2_t775  ___value, MethodInfo* method);
#define Dictionary_2_Add_m20194(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3297 *, Object_t *, KeyValuePair_2_t775 , MethodInfo*))Dictionary_2_Add_m20194_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Clear()
extern "C" void Dictionary_2_Clear_m20196_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m20196(__this, method) (( void (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_Clear_m20196_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20198_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m20198(__this, ___key, method) (( bool (*) (Dictionary_2_t3297 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m20198_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20200_gshared (Dictionary_2_t3297 * __this, KeyValuePair_2_t775  ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m20200(__this, ___value, method) (( bool (*) (Dictionary_2_t3297 *, KeyValuePair_2_t775 , MethodInfo*))Dictionary_2_ContainsValue_m20200_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20202_gshared (Dictionary_2_t3297 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m20202(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3297 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m20202_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20204_gshared (Dictionary_2_t3297 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20204(__this, ___sender, method) (( void (*) (Dictionary_2_t3297 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m20204_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20206_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m20206(__this, ___key, method) (( bool (*) (Dictionary_2_t3297 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m20206_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20208_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, KeyValuePair_2_t775 * ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m20208(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3297 *, Object_t *, KeyValuePair_2_t775 *, MethodInfo*))Dictionary_2_TryGetValue_m20208_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Keys()
extern "C" KeyCollection_t3298 * Dictionary_2_get_Keys_m20210_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m20210(__this, method) (( KeyCollection_t3298 * (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_get_Keys_m20210_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Values()
extern "C" ValueCollection_t3302 * Dictionary_2_get_Values_m20212_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m20212(__this, method) (( ValueCollection_t3302 * (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_get_Values_m20212_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m20214_gshared (Dictionary_2_t3297 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m20214(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3297 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m20214_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t775  Dictionary_2_ToTValue_m20216_gshared (Dictionary_2_t3297 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m20216(__this, ___value, method) (( KeyValuePair_2_t775  (*) (Dictionary_2_t3297 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m20216_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20218_gshared (Dictionary_2_t3297 * __this, KeyValuePair_2_t3223  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20218(__this, ___pair, method) (( bool (*) (Dictionary_2_t3297 *, KeyValuePair_2_t3223 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20218_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetEnumerator()
extern "C" Enumerator_t3300  Dictionary_2_GetEnumerator_m20220_gshared (Dictionary_2_t3297 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20220(__this, method) (( Enumerator_t3300  (*) (Dictionary_2_t3297 *, MethodInfo*))Dictionary_2_GetEnumerator_m20220_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1014  Dictionary_2_U3CCopyToU3Em__0_m20222_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t775  ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20222(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t775 , MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20222_gshared)(__this /* static, unused */, ___key, ___value, method)
