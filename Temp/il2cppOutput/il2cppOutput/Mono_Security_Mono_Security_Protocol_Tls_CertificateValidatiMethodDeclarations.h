#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1342;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1032;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback__ctor_m6377 (CertificateValidationCallback_t1342 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool CertificateValidationCallback_Invoke_m6378 (CertificateValidationCallback_t1342 * __this, X509Certificate_t1032 * ___certificate, Int32U5BU5D_t109* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern TypeInfo Int32_t60_il2cpp_TypeInfo;
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t1342(Il2CppObject* delegate, X509Certificate_t1032 * ___certificate, Int32U5BU5D_t109* ___certificateErrors);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback_BeginInvoke_m6379 (CertificateValidationCallback_t1342 * __this, X509Certificate_t1032 * ___certificate, Int32U5BU5D_t109* ___certificateErrors, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool CertificateValidationCallback_EndInvoke_m6380 (CertificateValidationCallback_t1342 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
