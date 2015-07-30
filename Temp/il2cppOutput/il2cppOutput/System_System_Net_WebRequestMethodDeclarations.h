#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebRequest
struct WebRequest_t1033;
// System.Net.IWebProxy
struct IWebProxy_t1035;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.String
struct String_t;
// System.Exception
struct Exception_t110;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebRequest::.ctor()
extern "C" void WebRequest__ctor_m4525 (WebRequest_t1033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest__ctor_m4526 (WebRequest_t1033 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
extern "C" void WebRequest__cctor_m4527 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m4528 (WebRequest_t1033 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
extern "C" void WebRequest_AddDynamicPrefix_m4529 (Object_t * __this /* static, unused */, String_t* ___protocol, String_t* ___implementor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
extern "C" Exception_t110 * WebRequest_GetMustImplement_m4530 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern "C" Object_t * WebRequest_get_DefaultWebProxy_m4531 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
extern "C" Object_t * WebRequest_GetDefaultWebProxy_m4532 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_GetObjectData_m4533 (WebRequest_t1033 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
extern "C" void WebRequest_AddPrefix_m4534 (Object_t * __this /* static, unused */, String_t* ___prefix, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
