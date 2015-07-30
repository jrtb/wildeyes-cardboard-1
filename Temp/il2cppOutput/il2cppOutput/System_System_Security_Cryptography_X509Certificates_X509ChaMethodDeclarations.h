#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1041;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t1082;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t1086;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1076;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1074;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1085;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1060;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t1087;
// Mono.Security.X509.X509Extension
struct X509Extension_t1088;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1089;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern "C" void X509Chain__ctor_m4607 (X509Chain_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern "C" void X509Chain__ctor_m4608 (X509Chain_t1041 * __this, bool ___useMachineContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
extern "C" void X509Chain__cctor_m4609 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
extern "C" X509ChainPolicy_t1082 * X509Chain_get_ChainPolicy_m4610 (X509Chain_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_Build_m4611 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
extern "C" void X509Chain_Reset_m4612 (X509Chain_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
extern "C" X509Store_t1086 * X509Chain_get_Roots_m4613 (X509Chain_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
extern "C" X509Store_t1086 * X509Chain_get_CertificateAuthorities_m4614 (X509Chain_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
extern "C" X509Certificate2Collection_t1076 * X509Chain_get_CertificateCollection_m4615 (X509Chain_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" int32_t X509Chain_BuildChainFrom_m4616 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" X509Certificate2_t1074 * X509Chain_SelectBestFromCollection_m4617 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___child, X509Certificate2Collection_t1076 * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" X509Certificate2_t1074 * X509Chain_FindParent_m4618 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_IsChainComplete_m4619 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_IsSelfIssued_m4620 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509Chain_ValidateChain_m4621 (X509Chain_t1041 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
extern "C" void X509Chain_Process_m4622 (X509Chain_t1041 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
extern "C" void X509Chain_PrepareForNextCertificate_m4623 (X509Chain_t1041 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
extern "C" void X509Chain_WrapUp_m4624 (X509Chain_t1041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
extern "C" void X509Chain_ProcessCertificateExtensions_m4625 (X509Chain_t1041 * __this, X509ChainElement_t1085 * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Chain_IsSignedWith_m4626 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___signed, AsymmetricAlgorithm_t1060 * ___pubkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" String_t* X509Chain_GetSubjectKeyIdentifier_m4627 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m4628 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m4629 (X509Chain_t1041 * __this, X509Crl_t1087 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m4630 (X509Chain_t1041 * __this, X509Extension_t1088 * ___ext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509Chain_CheckRevocationOnChain_m4631 (X509Chain_t1041 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
extern "C" int32_t X509Chain_CheckRevocation_m4632 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___certificate, int32_t ___ca, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
extern "C" int32_t X509Chain_CheckRevocation_m4633 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___certificate, X509Certificate2_t1074 * ___ca_cert, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" X509Crl_t1087 * X509Chain_FindCrl_m4634 (X509Chain_t1041 * __this, X509Certificate2_t1074 * ___caCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
extern "C" bool X509Chain_ProcessCrlExtensions_m4635 (X509Chain_t1041 * __this, X509Crl_t1087 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
extern "C" bool X509Chain_ProcessCrlEntryExtensions_m4636 (X509Chain_t1041 * __this, X509CrlEntry_t1089 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
