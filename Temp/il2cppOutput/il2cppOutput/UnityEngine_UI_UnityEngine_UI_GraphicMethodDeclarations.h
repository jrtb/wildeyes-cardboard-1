#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Graphic
struct Graphic_t233;
// UnityEngine.Material
struct Material_t50;
// UnityEngine.RectTransform
struct RectTransform_t227;
// UnityEngine.Canvas
struct Canvas_t229;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t228;
// UnityEngine.Texture
struct Texture_t13;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t234;
// UnityEngine.Camera
struct Camera_t35;
// UnityEngine.Events.UnityAction
struct UnityAction_t230;
// UnityEngine.Transform
struct Transform_t38;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
extern "C" void Graphic__ctor_m978 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
extern "C" void Graphic__cctor_m979 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
extern "C" Material_t50 * Graphic_get_defaultGraphicMaterial_m980 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
extern "C" Color_t12  Graphic_get_color_m981 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
extern "C" void Graphic_set_color_m982 (Graphic_t233 * __this, Color_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
extern "C" void Graphic_SetAllDirty_m983 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
extern "C" void Graphic_SetLayoutDirty_m984 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
extern "C" void Graphic_SetVerticesDirty_m985 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
extern "C" void Graphic_SetMaterialDirty_m986 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
extern "C" void Graphic_OnRectTransformDimensionsChange_m987 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
extern "C" void Graphic_OnBeforeTransformParentChanged_m988 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
extern "C" void Graphic_OnTransformParentChanged_m989 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
extern "C" int32_t Graphic_get_depth_m990 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C" RectTransform_t227 * Graphic_get_rectTransform_m991 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
extern "C" Canvas_t229 * Graphic_get_canvas_m992 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
extern "C" void Graphic_CacheCanvas_m993 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
extern "C" CanvasRenderer_t228 * Graphic_get_canvasRenderer_m994 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
extern "C" Material_t50 * Graphic_get_defaultMaterial_m995 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
extern "C" Material_t50 * Graphic_get_material_m996 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
extern "C" void Graphic_set_material_m997 (Graphic_t233 * __this, Material_t50 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
extern "C" Material_t50 * Graphic_get_materialForRendering_m998 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
extern "C" Texture_t13 * Graphic_get_mainTexture_m999 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
extern "C" void Graphic_OnEnable_m1000 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
extern "C" void Graphic_OnDisable_m1001 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SendGraphicEnabledDisabled()
extern "C" void Graphic_SendGraphicEnabledDisabled_m1002 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnCanvasHierarchyChanged()
extern "C" void Graphic_OnCanvasHierarchyChanged_m1003 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Graphic_Rebuild_m1004 (Graphic_t233 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
extern "C" void Graphic_UpdateGeometry_m1005 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
extern "C" void Graphic_UpdateMaterial_m1006 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Graphic_OnFillVBO_m1007 (Graphic_t233 * __this, List_1_t234 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
extern "C" void Graphic_OnDidApplyAnimationProperties_m1008 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
extern "C" void Graphic_SetNativeSize_m1009 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool Graphic_Raycast_m1010 (Graphic_t233 * __this, Vector2_t15  ___sp, Camera_t35 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
extern "C" Vector2_t15  Graphic_PixelAdjustPoint_m1011 (Graphic_t233 * __this, Vector2_t15  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
extern "C" Rect_t18  Graphic_GetPixelAdjustedRect_m1012 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
extern "C" void Graphic_CrossFadeColor_m1013 (Graphic_t233 * __this, Color_t12  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
extern "C" void Graphic_CrossFadeColor_m1014 (Graphic_t233 * __this, Color_t12  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, bool ___useRGB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
extern "C" Color_t12  Graphic_CreateColorFromAlpha_m1015 (Object_t * __this /* static, unused */, float ___alpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
extern "C" void Graphic_CrossFadeAlpha_m1016 (Graphic_t233 * __this, float ___alpha, float ___duration, bool ___ignoreTimeScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyLayoutCallback_m1017 (Graphic_t233 * __this, UnityAction_t230 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyLayoutCallback_m1018 (Graphic_t233 * __this, UnityAction_t230 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyVerticesCallback_m1019 (Graphic_t233 * __this, UnityAction_t230 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyVerticesCallback_m1020 (Graphic_t233 * __this, UnityAction_t230 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyMaterialCallback_m1021 (Graphic_t233 * __this, UnityAction_t230 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyMaterialCallback_m1022 (Graphic_t233 * __this, UnityAction_t230 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__4(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Graphic_U3Cs_VboPoolU3Em__4_m1023 (Object_t * __this /* static, unused */, List_1_t234 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__5(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Graphic_U3Cs_VboPoolU3Em__5_m1024 (Object_t * __this /* static, unused */, List_1_t234 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Graphic_UnityEngine_UI_ICanvasElement_IsDestroyed_m1025 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t38 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m1026 (Graphic_t233 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
