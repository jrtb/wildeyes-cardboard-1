#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_t1779;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Security.Cryptography.MACTripleDES::.ctor()
extern "C" void MACTripleDES__ctor_m9550 (MACTripleDES_t1779 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Setup(System.String,System.Byte[])
extern "C" void MACTripleDES_Setup_m9551 (MACTripleDES_t1779 * __this, String_t* ___strTripleDES, ByteU5BU5D_t66* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Finalize()
extern "C" void MACTripleDES_Finalize_m9552 (MACTripleDES_t1779 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Dispose(System.Boolean)
extern "C" void MACTripleDES_Dispose_m9553 (MACTripleDES_t1779 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Initialize()
extern "C" void MACTripleDES_Initialize_m9554 (MACTripleDES_t1779 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MACTripleDES_HashCore_m9555 (MACTripleDES_t1779 * __this, ByteU5BU5D_t66* ___rgbData, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MACTripleDES::HashFinal()
extern "C" ByteU5BU5D_t66* MACTripleDES_HashFinal_m9556 (MACTripleDES_t1779 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
