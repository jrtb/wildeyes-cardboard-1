#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Convert
struct Convert_t744;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t761;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Convert::.cctor()
extern "C" void Convert__cctor_m10181 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::InternalFromBase64String(System.String,System.Boolean)
extern "C" ByteU5BU5D_t66* Convert_InternalFromBase64String_m10182 (Object_t * __this /* static, unused */, String_t* ___str, bool ___allowWhitespaceOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" ByteU5BU5D_t66* Convert_FromBase64String_m6451 (Object_t * __this /* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C" String_t* Convert_ToBase64String_m3878 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___inArray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Convert_ToBase64String_m10183 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___inArray, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Byte)
extern "C" bool Convert_ToBoolean_m10184 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Decimal)
extern "C" bool Convert_ToBoolean_m10185 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Double)
extern "C" bool Convert_ToBoolean_m10186 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Single)
extern "C" bool Convert_ToBoolean_m10187 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int32)
extern "C" bool Convert_ToBoolean_m10188 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int64)
extern "C" bool Convert_ToBoolean_m10189 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.SByte)
extern "C" bool Convert_ToBoolean_m10190 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int16)
extern "C" bool Convert_ToBoolean_m10191 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.String,System.IFormatProvider)
extern "C" bool Convert_ToBoolean_m10192 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt32)
extern "C" bool Convert_ToBoolean_m10193 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt64)
extern "C" bool Convert_ToBoolean_m10194 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt16)
extern "C" bool Convert_ToBoolean_m10195 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object)
extern "C" bool Convert_ToBoolean_m3872 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object,System.IFormatProvider)
extern "C" bool Convert_ToBoolean_m10196 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Boolean)
extern "C" uint8_t Convert_ToByte_m10197 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Char)
extern "C" uint8_t Convert_ToByte_m10198 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Decimal)
extern "C" uint8_t Convert_ToByte_m10199 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Double)
extern "C" uint8_t Convert_ToByte_m10200 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Single)
extern "C" uint8_t Convert_ToByte_m10201 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int32)
extern "C" uint8_t Convert_ToByte_m10202 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int64)
extern "C" uint8_t Convert_ToByte_m10203 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.SByte)
extern "C" uint8_t Convert_ToByte_m10204 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int16)
extern "C" uint8_t Convert_ToByte_m10205 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String)
extern "C" uint8_t Convert_ToByte_m10206 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String,System.IFormatProvider)
extern "C" uint8_t Convert_ToByte_m10207 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt32)
extern "C" uint8_t Convert_ToByte_m10208 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt64)
extern "C" uint8_t Convert_ToByte_m10209 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt16)
extern "C" uint8_t Convert_ToByte_m10210 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Object,System.IFormatProvider)
extern "C" uint8_t Convert_ToByte_m10211 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Byte)
extern "C" uint16_t Convert_ToChar_m6453 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int32)
extern "C" uint16_t Convert_ToChar_m10212 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int64)
extern "C" uint16_t Convert_ToChar_m10213 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Single)
extern "C" uint16_t Convert_ToChar_m10214 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.SByte)
extern "C" uint16_t Convert_ToChar_m10215 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int16)
extern "C" uint16_t Convert_ToChar_m10216 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.String,System.IFormatProvider)
extern "C" uint16_t Convert_ToChar_m10217 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt32)
extern "C" uint16_t Convert_ToChar_m10218 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt64)
extern "C" uint16_t Convert_ToChar_m10219 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt16)
extern "C" uint16_t Convert_ToChar_m10220 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Object,System.IFormatProvider)
extern "C" uint16_t Convert_ToChar_m10221 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
extern "C" DateTime_t524  Convert_ToDateTime_m10222 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int16)
extern "C" DateTime_t524  Convert_ToDateTime_m10223 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int32)
extern "C" DateTime_t524  Convert_ToDateTime_m10224 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int64)
extern "C" DateTime_t524  Convert_ToDateTime_m10225 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Single)
extern "C" DateTime_t524  Convert_ToDateTime_m10226 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
extern "C" DateTime_t524  Convert_ToDateTime_m10227 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.SByte)
extern "C" DateTime_t524  Convert_ToDateTime_m10228 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt16)
extern "C" DateTime_t524  Convert_ToDateTime_m10229 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt32)
extern "C" DateTime_t524  Convert_ToDateTime_m10230 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt64)
extern "C" DateTime_t524  Convert_ToDateTime_m10231 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Boolean)
extern "C" Decimal_t763  Convert_ToDecimal_m10232 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Byte)
extern "C" Decimal_t763  Convert_ToDecimal_m10233 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Double)
extern "C" Decimal_t763  Convert_ToDecimal_m10234 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Single)
extern "C" Decimal_t763  Convert_ToDecimal_m10235 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int32)
extern "C" Decimal_t763  Convert_ToDecimal_m10236 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int64)
extern "C" Decimal_t763  Convert_ToDecimal_m10237 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.SByte)
extern "C" Decimal_t763  Convert_ToDecimal_m10238 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int16)
extern "C" Decimal_t763  Convert_ToDecimal_m10239 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.String,System.IFormatProvider)
extern "C" Decimal_t763  Convert_ToDecimal_m10240 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt32)
extern "C" Decimal_t763  Convert_ToDecimal_m10241 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt64)
extern "C" Decimal_t763  Convert_ToDecimal_m10242 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt16)
extern "C" Decimal_t763  Convert_ToDecimal_m10243 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
extern "C" Decimal_t763  Convert_ToDecimal_m10244 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Boolean)
extern "C" double Convert_ToDouble_m10245 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Byte)
extern "C" double Convert_ToDouble_m10246 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Decimal)
extern "C" double Convert_ToDouble_m10247 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Double)
extern "C" double Convert_ToDouble_m10248 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Single)
extern "C" double Convert_ToDouble_m10249 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int32)
extern "C" double Convert_ToDouble_m10250 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int64)
extern "C" double Convert_ToDouble_m10251 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.SByte)
extern "C" double Convert_ToDouble_m10252 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int16)
extern "C" double Convert_ToDouble_m10253 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.String,System.IFormatProvider)
extern "C" double Convert_ToDouble_m10254 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt32)
extern "C" double Convert_ToDouble_m10255 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt64)
extern "C" double Convert_ToDouble_m10256 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt16)
extern "C" double Convert_ToDouble_m10257 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
extern "C" double Convert_ToDouble_m3935 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Boolean)
extern "C" int16_t Convert_ToInt16_m10258 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Byte)
extern "C" int16_t Convert_ToInt16_m10259 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Char)
extern "C" int16_t Convert_ToInt16_m10260 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Decimal)
extern "C" int16_t Convert_ToInt16_m10261 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Double)
extern "C" int16_t Convert_ToInt16_m10262 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Single)
extern "C" int16_t Convert_ToInt16_m10263 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int32)
extern "C" int16_t Convert_ToInt16_m10264 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int64)
extern "C" int16_t Convert_ToInt16_m10265 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.SByte)
extern "C" int16_t Convert_ToInt16_m10266 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int16)
extern "C" int16_t Convert_ToInt16_m10267 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.String,System.IFormatProvider)
extern "C" int16_t Convert_ToInt16_m6400 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt32)
extern "C" int16_t Convert_ToInt16_m10268 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt64)
extern "C" int16_t Convert_ToInt16_m10269 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt16)
extern "C" int16_t Convert_ToInt16_m10270 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object)
extern "C" int16_t Convert_ToInt16_m10271 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object,System.IFormatProvider)
extern "C" int16_t Convert_ToInt16_m10272 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Boolean)
extern "C" int32_t Convert_ToInt32_m10273 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Byte)
extern "C" int32_t Convert_ToInt32_m10274 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C" int32_t Convert_ToInt32_m10275 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Decimal)
extern "C" int32_t Convert_ToInt32_m10276 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Double)
extern "C" int32_t Convert_ToInt32_m10277 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Single)
extern "C" int32_t Convert_ToInt32_m10278 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int64)
extern "C" int32_t Convert_ToInt32_m10279 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.SByte)
extern "C" int32_t Convert_ToInt32_m10280 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int16)
extern "C" int32_t Convert_ToInt32_m10281 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.String,System.IFormatProvider)
extern "C" int32_t Convert_ToInt32_m10282 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt32)
extern "C" int32_t Convert_ToInt32_m10283 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt64)
extern "C" int32_t Convert_ToInt32_m10284 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt16)
extern "C" int32_t Convert_ToInt32_m10285 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object)
extern "C" int32_t Convert_ToInt32_m3869 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
extern "C" int32_t Convert_ToInt32_m6464 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Boolean)
extern "C" int64_t Convert_ToInt64_m10286 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Byte)
extern "C" int64_t Convert_ToInt64_m10287 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Char)
extern "C" int64_t Convert_ToInt64_m10288 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Decimal)
extern "C" int64_t Convert_ToInt64_m10289 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Double)
extern "C" int64_t Convert_ToInt64_m10290 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Single)
extern "C" int64_t Convert_ToInt64_m10291 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int32)
extern "C" int64_t Convert_ToInt64_m10292 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int64)
extern "C" int64_t Convert_ToInt64_m10293 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.SByte)
extern "C" int64_t Convert_ToInt64_m10294 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int16)
extern "C" int64_t Convert_ToInt64_m10295 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String)
extern "C" int64_t Convert_ToInt64_m10296 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String,System.IFormatProvider)
extern "C" int64_t Convert_ToInt64_m10297 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt32)
extern "C" int64_t Convert_ToInt64_m10298 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt64)
extern "C" int64_t Convert_ToInt64_m10299 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt16)
extern "C" int64_t Convert_ToInt64_m10300 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object)
extern "C" int64_t Convert_ToInt64_m10301 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
extern "C" int64_t Convert_ToInt64_m10302 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Boolean)
extern "C" int8_t Convert_ToSByte_m10303 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Byte)
extern "C" int8_t Convert_ToSByte_m10304 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Char)
extern "C" int8_t Convert_ToSByte_m10305 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Decimal)
extern "C" int8_t Convert_ToSByte_m10306 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Double)
extern "C" int8_t Convert_ToSByte_m10307 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Single)
extern "C" int8_t Convert_ToSByte_m10308 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int32)
extern "C" int8_t Convert_ToSByte_m10309 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int64)
extern "C" int8_t Convert_ToSByte_m10310 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int16)
extern "C" int8_t Convert_ToSByte_m10311 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.String,System.IFormatProvider)
extern "C" int8_t Convert_ToSByte_m10312 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt32)
extern "C" int8_t Convert_ToSByte_m10313 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt64)
extern "C" int8_t Convert_ToSByte_m10314 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt16)
extern "C" int8_t Convert_ToSByte_m10315 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Object,System.IFormatProvider)
extern "C" int8_t Convert_ToSByte_m10316 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Boolean)
extern "C" float Convert_ToSingle_m10317 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Byte)
extern "C" float Convert_ToSingle_m10318 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Decimal)
extern "C" float Convert_ToSingle_m10319 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Double)
extern "C" float Convert_ToSingle_m10320 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Single)
extern "C" float Convert_ToSingle_m10321 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int32)
extern "C" float Convert_ToSingle_m10322 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int64)
extern "C" float Convert_ToSingle_m10323 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.SByte)
extern "C" float Convert_ToSingle_m10324 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int16)
extern "C" float Convert_ToSingle_m10325 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.String,System.IFormatProvider)
extern "C" float Convert_ToSingle_m10326 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt32)
extern "C" float Convert_ToSingle_m10327 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt64)
extern "C" float Convert_ToSingle_m10328 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt16)
extern "C" float Convert_ToSingle_m10329 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Object,System.IFormatProvider)
extern "C" float Convert_ToSingle_m10330 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object)
extern "C" String_t* Convert_ToString_m10331 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
extern "C" String_t* Convert_ToString_m10332 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Boolean)
extern "C" uint16_t Convert_ToUInt16_m10333 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Byte)
extern "C" uint16_t Convert_ToUInt16_m10334 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Char)
extern "C" uint16_t Convert_ToUInt16_m10335 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Decimal)
extern "C" uint16_t Convert_ToUInt16_m10336 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Double)
extern "C" uint16_t Convert_ToUInt16_m10337 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Single)
extern "C" uint16_t Convert_ToUInt16_m10338 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
extern "C" uint16_t Convert_ToUInt16_m10339 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int64)
extern "C" uint16_t Convert_ToUInt16_m10340 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.SByte)
extern "C" uint16_t Convert_ToUInt16_m10341 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int16)
extern "C" uint16_t Convert_ToUInt16_m10342 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.String,System.IFormatProvider)
extern "C" uint16_t Convert_ToUInt16_m10343 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt32)
extern "C" uint16_t Convert_ToUInt16_m10344 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt64)
extern "C" uint16_t Convert_ToUInt16_m10345 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Object)
extern "C" uint16_t Convert_ToUInt16_m3870 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Object,System.IFormatProvider)
extern "C" uint16_t Convert_ToUInt16_m10346 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Boolean)
extern "C" uint32_t Convert_ToUInt32_m3807 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Byte)
extern "C" uint32_t Convert_ToUInt32_m10347 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Char)
extern "C" uint32_t Convert_ToUInt32_m10348 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Decimal)
extern "C" uint32_t Convert_ToUInt32_m10349 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Double)
extern "C" uint32_t Convert_ToUInt32_m10350 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Single)
extern "C" uint32_t Convert_ToUInt32_m10351 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int32)
extern "C" uint32_t Convert_ToUInt32_m10352 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int64)
extern "C" uint32_t Convert_ToUInt32_m10353 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.SByte)
extern "C" uint32_t Convert_ToUInt32_m10354 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int16)
extern "C" uint32_t Convert_ToUInt32_m10355 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.String,System.IFormatProvider)
extern "C" uint32_t Convert_ToUInt32_m10356 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt64)
extern "C" uint32_t Convert_ToUInt32_m10357 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt16)
extern "C" uint32_t Convert_ToUInt32_m10358 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Object)
extern "C" uint32_t Convert_ToUInt32_m3806 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Object,System.IFormatProvider)
extern "C" uint32_t Convert_ToUInt32_m10359 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Boolean)
extern "C" uint64_t Convert_ToUInt64_m10360 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Byte)
extern "C" uint64_t Convert_ToUInt64_m10361 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Char)
extern "C" uint64_t Convert_ToUInt64_m10362 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Decimal)
extern "C" uint64_t Convert_ToUInt64_m10363 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Double)
extern "C" uint64_t Convert_ToUInt64_m10364 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Single)
extern "C" uint64_t Convert_ToUInt64_m10365 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int32)
extern "C" uint64_t Convert_ToUInt64_m10366 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int64)
extern "C" uint64_t Convert_ToUInt64_m10367 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.SByte)
extern "C" uint64_t Convert_ToUInt64_m10368 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int16)
extern "C" uint64_t Convert_ToUInt64_m10369 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.String,System.IFormatProvider)
extern "C" uint64_t Convert_ToUInt64_m10370 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
extern "C" uint64_t Convert_ToUInt64_m10371 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt16)
extern "C" uint64_t Convert_ToUInt64_m10372 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object)
extern "C" uint64_t Convert_ToUInt64_m3871 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object,System.IFormatProvider)
extern "C" uint64_t Convert_ToUInt64_m10373 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
extern "C" Object_t * Convert_ChangeType_m10374 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___conversionType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ToType(System.Object,System.Type,System.IFormatProvider,System.Boolean)
extern "C" Object_t * Convert_ToType_m10375 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___conversionType, Object_t * ___provider, bool ___try_target_to_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
