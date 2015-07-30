#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct TlsServerHello_t1359;
// Mono.Security.Protocol.Tls.Context
struct Context_t1305;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHello__ctor_m6360 (TlsServerHello_t1359 * __this, Context_t1305 * ___context, ByteU5BU5D_t66* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern "C" void TlsServerHello_Update_m6361 (TlsServerHello_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern "C" void TlsServerHello_ProcessAsSsl3_m6362 (TlsServerHello_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern "C" void TlsServerHello_ProcessAsTls1_m6363 (TlsServerHello_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern "C" void TlsServerHello_processProtocol_m6364 (TlsServerHello_t1359 * __this, int16_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
