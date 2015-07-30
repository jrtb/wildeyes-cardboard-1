#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Shadow
struct Shadow_t350;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t234;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void UnityEngine.UI.Shadow::.ctor()
extern "C" void Shadow__ctor_m1786 (Shadow_t350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
extern "C" Color_t12  Shadow_get_effectColor_m1787 (Shadow_t350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
extern "C" void Shadow_set_effectColor_m1788 (Shadow_t350 * __this, Color_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Shadow::get_effectDistance()
extern "C" Vector2_t15  Shadow_get_effectDistance_m1789 (Shadow_t350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectDistance(UnityEngine.Vector2)
extern "C" void Shadow_set_effectDistance_m1790 (Shadow_t350 * __this, Vector2_t15  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Shadow::get_useGraphicAlpha()
extern "C" bool Shadow_get_useGraphicAlpha_m1791 (Shadow_t350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_useGraphicAlpha(System.Boolean)
extern "C" void Shadow_set_useGraphicAlpha_m1792 (Shadow_t350 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C" void Shadow_ApplyShadow_m1793 (Shadow_t350 * __this, List_1_t234 * ___verts, Color32_t352  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Shadow_ModifyVertices_m1794 (Shadow_t350 * __this, List_1_t234 * ___verts, MethodInfo* method) IL2CPP_METHOD_ATTR;
