#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t1300;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.RSA
struct RSA_t1066;

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
extern "C" void MD5SHA1__ctor_m5893 (MD5SHA1_t1300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
extern "C" void MD5SHA1_Initialize_m5894 (MD5SHA1_t1300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
extern "C" ByteU5BU5D_t66* MD5SHA1_HashFinal_m5895 (MD5SHA1_t1300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MD5SHA1_HashCore_m5896 (MD5SHA1_t1300 * __this, ByteU5BU5D_t66* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t66* MD5SHA1_CreateSignature_m5897 (MD5SHA1_t1300 * __this, RSA_t1066 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C" bool MD5SHA1_VerifySignature_m5898 (MD5SHA1_t1300 * __this, RSA_t1066 * ___rsa, ByteU5BU5D_t66* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
