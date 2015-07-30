#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWForm
struct WWWForm_t561;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t560;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t113;

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m3056 (WWWForm_t561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m3057 (WWWForm_t561 * __this, String_t* ___fieldName, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m3058 (WWWForm_t561 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t113 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m3059 (WWWForm_t561 * __this, String_t* ___fieldName, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" Dictionary_2_t560 * WWWForm_get_headers_m3060 (WWWForm_t561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" ByteU5BU5D_t66* WWWForm_get_data_m3061 (WWWForm_t561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
