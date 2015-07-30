#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArithmeticException
struct ArithmeticException_t1372;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArithmeticException::.ctor()
extern "C" void ArithmeticException__ctor_m10152 (ArithmeticException_t1372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArithmeticException::.ctor(System.String)
extern "C" void ArithmeticException__ctor_m6394 (ArithmeticException_t1372 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArithmeticException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArithmeticException__ctor_m10153 (ArithmeticException_t1372 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
