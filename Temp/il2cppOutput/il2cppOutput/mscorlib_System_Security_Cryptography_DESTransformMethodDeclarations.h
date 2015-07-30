#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t1771;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1282;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.UInt32[]
struct UInt32U5BU5D_t1257;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m9478 (DESTransform_t1771 * __this, SymmetricAlgorithm_t1282 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t66* ___key, ByteU5BU5D_t66* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m9479 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m9480 (DESTransform_t1771 * __this, uint32_t ___r, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m9481 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___input, ByteU5BU5D_t66* ___output, UInt32U5BU5D_t1257* ___permTab, bool ___preSwap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m9482 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___byteBuff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m9483 (DESTransform_t1771 * __this, ByteU5BU5D_t66* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m9484 (DESTransform_t1771 * __this, ByteU5BU5D_t66* ___input, ByteU5BU5D_t66* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m9485 (DESTransform_t1771 * __this, ByteU5BU5D_t66* ___input, ByteU5BU5D_t66* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t66* DESTransform_GetStrongKey_m9486 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
