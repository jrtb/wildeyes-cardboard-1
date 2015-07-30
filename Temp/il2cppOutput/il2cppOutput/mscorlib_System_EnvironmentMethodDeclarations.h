#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Environment
struct Environment_t1893;
// System.String
struct String_t;
// System.OperatingSystem
struct OperatingSystem_t1892;
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.Environment/SpecialFolder
#include "mscorlib_System_Environment_SpecialFolder.h"

// System.Boolean System.Environment::get_SocketSecurityEnabled()
extern "C" bool Environment_get_SocketSecurityEnabled_m10516 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C" String_t* Environment_get_NewLine_m5317 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.Environment::get_Platform()
extern "C" int32_t Environment_get_Platform_m10517 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetOSVersionString()
extern "C" String_t* Environment_GetOSVersionString_m10518 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.OperatingSystem System.Environment::get_OSVersion()
extern "C" OperatingSystem_t1892 * Environment_get_OSVersion_m10519 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Environment::get_TickCount()
extern "C" int32_t Environment_get_TickCount_m3879 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetEnvironmentVariable(System.String)
extern "C" String_t* Environment_internalGetEnvironmentVariable_m10520 (Object_t * __this /* static, unused */, String_t* ___variable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetEnvironmentVariable(System.String)
extern "C" String_t* Environment_GetEnvironmentVariable_m6486 (Object_t * __this /* static, unused */, String_t* ___variable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetWindowsFolderPath(System.Int32)
extern "C" String_t* Environment_GetWindowsFolderPath_m10521 (Object_t * __this /* static, unused */, int32_t ___folder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
extern "C" String_t* Environment_GetFolderPath_m6462 (Object_t * __this /* static, unused */, int32_t ___folder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::ReadXdgUserDir(System.String,System.String,System.String,System.String)
extern "C" String_t* Environment_ReadXdgUserDir_m10522 (Object_t * __this /* static, unused */, String_t* ___config_dir, String_t* ___home_dir, String_t* ___key, String_t* ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::InternalGetFolderPath(System.Environment/SpecialFolder)
extern "C" String_t* Environment_InternalGetFolderPath_m10523 (Object_t * __this /* static, unused */, int32_t ___folder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Environment::get_IsRunningOnWindows()
extern "C" bool Environment_get_IsRunningOnWindows_m10524 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetHome()
extern "C" String_t* Environment_internalGetHome_m10525 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
