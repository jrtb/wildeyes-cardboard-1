﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDES
struct TripleDES_t1388;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.TripleDES::.ctor()
extern "C" void TripleDES__ctor_m9744 (TripleDES_t1388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDES::get_Key()
extern "C" ByteU5BU5D_t66* TripleDES_get_Key_m9745 (TripleDES_t1388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDES::set_Key(System.Byte[])
extern "C" void TripleDES_set_Key_m9746 (TripleDES_t1388 * __this, ByteU5BU5D_t66* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.TripleDES::IsWeakKey(System.Byte[])
extern "C" bool TripleDES_IsWeakKey_m9747 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create()
extern "C" TripleDES_t1388 * TripleDES_Create_m6471 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create(System.String)
extern "C" TripleDES_t1388 * TripleDES_Create_m9748 (Object_t * __this /* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
