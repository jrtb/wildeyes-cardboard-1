#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1535;
// System.String[]
struct StringU5BU5D_t87;
// System.String
struct String_t;
// System.Globalization.Calendar
struct Calendar_t1531;
// System.IFormatProvider
struct IFormatProvider_t761;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
extern "C" void DateTimeFormatInfo__ctor_m8138 (DateTimeFormatInfo_t1535 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
extern "C" void DateTimeFormatInfo__ctor_m8139 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
extern "C" void DateTimeFormatInfo__cctor_m8140 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
extern "C" DateTimeFormatInfo_t1535 * DateTimeFormatInfo_GetInstance_m8141 (Object_t * __this /* static, unused */, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
extern "C" bool DateTimeFormatInfo_get_IsReadOnly_m8142 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
extern "C" DateTimeFormatInfo_t1535 * DateTimeFormatInfo_ReadOnly_m8143 (Object_t * __this /* static, unused */, DateTimeFormatInfo_t1535 * ___dtfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
extern "C" Object_t * DateTimeFormatInfo_Clone_m8144 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
extern "C" Object_t * DateTimeFormatInfo_GetFormat_m8145 (DateTimeFormatInfo_t1535 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m8146 (DateTimeFormatInfo_t1535 * __this, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetEraName_m8147 (DateTimeFormatInfo_t1535 * __this, int32_t ___era, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetMonthName_m8148 (DateTimeFormatInfo_t1535 * __this, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
extern "C" StringU5BU5D_t87* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m8149 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
extern "C" StringU5BU5D_t87* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m8150 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
extern "C" StringU5BU5D_t87* DateTimeFormatInfo_get_RawDayNames_m8151 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
extern "C" StringU5BU5D_t87* DateTimeFormatInfo_get_RawMonthNames_m8152 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
extern "C" String_t* DateTimeFormatInfo_get_AMDesignator_m8153 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
extern "C" String_t* DateTimeFormatInfo_get_PMDesignator_m8154 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
extern "C" String_t* DateTimeFormatInfo_get_DateSeparator_m8155 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
extern "C" String_t* DateTimeFormatInfo_get_TimeSeparator_m8156 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
extern "C" String_t* DateTimeFormatInfo_get_LongDatePattern_m8157 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
extern "C" String_t* DateTimeFormatInfo_get_ShortDatePattern_m8158 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_ShortTimePattern_m8159 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_LongTimePattern_m8160 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
extern "C" String_t* DateTimeFormatInfo_get_MonthDayPattern_m8161 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
extern "C" String_t* DateTimeFormatInfo_get_YearMonthPattern_m8162 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_FullDateTimePattern_m8163 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
extern "C" DateTimeFormatInfo_t1535 * DateTimeFormatInfo_get_CurrentInfo_m8164 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C" DateTimeFormatInfo_t1535 * DateTimeFormatInfo_get_InvariantInfo_m8165 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
extern "C" Calendar_t1531 * DateTimeFormatInfo_get_Calendar_m8166 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
extern "C" void DateTimeFormatInfo_set_Calendar_m8167 (DateTimeFormatInfo_t1535 * __this, Calendar_t1531 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
extern "C" String_t* DateTimeFormatInfo_get_RFC1123Pattern_m8168 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
extern "C" String_t* DateTimeFormatInfo_get_RoundtripPattern_m8169 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m8170 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m8171 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
extern "C" StringU5BU5D_t87* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m8172 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
extern "C" void DateTimeFormatInfo_FillAllDateTimePatterns_m8173 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
extern "C" StringU5BU5D_t87* DateTimeFormatInfo_GetAllRawDateTimePatterns_m8174 (DateTimeFormatInfo_t1535 * __this, uint16_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
extern "C" String_t* DateTimeFormatInfo_GetDayName_m8175 (DateTimeFormatInfo_t1535 * __this, int32_t ___dayofweek, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
extern "C" String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m8176 (DateTimeFormatInfo_t1535 * __this, int32_t ___dayofweek, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
extern "C" void DateTimeFormatInfo_FillInvariantPatterns_m8177 (DateTimeFormatInfo_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
extern "C" StringU5BU5D_t87* DateTimeFormatInfo_PopulateCombinedList_m8178 (DateTimeFormatInfo_t1535 * __this, StringU5BU5D_t87* ___dates, StringU5BU5D_t87* ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
