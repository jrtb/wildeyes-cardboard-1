#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t335;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t71;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Component>
struct IEnumerable_1_t3555;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t3556;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Generic.ICollection`1<UnityEngine.Component>
struct ICollection_1_t3557;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
struct ReadOnlyCollection_1_t2554;
// UnityEngine.Component[]
struct ComponentU5BU5D_t2551;
// System.Predicate`1<UnityEngine.Component>
struct Predicate_1_t333;
// System.Comparison`1<UnityEngine.Component>
struct Comparison_1_t2560;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m12563(__this, method) (( void (*) (List_1_t335 *, MethodInfo*))List_1__ctor_m3892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m12564(__this, ___collection, method) (( void (*) (List_1_t335 *, Object_t*, MethodInfo*))List_1__ctor_m11796_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Int32)
#define List_1__ctor_m12565(__this, ___capacity, method) (( void (*) (List_1_t335 *, int32_t, MethodInfo*))List_1__ctor_m11798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.cctor()
#define List_1__cctor_m12566(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12567(__this, method) (( Object_t* (*) (List_1_t335 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12568(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t335 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12569(__this, method) (( Object_t * (*) (List_1_t335 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12570(__this, ___item, method) (( int32_t (*) (List_1_t335 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m4114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12571(__this, ___item, method) (( bool (*) (List_1_t335 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m4116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12572(__this, ___item, method) (( int32_t (*) (List_1_t335 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m4117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12573(__this, ___index, ___item, method) (( void (*) (List_1_t335 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m4118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12574(__this, ___item, method) (( void (*) (List_1_t335 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m4119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12575(__this, method) (( bool (*) (List_1_t335 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12576(__this, method) (( bool (*) (List_1_t335 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m4107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12577(__this, method) (( Object_t * (*) (List_1_t335 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m12578(__this, method) (( bool (*) (List_1_t335 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m4110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m12579(__this, method) (( bool (*) (List_1_t335 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m4111_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12580(__this, ___index, method) (( Object_t * (*) (List_1_t335 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m4112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12581(__this, ___index, ___value, method) (( void (*) (List_1_t335 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m4113_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Add(T)
#define List_1_Add_m12582(__this, ___item, method) (( void (*) (List_1_t335 *, Component_t71 *, MethodInfo*))List_1_Add_m3913_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12583(__this, ___newCount, method) (( void (*) (List_1_t335 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m12584(__this, ___collection, method) (( void (*) (List_1_t335 *, Object_t*, MethodInfo*))List_1_AddCollection_m11819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m12585(__this, ___enumerable, method) (( void (*) (List_1_t335 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11821_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m12586(__this, ___collection, method) (( void (*) (List_1_t335 *, Object_t*, MethodInfo*))List_1_AddRange_m11823_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::AsReadOnly()
#define List_1_AsReadOnly_m12587(__this, method) (( ReadOnlyCollection_1_t2554 * (*) (List_1_t335 *, MethodInfo*))List_1_AsReadOnly_m11825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Clear()
#define List_1_Clear_m2383(__this, method) (( void (*) (List_1_t335 *, MethodInfo*))List_1_Clear_m4115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Contains(T)
#define List_1_Contains_m12588(__this, ___item, method) (( bool (*) (List_1_t335 *, Component_t71 *, MethodInfo*))List_1_Contains_m4122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12589(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t335 *, ComponentU5BU5D_t2551*, int32_t, MethodInfo*))List_1_CopyTo_m4123_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Component>::Find(System.Predicate`1<T>)
#define List_1_Find_m12590(__this, ___match, method) (( Component_t71 * (*) (List_1_t335 *, Predicate_1_t333 *, MethodInfo*))List_1_Find_m11829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m12591(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t333 *, MethodInfo*))List_1_CheckMatch_m11831_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m12592(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t335 *, int32_t, int32_t, Predicate_1_t333 *, MethodInfo*))List_1_GetIndex_m11833_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
#define List_1_GetEnumerator_m12593(__this, method) (( Enumerator_t2552  (*) (List_1_t335 *, MethodInfo*))List_1_GetEnumerator_m11835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::IndexOf(T)
#define List_1_IndexOf_m12594(__this, ___item, method) (( int32_t (*) (List_1_t335 *, Component_t71 *, MethodInfo*))List_1_IndexOf_m4126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12595(__this, ___start, ___delta, method) (( void (*) (List_1_t335 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12596(__this, ___index, method) (( void (*) (List_1_t335 *, int32_t, MethodInfo*))List_1_CheckIndex_m11840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Insert(System.Int32,T)
#define List_1_Insert_m12597(__this, ___index, ___item, method) (( void (*) (List_1_t335 *, int32_t, Component_t71 *, MethodInfo*))List_1_Insert_m4127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m12598(__this, ___collection, method) (( void (*) (List_1_t335 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11843_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Remove(T)
#define List_1_Remove_m12599(__this, ___item, method) (( bool (*) (List_1_t335 *, Component_t71 *, MethodInfo*))List_1_Remove_m4124_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m2362(__this, ___match, method) (( int32_t (*) (List_1_t335 *, Predicate_1_t333 *, MethodInfo*))List_1_RemoveAll_m11846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12600(__this, ___index, method) (( void (*) (List_1_t335 *, int32_t, MethodInfo*))List_1_RemoveAt_m4120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Reverse()
#define List_1_Reverse_m12601(__this, method) (( void (*) (List_1_t335 *, MethodInfo*))List_1_Reverse_m11849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort()
#define List_1_Sort_m12602(__this, method) (( void (*) (List_1_t335 *, MethodInfo*))List_1_Sort_m11851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m12603(__this, ___comparison, method) (( void (*) (List_1_t335 *, Comparison_1_t2560 *, MethodInfo*))List_1_Sort_m11853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Component>::ToArray()
#define List_1_ToArray_m12604(__this, method) (( ComponentU5BU5D_t2551* (*) (List_1_t335 *, MethodInfo*))List_1_ToArray_m11854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::TrimExcess()
#define List_1_TrimExcess_m12605(__this, method) (( void (*) (List_1_t335 *, MethodInfo*))List_1_TrimExcess_m11856_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Capacity()
#define List_1_get_Capacity_m12606(__this, method) (( int32_t (*) (List_1_t335 *, MethodInfo*))List_1_get_Capacity_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12607(__this, ___value, method) (( void (*) (List_1_t335 *, int32_t, MethodInfo*))List_1_set_Capacity_m11860_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
#define List_1_get_Count_m1999(__this, method) (( int32_t (*) (List_1_t335 *, MethodInfo*))List_1_get_Count_m4106_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
#define List_1_get_Item_m1997(__this, ___index, method) (( Component_t71 * (*) (List_1_t335 *, int32_t, MethodInfo*))List_1_get_Item_m4128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Item(System.Int32,T)
#define List_1_set_Item_m12608(__this, ___index, ___value, method) (( void (*) (List_1_t335 *, int32_t, Component_t71 *, MethodInfo*))List_1_set_Item_m4129_gshared)(__this, ___index, ___value, method)
