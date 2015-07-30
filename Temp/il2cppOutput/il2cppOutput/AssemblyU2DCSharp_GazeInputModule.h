#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t51;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// GazeInputModule
struct  GazeInputModule_t53  : public BaseInputModule_t54
{
	// System.Boolean GazeInputModule::vrModeOnly
	bool ___vrModeOnly_6;
	// UnityEngine.GameObject GazeInputModule::cursor
	GameObject_t51 * ___cursor_7;
	// System.Single GazeInputModule::clickTime
	float ___clickTime_8;
	// UnityEngine.Vector2 GazeInputModule::hotspot
	Vector2_t15  ___hotspot_9;
	// UnityEngine.EventSystems.PointerEventData GazeInputModule::pointerData
	PointerEventData_t52 * ___pointerData_10;
};
