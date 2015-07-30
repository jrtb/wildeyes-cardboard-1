#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable
struct Hashtable_t1007;
// System.Collections.IComparer
struct IComparer_t1015;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1021;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t855;
// System.Collections.IDictionary
struct IDictionary_t1010;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1022;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1011;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t1518;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Hashtable/EnumeratorMode
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"

// System.Void System.Collections.Hashtable::.ctor()
extern "C" void Hashtable__ctor_m5424 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m7977 (Hashtable_t1007 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
extern "C" void Hashtable__ctor_m7978 (Hashtable_t1007 * __this, int32_t ___capacity, float ___loadFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
extern "C" void Hashtable__ctor_m5431 (Hashtable_t1007 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.Hashtable)
extern "C" void Hashtable__ctor_m7979 (Hashtable_t1007 * __this, Hashtable_t1007 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m5220 (Hashtable_t1007 * __this, int32_t ___capacity, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m7980 (Hashtable_t1007 * __this, Object_t * ___d, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m5226 (Hashtable_t1007 * __this, Object_t * ___d, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m5277 (Hashtable_t1007 * __this, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hashtable__ctor_m7981 (Hashtable_t1007 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C" void Hashtable__ctor_m5239 (Hashtable_t1007 * __this, int32_t ___capacity, Object_t * ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
extern "C" void Hashtable__ctor_m7982 (Hashtable_t1007 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.cctor()
extern "C" void Hashtable__cctor_m7983 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Hashtable_System_Collections_IEnumerable_GetEnumerator_m7984 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_comparer(System.Collections.IComparer)
extern "C" void Hashtable_set_comparer_m7985 (Hashtable_t1007 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_hcp(System.Collections.IHashCodeProvider)
extern "C" void Hashtable_set_hcp_m7986 (Hashtable_t1007 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::get_Count()
extern "C" int32_t Hashtable_get_Count_m5434 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsSynchronized()
extern "C" bool Hashtable_get_IsSynchronized_m7987 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_SyncRoot()
extern "C" Object_t * Hashtable_get_SyncRoot_m7988 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
extern "C" Object_t * Hashtable_get_Keys_m5452 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
extern "C" Object_t * Hashtable_get_Values_m6488 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_Item(System.Object)
extern "C" Object_t * Hashtable_get_Item_m5249 (Hashtable_t1007 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
extern "C" void Hashtable_set_Item_m5432 (Hashtable_t1007 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
extern "C" void Hashtable_CopyTo_m7989 (Hashtable_t1007 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
extern "C" void Hashtable_Add_m5250 (Hashtable_t1007 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Clear()
extern "C" void Hashtable_Clear_m5451 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
extern "C" bool Hashtable_Contains_m5435 (Hashtable_t1007 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
extern "C" Object_t * Hashtable_GetEnumerator_m7990 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Remove(System.Object)
extern "C" void Hashtable_Remove_m5433 (Hashtable_t1007 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
extern "C" bool Hashtable_ContainsKey_m5281 (Hashtable_t1007 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::Clone()
extern "C" Object_t * Hashtable_Clone_m7991 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hashtable_GetObjectData_m7992 (Hashtable_t1007 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
extern "C" void Hashtable_OnDeserialization_m7993 (Hashtable_t1007 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
extern "C" int32_t Hashtable_GetHash_m7994 (Hashtable_t1007 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
extern "C" bool Hashtable_KeyEquals_m7995 (Hashtable_t1007 * __this, Object_t * ___item, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::AdjustThreshold()
extern "C" void Hashtable_AdjustThreshold_m7996 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::SetTable(System.Collections.Hashtable/Slot[],System.Int32[])
extern "C" void Hashtable_SetTable_m7997 (Hashtable_t1007 * __this, SlotU5BU5D_t1518* ___table, Int32U5BU5D_t109* ___hashes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::Find(System.Object)
extern "C" int32_t Hashtable_Find_m7998 (Hashtable_t1007 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Rehash()
extern "C" void Hashtable_Rehash_m7999 (Hashtable_t1007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::PutImpl(System.Object,System.Object,System.Boolean)
extern "C" void Hashtable_PutImpl_m8000 (Hashtable_t1007 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyToArray(System.Array,System.Int32,System.Collections.Hashtable/EnumeratorMode)
extern "C" void Hashtable_CopyToArray_m8001 (Hashtable_t1007 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::TestPrime(System.Int32)
extern "C" bool Hashtable_TestPrime_m8002 (Object_t * __this /* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::CalcPrime(System.Int32)
extern "C" int32_t Hashtable_CalcPrime_m8003 (Object_t * __this /* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::ToPrime(System.Int32)
extern "C" int32_t Hashtable_ToPrime_m8004 (Object_t * __this /* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
