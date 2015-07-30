#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderExceptionFallbackBuffer
struct DecoderExceptionFallbackBuffer_t1823;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Text.DecoderExceptionFallbackBuffer::.ctor()
extern "C" void DecoderExceptionFallbackBuffer__ctor_m9843 (DecoderExceptionFallbackBuffer_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderExceptionFallbackBuffer::get_Remaining()
extern "C" int32_t DecoderExceptionFallbackBuffer_get_Remaining_m9844 (DecoderExceptionFallbackBuffer_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderExceptionFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C" bool DecoderExceptionFallbackBuffer_Fallback_m9845 (DecoderExceptionFallbackBuffer_t1823 * __this, ByteU5BU5D_t66* ___bytesUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderExceptionFallbackBuffer::GetNextChar()
extern "C" uint16_t DecoderExceptionFallbackBuffer_GetNextChar_m9846 (DecoderExceptionFallbackBuffer_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
