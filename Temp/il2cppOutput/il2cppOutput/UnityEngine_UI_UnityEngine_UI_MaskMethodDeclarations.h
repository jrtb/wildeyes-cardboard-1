#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Mask
struct Mask_t340;
// UnityEngine.UI.Graphic
struct Graphic_t233;
// UnityEngine.RectTransform
struct RectTransform_t227;
// UnityEngine.Camera
struct Camera_t35;
// UnityEngine.Material
struct Material_t50;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Mask::.ctor()
extern "C" void Mask__ctor_m1757 (Mask_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
extern "C" Graphic_t233 * Mask_get_graphic_m1758 (Mask_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
extern "C" bool Mask_get_showMaskGraphic_m1759 (Mask_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
extern "C" void Mask_set_showMaskGraphic_m1760 (Mask_t340 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
extern "C" RectTransform_t227 * Mask_get_rectTransform_m1761 (Mask_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
extern "C" bool Mask_MaskEnabled_m1762 (Mask_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
extern "C" void Mask_OnSiblingGraphicEnabledDisabled_m1763 (Mask_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::NotifyMaskStateChanged()
extern "C" void Mask_NotifyMaskStateChanged_m1764 (Mask_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::ClearCachedMaterial()
extern "C" void Mask_ClearCachedMaterial_m1765 (Mask_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
extern "C" void Mask_OnEnable_m1766 (Mask_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
extern "C" void Mask_OnDisable_m1767 (Mask_t340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool Mask_IsRaycastLocationValid_m1768 (Mask_t340 * __this, Vector2_t15  ___sp, Camera_t35 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
extern "C" Material_t50 * Mask_GetModifiedMaterial_m1769 (Mask_t340 * __this, Material_t50 * ___baseMaterial, MethodInfo* method) IL2CPP_METHOD_ATTR;
