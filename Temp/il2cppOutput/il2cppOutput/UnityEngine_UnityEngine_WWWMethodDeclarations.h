#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWW
struct WWW_t559;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t560;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t113;
// System.Byte[]
struct ByteU5BU5D_t66;
// UnityEngine.WWWForm
struct WWWForm_t561;
// System.String[]
struct StringU5BU5D_t87;

// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m3041 (WWW_t559 * __this, String_t* ___url, WWWForm_t561 * ___form, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m3042 (WWW_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m3043 (WWW_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m3044 (WWW_t559 * __this, bool ___cancel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m3045 (WWW_t559 * __this, String_t* ___url, ByteU5BU5D_t66* ___postData, StringU5BU5D_t87* ___iHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t560 * WWW_get_responseHeaders_m3046 (WWW_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m3047 (WWW_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m3048 (WWW_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C" Encoding_t113 * WWW_get_DefaultEncoding_m3049 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t113 * WWW_GetTextEncoder_m3050 (WWW_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t66* WWW_get_bytes_m3051 (WWW_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m3052 (WWW_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m3053 (WWW_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" StringU5BU5D_t87* WWW_FlattenedHeadersFrom_m3054 (Object_t * __this /* static, unused */, Dictionary_2_t560 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t560 * WWW_ParseHTTPHeaderString_m3055 (Object_t * __this /* static, unused */, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
