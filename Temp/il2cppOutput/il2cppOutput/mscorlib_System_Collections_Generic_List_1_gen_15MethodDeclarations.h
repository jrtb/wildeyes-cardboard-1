#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t292;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t212;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
struct IEnumerable_1_t3625;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t3626;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
struct ICollection_1_t3627;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
struct ReadOnlyCollection_1_t2885;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t2874;
// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t2889;
// System.Comparison`1<UnityEngine.UI.Selectable>
struct Comparison_1_t2892;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m2250(__this, method) (( void (*) (List_1_t292 *, MethodInfo*))List_1__ctor_m3892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m15917(__this, ___collection, method) (( void (*) (List_1_t292 *, Object_t*, MethodInfo*))List_1__ctor_m11796_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m15918(__this, ___capacity, method) (( void (*) (List_1_t292 *, int32_t, MethodInfo*))List_1__ctor_m11798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m15919(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15920(__this, method) (( Object_t* (*) (List_1_t292 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15921(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t292 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15922(__this, method) (( Object_t * (*) (List_1_t292 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15923(__this, ___item, method) (( int32_t (*) (List_1_t292 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15924(__this, ___item, method) (( bool (*) (List_1_t292 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15925(__this, ___item, method) (( int32_t (*) (List_1_t292 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15926(__this, ___index, ___item, method) (( void (*) (List_1_t292 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15927(__this, ___item, method) (( void (*) (List_1_t292 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15928(__this, method) (( bool (*) (List_1_t292 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15929(__this, method) (( bool (*) (List_1_t292 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15930(__this, method) (( Object_t * (*) (List_1_t292 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15931(__this, method) (( bool (*) (List_1_t292 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15932(__this, method) (( bool (*) (List_1_t292 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4111_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15933(__this, ___index, method) (( Object_t * (*) (List_1_t292 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15934(__this, ___index, ___value, method) (( void (*) (List_1_t292 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4113_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m2254(__this, ___item, method) (( void (*) (List_1_t292 *, Selectable_t212 *, MethodInfo*))List_1_Add_m3913_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15935(__this, ___newCount, method) (( void (*) (List_1_t292 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15936(__this, ___collection, method) (( void (*) (List_1_t292 *, Object_t*, MethodInfo*))List_1_AddCollection_m11819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15937(__this, ___enumerable, method) (( void (*) (List_1_t292 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11821_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15938(__this, ___collection, method) (( void (*) (List_1_t292 *, Object_t*, MethodInfo*))List_1_AddRange_m11823_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m15939(__this, method) (( ReadOnlyCollection_1_t2885 * (*) (List_1_t292 *, MethodInfo*))List_1_AsReadOnly_m11825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m15940(__this, method) (( void (*) (List_1_t292 *, MethodInfo*))List_1_Clear_m4115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m15941(__this, ___item, method) (( bool (*) (List_1_t292 *, Selectable_t212 *, MethodInfo*))List_1_Contains_m4122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15942(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t292 *, SelectableU5BU5D_t2874*, int32_t, MethodInfo*))List_1_CopyTo_m4123_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m15943(__this, ___match, method) (( Selectable_t212 * (*) (List_1_t292 *, Predicate_1_t2889 *, MethodInfo*))List_1_Find_m11829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15944(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2889 *, MethodInfo*))List_1_CheckMatch_m11831_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15945(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t292 *, int32_t, int32_t, Predicate_1_t2889 *, MethodInfo*))List_1_GetIndex_m11833_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define List_1_GetEnumerator_m15946(__this, method) (( Enumerator_t2883  (*) (List_1_t292 *, MethodInfo*))List_1_GetEnumerator_m11835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m15947(__this, ___item, method) (( int32_t (*) (List_1_t292 *, Selectable_t212 *, MethodInfo*))List_1_IndexOf_m4126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15948(__this, ___start, ___delta, method) (( void (*) (List_1_t292 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15949(__this, ___index, method) (( void (*) (List_1_t292 *, int32_t, MethodInfo*))List_1_CheckIndex_m11840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m15950(__this, ___index, ___item, method) (( void (*) (List_1_t292 *, int32_t, Selectable_t212 *, MethodInfo*))List_1_Insert_m4127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15951(__this, ___collection, method) (( void (*) (List_1_t292 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11843_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m2255(__this, ___item, method) (( bool (*) (List_1_t292 *, Selectable_t212 *, MethodInfo*))List_1_Remove_m4124_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15952(__this, ___match, method) (( int32_t (*) (List_1_t292 *, Predicate_1_t2889 *, MethodInfo*))List_1_RemoveAll_m11846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15953(__this, ___index, method) (( void (*) (List_1_t292 *, int32_t, MethodInfo*))List_1_RemoveAt_m4120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m15954(__this, method) (( void (*) (List_1_t292 *, MethodInfo*))List_1_Reverse_m11849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m15955(__this, method) (( void (*) (List_1_t292 *, MethodInfo*))List_1_Sort_m11851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15956(__this, ___comparison, method) (( void (*) (List_1_t292 *, Comparison_1_t2892 *, MethodInfo*))List_1_Sort_m11853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m15957(__this, method) (( SelectableU5BU5D_t2874* (*) (List_1_t292 *, MethodInfo*))List_1_ToArray_m11854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m15958(__this, method) (( void (*) (List_1_t292 *, MethodInfo*))List_1_TrimExcess_m11856_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m15959(__this, method) (( int32_t (*) (List_1_t292 *, MethodInfo*))List_1_get_Capacity_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15960(__this, ___value, method) (( void (*) (List_1_t292 *, int32_t, MethodInfo*))List_1_set_Capacity_m11860_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m2262(__this, method) (( int32_t (*) (List_1_t292 *, MethodInfo*))List_1_get_Count_m4106_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m2260(__this, ___index, method) (( Selectable_t212 * (*) (List_1_t292 *, int32_t, MethodInfo*))List_1_get_Item_m4128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m15961(__this, ___index, ___value, method) (( void (*) (List_1_t292 *, int32_t, Selectable_t212 *, MethodInfo*))List_1_set_Item_m4129_gshared)(__this, ___index, ___value, method)
