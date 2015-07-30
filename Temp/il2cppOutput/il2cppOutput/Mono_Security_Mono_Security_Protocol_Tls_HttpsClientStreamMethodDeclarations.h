#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t1329;
// System.IO.Stream
struct Stream_t1315;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1045;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1046;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1032;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1060;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m6059 (HttpsClientStream_t1329 * __this, Stream_t1315 * ___stream, X509CertificateCollection_t1045 * ___clientCertificates, HttpWebRequest_t1046 * ___request, ByteU5BU5D_t66* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m6060 (HttpsClientStream_t1329 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m6061 (HttpsClientStream_t1329 * __this, X509Certificate_t1032 * ___certificate, Int32U5BU5D_t109* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1032 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m6062 (Object_t * __this /* static, unused */, X509CertificateCollection_t1045 * ___clientCerts, X509Certificate_t1032 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1045 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1060 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m6063 (Object_t * __this /* static, unused */, X509Certificate_t1032 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
