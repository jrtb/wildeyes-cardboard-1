#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1266;
// Mono.Security.ASN1
struct ASN1_t1075;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
extern "C" void ContentInfo__ctor_m5673 (ContentInfo_t1266 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
extern "C" void ContentInfo__ctor_m5674 (ContentInfo_t1266 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
extern "C" void ContentInfo__ctor_m5675 (ContentInfo_t1266 * __this, ByteU5BU5D_t66* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
extern "C" void ContentInfo__ctor_m5676 (ContentInfo_t1266 * __this, ASN1_t1075 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
extern "C" ASN1_t1075 * ContentInfo_get_Content_m5677 (ContentInfo_t1266 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
extern "C" void ContentInfo_set_Content_m5678 (ContentInfo_t1266 * __this, ASN1_t1075 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
extern "C" String_t* ContentInfo_get_ContentType_m5679 (ContentInfo_t1266 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
