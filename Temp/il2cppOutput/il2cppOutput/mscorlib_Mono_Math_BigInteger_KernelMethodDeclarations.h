#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t1461;
// Mono.Math.BigInteger
struct BigInteger_t1455;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1462;
// System.UInt32[]
struct UInt32U5BU5D_t1257;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1455 * Kernel_AddSameSign_m7481 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___bi1, BigInteger_t1455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1455 * Kernel_Subtract_m7482 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___big, BigInteger_t1455 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m7483 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___big, BigInteger_t1455 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m7484 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___bi1, BigInteger_t1455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m7485 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___bi1, BigInteger_t1455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m7486 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m7487 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t1462* Kernel_DwordDivMod_m7488 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t1462* Kernel_multiByteDivide_m7489 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___bi1, BigInteger_t1455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1455 * Kernel_LeftShift_m7490 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1455 * Kernel_RightShift_m7491 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C" BigInteger_t1455 * Kernel_MultiplyByDword_m7492 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___n, uint32_t ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m7493 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1257* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1257* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1257* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m7494 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1257* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1257* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1257* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m7495 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1455 * Kernel_modInverse_m7496 (Object_t * __this /* static, unused */, BigInteger_t1455 * ___bi, BigInteger_t1455 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
