#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DaylightTime
struct DaylightTime_t1539;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
extern "C" void DaylightTime__ctor_m8179 (DaylightTime_t1539 * __this, DateTime_t524  ___start, DateTime_t524  ___end, TimeSpan_t1092  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
extern "C" DateTime_t524  DaylightTime_get_Start_m8180 (DaylightTime_t1539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
extern "C" DateTime_t524  DaylightTime_get_End_m8181 (DaylightTime_t1539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
extern "C" TimeSpan_t1092  DaylightTime_get_Delta_m8182 (DaylightTime_t1539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
