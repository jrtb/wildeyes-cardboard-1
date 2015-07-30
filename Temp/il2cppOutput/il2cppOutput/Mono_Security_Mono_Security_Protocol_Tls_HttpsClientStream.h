#pragma once
#include <stdint.h>
// System.Net.HttpWebRequest
struct HttpWebRequest_t1046;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1327;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1328;
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
// Mono.Security.Protocol.Tls.HttpsClientStream
struct  HttpsClientStream_t1329  : public SslClientStream_t1311
{
	// System.Net.HttpWebRequest Mono.Security.Protocol.Tls.HttpsClientStream::_request
	HttpWebRequest_t1046 * ____request_20;
	// System.Int32 Mono.Security.Protocol.Tls.HttpsClientStream::_status
	int32_t ____status_21;
};
struct HttpsClientStream_t1329_StaticFields{
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache2
	CertificateSelectionCallback_t1327 * ___U3CU3Ef__am$cache2_22;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache3
	PrivateKeySelectionCallback_t1328 * ___U3CU3Ef__am$cache3_23;
};
