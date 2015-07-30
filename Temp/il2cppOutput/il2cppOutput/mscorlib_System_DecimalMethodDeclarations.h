#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Decimal
struct Decimal_t763;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t761;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1399;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
extern "C" void Decimal__ctor_m6969 (Decimal_t763 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
extern "C" void Decimal__ctor_m6970 (Decimal_t763 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
extern "C" void Decimal__ctor_m6971 (Decimal_t763 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
extern "C" void Decimal__ctor_m6972 (Decimal_t763 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
extern "C" void Decimal__ctor_m6973 (Decimal_t763 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
extern "C" void Decimal__ctor_m6974 (Decimal_t763 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
extern "C" void Decimal__ctor_m6975 (Decimal_t763 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
extern "C" void Decimal__cctor_m6976 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Decimal_System_IConvertible_ToType_m6977 (Decimal_t763 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Decimal_System_IConvertible_ToBoolean_m6978 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Decimal_System_IConvertible_ToByte_m6979 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Decimal_System_IConvertible_ToChar_m6980 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t524  Decimal_System_IConvertible_ToDateTime_m6981 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t763  Decimal_System_IConvertible_ToDecimal_m6982 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Decimal_System_IConvertible_ToDouble_m6983 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Decimal_System_IConvertible_ToInt16_m6984 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Decimal_System_IConvertible_ToInt32_m6985 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Decimal_System_IConvertible_ToInt64_m6986 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Decimal_System_IConvertible_ToSByte_m6987 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Decimal_System_IConvertible_ToSingle_m6988 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Decimal_System_IConvertible_ToUInt16_m6989 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Decimal_System_IConvertible_ToUInt32_m6990 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Decimal_System_IConvertible_ToUInt64_m6991 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
extern "C" Int32U5BU5D_t109* Decimal_GetBits_m6992 (Object_t * __this /* static, unused */, Decimal_t763  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
extern "C" Decimal_t763  Decimal_Add_m6993 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
extern "C" Decimal_t763  Decimal_Subtract_m6994 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
extern "C" int32_t Decimal_GetHashCode_m6995 (Decimal_t763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
extern "C" uint64_t Decimal_u64_m6996 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
extern "C" int64_t Decimal_s64_m6997 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
extern "C" bool Decimal_Equals_m6998 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
extern "C" bool Decimal_Equals_m6999 (Decimal_t763 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
extern "C" bool Decimal_IsZero_m7000 (Decimal_t763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
extern "C" Decimal_t763  Decimal_Floor_m7001 (Object_t * __this /* static, unused */, Decimal_t763  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
extern "C" Decimal_t763  Decimal_Multiply_m7002 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
extern "C" Decimal_t763  Decimal_Divide_m7003 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
extern "C" int32_t Decimal_Compare_m7004 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
extern "C" int32_t Decimal_CompareTo_m7005 (Decimal_t763 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
extern "C" int32_t Decimal_CompareTo_m7006 (Decimal_t763 * __this, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
extern "C" bool Decimal_Equals_m7007 (Decimal_t763 * __this, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
extern "C" Decimal_t763  Decimal_Parse_m7008 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
extern "C" void Decimal_ThrowAtPos_m7009 (Object_t * __this /* static, unused */, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
extern "C" void Decimal_ThrowInvalidExp_m7010 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
extern "C" String_t* Decimal_stripStyles_m7011 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t1399 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" Decimal_t763  Decimal_Parse_m7012 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
extern "C" bool Decimal_PerformParse_m7013 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, Decimal_t763 * ___res, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Decimal_ToString_m7014 (Decimal_t763 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
extern "C" String_t* Decimal_ToString_m7015 (Decimal_t763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C" String_t* Decimal_ToString_m3933 (Decimal_t763 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
extern "C" int32_t Decimal_decimal2UInt64_m7016 (Object_t * __this /* static, unused */, Decimal_t763 * ___val, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
extern "C" int32_t Decimal_decimal2Int64_m7017 (Object_t * __this /* static, unused */, Decimal_t763 * ___val, int64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalIncr_m7018 (Object_t * __this /* static, unused */, Decimal_t763 * ___d1, Decimal_t763 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
extern "C" int32_t Decimal_string2decimal_m7019 (Object_t * __this /* static, unused */, Decimal_t763 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
extern "C" int32_t Decimal_decimalSetExponent_m7020 (Object_t * __this /* static, unused */, Decimal_t763 * ___val, int32_t ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
extern "C" double Decimal_decimal2double_m7021 (Object_t * __this /* static, unused */, Decimal_t763 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
extern "C" void Decimal_decimalFloorAndTrunc_m7022 (Object_t * __this /* static, unused */, Decimal_t763 * ___val, int32_t ___floorFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalMult_m7023 (Object_t * __this /* static, unused */, Decimal_t763 * ___pd1, Decimal_t763 * ___pd2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalDiv_m7024 (Object_t * __this /* static, unused */, Decimal_t763 * ___pc, Decimal_t763 * ___pa, Decimal_t763 * ___pb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalCompare_m7025 (Object_t * __this /* static, unused */, Decimal_t763 * ___d1, Decimal_t763 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
extern "C" Decimal_t763  Decimal_op_Increment_m7026 (Object_t * __this /* static, unused */, Decimal_t763  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
extern "C" Decimal_t763  Decimal_op_Subtraction_m7027 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
extern "C" Decimal_t763  Decimal_op_Multiply_m7028 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
extern "C" Decimal_t763  Decimal_op_Division_m7029 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
extern "C" uint8_t Decimal_op_Explicit_m7030 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
extern "C" int8_t Decimal_op_Explicit_m7031 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
extern "C" int16_t Decimal_op_Explicit_m7032 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint16_t Decimal_op_Explicit_m7033 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
extern "C" int32_t Decimal_op_Explicit_m7034 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint32_t Decimal_op_Explicit_m7035 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
extern "C" int64_t Decimal_op_Explicit_m7036 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint64_t Decimal_op_Explicit_m7037 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
extern "C" Decimal_t763  Decimal_op_Implicit_m7038 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
extern "C" Decimal_t763  Decimal_op_Implicit_m7039 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
extern "C" Decimal_t763  Decimal_op_Implicit_m7040 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
extern "C" Decimal_t763  Decimal_op_Implicit_m7041 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
extern "C" Decimal_t763  Decimal_op_Implicit_m7042 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
extern "C" Decimal_t763  Decimal_op_Implicit_m7043 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
extern "C" Decimal_t763  Decimal_op_Implicit_m7044 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
extern "C" Decimal_t763  Decimal_op_Implicit_m7045 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
extern "C" Decimal_t763  Decimal_op_Explicit_m7046 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
extern "C" Decimal_t763  Decimal_op_Explicit_m7047 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
extern "C" float Decimal_op_Explicit_m7048 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C" double Decimal_op_Explicit_m7049 (Object_t * __this /* static, unused */, Decimal_t763  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_Inequality_m7050 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_Equality_m7051 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_GreaterThan_m7052 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_LessThan_m7053 (Object_t * __this /* static, unused */, Decimal_t763  ___d1, Decimal_t763  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
