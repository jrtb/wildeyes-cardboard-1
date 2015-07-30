#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t1772;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1271;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
extern "C" void DESCryptoServiceProvider__ctor_m9487 (DESCryptoServiceProvider_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateDecryptor_m9488 (DESCryptoServiceProvider_t1772 * __this, ByteU5BU5D_t66* ___rgbKey, ByteU5BU5D_t66* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateEncryptor_m9489 (DESCryptoServiceProvider_t1772 * __this, ByteU5BU5D_t66* ___rgbKey, ByteU5BU5D_t66* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
extern "C" void DESCryptoServiceProvider_GenerateIV_m9490 (DESCryptoServiceProvider_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
extern "C" void DESCryptoServiceProvider_GenerateKey_m9491 (DESCryptoServiceProvider_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
