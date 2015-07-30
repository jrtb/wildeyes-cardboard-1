#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t64;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3546;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3547;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t647;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t2504;
// System.String[]
struct StringU5BU5D_t87;
// System.Predicate`1<System.String>
struct Predicate_1_t2510;
// System.Comparison`1<System.String>
struct Comparison_1_t2513;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m377(__this, method) (( void (*) (List_1_t64 *, MethodInfo*))List_1__ctor_m3892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m11795(__this, ___collection, method) (( void (*) (List_1_t64 *, Object_t*, MethodInfo*))List_1__ctor_m11796_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m11797(__this, ___capacity, method) (( void (*) (List_1_t64 *, int32_t, MethodInfo*))List_1__ctor_m11798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m11799(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11801(__this, method) (( Object_t* (*) (List_1_t64 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11802(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t64 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11803(__this, method) (( Object_t * (*) (List_1_t64 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11804(__this, ___item, method) (( int32_t (*) (List_1_t64 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11805(__this, ___item, method) (( bool (*) (List_1_t64 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11806(__this, ___item, method) (( int32_t (*) (List_1_t64 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11807(__this, ___index, ___item, method) (( void (*) (List_1_t64 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11808(__this, ___item, method) (( void (*) (List_1_t64 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11809(__this, method) (( bool (*) (List_1_t64 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11810(__this, method) (( bool (*) (List_1_t64 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11811(__this, method) (( Object_t * (*) (List_1_t64 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m11812(__this, method) (( bool (*) (List_1_t64 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m11813(__this, method) (( bool (*) (List_1_t64 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4111_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11814(__this, ___index, method) (( Object_t * (*) (List_1_t64 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11815(__this, ___index, ___value, method) (( void (*) (List_1_t64 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4113_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m564(__this, ___item, method) (( void (*) (List_1_t64 *, String_t*, MethodInfo*))List_1_Add_m3913_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11816(__this, ___newCount, method) (( void (*) (List_1_t64 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m11818(__this, ___collection, method) (( void (*) (List_1_t64 *, Object_t*, MethodInfo*))List_1_AddCollection_m11819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m11820(__this, ___enumerable, method) (( void (*) (List_1_t64 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11821_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m11822(__this, ___collection, method) (( void (*) (List_1_t64 *, Object_t*, MethodInfo*))List_1_AddRange_m11823_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.String>::AsReadOnly()
#define List_1_AsReadOnly_m11824(__this, method) (( ReadOnlyCollection_1_t2504 * (*) (List_1_t64 *, MethodInfo*))List_1_AsReadOnly_m11825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m381(__this, method) (( void (*) (List_1_t64 *, MethodInfo*))List_1_Clear_m4115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m11826(__this, ___item, method) (( bool (*) (List_1_t64 *, String_t*, MethodInfo*))List_1_Contains_m4122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11827(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t64 *, StringU5BU5D_t87*, int32_t, MethodInfo*))List_1_CopyTo_m4123_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.String>::Find(System.Predicate`1<T>)
#define List_1_Find_m11828(__this, ___match, method) (( String_t* (*) (List_1_t64 *, Predicate_1_t2510 *, MethodInfo*))List_1_Find_m11829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m11830(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2510 *, MethodInfo*))List_1_CheckMatch_m11831_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m11832(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t64 *, int32_t, int32_t, Predicate_1_t2510 *, MethodInfo*))List_1_GetIndex_m11833_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m11834(__this, method) (( Enumerator_t2502  (*) (List_1_t64 *, MethodInfo*))List_1_GetEnumerator_m11835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m11836(__this, ___item, method) (( int32_t (*) (List_1_t64 *, String_t*, MethodInfo*))List_1_IndexOf_m4126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11837(__this, ___start, ___delta, method) (( void (*) (List_1_t64 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11839(__this, ___index, method) (( void (*) (List_1_t64 *, int32_t, MethodInfo*))List_1_CheckIndex_m11840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m11841(__this, ___index, ___item, method) (( void (*) (List_1_t64 *, int32_t, String_t*, MethodInfo*))List_1_Insert_m4127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m11842(__this, ___collection, method) (( void (*) (List_1_t64 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11843_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m11844(__this, ___item, method) (( bool (*) (List_1_t64 *, String_t*, MethodInfo*))List_1_Remove_m4124_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m11845(__this, ___match, method) (( int32_t (*) (List_1_t64 *, Predicate_1_t2510 *, MethodInfo*))List_1_RemoveAll_m11846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11847(__this, ___index, method) (( void (*) (List_1_t64 *, int32_t, MethodInfo*))List_1_RemoveAt_m4120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Reverse()
#define List_1_Reverse_m11848(__this, method) (( void (*) (List_1_t64 *, MethodInfo*))List_1_Reverse_m11849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort()
#define List_1_Sort_m11850(__this, method) (( void (*) (List_1_t64 *, MethodInfo*))List_1_Sort_m11851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m11852(__this, ___comparison, method) (( void (*) (List_1_t64 *, Comparison_1_t2513 *, MethodInfo*))List_1_Sort_m11853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m405(__this, method) (( StringU5BU5D_t87* (*) (List_1_t64 *, MethodInfo*))List_1_ToArray_m11854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::TrimExcess()
#define List_1_TrimExcess_m11855(__this, method) (( void (*) (List_1_t64 *, MethodInfo*))List_1_TrimExcess_m11856_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m11857(__this, method) (( int32_t (*) (List_1_t64 *, MethodInfo*))List_1_get_Capacity_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11859(__this, ___value, method) (( void (*) (List_1_t64 *, int32_t, MethodInfo*))List_1_set_Capacity_m11860_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m378(__this, method) (( int32_t (*) (List_1_t64 *, MethodInfo*))List_1_get_Count_m4106_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m3847(__this, ___index, method) (( String_t* (*) (List_1_t64 *, int32_t, MethodInfo*))List_1_get_Item_m4128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m11861(__this, ___index, ___value, method) (( void (*) (List_1_t64 *, int32_t, String_t*, MethodInfo*))List_1_set_Item_m4129_gshared)(__this, ___index, ___value, method)
