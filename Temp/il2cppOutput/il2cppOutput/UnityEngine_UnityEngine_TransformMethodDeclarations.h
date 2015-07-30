#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform
struct Transform_t38;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m3170 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m3171 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t3  Transform_get_position_m467 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m474 (Transform_t38 * __this, Vector3_t3  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m3172 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m3173 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t3  Transform_get_localPosition_m284 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m289 (Transform_t38 * __this, Vector3_t3  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t3  Transform_get_forward_m468 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m3174 (Transform_t38 * __this, Quaternion_t33 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m3175 (Transform_t38 * __this, Quaternion_t33 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t33  Transform_get_rotation_m470 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m472 (Transform_t38 * __this, Quaternion_t33  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m3176 (Transform_t38 * __this, Quaternion_t33 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m3177 (Transform_t38 * __this, Quaternion_t33 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t33  Transform_get_localRotation_m2167 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m456 (Transform_t38 * __this, Quaternion_t33  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m3178 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m3179 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t3  Transform_get_localScale_m2169 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m353 (Transform_t38 * __this, Vector3_t3  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t38 * Transform_get_parent_m406 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" void Transform_set_parent_m390 (Transform_t38 * __this, Transform_t38 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t38 * Transform_get_parentInternal_m3180 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m3181 (Transform_t38 * __this, Transform_t38 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m2161 (Transform_t38 * __this, Transform_t38 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m3182 (Transform_t38 * __this, Transform_t38 * ___parent, bool ___worldPositionStays, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m3183 (Transform_t38 * __this, Matrix4x4_t32 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t32  Transform_get_worldToLocalMatrix_m2239 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t3  Transform_TransformPoint_m2259 (Transform_t38 * __this, Vector3_t3  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t3  Transform_INTERNAL_CALL_TransformPoint_m3184 (Object_t * __this /* static, unused */, Transform_t38 * ___self, Vector3_t3 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t3  Transform_InverseTransformPoint_m2131 (Transform_t38 * __this, Vector3_t3  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t3  Transform_INTERNAL_CALL_InverseTransformPoint_m3185 (Object_t * __this /* static, unused */, Transform_t38 * ___self, Vector3_t3 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m2348 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m2162 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_lossyScale_m3186 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" Vector3_t3  Transform_get_lossyScale_m419 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m3187 (Transform_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t38 * Transform_GetChild_m2345 (Transform_t38 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
