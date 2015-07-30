#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.BitConverter
struct BitConverter_t1192;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;

// System.Void System.BitConverter::.cctor()
extern "C" void BitConverter__cctor_m10157 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
extern "C" bool BitConverter_AmILittleEndian_m10158 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
extern "C" bool BitConverter_DoubleWordsAreSwapped_m10159 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
extern "C" int64_t BitConverter_DoubleToInt64Bits_m10160 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
extern "C" ByteU5BU5D_t66* BitConverter_GetBytes_m10161 (Object_t * __this /* static, unused */, uint8_t* ___ptr, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
extern "C" ByteU5BU5D_t66* BitConverter_GetBytes_m10162 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
extern "C" void BitConverter_PutBytes_m10163 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t66* ___src, int32_t ___start_index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
extern "C" int64_t BitConverter_ToInt64_m10164 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
extern "C" String_t* BitConverter_ToString_m6487 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* BitConverter_ToString_m10165 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
