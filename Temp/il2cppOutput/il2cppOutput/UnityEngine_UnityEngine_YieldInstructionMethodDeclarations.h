#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t483;
struct YieldInstruction_t483_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m3191 (YieldInstruction_t483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t483_marshal(const YieldInstruction_t483& unmarshaled, YieldInstruction_t483_marshaled& marshaled);
void YieldInstruction_t483_marshal_back(const YieldInstruction_t483_marshaled& marshaled, YieldInstruction_t483& unmarshaled);
void YieldInstruction_t483_marshal_cleanup(YieldInstruction_t483_marshaled& marshaled);
