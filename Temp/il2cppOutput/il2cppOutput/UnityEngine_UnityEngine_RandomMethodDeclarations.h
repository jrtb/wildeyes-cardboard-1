#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Random
struct Random_t581;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" int32_t Random_Range_m3189 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m3190 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C" float Random_get_value_m292 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
extern "C" Vector3_t3  Random_get_onUnitSphere_m290 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
