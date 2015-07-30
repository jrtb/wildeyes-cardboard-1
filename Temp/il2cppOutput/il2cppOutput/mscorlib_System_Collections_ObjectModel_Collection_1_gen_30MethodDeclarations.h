#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
struct Collection_1_t3382;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t720;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t3378;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t3731;
// System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>
struct IList_1_t3380;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m20896(__this, method) (( void (*) (Collection_1_t3382 *, MethodInfo*))Collection_1__ctor_m11898_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20897(__this, method) (( bool (*) (Collection_1_t3382 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11899_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m20898(__this, ___array, ___index, method) (( void (*) (Collection_1_t3382 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11900_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m20899(__this, method) (( Object_t * (*) (Collection_1_t3382 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11901_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m20900(__this, ___value, method) (( int32_t (*) (Collection_1_t3382 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m11902_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m20901(__this, ___value, method) (( bool (*) (Collection_1_t3382 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m11903_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m20902(__this, ___value, method) (( int32_t (*) (Collection_1_t3382 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11904_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m20903(__this, ___index, ___value, method) (( void (*) (Collection_1_t3382 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m11905_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m20904(__this, ___value, method) (( void (*) (Collection_1_t3382 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m11906_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m20905(__this, method) (( bool (*) (Collection_1_t3382 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11907_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m20906(__this, method) (( Object_t * (*) (Collection_1_t3382 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11908_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m20907(__this, method) (( bool (*) (Collection_1_t3382 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11909_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m20908(__this, method) (( bool (*) (Collection_1_t3382 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11910_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m20909(__this, ___index, method) (( Object_t * (*) (Collection_1_t3382 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11911_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m20910(__this, ___index, ___value, method) (( void (*) (Collection_1_t3382 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11912_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Add(T)
#define Collection_1_Add_m20911(__this, ___item, method) (( void (*) (Collection_1_t3382 *, PersistentCall_t720 *, MethodInfo*))Collection_1_Add_m11913_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Clear()
#define Collection_1_Clear_m20912(__this, method) (( void (*) (Collection_1_t3382 *, MethodInfo*))Collection_1_Clear_m11914_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ClearItems()
#define Collection_1_ClearItems_m20913(__this, method) (( void (*) (Collection_1_t3382 *, MethodInfo*))Collection_1_ClearItems_m11915_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define Collection_1_Contains_m20914(__this, ___item, method) (( bool (*) (Collection_1_t3382 *, PersistentCall_t720 *, MethodInfo*))Collection_1_Contains_m11916_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m20915(__this, ___array, ___index, method) (( void (*) (Collection_1_t3382 *, PersistentCallU5BU5D_t3378*, int32_t, MethodInfo*))Collection_1_CopyTo_m11917_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define Collection_1_GetEnumerator_m20916(__this, method) (( Object_t* (*) (Collection_1_t3382 *, MethodInfo*))Collection_1_GetEnumerator_m11918_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define Collection_1_IndexOf_m20917(__this, ___item, method) (( int32_t (*) (Collection_1_t3382 *, PersistentCall_t720 *, MethodInfo*))Collection_1_IndexOf_m11919_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define Collection_1_Insert_m20918(__this, ___index, ___item, method) (( void (*) (Collection_1_t3382 *, int32_t, PersistentCall_t720 *, MethodInfo*))Collection_1_Insert_m11920_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m20919(__this, ___index, ___item, method) (( void (*) (Collection_1_t3382 *, int32_t, PersistentCall_t720 *, MethodInfo*))Collection_1_InsertItem_m11921_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define Collection_1_Remove_m20920(__this, ___item, method) (( bool (*) (Collection_1_t3382 *, PersistentCall_t720 *, MethodInfo*))Collection_1_Remove_m11922_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m20921(__this, ___index, method) (( void (*) (Collection_1_t3382 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m11923_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m20922(__this, ___index, method) (( void (*) (Collection_1_t3382 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m11924_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Count()
#define Collection_1_get_Count_m20923(__this, method) (( int32_t (*) (Collection_1_t3382 *, MethodInfo*))Collection_1_get_Count_m11925_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define Collection_1_get_Item_m20924(__this, ___index, method) (( PersistentCall_t720 * (*) (Collection_1_t3382 *, int32_t, MethodInfo*))Collection_1_get_Item_m11926_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m20925(__this, ___index, ___value, method) (( void (*) (Collection_1_t3382 *, int32_t, PersistentCall_t720 *, MethodInfo*))Collection_1_set_Item_m11927_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m20926(__this, ___index, ___item, method) (( void (*) (Collection_1_t3382 *, int32_t, PersistentCall_t720 *, MethodInfo*))Collection_1_SetItem_m11928_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m20927(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m11929_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m20928(__this /* static, unused */, ___item, method) (( PersistentCall_t720 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m11930_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m20929(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m11931_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m20930(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m11932_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m20931(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m11933_gshared)(__this /* static, unused */, ___list, method)
