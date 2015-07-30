#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayer
struct GUILayer_t515;
// UnityEngine.GUIElement
struct GUIElement_t514;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t514 * GUILayer_HitTest_m2669 (GUILayer_t515 * __this, Vector3_t3  ___screenPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t514 * GUILayer_INTERNAL_CALL_HitTest_m2670 (Object_t * __this /* static, unused */, GUILayer_t515 * ___self, Vector3_t3 * ___screenPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
