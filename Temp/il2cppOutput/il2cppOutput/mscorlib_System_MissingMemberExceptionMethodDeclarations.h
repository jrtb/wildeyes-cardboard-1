#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MissingMemberException
struct MissingMemberException_t1903;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingMemberException::.ctor()
extern "C" void MissingMemberException__ctor_m10575 (MissingMemberException_t1903 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String)
extern "C" void MissingMemberException__ctor_m10576 (MissingMemberException_t1903 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingMemberException__ctor_m10577 (MissingMemberException_t1903 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String,System.String)
extern "C" void MissingMemberException__ctor_m10578 (MissingMemberException_t1903 * __this, String_t* ___className, String_t* ___memberName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingMemberException_GetObjectData_m10579 (MissingMemberException_t1903 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMemberException::get_Message()
extern "C" String_t* MissingMemberException_get_Message_m10580 (MissingMemberException_t1903 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
