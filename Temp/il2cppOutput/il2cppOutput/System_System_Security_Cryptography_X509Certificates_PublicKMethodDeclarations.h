#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1063;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1061;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1060;
// System.Security.Cryptography.Oid
struct Oid_t1062;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1064;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.DSA
struct DSA_t1065;
// System.Security.Cryptography.RSA
struct RSA_t1066;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4535 (PublicKey_t1063 * __this, X509Certificate_t1064 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1061 * PublicKey_get_EncodedKeyValue_m4536 (PublicKey_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1061 * PublicKey_get_EncodedParameters_m4537 (PublicKey_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1060 * PublicKey_get_Key_m4538 (PublicKey_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1062 * PublicKey_get_Oid_m4539 (PublicKey_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t66* PublicKey_GetUnsignedBigInteger_m4540 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1065 * PublicKey_DecodeDSA_m4541 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___rawPublicKey, ByteU5BU5D_t66* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1066 * PublicKey_DecodeRSA_m4542 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
