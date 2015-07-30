#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t1323;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1306;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
extern "C" void SecurityParameters__ctor_m6123 (SecurityParameters_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
extern "C" CipherSuite_t1306 * SecurityParameters_get_Cipher_m6124 (SecurityParameters_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
extern "C" void SecurityParameters_set_Cipher_m6125 (SecurityParameters_t1323 * __this, CipherSuite_t1306 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
extern "C" ByteU5BU5D_t66* SecurityParameters_get_ClientWriteMAC_m6126 (SecurityParameters_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
extern "C" void SecurityParameters_set_ClientWriteMAC_m6127 (SecurityParameters_t1323 * __this, ByteU5BU5D_t66* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
extern "C" ByteU5BU5D_t66* SecurityParameters_get_ServerWriteMAC_m6128 (SecurityParameters_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
extern "C" void SecurityParameters_set_ServerWriteMAC_m6129 (SecurityParameters_t1323 * __this, ByteU5BU5D_t66* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
extern "C" void SecurityParameters_Clear_m6130 (SecurityParameters_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
