#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1161;
// System.String
struct String_t;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1156;
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
extern "C" void AnchorInfo__ctor_m5129 (AnchorInfo_t1161 * __this, Expression_t1156 * ___expr, int32_t ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
extern "C" void AnchorInfo__ctor_m5130 (AnchorInfo_t1161 * __this, Expression_t1156 * ___expr, int32_t ___offset, int32_t ___width, String_t* ___str, bool ___ignore, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
extern "C" void AnchorInfo__ctor_m5131 (AnchorInfo_t1161 * __this, Expression_t1156 * ___expr, int32_t ___offset, int32_t ___width, uint16_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
extern "C" int32_t AnchorInfo_get_Offset_m5132 (AnchorInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
extern "C" int32_t AnchorInfo_get_Width_m5133 (AnchorInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
extern "C" int32_t AnchorInfo_get_Length_m5134 (AnchorInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
extern "C" bool AnchorInfo_get_IsUnknownWidth_m5135 (AnchorInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
extern "C" bool AnchorInfo_get_IsComplete_m5136 (AnchorInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
extern "C" String_t* AnchorInfo_get_Substring_m5137 (AnchorInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
extern "C" bool AnchorInfo_get_IgnoreCase_m5138 (AnchorInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
extern "C" uint16_t AnchorInfo_get_Position_m5139 (AnchorInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
extern "C" bool AnchorInfo_get_IsSubstring_m5140 (AnchorInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
extern "C" bool AnchorInfo_get_IsPosition_m5141 (AnchorInfo_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
extern "C" Interval_t1148  AnchorInfo_GetInterval_m5142 (AnchorInfo_t1161 * __this, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
