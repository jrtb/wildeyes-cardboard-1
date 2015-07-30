#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t1793;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
extern "C" void SHA256Managed__ctor_m9687 (SHA256Managed_t1793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA256Managed_HashCore_m9688 (SHA256Managed_t1793 * __this, ByteU5BU5D_t66* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA256Managed::HashFinal()
extern "C" ByteU5BU5D_t66* SHA256Managed_HashFinal_m9689 (SHA256Managed_t1793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::Initialize()
extern "C" void SHA256Managed_Initialize_m9690 (SHA256Managed_t1793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessBlock(System.Byte[],System.Int32)
extern "C" void SHA256Managed_ProcessBlock_m9691 (SHA256Managed_t1793 * __this, ByteU5BU5D_t66* ___inputBuffer, int32_t ___inputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA256Managed_ProcessFinalBlock_m9692 (SHA256Managed_t1793 * __this, ByteU5BU5D_t66* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C" void SHA256Managed_AddLength_m9693 (SHA256Managed_t1793 * __this, uint64_t ___length, ByteU5BU5D_t66* ___buffer, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
