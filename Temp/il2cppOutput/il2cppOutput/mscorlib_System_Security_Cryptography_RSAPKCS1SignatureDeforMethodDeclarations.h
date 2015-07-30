#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t1380;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1060;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m9633 (RSAPKCS1SignatureDeformatter_t1380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m6448 (RSAPKCS1SignatureDeformatter_t1380 * __this, AsymmetricAlgorithm_t1060 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m6449 (RSAPKCS1SignatureDeformatter_t1380 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter_SetKey_m9634 (RSAPKCS1SignatureDeformatter_t1380 * __this, AsymmetricAlgorithm_t1060 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSAPKCS1SignatureDeformatter_VerifySignature_m6450 (RSAPKCS1SignatureDeformatter_t1380 * __this, ByteU5BU5D_t66* ___rgbHash, ByteU5BU5D_t66* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
