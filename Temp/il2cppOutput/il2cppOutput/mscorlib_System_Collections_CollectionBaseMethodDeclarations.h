#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CollectionBase
struct CollectionBase_t1079;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1020;
// System.Collections.IList
struct IList_t856;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;

// System.Void System.Collections.CollectionBase::.ctor()
extern "C" void CollectionBase__ctor_m5368 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void CollectionBase_System_Collections_ICollection_CopyTo_m5561 (CollectionBase_t1079 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * CollectionBase_System_Collections_ICollection_get_SyncRoot_m5560 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool CollectionBase_System_Collections_ICollection_get_IsSynchronized_m5559 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
extern "C" int32_t CollectionBase_System_Collections_IList_Add_m5566 (CollectionBase_t1079 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
extern "C" bool CollectionBase_System_Collections_IList_Contains_m5567 (CollectionBase_t1079 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t CollectionBase_System_Collections_IList_IndexOf_m5568 (CollectionBase_t1079 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void CollectionBase_System_Collections_IList_Insert_m5569 (CollectionBase_t1079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
extern "C" void CollectionBase_System_Collections_IList_Remove_m5570 (CollectionBase_t1079 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsFixedSize()
extern "C" bool CollectionBase_System_Collections_IList_get_IsFixedSize_m5562 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsReadOnly()
extern "C" bool CollectionBase_System_Collections_IList_get_IsReadOnly_m5563 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * CollectionBase_System_Collections_IList_get_Item_m5564 (CollectionBase_t1079 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void CollectionBase_System_Collections_IList_set_Item_m5565 (CollectionBase_t1079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C" int32_t CollectionBase_get_Count_m5346 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
extern "C" Object_t * CollectionBase_GetEnumerator_m5385 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
extern "C" void CollectionBase_Clear_m5399 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
extern "C" void CollectionBase_RemoveAt_m5571 (CollectionBase_t1079 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C" ArrayList_t1020 * CollectionBase_get_InnerList_m5361 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
extern "C" Object_t * CollectionBase_get_List_m5454 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
extern "C" void CollectionBase_OnClear_m5572 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
extern "C" void CollectionBase_OnClearComplete_m5573 (CollectionBase_t1079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
extern "C" void CollectionBase_OnInsert_m5574 (CollectionBase_t1079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
extern "C" void CollectionBase_OnInsertComplete_m5575 (CollectionBase_t1079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
extern "C" void CollectionBase_OnRemove_m5576 (CollectionBase_t1079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
extern "C" void CollectionBase_OnRemoveComplete_m5577 (CollectionBase_t1079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
extern "C" void CollectionBase_OnSet_m5578 (CollectionBase_t1079 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
extern "C" void CollectionBase_OnSetComplete_m5579 (CollectionBase_t1079 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
extern "C" void CollectionBase_OnValidate_m5580 (CollectionBase_t1079 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
