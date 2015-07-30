#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TypeLoadException
struct TypeLoadException_t1884;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TypeLoadException::.ctor()
extern "C" void TypeLoadException__ctor_m10858 (TypeLoadException_t1884 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.String)
extern "C" void TypeLoadException__ctor_m10859 (TypeLoadException_t1884 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeLoadException__ctor_m10860 (TypeLoadException_t1884 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TypeLoadException::get_Message()
extern "C" String_t* TypeLoadException_get_Message_m10861 (TypeLoadException_t1884 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeLoadException_GetObjectData_m10862 (TypeLoadException_t1884 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
