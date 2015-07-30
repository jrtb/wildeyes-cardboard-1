#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Plane
struct Plane_t389;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Plane__ctor_m2132 (Plane_t389 * __this, Vector3_t3  ___inNormal, Vector3_t3  ___inPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" Vector3_t3  Plane_get_normal_m2976 (Plane_t389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
extern "C" float Plane_get_distance_m2977 (Plane_t389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C" bool Plane_Raycast_m2133 (Plane_t389 * __this, Ray_t39  ___ray, float* ___enter, MethodInfo* method) IL2CPP_METHOD_ATTR;
