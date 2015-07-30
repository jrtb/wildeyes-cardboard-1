#pragma once
#include <stdint.h>
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t568;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Camera
struct  Camera_t35  : public Behaviour_t402
{
};
struct Camera_t35_StaticFields{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t568 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t568 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t568 * ___onPostRender_4;
};
