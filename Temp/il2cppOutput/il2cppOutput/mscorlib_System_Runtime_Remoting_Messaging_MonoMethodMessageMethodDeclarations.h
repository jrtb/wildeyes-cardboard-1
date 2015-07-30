#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1683;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1693;
// System.Reflection.MethodBase
struct MethodBase_t772;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t110;

// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t76* MonoMethodMessage_get_Args_m9198 (MonoMethodMessage_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1693 * MonoMethodMessage_get_LogicalCallContext_m9199 (MonoMethodMessage_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t772 * MonoMethodMessage_get_MethodBase_m9200 (MonoMethodMessage_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern "C" String_t* MonoMethodMessage_get_MethodName_m9201 (MonoMethodMessage_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m9202 (MonoMethodMessage_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern "C" String_t* MonoMethodMessage_get_TypeName_m9203 (MonoMethodMessage_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m9204 (MonoMethodMessage_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C" void MonoMethodMessage_set_Uri_m9205 (MonoMethodMessage_t1683 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t110 * MonoMethodMessage_get_Exception_m9206 (MonoMethodMessage_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m9207 (MonoMethodMessage_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern "C" ObjectU5BU5D_t76* MonoMethodMessage_get_OutArgs_m9208 (MonoMethodMessage_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m9209 (MonoMethodMessage_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
