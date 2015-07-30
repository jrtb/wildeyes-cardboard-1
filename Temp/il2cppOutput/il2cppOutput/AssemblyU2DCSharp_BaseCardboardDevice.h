#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t47;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t62;
// BaseVRDevice
#include "AssemblyU2DCSharp_BaseVRDevice.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// BaseCardboardDevice
struct  BaseCardboardDevice_t63  : public BaseVRDevice_t25
{
	// System.Single[] BaseCardboardDevice::headData
	SingleU5BU5D_t47* ___headData_20;
	// System.Single[] BaseCardboardDevice::viewData
	SingleU5BU5D_t47* ___viewData_21;
	// System.Single[] BaseCardboardDevice::profileData
	SingleU5BU5D_t47* ___profileData_22;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::headView
	Matrix4x4_t32  ___headView_23;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::leftEyeView
	Matrix4x4_t32  ___leftEyeView_24;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::rightEyeView
	Matrix4x4_t32  ___rightEyeView_25;
	// System.Collections.Generic.Queue`1<System.Int32> BaseCardboardDevice::eventQueue
	Queue_1_t62 * ___eventQueue_26;
	// System.Boolean BaseCardboardDevice::debugDisableNativeProjections
	bool ___debugDisableNativeProjections_27;
	// System.Boolean BaseCardboardDevice::debugDisableNativeDistortion
	bool ___debugDisableNativeDistortion_28;
	// System.Boolean BaseCardboardDevice::debugDisableNativeUILayer
	bool ___debugDisableNativeUILayer_29;
};
