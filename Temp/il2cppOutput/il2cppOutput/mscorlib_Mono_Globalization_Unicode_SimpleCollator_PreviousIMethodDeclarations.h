#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t1446;
struct PreviousInfo_t1446_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m7390 (PreviousInfo_t1446 * __this, bool ___dummy, MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t1446_marshal(const PreviousInfo_t1446& unmarshaled, PreviousInfo_t1446_marshaled& marshaled);
void PreviousInfo_t1446_marshal_back(const PreviousInfo_t1446_marshaled& marshaled, PreviousInfo_t1446& unmarshaled);
void PreviousInfo_t1446_marshal_cleanup(PreviousInfo_t1446_marshaled& marshaled);
