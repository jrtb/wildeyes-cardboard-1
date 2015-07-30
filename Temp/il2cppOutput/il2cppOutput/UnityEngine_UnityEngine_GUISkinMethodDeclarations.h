#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin
struct GUISkin_t522;
// UnityEngine.Font
struct Font_t220;
// UnityEngine.GUIStyle
struct GUIStyle_t525;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t541;
// UnityEngine.GUISettings
struct GUISettings_t539;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;

// System.Void UnityEngine.GUISkin::.ctor()
extern "C" void GUISkin__ctor_m2754 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::OnEnable()
extern "C" void GUISkin_OnEnable_m2755 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" Font_t220 * GUISkin_get_font_m2756 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
extern "C" void GUISkin_set_font_m2757 (GUISkin_t522 * __this, Font_t220 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern "C" GUIStyle_t525 * GUISkin_get_box_m2758 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_box_m2759 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C" GUIStyle_t525 * GUISkin_get_label_m2760 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_label_m2761 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern "C" GUIStyle_t525 * GUISkin_get_textField_m2762 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textField_m2763 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern "C" GUIStyle_t525 * GUISkin_get_textArea_m2764 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textArea_m2765 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern "C" GUIStyle_t525 * GUISkin_get_button_m2766 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_button_m2767 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern "C" GUIStyle_t525 * GUISkin_get_toggle_m2768 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_toggle_m2769 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern "C" GUIStyle_t525 * GUISkin_get_window_m2770 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_window_m2771 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern "C" GUIStyle_t525 * GUISkin_get_horizontalSlider_m2772 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSlider_m2773 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern "C" GUIStyle_t525 * GUISkin_get_horizontalSliderThumb_m2774 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSliderThumb_m2775 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern "C" GUIStyle_t525 * GUISkin_get_verticalSlider_m2776 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSlider_m2777 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern "C" GUIStyle_t525 * GUISkin_get_verticalSliderThumb_m2778 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSliderThumb_m2779 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern "C" GUIStyle_t525 * GUISkin_get_horizontalScrollbar_m2780 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbar_m2781 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern "C" GUIStyle_t525 * GUISkin_get_horizontalScrollbarThumb_m2782 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarThumb_m2783 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern "C" GUIStyle_t525 * GUISkin_get_horizontalScrollbarLeftButton_m2784 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarLeftButton_m2785 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern "C" GUIStyle_t525 * GUISkin_get_horizontalScrollbarRightButton_m2786 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarRightButton_m2787 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern "C" GUIStyle_t525 * GUISkin_get_verticalScrollbar_m2788 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbar_m2789 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern "C" GUIStyle_t525 * GUISkin_get_verticalScrollbarThumb_m2790 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarThumb_m2791 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern "C" GUIStyle_t525 * GUISkin_get_verticalScrollbarUpButton_m2792 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarUpButton_m2793 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern "C" GUIStyle_t525 * GUISkin_get_verticalScrollbarDownButton_m2794 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarDownButton_m2795 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern "C" GUIStyle_t525 * GUISkin_get_scrollView_m2796 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_scrollView_m2797 (GUISkin_t522 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern "C" GUIStyleU5BU5D_t541* GUISkin_get_customStyles_m2798 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
extern "C" void GUISkin_set_customStyles_m2799 (GUISkin_t522 * __this, GUIStyleU5BU5D_t541* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern "C" GUISettings_t539 * GUISkin_get_settings_m2800 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern "C" GUIStyle_t525 * GUISkin_get_error_m2801 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::Apply()
extern "C" void GUISkin_Apply_m2802 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
extern "C" void GUISkin_BuildStyleCache_m2803 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
extern "C" GUIStyle_t525 * GUISkin_GetStyle_m2804 (GUISkin_t522 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern "C" GUIStyle_t525 * GUISkin_FindStyle_m2805 (GUISkin_t522 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern "C" void GUISkin_MakeCurrent_m2806 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
extern "C" Object_t * GUISkin_GetEnumerator_m2807 (GUISkin_t522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
