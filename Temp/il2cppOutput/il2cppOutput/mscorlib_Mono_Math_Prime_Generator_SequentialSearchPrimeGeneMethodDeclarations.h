#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t1456;
// Mono.Math.BigInteger
struct BigInteger_t1455;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C" void SequentialSearchPrimeGeneratorBase__ctor_m7466 (SequentialSearchPrimeGeneratorBase_t1456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C" BigInteger_t1455 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m7467 (SequentialSearchPrimeGeneratorBase_t1456 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C" BigInteger_t1455 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m7468 (SequentialSearchPrimeGeneratorBase_t1456 * __this, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C" BigInteger_t1455 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m7469 (SequentialSearchPrimeGeneratorBase_t1456 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C" bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m7470 (SequentialSearchPrimeGeneratorBase_t1456 * __this, BigInteger_t1455 * ___bi, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
