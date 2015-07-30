#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1331;
// System.IO.Stream
struct Stream_t1315;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t110;
// System.Threading.WaitHandle
struct WaitHandle_t1332;
// System.AsyncCallback
struct AsyncCallback_t7;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m6064 (ReceiveRecordAsyncResult_t1331 * __this, AsyncCallback_t7 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t66* ___initialBuffer, Stream_t1315 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1315 * ReceiveRecordAsyncResult_get_Record_m6065 (ReceiveRecordAsyncResult_t1331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t66* ReceiveRecordAsyncResult_get_ResultingBuffer_m6066 (ReceiveRecordAsyncResult_t1331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t66* ReceiveRecordAsyncResult_get_InitialBuffer_m6067 (ReceiveRecordAsyncResult_t1331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m6068 (ReceiveRecordAsyncResult_t1331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t110 * ReceiveRecordAsyncResult_get_AsyncException_m6069 (ReceiveRecordAsyncResult_t1331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m6070 (ReceiveRecordAsyncResult_t1331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1332 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m6071 (ReceiveRecordAsyncResult_t1331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m6072 (ReceiveRecordAsyncResult_t1331 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6073 (ReceiveRecordAsyncResult_t1331 * __this, Exception_t110 * ___ex, ByteU5BU5D_t66* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6074 (ReceiveRecordAsyncResult_t1331 * __this, Exception_t110 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6075 (ReceiveRecordAsyncResult_t1331 * __this, ByteU5BU5D_t66* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
