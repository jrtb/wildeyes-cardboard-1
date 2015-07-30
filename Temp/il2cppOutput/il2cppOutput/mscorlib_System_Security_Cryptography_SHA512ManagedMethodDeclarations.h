#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA512Managed
struct SHA512Managed_t1798;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Security.Cryptography.SHA512Managed::.ctor()
extern "C" void SHA512Managed__ctor_m9707 (SHA512Managed_t1798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize(System.Boolean)
extern "C" void SHA512Managed_Initialize_m9708 (SHA512Managed_t1798 * __this, bool ___reuse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize()
extern "C" void SHA512Managed_Initialize_m9709 (SHA512Managed_t1798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA512Managed_HashCore_m9710 (SHA512Managed_t1798 * __this, ByteU5BU5D_t66* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA512Managed::HashFinal()
extern "C" ByteU5BU5D_t66* SHA512Managed_HashFinal_m9711 (SHA512Managed_t1798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::update(System.Byte)
extern "C" void SHA512Managed_update_m9712 (SHA512Managed_t1798 * __this, uint8_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processWord(System.Byte[],System.Int32)
extern "C" void SHA512Managed_processWord_m9713 (SHA512Managed_t1798 * __this, ByteU5BU5D_t66* ___input, int32_t ___inOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::unpackWord(System.UInt64,System.Byte[],System.Int32)
extern "C" void SHA512Managed_unpackWord_m9714 (SHA512Managed_t1798 * __this, uint64_t ___word, ByteU5BU5D_t66* ___output, int32_t ___outOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::adjustByteCounts()
extern "C" void SHA512Managed_adjustByteCounts_m9715 (SHA512Managed_t1798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processLength(System.UInt64,System.UInt64)
extern "C" void SHA512Managed_processLength_m9716 (SHA512Managed_t1798 * __this, uint64_t ___lowW, uint64_t ___hiW, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processBlock()
extern "C" void SHA512Managed_processBlock_m9717 (SHA512Managed_t1798 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::rotateRight(System.UInt64,System.Int32)
extern "C" uint64_t SHA512Managed_rotateRight_m9718 (SHA512Managed_t1798 * __this, uint64_t ___x, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Ch(System.UInt64,System.UInt64,System.UInt64)
extern "C" uint64_t SHA512Managed_Ch_m9719 (SHA512Managed_t1798 * __this, uint64_t ___x, uint64_t ___y, uint64_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Maj(System.UInt64,System.UInt64,System.UInt64)
extern "C" uint64_t SHA512Managed_Maj_m9720 (SHA512Managed_t1798 * __this, uint64_t ___x, uint64_t ___y, uint64_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum0(System.UInt64)
extern "C" uint64_t SHA512Managed_Sum0_m9721 (SHA512Managed_t1798 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum1(System.UInt64)
extern "C" uint64_t SHA512Managed_Sum1_m9722 (SHA512Managed_t1798 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma0(System.UInt64)
extern "C" uint64_t SHA512Managed_Sigma0_m9723 (SHA512Managed_t1798 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma1(System.UInt64)
extern "C" uint64_t SHA512Managed_Sigma1_m9724 (SHA512Managed_t1798 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
