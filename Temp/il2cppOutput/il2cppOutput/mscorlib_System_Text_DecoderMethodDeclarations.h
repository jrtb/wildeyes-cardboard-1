﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1545;
// System.Text.DecoderFallback
struct DecoderFallback_t1821;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1820;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Char[]
struct CharU5BU5D_t268;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m9836 (Decoder_t1545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m9837 (Decoder_t1545 * __this, DecoderFallback_t1821 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1820 * Decoder_get_FallbackBuffer_m9838 (Decoder_t1545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
