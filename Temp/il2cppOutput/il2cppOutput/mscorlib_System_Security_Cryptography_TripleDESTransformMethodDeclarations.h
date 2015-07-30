#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t1805;
// System.Security.Cryptography.TripleDES
struct TripleDES_t1388;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
extern "C" void TripleDESTransform__ctor_m9754 (TripleDESTransform_t1805 * __this, TripleDES_t1388 * ___algo, bool ___encryption, ByteU5BU5D_t66* ___key, ByteU5BU5D_t66* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void TripleDESTransform_ECB_m9755 (TripleDESTransform_t1805 * __this, ByteU5BU5D_t66* ___input, ByteU5BU5D_t66* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t66* TripleDESTransform_GetStrongKey_m9756 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
