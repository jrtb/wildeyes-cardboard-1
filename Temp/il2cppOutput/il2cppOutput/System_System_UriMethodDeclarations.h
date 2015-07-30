#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri
struct Uri_t26;
// System.String
struct String_t;
// System.UriParser
struct UriParser_t1175;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// System.UriPartial
#include "System_System_UriPartial.h"
// System.UriKind
#include "System_System_UriKind.h"

// System.Void System.Uri::.ctor(System.String)
extern "C" void Uri__ctor_m3883 (Uri_t26 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Uri__ctor_m5146 (Uri_t26 * __this, SerializationInfo_t708 * ___serializationInfo, StreamingContext_t709  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern "C" void Uri__ctor_m5147 (Uri_t26 * __this, String_t* ___uriString, bool ___dontEscape, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C" void Uri__ctor_m3885 (Uri_t26 * __this, Uri_t26 * ___baseUri, String_t* ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.cctor()
extern "C" void Uri__cctor_m5148 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m5149 (Uri_t26 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Merge(System.Uri,System.String)
extern "C" void Uri_Merge_m5150 (Uri_t26 * __this, Uri_t26 * ___baseUri, String_t* ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
extern "C" String_t* Uri_get_AbsoluteUri_m5151 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Authority()
extern "C" String_t* Uri_get_Authority_m5152 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Host()
extern "C" String_t* Uri_get_Host_m5153 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsFile()
extern "C" bool Uri_get_IsFile_m5154 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsLoopback()
extern "C" bool Uri_get_IsLoopback_m5155 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsUnc()
extern "C" bool Uri_get_IsUnc_m5156 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C" String_t* Uri_get_Scheme_m5157 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" bool Uri_get_IsAbsoluteUri_m5158 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern "C" int32_t Uri_CheckHostName_m5159 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern "C" bool Uri_IsIPv4Address_m5160 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern "C" bool Uri_IsDomainAddress_m5161 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern "C" bool Uri_CheckSchemeName_m5162 (Object_t * __this /* static, unused */, String_t* ___schemeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C" bool Uri_IsAlpha_m5163 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::Equals(System.Object)
extern "C" bool Uri_Equals_m5164 (Uri_t26 * __this, Object_t * ___comparant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern "C" bool Uri_InternalEquals_m5165 (Uri_t26 * __this, Uri_t26 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetHashCode()
extern "C" int32_t Uri_GetHashCode_m5166 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern "C" String_t* Uri_GetLeftPart_m5167 (Uri_t26 * __this, int32_t ___part, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
extern "C" int32_t Uri_FromHex_m5168 (Object_t * __this /* static, unused */, uint16_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::HexEscape(System.Char)
extern "C" String_t* Uri_HexEscape_m5169 (Object_t * __this /* static, unused */, uint16_t ___character, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C" bool Uri_IsHexDigit_m5170 (Object_t * __this /* static, unused */, uint16_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern "C" bool Uri_IsHexEncoding_m5171 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern "C" void Uri_AppendQueryAndFragment_m5172 (Uri_t26 * __this, String_t** ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ToString()
extern "C" String_t* Uri_ToString_m588 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String)
extern "C" String_t* Uri_EscapeString_m5173 (Object_t * __this /* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" String_t* Uri_EscapeString_m5174 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseUri(System.UriKind)
extern "C" void Uri_ParseUri_m5175 (Uri_t26 * __this, int32_t ___kind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String)
extern "C" String_t* Uri_Unescape_m5176 (Uri_t26 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern "C" String_t* Uri_Unescape_m5177 (Object_t * __this /* static, unused */, String_t* ___str, bool ___excludeSpecial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern "C" void Uri_ParseAsWindowsUNC_m5178 (Uri_t26 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C" String_t* Uri_ParseAsWindowsAbsoluteFilePath_m5179 (Uri_t26 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C" void Uri_ParseAsUnixAbsoluteFilePath_m5180 (Uri_t26 * __this, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern "C" void Uri_Parse_m5181 (Uri_t26 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern "C" String_t* Uri_ParseNoExceptions_m5182 (Uri_t26 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CompactEscaped(System.String)
extern "C" bool Uri_CompactEscaped_m5183 (Object_t * __this /* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern "C" String_t* Uri_Reduce_m5184 (Object_t * __this /* static, unused */, String_t* ___path, bool ___compact_escaped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern "C" uint16_t Uri_HexUnescapeMultiByte_m5185 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern "C" String_t* Uri_GetSchemeDelimiter_m5186 (Object_t * __this /* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern "C" int32_t Uri_GetDefaultPort_m5187 (Object_t * __this /* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C" String_t* Uri_GetOpaqueWiseSchemeDelimiter_m5188 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern "C" bool Uri_IsPredefinedScheme_m5189 (Object_t * __this /* static, unused */, String_t* ___scheme, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.Uri::get_Parser()
extern "C" UriParser_t1175 * Uri_get_Parser_m5190 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::EnsureAbsoluteUri()
extern "C" void Uri_EnsureAbsoluteUri_m5191 (Uri_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" bool Uri_op_Equality_m5192 (Object_t * __this /* static, unused */, Uri_t26 * ___u1, Uri_t26 * ___u2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern "C" bool Uri_op_Inequality_m382 (Object_t * __this /* static, unused */, Uri_t26 * ___u1, Uri_t26 * ___u2, MethodInfo* method) IL2CPP_METHOD_ATTR;
