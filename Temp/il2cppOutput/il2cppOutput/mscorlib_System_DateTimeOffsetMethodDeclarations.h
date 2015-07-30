#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTimeOffset
struct DateTimeOffset_t776;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t761;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
extern "C" void DateTimeOffset__ctor_m10464 (DateTimeOffset_t776 * __this, DateTime_t524  ___dateTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C" void DateTimeOffset__ctor_m10465 (DateTimeOffset_t776 * __this, DateTime_t524  ___dateTime, TimeSpan_t1092  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C" void DateTimeOffset__ctor_m10466 (DateTimeOffset_t776 * __this, int64_t ___ticks, TimeSpan_t1092  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DateTimeOffset__ctor_m10467 (DateTimeOffset_t776 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
extern "C" void DateTimeOffset__cctor_m10468 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
extern "C" int32_t DateTimeOffset_System_IComparable_CompareTo_m10469 (DateTimeOffset_t776 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m10470 (DateTimeOffset_t776 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10471 (DateTimeOffset_t776 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
extern "C" int32_t DateTimeOffset_CompareTo_m10472 (DateTimeOffset_t776 * __this, DateTimeOffset_t776  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
extern "C" bool DateTimeOffset_Equals_m10473 (DateTimeOffset_t776 * __this, DateTimeOffset_t776  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C" bool DateTimeOffset_Equals_m10474 (DateTimeOffset_t776 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
extern "C" int32_t DateTimeOffset_GetHashCode_m10475 (DateTimeOffset_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
extern "C" String_t* DateTimeOffset_ToString_m10476 (DateTimeOffset_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C" String_t* DateTimeOffset_ToString_m3968 (DateTimeOffset_t776 * __this, String_t* ___format, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ToUniversalTime()
extern "C" DateTimeOffset_t776  DateTimeOffset_ToUniversalTime_m3967 (DateTimeOffset_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C" DateTime_t524  DateTimeOffset_get_DateTime_m10477 (DateTimeOffset_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C" TimeSpan_t1092  DateTimeOffset_get_Offset_m10478 (DateTimeOffset_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C" DateTime_t524  DateTimeOffset_get_UtcDateTime_m10479 (DateTimeOffset_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
