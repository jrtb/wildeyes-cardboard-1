#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t1333;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1316;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t110;
// System.Threading.WaitHandle
struct WaitHandle_t1332;
// System.AsyncCallback
struct AsyncCallback_t7;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
extern "C" void SendRecordAsyncResult__ctor_m6076 (SendRecordAsyncResult_t1333 * __this, AsyncCallback_t7 * ___userCallback, Object_t * ___userState, HandshakeMessage_t1316 * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
extern "C" HandshakeMessage_t1316 * SendRecordAsyncResult_get_Message_m6077 (SendRecordAsyncResult_t1333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
extern "C" Object_t * SendRecordAsyncResult_get_AsyncState_m6078 (SendRecordAsyncResult_t1333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
extern "C" Exception_t110 * SendRecordAsyncResult_get_AsyncException_m6079 (SendRecordAsyncResult_t1333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
extern "C" bool SendRecordAsyncResult_get_CompletedWithError_m6080 (SendRecordAsyncResult_t1333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1332 * SendRecordAsyncResult_get_AsyncWaitHandle_m6081 (SendRecordAsyncResult_t1333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
extern "C" bool SendRecordAsyncResult_get_IsCompleted_m6082 (SendRecordAsyncResult_t1333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
extern "C" void SendRecordAsyncResult_SetComplete_m6083 (SendRecordAsyncResult_t1333 * __this, Exception_t110 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
extern "C" void SendRecordAsyncResult_SetComplete_m6084 (SendRecordAsyncResult_t1333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
