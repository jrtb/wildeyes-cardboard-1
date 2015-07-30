#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t562;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t3661;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t3662;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.ICollection`1<System.Byte[]>
struct ICollection_1_t3663;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>
struct ReadOnlyCollection_1_t3053;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t1384;
// System.Predicate`1<System.Byte[]>
struct Predicate_1_t3057;
// System.Comparison`1<System.Byte[]>
struct Comparison_1_t3060;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m3853(__this, method) (( void (*) (List_1_t562 *, MethodInfo*))List_1__ctor_m3892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m17697(__this, ___collection, method) (( void (*) (List_1_t562 *, Object_t*, MethodInfo*))List_1__ctor_m11796_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m17698(__this, ___capacity, method) (( void (*) (List_1_t562 *, int32_t, MethodInfo*))List_1__ctor_m11798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m17699(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17700(__this, method) (( Object_t* (*) (List_1_t562 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17701(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t562 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17702(__this, method) (( Object_t * (*) (List_1_t562 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17703(__this, ___item, method) (( int32_t (*) (List_1_t562 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17704(__this, ___item, method) (( bool (*) (List_1_t562 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17705(__this, ___item, method) (( int32_t (*) (List_1_t562 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17706(__this, ___index, ___item, method) (( void (*) (List_1_t562 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17707(__this, ___item, method) (( void (*) (List_1_t562 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17708(__this, method) (( bool (*) (List_1_t562 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17709(__this, method) (( bool (*) (List_1_t562 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17710(__this, method) (( Object_t * (*) (List_1_t562 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17711(__this, method) (( bool (*) (List_1_t562 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17712(__this, method) (( bool (*) (List_1_t562 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4111_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17713(__this, ___index, method) (( Object_t * (*) (List_1_t562 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17714(__this, ___index, ___value, method) (( void (*) (List_1_t562 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4113_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m3854(__this, ___item, method) (( void (*) (List_1_t562 *, ByteU5BU5D_t66*, MethodInfo*))List_1_Add_m3913_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17715(__this, ___newCount, method) (( void (*) (List_1_t562 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17716(__this, ___collection, method) (( void (*) (List_1_t562 *, Object_t*, MethodInfo*))List_1_AddCollection_m11819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17717(__this, ___enumerable, method) (( void (*) (List_1_t562 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11821_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17718(__this, ___collection, method) (( void (*) (List_1_t562 *, Object_t*, MethodInfo*))List_1_AddRange_m11823_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte[]>::AsReadOnly()
#define List_1_AsReadOnly_m17719(__this, method) (( ReadOnlyCollection_1_t3053 * (*) (List_1_t562 *, MethodInfo*))List_1_AsReadOnly_m11825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m17720(__this, method) (( void (*) (List_1_t562 *, MethodInfo*))List_1_Clear_m4115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m17721(__this, ___item, method) (( bool (*) (List_1_t562 *, ByteU5BU5D_t66*, MethodInfo*))List_1_Contains_m4122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17722(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t562 *, ByteU5BU5DU5BU5D_t1384*, int32_t, MethodInfo*))List_1_CopyTo_m4123_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte[]>::Find(System.Predicate`1<T>)
#define List_1_Find_m17723(__this, ___match, method) (( ByteU5BU5D_t66* (*) (List_1_t562 *, Predicate_1_t3057 *, MethodInfo*))List_1_Find_m11829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17724(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3057 *, MethodInfo*))List_1_CheckMatch_m11831_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17725(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t562 *, int32_t, int32_t, Predicate_1_t3057 *, MethodInfo*))List_1_GetIndex_m11833_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m17726(__this, method) (( Enumerator_t3051  (*) (List_1_t562 *, MethodInfo*))List_1_GetEnumerator_m11835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m17727(__this, ___item, method) (( int32_t (*) (List_1_t562 *, ByteU5BU5D_t66*, MethodInfo*))List_1_IndexOf_m4126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17728(__this, ___start, ___delta, method) (( void (*) (List_1_t562 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17729(__this, ___index, method) (( void (*) (List_1_t562 *, int32_t, MethodInfo*))List_1_CheckIndex_m11840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m17730(__this, ___index, ___item, method) (( void (*) (List_1_t562 *, int32_t, ByteU5BU5D_t66*, MethodInfo*))List_1_Insert_m4127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17731(__this, ___collection, method) (( void (*) (List_1_t562 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11843_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m17732(__this, ___item, method) (( bool (*) (List_1_t562 *, ByteU5BU5D_t66*, MethodInfo*))List_1_Remove_m4124_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17733(__this, ___match, method) (( int32_t (*) (List_1_t562 *, Predicate_1_t3057 *, MethodInfo*))List_1_RemoveAll_m11846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17734(__this, ___index, method) (( void (*) (List_1_t562 *, int32_t, MethodInfo*))List_1_RemoveAt_m4120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Reverse()
#define List_1_Reverse_m17735(__this, method) (( void (*) (List_1_t562 *, MethodInfo*))List_1_Reverse_m11849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort()
#define List_1_Sort_m17736(__this, method) (( void (*) (List_1_t562 *, MethodInfo*))List_1_Sort_m11851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17737(__this, ___comparison, method) (( void (*) (List_1_t562 *, Comparison_1_t3060 *, MethodInfo*))List_1_Sort_m11853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m17738(__this, method) (( ByteU5BU5DU5BU5D_t1384* (*) (List_1_t562 *, MethodInfo*))List_1_ToArray_m11854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::TrimExcess()
#define List_1_TrimExcess_m17739(__this, method) (( void (*) (List_1_t562 *, MethodInfo*))List_1_TrimExcess_m11856_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m17740(__this, method) (( int32_t (*) (List_1_t562 *, MethodInfo*))List_1_get_Capacity_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17741(__this, ___value, method) (( void (*) (List_1_t562 *, int32_t, MethodInfo*))List_1_set_Capacity_m11860_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m3851(__this, method) (( int32_t (*) (List_1_t562 *, MethodInfo*))List_1_get_Count_m4106_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m3850(__this, ___index, method) (( ByteU5BU5D_t66* (*) (List_1_t562 *, int32_t, MethodInfo*))List_1_get_Item_m4128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m17742(__this, ___index, ___value, method) (( void (*) (List_1_t562 *, int32_t, ByteU5BU5D_t66*, MethodInfo*))List_1_set_Item_m4129_gshared)(__this, ___index, ___value, method)
