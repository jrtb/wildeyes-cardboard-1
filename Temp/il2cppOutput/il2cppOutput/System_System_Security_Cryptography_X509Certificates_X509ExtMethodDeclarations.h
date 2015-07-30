#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t1072;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1061;

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern "C" void X509Extension__ctor_m4676 (X509Extension_t1072 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
extern "C" void X509Extension__ctor_m4677 (X509Extension_t1072 * __this, String_t* ___oid, ByteU5BU5D_t66* ___rawData, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern "C" bool X509Extension_get_Critical_m4678 (X509Extension_t1072 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern "C" void X509Extension_set_Critical_m4679 (X509Extension_t1072 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509Extension_CopyFrom_m4680 (X509Extension_t1072 * __this, AsnEncodedData_t1061 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern "C" String_t* X509Extension_FormatUnkownData_m4681 (X509Extension_t1072 * __this, ByteU5BU5D_t66* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
