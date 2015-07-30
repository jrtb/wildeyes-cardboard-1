#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1Convert
struct ASN1Convert_t1488;
// Mono.Security.ASN1
struct ASN1_t1477;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
extern "C" int32_t ASN1Convert_ToInt32_m7769 (Object_t * __this /* static, unused */, ASN1_t1477 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C" String_t* ASN1Convert_ToOid_m7770 (Object_t * __this /* static, unused */, ASN1_t1477 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C" DateTime_t524  ASN1Convert_ToDateTime_m7771 (Object_t * __this /* static, unused */, ASN1_t1477 * ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
