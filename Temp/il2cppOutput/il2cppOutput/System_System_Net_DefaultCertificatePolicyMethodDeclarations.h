#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t1030;
// System.Net.ServicePoint
struct ServicePoint_t1031;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1032;
// System.Net.WebRequest
struct WebRequest_t1033;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m4412 (DefaultCertificatePolicy_t1030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m4413 (DefaultCertificatePolicy_t1030 * __this, ServicePoint_t1031 * ___point, X509Certificate_t1032 * ___certificate, WebRequest_t1033 * ___request, int32_t ___certificateProblem, MethodInfo* method) IL2CPP_METHOD_ATTR;
