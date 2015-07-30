#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t1826;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t1825;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Text.DecoderReplacementFallbackBuffer::.ctor(System.Text.DecoderReplacementFallback)
extern "C" void DecoderReplacementFallbackBuffer__ctor_m9863 (DecoderReplacementFallbackBuffer_t1826 * __this, DecoderReplacementFallback_t1825 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallbackBuffer::get_Remaining()
extern "C" int32_t DecoderReplacementFallbackBuffer_get_Remaining_m9864 (DecoderReplacementFallbackBuffer_t1826 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C" bool DecoderReplacementFallbackBuffer_Fallback_m9865 (DecoderReplacementFallbackBuffer_t1826 * __this, ByteU5BU5D_t66* ___bytesUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderReplacementFallbackBuffer::GetNextChar()
extern "C" uint16_t DecoderReplacementFallbackBuffer_GetNextChar_m9866 (DecoderReplacementFallbackBuffer_t1826 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallbackBuffer::Reset()
extern "C" void DecoderReplacementFallbackBuffer_Reset_m9867 (DecoderReplacementFallbackBuffer_t1826 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
