#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Console
struct Console_t1213;
// System.IO.TextWriter
struct TextWriter_t1214;
// System.Text.Encoding
struct Encoding_t113;
// System.IO.Stream
struct Stream_t1315;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"

// System.Void System.Console::.cctor()
extern "C" void Console__cctor_m10174 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
extern "C" void Console_SetEncodings_m10175 (Object_t * __this /* static, unused */, Encoding_t113 * ___inputEncoding, Encoding_t113 * ___outputEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
extern "C" TextWriter_t1214 * Console_get_Error_m5460 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
extern "C" Stream_t1315 * Console_Open_m10176 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t ___access, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
extern "C" Stream_t1315 * Console_OpenStandardError_m10177 (Object_t * __this /* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
extern "C" Stream_t1315 * Console_OpenStandardInput_m10178 (Object_t * __this /* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
extern "C" Stream_t1315 * Console_OpenStandardOutput_m10179 (Object_t * __this /* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
