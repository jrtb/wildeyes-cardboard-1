#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t1773;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1060;

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
extern "C" void DSASignatureFormatter__ctor_m9510 (DSASignatureFormatter_t1773 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t66* DSASignatureFormatter_CreateSignature_m9511 (DSASignatureFormatter_t1773 * __this, ByteU5BU5D_t66* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureFormatter_SetHashAlgorithm_m9512 (DSASignatureFormatter_t1773 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureFormatter_SetKey_m9513 (DSASignatureFormatter_t1773 * __this, AsymmetricAlgorithm_t1060 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
