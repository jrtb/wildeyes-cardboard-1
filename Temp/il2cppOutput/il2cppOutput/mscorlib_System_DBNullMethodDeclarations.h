#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DBNull
struct DBNull_t1874;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.IFormatProvider
struct IFormatProvider_t761;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.DBNull::.ctor()
extern "C" void DBNull__ctor_m10376 (DBNull_t1874 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DBNull::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DBNull__ctor_m10377 (DBNull_t1874 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DBNull::.cctor()
extern "C" void DBNull__cctor_m10378 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DBNull::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool DBNull_System_IConvertible_ToBoolean_m10379 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DBNull::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t DBNull_System_IConvertible_ToByte_m10380 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DBNull::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t DBNull_System_IConvertible_ToChar_m10381 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DBNull::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t524  DBNull_System_IConvertible_ToDateTime_m10382 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DBNull::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t763  DBNull_System_IConvertible_ToDecimal_m10383 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DBNull::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double DBNull_System_IConvertible_ToDouble_m10384 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DBNull::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t DBNull_System_IConvertible_ToInt16_m10385 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DBNull::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t DBNull_System_IConvertible_ToInt32_m10386 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DBNull::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t DBNull_System_IConvertible_ToInt64_m10387 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DBNull::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t DBNull_System_IConvertible_ToSByte_m10388 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DBNull::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float DBNull_System_IConvertible_ToSingle_m10389 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DBNull::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * DBNull_System_IConvertible_ToType_m10390 (DBNull_t1874 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DBNull::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t DBNull_System_IConvertible_ToUInt16_m10391 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DBNull::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t DBNull_System_IConvertible_ToUInt32_m10392 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DBNull::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t DBNull_System_IConvertible_ToUInt64_m10393 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DBNull::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DBNull_GetObjectData_m10394 (DBNull_t1874 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DBNull::ToString()
extern "C" String_t* DBNull_ToString_m10395 (DBNull_t1874 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DBNull::ToString(System.IFormatProvider)
extern "C" String_t* DBNull_ToString_m10396 (DBNull_t1874 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
