#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1061;
// System.Security.Cryptography.Oid
struct Oid_t1062;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern "C" void AsnEncodedData__ctor_m4723 (AsnEncodedData_t1061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
extern "C" void AsnEncodedData__ctor_m4724 (AsnEncodedData_t1061 * __this, String_t* ___oid, ByteU5BU5D_t66* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern "C" void AsnEncodedData__ctor_m4725 (AsnEncodedData_t1061 * __this, Oid_t1062 * ___oid, ByteU5BU5D_t66* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
extern "C" Oid_t1062 * AsnEncodedData_get_Oid_m4726 (AsnEncodedData_t1061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern "C" void AsnEncodedData_set_Oid_m4727 (AsnEncodedData_t1061 * __this, Oid_t1062 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern "C" ByteU5BU5D_t66* AsnEncodedData_get_RawData_m4728 (AsnEncodedData_t1061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern "C" void AsnEncodedData_set_RawData_m4729 (AsnEncodedData_t1061 * __this, ByteU5BU5D_t66* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void AsnEncodedData_CopyFrom_m4730 (AsnEncodedData_t1061 * __this, AsnEncodedData_t1061 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern "C" String_t* AsnEncodedData_ToString_m4731 (AsnEncodedData_t1061 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern "C" String_t* AsnEncodedData_Default_m4732 (AsnEncodedData_t1061 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_BasicConstraintsExtension_m4733 (AsnEncodedData_t1061 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_EnhancedKeyUsageExtension_m4734 (AsnEncodedData_t1061 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_KeyUsageExtension_m4735 (AsnEncodedData_t1061 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m4736 (AsnEncodedData_t1061 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern "C" String_t* AsnEncodedData_SubjectAltName_m4737 (AsnEncodedData_t1061 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern "C" String_t* AsnEncodedData_NetscapeCertType_m4738 (AsnEncodedData_t1061 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
