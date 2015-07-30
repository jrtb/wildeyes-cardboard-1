#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct KeyCollection_t3298;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3297;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t126;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_42.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m20223_gshared (KeyCollection_t3298 * __this, Dictionary_2_t3297 * ___dictionary, MethodInfo* method);
#define KeyCollection__ctor_m20223(__this, ___dictionary, method) (( void (*) (KeyCollection_t3298 *, Dictionary_2_t3297 *, MethodInfo*))KeyCollection__ctor_m20223_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20224_gshared (KeyCollection_t3298 * __this, Object_t * ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20224(__this, ___item, method) (( void (*) (KeyCollection_t3298 *, Object_t *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20224_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20225_gshared (KeyCollection_t3298 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20225(__this, method) (( void (*) (KeyCollection_t3298 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20225_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20226_gshared (KeyCollection_t3298 * __this, Object_t * ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20226(__this, ___item, method) (( bool (*) (KeyCollection_t3298 *, Object_t *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20226_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20227_gshared (KeyCollection_t3298 * __this, Object_t * ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20227(__this, ___item, method) (( bool (*) (KeyCollection_t3298 *, Object_t *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20227_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20228_gshared (KeyCollection_t3298 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20228(__this, method) (( Object_t* (*) (KeyCollection_t3298 *, MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20228_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m20229_gshared (KeyCollection_t3298 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m20229(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3298 *, Array_t *, int32_t, MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m20229_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20230_gshared (KeyCollection_t3298 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20230(__this, method) (( Object_t * (*) (KeyCollection_t3298 *, MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20231_gshared (KeyCollection_t3298 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20231(__this, method) (( bool (*) (KeyCollection_t3298 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20231_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20232_gshared (KeyCollection_t3298 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20232(__this, method) (( bool (*) (KeyCollection_t3298 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20232_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m20233_gshared (KeyCollection_t3298 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m20233(__this, method) (( Object_t * (*) (KeyCollection_t3298 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m20233_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m20234_gshared (KeyCollection_t3298 * __this, ObjectU5BU5D_t76* ___array, int32_t ___index, MethodInfo* method);
#define KeyCollection_CopyTo_m20234(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3298 *, ObjectU5BU5D_t76*, int32_t, MethodInfo*))KeyCollection_CopyTo_m20234_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetEnumerator()
extern "C" Enumerator_t3299  KeyCollection_GetEnumerator_m20235_gshared (KeyCollection_t3298 * __this, MethodInfo* method);
#define KeyCollection_GetEnumerator_m20235(__this, method) (( Enumerator_t3299  (*) (KeyCollection_t3298 *, MethodInfo*))KeyCollection_GetEnumerator_m20235_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m20236_gshared (KeyCollection_t3298 * __this, MethodInfo* method);
#define KeyCollection_get_Count_m20236(__this, method) (( int32_t (*) (KeyCollection_t3298 *, MethodInfo*))KeyCollection_get_Count_m20236_gshared)(__this, method)
