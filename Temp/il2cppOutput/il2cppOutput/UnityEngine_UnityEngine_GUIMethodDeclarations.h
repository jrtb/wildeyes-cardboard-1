#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t72;
// UnityEngine.GUISkin
struct GUISkin_t522;
// UnityEngine.Material
struct Material_t50;
// UnityEngine.Texture
struct Texture_t13;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t382;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t521;
// UnityEngine.GUIStyle
struct GUIStyle_t525;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m2682 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m2683 (Object_t * __this /* static, unused */, DateTime_t524  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m2684 (Object_t * __this /* static, unused */, GUISkin_t522 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t522 * GUI_get_skin_m2685 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m2686 (Object_t * __this /* static, unused */, Color_t12 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C" Color_t12  GUI_get_color_m2687 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m2688 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C" void GUI_DrawTexture_m340 (Object_t * __this /* static, unused */, Rect_t18  ___position, Texture_t13 * ___image, int32_t ___scaleMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C" void GUI_DrawTexture_m2689 (Object_t * __this /* static, unused */, Rect_t18  ___position, Texture_t13 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t50 * GUI_get_blendMaterial_m2690 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t50 * GUI_get_blitMaterial_m2691 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m299 (Object_t * __this /* static, unused */, Rect_t18  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m2692 (Object_t * __this /* static, unused */, Rect_t18  ___position, GUIContent_t382 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m2693 (Object_t * __this /* static, unused */, Rect_t18 * ___position, GUIContent_t382 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m2694 (Object_t * __this /* static, unused */, WindowFunction_t521 * ___func, int32_t ___id, GUISkin_t522 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t525 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
