#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello
struct TlsClientHello_t1354;
// Mono.Security.Protocol.Tls.Context
struct Context_t1305;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientHello__ctor_m6334 (TlsClientHello_t1354 * __this, Context_t1305 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::Update()
extern "C" void TlsClientHello_Update_m6335 (TlsClientHello_t1354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsSsl3()
extern "C" void TlsClientHello_ProcessAsSsl3_m6336 (TlsClientHello_t1354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsTls1()
extern "C" void TlsClientHello_ProcessAsTls1_m6337 (TlsClientHello_t1354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
