#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t789;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t3722;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t3702;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3698;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t3337;
// System.Type[]
struct TypeU5BU5D_t658;
// System.Predicate`1<System.Type>
struct Predicate_1_t3339;
// System.Comparison`1<System.Type>
struct Comparison_1_t3342;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m3994(__this, method) (( void (*) (List_1_t789 *, MethodInfo*))List_1__ctor_m3892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20466(__this, ___collection, method) (( void (*) (List_1_t789 *, Object_t*, MethodInfo*))List_1__ctor_m11796_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m20467(__this, ___capacity, method) (( void (*) (List_1_t789 *, int32_t, MethodInfo*))List_1__ctor_m11798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m20468(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20469(__this, method) (( Object_t* (*) (List_1_t789 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20470(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t789 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20471(__this, method) (( Object_t * (*) (List_1_t789 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20472(__this, ___item, method) (( int32_t (*) (List_1_t789 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20473(__this, ___item, method) (( bool (*) (List_1_t789 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20474(__this, ___item, method) (( int32_t (*) (List_1_t789 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20475(__this, ___index, ___item, method) (( void (*) (List_1_t789 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20476(__this, ___item, method) (( void (*) (List_1_t789 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20477(__this, method) (( bool (*) (List_1_t789 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20478(__this, method) (( bool (*) (List_1_t789 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20479(__this, method) (( Object_t * (*) (List_1_t789 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m20480(__this, method) (( bool (*) (List_1_t789 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m20481(__this, method) (( bool (*) (List_1_t789 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4111_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20482(__this, ___index, method) (( Object_t * (*) (List_1_t789 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20483(__this, ___index, ___value, method) (( void (*) (List_1_t789 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4113_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m3995(__this, ___item, method) (( void (*) (List_1_t789 *, Type_t *, MethodInfo*))List_1_Add_m3913_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20484(__this, ___newCount, method) (( void (*) (List_1_t789 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20485(__this, ___collection, method) (( void (*) (List_1_t789 *, Object_t*, MethodInfo*))List_1_AddCollection_m11819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20486(__this, ___enumerable, method) (( void (*) (List_1_t789 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11821_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m20487(__this, ___collection, method) (( void (*) (List_1_t789 *, Object_t*, MethodInfo*))List_1_AddRange_m11823_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m20488(__this, method) (( ReadOnlyCollection_1_t3337 * (*) (List_1_t789 *, MethodInfo*))List_1_AsReadOnly_m11825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m20489(__this, method) (( void (*) (List_1_t789 *, MethodInfo*))List_1_Clear_m4115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m20490(__this, ___item, method) (( bool (*) (List_1_t789 *, Type_t *, MethodInfo*))List_1_Contains_m4122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20491(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t789 *, TypeU5BU5D_t658*, int32_t, MethodInfo*))List_1_CopyTo_m4123_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m20492(__this, ___match, method) (( Type_t * (*) (List_1_t789 *, Predicate_1_t3339 *, MethodInfo*))List_1_Find_m11829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m20493(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3339 *, MethodInfo*))List_1_CheckMatch_m11831_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m20494(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t789 *, int32_t, int32_t, Predicate_1_t3339 *, MethodInfo*))List_1_GetIndex_m11833_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m20495(__this, method) (( Enumerator_t3335  (*) (List_1_t789 *, MethodInfo*))List_1_GetEnumerator_m11835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m20496(__this, ___item, method) (( int32_t (*) (List_1_t789 *, Type_t *, MethodInfo*))List_1_IndexOf_m4126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20497(__this, ___start, ___delta, method) (( void (*) (List_1_t789 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20498(__this, ___index, method) (( void (*) (List_1_t789 *, int32_t, MethodInfo*))List_1_CheckIndex_m11840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m20499(__this, ___index, ___item, method) (( void (*) (List_1_t789 *, int32_t, Type_t *, MethodInfo*))List_1_Insert_m4127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20500(__this, ___collection, method) (( void (*) (List_1_t789 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11843_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m20501(__this, ___item, method) (( bool (*) (List_1_t789 *, Type_t *, MethodInfo*))List_1_Remove_m4124_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m20502(__this, ___match, method) (( int32_t (*) (List_1_t789 *, Predicate_1_t3339 *, MethodInfo*))List_1_RemoveAll_m11846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20503(__this, ___index, method) (( void (*) (List_1_t789 *, int32_t, MethodInfo*))List_1_RemoveAt_m4120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m20504(__this, method) (( void (*) (List_1_t789 *, MethodInfo*))List_1_Reverse_m11849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m20505(__this, method) (( void (*) (List_1_t789 *, MethodInfo*))List_1_Sort_m11851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m20506(__this, ___comparison, method) (( void (*) (List_1_t789 *, Comparison_1_t3342 *, MethodInfo*))List_1_Sort_m11853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m3998(__this, method) (( TypeU5BU5D_t658* (*) (List_1_t789 *, MethodInfo*))List_1_ToArray_m11854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m20507(__this, method) (( void (*) (List_1_t789 *, MethodInfo*))List_1_TrimExcess_m11856_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m20508(__this, method) (( int32_t (*) (List_1_t789 *, MethodInfo*))List_1_get_Capacity_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20509(__this, ___value, method) (( void (*) (List_1_t789 *, int32_t, MethodInfo*))List_1_set_Capacity_m11860_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m20510(__this, method) (( int32_t (*) (List_1_t789 *, MethodInfo*))List_1_get_Count_m4106_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m20511(__this, ___index, method) (( Type_t * (*) (List_1_t789 *, int32_t, MethodInfo*))List_1_get_Item_m4128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m20512(__this, ___index, ___value, method) (( void (*) (List_1_t789 *, int32_t, Type_t *, MethodInfo*))List_1_set_Item_m4129_gshared)(__this, ___index, ___value, method)
