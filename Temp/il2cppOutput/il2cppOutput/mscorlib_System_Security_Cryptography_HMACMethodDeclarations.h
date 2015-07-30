#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.HMAC
struct HMAC_t1378;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1465;

// System.Void System.Security.Cryptography.HMAC::.ctor()
extern "C" void HMAC__ctor_m9514 (HMAC_t1378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HMAC::get_BlockSizeValue()
extern "C" int32_t HMAC_get_BlockSizeValue_m9515 (HMAC_t1378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_BlockSizeValue(System.Int32)
extern "C" void HMAC_set_BlockSizeValue_m9516 (HMAC_t1378 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_HashName(System.String)
extern "C" void HMAC_set_HashName_m9517 (HMAC_t1378 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::get_Key()
extern "C" ByteU5BU5D_t66* HMAC_get_Key_m9518 (HMAC_t1378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C" void HMAC_set_Key_m6438 (HMAC_t1378 * __this, ByteU5BU5D_t66* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::get_Block()
extern "C" BlockProcessor_t1465 * HMAC_get_Block_m9519 (HMAC_t1378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::KeySetup(System.Byte[],System.Byte)
extern "C" ByteU5BU5D_t66* HMAC_KeySetup_m9520 (HMAC_t1378 * __this, ByteU5BU5D_t66* ___key, uint8_t ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Dispose(System.Boolean)
extern "C" void HMAC_Dispose_m9521 (HMAC_t1378 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void HMAC_HashCore_m9522 (HMAC_t1378 * __this, ByteU5BU5D_t66* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::HashFinal()
extern "C" ByteU5BU5D_t66* HMAC_HashFinal_m9523 (HMAC_t1378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Initialize()
extern "C" void HMAC_Initialize_m9524 (HMAC_t1378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create()
extern "C" HMAC_t1378 * HMAC_Create_m6437 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create(System.String)
extern "C" HMAC_t1378 * HMAC_Create_m9525 (Object_t * __this /* static, unused */, String_t* ___algorithmName, MethodInfo* method) IL2CPP_METHOD_ATTR;
