#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1352;
// Mono.Security.Protocol.Tls.Context
struct Context_t1305;
// System.Security.Cryptography.RSA
struct RSA_t1066;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m6323 (TlsClientCertificateVerify_t1352 * __this, Context_t1305 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m6324 (TlsClientCertificateVerify_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m6325 (TlsClientCertificateVerify_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m6326 (TlsClientCertificateVerify_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C" RSA_t1066 * TlsClientCertificateVerify_getClientCertRSA_m6327 (TlsClientCertificateVerify_t1352 * __this, RSA_t1066 * ___privKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t66* TlsClientCertificateVerify_getUnsignedBigInteger_m6328 (TlsClientCertificateVerify_t1352 * __this, ByteU5BU5D_t66* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
