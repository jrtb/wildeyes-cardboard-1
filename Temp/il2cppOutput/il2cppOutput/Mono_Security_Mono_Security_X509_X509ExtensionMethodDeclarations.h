#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Extension
struct X509Extension_t1088;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1075;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t353;

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C" void X509Extension__ctor_m5834 (X509Extension_t1088 * __this, ASN1_t1075 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void X509Extension__ctor_m5835 (X509Extension_t1088 * __this, X509Extension_t1088 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C" void X509Extension_Decode_m5836 (X509Extension_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Encode()
extern "C" void X509Extension_Encode_m5837 (X509Extension_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::get_Oid()
extern "C" String_t* X509Extension_get_Oid_m5387 (X509Extension_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
extern "C" bool X509Extension_get_Critical_m5386 (X509Extension_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
extern "C" ASN1_t1075 * X509Extension_get_Value_m5396 (X509Extension_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C" bool X509Extension_Equals_m5838 (X509Extension_t1088 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C" int32_t X509Extension_GetHashCode_m5839 (X509Extension_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" void X509Extension_WriteLine_m5840 (X509Extension_t1088 * __this, StringBuilder_t353 * ___sb, int32_t ___n, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C" String_t* X509Extension_ToString_m5841 (X509Extension_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
