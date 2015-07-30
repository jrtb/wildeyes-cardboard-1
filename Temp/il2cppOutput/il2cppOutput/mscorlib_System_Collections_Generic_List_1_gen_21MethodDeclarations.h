#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t534;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t533;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>
struct IEnumerable_1_t3648;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t3649;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>
struct ICollection_1_t3650;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
struct ReadOnlyCollection_1_t3005;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t3002;
// System.Predicate`1<UnityEngine.GUILayoutEntry>
struct Predicate_1_t3009;
// System.Comparison`1<UnityEngine.GUILayoutEntry>
struct Comparison_1_t3012;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m3796(__this, method) (( void (*) (List_1_t534 *, MethodInfo*))List_1__ctor_m3892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m17155(__this, ___collection, method) (( void (*) (List_1_t534 *, Object_t*, MethodInfo*))List_1__ctor_m11796_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m17156(__this, ___capacity, method) (( void (*) (List_1_t534 *, int32_t, MethodInfo*))List_1__ctor_m11798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m17157(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17158(__this, method) (( Object_t* (*) (List_1_t534 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17159(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t534 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17160(__this, method) (( Object_t * (*) (List_1_t534 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17161(__this, ___item, method) (( int32_t (*) (List_1_t534 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17162(__this, ___item, method) (( bool (*) (List_1_t534 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17163(__this, ___item, method) (( int32_t (*) (List_1_t534 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17164(__this, ___index, ___item, method) (( void (*) (List_1_t534 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17165(__this, ___item, method) (( void (*) (List_1_t534 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17166(__this, method) (( bool (*) (List_1_t534 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17167(__this, method) (( bool (*) (List_1_t534 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17168(__this, method) (( Object_t * (*) (List_1_t534 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17169(__this, method) (( bool (*) (List_1_t534 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17170(__this, method) (( bool (*) (List_1_t534 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4111_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17171(__this, ___index, method) (( Object_t * (*) (List_1_t534 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17172(__this, ___index, ___value, method) (( void (*) (List_1_t534 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4113_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m17173(__this, ___item, method) (( void (*) (List_1_t534 *, GUILayoutEntry_t533 *, MethodInfo*))List_1_Add_m3913_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17174(__this, ___newCount, method) (( void (*) (List_1_t534 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17175(__this, ___collection, method) (( void (*) (List_1_t534 *, Object_t*, MethodInfo*))List_1_AddCollection_m11819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17176(__this, ___enumerable, method) (( void (*) (List_1_t534 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11821_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17177(__this, ___collection, method) (( void (*) (List_1_t534 *, Object_t*, MethodInfo*))List_1_AddRange_m11823_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AsReadOnly()
#define List_1_AsReadOnly_m17178(__this, method) (( ReadOnlyCollection_1_t3005 * (*) (List_1_t534 *, MethodInfo*))List_1_AsReadOnly_m11825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m17179(__this, method) (( void (*) (List_1_t534 *, MethodInfo*))List_1_Clear_m4115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m17180(__this, ___item, method) (( bool (*) (List_1_t534 *, GUILayoutEntry_t533 *, MethodInfo*))List_1_Contains_m4122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17181(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t534 *, GUILayoutEntryU5BU5D_t3002*, int32_t, MethodInfo*))List_1_CopyTo_m4123_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m17182(__this, ___match, method) (( GUILayoutEntry_t533 * (*) (List_1_t534 *, Predicate_1_t3009 *, MethodInfo*))List_1_Find_m11829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17183(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3009 *, MethodInfo*))List_1_CheckMatch_m11831_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17184(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t534 *, int32_t, int32_t, Predicate_1_t3009 *, MethodInfo*))List_1_GetIndex_m11833_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m3793(__this, method) (( Enumerator_t740  (*) (List_1_t534 *, MethodInfo*))List_1_GetEnumerator_m11835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m17185(__this, ___item, method) (( int32_t (*) (List_1_t534 *, GUILayoutEntry_t533 *, MethodInfo*))List_1_IndexOf_m4126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17186(__this, ___start, ___delta, method) (( void (*) (List_1_t534 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17187(__this, ___index, method) (( void (*) (List_1_t534 *, int32_t, MethodInfo*))List_1_CheckIndex_m11840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m17188(__this, ___index, ___item, method) (( void (*) (List_1_t534 *, int32_t, GUILayoutEntry_t533 *, MethodInfo*))List_1_Insert_m4127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17189(__this, ___collection, method) (( void (*) (List_1_t534 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11843_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m17190(__this, ___item, method) (( bool (*) (List_1_t534 *, GUILayoutEntry_t533 *, MethodInfo*))List_1_Remove_m4124_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17191(__this, ___match, method) (( int32_t (*) (List_1_t534 *, Predicate_1_t3009 *, MethodInfo*))List_1_RemoveAll_m11846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17192(__this, ___index, method) (( void (*) (List_1_t534 *, int32_t, MethodInfo*))List_1_RemoveAt_m4120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Reverse()
#define List_1_Reverse_m17193(__this, method) (( void (*) (List_1_t534 *, MethodInfo*))List_1_Reverse_m11849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort()
#define List_1_Sort_m17194(__this, method) (( void (*) (List_1_t534 *, MethodInfo*))List_1_Sort_m11851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17195(__this, ___comparison, method) (( void (*) (List_1_t534 *, Comparison_1_t3012 *, MethodInfo*))List_1_Sort_m11853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m17196(__this, method) (( GUILayoutEntryU5BU5D_t3002* (*) (List_1_t534 *, MethodInfo*))List_1_ToArray_m11854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::TrimExcess()
#define List_1_TrimExcess_m17197(__this, method) (( void (*) (List_1_t534 *, MethodInfo*))List_1_TrimExcess_m11856_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m17198(__this, method) (( int32_t (*) (List_1_t534 *, MethodInfo*))List_1_get_Capacity_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17199(__this, ___value, method) (( void (*) (List_1_t534 *, int32_t, MethodInfo*))List_1_set_Capacity_m11860_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m3797(__this, method) (( int32_t (*) (List_1_t534 *, MethodInfo*))List_1_get_Count_m4106_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m3798(__this, ___index, method) (( GUILayoutEntry_t533 * (*) (List_1_t534 *, int32_t, MethodInfo*))List_1_get_Item_m4128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m17200(__this, ___index, ___value, method) (( void (*) (List_1_t534 *, int32_t, GUILayoutEntry_t533 *, MethodInfo*))List_1_set_Item_m4129_gshared)(__this, ___index, ___value, method)
