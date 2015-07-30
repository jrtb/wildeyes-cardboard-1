#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t293;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t373;
// System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
struct IEnumerable_1_t3628;
// System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
struct IEnumerator_1_t3629;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
struct ICollection_1_t3630;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
struct ReadOnlyCollection_1_t2899;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t2894;
// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t2903;
// System.Comparison`1<UnityEngine.CanvasGroup>
struct Comparison_1_t2906;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m2249(__this, method) (( void (*) (List_1_t293 *, MethodInfo*))List_1__ctor_m3892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m16096(__this, ___collection, method) (( void (*) (List_1_t293 *, Object_t*, MethodInfo*))List_1__ctor_m11796_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m16097(__this, ___capacity, method) (( void (*) (List_1_t293 *, int32_t, MethodInfo*))List_1__ctor_m11798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m16098(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16099(__this, method) (( Object_t* (*) (List_1_t293 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16100(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t293 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16101(__this, method) (( Object_t * (*) (List_1_t293 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16102(__this, ___item, method) (( int32_t (*) (List_1_t293 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16103(__this, ___item, method) (( bool (*) (List_1_t293 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16104(__this, ___item, method) (( int32_t (*) (List_1_t293 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16105(__this, ___index, ___item, method) (( void (*) (List_1_t293 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16106(__this, ___item, method) (( void (*) (List_1_t293 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16107(__this, method) (( bool (*) (List_1_t293 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16108(__this, method) (( bool (*) (List_1_t293 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16109(__this, method) (( Object_t * (*) (List_1_t293 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16110(__this, method) (( bool (*) (List_1_t293 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16111(__this, method) (( bool (*) (List_1_t293 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4111_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16112(__this, ___index, method) (( Object_t * (*) (List_1_t293 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16113(__this, ___index, ___value, method) (( void (*) (List_1_t293 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4113_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m16114(__this, ___item, method) (( void (*) (List_1_t293 *, CanvasGroup_t373 *, MethodInfo*))List_1_Add_m3913_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16115(__this, ___newCount, method) (( void (*) (List_1_t293 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16116(__this, ___collection, method) (( void (*) (List_1_t293 *, Object_t*, MethodInfo*))List_1_AddCollection_m11819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16117(__this, ___enumerable, method) (( void (*) (List_1_t293 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11821_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16118(__this, ___collection, method) (( void (*) (List_1_t293 *, Object_t*, MethodInfo*))List_1_AddRange_m11823_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m16119(__this, method) (( ReadOnlyCollection_1_t2899 * (*) (List_1_t293 *, MethodInfo*))List_1_AsReadOnly_m11825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m16120(__this, method) (( void (*) (List_1_t293 *, MethodInfo*))List_1_Clear_m4115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m16121(__this, ___item, method) (( bool (*) (List_1_t293 *, CanvasGroup_t373 *, MethodInfo*))List_1_Contains_m4122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16122(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t293 *, CanvasGroupU5BU5D_t2894*, int32_t, MethodInfo*))List_1_CopyTo_m4123_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m16123(__this, ___match, method) (( CanvasGroup_t373 * (*) (List_1_t293 *, Predicate_1_t2903 *, MethodInfo*))List_1_Find_m11829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16124(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2903 *, MethodInfo*))List_1_CheckMatch_m11831_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16125(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t293 *, int32_t, int32_t, Predicate_1_t2903 *, MethodInfo*))List_1_GetIndex_m11833_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m16126(__this, method) (( Enumerator_t2897  (*) (List_1_t293 *, MethodInfo*))List_1_GetEnumerator_m11835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m16127(__this, ___item, method) (( int32_t (*) (List_1_t293 *, CanvasGroup_t373 *, MethodInfo*))List_1_IndexOf_m4126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16128(__this, ___start, ___delta, method) (( void (*) (List_1_t293 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16129(__this, ___index, method) (( void (*) (List_1_t293 *, int32_t, MethodInfo*))List_1_CheckIndex_m11840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m16130(__this, ___index, ___item, method) (( void (*) (List_1_t293 *, int32_t, CanvasGroup_t373 *, MethodInfo*))List_1_Insert_m4127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16131(__this, ___collection, method) (( void (*) (List_1_t293 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11843_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m16132(__this, ___item, method) (( bool (*) (List_1_t293 *, CanvasGroup_t373 *, MethodInfo*))List_1_Remove_m4124_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16133(__this, ___match, method) (( int32_t (*) (List_1_t293 *, Predicate_1_t2903 *, MethodInfo*))List_1_RemoveAll_m11846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m16134(__this, ___index, method) (( void (*) (List_1_t293 *, int32_t, MethodInfo*))List_1_RemoveAt_m4120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m16135(__this, method) (( void (*) (List_1_t293 *, MethodInfo*))List_1_Reverse_m11849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m16136(__this, method) (( void (*) (List_1_t293 *, MethodInfo*))List_1_Sort_m11851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16137(__this, ___comparison, method) (( void (*) (List_1_t293 *, Comparison_1_t2906 *, MethodInfo*))List_1_Sort_m11853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m16138(__this, method) (( CanvasGroupU5BU5D_t2894* (*) (List_1_t293 *, MethodInfo*))List_1_ToArray_m11854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m16139(__this, method) (( void (*) (List_1_t293 *, MethodInfo*))List_1_TrimExcess_m11856_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m16140(__this, method) (( int32_t (*) (List_1_t293 *, MethodInfo*))List_1_get_Capacity_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16141(__this, ___value, method) (( void (*) (List_1_t293 *, int32_t, MethodInfo*))List_1_set_Capacity_m11860_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m2253(__this, method) (( int32_t (*) (List_1_t293 *, MethodInfo*))List_1_get_Count_m4106_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m2251(__this, ___index, method) (( CanvasGroup_t373 * (*) (List_1_t293 *, int32_t, MethodInfo*))List_1_get_Item_m4128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m16142(__this, ___index, ___value, method) (( void (*) (List_1_t293 *, int32_t, CanvasGroup_t373 *, MethodInfo*))List_1_set_Item_m4129_gshared)(__this, ___index, ___value, method)
