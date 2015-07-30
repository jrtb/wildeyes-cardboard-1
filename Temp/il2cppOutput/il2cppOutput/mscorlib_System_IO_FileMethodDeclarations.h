#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.File
struct File_t1552;
// System.String
struct String_t;
// System.IO.FileStream
struct FileStream_t1383;
// System.IO.StreamReader
struct StreamReader_t1553;
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"

// System.Void System.IO.File::Delete(System.String)
extern "C" void File_Delete_m8281 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C" bool File_Exists_m8282 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C" FileStream_t1383 * File_Open_m8283 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" FileStream_t1383 * File_OpenRead_m6454 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C" StreamReader_t1553 * File_OpenText_m8284 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
