#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Text
struct Text_t224;
// UnityEngine.TextGenerator
struct TextGenerator_t270;
// UnityEngine.Material
struct Material_t50;
// UnityEngine.Texture
struct Texture_t13;
// UnityEngine.Font
struct Font_t220;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t234;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Text::.ctor()
extern "C" void Text__ctor_m1491 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::.cctor()
extern "C" void Text__cctor_m1492 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGenerator()
extern "C" TextGenerator_t270 * Text_get_cachedTextGenerator_m1493 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGeneratorForLayout()
extern "C" TextGenerator_t270 * Text_get_cachedTextGeneratorForLayout_m1494 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Text::get_defaultMaterial()
extern "C" Material_t50 * Text_get_defaultMaterial_m1495 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Text::get_mainTexture()
extern "C" Texture_t13 * Text_get_mainTexture_m1496 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::FontTextureChanged()
extern "C" void Text_FontTextureChanged_m1497 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.UI.Text::get_font()
extern "C" Font_t220 * Text_get_font_m1498 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
extern "C" void Text_set_font_m1499 (Text_t224 * __this, Font_t220 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.Text::get_text()
extern "C" String_t* Text_get_text_m1500 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_text(System.String)
extern "C" void Text_set_text_m1501 (Text_t224 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_supportRichText()
extern "C" bool Text_get_supportRichText_m1502 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_supportRichText(System.Boolean)
extern "C" void Text_set_supportRichText_m1503 (Text_t224 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_resizeTextForBestFit()
extern "C" bool Text_get_resizeTextForBestFit_m1504 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextForBestFit(System.Boolean)
extern "C" void Text_set_resizeTextForBestFit_m1505 (Text_t224 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMinSize()
extern "C" int32_t Text_get_resizeTextMinSize_m1506 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMinSize(System.Int32)
extern "C" void Text_set_resizeTextMinSize_m1507 (Text_t224 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMaxSize()
extern "C" int32_t Text_get_resizeTextMaxSize_m1508 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMaxSize(System.Int32)
extern "C" void Text_set_resizeTextMaxSize_m1509 (Text_t224 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.Text::get_alignment()
extern "C" int32_t Text_get_alignment_m1510 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
extern "C" void Text_set_alignment_m1511 (Text_t224 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_fontSize()
extern "C" int32_t Text_get_fontSize_m1512 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
extern "C" void Text_set_fontSize_m1513 (Text_t224 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.Text::get_horizontalOverflow()
extern "C" int32_t Text_get_horizontalOverflow_m1514 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
extern "C" void Text_set_horizontalOverflow_m1515 (Text_t224 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VerticalWrapMode UnityEngine.UI.Text::get_verticalOverflow()
extern "C" int32_t Text_get_verticalOverflow_m1516 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_verticalOverflow(UnityEngine.VerticalWrapMode)
extern "C" void Text_set_verticalOverflow_m1517 (Text_t224 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_lineSpacing()
extern "C" float Text_get_lineSpacing_m1518 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_lineSpacing(System.Single)
extern "C" void Text_set_lineSpacing_m1519 (Text_t224 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.UI.Text::get_fontStyle()
extern "C" int32_t Text_get_fontStyle_m1520 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
extern "C" void Text_set_fontStyle_m1521 (Text_t224 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_pixelsPerUnit()
extern "C" float Text_get_pixelsPerUnit_m1522 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnEnable()
extern "C" void Text_OnEnable_m1523 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnDisable()
extern "C" void Text_OnDisable_m1524 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::UpdateGeometry()
extern "C" void Text_UpdateGeometry_m1525 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.UI.Text::GetGenerationSettings(UnityEngine.Vector2)
extern "C" TextGenerationSettings_t304  Text_GetGenerationSettings_m1526 (Text_t224 * __this, Vector2_t15  ___extents, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Text::GetTextAnchorPivot(UnityEngine.TextAnchor)
extern "C" Vector2_t15  Text_GetTextAnchorPivot_m1527 (Object_t * __this /* static, unused */, int32_t ___anchor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Text_OnFillVBO_m1528 (Text_t224 * __this, List_1_t234 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputHorizontal()
extern "C" void Text_CalculateLayoutInputHorizontal_m1529 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputVertical()
extern "C" void Text_CalculateLayoutInputVertical_m1530 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minWidth()
extern "C" float Text_get_minWidth_m1531 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredWidth()
extern "C" float Text_get_preferredWidth_m1532 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleWidth()
extern "C" float Text_get_flexibleWidth_m1533 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minHeight()
extern "C" float Text_get_minHeight_m1534 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredHeight()
extern "C" float Text_get_preferredHeight_m1535 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleHeight()
extern "C" float Text_get_flexibleHeight_m1536 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_layoutPriority()
extern "C" int32_t Text_get_layoutPriority_m1537 (Text_t224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
