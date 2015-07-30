﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Version
struct Version_t112;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Version::.ctor()
extern "C" void Version__ctor_m10872 (Version_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
extern "C" void Version__ctor_m583 (Version_t112 * __this, String_t* ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" void Version__ctor_m5259 (Version_t112 * __this, int32_t ___major, int32_t ___minor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m10873 (Version_t112 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version_CheckedSet_m10874 (Version_t112 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
extern "C" int32_t Version_get_Build_m10875 (Version_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
extern "C" int32_t Version_get_Major_m10876 (Version_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
extern "C" int32_t Version_get_Minor_m10877 (Version_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
extern "C" int32_t Version_get_Revision_m10878 (Version_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
extern "C" int32_t Version_CompareTo_m10879 (Version_t112 * __this, Object_t * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
extern "C" bool Version_Equals_m10880 (Version_t112 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" int32_t Version_CompareTo_m10881 (Version_t112 * __this, Version_t112 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C" bool Version_Equals_m10882 (Version_t112 * __this, Version_t112 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
extern "C" int32_t Version_GetHashCode_m10883 (Version_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
extern "C" String_t* Version_ToString_m10884 (Version_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
extern "C" Version_t112 * Version_CreateFromString_m10885 (Object_t * __this /* static, unused */, String_t* ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" bool Version_op_Equality_m10886 (Object_t * __this /* static, unused */, Version_t112 * ___v1, Version_t112 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" bool Version_op_Inequality_m10887 (Object_t * __this /* static, unused */, Version_t112 * ___v1, Version_t112 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
extern "C" bool Version_op_LessThan_m584 (Object_t * __this /* static, unused */, Version_t112 * ___v1, Version_t112 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
