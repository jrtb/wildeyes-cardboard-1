#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t528;
// UnityEngine.RectOffset
struct RectOffset_t330;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t532;
// UnityEngine.GUIStyle
struct GUIStyle_t525;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern "C" void GUILayoutGroup__ctor_m2722 (GUILayoutGroup_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t330 * GUILayoutGroup_get_margin_m2723 (GUILayoutGroup_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutGroup_ApplyOptions_m2724 (GUILayoutGroup_t528 * __this, GUILayoutOptionU5BU5D_t532* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutGroup_ApplyStyleSettings_m2725 (GUILayoutGroup_t528 * __this, GUIStyle_t525 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m2726 (GUILayoutGroup_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern "C" void GUILayoutGroup_CalcWidth_m2727 (GUILayoutGroup_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetHorizontal_m2728 (GUILayoutGroup_t528 * __this, float ___x, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern "C" void GUILayoutGroup_CalcHeight_m2729 (GUILayoutGroup_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetVertical_m2730 (GUILayoutGroup_t528 * __this, float ___y, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutGroup::ToString()
extern "C" String_t* GUILayoutGroup_ToString_m2731 (GUILayoutGroup_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
