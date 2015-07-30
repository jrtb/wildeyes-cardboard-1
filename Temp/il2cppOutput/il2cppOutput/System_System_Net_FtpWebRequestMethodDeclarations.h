#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpWebRequest
struct FtpWebRequest_t1040;
// System.Uri
struct Uri_t26;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1032;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1041;
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C" void FtpWebRequest__ctor_m4422 (FtpWebRequest_t1040 * __this, Uri_t26 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C" void FtpWebRequest__cctor_m4423 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool FtpWebRequest_U3CcallbackU3Em__B_m4424 (Object_t * __this /* static, unused */, Object_t * ___sender, X509Certificate_t1032 * ___certificate, X509Chain_t1041 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
