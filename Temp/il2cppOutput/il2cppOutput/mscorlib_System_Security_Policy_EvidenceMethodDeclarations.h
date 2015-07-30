#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence
struct Evidence_t1601;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1020;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;

// System.Void System.Security.Policy.Evidence::.ctor()
extern "C" void Evidence__ctor_m9764 (Evidence_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::get_Count()
extern "C" int32_t Evidence_get_Count_m9765 (Evidence_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::get_IsSynchronized()
extern "C" bool Evidence_get_IsSynchronized_m9766 (Evidence_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence::get_SyncRoot()
extern "C" Object_t * Evidence_get_SyncRoot_m9767 (Evidence_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_HostEvidenceList()
extern "C" ArrayList_t1020 * Evidence_get_HostEvidenceList_m9768 (Evidence_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_AssemblyEvidenceList()
extern "C" ArrayList_t1020 * Evidence_get_AssemblyEvidenceList_m9769 (Evidence_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::CopyTo(System.Array,System.Int32)
extern "C" void Evidence_CopyTo_m9770 (Evidence_t1601 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::Equals(System.Object)
extern "C" bool Evidence_Equals_m9771 (Evidence_t1601 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetEnumerator()
extern "C" Object_t * Evidence_GetEnumerator_m9772 (Evidence_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::GetHashCode()
extern "C" int32_t Evidence_GetHashCode_m9773 (Evidence_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
