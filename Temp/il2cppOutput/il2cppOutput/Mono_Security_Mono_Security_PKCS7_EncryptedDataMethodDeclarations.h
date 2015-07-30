#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1267;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1266;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.ASN1
struct ASN1_t1075;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m5680 (EncryptedData_t1267 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m5681 (EncryptedData_t1267 * __this, ASN1_t1075 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1266 * EncryptedData_get_EncryptionAlgorithm_m5682 (EncryptedData_t1267 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t66* EncryptedData_get_EncryptedContent_m5683 (EncryptedData_t1267 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
