#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.SystemException
struct SystemException_t1212;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Exception
struct Exception_t110;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.SystemException::.ctor()
extern "C" void SystemException__ctor_m10798 (SystemException_t1212 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String)
extern "C" void SystemException__ctor_m5414 (SystemException_t1212 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SystemException__ctor_m10799 (SystemException_t1212 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C" void SystemException__ctor_m10800 (SystemException_t1212 * __this, String_t* ___message, Exception_t110 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
