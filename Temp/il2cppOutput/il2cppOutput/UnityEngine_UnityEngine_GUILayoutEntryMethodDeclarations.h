#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t533;
// UnityEngine.GUIStyle
struct GUIStyle_t525;
// UnityEngine.RectOffset
struct RectOffset_t330;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t532;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry__ctor_m2710 (GUILayoutEntry_t533 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t525 * ____style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern "C" void GUILayoutEntry__cctor_m2711 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" GUIStyle_t525 * GUILayoutEntry_get_style_m2712 (GUILayoutEntry_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_set_style_m2713 (GUILayoutEntry_t533 * __this, GUIStyle_t525 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern "C" RectOffset_t330 * GUILayoutEntry_get_margin_m2714 (GUILayoutEntry_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C" void GUILayoutEntry_CalcWidth_m2715 (GUILayoutEntry_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C" void GUILayoutEntry_CalcHeight_m2716 (GUILayoutEntry_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetHorizontal_m2717 (GUILayoutEntry_t533 * __this, float ___x, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetVertical_m2718 (GUILayoutEntry_t533 * __this, float ___y, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_ApplyStyleSettings_m2719 (GUILayoutEntry_t533 * __this, GUIStyle_t525 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutEntry_ApplyOptions_m2720 (GUILayoutEntry_t533 * __this, GUILayoutOptionU5BU5D_t532* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutEntry::ToString()
extern "C" String_t* GUILayoutEntry_ToString_m2721 (GUILayoutEntry_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
