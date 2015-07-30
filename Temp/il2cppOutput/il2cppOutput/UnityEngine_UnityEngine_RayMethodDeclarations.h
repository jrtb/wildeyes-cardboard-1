#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Ray
struct Ray_t39;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Ray__ctor_m469 (Ray_t39 * __this, Vector3_t3  ___origin, Vector3_t3  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" Vector3_t3  Ray_get_origin_m1936 (Ray_t39 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" Vector3_t3  Ray_get_direction_m1937 (Ray_t39 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern "C" Vector3_t3  Ray_GetPoint_m2134 (Ray_t39 * __this, float ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
extern "C" String_t* Ray_ToString_m2975 (Ray_t39 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
