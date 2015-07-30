#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1008;
// System.Object
struct Object_t;
// System.Collections.IComparer
struct IComparer_t1015;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t1012;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern "C" void ListDictionary__ctor_m4348 (ListDictionary_t1008 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern "C" void ListDictionary__ctor_m4349 (ListDictionary_t1008 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m4350 (ListDictionary_t1008 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
extern "C" DictionaryNode_t1012 * ListDictionary_FindEntry_m4351 (ListDictionary_t1008 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
extern "C" DictionaryNode_t1012 * ListDictionary_FindEntry_m4352 (ListDictionary_t1008 * __this, Object_t * ___key, DictionaryNode_t1012 ** ___prev, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
extern "C" void ListDictionary_AddImpl_m4353 (ListDictionary_t1008 * __this, Object_t * ___key, Object_t * ___value, DictionaryNode_t1012 * ___prev, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern "C" int32_t ListDictionary_get_Count_m4354 (ListDictionary_t1008 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
extern "C" bool ListDictionary_get_IsSynchronized_m4355 (ListDictionary_t1008 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern "C" Object_t * ListDictionary_get_SyncRoot_m4356 (ListDictionary_t1008 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern "C" void ListDictionary_CopyTo_m4357 (ListDictionary_t1008 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern "C" Object_t * ListDictionary_get_Item_m4358 (ListDictionary_t1008 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern "C" void ListDictionary_set_Item_m4359 (ListDictionary_t1008 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern "C" void ListDictionary_Add_m4360 (ListDictionary_t1008 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
extern "C" void ListDictionary_Clear_m4361 (ListDictionary_t1008 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern "C" bool ListDictionary_Contains_m4362 (ListDictionary_t1008 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern "C" Object_t * ListDictionary_GetEnumerator_m4363 (ListDictionary_t1008 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern "C" void ListDictionary_Remove_m4364 (ListDictionary_t1008 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
