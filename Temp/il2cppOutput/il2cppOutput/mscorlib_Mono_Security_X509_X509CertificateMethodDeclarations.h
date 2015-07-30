#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1485;
// System.Security.Cryptography.DSA
struct DSA_t1065;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.ASN1
struct ASN1_t1477;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m7716 (X509Certificate_t1485 * __this, ByteU5BU5D_t66* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" void X509Certificate__cctor_m7717 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" void X509Certificate_Parse_m7718 (X509Certificate_t1485 * __this, ByteU5BU5D_t66* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t66* X509Certificate_GetUnsignedBigInteger_m7719 (X509Certificate_t1485 * __this, ByteU5BU5D_t66* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" DSA_t1065 * X509Certificate_get_DSA_m7720 (X509Certificate_t1485 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" String_t* X509Certificate_get_IssuerName_m7721 (X509Certificate_t1485 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" ByteU5BU5D_t66* X509Certificate_get_KeyAlgorithmParameters_m7722 (X509Certificate_t1485 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" ByteU5BU5D_t66* X509Certificate_get_PublicKey_m7723 (X509Certificate_t1485 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" ByteU5BU5D_t66* X509Certificate_get_RawData_m7724 (X509Certificate_t1485 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" String_t* X509Certificate_get_SubjectName_m7725 (X509Certificate_t1485 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" DateTime_t524  X509Certificate_get_ValidFrom_m7726 (X509Certificate_t1485 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" DateTime_t524  X509Certificate_get_ValidUntil_m7727 (X509Certificate_t1485 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" ASN1_t1477 * X509Certificate_GetIssuerName_m7728 (X509Certificate_t1485 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" ASN1_t1477 * X509Certificate_GetSubjectName_m7729 (X509Certificate_t1485 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_GetObjectData_m7730 (X509Certificate_t1485 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" ByteU5BU5D_t66* X509Certificate_PEM_m7731 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t66* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
