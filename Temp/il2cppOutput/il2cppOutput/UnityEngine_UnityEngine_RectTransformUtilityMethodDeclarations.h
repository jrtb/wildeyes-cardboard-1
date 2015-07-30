#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransformUtility
struct RectTransformUtility_t374;
// UnityEngine.RectTransform
struct RectTransform_t227;
// UnityEngine.Camera
struct Camera_t35;
// UnityEngine.Transform
struct Transform_t38;
// UnityEngine.Canvas
struct Canvas_t229;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
extern "C" void RectTransformUtility__cctor_m3349 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2053 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, Vector2_t15  ___screenPoint, Camera_t35 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3350 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, Vector2_t15 * ___screenPoint, Camera_t35 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern "C" Vector2_t15  RectTransformUtility_PixelAdjustPoint_m2020 (Object_t * __this /* static, unused */, Vector2_t15  ___point, Transform_t38 * ___elementTransform, Canvas_t229 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m3351 (Object_t * __this /* static, unused */, Vector2_t15  ___point, Transform_t38 * ___elementTransform, Canvas_t229 * ___canvas, Vector2_t15 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3352 (Object_t * __this /* static, unused */, Vector2_t15 * ___point, Transform_t38 * ___elementTransform, Canvas_t229 * ___canvas, Vector2_t15 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t18  RectTransformUtility_PixelAdjustRect_m2021 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rectTransform, Canvas_t229 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m3353 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, Vector2_t15  ___screenPoint, Camera_t35 * ___cam, Vector3_t3 * ___worldPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2088 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, Vector2_t15  ___screenPoint, Camera_t35 * ___cam, Vector2_t15 * ___localPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t39  RectTransformUtility_ScreenPointToRay_m3354 (Object_t * __this /* static, unused */, Camera_t35 * ___cam, Vector2_t15  ___screenPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2219 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m2218 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t15  RectTransformUtility_GetTransposed_m3355 (Object_t * __this /* static, unused */, Vector2_t15  ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
