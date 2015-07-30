#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t380;
struct WaitForSeconds_t380_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m2105 (WaitForSeconds_t380 * __this, float ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t380_marshal(const WaitForSeconds_t380& unmarshaled, WaitForSeconds_t380_marshaled& marshaled);
void WaitForSeconds_t380_marshal_back(const WaitForSeconds_t380_marshaled& marshaled, WaitForSeconds_t380& unmarshaled);
void WaitForSeconds_t380_marshal_cleanup(WaitForSeconds_t380_marshaled& marshaled);
