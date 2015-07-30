#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t3232;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t648;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t3230;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3602;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3603;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m19502_gshared (ThreadSafeDictionary_2_t3232 * __this, ThreadSafeDictionaryValueFactory_2_t3230 * ___valueFactory, MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m19502(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t3232 *, ThreadSafeDictionaryValueFactory_2_t3230 *, MethodInfo*))ThreadSafeDictionary_2__ctor_m19502_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m19504_gshared (ThreadSafeDictionary_2_t3232 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m19504(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3232 *, MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m19504_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m19506_gshared (ThreadSafeDictionary_2_t3232 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m19506(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3232 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Get_m19506_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m19508_gshared (ThreadSafeDictionary_2_t3232 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m19508(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3232 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_AddValue_m19508_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m19510_gshared (ThreadSafeDictionary_2_t3232 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m19510(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3232 *, Object_t *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Add_m19510_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m19512_gshared (ThreadSafeDictionary_2_t3232 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m19512(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3232 *, MethodInfo*))ThreadSafeDictionary_2_get_Keys_m19512_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m19514_gshared (ThreadSafeDictionary_2_t3232 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m19514(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t3232 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Remove_m19514_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m19516_gshared (ThreadSafeDictionary_2_t3232 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m19516(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t3232 *, Object_t *, Object_t **, MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m19516_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m19518_gshared (ThreadSafeDictionary_2_t3232 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m19518(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3232 *, MethodInfo*))ThreadSafeDictionary_2_get_Values_m19518_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m19520_gshared (ThreadSafeDictionary_2_t3232 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m19520(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3232 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_get_Item_m19520_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m19522_gshared (ThreadSafeDictionary_2_t3232 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m19522(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3232 *, Object_t *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_set_Item_m19522_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m19524_gshared (ThreadSafeDictionary_2_t3232 * __this, KeyValuePair_2_t2747  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m19524(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t3232 *, KeyValuePair_2_t2747 , MethodInfo*))ThreadSafeDictionary_2_Add_m19524_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m19526_gshared (ThreadSafeDictionary_2_t3232 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m19526(__this, method) (( void (*) (ThreadSafeDictionary_2_t3232 *, MethodInfo*))ThreadSafeDictionary_2_Clear_m19526_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m19528_gshared (ThreadSafeDictionary_2_t3232 * __this, KeyValuePair_2_t2747  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m19528(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3232 *, KeyValuePair_2_t2747 , MethodInfo*))ThreadSafeDictionary_2_Contains_m19528_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m19530_gshared (ThreadSafeDictionary_2_t3232 * __this, KeyValuePair_2U5BU5D_t3602* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m19530(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t3232 *, KeyValuePair_2U5BU5D_t3602*, int32_t, MethodInfo*))ThreadSafeDictionary_2_CopyTo_m19530_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m19532_gshared (ThreadSafeDictionary_2_t3232 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m19532(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t3232 *, MethodInfo*))ThreadSafeDictionary_2_get_Count_m19532_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m19534_gshared (ThreadSafeDictionary_2_t3232 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m19534(__this, method) (( bool (*) (ThreadSafeDictionary_2_t3232 *, MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m19534_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m19536_gshared (ThreadSafeDictionary_2_t3232 * __this, KeyValuePair_2_t2747  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m19536(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3232 *, KeyValuePair_2_t2747 , MethodInfo*))ThreadSafeDictionary_2_Remove_m19536_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m19538_gshared (ThreadSafeDictionary_2_t3232 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m19538(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3232 *, MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m19538_gshared)(__this, method)
