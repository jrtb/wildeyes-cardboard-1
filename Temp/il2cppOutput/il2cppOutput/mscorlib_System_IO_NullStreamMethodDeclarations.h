#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.NullStream
struct NullStream_t1568;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.NullStream::.ctor()
extern "C" void NullStream__ctor_m8403 (NullStream_t1568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanRead()
extern "C" bool NullStream_get_CanRead_m8404 (NullStream_t1568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanSeek()
extern "C" bool NullStream_get_CanSeek_m8405 (NullStream_t1568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullStream::get_CanWrite()
extern "C" bool NullStream_get_CanWrite_m8406 (NullStream_t1568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::get_Length()
extern "C" int64_t NullStream_get_Length_m8407 (NullStream_t1568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::get_Position()
extern "C" int64_t NullStream_get_Position_m8408 (NullStream_t1568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::set_Position(System.Int64)
extern "C" void NullStream_set_Position_m8409 (NullStream_t1568 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::Flush()
extern "C" void NullStream_Flush_m8410 (NullStream_t1568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.NullStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t NullStream_Read_m8411 (NullStream_t1568 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.NullStream::ReadByte()
extern "C" int32_t NullStream_ReadByte_m8412 (NullStream_t1568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.NullStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t NullStream_Seek_m8413 (NullStream_t1568 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::SetLength(System.Int64)
extern "C" void NullStream_SetLength_m8414 (NullStream_t1568 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void NullStream_Write_m8415 (NullStream_t1568 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullStream::WriteByte(System.Byte)
extern "C" void NullStream_WriteByte_m8416 (NullStream_t1568 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
