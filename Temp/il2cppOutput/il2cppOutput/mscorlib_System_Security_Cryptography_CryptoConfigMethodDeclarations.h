﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CryptoConfig
struct CryptoConfig_t1205;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Security.Cryptography.CryptoConfig::.cctor()
extern "C" void CryptoConfig__cctor_m9459 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig::Initialize()
extern "C" void CryptoConfig_Initialize_m9460 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String)
extern "C" Object_t * CryptoConfig_CreateFromName_m5360 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String,System.Object[])
extern "C" Object_t * CryptoConfig_CreateFromName_m5397 (Object_t * __this /* static, unused */, String_t* ___name, ObjectU5BU5D_t76* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig::MapNameToOID(System.String)
extern "C" String_t* CryptoConfig_MapNameToOID_m6411 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
extern "C" ByteU5BU5D_t66* CryptoConfig_EncodeOID_m5364 (Object_t * __this /* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeLongNumber(System.Int64)
extern "C" ByteU5BU5D_t66* CryptoConfig_EncodeLongNumber_m9461 (Object_t * __this /* static, unused */, int64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
