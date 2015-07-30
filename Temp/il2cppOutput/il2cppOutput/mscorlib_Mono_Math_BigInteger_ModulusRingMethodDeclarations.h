#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1460;
// Mono.Math.BigInteger
struct BigInteger_t1455;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m7475 (ModulusRing_t1460 * __this, BigInteger_t1455 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m7476 (ModulusRing_t1460 * __this, BigInteger_t1455 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1455 * ModulusRing_Multiply_m7477 (ModulusRing_t1460 * __this, BigInteger_t1455 * ___a, BigInteger_t1455 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1455 * ModulusRing_Difference_m7478 (ModulusRing_t1460 * __this, BigInteger_t1455 * ___a, BigInteger_t1455 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1455 * ModulusRing_Pow_m7479 (ModulusRing_t1460 * __this, BigInteger_t1455 * ___a, BigInteger_t1455 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1455 * ModulusRing_Pow_m7480 (ModulusRing_t1460 * __this, uint32_t ___b, BigInteger_t1455 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
