#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t1057;
// System.Uri
struct Uri_t26;
// System.String[]
struct StringU5BU5D_t87;
// System.Net.ICredentials
struct ICredentials_t1056;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m4516 (WebProxy_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m4517 (WebProxy_t1057 * __this, Uri_t26 * ___address, bool ___bypassOnLocal, StringU5BU5D_t87* ___bypassList, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m4518 (WebProxy_t1057 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m4519 (WebProxy_t1057 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m4520 (WebProxy_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t26 * WebProxy_GetProxy_m4521 (WebProxy_t1057 * __this, Uri_t26 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m4522 (WebProxy_t1057 * __this, Uri_t26 * ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m4523 (WebProxy_t1057 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m4524 (WebProxy_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
