#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera
struct Camera_t35;
// UnityEngine.RenderTexture
struct RenderTexture_t10;
// UnityEngine.Camera[]
struct CameraU5BU5D_t569;
// UnityEngine.GameObject
struct GameObject_t51;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C" void Camera_set_fieldOfView_m427 (Camera_t35 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m423 (Camera_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m424 (Camera_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m1802 (Camera_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depth(System.Single)
extern "C" void Camera_set_depth_m396 (Camera_t35 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m452 (Camera_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C" void Camera_set_cullingMask_m394 (Camera_t35 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m3084 (Camera_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_set_backgroundColor_m3085 (Camera_t35 * __this, Color_t12 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern "C" void Camera_set_backgroundColor_m393 (Camera_t35 * __this, Color_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_rect_m3086 (Camera_t35 * __this, Rect_t18 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_set_rect_m3087 (Camera_t35 * __this, Rect_t18 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern "C" Rect_t18  Camera_get_rect_m410 (Camera_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern "C" void Camera_set_rect_m438 (Camera_t35 * __this, Rect_t18  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m3088 (Camera_t35 * __this, Rect_t18 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t18  Camera_get_pixelRect_m441 (Camera_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t10 * Camera_get_targetTexture_m447 (Camera_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C" void Camera_set_targetTexture_m439 (Camera_t35 * __this, RenderTexture_t10 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m3089 (Camera_t35 * __this, Matrix4x4_t32 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_projectionMatrix_m3090 (Camera_t35 * __this, Matrix4x4_t32 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C" Matrix4x4_t32  Camera_get_projectionMatrix_m417 (Camera_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern "C" void Camera_set_projectionMatrix_m425 (Camera_t35 * __this, Matrix4x4_t32  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m3091 (Camera_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C" void Camera_set_clearFlags_m391 (Camera_t35 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t3  Camera_ScreenToViewportPoint_m2043 (Camera_t35 * __this, Vector3_t3  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t3  Camera_INTERNAL_CALL_ScreenToViewportPoint_m3092 (Object_t * __this /* static, unused */, Camera_t35 * ___self, Vector3_t3 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t39  Camera_ScreenPointToRay_m1935 (Camera_t35 * __this, Vector3_t3  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t39  Camera_INTERNAL_CALL_ScreenPointToRay_m3093 (Object_t * __this /* static, unused */, Camera_t35 * ___self, Vector3_t3 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t35 * Camera_get_main_m296 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m3094 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m3095 (Object_t * __this /* static, unused */, CameraU5BU5D_t569* ___cameras, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C" void Camera_FireOnPreCull_m3096 (Object_t * __this /* static, unused */, Camera_t35 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPreRender_m3097 (Object_t * __this /* static, unused */, Camera_t35 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPostRender_m3098 (Object_t * __this /* static, unused */, Camera_t35 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::Render()
extern "C" void Camera_Render_m440 (Camera_t35 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
extern "C" void Camera_set_useOcclusionCulling_m395 (Camera_t35 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern "C" void Camera_CopyFrom_m451 (Camera_t35 * __this, Camera_t35 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t51 * Camera_RaycastTry_m3099 (Camera_t35 * __this, Ray_t39  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t51 * Camera_INTERNAL_CALL_RaycastTry_m3100 (Object_t * __this /* static, unused */, Camera_t35 * ___self, Ray_t39 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t51 * Camera_RaycastTry2D_m3101 (Camera_t35 * __this, Ray_t39  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t51 * Camera_INTERNAL_CALL_RaycastTry2D_m3102 (Object_t * __this /* static, unused */, Camera_t35 * ___self, Ray_t39 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
