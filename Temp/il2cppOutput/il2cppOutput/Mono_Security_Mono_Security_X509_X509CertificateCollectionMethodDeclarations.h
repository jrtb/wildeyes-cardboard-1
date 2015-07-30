#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1206;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1064;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1210;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C" void X509CertificateCollection__ctor_m5804 (X509CertificateCollection_t1206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509CertificateCollection__ctor_m5805 (X509CertificateCollection_t1206 * __this, X509CertificateCollection_t1206 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m5806 (X509CertificateCollection_t1206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C" X509Certificate_t1064 * X509CertificateCollection_get_Item_m5347 (X509CertificateCollection_t1206 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C" int32_t X509CertificateCollection_Add_m5807 (X509CertificateCollection_t1206 * __this, X509Certificate_t1064 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509CertificateCollection_AddRange_m5808 (X509CertificateCollection_t1206 * __this, X509CertificateCollection_t1206 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
extern "C" bool X509CertificateCollection_Contains_m5809 (X509CertificateCollection_t1206 * __this, X509Certificate_t1064 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C" X509CertificateEnumerator_t1210 * X509CertificateCollection_GetEnumerator_m5404 (X509CertificateCollection_t1206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C" int32_t X509CertificateCollection_GetHashCode_m5810 (X509CertificateCollection_t1206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
extern "C" int32_t X509CertificateCollection_IndexOf_m5811 (X509CertificateCollection_t1206 * __this, X509Certificate_t1064 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::Remove(Mono.Security.X509.X509Certificate)
extern "C" void X509CertificateCollection_Remove_m5812 (X509CertificateCollection_t1206 * __this, X509Certificate_t1064 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C" bool X509CertificateCollection_Compare_m5813 (X509CertificateCollection_t1206 * __this, ByteU5BU5D_t66* ___array1, ByteU5BU5D_t66* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
