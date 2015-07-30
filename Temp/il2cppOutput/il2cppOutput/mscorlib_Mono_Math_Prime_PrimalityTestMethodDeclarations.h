#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t1454;
// System.Object
struct Object_t;
// Mono.Math.BigInteger
struct BigInteger_t1455;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"

// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern "C" void PrimalityTest__ctor_m10897 (PrimalityTest_t1454 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTest_Invoke_m10898 (PrimalityTest_t1454 * __this, BigInteger_t1455 * ___bi, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t1454(Il2CppObject* delegate, BigInteger_t1455 * ___bi, int32_t ___confidence);
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern "C" Object_t * PrimalityTest_BeginInvoke_m10899 (PrimalityTest_t1454 * __this, BigInteger_t1455 * ___bi, int32_t ___confidence, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern "C" bool PrimalityTest_EndInvoke_m10900 (PrimalityTest_t1454 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
