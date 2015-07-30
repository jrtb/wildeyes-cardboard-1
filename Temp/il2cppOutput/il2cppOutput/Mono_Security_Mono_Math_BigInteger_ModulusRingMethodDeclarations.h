#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1254;
// Mono.Math.BigInteger
struct BigInteger_t1253;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m5587 (ModulusRing_t1254 * __this, BigInteger_t1253 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m5588 (ModulusRing_t1254 * __this, BigInteger_t1253 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1253 * ModulusRing_Multiply_m5589 (ModulusRing_t1254 * __this, BigInteger_t1253 * ___a, BigInteger_t1253 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1253 * ModulusRing_Difference_m5590 (ModulusRing_t1254 * __this, BigInteger_t1253 * ___a, BigInteger_t1253 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1253 * ModulusRing_Pow_m5591 (ModulusRing_t1254 * __this, BigInteger_t1253 * ___a, BigInteger_t1253 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1253 * ModulusRing_Pow_m5592 (ModulusRing_t1254 * __this, uint32_t ___b, BigInteger_t1253 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
