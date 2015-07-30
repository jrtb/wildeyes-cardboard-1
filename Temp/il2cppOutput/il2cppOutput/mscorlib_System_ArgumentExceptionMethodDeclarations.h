#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArgumentException
struct ArgumentException_t395;
// System.String
struct String_t;
// System.Exception
struct Exception_t110;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentException::.ctor()
extern "C" void ArgumentException__ctor_m10140 (ArgumentException_t395 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" void ArgumentException__ctor_m2307 (ArgumentException_t395 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
extern "C" void ArgumentException__ctor_m5369 (ArgumentException_t395 * __this, String_t* ___message, Exception_t110 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" void ArgumentException__ctor_m5233 (ArgumentException_t395 * __this, String_t* ___message, String_t* ___paramName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
extern "C" void ArgumentException__ctor_m10141 (ArgumentException_t395 * __this, String_t* ___message, String_t* ___paramName, Exception_t110 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentException__ctor_m10142 (ArgumentException_t395 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_ParamName()
extern "C" String_t* ArgumentException_get_ParamName_m10143 (ArgumentException_t395 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_Message()
extern "C" String_t* ArgumentException_get_Message_m10144 (ArgumentException_t395 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentException_GetObjectData_m10145 (ArgumentException_t395 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
