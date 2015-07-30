#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t1787;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1271;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C" void RijndaelManaged__ctor_m9643 (RijndaelManaged_t1787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
extern "C" void RijndaelManaged_GenerateIV_m9644 (RijndaelManaged_t1787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
extern "C" void RijndaelManaged_GenerateKey_m9645 (RijndaelManaged_t1787 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateDecryptor_m9646 (RijndaelManaged_t1787 * __this, ByteU5BU5D_t66* ___rgbKey, ByteU5BU5D_t66* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateEncryptor_m9647 (RijndaelManaged_t1787 * __this, ByteU5BU5D_t66* ___rgbKey, ByteU5BU5D_t66* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
