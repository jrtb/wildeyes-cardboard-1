#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t50;
// UnityEngine.Texture2D
struct Texture2D_t225;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t226;
// UnityEngine.RectTransform
struct RectTransform_t227;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t228;
// UnityEngine.Canvas
struct Canvas_t229;
// UnityEngine.Events.UnityAction
struct UnityAction_t230;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t231;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t232;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.Graphic
struct  Graphic_t233  : public UIBehaviour_t144
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t50 * ___m_Material_5;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t12  ___m_Color_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t227 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t228 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t229 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t230 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t230 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t230 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t231 * ___m_ColorTweenRunner_15;
};
struct Graphic_t233_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t50 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t225 * ___s_WhiteTexture_3;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::s_VboPool
	ObjectPool_1_t226 * ___s_VboPool_4;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::<>f__am$cacheE
	UnityAction_1_t232 * ___U3CU3Ef__am$cacheE_16;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::<>f__am$cacheF
	UnityAction_1_t232 * ___U3CU3Ef__am$cacheF_17;
};
