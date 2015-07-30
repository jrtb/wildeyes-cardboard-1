#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Stream
struct Stream_t1315;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.Stream::.ctor()
extern "C" void Stream__ctor_m6520 (Stream_t1315 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::.cctor()
extern "C" void Stream__cctor_m8402 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Stream::get_CanRead()
// System.Boolean System.IO.Stream::get_CanSeek()
// System.Boolean System.IO.Stream::get_CanWrite()
// System.Int64 System.IO.Stream::get_Length()
// System.Int64 System.IO.Stream::get_Position()
// System.Void System.IO.Stream::set_Position(System.Int64)
// System.Void System.IO.Stream::Dispose()
extern "C" void Stream_Dispose_m6565 (Stream_t1315 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C" void Stream_Dispose_m6537 (Stream_t1315 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Close()
extern "C" void Stream_Close_m6457 (Stream_t1315 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Flush()
// System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.IO.Stream::ReadByte()
extern "C" int32_t Stream_ReadByte_m6505 (Stream_t1315 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin)
// System.Void System.IO.Stream::SetLength(System.Int64)
// System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32)
// System.Void System.IO.Stream::WriteByte(System.Byte)
extern "C" void Stream_WriteByte_m6483 (Stream_t1315 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Stream_BeginRead_m6497 (Stream_t1315 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t7 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Stream_BeginWrite_m6508 (Stream_t1315 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t7 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
extern "C" int32_t Stream_EndRead_m6499 (Stream_t1315 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
extern "C" void Stream_EndWrite_m6509 (Stream_t1315 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
