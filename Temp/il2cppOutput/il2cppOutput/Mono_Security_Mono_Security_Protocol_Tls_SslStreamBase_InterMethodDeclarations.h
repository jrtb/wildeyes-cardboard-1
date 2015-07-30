#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t1346;
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

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" void InternalAsyncResult__ctor_m6181 (InternalAsyncResult_t1346 * __this, AsyncCallback_t7 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, bool ___fromWrite, bool ___proceedAfterHandshake, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
extern "C" bool InternalAsyncResult_get_ProceedAfterHandshake_m6182 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
extern "C" bool InternalAsyncResult_get_FromWrite_m6183 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
extern "C" ByteU5BU5D_t66* InternalAsyncResult_get_Buffer_m6184 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
extern "C" int32_t InternalAsyncResult_get_Offset_m6185 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
extern "C" int32_t InternalAsyncResult_get_Count_m6186 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
extern "C" int32_t InternalAsyncResult_get_BytesRead_m6187 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
extern "C" Object_t * InternalAsyncResult_get_AsyncState_m6188 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
extern "C" Exception_t110 * InternalAsyncResult_get_AsyncException_m6189 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
extern "C" bool InternalAsyncResult_get_CompletedWithError_m6190 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1332 * InternalAsyncResult_get_AsyncWaitHandle_m6191 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
extern "C" bool InternalAsyncResult_get_IsCompleted_m6192 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void InternalAsyncResult_SetComplete_m6193 (InternalAsyncResult_t1346 * __this, Exception_t110 * ___ex, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
extern "C" void InternalAsyncResult_SetComplete_m6194 (InternalAsyncResult_t1346 * __this, Exception_t110 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
extern "C" void InternalAsyncResult_SetComplete_m6195 (InternalAsyncResult_t1346 * __this, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
extern "C" void InternalAsyncResult_SetComplete_m6196 (InternalAsyncResult_t1346 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
