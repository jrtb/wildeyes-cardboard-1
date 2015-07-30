#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t1087;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1209;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1089;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1064;
// System.Security.Cryptography.DSA
struct DSA_t1065;
// System.Security.Cryptography.RSA
struct RSA_t1066;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1060;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m5826 (X509Crl_t1087 * __this, ByteU5BU5D_t66* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m5827 (X509Crl_t1087 * __this, ByteU5BU5D_t66* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t1209 * X509Crl_get_Extensions_m5376 (X509Crl_t1087 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t66* X509Crl_get_Hash_m5828 (X509Crl_t1087 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m5384 (X509Crl_t1087 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t524  X509Crl_get_NextUpdate_m5382 (X509Crl_t1087 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m5829 (X509Crl_t1087 * __this, ByteU5BU5D_t66* ___array1, ByteU5BU5D_t66* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t1089 * X509Crl_GetCrlEntry_m5380 (X509Crl_t1087 * __this, X509Certificate_t1064 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t1089 * X509Crl_GetCrlEntry_m5830 (X509Crl_t1087 * __this, ByteU5BU5D_t66* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m5831 (X509Crl_t1087 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m5832 (X509Crl_t1087 * __this, DSA_t1065 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m5833 (X509Crl_t1087 * __this, RSA_t1066 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m5379 (X509Crl_t1087 * __this, AsymmetricAlgorithm_t1060 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
