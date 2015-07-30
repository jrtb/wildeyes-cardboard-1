#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t1707;
// System.MarshalByRefObject
struct MarshalByRefObject_t1058;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1708;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1709;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1668;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t1667;

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C" MarshalByRefObject_t1058 * ProxyAttribute_CreateInstance_m9232 (ProxyAttribute_t1707 * __this, Type_t * ___serverType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C" RealProxy_t1708 * ProxyAttribute_CreateProxy_m9233 (ProxyAttribute_t1707 * __this, ObjRef_t1709 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t1668 * ___serverContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m9234 (ProxyAttribute_t1707 * __this, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m9235 (ProxyAttribute_t1707 * __this, Context_t1668 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
