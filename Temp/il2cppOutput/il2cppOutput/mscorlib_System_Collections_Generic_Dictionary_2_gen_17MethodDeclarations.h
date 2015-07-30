#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3102;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t648;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3672;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t3108;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t3112;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2704;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t3676;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t3677;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t3678;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m18322_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m18322(__this, method) (( void (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2__ctor_m18322_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18324_gshared (Dictionary_2_t3102 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m18324(__this, ___comparer, method) (( void (*) (Dictionary_2_t3102 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18324_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18326_gshared (Dictionary_2_t3102 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m18326(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3102 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18326_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18328_gshared (Dictionary_2_t3102 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m18328(__this, ___capacity, method) (( void (*) (Dictionary_2_t3102 *, int32_t, MethodInfo*))Dictionary_2__ctor_m18328_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18330_gshared (Dictionary_2_t3102 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m18330(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3102 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m18330_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18332_gshared (Dictionary_2_t3102 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m18332(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3102 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2__ctor_m18332_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18334_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18334(__this, method) (( Object_t* (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18334_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18336_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18336(__this, method) (( Object_t* (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18338_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18338(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3102 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18338_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18340_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18340(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3102 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18340_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18342_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18342(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3102 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18342_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18344_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18344(__this, ___key, method) (( bool (*) (Dictionary_2_t3102 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18344_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18346_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18346(__this, ___key, method) (( void (*) (Dictionary_2_t3102 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18346_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18348_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18348(__this, method) (( bool (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18348_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18350_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18350(__this, method) (( Object_t * (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18352_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18352(__this, method) (( bool (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18352_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18354_gshared (Dictionary_2_t3102 * __this, KeyValuePair_2_t3103  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18354(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3102 *, KeyValuePair_2_t3103 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18354_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18356_gshared (Dictionary_2_t3102 * __this, KeyValuePair_2_t3103  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18356(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3102 *, KeyValuePair_2_t3103 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18356_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18358_gshared (Dictionary_2_t3102 * __this, KeyValuePair_2U5BU5D_t3677* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18358(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3102 *, KeyValuePair_2U5BU5D_t3677*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18358_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18360_gshared (Dictionary_2_t3102 * __this, KeyValuePair_2_t3103  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18360(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3102 *, KeyValuePair_2_t3103 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18360_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18362_gshared (Dictionary_2_t3102 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18362(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3102 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18362_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18364_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18364(__this, method) (( Object_t * (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18364_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18366_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18366(__this, method) (( Object_t* (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18366_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18368_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18368(__this, method) (( Object_t * (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18368_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18369_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m18369(__this, method) (( int32_t (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_get_Count_m18369_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m18371_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m18371(__this, ___key, method) (( int64_t (*) (Dictionary_2_t3102 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m18371_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18373_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m18373(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3102 *, Object_t *, int64_t, MethodInfo*))Dictionary_2_set_Item_m18373_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18375_gshared (Dictionary_2_t3102 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m18375(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3102 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m18375_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18377_gshared (Dictionary_2_t3102 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m18377(__this, ___size, method) (( void (*) (Dictionary_2_t3102 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m18377_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18379_gshared (Dictionary_2_t3102 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18379(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3102 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m18379_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3103  Dictionary_2_make_pair_m18381_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m18381(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3103  (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_make_pair_m18381_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18383_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m18383(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_pick_key_m18383_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m18385_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m18385(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_pick_value_m18385_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18387_gshared (Dictionary_2_t3102 * __this, KeyValuePair_2U5BU5D_t3677* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m18387(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3102 *, KeyValuePair_2U5BU5D_t3677*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m18387_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m18389_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m18389(__this, method) (( void (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_Resize_m18389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18391_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m18391(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3102 *, Object_t *, int64_t, MethodInfo*))Dictionary_2_Add_m18391_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m18393_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m18393(__this, method) (( void (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_Clear_m18393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18395_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m18395(__this, ___key, method) (( bool (*) (Dictionary_2_t3102 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m18395_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18397_gshared (Dictionary_2_t3102 * __this, int64_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m18397(__this, ___value, method) (( bool (*) (Dictionary_2_t3102 *, int64_t, MethodInfo*))Dictionary_2_ContainsValue_m18397_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18399_gshared (Dictionary_2_t3102 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m18399(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3102 *, SerializationInfo_t708 *, StreamingContext_t709 , MethodInfo*))Dictionary_2_GetObjectData_m18399_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18401_gshared (Dictionary_2_t3102 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18401(__this, ___sender, method) (( void (*) (Dictionary_2_t3102 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m18401_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18403_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m18403(__this, ___key, method) (( bool (*) (Dictionary_2_t3102 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m18403_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18405_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, int64_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m18405(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3102 *, Object_t *, int64_t*, MethodInfo*))Dictionary_2_TryGetValue_m18405_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t3108 * Dictionary_2_get_Keys_m18407_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m18407(__this, method) (( KeyCollection_t3108 * (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_get_Keys_m18407_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t3112 * Dictionary_2_get_Values_m18409_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m18409(__this, method) (( ValueCollection_t3112 * (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_get_Values_m18409_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18411_gshared (Dictionary_2_t3102 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m18411(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3102 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m18411_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m18413_gshared (Dictionary_2_t3102 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m18413(__this, ___value, method) (( int64_t (*) (Dictionary_2_t3102 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m18413_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18415_gshared (Dictionary_2_t3102 * __this, KeyValuePair_2_t3103  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18415(__this, ___pair, method) (( bool (*) (Dictionary_2_t3102 *, KeyValuePair_2_t3103 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18415_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t3110  Dictionary_2_GetEnumerator_m18417_gshared (Dictionary_2_t3102 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18417(__this, method) (( Enumerator_t3110  (*) (Dictionary_2_t3102 *, MethodInfo*))Dictionary_2_GetEnumerator_m18417_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1014  Dictionary_2_U3CCopyToU3Em__0_m18419_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18419(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18419_gshared)(__this /* static, unused */, ___key, ___value, method)
