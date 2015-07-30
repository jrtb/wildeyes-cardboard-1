#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MonoIO
struct MonoIO_t1564;
// System.Exception
struct Exception_t110;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t87;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.MonoIOError
#include "mscorlib_System_IO_MonoIOError.h"
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"
// System.IO.MonoFileType
#include "mscorlib_System_IO_MonoFileType.h"
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStat.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"
// System.IO.FileOptions
#include "mscorlib_System_IO_FileOptions.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.MonoIO::.cctor()
extern "C" void MonoIO__cctor_m8358 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.IO.MonoIOError)
extern "C" Exception_t110 * MonoIO_GetException_m8359 (Object_t * __this /* static, unused */, int32_t ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
extern "C" Exception_t110 * MonoIO_GetException_m8360 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_CreateDirectory_m8361 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" StringU5BU5D_t87* MonoIO_GetFileSystemEntries_m8362 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___path_with_pattern, int32_t ___attrs, int32_t ___mask, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)
extern "C" String_t* MonoIO_GetCurrentDirectory_m8363 (Object_t * __this /* static, unused */, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_DeleteFile_m8364 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_GetFileAttributes_m8365 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_GetFileType_m8366 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsFile(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_ExistsFile_m8367 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsDirectory(System.String,System.IO.MonoIOError&)
extern "C" bool MonoIO_ExistsDirectory_m8368 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)
extern "C" bool MonoIO_GetFileStat_m8369 (Object_t * __this /* static, unused */, String_t* ___path, MonoIOStat_t1562 * ___stat, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
extern "C" IntPtr_t MonoIO_Open_m8370 (Object_t * __this /* static, unused */, String_t* ___filename, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___options, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern "C" bool MonoIO_Close_m8371 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_Read_m8372 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t66* ___dest, int32_t ___dest_offset, int32_t ___count, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_Write_m8373 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t66* ___src, int32_t ___src_offset, int32_t ___count, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
extern "C" int64_t MonoIO_Seek_m8374 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int64_t ___offset, int32_t ___origin, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
extern "C" int64_t MonoIO_GetLength_m8375 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)
extern "C" bool MonoIO_SetLength_m8376 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int64_t ___length, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern "C" IntPtr_t MonoIO_get_ConsoleOutput_m8377 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern "C" IntPtr_t MonoIO_get_ConsoleInput_m8378 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern "C" IntPtr_t MonoIO_get_ConsoleError_m8379 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
extern "C" uint16_t MonoIO_get_VolumeSeparatorChar_m8380 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
extern "C" uint16_t MonoIO_get_DirectorySeparatorChar_m8381 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
extern "C" uint16_t MonoIO_get_AltDirectorySeparatorChar_m8382 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_PathSeparator()
extern "C" uint16_t MonoIO_get_PathSeparator_m8383 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
