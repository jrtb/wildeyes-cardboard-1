#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter
struct TextWriter_t1214;
// System.Char[]
struct CharU5BU5D_t268;
// System.String
struct String_t;

// System.Void System.IO.TextWriter::.ctor()
extern "C" void TextWriter__ctor_m8494 (TextWriter_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
extern "C" void TextWriter__cctor_m8495 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
extern "C" void TextWriter_Close_m8496 (TextWriter_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C" void TextWriter_Dispose_m8497 (TextWriter_t1214 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
extern "C" void TextWriter_Dispose_m8498 (TextWriter_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
extern "C" void TextWriter_Flush_m8499 (TextWriter_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern "C" TextWriter_t1214 * TextWriter_Synchronized_m8500 (Object_t * __this /* static, unused */, TextWriter_t1214 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C" void TextWriter_Write_m8501 (TextWriter_t1214 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C" void TextWriter_Write_m8502 (TextWriter_t1214 * __this, CharU5BU5D_t268* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
extern "C" void TextWriter_Write_m8503 (TextWriter_t1214 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void TextWriter_Write_m8504 (TextWriter_t1214 * __this, CharU5BU5D_t268* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
extern "C" void TextWriter_WriteLine_m8505 (TextWriter_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern "C" void TextWriter_WriteLine_m5461 (TextWriter_t1214 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
