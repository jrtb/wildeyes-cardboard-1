#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t73;
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_Internal_Raycast_m3215 (Object_t * __this /* static, unused */, Collider_t73 * ___col, Ray_t39  ___ray, RaycastHit_t74 * ___hitInfo, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_INTERNAL_CALL_Internal_Raycast_m3216 (Object_t * __this /* static, unused */, Collider_t73 * ___col, Ray_t39 * ___ray, RaycastHit_t74 * ___hitInfo, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_Raycast_m297 (Collider_t73 * __this, Ray_t39  ___ray, RaycastHit_t74 * ___hitInfo, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
