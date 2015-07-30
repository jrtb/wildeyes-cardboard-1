#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionary_2_t767;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3698;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ICollection_1_t3704;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t660;
// System.Type
struct Type_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionaryValueFactory_2_t766;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>[]
struct KeyValuePair_2U5BU5D_t3705;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>>
struct IEnumerator_1_t3706;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6MethodDeclarations.h"
#define ThreadSafeDictionary_2__ctor_m3942(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t767 *, ThreadSafeDictionaryValueFactory_2_t766 *, MethodInfo*))ThreadSafeDictionary_2__ctor_m19502_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m19684(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t767 *, MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m19504_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Get(TKey)
#define ThreadSafeDictionary_2_Get_m19685(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, Type_t *, MethodInfo*))ThreadSafeDictionary_2_Get_m19506_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::AddValue(TKey)
#define ThreadSafeDictionary_2_AddValue_m19686(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, Type_t *, MethodInfo*))ThreadSafeDictionary_2_AddValue_m19508_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Add(TKey,TValue)
#define ThreadSafeDictionary_2_Add_m19687(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t767 *, Type_t *, Object_t*, MethodInfo*))ThreadSafeDictionary_2_Add_m19510_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Keys()
#define ThreadSafeDictionary_2_get_Keys_m19688(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, MethodInfo*))ThreadSafeDictionary_2_get_Keys_m19512_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Remove(TKey)
#define ThreadSafeDictionary_2_Remove_m19689(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t767 *, Type_t *, MethodInfo*))ThreadSafeDictionary_2_Remove_m19514_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::TryGetValue(TKey,TValue&)
#define ThreadSafeDictionary_2_TryGetValue_m19690(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t767 *, Type_t *, Object_t**, MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m19516_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Values()
#define ThreadSafeDictionary_2_get_Values_m19691(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, MethodInfo*))ThreadSafeDictionary_2_get_Values_m19518_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(TKey)
#define ThreadSafeDictionary_2_get_Item_m19692(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, Type_t *, MethodInfo*))ThreadSafeDictionary_2_get_Item_m19520_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::set_Item(TKey,TValue)
#define ThreadSafeDictionary_2_set_Item_m19693(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t767 *, Type_t *, Object_t*, MethodInfo*))ThreadSafeDictionary_2_set_Item_m19522_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Add_m19694(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t767 *, KeyValuePair_2_t3217 , MethodInfo*))ThreadSafeDictionary_2_Add_m19524_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Clear()
#define ThreadSafeDictionary_2_Clear_m19695(__this, method) (( void (*) (ThreadSafeDictionary_2_t767 *, MethodInfo*))ThreadSafeDictionary_2_Clear_m19526_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Contains_m19696(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t767 *, KeyValuePair_2_t3217 , MethodInfo*))ThreadSafeDictionary_2_Contains_m19528_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define ThreadSafeDictionary_2_CopyTo_m19697(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t767 *, KeyValuePair_2U5BU5D_t3705*, int32_t, MethodInfo*))ThreadSafeDictionary_2_CopyTo_m19530_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Count()
#define ThreadSafeDictionary_2_get_Count_m19698(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t767 *, MethodInfo*))ThreadSafeDictionary_2_get_Count_m19532_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_IsReadOnly()
#define ThreadSafeDictionary_2_get_IsReadOnly_m19699(__this, method) (( bool (*) (ThreadSafeDictionary_2_t767 *, MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m19534_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Remove_m19700(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t767 *, KeyValuePair_2_t3217 , MethodInfo*))ThreadSafeDictionary_2_Remove_m19536_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator()
#define ThreadSafeDictionary_2_GetEnumerator_m19701(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t767 *, MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m19538_gshared)(__this, method)
