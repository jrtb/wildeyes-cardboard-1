#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t195;
struct Touch_t195_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m1894 (Touch_t195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t15  Touch_get_position_m1896 (Touch_t195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m1895 (Touch_t195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t195_marshal(const Touch_t195& unmarshaled, Touch_t195_marshaled& marshaled);
void Touch_t195_marshal_back(const Touch_t195_marshaled& marshaled, Touch_t195& unmarshaled);
void Touch_t195_marshal_cleanup(Touch_t195_marshaled& marshaled);
