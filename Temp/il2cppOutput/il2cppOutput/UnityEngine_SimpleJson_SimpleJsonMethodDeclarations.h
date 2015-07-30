#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.SimpleJson
struct SimpleJson_t654;
// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t652;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t653;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t615;
// System.Char[]
struct CharU5BU5D_t268;
// SimpleJson.JsonArray
struct JsonArray_t644;
// System.Text.StringBuilder
struct StringBuilder_t353;
// System.Collections.IEnumerable
struct IEnumerable_t457;

// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C" bool SimpleJson_TryDeserializeObject_m3515 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C" String_t* SimpleJson_SerializeObject_m3516 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m3517 (Object_t * __this /* static, unused */, Object_t * ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t* SimpleJson_ParseObject_m3518 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C" JsonArray_t644 * SimpleJson_ParseArray_m3519 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseValue_m3520 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" String_t* SimpleJson_ParseString_m3521 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern "C" String_t* SimpleJson_ConvertFromUtf32_m3522 (Object_t * __this /* static, unused */, int32_t ___utf32, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseNumber_m3523 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m3524 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" void SimpleJson_EatWhitespace_m3525 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m3526 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m3527 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeValue_m3528 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t353 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeObject_m3529 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t353 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeArray_m3530 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t353 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeString_m3531 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t353 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeNumber_m3532 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t353 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C" bool SimpleJson_IsNumeric_m3533 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m3534 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C" PocoJsonSerializerStrategy_t653 * SimpleJson_get_PocoJsonSerializerStrategy_m3535 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
