﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Directory
struct Directory_t1547;
// System.IO.DirectoryInfo
struct DirectoryInfo_t1548;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t87;
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"

// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C" DirectoryInfo_t1548 * Directory_CreateDirectory_m6459 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectoriesInternal(System.String)
extern "C" DirectoryInfo_t1548 * Directory_CreateDirectoriesInternal_m8265 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C" bool Directory_Exists_m6458 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Directory::GetCurrentDirectory()
extern "C" String_t* Directory_GetCurrentDirectory_m8266 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
extern "C" StringU5BU5D_t87* Directory_GetFiles_m6461 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFileSystemEntries(System.String,System.String,System.IO.FileAttributes,System.IO.FileAttributes)
extern "C" StringU5BU5D_t87* Directory_GetFileSystemEntries_m8267 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, int32_t ___mask, int32_t ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
