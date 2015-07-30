#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Color
struct Color_t12;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m2120 (Color_t12 * __this, float ___r, float ___g, float ___b, float ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m482 (Color_t12 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color::ToString()
extern "C" String_t* Color_ToString_m2899 (Color_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Color::GetHashCode()
extern "C" int32_t Color_GetHashCode_m2900 (Color_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern "C" bool Color_Equals_m2023 (Color_t12 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C" Color_t12  Color_Lerp_m1956 (Object_t * __this /* static, unused */, Color_t12  ___a, Color_t12  ___b, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" Color_t12  Color_get_red_m287 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" Color_t12  Color_get_green_m286 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" Color_t12  Color_get_white_m2000 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" Color_t12  Color_get_black_m392 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C" Color_t12  Color_get_clear_m303 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C" Color_t12  Color_op_Multiply_m2256 (Object_t * __this /* static, unused */, Color_t12  ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" Vector4_t88  Color_op_Implicit_m2901 (Object_t * __this /* static, unused */, Color_t12  ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
extern "C" Color_t12  Color_op_Implicit_m2902 (Object_t * __this /* static, unused */, Vector4_t88  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
