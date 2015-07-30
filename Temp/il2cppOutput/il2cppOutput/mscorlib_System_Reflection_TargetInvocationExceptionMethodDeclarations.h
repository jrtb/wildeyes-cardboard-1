#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t1629;
// System.Exception
struct Exception_t110;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m9011 (TargetInvocationException_t1629 * __this, Exception_t110 * ___inner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m9012 (TargetInvocationException_t1629 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
