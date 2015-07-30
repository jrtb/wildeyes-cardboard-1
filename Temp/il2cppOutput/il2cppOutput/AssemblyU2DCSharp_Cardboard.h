#pragma once
#include <stdint.h>
// Cardboard
struct Cardboard_t23;
// BaseVRDevice
struct BaseVRDevice_t25;
// UnityEngine.RenderTexture
struct RenderTexture_t10;
// System.Uri
struct Uri_t26;
// CardboardUILayer
struct CardboardUILayer_t27;
// System.Action
struct Action_t28;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Cardboard
struct  Cardboard_t23  : public MonoBehaviour_t2
{
	// System.Boolean Cardboard::distortionCorrection
	bool ___distortionCorrection_3;
	// System.Boolean Cardboard::vrModeEnabled
	bool ___vrModeEnabled_4;
	// System.Boolean Cardboard::enableAlignmentMarker
	bool ___enableAlignmentMarker_5;
	// System.Boolean Cardboard::enableSettingsButton
	bool ___enableSettingsButton_6;
	// System.Boolean Cardboard::tapIsTrigger
	bool ___tapIsTrigger_7;
	// System.Single Cardboard::neckModelScale
	float ___neckModelScale_8;
	// System.Boolean Cardboard::autoDriftCorrection
	bool ___autoDriftCorrection_9;
	// System.Boolean Cardboard::syncWithCardboardApp
	bool ___syncWithCardboardApp_10;
	// UnityEngine.Vector2 Cardboard::defaultComfortableViewingRange
	Vector2_t15  ___defaultComfortableViewingRange_13;
	// System.Uri Cardboard::DefaultDeviceProfile
	Uri_t26 * ___DefaultDeviceProfile_14;
	// System.Boolean Cardboard::updated
	bool ___updated_15;
	// CardboardUILayer Cardboard::uiLayer
	CardboardUILayer_t27 * ___uiLayer_16;
	// System.Action Cardboard::OnTrigger
	Action_t28 * ___OnTrigger_17;
	// System.Action Cardboard::OnTilt
	Action_t28 * ___OnTilt_18;
	// System.Boolean Cardboard::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19;
	// System.Boolean Cardboard::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_20;
	// System.Boolean Cardboard::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_21;
	// System.Boolean Cardboard::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_22;
};
struct Cardboard_t23_StaticFields{
	// Cardboard Cardboard::sdk
	Cardboard_t23 * ___sdk_2;
	// BaseVRDevice Cardboard::device
	BaseVRDevice_t25 * ___device_11;
	// UnityEngine.RenderTexture Cardboard::stereoScreen
	RenderTexture_t10 * ___stereoScreen_12;
};
