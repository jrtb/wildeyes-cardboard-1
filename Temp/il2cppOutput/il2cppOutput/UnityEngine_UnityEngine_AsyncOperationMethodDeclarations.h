#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t475;
struct AsyncOperation_t475_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m3071 (AsyncOperation_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m3072 (AsyncOperation_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m3073 (AsyncOperation_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t475_marshal(const AsyncOperation_t475& unmarshaled, AsyncOperation_t475_marshaled& marshaled);
void AsyncOperation_t475_marshal_back(const AsyncOperation_t475_marshaled& marshaled, AsyncOperation_t475& unmarshaled);
void AsyncOperation_t475_marshal_cleanup(AsyncOperation_t475_marshaled& marshaled);
