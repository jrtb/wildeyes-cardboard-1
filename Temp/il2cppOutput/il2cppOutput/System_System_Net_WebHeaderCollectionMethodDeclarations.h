#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1034;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1019;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
extern "C" void WebHeaderCollection__ctor_m4498 (WebHeaderCollection_t1034 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection__ctor_m4499 (WebHeaderCollection_t1034 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
extern "C" void WebHeaderCollection__ctor_m4500 (WebHeaderCollection_t1034 * __this, bool ___internallyCreated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
extern "C" void WebHeaderCollection__cctor_m4501 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m4502 (WebHeaderCollection_t1034 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern "C" void WebHeaderCollection_Add_m4503 (WebHeaderCollection_t1034 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
extern "C" void WebHeaderCollection_AddWithoutValidate_m4504 (WebHeaderCollection_t1034 * __this, String_t* ___headerName, String_t* ___headerValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
extern "C" bool WebHeaderCollection_IsRestricted_m4505 (Object_t * __this /* static, unused */, String_t* ___headerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern "C" void WebHeaderCollection_OnDeserialization_m4506 (WebHeaderCollection_t1034 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
extern "C" String_t* WebHeaderCollection_ToString_m4507 (WebHeaderCollection_t1034 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection_GetObjectData_m4508 (WebHeaderCollection_t1034 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
extern "C" int32_t WebHeaderCollection_get_Count_m4509 (WebHeaderCollection_t1034 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
extern "C" KeysCollection_t1019 * WebHeaderCollection_get_Keys_m4510 (WebHeaderCollection_t1034 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern "C" String_t* WebHeaderCollection_Get_m4511 (WebHeaderCollection_t1034 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern "C" String_t* WebHeaderCollection_GetKey_m4512 (WebHeaderCollection_t1034 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern "C" Object_t * WebHeaderCollection_GetEnumerator_m4513 (WebHeaderCollection_t1034 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
extern "C" bool WebHeaderCollection_IsHeaderValue_m4514 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
extern "C" bool WebHeaderCollection_IsHeaderName_m4515 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
