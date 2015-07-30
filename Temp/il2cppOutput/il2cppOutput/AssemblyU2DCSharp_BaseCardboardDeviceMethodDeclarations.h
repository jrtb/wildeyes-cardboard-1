#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BaseCardboardDevice
struct BaseCardboardDevice_t63;
// System.Collections.Generic.List`1<System.String>
struct List_1_t64;
// UnityEngine.RenderTexture
struct RenderTexture_t10;
// System.Single[]
struct SingleU5BU5D_t47;
// BaseCardboardDevice/VREventCallback
struct VREventCallback_t61;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void BaseCardboardDevice::.ctor()
extern "C" void BaseCardboardDevice__ctor_m203 (BaseCardboardDevice_t63 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C" bool BaseCardboardDevice_SupportsNativeDistortionCorrection_m204 (BaseCardboardDevice_t63 * __this, List_1_t64 * ___diagnostics, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern "C" bool BaseCardboardDevice_SupportsNativeUILayer_m205 (BaseCardboardDevice_t63 * __this, List_1_t64 * ___diagnostics, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetDistortionCorrectionEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetDistortionCorrectionEnabled_m206 (BaseCardboardDevice_t63 * __this, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetAlignmentMarkerEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetAlignmentMarkerEnabled_m207 (BaseCardboardDevice_t63 * __this, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetNeckModelScale(System.Single)
extern "C" void BaseCardboardDevice_SetNeckModelScale_m208 (BaseCardboardDevice_t63 * __this, float ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetAutoDriftCorrectionEnabled_m209 (BaseCardboardDevice_t63 * __this, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetElectronicDisplayStabilizationEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetElectronicDisplayStabilizationEnabled_m210 (BaseCardboardDevice_t63 * __this, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Init()
extern "C" void BaseCardboardDevice_Init_m211 (BaseCardboardDevice_t63 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetStereoScreen(UnityEngine.RenderTexture)
extern "C" void BaseCardboardDevice_SetStereoScreen_m212 (BaseCardboardDevice_t63 * __this, RenderTexture_t10 * ___stereoScreen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateState()
extern "C" void BaseCardboardDevice_UpdateState_m213 (BaseCardboardDevice_t63 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateScreenData()
extern "C" void BaseCardboardDevice_UpdateScreenData_m214 (BaseCardboardDevice_t63 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Recenter()
extern "C" void BaseCardboardDevice_Recenter_m215 (BaseCardboardDevice_t63 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::PostRender(System.Boolean)
extern "C" void BaseCardboardDevice_PostRender_m216 (BaseCardboardDevice_t63 * __this, bool ___vrMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnApplicationQuit()
extern "C" void BaseCardboardDevice_OnApplicationQuit_m217 (BaseCardboardDevice_t63 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateView()
extern "C" void BaseCardboardDevice_UpdateView_m218 (BaseCardboardDevice_t63 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateProfile()
extern "C" void BaseCardboardDevice_UpdateProfile_m219 (BaseCardboardDevice_t63 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BaseCardboardDevice::ExtractMatrix(UnityEngine.Matrix4x4&,System.Single[],System.Int32)
extern "C" int32_t BaseCardboardDevice_ExtractMatrix_m220 (Object_t * __this /* static, unused */, Matrix4x4_t32 * ___mat, SingleU5BU5D_t47* ___data, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::ProcessEvents()
extern "C" void BaseCardboardDevice_ProcessEvents_m221 (BaseCardboardDevice_t63 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnVREvent(System.Int32)
extern "C" void BaseCardboardDevice_OnVREvent_m222 (Object_t * __this /* static, unused */, int32_t ___eventID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Start(System.Int32,System.Int32,System.Single,System.Single)
extern "C" void BaseCardboardDevice_Start_m223 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, float ___xdpi, float ___ydpi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetEventCallback(BaseCardboardDevice/VREventCallback)
extern "C" void BaseCardboardDevice_SetEventCallback_m224 (Object_t * __this /* static, unused */, VREventCallback_t61 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetTextureId(System.Int32)
extern "C" void BaseCardboardDevice_SetTextureId_m225 (Object_t * __this /* static, unused */, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableDistortionCorrection(System.Boolean)
extern "C" void BaseCardboardDevice_EnableDistortionCorrection_m226 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableAlignmentMarker(System.Boolean)
extern "C" void BaseCardboardDevice_EnableAlignmentMarker_m227 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableAutoDriftCorrection(System.Boolean)
extern "C" void BaseCardboardDevice_EnableAutoDriftCorrection_m228 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableElectronicDisplayStabilization(System.Boolean)
extern "C" void BaseCardboardDevice_EnableElectronicDisplayStabilization_m229 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetNeckModelFactor(System.Single)
extern "C" void BaseCardboardDevice_SetNeckModelFactor_m230 (Object_t * __this /* static, unused */, float ___factor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::ResetHeadTracker()
extern "C" void BaseCardboardDevice_ResetHeadTracker_m231 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetProfile(System.Single[])
extern "C" void BaseCardboardDevice_GetProfile_m232 (Object_t * __this /* static, unused */, SingleU5BU5D_t47* ___profile, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetHeadPose(System.Single[],System.Single)
extern "C" void BaseCardboardDevice_GetHeadPose_m233 (Object_t * __this /* static, unused */, SingleU5BU5D_t47* ___pose, float ___fps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetViewParameters(System.Single[])
extern "C" void BaseCardboardDevice_GetViewParameters_m234 (Object_t * __this /* static, unused */, SingleU5BU5D_t47* ___viewParams, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Stop()
extern "C" void BaseCardboardDevice_Stop_m235 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
