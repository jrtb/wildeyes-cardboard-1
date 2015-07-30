#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.ResponseBase
struct ResponseBase_t614;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t615;

// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern "C" void ResponseBase__ctor_m3361 (ResponseBase_t614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object)
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" String_t* ResponseBase_ParseJSONString_m3362 (ResponseBase_t614 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" int32_t ResponseBase_ParseJSONInt32_m3363 (ResponseBase_t614 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m3364 (ResponseBase_t614 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m3365 (ResponseBase_t614 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" bool ResponseBase_ParseJSONBool_m3366 (ResponseBase_t614 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
