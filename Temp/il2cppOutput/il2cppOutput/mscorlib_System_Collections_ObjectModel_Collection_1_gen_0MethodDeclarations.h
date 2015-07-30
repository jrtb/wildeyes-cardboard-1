#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t2505;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.String[]
struct StringU5BU5D_t87;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3547;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2503;

// System.Void System.Collections.ObjectModel.Collection`1<System.String>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m12127(__this, method) (( void (*) (Collection_1_t2505 *, MethodInfo*))Collection_1__ctor_m11898_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12128(__this, method) (( bool (*) (Collection_1_t2505 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11899_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m12129(__this, ___array, ___index, method) (( void (*) (Collection_1_t2505 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11900_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12130(__this, method) (( Object_t * (*) (Collection_1_t2505 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11901_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m12131(__this, ___value, method) (( int32_t (*) (Collection_1_t2505 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m11902_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m12132(__this, ___value, method) (( bool (*) (Collection_1_t2505 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m11903_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m12133(__this, ___value, method) (( int32_t (*) (Collection_1_t2505 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11904_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m12134(__this, ___index, ___value, method) (( void (*) (Collection_1_t2505 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m11905_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m12135(__this, ___value, method) (( void (*) (Collection_1_t2505 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m11906_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m12136(__this, method) (( bool (*) (Collection_1_t2505 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11907_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12137(__this, method) (( Object_t * (*) (Collection_1_t2505 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11908_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m12138(__this, method) (( bool (*) (Collection_1_t2505 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11909_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m12139(__this, method) (( bool (*) (Collection_1_t2505 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11910_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m12140(__this, ___index, method) (( Object_t * (*) (Collection_1_t2505 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11911_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m12141(__this, ___index, ___value, method) (( void (*) (Collection_1_t2505 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11912_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Add(T)
#define Collection_1_Add_m12142(__this, ___item, method) (( void (*) (Collection_1_t2505 *, String_t*, MethodInfo*))Collection_1_Add_m11913_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Clear()
#define Collection_1_Clear_m12143(__this, method) (( void (*) (Collection_1_t2505 *, MethodInfo*))Collection_1_Clear_m11914_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::ClearItems()
#define Collection_1_ClearItems_m12144(__this, method) (( void (*) (Collection_1_t2505 *, MethodInfo*))Collection_1_ClearItems_m11915_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Contains(T)
#define Collection_1_Contains_m12145(__this, ___item, method) (( bool (*) (Collection_1_t2505 *, String_t*, MethodInfo*))Collection_1_Contains_m11916_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m12146(__this, ___array, ___index, method) (( void (*) (Collection_1_t2505 *, StringU5BU5D_t87*, int32_t, MethodInfo*))Collection_1_CopyTo_m11917_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.String>::GetEnumerator()
#define Collection_1_GetEnumerator_m12147(__this, method) (( Object_t* (*) (Collection_1_t2505 *, MethodInfo*))Collection_1_GetEnumerator_m11918_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::IndexOf(T)
#define Collection_1_IndexOf_m12148(__this, ___item, method) (( int32_t (*) (Collection_1_t2505 *, String_t*, MethodInfo*))Collection_1_IndexOf_m11919_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Insert(System.Int32,T)
#define Collection_1_Insert_m12149(__this, ___index, ___item, method) (( void (*) (Collection_1_t2505 *, int32_t, String_t*, MethodInfo*))Collection_1_Insert_m11920_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m12150(__this, ___index, ___item, method) (( void (*) (Collection_1_t2505 *, int32_t, String_t*, MethodInfo*))Collection_1_InsertItem_m11921_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Remove(T)
#define Collection_1_Remove_m12151(__this, ___item, method) (( bool (*) (Collection_1_t2505 *, String_t*, MethodInfo*))Collection_1_Remove_m11922_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m12152(__this, ___index, method) (( void (*) (Collection_1_t2505 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m11923_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m12153(__this, ___index, method) (( void (*) (Collection_1_t2505 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m11924_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::get_Count()
#define Collection_1_get_Count_m12154(__this, method) (( int32_t (*) (Collection_1_t2505 *, MethodInfo*))Collection_1_get_Count_m11925_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::get_Item(System.Int32)
#define Collection_1_get_Item_m12155(__this, ___index, method) (( String_t* (*) (Collection_1_t2505 *, int32_t, MethodInfo*))Collection_1_get_Item_m11926_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m12156(__this, ___index, ___value, method) (( void (*) (Collection_1_t2505 *, int32_t, String_t*, MethodInfo*))Collection_1_set_Item_m11927_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m12157(__this, ___index, ___item, method) (( void (*) (Collection_1_t2505 *, int32_t, String_t*, MethodInfo*))Collection_1_SetItem_m11928_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m12158(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m11929_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m12159(__this /* static, unused */, ___item, method) (( String_t* (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m11930_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m12160(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m11931_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m12161(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m11932_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m12162(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m11933_gshared)(__this /* static, unused */, ___list, method)
