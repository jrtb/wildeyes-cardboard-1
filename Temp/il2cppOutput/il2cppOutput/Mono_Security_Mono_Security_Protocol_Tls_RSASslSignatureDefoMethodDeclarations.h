#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t1334;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1060;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter__ctor_m6115 (RSASslSignatureDeformatter_t1334 * __this, AsymmetricAlgorithm_t1060 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSASslSignatureDeformatter_VerifySignature_m6116 (RSASslSignatureDeformatter_t1334 * __this, ByteU5BU5D_t66* ___rgbHash, ByteU5BU5D_t66* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureDeformatter_SetHashAlgorithm_m6117 (RSASslSignatureDeformatter_t1334 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter_SetKey_m6118 (RSASslSignatureDeformatter_t1334 * __this, AsymmetricAlgorithm_t1060 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
