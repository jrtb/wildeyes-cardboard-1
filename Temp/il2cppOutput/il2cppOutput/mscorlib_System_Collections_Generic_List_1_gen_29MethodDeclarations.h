#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t722;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t720;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.PersistentCall>
struct IEnumerable_1_t3730;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t3731;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>
struct ICollection_1_t3732;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>
struct ReadOnlyCollection_1_t3381;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t3378;
// System.Predicate`1<UnityEngine.Events.PersistentCall>
struct Predicate_1_t3385;
// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t3388;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m4038(__this, method) (( void (*) (List_1_t722 *, MethodInfo*))List_1__ctor_m3892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20809(__this, ___collection, method) (( void (*) (List_1_t722 *, Object_t*, MethodInfo*))List_1__ctor_m11796_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m20810(__this, ___capacity, method) (( void (*) (List_1_t722 *, int32_t, MethodInfo*))List_1__ctor_m11798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m20811(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20812(__this, method) (( Object_t* (*) (List_1_t722 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20813(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t722 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20814(__this, method) (( Object_t * (*) (List_1_t722 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20815(__this, ___item, method) (( int32_t (*) (List_1_t722 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20816(__this, ___item, method) (( bool (*) (List_1_t722 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20817(__this, ___item, method) (( int32_t (*) (List_1_t722 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20818(__this, ___index, ___item, method) (( void (*) (List_1_t722 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20819(__this, ___item, method) (( void (*) (List_1_t722 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20820(__this, method) (( bool (*) (List_1_t722 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20821(__this, method) (( bool (*) (List_1_t722 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20822(__this, method) (( Object_t * (*) (List_1_t722 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m20823(__this, method) (( bool (*) (List_1_t722 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m20824(__this, method) (( bool (*) (List_1_t722 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4111_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20825(__this, ___index, method) (( Object_t * (*) (List_1_t722 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20826(__this, ___index, ___value, method) (( void (*) (List_1_t722 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4113_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m20827(__this, ___item, method) (( void (*) (List_1_t722 *, PersistentCall_t720 *, MethodInfo*))List_1_Add_m3913_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20828(__this, ___newCount, method) (( void (*) (List_1_t722 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20829(__this, ___collection, method) (( void (*) (List_1_t722 *, Object_t*, MethodInfo*))List_1_AddCollection_m11819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20830(__this, ___enumerable, method) (( void (*) (List_1_t722 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11821_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m20831(__this, ___collection, method) (( void (*) (List_1_t722 *, Object_t*, MethodInfo*))List_1_AddRange_m11823_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AsReadOnly()
#define List_1_AsReadOnly_m20832(__this, method) (( ReadOnlyCollection_1_t3381 * (*) (List_1_t722 *, MethodInfo*))List_1_AsReadOnly_m11825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m20833(__this, method) (( void (*) (List_1_t722 *, MethodInfo*))List_1_Clear_m4115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m20834(__this, ___item, method) (( bool (*) (List_1_t722 *, PersistentCall_t720 *, MethodInfo*))List_1_Contains_m4122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20835(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t722 *, PersistentCallU5BU5D_t3378*, int32_t, MethodInfo*))List_1_CopyTo_m4123_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m20836(__this, ___match, method) (( PersistentCall_t720 * (*) (List_1_t722 *, Predicate_1_t3385 *, MethodInfo*))List_1_Find_m11829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m20837(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3385 *, MethodInfo*))List_1_CheckMatch_m11831_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m20838(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t722 *, int32_t, int32_t, Predicate_1_t3385 *, MethodInfo*))List_1_GetIndex_m11833_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m4039(__this, method) (( Enumerator_t799  (*) (List_1_t722 *, MethodInfo*))List_1_GetEnumerator_m11835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m20839(__this, ___item, method) (( int32_t (*) (List_1_t722 *, PersistentCall_t720 *, MethodInfo*))List_1_IndexOf_m4126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20840(__this, ___start, ___delta, method) (( void (*) (List_1_t722 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20841(__this, ___index, method) (( void (*) (List_1_t722 *, int32_t, MethodInfo*))List_1_CheckIndex_m11840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m20842(__this, ___index, ___item, method) (( void (*) (List_1_t722 *, int32_t, PersistentCall_t720 *, MethodInfo*))List_1_Insert_m4127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20843(__this, ___collection, method) (( void (*) (List_1_t722 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11843_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m20844(__this, ___item, method) (( bool (*) (List_1_t722 *, PersistentCall_t720 *, MethodInfo*))List_1_Remove_m4124_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m20845(__this, ___match, method) (( int32_t (*) (List_1_t722 *, Predicate_1_t3385 *, MethodInfo*))List_1_RemoveAll_m11846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20846(__this, ___index, method) (( void (*) (List_1_t722 *, int32_t, MethodInfo*))List_1_RemoveAt_m4120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Reverse()
#define List_1_Reverse_m20847(__this, method) (( void (*) (List_1_t722 *, MethodInfo*))List_1_Reverse_m11849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort()
#define List_1_Sort_m20848(__this, method) (( void (*) (List_1_t722 *, MethodInfo*))List_1_Sort_m11851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m20849(__this, ___comparison, method) (( void (*) (List_1_t722 *, Comparison_1_t3388 *, MethodInfo*))List_1_Sort_m11853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m20850(__this, method) (( PersistentCallU5BU5D_t3378* (*) (List_1_t722 *, MethodInfo*))List_1_ToArray_m11854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::TrimExcess()
#define List_1_TrimExcess_m20851(__this, method) (( void (*) (List_1_t722 *, MethodInfo*))List_1_TrimExcess_m11856_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m20852(__this, method) (( int32_t (*) (List_1_t722 *, MethodInfo*))List_1_get_Capacity_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20853(__this, ___value, method) (( void (*) (List_1_t722 *, int32_t, MethodInfo*))List_1_set_Capacity_m11860_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m20854(__this, method) (( int32_t (*) (List_1_t722 *, MethodInfo*))List_1_get_Count_m4106_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m20855(__this, ___index, method) (( PersistentCall_t720 * (*) (List_1_t722 *, int32_t, MethodInfo*))List_1_get_Item_m4128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m20856(__this, ___index, ___value, method) (( void (*) (List_1_t722 *, int32_t, PersistentCall_t720 *, MethodInfo*))List_1_set_Item_m4129_gshared)(__this, ___index, ___value, method)
