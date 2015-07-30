#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t599;
struct AnimationCurve_t599_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t600;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m3266 (AnimationCurve_t599 * __this, KeyframeU5BU5D_t600* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3267 (AnimationCurve_t599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3268 (AnimationCurve_t599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3269 (AnimationCurve_t599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3270 (AnimationCurve_t599 * __this, KeyframeU5BU5D_t600* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t599_marshal(const AnimationCurve_t599& unmarshaled, AnimationCurve_t599_marshaled& marshaled);
void AnimationCurve_t599_marshal_back(const AnimationCurve_t599_marshaled& marshaled, AnimationCurve_t599& unmarshaled);
void AnimationCurve_t599_marshal_cleanup(AnimationCurve_t599_marshaled& marshaled);
