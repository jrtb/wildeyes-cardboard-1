#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t50;
// UnityEngine.UI.Graphic
struct Graphic_t233;
// UnityEngine.RectTransform
struct RectTransform_t227;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Mask
struct  Mask_t340  : public UIBehaviour_t144
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_2;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t50 * ___m_RenderMaterial_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t233 * ___m_Graphic_4;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t227 * ___m_RectTransform_5;
};
