﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1078;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1032;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1045;

// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void X509CertificateEnumerator__ctor_m4596 (X509CertificateEnumerator_t1078 * __this, X509CertificateCollection_t1045 * ___mappings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m4597 (X509CertificateEnumerator_t1078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern "C" bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m4598 (X509CertificateEnumerator_t1078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" X509Certificate_t1032 * X509CertificateEnumerator_get_Current_m4599 (X509CertificateEnumerator_t1078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" bool X509CertificateEnumerator_MoveNext_m4600 (X509CertificateEnumerator_t1078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
