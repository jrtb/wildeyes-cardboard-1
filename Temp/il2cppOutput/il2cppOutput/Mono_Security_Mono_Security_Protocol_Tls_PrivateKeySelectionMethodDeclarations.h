#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1328;
// System.Object
struct Object_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1060;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1032;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PrivateKeySelectionCallback__ctor_m6389 (PrivateKeySelectionCallback_t1328 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1060 * PrivateKeySelectionCallback_Invoke_m6390 (PrivateKeySelectionCallback_t1328 * __this, X509Certificate_t1032 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" AsymmetricAlgorithm_t1060 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t1328(Il2CppObject* delegate, X509Certificate_t1032 * ___certificate, String_t* ___targetHost);
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m6391 (PrivateKeySelectionCallback_t1328 * __this, X509Certificate_t1032 * ___certificate, String_t* ___targetHost, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" AsymmetricAlgorithm_t1060 * PrivateKeySelectionCallback_EndInvoke_m6392 (PrivateKeySelectionCallback_t1328 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
