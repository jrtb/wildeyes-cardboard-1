#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ObjRef
struct ObjRef_t1709;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t1720;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t1722;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t1721;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.ObjRef::.ctor()
extern "C" void ObjRef__ctor_m9268 (ObjRef_t1709 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjRef__ctor_m9269 (ObjRef_t1709 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern "C" void ObjRef__cctor_m9270 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern "C" bool ObjRef_get_IsReferenceToWellKnow_m9271 (ObjRef_t1709 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern "C" Object_t * ObjRef_get_ChannelInfo_m9272 (ObjRef_t1709 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C" Object_t * ObjRef_get_EnvoyInfo_m9273 (ObjRef_t1709 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern "C" void ObjRef_set_EnvoyInfo_m9274 (ObjRef_t1709 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C" Object_t * ObjRef_get_TypeInfo_m9275 (ObjRef_t1709 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern "C" void ObjRef_set_TypeInfo_m9276 (ObjRef_t1709 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C" String_t* ObjRef_get_URI_m9277 (ObjRef_t1709 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
extern "C" void ObjRef_set_URI_m9278 (ObjRef_t1709 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjRef_GetObjectData_m9279 (ObjRef_t1709 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * ObjRef_GetRealObject_m9280 (ObjRef_t1709 * __this, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
extern "C" void ObjRef_UpdateChannelInfo_m9281 (ObjRef_t1709 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern "C" Type_t * ObjRef_get_ServerType_m9282 (ObjRef_t1709 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
