﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.FontData
struct FontData_t221;
// UnityEngine.Font
struct Font_t220;
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"

// System.Void UnityEngine.UI.FontData::.ctor()
extern "C" void FontData__ctor_m948 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void FontData_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m949 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void FontData_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m950 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.FontData UnityEngine.UI.FontData::get_defaultFontData()
extern "C" FontData_t221 * FontData_get_defaultFontData_m951 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.UI.FontData::get_font()
extern "C" Font_t220 * FontData_get_font_m952 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_font(UnityEngine.Font)
extern "C" void FontData_set_font_m953 (FontData_t221 * __this, Font_t220 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_fontSize()
extern "C" int32_t FontData_get_fontSize_m954 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_fontSize(System.Int32)
extern "C" void FontData_set_fontSize_m955 (FontData_t221 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.UI.FontData::get_fontStyle()
extern "C" int32_t FontData_get_fontStyle_m956 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_fontStyle(UnityEngine.FontStyle)
extern "C" void FontData_set_fontStyle_m957 (FontData_t221 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.FontData::get_bestFit()
extern "C" bool FontData_get_bestFit_m958 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_bestFit(System.Boolean)
extern "C" void FontData_set_bestFit_m959 (FontData_t221 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_minSize()
extern "C" int32_t FontData_get_minSize_m960 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_minSize(System.Int32)
extern "C" void FontData_set_minSize_m961 (FontData_t221 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_maxSize()
extern "C" int32_t FontData_get_maxSize_m962 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_maxSize(System.Int32)
extern "C" void FontData_set_maxSize_m963 (FontData_t221 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.FontData::get_alignment()
extern "C" int32_t FontData_get_alignment_m964 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_alignment(UnityEngine.TextAnchor)
extern "C" void FontData_set_alignment_m965 (FontData_t221 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.FontData::get_richText()
extern "C" bool FontData_get_richText_m966 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_richText(System.Boolean)
extern "C" void FontData_set_richText_m967 (FontData_t221 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.FontData::get_horizontalOverflow()
extern "C" int32_t FontData_get_horizontalOverflow_m968 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
extern "C" void FontData_set_horizontalOverflow_m969 (FontData_t221 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VerticalWrapMode UnityEngine.UI.FontData::get_verticalOverflow()
extern "C" int32_t FontData_get_verticalOverflow_m970 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_verticalOverflow(UnityEngine.VerticalWrapMode)
extern "C" void FontData_set_verticalOverflow_m971 (FontData_t221 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.FontData::get_lineSpacing()
extern "C" float FontData_get_lineSpacing_m972 (FontData_t221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_lineSpacing(System.Single)
extern "C" void FontData_set_lineSpacing_m973 (FontData_t221 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
