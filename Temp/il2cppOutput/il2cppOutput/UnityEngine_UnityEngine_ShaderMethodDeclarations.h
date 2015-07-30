#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Shader
struct Shader_t81;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" Shader_t81 * Shader_Find_m343 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.String,UnityEngine.Color)
extern "C" void Shader_SetGlobalColor_m3002 (Object_t * __this /* static, unused */, String_t* ___propertyName, Color_t12  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.Int32,UnityEngine.Color)
extern "C" void Shader_SetGlobalColor_m3003 (Object_t * __this /* static, unused */, int32_t ___nameID, Color_t12  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::INTERNAL_CALL_SetGlobalColor(System.Int32,UnityEngine.Color&)
extern "C" void Shader_INTERNAL_CALL_SetGlobalColor_m3004 (Object_t * __this /* static, unused */, int32_t ___nameID, Color_t12 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalVector(System.String,UnityEngine.Vector4)
extern "C" void Shader_SetGlobalVector_m430 (Object_t * __this /* static, unused */, String_t* ___propertyName, Vector4_t88  ___vec, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" int32_t Shader_PropertyToID_m3005 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
