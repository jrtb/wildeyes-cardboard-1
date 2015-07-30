#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ReadOnlyArrayListWrapper
struct ReadOnlyArrayListWrapper_t1508;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1020;
// System.Collections.IComparer
struct IComparer_t1015;

// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void ReadOnlyArrayListWrapper__ctor_m7907 (ReadOnlyArrayListWrapper_t1508 * __this, ArrayList_t1020 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_ErrorMessage()
extern "C" String_t* ReadOnlyArrayListWrapper_get_ErrorMessage_m7908 (ReadOnlyArrayListWrapper_t1508 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_IsReadOnly()
extern "C" bool ReadOnlyArrayListWrapper_get_IsReadOnly_m7909 (ReadOnlyArrayListWrapper_t1508 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyArrayListWrapper_get_Item_m7910 (ReadOnlyArrayListWrapper_t1508 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void ReadOnlyArrayListWrapper_set_Item_m7911 (ReadOnlyArrayListWrapper_t1508 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort()
extern "C" void ReadOnlyArrayListWrapper_Sort_m7912 (ReadOnlyArrayListWrapper_t1508 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void ReadOnlyArrayListWrapper_Sort_m7913 (ReadOnlyArrayListWrapper_t1508 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
