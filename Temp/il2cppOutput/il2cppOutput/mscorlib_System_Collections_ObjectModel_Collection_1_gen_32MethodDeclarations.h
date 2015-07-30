#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
struct Collection_1_t3523;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1811;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t3520;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t3750;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1807;

// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m21979(__this, method) (( void (*) (Collection_1_t3523 *, MethodInfo*))Collection_1__ctor_m11898_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21980(__this, method) (( bool (*) (Collection_1_t3523 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11899_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m21981(__this, ___array, ___index, method) (( void (*) (Collection_1_t3523 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11900_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m21982(__this, method) (( Object_t * (*) (Collection_1_t3523 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11901_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m21983(__this, ___value, method) (( int32_t (*) (Collection_1_t3523 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m11902_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m21984(__this, ___value, method) (( bool (*) (Collection_1_t3523 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m11903_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m21985(__this, ___value, method) (( int32_t (*) (Collection_1_t3523 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11904_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m21986(__this, ___index, ___value, method) (( void (*) (Collection_1_t3523 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m11905_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m21987(__this, ___value, method) (( void (*) (Collection_1_t3523 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m11906_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m21988(__this, method) (( bool (*) (Collection_1_t3523 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11907_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m21989(__this, method) (( Object_t * (*) (Collection_1_t3523 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11908_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m21990(__this, method) (( bool (*) (Collection_1_t3523 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11909_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m21991(__this, method) (( bool (*) (Collection_1_t3523 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11910_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m21992(__this, ___index, method) (( Object_t * (*) (Collection_1_t3523 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11911_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m21993(__this, ___index, ___value, method) (( void (*) (Collection_1_t3523 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11912_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Add(T)
#define Collection_1_Add_m21994(__this, ___item, method) (( void (*) (Collection_1_t3523 *, StrongName_t1811 *, MethodInfo*))Collection_1_Add_m11913_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Clear()
#define Collection_1_Clear_m21995(__this, method) (( void (*) (Collection_1_t3523 *, MethodInfo*))Collection_1_Clear_m11914_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ClearItems()
#define Collection_1_ClearItems_m21996(__this, method) (( void (*) (Collection_1_t3523 *, MethodInfo*))Collection_1_ClearItems_m11915_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Contains(T)
#define Collection_1_Contains_m21997(__this, ___item, method) (( bool (*) (Collection_1_t3523 *, StrongName_t1811 *, MethodInfo*))Collection_1_Contains_m11916_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m21998(__this, ___array, ___index, method) (( void (*) (Collection_1_t3523 *, StrongNameU5BU5D_t3520*, int32_t, MethodInfo*))Collection_1_CopyTo_m11917_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::GetEnumerator()
#define Collection_1_GetEnumerator_m21999(__this, method) (( Object_t* (*) (Collection_1_t3523 *, MethodInfo*))Collection_1_GetEnumerator_m11918_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IndexOf(T)
#define Collection_1_IndexOf_m22000(__this, ___item, method) (( int32_t (*) (Collection_1_t3523 *, StrongName_t1811 *, MethodInfo*))Collection_1_IndexOf_m11919_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define Collection_1_Insert_m22001(__this, ___index, ___item, method) (( void (*) (Collection_1_t3523 *, int32_t, StrongName_t1811 *, MethodInfo*))Collection_1_Insert_m11920_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m22002(__this, ___index, ___item, method) (( void (*) (Collection_1_t3523 *, int32_t, StrongName_t1811 *, MethodInfo*))Collection_1_InsertItem_m11921_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Remove(T)
#define Collection_1_Remove_m22003(__this, ___item, method) (( bool (*) (Collection_1_t3523 *, StrongName_t1811 *, MethodInfo*))Collection_1_Remove_m11922_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m22004(__this, ___index, method) (( void (*) (Collection_1_t3523 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m11923_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m22005(__this, ___index, method) (( void (*) (Collection_1_t3523 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m11924_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Count()
#define Collection_1_get_Count_m22006(__this, method) (( int32_t (*) (Collection_1_t3523 *, MethodInfo*))Collection_1_get_Count_m11925_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define Collection_1_get_Item_m22007(__this, ___index, method) (( StrongName_t1811 * (*) (Collection_1_t3523 *, int32_t, MethodInfo*))Collection_1_get_Item_m11926_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m22008(__this, ___index, ___value, method) (( void (*) (Collection_1_t3523 *, int32_t, StrongName_t1811 *, MethodInfo*))Collection_1_set_Item_m11927_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m22009(__this, ___index, ___item, method) (( void (*) (Collection_1_t3523 *, int32_t, StrongName_t1811 *, MethodInfo*))Collection_1_SetItem_m11928_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m22010(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m11929_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m22011(__this /* static, unused */, ___item, method) (( StrongName_t1811 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m11930_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m22012(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m11931_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m22013(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m11932_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m22014(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m11933_gshared)(__this /* static, unused */, ___list, method)
