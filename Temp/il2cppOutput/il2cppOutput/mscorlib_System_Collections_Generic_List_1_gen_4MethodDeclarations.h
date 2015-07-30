#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t354;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t857;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t126;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t648;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2467;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Predicate`1<System.Object>
struct Predicate_1_t2477;
// System.Comparison`1<System.Object>
struct Comparison_1_t2496;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3892_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1__ctor_m3892(__this, method) (( void (*) (List_1_t354 *, MethodInfo*))List_1__ctor_m3892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11796_gshared (List_1_t354 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m11796(__this, ___collection, method) (( void (*) (List_1_t354 *, Object_t*, MethodInfo*))List_1__ctor_m11796_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11798_gshared (List_1_t354 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m11798(__this, ___capacity, method) (( void (*) (List_1_t354 *, int32_t, MethodInfo*))List_1__ctor_m11798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11800_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m11800(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125(__this, method) (( Object_t* (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m4109_gshared (List_1_t354 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m4109(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t354 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m4105_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m4105(__this, method) (( Object_t * (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m4114_gshared (List_1_t354 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m4114(__this, ___item, method) (( int32_t (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m4116_gshared (List_1_t354 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m4116(__this, ___item, method) (( bool (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m4117_gshared (List_1_t354 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m4117(__this, ___item, method) (( int32_t (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m4118_gshared (List_1_t354 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m4118(__this, ___index, ___item, method) (( void (*) (List_1_t354 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m4119_gshared (List_1_t354 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m4119(__this, ___item, method) (( void (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121(__this, method) (( bool (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m4107_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m4107(__this, method) (( bool (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m4108_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m4108(__this, method) (( Object_t * (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m4110_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m4110(__this, method) (( bool (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m4111_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m4111(__this, method) (( bool (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4111_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m4112_gshared (List_1_t354 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m4112(__this, ___index, method) (( Object_t * (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m4113_gshared (List_1_t354 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m4113(__this, ___index, ___value, method) (( void (*) (List_1_t354 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4113_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m3913_gshared (List_1_t354 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m3913(__this, ___item, method) (( void (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_Add_m3913_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11817_gshared (List_1_t354 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m11817(__this, ___newCount, method) (( void (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11819_gshared (List_1_t354 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m11819(__this, ___collection, method) (( void (*) (List_1_t354 *, Object_t*, MethodInfo*))List_1_AddCollection_m11819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11821_gshared (List_1_t354 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m11821(__this, ___enumerable, method) (( void (*) (List_1_t354 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11821_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11823_gshared (List_1_t354 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m11823(__this, ___collection, method) (( void (*) (List_1_t354 *, Object_t*, MethodInfo*))List_1_AddRange_m11823_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2467 * List_1_AsReadOnly_m11825_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m11825(__this, method) (( ReadOnlyCollection_1_t2467 * (*) (List_1_t354 *, MethodInfo*))List_1_AsReadOnly_m11825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m4115_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_Clear_m4115(__this, method) (( void (*) (List_1_t354 *, MethodInfo*))List_1_Clear_m4115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m4122_gshared (List_1_t354 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m4122(__this, ___item, method) (( bool (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_Contains_m4122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m4123_gshared (List_1_t354 * __this, ObjectU5BU5D_t76* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m4123(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t354 *, ObjectU5BU5D_t76*, int32_t, MethodInfo*))List_1_CopyTo_m4123_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11829_gshared (List_1_t354 * __this, Predicate_1_t2477 * ___match, MethodInfo* method);
#define List_1_Find_m11829(__this, ___match, method) (( Object_t * (*) (List_1_t354 *, Predicate_1_t2477 *, MethodInfo*))List_1_Find_m11829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11831_gshared (Object_t * __this /* static, unused */, Predicate_1_t2477 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m11831(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2477 *, MethodInfo*))List_1_CheckMatch_m11831_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11833_gshared (List_1_t354 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2477 * ___match, MethodInfo* method);
#define List_1_GetIndex_m11833(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t354 *, int32_t, int32_t, Predicate_1_t2477 *, MethodInfo*))List_1_GetIndex_m11833_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2466  List_1_GetEnumerator_m11835_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m11835(__this, method) (( Enumerator_t2466  (*) (List_1_t354 *, MethodInfo*))List_1_GetEnumerator_m11835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m4126_gshared (List_1_t354 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m4126(__this, ___item, method) (( int32_t (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_IndexOf_m4126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11838_gshared (List_1_t354 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m11838(__this, ___start, ___delta, method) (( void (*) (List_1_t354 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11840_gshared (List_1_t354 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m11840(__this, ___index, method) (( void (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_CheckIndex_m11840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m4127_gshared (List_1_t354 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m4127(__this, ___index, ___item, method) (( void (*) (List_1_t354 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m4127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11843_gshared (List_1_t354 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m11843(__this, ___collection, method) (( void (*) (List_1_t354 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11843_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m4124_gshared (List_1_t354 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m4124(__this, ___item, method) (( bool (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_Remove_m4124_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11846_gshared (List_1_t354 * __this, Predicate_1_t2477 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m11846(__this, ___match, method) (( int32_t (*) (List_1_t354 *, Predicate_1_t2477 *, MethodInfo*))List_1_RemoveAll_m11846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m4120_gshared (List_1_t354 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m4120(__this, ___index, method) (( void (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_RemoveAt_m4120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11849_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_Reverse_m11849(__this, method) (( void (*) (List_1_t354 *, MethodInfo*))List_1_Reverse_m11849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11851_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_Sort_m11851(__this, method) (( void (*) (List_1_t354 *, MethodInfo*))List_1_Sort_m11851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11853_gshared (List_1_t354 * __this, Comparison_1_t2496 * ___comparison, MethodInfo* method);
#define List_1_Sort_m11853(__this, ___comparison, method) (( void (*) (List_1_t354 *, Comparison_1_t2496 *, MethodInfo*))List_1_Sort_m11853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t76* List_1_ToArray_m11854_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_ToArray_m11854(__this, method) (( ObjectU5BU5D_t76* (*) (List_1_t354 *, MethodInfo*))List_1_ToArray_m11854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11856_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_TrimExcess_m11856(__this, method) (( void (*) (List_1_t354 *, MethodInfo*))List_1_TrimExcess_m11856_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11858_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_get_Capacity_m11858(__this, method) (( int32_t (*) (List_1_t354 *, MethodInfo*))List_1_get_Capacity_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11860_gshared (List_1_t354 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m11860(__this, ___value, method) (( void (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_set_Capacity_m11860_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m4106_gshared (List_1_t354 * __this, MethodInfo* method);
#define List_1_get_Count_m4106(__this, method) (( int32_t (*) (List_1_t354 *, MethodInfo*))List_1_get_Count_m4106_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m4128_gshared (List_1_t354 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m4128(__this, ___index, method) (( Object_t * (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_get_Item_m4128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m4129_gshared (List_1_t354 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m4129(__this, ___index, ___value, method) (( void (*) (List_1_t354 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m4129_gshared)(__this, ___index, ___value, method)
