#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t518;
struct Gradient_t518_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m2673 (Gradient_t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2674 (Gradient_t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2675 (Gradient_t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m2676 (Gradient_t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t518_marshal(const Gradient_t518& unmarshaled, Gradient_t518_marshaled& marshaled);
void Gradient_t518_marshal_back(const Gradient_t518_marshaled& marshaled, Gradient_t518& unmarshaled);
void Gradient_t518_marshal_cleanup(Gradient_t518_marshaled& marshaled);
