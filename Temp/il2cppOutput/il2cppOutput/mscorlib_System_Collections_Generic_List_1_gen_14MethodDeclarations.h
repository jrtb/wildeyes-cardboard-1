#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t236;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t233;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>
struct IEnumerable_1_t3615;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t3616;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t375;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Graphic>
struct ReadOnlyCollection_1_t2824;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t2822;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t2828;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t237;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Graphic>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m2042(__this, method) (( void (*) (List_1_t236 *, MethodInfo*))List_1__ctor_m3892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m15422(__this, ___collection, method) (( void (*) (List_1_t236 *, Object_t*, MethodInfo*))List_1__ctor_m11796_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Int32)
#define List_1__ctor_m15423(__this, ___capacity, method) (( void (*) (List_1_t236 *, int32_t, MethodInfo*))List_1__ctor_m11798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.cctor()
#define List_1__cctor_m15424(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15425(__this, method) (( Object_t* (*) (List_1_t236 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15426(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t236 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15427(__this, method) (( Object_t * (*) (List_1_t236 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15428(__this, ___item, method) (( int32_t (*) (List_1_t236 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15429(__this, ___item, method) (( bool (*) (List_1_t236 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15430(__this, ___item, method) (( int32_t (*) (List_1_t236 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15431(__this, ___index, ___item, method) (( void (*) (List_1_t236 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15432(__this, ___item, method) (( void (*) (List_1_t236 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15433(__this, method) (( bool (*) (List_1_t236 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15434(__this, method) (( bool (*) (List_1_t236 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15435(__this, method) (( Object_t * (*) (List_1_t236 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15436(__this, method) (( bool (*) (List_1_t236 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15437(__this, method) (( bool (*) (List_1_t236 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4111_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15438(__this, ___index, method) (( Object_t * (*) (List_1_t236 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15439(__this, ___index, ___value, method) (( void (*) (List_1_t236 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4113_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Add(T)
#define List_1_Add_m2054(__this, ___item, method) (( void (*) (List_1_t236 *, Graphic_t233 *, MethodInfo*))List_1_Add_m3913_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15440(__this, ___newCount, method) (( void (*) (List_1_t236 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15441(__this, ___collection, method) (( void (*) (List_1_t236 *, Object_t*, MethodInfo*))List_1_AddCollection_m11819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15442(__this, ___enumerable, method) (( void (*) (List_1_t236 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11821_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15443(__this, ___collection, method) (( void (*) (List_1_t236 *, Object_t*, MethodInfo*))List_1_AddRange_m11823_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AsReadOnly()
#define List_1_AsReadOnly_m15444(__this, method) (( ReadOnlyCollection_1_t2824 * (*) (List_1_t236 *, MethodInfo*))List_1_AsReadOnly_m11825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Clear()
#define List_1_Clear_m2047(__this, method) (( void (*) (List_1_t236 *, MethodInfo*))List_1_Clear_m4115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Contains(T)
#define List_1_Contains_m15445(__this, ___item, method) (( bool (*) (List_1_t236 *, Graphic_t233 *, MethodInfo*))List_1_Contains_m4122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15446(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t236 *, GraphicU5BU5D_t2822*, int32_t, MethodInfo*))List_1_CopyTo_m4123_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Find(System.Predicate`1<T>)
#define List_1_Find_m15447(__this, ___match, method) (( Graphic_t233 * (*) (List_1_t236 *, Predicate_1_t2828 *, MethodInfo*))List_1_Find_m11829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15448(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2828 *, MethodInfo*))List_1_CheckMatch_m11831_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15449(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t236 *, int32_t, int32_t, Predicate_1_t2828 *, MethodInfo*))List_1_GetIndex_m11833_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define List_1_GetEnumerator_m15450(__this, method) (( Enumerator_t2823  (*) (List_1_t236 *, MethodInfo*))List_1_GetEnumerator_m11835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define List_1_IndexOf_m15451(__this, ___item, method) (( int32_t (*) (List_1_t236 *, Graphic_t233 *, MethodInfo*))List_1_IndexOf_m4126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15452(__this, ___start, ___delta, method) (( void (*) (List_1_t236 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15453(__this, ___index, method) (( void (*) (List_1_t236 *, int32_t, MethodInfo*))List_1_CheckIndex_m11840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define List_1_Insert_m15454(__this, ___index, ___item, method) (( void (*) (List_1_t236 *, int32_t, Graphic_t233 *, MethodInfo*))List_1_Insert_m4127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15455(__this, ___collection, method) (( void (*) (List_1_t236 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11843_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Remove(T)
#define List_1_Remove_m15456(__this, ___item, method) (( bool (*) (List_1_t236 *, Graphic_t233 *, MethodInfo*))List_1_Remove_m4124_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15457(__this, ___match, method) (( int32_t (*) (List_1_t236 *, Predicate_1_t2828 *, MethodInfo*))List_1_RemoveAll_m11846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15458(__this, ___index, method) (( void (*) (List_1_t236 *, int32_t, MethodInfo*))List_1_RemoveAt_m4120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Reverse()
#define List_1_Reverse_m15459(__this, method) (( void (*) (List_1_t236 *, MethodInfo*))List_1_Reverse_m11849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort()
#define List_1_Sort_m15460(__this, method) (( void (*) (List_1_t236 *, MethodInfo*))List_1_Sort_m11851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m2058(__this, ___comparison, method) (( void (*) (List_1_t236 *, Comparison_1_t237 *, MethodInfo*))List_1_Sort_m11853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::ToArray()
#define List_1_ToArray_m15461(__this, method) (( GraphicU5BU5D_t2822* (*) (List_1_t236 *, MethodInfo*))List_1_ToArray_m11854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::TrimExcess()
#define List_1_TrimExcess_m15462(__this, method) (( void (*) (List_1_t236 *, MethodInfo*))List_1_TrimExcess_m11856_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Capacity()
#define List_1_get_Capacity_m15463(__this, method) (( int32_t (*) (List_1_t236 *, MethodInfo*))List_1_get_Capacity_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15464(__this, ___value, method) (( void (*) (List_1_t236 *, int32_t, MethodInfo*))List_1_set_Capacity_m11860_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Count()
#define List_1_get_Count_m2051(__this, method) (( int32_t (*) (List_1_t236 *, MethodInfo*))List_1_get_Count_m4106_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define List_1_get_Item_m2048(__this, ___index, method) (( Graphic_t233 * (*) (List_1_t236 *, int32_t, MethodInfo*))List_1_get_Item_m4128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define List_1_set_Item_m15465(__this, ___index, ___value, method) (( void (*) (List_1_t236 *, int32_t, Graphic_t233 *, MethodInfo*))List_1_set_Item_m4129_gshared)(__this, ___index, ___value, method)
