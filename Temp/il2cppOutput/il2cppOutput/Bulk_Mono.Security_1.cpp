#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo TlsServerCertificate_t1356_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettings.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509Certificate.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContext.h"
// Mono.Security.X509.Extensions.KeyUsages
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensio.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsage.h"
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParameters.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollection.h"
// System.String
#include "mscorlib_System_String.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResult.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509Chain.h"
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsException.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Array
#include "mscorlib_System_Array.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameEx.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettings.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollection.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo HandshakeMessage_t1316_il2cpp_TypeInfo;
extern TypeInfo Void_t75_il2cpp_TypeInfo;
extern TypeInfo X509CertificateCollection_t1206_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t1064_il2cpp_TypeInfo;
extern TypeInfo ClientContext_t1312_il2cpp_TypeInfo;
extern TypeInfo KeyUsageExtension_t1294_il2cpp_TypeInfo;
extern TypeInfo ExtendedKeyUsageExtension_t1291_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t1020_il2cpp_TypeInfo;
extern TypeInfo Boolean_t83_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo NetscapeCertTypeExtension_t1296_il2cpp_TypeInfo;
extern TypeInfo SslClientStream_t1311_il2cpp_TypeInfo;
extern TypeInfo ValidationResult_t1341_il2cpp_TypeInfo;
extern TypeInfo Int64_t759_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo TlsException_t1347_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t66_il2cpp_TypeInfo;
extern TypeInfo Byte_t114_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t1032_il2cpp_TypeInfo;
extern TypeInfo Int32_t60_il2cpp_TypeInfo;
extern TypeInfo X509Chain_t1287_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t109_il2cpp_TypeInfo;
extern TypeInfo Exception_t110_il2cpp_TypeInfo;
extern TypeInfo SubjectAltNameExtension_t1297_il2cpp_TypeInfo;
extern TypeInfo Regex_t111_il2cpp_TypeInfo;
extern TypeInfo MatchCollection_t1120_il2cpp_TypeInfo;
extern TypeInfo Match_t1109_il2cpp_TypeInfo;
extern TypeInfo GroupCollection_t1118_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t757_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_ContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettingsMethodDeclarations.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollectionMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStreamMethodDeclarations.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509CertificateMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParametersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteMethodDeclarations.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollectionMethodDeclarations.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensioMethodDeclarations.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsageMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStreamMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResultMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExceptionMethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509CMethodDeclarations.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509ChainMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettingsMethodDeclarations.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameExMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern Il2CppType Int32_t60_0_0_0;
extern Il2CppType Int32U5BU5D_t109_0_0_0;
extern MethodInfo HandshakeMessage__ctor_m6307_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m6312_MethodInfo;
extern MethodInfo HandshakeMessage_get_Context_m6308_MethodInfo;
extern MethodInfo Context_get_ServerSettings_m6010_MethodInfo;
extern MethodInfo TlsServerSettings_set_Certificates_m6269_MethodInfo;
extern MethodInfo TlsServerSettings_UpdateCertificateRSA_m6278_MethodInfo;
extern MethodInfo TlsServerCertificate_ProcessAsTls1_m6345_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m5804_MethodInfo;
extern MethodInfo TlsStream_ReadInt24_m6291_MethodInfo;
extern MethodInfo TlsStream_ReadBytes_m6292_MethodInfo;
extern MethodInfo X509Certificate__ctor_m5352_MethodInfo;
extern MethodInfo X509CertificateCollection_Add_m5807_MethodInfo;
extern MethodInfo TlsServerCertificate_validateCertificates_m6347_MethodInfo;
extern MethodInfo X509Certificate_get_Version_m5338_MethodInfo;
extern MethodInfo Context_get_Negotiating_m6054_MethodInfo;
extern MethodInfo SecurityParameters_get_Cipher_m6124_MethodInfo;
extern MethodInfo CipherSuite_get_ExchangeAlgorithmType_m5917_MethodInfo;
extern MethodInfo X509Certificate_get_Extensions_m5374_MethodInfo;
extern MethodInfo X509ExtensionCollection_get_Item_m5375_MethodInfo;
extern MethodInfo KeyUsageExtension__ctor_m5872_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension__ctor_m5863_MethodInfo;
extern MethodInfo KeyUsageExtension_Support_m5875_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension_get_KeyPurpose_m5866_MethodInfo;
extern MethodInfo ArrayList_Contains_m6478_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension__ctor_m5877_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension_Support_m5879_MethodInfo;
extern MethodInfo ClientContext_get_SslStream_m5970_MethodInfo;
extern MethodInfo SslClientStream_get_HaveRemoteValidation2Callback_m6161_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation2_m6165_MethodInfo;
extern MethodInfo ValidationResult_get_Trusted_m6131_MethodInfo;
extern MethodInfo ValidationResult_get_ErrorCode_m6132_MethodInfo;
extern MethodInfo String_Format_m1975_MethodInfo;
extern MethodInfo String_Concat_m548_MethodInfo;
extern MethodInfo TlsException__ctor_m6263_MethodInfo;
extern MethodInfo X509CertificateCollection_get_Item_m5347_MethodInfo;
extern MethodInfo X509Certificate_get_RawData_m5406_MethodInfo;
extern MethodInfo X509Certificate__ctor_m6516_MethodInfo;
extern MethodInfo ArrayList__ctor_m5240_MethodInfo;
extern MethodInfo TlsServerCertificate_checkCertificateUsage_m6346_MethodInfo;
extern MethodInfo ArrayList_Add_m5251_MethodInfo;
extern MethodInfo TlsServerCertificate_checkServerIdentity_m6348_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m5805_MethodInfo;
extern MethodInfo X509CertificateCollection_Remove_m5812_MethodInfo;
extern MethodInfo X509Chain__ctor_m5815_MethodInfo;
extern MethodInfo X509Chain_Build_m5818_MethodInfo;
extern MethodInfo X509Chain_get_Status_m5816_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1995_MethodInfo;
extern MethodInfo ArrayList_ToArray_m5371_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation_m6164_MethodInfo;
extern MethodInfo Context_get_ClientSettings_m6011_MethodInfo;
extern MethodInfo TlsClientSettings_get_TargetHost_m6251_MethodInfo;
extern MethodInfo SubjectAltNameExtension__ctor_m5881_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_DNSNames_m5883_MethodInfo;
extern MethodInfo TlsServerCertificate_Match_m6350_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_IPAddresses_m5884_MethodInfo;
extern MethodInfo String_op_Equality_m2110_MethodInfo;
extern MethodInfo X509Certificate_get_SubjectName_m5793_MethodInfo;
extern MethodInfo TlsServerCertificate_checkDomainName_m6349_MethodInfo;
extern MethodInfo Regex__ctor_m580_MethodInfo;
extern MethodInfo Regex_Matches_m4832_MethodInfo;
extern MethodInfo MatchCollection_get_Count_m4806_MethodInfo;
extern MethodInfo MatchCollection_get_Item_m4808_MethodInfo;
extern MethodInfo Group_get_Success_m4785_MethodInfo;
extern MethodInfo Match_get_Groups_m4799_MethodInfo;
extern MethodInfo GroupCollection_get_Item_m4789_MethodInfo;
extern MethodInfo Capture_get_Value_m4770_MethodInfo;
extern MethodInfo String_ToString_m3832_MethodInfo;
extern MethodInfo String_IndexOf_m2187_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m3915_MethodInfo;
extern MethodInfo String_Compare_m5283_MethodInfo;
extern MethodInfo String_get_Length_m2112_MethodInfo;
extern MethodInfo String_get_Chars_m2128_MethodInfo;
extern MethodInfo String_IndexOf_m3827_MethodInfo;
extern MethodInfo String_Substring_m2154_MethodInfo;
extern MethodInfo String_Compare_m6547_MethodInfo;
extern MethodInfo String_Substring_m2129_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificate__ctor_m6342_MethodInfo;
extern "C" void TlsServerCertificate__ctor_m6342 (TlsServerCertificate_t1356 * __this, Context_t1305 * ___context, ByteU5BU5D_t66* ___buffer, MethodInfo* method)
{
	{
		Context_t1305 * L_0 = ___context;
		ByteU5BU5D_t66* L_1 = ___buffer;
		HandshakeMessage__ctor_m6307(__this, L_0, ((int32_t)11), L_1, /*hidden argument*/&HandshakeMessage__ctor_m6307_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern MethodInfo TlsServerCertificate_Update_m6343_MethodInfo;
extern "C" void TlsServerCertificate_Update_m6343 (TlsServerCertificate_t1356 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m6312(__this, /*hidden argument*/&HandshakeMessage_Update_m6312_MethodInfo);
		Context_t1305 * L_0 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1321 * L_1 = Context_get_ServerSettings_m6010(L_0, /*hidden argument*/&Context_get_ServerSettings_m6010_MethodInfo);
		X509CertificateCollection_t1206 * L_2 = (__this->___certificates_9);
		NullCheck(L_1);
		TlsServerSettings_set_Certificates_m6269(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_Certificates_m6269_MethodInfo);
		Context_t1305 * L_3 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t1321 * L_4 = Context_get_ServerSettings_m6010(L_3, /*hidden argument*/&Context_get_ServerSettings_m6010_MethodInfo);
		NullCheck(L_4);
		TlsServerSettings_UpdateCertificateRSA_m6278(L_4, /*hidden argument*/&TlsServerSettings_UpdateCertificateRSA_m6278_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern MethodInfo TlsServerCertificate_ProcessAsSsl3_m6344_MethodInfo;
extern "C" void TlsServerCertificate_ProcessAsSsl3_m6344 (TlsServerCertificate_t1356 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificate_ProcessAsTls1_m6345_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern "C" void TlsServerCertificate_ProcessAsTls1_m6345 (TlsServerCertificate_t1356 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t66* V_3 = {0};
	X509Certificate_t1064 * V_4 = {0};
	{
		X509CertificateCollection_t1206 * L_0 = (X509CertificateCollection_t1206 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t1206_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m5804(L_0, /*hidden argument*/&X509CertificateCollection__ctor_m5804_MethodInfo);
		__this->___certificates_9 = L_0;
		V_0 = 0;
		int32_t L_1 = TlsStream_ReadInt24_m6291(__this, /*hidden argument*/&TlsStream_ReadInt24_m6291_MethodInfo);
		V_1 = L_1;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_2 = TlsStream_ReadInt24_m6291(__this, /*hidden argument*/&TlsStream_ReadInt24_m6291_MethodInfo);
		V_2 = L_2;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)3));
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = V_2;
		ByteU5BU5D_t66* L_6 = TlsStream_ReadBytes_m6292(__this, L_5, /*hidden argument*/&TlsStream_ReadBytes_m6292_MethodInfo);
		V_3 = L_6;
		ByteU5BU5D_t66* L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&X509Certificate_t1064_il2cpp_TypeInfo));
		X509Certificate_t1064 * L_8 = (X509Certificate_t1064 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t1064_il2cpp_TypeInfo));
		X509Certificate__ctor_m5352(L_8, L_7, /*hidden argument*/&X509Certificate__ctor_m5352_MethodInfo);
		V_4 = L_8;
		X509CertificateCollection_t1206 * L_9 = (__this->___certificates_9);
		X509Certificate_t1064 * L_10 = V_4;
		NullCheck(L_9);
		X509CertificateCollection_Add_m5807(L_9, L_10, /*hidden argument*/&X509CertificateCollection_Add_m5807_MethodInfo);
		int32_t L_11 = V_0;
		int32_t L_12 = V_2;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_004d:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0019;
		}
	}
	{
		X509CertificateCollection_t1206 * L_15 = (__this->___certificates_9);
		TlsServerCertificate_validateCertificates_m6347(__this, L_15, /*hidden argument*/&TlsServerCertificate_validateCertificates_m6347_MethodInfo);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkCertificateUsage_m6346 (TlsServerCertificate_t1356 * __this, X509Certificate_t1064 * ___cert, MethodInfo* method)
{
	ClientContext_t1312 * V_0 = {0};
	int32_t V_1 = {0};
	KeyUsageExtension_t1294 * V_2 = {0};
	ExtendedKeyUsageExtension_t1291 * V_3 = {0};
	X509Extension_t1088 * V_4 = {0};
	NetscapeCertTypeExtension_t1296 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Context_t1305 * L_0 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		V_0 = ((ClientContext_t1312 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1312_il2cpp_TypeInfo)));
		X509Certificate_t1064 * L_1 = ___cert;
		NullCheck(L_1);
		int32_t L_2 = X509Certificate_get_Version_m5338(L_1, /*hidden argument*/&X509Certificate_get_Version_m5338_MethodInfo);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		ClientContext_t1312 * L_3 = V_0;
		NullCheck(L_3);
		SecurityParameters_t1323 * L_4 = Context_get_Negotiating_m6054(L_3, /*hidden argument*/&Context_get_Negotiating_m6054_MethodInfo);
		NullCheck(L_4);
		CipherSuite_t1306 * L_5 = SecurityParameters_get_Cipher_m6124(L_4, /*hidden argument*/&SecurityParameters_get_Cipher_m6124_MethodInfo);
		NullCheck(L_5);
		int32_t L_6 = CipherSuite_get_ExchangeAlgorithmType_m5917(L_5, /*hidden argument*/&CipherSuite_get_ExchangeAlgorithmType_m5917_MethodInfo);
		V_6 = L_6;
		int32_t L_7 = V_6;
		if (L_7 == 0)
		{
			goto IL_0061;
		}
		if (L_7 == 1)
		{
			goto IL_0068;
		}
		if (L_7 == 2)
		{
			goto IL_006a;
		}
		if (L_7 == 3)
		{
			goto IL_0059;
		}
		if (L_7 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_006a;
	}

IL_0059:
	{
		V_1 = ((int32_t)32);
		goto IL_006a;
	}

IL_0061:
	{
		V_1 = 8;
		goto IL_006a;
	}

IL_0068:
	{
		return 0;
	}

IL_006a:
	{
		V_2 = (KeyUsageExtension_t1294 *)NULL;
		V_3 = (ExtendedKeyUsageExtension_t1291 *)NULL;
		X509Certificate_t1064 * L_8 = ___cert;
		NullCheck(L_8);
		X509ExtensionCollection_t1209 * L_9 = X509Certificate_get_Extensions_m5374(L_8, /*hidden argument*/&X509Certificate_get_Extensions_m5374_MethodInfo);
		NullCheck(L_9);
		X509Extension_t1088 * L_10 = X509ExtensionCollection_get_Item_m5375(L_9, (String_t*) &_stringLiteral579, /*hidden argument*/&X509ExtensionCollection_get_Item_m5375_MethodInfo);
		V_4 = L_10;
		X509Extension_t1088 * L_11 = V_4;
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		X509Extension_t1088 * L_12 = V_4;
		KeyUsageExtension_t1294 * L_13 = (KeyUsageExtension_t1294 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyUsageExtension_t1294_il2cpp_TypeInfo));
		KeyUsageExtension__ctor_m5872(L_13, L_12, /*hidden argument*/&KeyUsageExtension__ctor_m5872_MethodInfo);
		V_2 = L_13;
	}

IL_008f:
	{
		X509Certificate_t1064 * L_14 = ___cert;
		NullCheck(L_14);
		X509ExtensionCollection_t1209 * L_15 = X509Certificate_get_Extensions_m5374(L_14, /*hidden argument*/&X509Certificate_get_Extensions_m5374_MethodInfo);
		NullCheck(L_15);
		X509Extension_t1088 * L_16 = X509ExtensionCollection_get_Item_m5375(L_15, (String_t*) &_stringLiteral586, /*hidden argument*/&X509ExtensionCollection_get_Item_m5375_MethodInfo);
		V_4 = L_16;
		X509Extension_t1088 * L_17 = V_4;
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		X509Extension_t1088 * L_18 = V_4;
		ExtendedKeyUsageExtension_t1291 * L_19 = (ExtendedKeyUsageExtension_t1291 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExtendedKeyUsageExtension_t1291_il2cpp_TypeInfo));
		ExtendedKeyUsageExtension__ctor_m5863(L_19, L_18, /*hidden argument*/&ExtendedKeyUsageExtension__ctor_m5863_MethodInfo);
		V_3 = L_19;
	}

IL_00b0:
	{
		KeyUsageExtension_t1294 * L_20 = V_2;
		if (!L_20)
		{
			goto IL_00f3;
		}
	}
	{
		ExtendedKeyUsageExtension_t1291 * L_21 = V_3;
		if (!L_21)
		{
			goto IL_00f3;
		}
	}
	{
		KeyUsageExtension_t1294 * L_22 = V_2;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		bool L_24 = KeyUsageExtension_Support_m5875(L_22, L_23, /*hidden argument*/&KeyUsageExtension_Support_m5875_MethodInfo);
		if (L_24)
		{
			goto IL_00ca;
		}
	}
	{
		return 0;
	}

IL_00ca:
	{
		ExtendedKeyUsageExtension_t1291 * L_25 = V_3;
		NullCheck(L_25);
		ArrayList_t1020 * L_26 = ExtendedKeyUsageExtension_get_KeyPurpose_m5866(L_25, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m5866_MethodInfo);
		NullCheck(L_26);
		bool L_27 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m6478_MethodInfo, L_26, (String_t*) &_stringLiteral590);
		if (L_27)
		{
			goto IL_00f1;
		}
	}
	{
		ExtendedKeyUsageExtension_t1291 * L_28 = V_3;
		NullCheck(L_28);
		ArrayList_t1020 * L_29 = ExtendedKeyUsageExtension_get_KeyPurpose_m5866(L_28, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m5866_MethodInfo);
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m6478_MethodInfo, L_29, (String_t*) &_stringLiteral1032);
		G_B19_0 = ((int32_t)(L_30));
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B19_0 = 1;
	}

IL_00f2:
	{
		return G_B19_0;
	}

IL_00f3:
	{
		KeyUsageExtension_t1294 * L_31 = V_2;
		if (!L_31)
		{
			goto IL_0101;
		}
	}
	{
		KeyUsageExtension_t1294 * L_32 = V_2;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		bool L_34 = KeyUsageExtension_Support_m5875(L_32, L_33, /*hidden argument*/&KeyUsageExtension_Support_m5875_MethodInfo);
		return L_34;
	}

IL_0101:
	{
		ExtendedKeyUsageExtension_t1291 * L_35 = V_3;
		if (!L_35)
		{
			goto IL_0130;
		}
	}
	{
		ExtendedKeyUsageExtension_t1291 * L_36 = V_3;
		NullCheck(L_36);
		ArrayList_t1020 * L_37 = ExtendedKeyUsageExtension_get_KeyPurpose_m5866(L_36, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m5866_MethodInfo);
		NullCheck(L_37);
		bool L_38 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m6478_MethodInfo, L_37, (String_t*) &_stringLiteral590);
		if (L_38)
		{
			goto IL_012e;
		}
	}
	{
		ExtendedKeyUsageExtension_t1291 * L_39 = V_3;
		NullCheck(L_39);
		ArrayList_t1020 * L_40 = ExtendedKeyUsageExtension_get_KeyPurpose_m5866(L_39, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m5866_MethodInfo);
		NullCheck(L_40);
		bool L_41 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m6478_MethodInfo, L_40, (String_t*) &_stringLiteral1032);
		G_B26_0 = ((int32_t)(L_41));
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		return G_B26_0;
	}

IL_0130:
	{
		X509Certificate_t1064 * L_42 = ___cert;
		NullCheck(L_42);
		X509ExtensionCollection_t1209 * L_43 = X509Certificate_get_Extensions_m5374(L_42, /*hidden argument*/&X509Certificate_get_Extensions_m5374_MethodInfo);
		NullCheck(L_43);
		X509Extension_t1088 * L_44 = X509ExtensionCollection_get_Item_m5375(L_43, (String_t*) &_stringLiteral617, /*hidden argument*/&X509ExtensionCollection_get_Item_m5375_MethodInfo);
		V_4 = L_44;
		X509Extension_t1088 * L_45 = V_4;
		if (!L_45)
		{
			goto IL_015c;
		}
	}
	{
		X509Extension_t1088 * L_46 = V_4;
		NetscapeCertTypeExtension_t1296 * L_47 = (NetscapeCertTypeExtension_t1296 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NetscapeCertTypeExtension_t1296_il2cpp_TypeInfo));
		NetscapeCertTypeExtension__ctor_m5877(L_47, L_46, /*hidden argument*/&NetscapeCertTypeExtension__ctor_m5877_MethodInfo);
		V_5 = L_47;
		NetscapeCertTypeExtension_t1296 * L_48 = V_5;
		NullCheck(L_48);
		bool L_49 = NetscapeCertTypeExtension_Support_m5879(L_48, ((int32_t)64), /*hidden argument*/&NetscapeCertTypeExtension_Support_m5879_MethodInfo);
		return L_49;
	}

IL_015c:
	{
		return 1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificate_validateCertificates_m6347 (TlsServerCertificate_t1356 * __this, X509CertificateCollection_t1206 * ___certificates, MethodInfo* method)
{
	static bool TlsServerCertificate_validateCertificates_m6347_init;
	if (!TlsServerCertificate_validateCertificates_m6347_init)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		TlsServerCertificate_validateCertificates_m6347_init = true;
	}
	ClientContext_t1312 * V_0 = {0};
	uint8_t V_1 = {0};
	ValidationResult_t1341 * V_2 = {0};
	int64_t V_3 = 0;
	String_t* V_4 = {0};
	X509Certificate_t1064 * V_5 = {0};
	X509Certificate_t1032 * V_6 = {0};
	ArrayList_t1020 * V_7 = {0};
	X509CertificateCollection_t1206 * V_8 = {0};
	X509Chain_t1287 * V_9 = {0};
	bool V_10 = false;
	Int32U5BU5D_t109* V_11 = {0};
	int64_t V_12 = 0;
	int32_t V_13 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Context_t1305 * L_0 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		V_0 = ((ClientContext_t1312 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1312_il2cpp_TypeInfo)));
		V_1 = ((int32_t)42);
		ClientContext_t1312 * L_1 = V_0;
		NullCheck(L_1);
		SslClientStream_t1311 * L_2 = ClientContext_get_SslStream_m5970(L_1, /*hidden argument*/&ClientContext_get_SslStream_m5970_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&SslClientStream_get_HaveRemoteValidation2Callback_m6161_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		ClientContext_t1312 * L_4 = V_0;
		NullCheck(L_4);
		SslClientStream_t1311 * L_5 = ClientContext_get_SslStream_m5970(L_4, /*hidden argument*/&ClientContext_get_SslStream_m5970_MethodInfo);
		X509CertificateCollection_t1206 * L_6 = ___certificates;
		NullCheck(L_5);
		ValidationResult_t1341 * L_7 = (ValidationResult_t1341 *)VirtFuncInvoker1< ValidationResult_t1341 *, X509CertificateCollection_t1206 * >::Invoke(&SslClientStream_RaiseServerCertificateValidation2_m6165_MethodInfo, L_5, L_6);
		V_2 = L_7;
		ValidationResult_t1341 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = ValidationResult_get_Trusted_m6131(L_8, /*hidden argument*/&ValidationResult_get_Trusted_m6131_MethodInfo);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		ValidationResult_t1341 * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = ValidationResult_get_ErrorCode_m6132(L_10, /*hidden argument*/&ValidationResult_get_ErrorCode_m6132_MethodInfo);
		V_3 = (((int64_t)L_11));
		int64_t L_12 = V_3;
		V_12 = L_12;
		int64_t L_13 = V_12;
		if ((((int64_t)L_13) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762487))))))))
		{
			goto IL_007f;
		}
	}
	{
		int64_t L_14 = V_12;
		if ((((int64_t)L_14) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762486))))))))
		{
			goto IL_0077;
		}
	}
	{
		int64_t L_15 = V_12;
		if ((((int64_t)L_15) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762495))))))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		V_1 = ((int32_t)45);
		goto IL_008f;
	}

IL_0077:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_007f:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_0087:
	{
		V_1 = ((int32_t)46);
		goto IL_008f;
	}

IL_008f:
	{
		int64_t L_16 = V_3;
		int64_t L_17 = L_16;
		Object_t * L_18 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_17);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = String_Format_m1975(NULL /*static, unused*/, (String_t*) &_stringLiteral1033, L_18, /*hidden argument*/&String_Format_m1975_MethodInfo);
		V_4 = L_19;
		uint8_t L_20 = V_1;
		String_t* L_21 = V_4;
		String_t* L_22 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral1034, L_21, /*hidden argument*/&String_Concat_m548_MethodInfo);
		TlsException_t1347 * L_23 = (TlsException_t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1347_il2cpp_TypeInfo));
		TlsException__ctor_m6263(L_23, L_20, L_22, /*hidden argument*/&TlsException__ctor_m6263_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_00b4:
	{
		X509CertificateCollection_t1206 * L_24 = ___certificates;
		NullCheck(L_24);
		X509Certificate_t1064 * L_25 = X509CertificateCollection_get_Item_m5347(L_24, 0, /*hidden argument*/&X509CertificateCollection_get_Item_m5347_MethodInfo);
		V_5 = L_25;
		X509Certificate_t1064 * L_26 = V_5;
		NullCheck(L_26);
		ByteU5BU5D_t66* L_27 = (ByteU5BU5D_t66*)VirtFuncInvoker0< ByteU5BU5D_t66* >::Invoke(&X509Certificate_get_RawData_m5406_MethodInfo, L_26);
		X509Certificate_t1032 * L_28 = (X509Certificate_t1032 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t1032_il2cpp_TypeInfo));
		X509Certificate__ctor_m6516(L_28, L_27, /*hidden argument*/&X509Certificate__ctor_m6516_MethodInfo);
		V_6 = L_28;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList_t1020 * L_29 = (ArrayList_t1020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList__ctor_m5240(L_29, /*hidden argument*/&ArrayList__ctor_m5240_MethodInfo);
		V_7 = L_29;
		X509Certificate_t1064 * L_30 = V_5;
		bool L_31 = TlsServerCertificate_checkCertificateUsage_m6346(__this, L_30, /*hidden argument*/&TlsServerCertificate_checkCertificateUsage_m6346_MethodInfo);
		if (L_31)
		{
			goto IL_00f1;
		}
	}
	{
		ArrayList_t1020 * L_32 = V_7;
		int32_t L_33 = ((int32_t)-2146762490);
		Object_t * L_34 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_33);
		NullCheck(L_32);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_32, L_34);
	}

IL_00f1:
	{
		X509Certificate_t1064 * L_35 = V_5;
		bool L_36 = TlsServerCertificate_checkServerIdentity_m6348(__this, L_35, /*hidden argument*/&TlsServerCertificate_checkServerIdentity_m6348_MethodInfo);
		if (L_36)
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t1020 * L_37 = V_7;
		int32_t L_38 = ((int32_t)-2146762481);
		Object_t * L_39 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_38);
		NullCheck(L_37);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_37, L_39);
	}

IL_0110:
	{
		X509CertificateCollection_t1206 * L_40 = ___certificates;
		X509CertificateCollection_t1206 * L_41 = (X509CertificateCollection_t1206 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t1206_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m5805(L_41, L_40, /*hidden argument*/&X509CertificateCollection__ctor_m5805_MethodInfo);
		V_8 = L_41;
		X509CertificateCollection_t1206 * L_42 = V_8;
		X509Certificate_t1064 * L_43 = V_5;
		NullCheck(L_42);
		X509CertificateCollection_Remove_m5812(L_42, L_43, /*hidden argument*/&X509CertificateCollection_Remove_m5812_MethodInfo);
		X509CertificateCollection_t1206 * L_44 = V_8;
		X509Chain_t1287 * L_45 = (X509Chain_t1287 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Chain_t1287_il2cpp_TypeInfo));
		X509Chain__ctor_m5815(L_45, L_44, /*hidden argument*/&X509Chain__ctor_m5815_MethodInfo);
		V_9 = L_45;
		V_10 = 0;
	}

IL_012d:
	try
	{ // begin try (depth: 1)
		X509Chain_t1287 * L_46 = V_9;
		X509Certificate_t1064 * L_47 = V_5;
		NullCheck(L_46);
		bool L_48 = X509Chain_Build_m5818(L_46, L_47, /*hidden argument*/&X509Chain_Build_m5818_MethodInfo);
		V_10 = L_48;
		goto IL_0146;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t110 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t110_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_013d;
		throw e;
	}

CATCH_013d:
	{ // begin catch(System.Exception)
		V_10 = 0;
		goto IL_0146;
	} // end catch (depth: 1)

IL_0146:
	{
		bool L_49 = V_10;
		if (L_49)
		{
			goto IL_0243;
		}
	}
	{
		X509Chain_t1287 * L_50 = V_9;
		NullCheck(L_50);
		int32_t L_51 = X509Chain_get_Status_m5816(L_50, /*hidden argument*/&X509Chain_get_Status_m5816_MethodInfo);
		V_13 = L_51;
		int32_t L_52 = V_13;
		if ((((int32_t)L_52) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_53 = V_13;
		if ((((int32_t)L_53) == ((int32_t)2)))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_54 = V_13;
		if ((((int32_t)L_54) == ((int32_t)8)))
		{
			goto IL_01ab;
		}
	}
	{
		int32_t L_55 = V_13;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)32))))
		{
			goto IL_020d;
		}
	}
	{
		int32_t L_56 = V_13;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_57 = V_13;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)65536))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0227;
	}

IL_0194:
	{
		ArrayList_t1020 * L_58 = V_7;
		int32_t L_59 = ((int32_t)-2146869223);
		Object_t * L_60 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_59);
		NullCheck(L_58);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_58, L_60);
		goto IL_0243;
	}

IL_01ab:
	{
		ArrayList_t1020 * L_61 = V_7;
		int32_t L_62 = ((int32_t)-2146869232);
		Object_t * L_63 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_62);
		NullCheck(L_61);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_61, L_63);
		goto IL_0243;
	}

IL_01c2:
	{
		ArrayList_t1020 * L_64 = V_7;
		int32_t L_65 = ((int32_t)-2146762494);
		Object_t * L_66 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_65);
		NullCheck(L_64);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_64, L_66);
		goto IL_0243;
	}

IL_01d9:
	{
		V_1 = ((int32_t)45);
		ArrayList_t1020 * L_67 = V_7;
		int32_t L_68 = ((int32_t)-2146762495);
		Object_t * L_69 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_68);
		NullCheck(L_67);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_67, L_69);
		goto IL_0243;
	}

IL_01f3:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1020 * L_70 = V_7;
		int32_t L_71 = ((int32_t)-2146762486);
		Object_t * L_72 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_71);
		NullCheck(L_70);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_70, L_72);
		goto IL_0243;
	}

IL_020d:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1020 * L_73 = V_7;
		int32_t L_74 = ((int32_t)-2146762487);
		Object_t * L_75 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_74);
		NullCheck(L_73);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_73, L_75);
		goto IL_0243;
	}

IL_0227:
	{
		V_1 = ((int32_t)46);
		ArrayList_t1020 * L_76 = V_7;
		X509Chain_t1287 * L_77 = V_9;
		NullCheck(L_77);
		int32_t L_78 = X509Chain_get_Status_m5816(L_77, /*hidden argument*/&X509Chain_get_Status_m5816_MethodInfo);
		int32_t L_79 = L_78;
		Object_t * L_80 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_79);
		NullCheck(L_76);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_76, L_80);
		goto IL_0243;
	}

IL_0243:
	{
		ArrayList_t1020 * L_81 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_82 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Int32_t60_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_81);
		Array_t * L_83 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m5371_MethodInfo, L_81, L_82);
		V_11 = ((Int32U5BU5D_t109*)Castclass(L_83, Int32U5BU5D_t109_il2cpp_TypeInfo_var));
		ClientContext_t1312 * L_84 = V_0;
		NullCheck(L_84);
		SslClientStream_t1311 * L_85 = ClientContext_get_SslStream_m5970(L_84, /*hidden argument*/&ClientContext_get_SslStream_m5970_MethodInfo);
		X509Certificate_t1032 * L_86 = V_6;
		Int32U5BU5D_t109* L_87 = V_11;
		NullCheck(L_85);
		bool L_88 = (bool)VirtFuncInvoker2< bool, X509Certificate_t1032 *, Int32U5BU5D_t109* >::Invoke(&SslClientStream_RaiseServerCertificateValidation_m6164_MethodInfo, L_85, L_86, L_87);
		if (L_88)
		{
			goto IL_027b;
		}
	}
	{
		uint8_t L_89 = V_1;
		TlsException_t1347 * L_90 = (TlsException_t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1347_il2cpp_TypeInfo));
		TlsException__ctor_m6263(L_90, L_89, (String_t*) &_stringLiteral1035, /*hidden argument*/&TlsException__ctor_m6263_MethodInfo);
		il2cpp_codegen_raise_exception(L_90);
	}

IL_027b:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkServerIdentity_m6348 (TlsServerCertificate_t1356 * __this, X509Certificate_t1064 * ___cert, MethodInfo* method)
{
	ClientContext_t1312 * V_0 = {0};
	String_t* V_1 = {0};
	X509Extension_t1088 * V_2 = {0};
	SubjectAltNameExtension_t1297 * V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t87* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	StringU5BU5D_t87* V_8 = {0};
	int32_t V_9 = 0;
	{
		Context_t1305 * L_0 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		V_0 = ((ClientContext_t1312 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1312_il2cpp_TypeInfo)));
		ClientContext_t1312 * L_1 = V_0;
		NullCheck(L_1);
		TlsClientSettings_t1322 * L_2 = Context_get_ClientSettings_m6011(L_1, /*hidden argument*/&Context_get_ClientSettings_m6011_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = TlsClientSettings_get_TargetHost_m6251(L_2, /*hidden argument*/&TlsClientSettings_get_TargetHost_m6251_MethodInfo);
		V_1 = L_3;
		X509Certificate_t1064 * L_4 = ___cert;
		NullCheck(L_4);
		X509ExtensionCollection_t1209 * L_5 = X509Certificate_get_Extensions_m5374(L_4, /*hidden argument*/&X509Certificate_get_Extensions_m5374_MethodInfo);
		NullCheck(L_5);
		X509Extension_t1088 * L_6 = X509ExtensionCollection_get_Item_m5375(L_5, (String_t*) &_stringLiteral616, /*hidden argument*/&X509ExtensionCollection_get_Item_m5375_MethodInfo);
		V_2 = L_6;
		X509Extension_t1088 * L_7 = V_2;
		if (!L_7)
		{
			goto IL_00a4;
		}
	}
	{
		X509Extension_t1088 * L_8 = V_2;
		SubjectAltNameExtension_t1297 * L_9 = (SubjectAltNameExtension_t1297 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SubjectAltNameExtension_t1297_il2cpp_TypeInfo));
		SubjectAltNameExtension__ctor_m5881(L_9, L_8, /*hidden argument*/&SubjectAltNameExtension__ctor_m5881_MethodInfo);
		V_3 = L_9;
		SubjectAltNameExtension_t1297 * L_10 = V_3;
		NullCheck(L_10);
		StringU5BU5D_t87* L_11 = SubjectAltNameExtension_get_DNSNames_m5883(L_10, /*hidden argument*/&SubjectAltNameExtension_get_DNSNames_m5883_MethodInfo);
		V_5 = L_11;
		V_6 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		StringU5BU5D_t87* L_12 = V_5;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_14));
		String_t* L_15 = V_1;
		String_t* L_16 = V_4;
		bool L_17 = TlsServerCertificate_Match_m6350(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/&TlsServerCertificate_Match_m6350_MethodInfo);
		if (!L_17)
		{
			goto IL_005c;
		}
	}
	{
		return 1;
	}

IL_005c:
	{
		int32_t L_18 = V_6;
		V_6 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_19 = V_6;
		StringU5BU5D_t87* L_20 = V_5;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		SubjectAltNameExtension_t1297 * L_21 = V_3;
		NullCheck(L_21);
		StringU5BU5D_t87* L_22 = SubjectAltNameExtension_get_IPAddresses_m5884(L_21, /*hidden argument*/&SubjectAltNameExtension_get_IPAddresses_m5884_MethodInfo);
		V_8 = L_22;
		V_9 = 0;
		goto IL_0099;
	}

IL_007d:
	{
		StringU5BU5D_t87* L_23 = V_8;
		int32_t L_24 = V_9;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		V_7 = (*(String_t**)(String_t**)SZArrayLdElema(L_23, L_25));
		String_t* L_26 = V_7;
		String_t* L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_28 = String_op_Equality_m2110(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_28)
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		int32_t L_29 = V_9;
		V_9 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_30 = V_9;
		StringU5BU5D_t87* L_31 = V_8;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_007d;
		}
	}

IL_00a4:
	{
		X509Certificate_t1064 * L_32 = ___cert;
		NullCheck(L_32);
		String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&X509Certificate_get_SubjectName_m5793_MethodInfo, L_32);
		bool L_34 = TlsServerCertificate_checkDomainName_m6349(__this, L_33, /*hidden argument*/&TlsServerCertificate_checkDomainName_m6349_MethodInfo);
		return L_34;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern "C" bool TlsServerCertificate_checkDomainName_m6349 (TlsServerCertificate_t1356 * __this, String_t* ___subjectName, MethodInfo* method)
{
	ClientContext_t1312 * V_0 = {0};
	String_t* V_1 = {0};
	Regex_t111 * V_2 = {0};
	MatchCollection_t1120 * V_3 = {0};
	{
		Context_t1305 * L_0 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		V_0 = ((ClientContext_t1312 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1312_il2cpp_TypeInfo)));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t111_il2cpp_TypeInfo));
		Regex_t111 * L_2 = (Regex_t111 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t111_il2cpp_TypeInfo));
		Regex__ctor_m580(L_2, (String_t*) &_stringLiteral1036, /*hidden argument*/&Regex__ctor_m580_MethodInfo);
		V_2 = L_2;
		Regex_t111 * L_3 = V_2;
		String_t* L_4 = ___subjectName;
		NullCheck(L_3);
		MatchCollection_t1120 * L_5 = Regex_Matches_m4832(L_3, L_4, /*hidden argument*/&Regex_Matches_m4832_MethodInfo);
		V_3 = L_5;
		MatchCollection_t1120 * L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MatchCollection_get_Count_m4806_MethodInfo, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t1120 * L_8 = V_3;
		NullCheck(L_8);
		Match_t1109 * L_9 = (Match_t1109 *)VirtFuncInvoker1< Match_t1109 *, int32_t >::Invoke(&MatchCollection_get_Item_m4808_MethodInfo, L_8, 0);
		NullCheck(L_9);
		bool L_10 = Group_get_Success_m4785(L_9, /*hidden argument*/&Group_get_Success_m4785_MethodInfo);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t1120 * L_11 = V_3;
		NullCheck(L_11);
		Match_t1109 * L_12 = (Match_t1109 *)VirtFuncInvoker1< Match_t1109 *, int32_t >::Invoke(&MatchCollection_get_Item_m4808_MethodInfo, L_11, 0);
		NullCheck(L_12);
		GroupCollection_t1118 * L_13 = (GroupCollection_t1118 *)VirtFuncInvoker0< GroupCollection_t1118 * >::Invoke(&Match_get_Groups_m4799_MethodInfo, L_12);
		NullCheck(L_13);
		Group_t1116 * L_14 = GroupCollection_get_Item_m4789(L_13, 1, /*hidden argument*/&GroupCollection_get_Item_m4789_MethodInfo);
		NullCheck(L_14);
		String_t* L_15 = Capture_get_Value_m4770(L_14, /*hidden argument*/&Capture_get_Value_m4770_MethodInfo);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m3832_MethodInfo, L_15);
		V_1 = L_16;
	}

IL_005f:
	{
		ClientContext_t1312 * L_17 = V_0;
		NullCheck(L_17);
		TlsClientSettings_t1322 * L_18 = Context_get_ClientSettings_m6011(L_17, /*hidden argument*/&Context_get_ClientSettings_m6011_MethodInfo);
		NullCheck(L_18);
		String_t* L_19 = TlsClientSettings_get_TargetHost_m6251(L_18, /*hidden argument*/&TlsClientSettings_get_TargetHost_m6251_MethodInfo);
		String_t* L_20 = V_1;
		bool L_21 = TlsServerCertificate_Match_m6350(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&TlsServerCertificate_Match_m6350_MethodInfo);
		return L_21;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern "C" bool TlsServerCertificate_Match_m6350 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t G_B15_0 = 0;
	{
		String_t* L_0 = ___pattern;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2187(L_0, ((int32_t)42), /*hidden argument*/&String_IndexOf_m2187_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___hostname;
		String_t* L_4 = ___pattern;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_5 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_6 = String_Compare_m5283(NULL /*static, unused*/, L_3, L_4, 1, L_5, /*hidden argument*/&String_Compare_m5283_MethodInfo);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		String_t* L_8 = ___pattern;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m2112(L_8, /*hidden argument*/&String_get_Length_m2112_MethodInfo);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)((int32_t)L_9-(int32_t)1)))))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_10 = ___pattern;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		uint16_t L_12 = String_get_Chars_m2128(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/&String_get_Chars_m2128_MethodInfo);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)46))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		String_t* L_13 = ___pattern;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = String_IndexOf_m3827(L_13, ((int32_t)42), ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/&String_IndexOf_m3827_MethodInfo);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		String_t* L_17 = ___pattern;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m2154(L_17, ((int32_t)((int32_t)L_18+(int32_t)1)), /*hidden argument*/&String_Substring_m2154_MethodInfo);
		V_2 = L_19;
		String_t* L_20 = ___hostname;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m2112(L_20, /*hidden argument*/&String_get_Length_m2112_MethodInfo);
		String_t* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m2112(L_22, /*hidden argument*/&String_get_Length_m2112_MethodInfo);
		V_3 = ((int32_t)((int32_t)L_21-(int32_t)L_23));
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		String_t* L_25 = ___hostname;
		int32_t L_26 = V_3;
		String_t* L_27 = V_2;
		String_t* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m2112(L_28, /*hidden argument*/&String_get_Length_m2112_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_30 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_31 = String_Compare_m6547(NULL /*static, unused*/, L_25, L_26, L_27, 0, L_29, 1, L_30, /*hidden argument*/&String_Compare_m6547_MethodInfo);
		if (!L_31)
		{
			goto IL_0093;
		}
	}
	{
		return 0;
	}

IL_0093:
	{
		int32_t L_32 = V_0;
		if (L_32)
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_33 = ___hostname;
		NullCheck(L_33);
		int32_t L_34 = String_IndexOf_m2187(L_33, ((int32_t)46), /*hidden argument*/&String_IndexOf_m2187_MethodInfo);
		V_4 = L_34;
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_36 = V_4;
		String_t* L_37 = ___hostname;
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m2112(L_37, /*hidden argument*/&String_get_Length_m2112_MethodInfo);
		String_t* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40 = String_get_Length_m2112(L_39, /*hidden argument*/&String_get_Length_m2112_MethodInfo);
		G_B15_0 = ((((int32_t)((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)L_38-(int32_t)L_40))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B15_0 = 1;
	}

IL_00c2:
	{
		return G_B15_0;
	}

IL_00c3:
	{
		String_t* L_41 = ___pattern;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m2129(L_41, 0, L_42, /*hidden argument*/&String_Substring_m2129_MethodInfo);
		V_5 = L_43;
		String_t* L_44 = ___hostname;
		String_t* L_45 = V_5;
		String_t* L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m2112(L_46, /*hidden argument*/&String_get_Length_m2112_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_48 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_49 = String_Compare_m6547(NULL /*static, unused*/, L_44, 0, L_45, 0, L_47, 1, L_48, /*hidden argument*/&String_Compare_m6547_MethodInfo);
		return ((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerCertificateRequest_t1357_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5MethodDeclarations.h"

#include "Mono.Security_ArrayTypes.h"
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
extern TypeInfo ClientCertificateTypeU5BU5D_t1348_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateType_t1349_il2cpp_TypeInfo;
extern TypeInfo ASN1_t1075_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t87_il2cpp_TypeInfo;
extern TypeInfo Encoding_t113_il2cpp_TypeInfo;
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1MethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern Il2CppType ClientCertificateTypeU5BU5D_t1348_0_0_0;
extern Il2CppType StringU5BU5D_t87_0_0_0;
extern MethodInfo TlsServerSettings_set_CertificateTypes_m6276_MethodInfo;
extern MethodInfo TlsServerSettings_set_DistinguisedNames_m6277_MethodInfo;
extern MethodInfo TlsServerSettings_set_CertificateRequest_m6275_MethodInfo;
extern MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m6354_MethodInfo;
extern MethodInfo TlsStream_ReadByte_m6289_MethodInfo;
extern MethodInfo TlsStream_ReadInt16_m6290_MethodInfo;
extern MethodInfo ASN1__ctor_m5307_MethodInfo;
extern MethodInfo ASN1_get_Count_m5311_MethodInfo;
extern MethodInfo ASN1_get_Item_m5312_MethodInfo;
extern MethodInfo ASN1_get_Value_m5310_MethodInfo;
extern MethodInfo Encoding_get_UTF8_m587_MethodInfo;
extern MethodInfo Encoding_GetString_m5342_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificateRequest__ctor_m6351_MethodInfo;
extern "C" void TlsServerCertificateRequest__ctor_m6351 (TlsServerCertificateRequest_t1357 * __this, Context_t1305 * ___context, ByteU5BU5D_t66* ___buffer, MethodInfo* method)
{
	{
		Context_t1305 * L_0 = ___context;
		ByteU5BU5D_t66* L_1 = ___buffer;
		HandshakeMessage__ctor_m6307(__this, L_0, ((int32_t)13), L_1, /*hidden argument*/&HandshakeMessage__ctor_m6307_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern MethodInfo TlsServerCertificateRequest_Update_m6352_MethodInfo;
extern "C" void TlsServerCertificateRequest_Update_m6352 (TlsServerCertificateRequest_t1357 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m6312(__this, /*hidden argument*/&HandshakeMessage_Update_m6312_MethodInfo);
		Context_t1305 * L_0 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1321 * L_1 = Context_get_ServerSettings_m6010(L_0, /*hidden argument*/&Context_get_ServerSettings_m6010_MethodInfo);
		ClientCertificateTypeU5BU5D_t1348* L_2 = (__this->___certificateTypes_9);
		NullCheck(L_1);
		TlsServerSettings_set_CertificateTypes_m6276(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_CertificateTypes_m6276_MethodInfo);
		Context_t1305 * L_3 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t1321 * L_4 = Context_get_ServerSettings_m6010(L_3, /*hidden argument*/&Context_get_ServerSettings_m6010_MethodInfo);
		StringU5BU5D_t87* L_5 = (__this->___distinguisedNames_10);
		NullCheck(L_4);
		TlsServerSettings_set_DistinguisedNames_m6277(L_4, L_5, /*hidden argument*/&TlsServerSettings_set_DistinguisedNames_m6277_MethodInfo);
		Context_t1305 * L_6 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_6);
		TlsServerSettings_t1321 * L_7 = Context_get_ServerSettings_m6010(L_6, /*hidden argument*/&Context_get_ServerSettings_m6010_MethodInfo);
		NullCheck(L_7);
		TlsServerSettings_set_CertificateRequest_m6275(L_7, 1, /*hidden argument*/&TlsServerSettings_set_CertificateRequest_m6275_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern MethodInfo TlsServerCertificateRequest_ProcessAsSsl3_m6353_MethodInfo;
extern "C" void TlsServerCertificateRequest_ProcessAsSsl3_m6353 (TlsServerCertificateRequest_t1357 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificateRequest_ProcessAsTls1_m6354_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern TypeInfo* ClientCertificateTypeU5BU5D_t1348_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificateRequest_ProcessAsTls1_m6354 (TlsServerCertificateRequest_t1357 * __this, MethodInfo* method)
{
	static bool TlsServerCertificateRequest_ProcessAsTls1_m6354_init;
	if (!TlsServerCertificateRequest_ProcessAsTls1_m6354_init)
	{
		ClientCertificateTypeU5BU5D_t1348_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ClientCertificateTypeU5BU5D_t1348_0_0_0);
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		TlsServerCertificateRequest_ProcessAsTls1_m6354_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ASN1_t1075 * V_2 = {0};
	int32_t V_3 = 0;
	ASN1_t1075 * V_4 = {0};
	{
		uint8_t L_0 = TlsStream_ReadByte_m6289(__this, /*hidden argument*/&TlsStream_ReadByte_m6289_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->___certificateTypes_9 = ((ClientCertificateTypeU5BU5D_t1348*)SZArrayNew(ClientCertificateTypeU5BU5D_t1348_il2cpp_TypeInfo_var, L_1));
		V_1 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		ClientCertificateTypeU5BU5D_t1348* L_2 = (__this->___certificateTypes_9);
		int32_t L_3 = V_1;
		uint8_t L_4 = TlsStream_ReadByte_m6289(__this, /*hidden argument*/&TlsStream_ReadByte_m6289_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3)) = (int32_t)L_4;
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_002c:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_8 = TlsStream_ReadInt16_m6290(__this, /*hidden argument*/&TlsStream_ReadInt16_m6290_MethodInfo);
		if (!L_8)
		{
			goto IL_00aa;
		}
	}
	{
		int16_t L_9 = TlsStream_ReadInt16_m6290(__this, /*hidden argument*/&TlsStream_ReadInt16_m6290_MethodInfo);
		ByteU5BU5D_t66* L_10 = TlsStream_ReadBytes_m6292(__this, L_9, /*hidden argument*/&TlsStream_ReadBytes_m6292_MethodInfo);
		ASN1_t1075 * L_11 = (ASN1_t1075 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t1075_il2cpp_TypeInfo));
		ASN1__ctor_m5307(L_11, L_10, /*hidden argument*/&ASN1__ctor_m5307_MethodInfo);
		V_2 = L_11;
		ASN1_t1075 * L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m5311(L_12, /*hidden argument*/&ASN1_get_Count_m5311_MethodInfo);
		__this->___distinguisedNames_10 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, L_13));
		V_3 = 0;
		goto IL_009e;
	}

IL_0068:
	{
		ASN1_t1075 * L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		ASN1_t1075 * L_16 = ASN1_get_Item_m5312(L_14, L_15, /*hidden argument*/&ASN1_get_Item_m5312_MethodInfo);
		NullCheck(L_16);
		ByteU5BU5D_t66* L_17 = ASN1_get_Value_m5310(L_16, /*hidden argument*/&ASN1_get_Value_m5310_MethodInfo);
		ASN1_t1075 * L_18 = (ASN1_t1075 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t1075_il2cpp_TypeInfo));
		ASN1__ctor_m5307(L_18, L_17, /*hidden argument*/&ASN1__ctor_m5307_MethodInfo);
		V_4 = L_18;
		StringU5BU5D_t87* L_19 = (__this->___distinguisedNames_10);
		int32_t L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t113_il2cpp_TypeInfo));
		Encoding_t113 * L_21 = Encoding_get_UTF8_m587(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m587_MethodInfo);
		ASN1_t1075 * L_22 = V_4;
		NullCheck(L_22);
		ASN1_t1075 * L_23 = ASN1_get_Item_m5312(L_22, 1, /*hidden argument*/&ASN1_get_Item_m5312_MethodInfo);
		NullCheck(L_23);
		ByteU5BU5D_t66* L_24 = ASN1_get_Value_m5310(L_23, /*hidden argument*/&ASN1_get_Value_m5310_MethodInfo);
		NullCheck(L_21);
		String_t* L_25 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t66* >::Invoke(&Encoding_GetString_m5342_MethodInfo, L_21, L_24);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		ArrayElementTypeCheck (L_19, L_25);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, L_20)) = (String_t*)L_25;
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009e:
	{
		int32_t L_27 = V_3;
		ASN1_t1075 * L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Count_m5311(L_28, /*hidden argument*/&ASN1_get_Count_m5311_MethodInfo);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}

IL_00aa:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerFinished_t1358_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6MethodDeclarations.h"

// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHash.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1.h"
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1371_il2cpp_TypeInfo;
extern TypeInfo SslHandshakeHash_t1345_il2cpp_TypeInfo;
extern TypeInfo HashAlgorithm_t1275_il2cpp_TypeInfo;
extern TypeInfo CipherSuite_t1306_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t1317_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t1300_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHashMethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1MethodDeclarations.h"
extern Il2CppType ByteU5BU5D_t66_0_0_0;
extern MethodInfo RuntimeHelpers_InitializeArray_m483_MethodInfo;
extern MethodInfo Context_set_HandshakeState_m6015_MethodInfo;
extern MethodInfo Context_get_MasterSecret_m6035_MethodInfo;
extern MethodInfo SslHandshakeHash__ctor_m6175_MethodInfo;
extern MethodInfo Context_get_HandshakeMessages_m6022_MethodInfo;
extern MethodInfo TlsStream_ToArray_m6299_MethodInfo;
extern MethodInfo HashAlgorithm_TransformBlock_m6422_MethodInfo;
extern MethodInfo HashAlgorithm_TransformFinalBlock_m6423_MethodInfo;
extern MethodInfo TlsStream_get_Length_m6287_MethodInfo;
extern MethodInfo HashAlgorithm_get_Hash_m6424_MethodInfo;
extern MethodInfo HandshakeMessage_Compare_m6314_MethodInfo;
extern MethodInfo MD5SHA1__ctor_m5893_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m6426_MethodInfo;
extern MethodInfo Context_get_Current_m6053_MethodInfo;
extern MethodInfo CipherSuite_PRF_m5935_MethodInfo;
extern MethodInfo TlsException__ctor_m6258_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t1371____$$fieldU2D22_14_FieldInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerFinished__ctor_m6355_MethodInfo;
extern "C" void TlsServerFinished__ctor_m6355 (TlsServerFinished_t1358 * __this, Context_t1305 * ___context, ByteU5BU5D_t66* ___buffer, MethodInfo* method)
{
	{
		Context_t1305 * L_0 = ___context;
		ByteU5BU5D_t66* L_1 = ___buffer;
		HandshakeMessage__ctor_m6307(__this, L_0, ((int32_t)20), L_1, /*hidden argument*/&HandshakeMessage__ctor_m6307_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern MethodInfo TlsServerFinished__cctor_m6356_MethodInfo;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" void TlsServerFinished__cctor_m6356 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool TlsServerFinished__cctor_m6356_init;
	if (!TlsServerFinished__cctor_m6356_init)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t66_0_0_0);
		TlsServerFinished__cctor_m6356_init = true;
	}
	{
		ByteU5BU5D_t66* L_0 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m483(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t1371____$$fieldU2D22_14_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m483_MethodInfo);
		((TlsServerFinished_t1358_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1358_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern MethodInfo TlsServerFinished_Update_m6357_MethodInfo;
extern "C" void TlsServerFinished_Update_m6357 (TlsServerFinished_t1358 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m6312(__this, /*hidden argument*/&HandshakeMessage_Update_m6312_MethodInfo);
		Context_t1305 * L_0 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_0);
		Context_set_HandshakeState_m6015(L_0, 2, /*hidden argument*/&Context_set_HandshakeState_m6015_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern MethodInfo TlsServerFinished_ProcessAsSsl3_m6358_MethodInfo;
extern "C" void TlsServerFinished_ProcessAsSsl3_m6358 (TlsServerFinished_t1358 * __this, MethodInfo* method)
{
	HashAlgorithm_t1275 * V_0 = {0};
	ByteU5BU5D_t66* V_1 = {0};
	ByteU5BU5D_t66* V_2 = {0};
	ByteU5BU5D_t66* V_3 = {0};
	{
		Context_t1305 * L_0 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_0);
		ByteU5BU5D_t66* L_1 = Context_get_MasterSecret_m6035(L_0, /*hidden argument*/&Context_get_MasterSecret_m6035_MethodInfo);
		SslHandshakeHash_t1345 * L_2 = (SslHandshakeHash_t1345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SslHandshakeHash_t1345_il2cpp_TypeInfo));
		SslHandshakeHash__ctor_m6175(L_2, L_1, /*hidden argument*/&SslHandshakeHash__ctor_m6175_MethodInfo);
		V_0 = L_2;
		Context_t1305 * L_3 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_3);
		TlsStream_t1317 * L_4 = Context_get_HandshakeMessages_m6022(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m6022_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t66* L_5 = TlsStream_ToArray_m6299(L_4, /*hidden argument*/&TlsStream_ToArray_m6299_MethodInfo);
		V_1 = L_5;
		HashAlgorithm_t1275 * L_6 = V_0;
		ByteU5BU5D_t66* L_7 = V_1;
		ByteU5BU5D_t66* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t66* L_9 = V_1;
		NullCheck(L_6);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t66*, int32_t, int32_t, ByteU5BU5D_t66*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m6422_MethodInfo, L_6, L_7, 0, (((int32_t)(((Array_t *)L_8)->max_length))), L_9, 0);
		HashAlgorithm_t1275 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TlsServerFinished_t1358_il2cpp_TypeInfo));
		ByteU5BU5D_t66* L_11 = ((TlsServerFinished_t1358_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1358_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9;
		ByteU5BU5D_t66* L_12 = ((TlsServerFinished_t1358_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1358_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9;
		NullCheck(L_12);
		ByteU5BU5D_t66* L_13 = ((TlsServerFinished_t1358_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1358_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9;
		NullCheck(L_10);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t66*, int32_t, int32_t, ByteU5BU5D_t66*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m6422_MethodInfo, L_10, L_11, 0, (((int32_t)(((Array_t *)L_12)->max_length))), L_13, 0);
		HashAlgorithm_t1275 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CipherSuite_t1306_il2cpp_TypeInfo));
		ByteU5BU5D_t66* L_15 = ((CipherSuite_t1306_StaticFields*)InitializedTypeInfo(&CipherSuite_t1306_il2cpp_TypeInfo)->static_fields)->___EmptyArray_0;
		NullCheck(L_14);
		VirtFuncInvoker3< ByteU5BU5D_t66*, ByteU5BU5D_t66*, int32_t, int32_t >::Invoke(&HashAlgorithm_TransformFinalBlock_m6423_MethodInfo, L_14, L_15, 0, 0);
		int64_t L_16 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m6287_MethodInfo, __this);
		ByteU5BU5D_t66* L_17 = TlsStream_ReadBytes_m6292(__this, (((int32_t)L_16)), /*hidden argument*/&TlsStream_ReadBytes_m6292_MethodInfo);
		V_2 = L_17;
		HashAlgorithm_t1275 * L_18 = V_0;
		NullCheck(L_18);
		ByteU5BU5D_t66* L_19 = (ByteU5BU5D_t66*)VirtFuncInvoker0< ByteU5BU5D_t66* >::Invoke(&HashAlgorithm_get_Hash_m6424_MethodInfo, L_18);
		V_3 = L_19;
		ByteU5BU5D_t66* L_20 = V_3;
		ByteU5BU5D_t66* L_21 = V_2;
		bool L_22 = HandshakeMessage_Compare_m6314(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&HandshakeMessage_Compare_m6314_MethodInfo);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		TlsException_t1347 * L_23 = (TlsException_t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1347_il2cpp_TypeInfo));
		TlsException__ctor_m6263(L_23, ((int32_t)71), (String_t*) &_stringLiteral1037, /*hidden argument*/&TlsException__ctor_m6263_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern MethodInfo TlsServerFinished_ProcessAsTls1_m6359_MethodInfo;
extern "C" void TlsServerFinished_ProcessAsTls1_m6359 (TlsServerFinished_t1358 * __this, MethodInfo* method)
{
	ByteU5BU5D_t66* V_0 = {0};
	HashAlgorithm_t1275 * V_1 = {0};
	ByteU5BU5D_t66* V_2 = {0};
	ByteU5BU5D_t66* V_3 = {0};
	ByteU5BU5D_t66* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m6287_MethodInfo, __this);
		ByteU5BU5D_t66* L_1 = TlsStream_ReadBytes_m6292(__this, (((int32_t)L_0)), /*hidden argument*/&TlsStream_ReadBytes_m6292_MethodInfo);
		V_0 = L_1;
		MD5SHA1_t1300 * L_2 = (MD5SHA1_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t1300_il2cpp_TypeInfo));
		MD5SHA1__ctor_m5893(L_2, /*hidden argument*/&MD5SHA1__ctor_m5893_MethodInfo);
		V_1 = L_2;
		Context_t1305 * L_3 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_3);
		TlsStream_t1317 * L_4 = Context_get_HandshakeMessages_m6022(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m6022_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t66* L_5 = TlsStream_ToArray_m6299(L_4, /*hidden argument*/&TlsStream_ToArray_m6299_MethodInfo);
		V_2 = L_5;
		HashAlgorithm_t1275 * L_6 = V_1;
		ByteU5BU5D_t66* L_7 = V_2;
		ByteU5BU5D_t66* L_8 = V_2;
		NullCheck(L_8);
		NullCheck(L_6);
		ByteU5BU5D_t66* L_9 = HashAlgorithm_ComputeHash_m6426(L_6, L_7, 0, (((int32_t)(((Array_t *)L_8)->max_length))), /*hidden argument*/&HashAlgorithm_ComputeHash_m6426_MethodInfo);
		V_3 = L_9;
		Context_t1305 * L_10 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_10);
		SecurityParameters_t1323 * L_11 = Context_get_Current_m6053(L_10, /*hidden argument*/&Context_get_Current_m6053_MethodInfo);
		NullCheck(L_11);
		CipherSuite_t1306 * L_12 = SecurityParameters_get_Cipher_m6124(L_11, /*hidden argument*/&SecurityParameters_get_Cipher_m6124_MethodInfo);
		Context_t1305 * L_13 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_13);
		ByteU5BU5D_t66* L_14 = Context_get_MasterSecret_m6035(L_13, /*hidden argument*/&Context_get_MasterSecret_m6035_MethodInfo);
		ByteU5BU5D_t66* L_15 = V_3;
		NullCheck(L_12);
		ByteU5BU5D_t66* L_16 = CipherSuite_PRF_m5935(L_12, L_14, (String_t*) &_stringLiteral1038, L_15, ((int32_t)12), /*hidden argument*/&CipherSuite_PRF_m5935_MethodInfo);
		V_4 = L_16;
		ByteU5BU5D_t66* L_17 = V_4;
		ByteU5BU5D_t66* L_18 = V_0;
		bool L_19 = HandshakeMessage_Compare_m6314(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/&HandshakeMessage_Compare_m6314_MethodInfo);
		if (L_19)
		{
			goto IL_0073;
		}
	}
	{
		TlsException_t1347 * L_20 = (TlsException_t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1347_il2cpp_TypeInfo));
		TlsException__ctor_m6258(L_20, (String_t*) &_stringLiteral1037, /*hidden argument*/&TlsException__ctor_m6258_MethodInfo);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0073:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHello_t1359_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7MethodDeclarations.h"

// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollecti.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
extern TypeInfo ClientSessionCache_t1319_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteCollection_t1307_il2cpp_TypeInfo;
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientSessionCache
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSessionCacheMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollectiMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteFactory
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteFactoryMethodDeclarations.h"
extern MethodInfo Context_set_SessionId_m6007_MethodInfo;
extern MethodInfo Context_set_ServerRandom_m6030_MethodInfo;
extern MethodInfo SecurityParameters_set_Cipher_m6125_MethodInfo;
extern MethodInfo Context_set_CompressionMethod_m6009_MethodInfo;
extern MethodInfo Context_set_ProtocolNegotiated_m6001_MethodInfo;
extern MethodInfo Context_get_ClientRandom_m6027_MethodInfo;
extern MethodInfo Context_get_ServerRandom_m6029_MethodInfo;
extern MethodInfo Buffer_BlockCopy_m5306_MethodInfo;
extern MethodInfo Context_set_RandomCS_m6032_MethodInfo;
extern MethodInfo Context_set_RandomSC_m6034_MethodInfo;
extern MethodInfo TlsServerHello_ProcessAsTls1_m6363_MethodInfo;
extern MethodInfo TlsServerHello_processProtocol_m6364_MethodInfo;
extern MethodInfo ClientSessionCache_Add_m5992_MethodInfo;
extern MethodInfo Context_get_SessionId_m6006_MethodInfo;
extern MethodInfo Context_set_AbbreviatedHandshake_m5999_MethodInfo;
extern MethodInfo Context_get_SupportedCiphers_m6020_MethodInfo;
extern MethodInfo CipherSuiteCollection_IndexOf_m5961_MethodInfo;
extern MethodInfo CipherSuiteCollection_get_Item_m5954_MethodInfo;
extern MethodInfo Context_DecodeProtocolCode_m6051_MethodInfo;
extern MethodInfo Context_get_SecurityProtocolFlags_m6004_MethodInfo;
extern MethodInfo Context_set_SecurityProtocol_m6003_MethodInfo;
extern MethodInfo CipherSuiteCollection_Clear_m5959_MethodInfo;
extern MethodInfo Context_set_SupportedCiphers_m6021_MethodInfo;
extern MethodInfo CipherSuiteFactory_GetSupportedCiphers_m5966_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHello__ctor_m6360_MethodInfo;
extern "C" void TlsServerHello__ctor_m6360 (TlsServerHello_t1359 * __this, Context_t1305 * ___context, ByteU5BU5D_t66* ___buffer, MethodInfo* method)
{
	{
		Context_t1305 * L_0 = ___context;
		ByteU5BU5D_t66* L_1 = ___buffer;
		HandshakeMessage__ctor_m6307(__this, L_0, 2, L_1, /*hidden argument*/&HandshakeMessage__ctor_m6307_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern MethodInfo TlsServerHello_Update_m6361_MethodInfo;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" void TlsServerHello_Update_m6361 (TlsServerHello_t1359 * __this, MethodInfo* method)
{
	static bool TlsServerHello_Update_m6361_init;
	if (!TlsServerHello_Update_m6361_init)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t66_0_0_0);
		TlsServerHello_Update_m6361_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t66* V_3 = {0};
	ByteU5BU5D_t66* V_4 = {0};
	{
		HandshakeMessage_Update_m6312(__this, /*hidden argument*/&HandshakeMessage_Update_m6312_MethodInfo);
		Context_t1305 * L_0 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		ByteU5BU5D_t66* L_1 = (__this->___sessionId_11);
		NullCheck(L_0);
		Context_set_SessionId_m6007(L_0, L_1, /*hidden argument*/&Context_set_SessionId_m6007_MethodInfo);
		Context_t1305 * L_2 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		ByteU5BU5D_t66* L_3 = (__this->___random_10);
		NullCheck(L_2);
		Context_set_ServerRandom_m6030(L_2, L_3, /*hidden argument*/&Context_set_ServerRandom_m6030_MethodInfo);
		Context_t1305 * L_4 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_4);
		SecurityParameters_t1323 * L_5 = Context_get_Negotiating_m6054(L_4, /*hidden argument*/&Context_get_Negotiating_m6054_MethodInfo);
		CipherSuite_t1306 * L_6 = (__this->___cipherSuite_12);
		NullCheck(L_5);
		SecurityParameters_set_Cipher_m6125(L_5, L_6, /*hidden argument*/&SecurityParameters_set_Cipher_m6125_MethodInfo);
		Context_t1305 * L_7 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		int32_t L_8 = (__this->___compressionMethod_9);
		NullCheck(L_7);
		Context_set_CompressionMethod_m6009(L_7, L_8, /*hidden argument*/&Context_set_CompressionMethod_m6009_MethodInfo);
		Context_t1305 * L_9 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_9);
		Context_set_ProtocolNegotiated_m6001(L_9, 1, /*hidden argument*/&Context_set_ProtocolNegotiated_m6001_MethodInfo);
		Context_t1305 * L_10 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t66* L_11 = Context_get_ClientRandom_m6027(L_10, /*hidden argument*/&Context_get_ClientRandom_m6027_MethodInfo);
		NullCheck(L_11);
		V_0 = (((int32_t)(((Array_t *)L_11)->max_length)));
		Context_t1305 * L_12 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_12);
		ByteU5BU5D_t66* L_13 = Context_get_ServerRandom_m6029(L_12, /*hidden argument*/&Context_get_ServerRandom_m6029_MethodInfo);
		NullCheck(L_13);
		V_1 = (((int32_t)(((Array_t *)L_13)->max_length)));
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = V_2;
		V_3 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, L_16));
		Context_t1305 * L_17 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_17);
		ByteU5BU5D_t66* L_18 = Context_get_ClientRandom_m6027(L_17, /*hidden argument*/&Context_get_ClientRandom_m6027_MethodInfo);
		ByteU5BU5D_t66* L_19 = V_3;
		int32_t L_20 = V_0;
		Buffer_BlockCopy_m5306(NULL /*static, unused*/, (Array_t *)(Array_t *)L_18, 0, (Array_t *)(Array_t *)L_19, 0, L_20, /*hidden argument*/&Buffer_BlockCopy_m5306_MethodInfo);
		Context_t1305 * L_21 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_21);
		ByteU5BU5D_t66* L_22 = Context_get_ServerRandom_m6029(L_21, /*hidden argument*/&Context_get_ServerRandom_m6029_MethodInfo);
		ByteU5BU5D_t66* L_23 = V_3;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		Buffer_BlockCopy_m5306(NULL /*static, unused*/, (Array_t *)(Array_t *)L_22, 0, (Array_t *)(Array_t *)L_23, L_24, L_25, /*hidden argument*/&Buffer_BlockCopy_m5306_MethodInfo);
		Context_t1305 * L_26 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		ByteU5BU5D_t66* L_27 = V_3;
		NullCheck(L_26);
		Context_set_RandomCS_m6032(L_26, L_27, /*hidden argument*/&Context_set_RandomCS_m6032_MethodInfo);
		int32_t L_28 = V_2;
		V_4 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, L_28));
		Context_t1305 * L_29 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_29);
		ByteU5BU5D_t66* L_30 = Context_get_ServerRandom_m6029(L_29, /*hidden argument*/&Context_get_ServerRandom_m6029_MethodInfo);
		ByteU5BU5D_t66* L_31 = V_4;
		int32_t L_32 = V_1;
		Buffer_BlockCopy_m5306(NULL /*static, unused*/, (Array_t *)(Array_t *)L_30, 0, (Array_t *)(Array_t *)L_31, 0, L_32, /*hidden argument*/&Buffer_BlockCopy_m5306_MethodInfo);
		Context_t1305 * L_33 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_33);
		ByteU5BU5D_t66* L_34 = Context_get_ClientRandom_m6027(L_33, /*hidden argument*/&Context_get_ClientRandom_m6027_MethodInfo);
		ByteU5BU5D_t66* L_35 = V_4;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		Buffer_BlockCopy_m5306(NULL /*static, unused*/, (Array_t *)(Array_t *)L_34, 0, (Array_t *)(Array_t *)L_35, L_36, L_37, /*hidden argument*/&Buffer_BlockCopy_m5306_MethodInfo);
		Context_t1305 * L_38 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		ByteU5BU5D_t66* L_39 = V_4;
		NullCheck(L_38);
		Context_set_RandomSC_m6034(L_38, L_39, /*hidden argument*/&Context_set_RandomSC_m6034_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern MethodInfo TlsServerHello_ProcessAsSsl3_m6362_MethodInfo;
extern "C" void TlsServerHello_ProcessAsSsl3_m6362 (TlsServerHello_t1359 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerHello_ProcessAsTls1_m6363_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern "C" void TlsServerHello_ProcessAsTls1_m6363 (TlsServerHello_t1359 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int16_t L_0 = TlsStream_ReadInt16_m6290(__this, /*hidden argument*/&TlsStream_ReadInt16_m6290_MethodInfo);
		TlsServerHello_processProtocol_m6364(__this, L_0, /*hidden argument*/&TlsServerHello_processProtocol_m6364_MethodInfo);
		ByteU5BU5D_t66* L_1 = TlsStream_ReadBytes_m6292(__this, ((int32_t)32), /*hidden argument*/&TlsStream_ReadBytes_m6292_MethodInfo);
		__this->___random_10 = L_1;
		uint8_t L_2 = TlsStream_ReadByte_m6289(__this, /*hidden argument*/&TlsStream_ReadByte_m6289_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_4 = V_0;
		ByteU5BU5D_t66* L_5 = TlsStream_ReadBytes_m6292(__this, L_4, /*hidden argument*/&TlsStream_ReadBytes_m6292_MethodInfo);
		__this->___sessionId_11 = L_5;
		Context_t1305 * L_6 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_6);
		TlsClientSettings_t1322 * L_7 = Context_get_ClientSettings_m6011(L_6, /*hidden argument*/&Context_get_ClientSettings_m6011_MethodInfo);
		NullCheck(L_7);
		String_t* L_8 = TlsClientSettings_get_TargetHost_m6251(L_7, /*hidden argument*/&TlsClientSettings_get_TargetHost_m6251_MethodInfo);
		ByteU5BU5D_t66* L_9 = (__this->___sessionId_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ClientSessionCache_t1319_il2cpp_TypeInfo));
		ClientSessionCache_Add_m5992(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&ClientSessionCache_Add_m5992_MethodInfo);
		Context_t1305 * L_10 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		ByteU5BU5D_t66* L_11 = (__this->___sessionId_11);
		Context_t1305 * L_12 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_12);
		ByteU5BU5D_t66* L_13 = Context_get_SessionId_m6006(L_12, /*hidden argument*/&Context_get_SessionId_m6006_MethodInfo);
		bool L_14 = HandshakeMessage_Compare_m6314(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/&HandshakeMessage_Compare_m6314_MethodInfo);
		NullCheck(L_10);
		Context_set_AbbreviatedHandshake_m5999(L_10, L_14, /*hidden argument*/&Context_set_AbbreviatedHandshake_m5999_MethodInfo);
		goto IL_0082;
	}

IL_0076:
	{
		Context_t1305 * L_15 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_15);
		Context_set_AbbreviatedHandshake_m5999(L_15, 0, /*hidden argument*/&Context_set_AbbreviatedHandshake_m5999_MethodInfo);
	}

IL_0082:
	{
		int16_t L_16 = TlsStream_ReadInt16_m6290(__this, /*hidden argument*/&TlsStream_ReadInt16_m6290_MethodInfo);
		V_1 = L_16;
		Context_t1305 * L_17 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_17);
		CipherSuiteCollection_t1307 * L_18 = Context_get_SupportedCiphers_m6020(L_17, /*hidden argument*/&Context_get_SupportedCiphers_m6020_MethodInfo);
		int16_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = CipherSuiteCollection_IndexOf_m5961(L_18, L_19, /*hidden argument*/&CipherSuiteCollection_IndexOf_m5961_MethodInfo);
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		TlsException_t1347 * L_21 = (TlsException_t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1347_il2cpp_TypeInfo));
		TlsException__ctor_m6263(L_21, ((int32_t)71), (String_t*) &_stringLiteral1039, /*hidden argument*/&TlsException__ctor_m6263_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00ad:
	{
		Context_t1305 * L_22 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_22);
		CipherSuiteCollection_t1307 * L_23 = Context_get_SupportedCiphers_m6020(L_22, /*hidden argument*/&Context_get_SupportedCiphers_m6020_MethodInfo);
		int16_t L_24 = V_1;
		NullCheck(L_23);
		CipherSuite_t1306 * L_25 = CipherSuiteCollection_get_Item_m5954(L_23, L_24, /*hidden argument*/&CipherSuiteCollection_get_Item_m5954_MethodInfo);
		__this->___cipherSuite_12 = L_25;
		uint8_t L_26 = TlsStream_ReadByte_m6289(__this, /*hidden argument*/&TlsStream_ReadByte_m6289_MethodInfo);
		__this->___compressionMethod_9 = L_26;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern "C" void TlsServerHello_processProtocol_m6364 (TlsServerHello_t1359 * __this, int16_t ___protocol, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		Context_t1305 * L_0 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		int16_t L_1 = ___protocol;
		NullCheck(L_0);
		int32_t L_2 = Context_DecodeProtocolCode_m6051(L_0, L_1, /*hidden argument*/&Context_DecodeProtocolCode_m6051_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Context_t1305 * L_4 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocolFlags_m6004(L_4, /*hidden argument*/&Context_get_SecurityProtocolFlags_m6004_MethodInfo);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)L_5))) == ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		Context_t1305 * L_7 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_7);
		int32_t L_8 = Context_get_SecurityProtocolFlags_m6004(L_7, /*hidden argument*/&Context_get_SecurityProtocolFlags_m6004_MethodInfo);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)-1073741824)))) == ((uint32_t)((int32_t)-1073741824)))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		Context_t1305 * L_9 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Context_set_SecurityProtocol_m6003(L_9, L_10, /*hidden argument*/&Context_set_SecurityProtocol_m6003_MethodInfo);
		Context_t1305 * L_11 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_11);
		CipherSuiteCollection_t1307 * L_12 = Context_get_SupportedCiphers_m6020(L_11, /*hidden argument*/&Context_get_SupportedCiphers_m6020_MethodInfo);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(&CipherSuiteCollection_Clear_m5959_MethodInfo, L_12);
		Context_t1305 * L_13 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_13);
		Context_set_SupportedCiphers_m6021(L_13, (CipherSuiteCollection_t1307 *)NULL, /*hidden argument*/&Context_set_SupportedCiphers_m6021_MethodInfo);
		Context_t1305 * L_14 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		int32_t L_15 = V_0;
		CipherSuiteCollection_t1307 * L_16 = CipherSuiteFactory_GetSupportedCiphers_m5966(NULL /*static, unused*/, L_15, /*hidden argument*/&CipherSuiteFactory_GetSupportedCiphers_m5966_MethodInfo);
		NullCheck(L_14);
		Context_set_SupportedCiphers_m6021(L_14, L_16, /*hidden argument*/&Context_set_SupportedCiphers_m6021_MethodInfo);
		goto IL_0086;
	}

IL_0079:
	{
		TlsException_t1347 * L_17 = (TlsException_t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1347_il2cpp_TypeInfo));
		TlsException__ctor_m6263(L_17, ((int32_t)70), (String_t*) &_stringLiteral984, /*hidden argument*/&TlsException__ctor_m6263_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0086:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHelloDone_t1360_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHelloDone__ctor_m6365_MethodInfo;
extern "C" void TlsServerHelloDone__ctor_m6365 (TlsServerHelloDone_t1360 * __this, Context_t1305 * ___context, ByteU5BU5D_t66* ___buffer, MethodInfo* method)
{
	{
		Context_t1305 * L_0 = ___context;
		ByteU5BU5D_t66* L_1 = ___buffer;
		HandshakeMessage__ctor_m6307(__this, L_0, ((int32_t)14), L_1, /*hidden argument*/&HandshakeMessage__ctor_m6307_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern MethodInfo TlsServerHelloDone_ProcessAsSsl3_m6366_MethodInfo;
extern "C" void TlsServerHelloDone_ProcessAsSsl3_m6366 (TlsServerHelloDone_t1360 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern MethodInfo TlsServerHelloDone_ProcessAsTls1_m6367_MethodInfo;
extern "C" void TlsServerHelloDone_ProcessAsTls1_m6367 (TlsServerHelloDone_t1360 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerKeyExchange_t1361_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9MethodDeclarations.h"

// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
extern TypeInfo RSAParameters_t1198_il2cpp_TypeInfo;
extern MethodInfo TlsServerKeyExchange_verifySignature_m6372_MethodInfo;
extern MethodInfo TlsServerSettings_set_ServerKeyExchange_m6267_MethodInfo;
extern MethodInfo TlsServerSettings_set_RsaParameters_m6272_MethodInfo;
extern MethodInfo TlsServerSettings_set_SignedParams_m6273_MethodInfo;
extern MethodInfo TlsServerKeyExchange_ProcessAsTls1_m6371_MethodInfo;
extern MethodInfo TlsStream__ctor_m6279_MethodInfo;
extern MethodInfo Context_get_RandomCS_m6031_MethodInfo;
extern MethodInfo TlsStream_Write_m6297_MethodInfo;
extern MethodInfo TlsStream_Write_m6304_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m5410_MethodInfo;
extern MethodInfo TlsStream_Reset_m6298_MethodInfo;
extern MethodInfo TlsServerSettings_get_CertificateRSA_m6270_MethodInfo;
extern MethodInfo MD5SHA1_VerifySignature_m5898_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerKeyExchange__ctor_m6368_MethodInfo;
extern "C" void TlsServerKeyExchange__ctor_m6368 (TlsServerKeyExchange_t1361 * __this, Context_t1305 * ___context, ByteU5BU5D_t66* ___buffer, MethodInfo* method)
{
	{
		Context_t1305 * L_0 = ___context;
		ByteU5BU5D_t66* L_1 = ___buffer;
		HandshakeMessage__ctor_m6307(__this, L_0, ((int32_t)12), L_1, /*hidden argument*/&HandshakeMessage__ctor_m6307_MethodInfo);
		TlsServerKeyExchange_verifySignature_m6372(__this, /*hidden argument*/&TlsServerKeyExchange_verifySignature_m6372_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
extern MethodInfo TlsServerKeyExchange_Update_m6369_MethodInfo;
extern "C" void TlsServerKeyExchange_Update_m6369 (TlsServerKeyExchange_t1361 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m6312(__this, /*hidden argument*/&HandshakeMessage_Update_m6312_MethodInfo);
		Context_t1305 * L_0 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1321 * L_1 = Context_get_ServerSettings_m6010(L_0, /*hidden argument*/&Context_get_ServerSettings_m6010_MethodInfo);
		NullCheck(L_1);
		TlsServerSettings_set_ServerKeyExchange_m6267(L_1, 1, /*hidden argument*/&TlsServerSettings_set_ServerKeyExchange_m6267_MethodInfo);
		Context_t1305 * L_2 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_2);
		TlsServerSettings_t1321 * L_3 = Context_get_ServerSettings_m6010(L_2, /*hidden argument*/&Context_get_ServerSettings_m6010_MethodInfo);
		RSAParameters_t1198  L_4 = (__this->___rsaParams_9);
		NullCheck(L_3);
		TlsServerSettings_set_RsaParameters_m6272(L_3, L_4, /*hidden argument*/&TlsServerSettings_set_RsaParameters_m6272_MethodInfo);
		Context_t1305 * L_5 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_5);
		TlsServerSettings_t1321 * L_6 = Context_get_ServerSettings_m6010(L_5, /*hidden argument*/&Context_get_ServerSettings_m6010_MethodInfo);
		ByteU5BU5D_t66* L_7 = (__this->___signedParams_10);
		NullCheck(L_6);
		TlsServerSettings_set_SignedParams_m6273(L_6, L_7, /*hidden argument*/&TlsServerSettings_set_SignedParams_m6273_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
extern MethodInfo TlsServerKeyExchange_ProcessAsSsl3_m6370_MethodInfo;
extern "C" void TlsServerKeyExchange_ProcessAsSsl3_m6370 (TlsServerKeyExchange_t1361 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerKeyExchange_ProcessAsTls1_m6371_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
extern "C" void TlsServerKeyExchange_ProcessAsTls1_m6371 (TlsServerKeyExchange_t1361 * __this, MethodInfo* method)
{
	RSAParameters_t1198  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&RSAParameters_t1198_il2cpp_TypeInfo), (&V_0));
		RSAParameters_t1198  L_0 = V_0;
		__this->___rsaParams_9 = L_0;
		RSAParameters_t1198 * L_1 = &(__this->___rsaParams_9);
		int16_t L_2 = TlsStream_ReadInt16_m6290(__this, /*hidden argument*/&TlsStream_ReadInt16_m6290_MethodInfo);
		ByteU5BU5D_t66* L_3 = TlsStream_ReadBytes_m6292(__this, L_2, /*hidden argument*/&TlsStream_ReadBytes_m6292_MethodInfo);
		L_1->___Modulus_6 = L_3;
		RSAParameters_t1198 * L_4 = &(__this->___rsaParams_9);
		int16_t L_5 = TlsStream_ReadInt16_m6290(__this, /*hidden argument*/&TlsStream_ReadInt16_m6290_MethodInfo);
		ByteU5BU5D_t66* L_6 = TlsStream_ReadBytes_m6292(__this, L_5, /*hidden argument*/&TlsStream_ReadBytes_m6292_MethodInfo);
		L_4->___Exponent_7 = L_6;
		int16_t L_7 = TlsStream_ReadInt16_m6290(__this, /*hidden argument*/&TlsStream_ReadInt16_m6290_MethodInfo);
		ByteU5BU5D_t66* L_8 = TlsStream_ReadBytes_m6292(__this, L_7, /*hidden argument*/&TlsStream_ReadBytes_m6292_MethodInfo);
		__this->___signedParams_10 = L_8;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
extern "C" void TlsServerKeyExchange_verifySignature_m6372 (TlsServerKeyExchange_t1361 * __this, MethodInfo* method)
{
	MD5SHA1_t1300 * V_0 = {0};
	int32_t V_1 = 0;
	TlsStream_t1317 * V_2 = {0};
	bool V_3 = false;
	{
		MD5SHA1_t1300 * L_0 = (MD5SHA1_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t1300_il2cpp_TypeInfo));
		MD5SHA1__ctor_m5893(L_0, /*hidden argument*/&MD5SHA1__ctor_m5893_MethodInfo);
		V_0 = L_0;
		RSAParameters_t1198 * L_1 = &(__this->___rsaParams_9);
		ByteU5BU5D_t66* L_2 = (L_1->___Modulus_6);
		NullCheck(L_2);
		RSAParameters_t1198 * L_3 = &(__this->___rsaParams_9);
		ByteU5BU5D_t66* L_4 = (L_3->___Exponent_7);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))+(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))))+(int32_t)4));
		TlsStream_t1317 * L_5 = (TlsStream_t1317 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsStream_t1317_il2cpp_TypeInfo));
		TlsStream__ctor_m6279(L_5, /*hidden argument*/&TlsStream__ctor_m6279_MethodInfo);
		V_2 = L_5;
		TlsStream_t1317 * L_6 = V_2;
		Context_t1305 * L_7 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_7);
		ByteU5BU5D_t66* L_8 = Context_get_RandomCS_m6031(L_7, /*hidden argument*/&Context_get_RandomCS_m6031_MethodInfo);
		NullCheck(L_6);
		TlsStream_Write_m6297(L_6, L_8, /*hidden argument*/&TlsStream_Write_m6297_MethodInfo);
		TlsStream_t1317 * L_9 = V_2;
		ByteU5BU5D_t66* L_10 = TlsStream_ToArray_m6299(__this, /*hidden argument*/&TlsStream_ToArray_m6299_MethodInfo);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_t66*, int32_t, int32_t >::Invoke(&TlsStream_Write_m6304_MethodInfo, L_9, L_10, 0, L_11);
		MD5SHA1_t1300 * L_12 = V_0;
		TlsStream_t1317 * L_13 = V_2;
		NullCheck(L_13);
		ByteU5BU5D_t66* L_14 = TlsStream_ToArray_m6299(L_13, /*hidden argument*/&TlsStream_ToArray_m6299_MethodInfo);
		NullCheck(L_12);
		HashAlgorithm_ComputeHash_m5410(L_12, L_14, /*hidden argument*/&HashAlgorithm_ComputeHash_m5410_MethodInfo);
		TlsStream_t1317 * L_15 = V_2;
		NullCheck(L_15);
		TlsStream_Reset_m6298(L_15, /*hidden argument*/&TlsStream_Reset_m6298_MethodInfo);
		MD5SHA1_t1300 * L_16 = V_0;
		Context_t1305 * L_17 = HandshakeMessage_get_Context_m6308(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6308_MethodInfo);
		NullCheck(L_17);
		TlsServerSettings_t1321 * L_18 = Context_get_ServerSettings_m6010(L_17, /*hidden argument*/&Context_get_ServerSettings_m6010_MethodInfo);
		NullCheck(L_18);
		RSA_t1066 * L_19 = TlsServerSettings_get_CertificateRSA_m6270(L_18, /*hidden argument*/&TlsServerSettings_get_CertificateRSA_m6270_MethodInfo);
		ByteU5BU5D_t66* L_20 = (__this->___signedParams_10);
		NullCheck(L_16);
		bool L_21 = MD5SHA1_VerifySignature_m5898(L_16, L_19, L_20, /*hidden argument*/&MD5SHA1_VerifySignature_m5898_MethodInfo);
		V_3 = L_21;
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		TlsException_t1347 * L_23 = (TlsException_t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1347_il2cpp_TypeInfo));
		TlsException__ctor_m6263(L_23, ((int32_t)50), (String_t*) &_stringLiteral1040, /*hidden argument*/&TlsException__ctor_m6263_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_008c:
	{
		return;
	}
}
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrimalityTest_t1262_il2cpp_TypeInfo;
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrimalityTest__ctor_m6373_MethodInfo;
extern "C" void PrimalityTest__ctor_m6373 (PrimalityTest_t1262 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern MethodInfo PrimalityTest_Invoke_m6374_MethodInfo;
extern "C" bool PrimalityTest_Invoke_m6374 (PrimalityTest_t1262 * __this, BigInteger_t1253 * ___bi, int32_t ___confidence, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m6374((PrimalityTest_t1262 *)__this->___prev_9,___bi, ___confidence, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t1253 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t1253 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t1262(Il2CppObject* delegate, BigInteger_t1253 * ___bi, int32_t ___confidence)
{
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t1253 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern MethodInfo PrimalityTest_BeginInvoke_m6375_MethodInfo;
extern "C" Object_t * PrimalityTest_BeginInvoke_m6375 (PrimalityTest_t1262 * __this, BigInteger_t1253 * ___bi, int32_t ___confidence, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(InitializedTypeInfo(&ConfidenceFactor_t1259_il2cpp_TypeInfo), &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern MethodInfo PrimalityTest_EndInvoke_m6376_MethodInfo;
extern "C" bool PrimalityTest_EndInvoke_m6376 (PrimalityTest_t1262 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback_t1342_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidatiMethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback__ctor_m6377_MethodInfo;
extern "C" void CertificateValidationCallback__ctor_m6377 (CertificateValidationCallback_t1342 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern MethodInfo CertificateValidationCallback_Invoke_m6378_MethodInfo;
extern "C" bool CertificateValidationCallback_Invoke_m6378 (CertificateValidationCallback_t1342 * __this, X509Certificate_t1032 * ___certificate, Int32U5BU5D_t109* ___certificateErrors, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback_Invoke_m6378((CertificateValidationCallback_t1342 *)__this->___prev_9,___certificate, ___certificateErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1032 * ___certificate, Int32U5BU5D_t109* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t1032 * ___certificate, Int32U5BU5D_t109* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Int32U5BU5D_t109* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t1342(Il2CppObject* delegate, X509Certificate_t1032 * ___certificate, Int32U5BU5D_t109* ___certificateErrors)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1032 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback_BeginInvoke_m6379_MethodInfo;
extern "C" Object_t * CertificateValidationCallback_BeginInvoke_m6379 (CertificateValidationCallback_t1342 * __this, X509Certificate_t1032 * ___certificate, Int32U5BU5D_t109* ___certificateErrors, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___certificateErrors;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback_EndInvoke_m6380_MethodInfo;
extern "C" bool CertificateValidationCallback_EndInvoke_m6380 (CertificateValidationCallback_t1342 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback2_t1343_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback2__ctor_m6381_MethodInfo;
extern "C" void CertificateValidationCallback2__ctor_m6381 (CertificateValidationCallback2_t1343 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern MethodInfo CertificateValidationCallback2_Invoke_m6382_MethodInfo;
extern "C" ValidationResult_t1341 * CertificateValidationCallback2_Invoke_m6382 (CertificateValidationCallback2_t1343 * __this, X509CertificateCollection_t1206 * ___collection, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback2_Invoke_m6382((CertificateValidationCallback2_t1343 *)__this->___prev_9,___collection, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef ValidationResult_t1341 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t1206 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef ValidationResult_t1341 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t1206 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef ValidationResult_t1341 * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" ValidationResult_t1341 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t1343(Il2CppObject* delegate, X509CertificateCollection_t1206 * ___collection)
{
	// Marshaling of parameter '___collection' to native representation
	X509CertificateCollection_t1206 * ____collection_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.X509.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback2_BeginInvoke_m6383_MethodInfo;
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m6383 (CertificateValidationCallback2_t1343 * __this, X509CertificateCollection_t1206 * ___collection, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___collection;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback2_EndInvoke_m6384_MethodInfo;
extern "C" ValidationResult_t1341 * CertificateValidationCallback2_EndInvoke_m6384 (CertificateValidationCallback2_t1343 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (ValidationResult_t1341 *)__result;
}
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectio.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateSelectionCallback_t1327_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectioMethodDeclarations.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System_System_Security_Cryptography_X509Certificates_X509Cer_1.h"


// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateSelectionCallback__ctor_m6385_MethodInfo;
extern "C" void CertificateSelectionCallback__ctor_m6385 (CertificateSelectionCallback_t1327 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern MethodInfo CertificateSelectionCallback_Invoke_m6386_MethodInfo;
extern "C" X509Certificate_t1032 * CertificateSelectionCallback_Invoke_m6386 (CertificateSelectionCallback_t1327 * __this, X509CertificateCollection_t1045 * ___clientCertificates, X509Certificate_t1032 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1045 * ___serverRequestedCertificates, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateSelectionCallback_Invoke_m6386((CertificateSelectionCallback_t1327 *)__this->___prev_9,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef X509Certificate_t1032 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t1045 * ___clientCertificates, X509Certificate_t1032 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1045 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef X509Certificate_t1032 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t1045 * ___clientCertificates, X509Certificate_t1032 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1045 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef X509Certificate_t1032 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1032 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1045 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" X509Certificate_t1032 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t1327(Il2CppObject* delegate, X509CertificateCollection_t1045 * ___clientCertificates, X509Certificate_t1032 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1045 * ___serverRequestedCertificates)
{
	// Marshaling of parameter '___clientCertificates' to native representation
	X509CertificateCollection_t1045 * ____clientCertificates_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateSelectionCallback_BeginInvoke_m6387_MethodInfo;
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m6387 (CertificateSelectionCallback_t1327 * __this, X509CertificateCollection_t1045 * ___clientCertificates, X509Certificate_t1032 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1045 * ___serverRequestedCertificates, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___clientCertificates;
	__d_args[1] = ___serverCertificate;
	__d_args[2] = ___targetHost;
	__d_args[3] = ___serverRequestedCertificates;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateSelectionCallback_EndInvoke_m6388_MethodInfo;
extern "C" X509Certificate_t1032 * CertificateSelectionCallback_EndInvoke_m6388 (CertificateSelectionCallback_t1327 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t1032 *)__result;
}
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelection.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrivateKeySelectionCallback_t1328_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelectionMethodDeclarations.h"

// System.Security.Cryptography.AsymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h"


// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrivateKeySelectionCallback__ctor_m6389_MethodInfo;
extern "C" void PrivateKeySelectionCallback__ctor_m6389 (PrivateKeySelectionCallback_t1328 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern MethodInfo PrivateKeySelectionCallback_Invoke_m6390_MethodInfo;
extern "C" AsymmetricAlgorithm_t1060 * PrivateKeySelectionCallback_Invoke_m6390 (PrivateKeySelectionCallback_t1328 * __this, X509Certificate_t1032 * ___certificate, String_t* ___targetHost, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrivateKeySelectionCallback_Invoke_m6390((PrivateKeySelectionCallback_t1328 *)__this->___prev_9,___certificate, ___targetHost, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1060 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1032 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1060 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1032 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef AsymmetricAlgorithm_t1060 * (*FunctionPointerType) (Object_t * __this, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" AsymmetricAlgorithm_t1060 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t1328(Il2CppObject* delegate, X509Certificate_t1032 * ___certificate, String_t* ___targetHost)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1032 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern MethodInfo PrivateKeySelectionCallback_BeginInvoke_m6391_MethodInfo;
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m6391 (PrivateKeySelectionCallback_t1328 * __this, X509Certificate_t1032 * ___certificate, String_t* ___targetHost, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___targetHost;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PrivateKeySelectionCallback_EndInvoke_m6392_MethodInfo;
extern "C" AsymmetricAlgorithm_t1060 * PrivateKeySelectionCallback_EndInvoke_m6392 (PrivateKeySelectionCallback_t1328 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (AsymmetricAlgorithm_t1060 *)__result;
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$3132_t1362_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t1362_marshal(const $ArrayType$3132_t1362& unmarshaled, $ArrayType$3132_t1362_marshaled& marshaled)
{
}
void $ArrayType$3132_t1362_marshal_back(const $ArrayType$3132_t1362_marshaled& marshaled, $ArrayType$3132_t1362& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t1362_marshal_cleanup($ArrayType$3132_t1362_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$256_t1363_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t1363_marshal(const $ArrayType$256_t1363& unmarshaled, $ArrayType$256_t1363_marshaled& marshaled)
{
}
void $ArrayType$256_t1363_marshal_back(const $ArrayType$256_t1363_marshaled& marshaled, $ArrayType$256_t1363& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t1363_marshal_cleanup($ArrayType$256_t1363_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$20_t1364_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t1364_marshal(const $ArrayType$20_t1364& unmarshaled, $ArrayType$20_t1364_marshaled& marshaled)
{
}
void $ArrayType$20_t1364_marshal_back(const $ArrayType$20_t1364_marshaled& marshaled, $ArrayType$20_t1364& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t1364_marshal_cleanup($ArrayType$20_t1364_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$32_t1365_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t1365_marshal(const $ArrayType$32_t1365& unmarshaled, $ArrayType$32_t1365_marshaled& marshaled)
{
}
void $ArrayType$32_t1365_marshal_back(const $ArrayType$32_t1365_marshaled& marshaled, $ArrayType$32_t1365& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t1365_marshal_cleanup($ArrayType$32_t1365_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$48_t1366_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t1366_marshal(const $ArrayType$48_t1366& unmarshaled, $ArrayType$48_t1366_marshaled& marshaled)
{
}
void $ArrayType$48_t1366_marshal_back(const $ArrayType$48_t1366_marshaled& marshaled, $ArrayType$48_t1366& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t1366_marshal_cleanup($ArrayType$48_t1366_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$64_t1367_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t1367_marshal(const $ArrayType$64_t1367& unmarshaled, $ArrayType$64_t1367_marshaled& marshaled)
{
}
void $ArrayType$64_t1367_marshal_back(const $ArrayType$64_t1367_marshaled& marshaled, $ArrayType$64_t1367& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t1367_marshal_cleanup($ArrayType$64_t1367_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$12_t1368_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1368_marshal(const $ArrayType$12_t1368& unmarshaled, $ArrayType$12_t1368_marshaled& marshaled)
{
}
void $ArrayType$12_t1368_marshal_back(const $ArrayType$12_t1368_marshaled& marshaled, $ArrayType$12_t1368& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1368_marshal_cleanup($ArrayType$12_t1368_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$16_t1369_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t1369_marshal(const $ArrayType$16_t1369& unmarshaled, $ArrayType$16_t1369_marshaled& marshaled)
{
}
void $ArrayType$16_t1369_marshal_back(const $ArrayType$16_t1369_marshaled& marshaled, $ArrayType$16_t1369& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t1369_marshal_cleanup($ArrayType$16_t1369_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$4_t1370_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t1370_marshal(const $ArrayType$4_t1370& unmarshaled, $ArrayType$4_t1370_marshaled& marshaled)
{
}
void $ArrayType$4_t1370_marshal_back(const $ArrayType$4_t1370_marshaled& marshaled, $ArrayType$4_t1370& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t1370_marshal_cleanup($ArrayType$4_t1370_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif
