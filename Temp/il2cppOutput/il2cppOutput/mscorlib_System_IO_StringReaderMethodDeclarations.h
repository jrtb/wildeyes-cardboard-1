#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StringReader
struct StringReader_t748;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t268;

// System.Void System.IO.StringReader::.ctor(System.String)
extern "C" void StringReader__ctor_m3834 (StringReader_t748 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::Dispose(System.Boolean)
extern "C" void StringReader_Dispose_m8466 (StringReader_t748 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Peek()
extern "C" int32_t StringReader_Peek_m8467 (StringReader_t748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read()
extern "C" int32_t StringReader_Read_m8468 (StringReader_t748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t StringReader_Read_m8469 (StringReader_t748 * __this, CharU5BU5D_t268* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadLine()
extern "C" String_t* StringReader_ReadLine_m3835 (StringReader_t748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadToEnd()
extern "C" String_t* StringReader_ReadToEnd_m8470 (StringReader_t748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::CheckObjectDisposedException()
extern "C" void StringReader_CheckObjectDisposedException_m8471 (StringReader_t748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
