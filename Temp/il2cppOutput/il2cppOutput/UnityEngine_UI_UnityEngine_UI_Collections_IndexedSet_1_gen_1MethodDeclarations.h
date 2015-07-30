#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2703;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t126;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Predicate`1<System.Object>
struct Predicate_1_t2477;
// System.Comparison`1<System.Object>
struct Comparison_1_t2496;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m14200_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m14200(__this, method) (( void (*) (IndexedSet_1_t2703 *, MethodInfo*))IndexedSet_1__ctor_m14200_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14202_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14202(__this, method) (( Object_t * (*) (IndexedSet_1_t2703 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14202_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m14203_gshared (IndexedSet_1_t2703 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m14203(__this, ___item, method) (( void (*) (IndexedSet_1_t2703 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m14203_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14204_gshared (IndexedSet_1_t2703 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m14204(__this, ___item, method) (( bool (*) (IndexedSet_1_t2703 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m14204_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14206_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m14206(__this, method) (( Object_t* (*) (IndexedSet_1_t2703 *, MethodInfo*))IndexedSet_1_GetEnumerator_m14206_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14207_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m14207(__this, method) (( void (*) (IndexedSet_1_t2703 *, MethodInfo*))IndexedSet_1_Clear_m14207_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14209_gshared (IndexedSet_1_t2703 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m14209(__this, ___item, method) (( bool (*) (IndexedSet_1_t2703 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m14209_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14211_gshared (IndexedSet_1_t2703 * __this, ObjectU5BU5D_t76* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m14211(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2703 *, ObjectU5BU5D_t76*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m14211_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14212_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m14212(__this, method) (( int32_t (*) (IndexedSet_1_t2703 *, MethodInfo*))IndexedSet_1_get_Count_m14212_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14214_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14214(__this, method) (( bool (*) (IndexedSet_1_t2703 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m14214_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14216_gshared (IndexedSet_1_t2703 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m14216(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2703 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m14216_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14218_gshared (IndexedSet_1_t2703 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m14218(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2703 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m14218_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14220_gshared (IndexedSet_1_t2703 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14220(__this, ___index, method) (( void (*) (IndexedSet_1_t2703 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m14220_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14221_gshared (IndexedSet_1_t2703 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m14221(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2703 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m14221_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14223_gshared (IndexedSet_1_t2703 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m14223(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2703 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m14223_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m14224_gshared (IndexedSet_1_t2703 * __this, Predicate_1_t2477 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m14224(__this, ___match, method) (( void (*) (IndexedSet_1_t2703 *, Predicate_1_t2477 *, MethodInfo*))IndexedSet_1_RemoveAll_m14224_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14225_gshared (IndexedSet_1_t2703 * __this, Comparison_1_t2496 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m14225(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2703 *, Comparison_1_t2496 *, MethodInfo*))IndexedSet_1_Sort_m14225_gshared)(__this, ___sortLayoutFunction, method)
