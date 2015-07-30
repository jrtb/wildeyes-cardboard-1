#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t33;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m2904 (Quaternion_t33 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t33  Quaternion_get_identity_m455 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m2905 (Object_t * __this /* static, unused */, Quaternion_t33  ___a, Quaternion_t33  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Quaternion_t33  Quaternion_LookRotation_m542 (Object_t * __this /* static, unused */, Vector3_t3  ___forward, Vector3_t3  ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t33  Quaternion_INTERNAL_CALL_LookRotation_m2906 (Object_t * __this /* static, unused */, Vector3_t3 * ___forward, Vector3_t3 * ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t33  Quaternion_Inverse_m2258 (Object_t * __this /* static, unused */, Quaternion_t33  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t33  Quaternion_INTERNAL_CALL_Inverse_m2907 (Object_t * __this /* static, unused */, Quaternion_t33 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m2908 (Quaternion_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m2909 (Quaternion_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m2910 (Quaternion_t33 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t33  Quaternion_op_Multiply_m471 (Object_t * __this /* static, unused */, Quaternion_t33  ___lhs, Quaternion_t33  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t3  Quaternion_op_Multiply_m473 (Object_t * __this /* static, unused */, Quaternion_t33  ___rotation, Vector3_t3  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m2168 (Object_t * __this /* static, unused */, Quaternion_t33  ___lhs, Quaternion_t33  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
