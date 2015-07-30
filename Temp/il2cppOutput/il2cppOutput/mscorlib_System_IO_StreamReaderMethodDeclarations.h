#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamReader
struct StreamReader_t1553;
// System.IO.Stream
struct Stream_t1315;
// System.Text.Encoding
struct Encoding_t113;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t268;

// System.Void System.IO.StreamReader::.ctor()
extern "C" void StreamReader__ctor_m8433 (StreamReader_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void StreamReader__ctor_m8434 (StreamReader_t1553 * __this, Stream_t1315 * ___stream, Encoding_t113 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m8435 (StreamReader_t1553 * __this, Stream_t1315 * ___stream, Encoding_t113 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
extern "C" void StreamReader__ctor_m8436 (StreamReader_t1553 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m8437 (StreamReader_t1553 * __this, String_t* ___path, Encoding_t113 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
extern "C" void StreamReader__cctor_m8438 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader_Initialize_m8439 (StreamReader_t1553 * __this, Stream_t1315 * ___stream, Encoding_t113 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
extern "C" void StreamReader_Dispose_m8440 (StreamReader_t1553 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
extern "C" int32_t StreamReader_DoChecks_m8441 (StreamReader_t1553 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
extern "C" int32_t StreamReader_ReadBuffer_m8442 (StreamReader_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
extern "C" int32_t StreamReader_Peek_m8443 (StreamReader_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
extern "C" int32_t StreamReader_Read_m8444 (StreamReader_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t StreamReader_Read_m8445 (StreamReader_t1553 * __this, CharU5BU5D_t268* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
extern "C" int32_t StreamReader_FindNextEOL_m8446 (StreamReader_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
extern "C" String_t* StreamReader_ReadLine_m8447 (StreamReader_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
extern "C" String_t* StreamReader_ReadToEnd_m8448 (StreamReader_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
