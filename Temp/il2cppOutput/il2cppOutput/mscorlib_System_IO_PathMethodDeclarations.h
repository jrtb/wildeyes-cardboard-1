#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Path
struct Path_t1215;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t268;

// System.Void System.IO.Path::.cctor()
extern "C" void Path__cctor_m8384 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" String_t* Path_Combine_m6460 (Object_t * __this /* static, unused */, String_t* ___path1, String_t* ___path2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::CleanPath(System.String)
extern "C" String_t* Path_CleanPath_m8385 (Object_t * __this /* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetDirectoryName(System.String)
extern "C" String_t* Path_GetDirectoryName_m8386 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetFileName(System.String)
extern "C" String_t* Path_GetFileName_m8387 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetFullPath(System.String)
extern "C" String_t* Path_GetFullPath_m8388 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::WindowsDriveAdjustment(System.String)
extern "C" String_t* Path_WindowsDriveAdjustment_m8389 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::InsecureGetFullPath(System.String)
extern "C" String_t* Path_InsecureGetFullPath_m8390 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::IsDsc(System.Char)
extern "C" bool Path_IsDsc_m8391 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetPathRoot(System.String)
extern "C" String_t* Path_GetPathRoot_m8392 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::IsPathRooted(System.String)
extern "C" bool Path_IsPathRooted_m8393 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.IO.Path::GetInvalidPathChars()
extern "C" CharU5BU5D_t268* Path_GetInvalidPathChars_m8394 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetServerAndShare(System.String)
extern "C" String_t* Path_GetServerAndShare_m8395 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::SameRoot(System.String,System.String)
extern "C" bool Path_SameRoot_m8396 (Object_t * __this /* static, unused */, String_t* ___root, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::CanonicalizePath(System.String)
extern "C" String_t* Path_CanonicalizePath_m8397 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
