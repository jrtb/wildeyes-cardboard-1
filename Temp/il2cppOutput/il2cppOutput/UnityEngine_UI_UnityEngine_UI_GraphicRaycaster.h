﻿#pragma once
#include <stdint.h>
// UnityEngine.Canvas
struct Canvas_t229;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t236;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t237;
// UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycaster.h"
// UnityEngine.UI.GraphicRaycaster/BlockingObjects
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_BlockingObjec.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.UI.GraphicRaycaster
struct  GraphicRaycaster_t238  : public BaseRaycaster_t185
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_3;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_4;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t37  ___m_BlockingMask_5;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t229 * ___m_Canvas_6;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_t236 * ___m_RaycastResults_7;
};
struct GraphicRaycaster_t238_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_t236 * ___s_SortedGraphics_8;
	// System.Comparison`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::<>f__am$cache6
	Comparison_1_t237 * ___U3CU3Ef__am$cache6_9;
};
