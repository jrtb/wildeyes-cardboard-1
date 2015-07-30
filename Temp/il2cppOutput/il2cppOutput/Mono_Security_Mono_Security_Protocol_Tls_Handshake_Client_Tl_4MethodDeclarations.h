#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct TlsServerCertificate_t1356;
// Mono.Security.Protocol.Tls.Context
struct Context_t1305;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1064;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1206;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerCertificate__ctor_m6342 (TlsServerCertificate_t1356 * __this, Context_t1305 * ___context, ByteU5BU5D_t66* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern "C" void TlsServerCertificate_Update_m6343 (TlsServerCertificate_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern "C" void TlsServerCertificate_ProcessAsSsl3_m6344 (TlsServerCertificate_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern "C" void TlsServerCertificate_ProcessAsTls1_m6345 (TlsServerCertificate_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkCertificateUsage_m6346 (TlsServerCertificate_t1356 * __this, X509Certificate_t1064 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C" void TlsServerCertificate_validateCertificates_m6347 (TlsServerCertificate_t1356 * __this, X509CertificateCollection_t1206 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkServerIdentity_m6348 (TlsServerCertificate_t1356 * __this, X509Certificate_t1064 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern "C" bool TlsServerCertificate_checkDomainName_m6349 (TlsServerCertificate_t1356 * __this, String_t* ___subjectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern "C" bool TlsServerCertificate_Match_m6350 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
