#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.DirectoryInfo
struct DirectoryInfo_t1548;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C" void DirectoryInfo__ctor_m8268 (DirectoryInfo_t1548 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
extern "C" void DirectoryInfo__ctor_m8269 (DirectoryInfo_t1548 * __this, String_t* ___path, bool ___simpleOriginalPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DirectoryInfo__ctor_m8270 (DirectoryInfo_t1548 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
extern "C" void DirectoryInfo_Initialize_m8271 (DirectoryInfo_t1548 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
extern "C" bool DirectoryInfo_get_Exists_m8272 (DirectoryInfo_t1548 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
extern "C" DirectoryInfo_t1548 * DirectoryInfo_get_Parent_m8273 (DirectoryInfo_t1548 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
extern "C" void DirectoryInfo_Create_m8274 (DirectoryInfo_t1548 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
extern "C" String_t* DirectoryInfo_ToString_m8275 (DirectoryInfo_t1548 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
