#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t1081;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1085;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t1090;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1074;

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern "C" void X509ChainElementCollection__ctor_m4645 (X509ChainElementCollection_t1081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m4646 (X509ChainElementCollection_t1081 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m4647 (X509ChainElementCollection_t1081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern "C" int32_t X509ChainElementCollection_get_Count_m4648 (X509ChainElementCollection_t1081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_IsSynchronized()
extern "C" bool X509ChainElementCollection_get_IsSynchronized_m4649 (X509ChainElementCollection_t1081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Item(System.Int32)
extern "C" X509ChainElement_t1085 * X509ChainElementCollection_get_Item_m4650 (X509ChainElementCollection_t1081 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern "C" Object_t * X509ChainElementCollection_get_SyncRoot_m4651 (X509ChainElementCollection_t1081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::GetEnumerator()
extern "C" X509ChainElementEnumerator_t1090 * X509ChainElementCollection_GetEnumerator_m4652 (X509ChainElementCollection_t1081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509ChainElementCollection_Add_m4653 (X509ChainElementCollection_t1081 * __this, X509Certificate2_t1074 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
extern "C" void X509ChainElementCollection_Clear_m4654 (X509ChainElementCollection_t1081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509ChainElementCollection_Contains_m4655 (X509ChainElementCollection_t1081 * __this, X509Certificate2_t1074 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
