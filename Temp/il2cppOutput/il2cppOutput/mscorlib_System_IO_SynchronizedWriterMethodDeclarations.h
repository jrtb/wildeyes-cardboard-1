#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t1575;
// System.IO.TextWriter
struct TextWriter_t1214;
// System.Char[]
struct CharU5BU5D_t268;
// System.String
struct String_t;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C" void SynchronizedWriter__ctor_m8506 (SynchronizedWriter_t1575 * __this, TextWriter_t1214 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
extern "C" void SynchronizedWriter_Close_m8507 (SynchronizedWriter_t1575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C" void SynchronizedWriter_Flush_m8508 (SynchronizedWriter_t1575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C" void SynchronizedWriter_Write_m8509 (SynchronizedWriter_t1575 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C" void SynchronizedWriter_Write_m8510 (SynchronizedWriter_t1575 * __this, CharU5BU5D_t268* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C" void SynchronizedWriter_Write_m8511 (SynchronizedWriter_t1575 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void SynchronizedWriter_Write_m8512 (SynchronizedWriter_t1575 * __this, CharU5BU5D_t268* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C" void SynchronizedWriter_WriteLine_m8513 (SynchronizedWriter_t1575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C" void SynchronizedWriter_WriteLine_m8514 (SynchronizedWriter_t1575 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
