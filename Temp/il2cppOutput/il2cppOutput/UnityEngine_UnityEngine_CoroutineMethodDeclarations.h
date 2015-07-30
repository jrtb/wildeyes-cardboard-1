#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t271;
struct Coroutine_t271_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2537 (Coroutine_t271 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2538 (Coroutine_t271 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2539 (Coroutine_t271 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t271_marshal(const Coroutine_t271& unmarshaled, Coroutine_t271_marshaled& marshaled);
void Coroutine_t271_marshal_back(const Coroutine_t271_marshaled& marshaled, Coroutine_t271& unmarshaled);
void Coroutine_t271_marshal_cleanup(Coroutine_t271_marshaled& marshaled);
