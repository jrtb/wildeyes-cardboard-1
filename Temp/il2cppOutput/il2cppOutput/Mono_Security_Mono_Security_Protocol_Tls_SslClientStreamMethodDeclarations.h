#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t1311;
// System.IO.Stream
struct Stream_t1315;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1045;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1032;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1342;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1327;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1328;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1343;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1341;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1206;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1060;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
extern "C" void SslClientStream__ctor_m6133 (SslClientStream_t1311 * __this, Stream_t1315 * ___stream, String_t* ___targetHost, bool ___ownsStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void SslClientStream__ctor_m6134 (SslClientStream_t1311 * __this, Stream_t1315 * ___stream, String_t* ___targetHost, X509Certificate_t1032 * ___clientCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void SslClientStream__ctor_m6135 (SslClientStream_t1311 * __this, Stream_t1315 * ___stream, String_t* ___targetHost, X509CertificateCollection_t1045 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void SslClientStream__ctor_m6136 (SslClientStream_t1311 * __this, Stream_t1315 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void SslClientStream__ctor_m6137 (SslClientStream_t1311 * __this, Stream_t1315 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, X509CertificateCollection_t1045 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_add_ServerCertValidation_m6138 (SslClientStream_t1311 * __this, CertificateValidationCallback_t1342 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_remove_ServerCertValidation_m6139 (SslClientStream_t1311 * __this, CertificateValidationCallback_t1342 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_add_ClientCertSelection_m6140 (SslClientStream_t1311 * __this, CertificateSelectionCallback_t1327 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_remove_ClientCertSelection_m6141 (SslClientStream_t1311 * __this, CertificateSelectionCallback_t1327 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_add_PrivateKeySelection_m6142 (SslClientStream_t1311 * __this, PrivateKeySelectionCallback_t1328 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_remove_PrivateKeySelection_m6143 (SslClientStream_t1311 * __this, PrivateKeySelectionCallback_t1328 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C" void SslClientStream_add_ServerCertValidation2_m6144 (SslClientStream_t1311 * __this, CertificateValidationCallback2_t1343 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C" void SslClientStream_remove_ServerCertValidation2_m6145 (SslClientStream_t1311 * __this, CertificateValidationCallback2_t1343 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
extern "C" Stream_t1315 * SslClientStream_get_InputBuffer_m6146 (SslClientStream_t1311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
extern "C" X509CertificateCollection_t1045 * SslClientStream_get_ClientCertificates_m6147 (SslClientStream_t1311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
extern "C" X509Certificate_t1032 * SslClientStream_get_SelectedClientCertificate_m6148 (SslClientStream_t1311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
extern "C" CertificateValidationCallback_t1342 * SslClientStream_get_ServerCertValidationDelegate_m6149 (SslClientStream_t1311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_set_ServerCertValidationDelegate_m6150 (SslClientStream_t1311 * __this, CertificateValidationCallback_t1342 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
extern "C" CertificateSelectionCallback_t1327 * SslClientStream_get_ClientCertSelectionDelegate_m6151 (SslClientStream_t1311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_set_ClientCertSelectionDelegate_m6152 (SslClientStream_t1311 * __this, CertificateSelectionCallback_t1327 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
extern "C" PrivateKeySelectionCallback_t1328 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m6153 (SslClientStream_t1311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_set_PrivateKeyCertSelectionDelegate_m6154 (SslClientStream_t1311 * __this, PrivateKeySelectionCallback_t1328 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
extern "C" void SslClientStream_Finalize_m6155 (SslClientStream_t1311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
extern "C" void SslClientStream_Dispose_m6156 (SslClientStream_t1311 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern "C" Object_t * SslClientStream_OnBeginNegotiateHandshake_m6157 (SslClientStream_t1311 * __this, AsyncCallback_t7 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
extern "C" void SslClientStream_SafeReceiveRecord_m6158 (SslClientStream_t1311 * __this, Stream_t1315 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern "C" void SslClientStream_OnNegotiateHandshakeCallback_m6159 (SslClientStream_t1311 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1032 * SslClientStream_OnLocalCertificateSelection_m6160 (SslClientStream_t1311 * __this, X509CertificateCollection_t1045 * ___clientCertificates, X509Certificate_t1032 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1045 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
extern "C" bool SslClientStream_get_HaveRemoteValidation2Callback_m6161 (SslClientStream_t1311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t1341 * SslClientStream_OnRemoteCertificateValidation2_m6162 (SslClientStream_t1311 * __this, X509CertificateCollection_t1206 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_OnRemoteCertificateValidation_m6163 (SslClientStream_t1311 * __this, X509Certificate_t1032 * ___certificate, Int32U5BU5D_t109* ___errors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_RaiseServerCertificateValidation_m6164 (SslClientStream_t1311 * __this, X509Certificate_t1032 * ___certificate, Int32U5BU5D_t109* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t1341 * SslClientStream_RaiseServerCertificateValidation2_m6165 (SslClientStream_t1311 * __this, X509CertificateCollection_t1206 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1032 * SslClientStream_RaiseClientCertificateSelection_m6166 (SslClientStream_t1311 * __this, X509CertificateCollection_t1045 * ___clientCertificates, X509Certificate_t1032 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1045 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1060 * SslClientStream_OnLocalPrivateKeySelection_m6167 (SslClientStream_t1311 * __this, X509Certificate_t1032 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1060 * SslClientStream_RaisePrivateKeySelection_m6168 (SslClientStream_t1311 * __this, X509Certificate_t1032 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
