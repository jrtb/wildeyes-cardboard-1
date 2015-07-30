#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Exception
struct Exception_t110;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Text.StringBuilder
struct StringBuilder_t353;
// System.Reflection.MethodBase
struct MethodBase_t772;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Exception::.ctor()
extern "C" void Exception__ctor_m6393 (Exception_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C" void Exception__ctor_m3785 (Exception_t110 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Exception__ctor_m4022 (Exception_t110 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" void Exception__ctor_m4021 (Exception_t110 * __this, String_t* ___message, Exception_t110 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C" Exception_t110 * Exception_get_InnerException_m3799 (Exception_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" void Exception_set_HResult_m4020 (Exception_t110 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
extern "C" String_t* Exception_get_ClassName_m7316 (Exception_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
extern "C" String_t* Exception_get_Message_m2092 (Exception_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
extern "C" String_t* Exception_get_Source_m4062 (Exception_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
extern "C" String_t* Exception_get_StackTrace_m4004 (Exception_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Exception_GetObjectData_m4061 (Exception_t110 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
extern "C" String_t* Exception_ToString_m4060 (Exception_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
extern "C" void Exception_GetFullNameForStackTrace_m7317 (Exception_t110 * __this, StringBuilder_t353 * ___sb, MethodBase_t772 * ___mi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
extern "C" Type_t * Exception_GetType_m4005 (Exception_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
