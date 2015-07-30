#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t1046;
// System.Uri
struct Uri_t26;
// System.Net.ServicePoint
struct ServicePoint_t1031;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m4429 (HttpWebRequest_t1046 * __this, Uri_t26 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m4430 (HttpWebRequest_t1046 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m4431 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m4432 (HttpWebRequest_t1046 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t26 * HttpWebRequest_get_Address_m4433 (HttpWebRequest_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1031 * HttpWebRequest_get_ServicePoint_m4434 (HttpWebRequest_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1031 * HttpWebRequest_GetServicePoint_m4435 (HttpWebRequest_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m4436 (HttpWebRequest_t1046 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
