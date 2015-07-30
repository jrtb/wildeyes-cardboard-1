#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t1792;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Security.Cryptography.SHA1Managed::.ctor()
extern "C" void SHA1Managed__ctor_m9681 (SHA1Managed_t1792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA1Managed_HashCore_m9682 (SHA1Managed_t1792 * __this, ByteU5BU5D_t66* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Managed::HashFinal()
extern "C" ByteU5BU5D_t66* SHA1Managed_HashFinal_m9683 (SHA1Managed_t1792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::Initialize()
extern "C" void SHA1Managed_Initialize_m9684 (SHA1Managed_t1792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
