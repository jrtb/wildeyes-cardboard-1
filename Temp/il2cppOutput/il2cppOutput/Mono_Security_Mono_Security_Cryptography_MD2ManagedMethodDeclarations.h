#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t1276;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void Mono.Security.Cryptography.MD2Managed::.ctor()
extern "C" void MD2Managed__ctor_m5704 (MD2Managed_t1276 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::.cctor()
extern "C" void MD2Managed__cctor_m5705 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::Padding(System.Int32)
extern "C" ByteU5BU5D_t66* MD2Managed_Padding_m5706 (MD2Managed_t1276 * __this, int32_t ___nLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::Initialize()
extern "C" void MD2Managed_Initialize_m5707 (MD2Managed_t1276 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MD2Managed_HashCore_m5708 (MD2Managed_t1276 * __this, ByteU5BU5D_t66* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::HashFinal()
extern "C" ByteU5BU5D_t66* MD2Managed_HashFinal_m5709 (MD2Managed_t1276 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::MD2Transform(System.Byte[],System.Byte[],System.Byte[],System.Int32)
extern "C" void MD2Managed_MD2Transform_m5710 (MD2Managed_t1276 * __this, ByteU5BU5D_t66* ___state, ByteU5BU5D_t66* ___checksum, ByteU5BU5D_t66* ___block, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
