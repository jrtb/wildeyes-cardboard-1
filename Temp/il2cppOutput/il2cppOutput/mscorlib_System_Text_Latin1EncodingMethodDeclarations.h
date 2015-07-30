#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Latin1Encoding
struct Latin1Encoding_t1834;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t268;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1819;

// System.Void System.Text.Latin1Encoding::.ctor()
extern "C" void Latin1Encoding__ctor_m9930 (Latin1Encoding_t1834 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetByteCount_m9931 (Latin1Encoding_t1834 * __this, CharU5BU5D_t268* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
extern "C" int32_t Latin1Encoding_GetByteCount_m9932 (Latin1Encoding_t1834 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m9933 (Latin1Encoding_t1834 * __this, CharU5BU5D_t268* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m9934 (Latin1Encoding_t1834 * __this, CharU5BU5D_t268* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1819 ** ___buffer, CharU5BU5D_t268** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m9935 (Latin1Encoding_t1834 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m9936 (Latin1Encoding_t1834 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1819 ** ___buffer, CharU5BU5D_t268** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetCharCount_m9937 (Latin1Encoding_t1834 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t Latin1Encoding_GetChars_m9938 (Latin1Encoding_t1834 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t268* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxByteCount_m9939 (Latin1Encoding_t1834 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxCharCount_m9940 (Latin1Encoding_t1834 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Latin1Encoding_GetString_m9941 (Latin1Encoding_t1834 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
extern "C" String_t* Latin1Encoding_GetString_m9942 (Latin1Encoding_t1834 * __this, ByteU5BU5D_t66* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_HeaderName()
extern "C" String_t* Latin1Encoding_get_HeaderName_m9943 (Latin1Encoding_t1834 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_WebName()
extern "C" String_t* Latin1Encoding_get_WebName_m9944 (Latin1Encoding_t1834 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
