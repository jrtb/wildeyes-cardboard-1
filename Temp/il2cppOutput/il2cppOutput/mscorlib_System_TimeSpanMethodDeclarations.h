#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeSpan
struct TimeSpan_t1092;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C" void TimeSpan__ctor_m10802 (TimeSpan_t1092 * __this, int64_t ___ticks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void TimeSpan__ctor_m10803 (TimeSpan_t1092 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void TimeSpan__ctor_m10804 (TimeSpan_t1092 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
extern "C" void TimeSpan__cctor_m10805 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int64_t TimeSpan_CalculateTicks_m10806 (Object_t * __this /* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
extern "C" int32_t TimeSpan_get_Days_m10807 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
extern "C" int32_t TimeSpan_get_Hours_m10808 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
extern "C" int32_t TimeSpan_get_Milliseconds_m10809 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
extern "C" int32_t TimeSpan_get_Minutes_m10810 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
extern "C" int32_t TimeSpan_get_Seconds_m10811 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C" int64_t TimeSpan_get_Ticks_m10812 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
extern "C" double TimeSpan_get_TotalDays_m10813 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
extern "C" double TimeSpan_get_TotalHours_m10814 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern "C" double TimeSpan_get_TotalMilliseconds_m10815 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
extern "C" double TimeSpan_get_TotalMinutes_m10816 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C" double TimeSpan_get_TotalSeconds_m10817 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
extern "C" TimeSpan_t1092  TimeSpan_Add_m10818 (TimeSpan_t1092 * __this, TimeSpan_t1092  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
extern "C" int32_t TimeSpan_Compare_m10819 (Object_t * __this /* static, unused */, TimeSpan_t1092  ___t1, TimeSpan_t1092  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
extern "C" int32_t TimeSpan_CompareTo_m10820 (TimeSpan_t1092 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
extern "C" int32_t TimeSpan_CompareTo_m10821 (TimeSpan_t1092 * __this, TimeSpan_t1092  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
extern "C" bool TimeSpan_Equals_m10822 (TimeSpan_t1092 * __this, TimeSpan_t1092  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
extern "C" TimeSpan_t1092  TimeSpan_Duration_m10823 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
extern "C" bool TimeSpan_Equals_m10824 (TimeSpan_t1092 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern "C" TimeSpan_t1092  TimeSpan_FromMinutes_m10825 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
extern "C" TimeSpan_t1092  TimeSpan_From_m10826 (Object_t * __this /* static, unused */, double ___value, int64_t ___tickMultiplicator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
extern "C" int32_t TimeSpan_GetHashCode_m10827 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
extern "C" TimeSpan_t1092  TimeSpan_Negate_m10828 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
extern "C" TimeSpan_t1092  TimeSpan_Subtract_m10829 (TimeSpan_t1092 * __this, TimeSpan_t1092  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
extern "C" String_t* TimeSpan_ToString_m10830 (TimeSpan_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C" TimeSpan_t1092  TimeSpan_op_Addition_m10831 (Object_t * __this /* static, unused */, TimeSpan_t1092  ___t1, TimeSpan_t1092  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_Equality_m10832 (Object_t * __this /* static, unused */, TimeSpan_t1092  ___t1, TimeSpan_t1092  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_GreaterThan_m10833 (Object_t * __this /* static, unused */, TimeSpan_t1092  ___t1, TimeSpan_t1092  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_GreaterThanOrEqual_m10834 (Object_t * __this /* static, unused */, TimeSpan_t1092  ___t1, TimeSpan_t1092  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_Inequality_m10835 (Object_t * __this /* static, unused */, TimeSpan_t1092  ___t1, TimeSpan_t1092  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_LessThan_m10836 (Object_t * __this /* static, unused */, TimeSpan_t1092  ___t1, TimeSpan_t1092  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_LessThanOrEqual_m10837 (Object_t * __this /* static, unused */, TimeSpan_t1092  ___t1, TimeSpan_t1092  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern "C" TimeSpan_t1092  TimeSpan_op_Subtraction_m10838 (Object_t * __this /* static, unused */, TimeSpan_t1092  ___t1, TimeSpan_t1092  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
