#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t1858;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1194;
// System.Security.Policy.Evidence
struct Evidence_t1601;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1668;

// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m10123 (AppDomain_t1858 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t1858 * AppDomain_getCurDomain_m10124 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t1858 * AppDomain_get_CurrentDomain_m10125 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1194 * AppDomain_LoadAssembly_m10126 (AppDomain_t1858 * __this, String_t* ___assemblyRef, Evidence_t1601 * ___securityEvidence, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t1194 * AppDomain_Load_m10127 (AppDomain_t1858 * __this, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1194 * AppDomain_Load_m10128 (AppDomain_t1858 * __this, String_t* ___assemblyString, Evidence_t1601 * ___assemblySecurity, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1668 * AppDomain_InternalGetContext_m10129 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1668 * AppDomain_InternalGetDefaultContext_m10130 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m10131 (Object_t * __this /* static, unused */, String_t* ___newguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m10132 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m10133 (AppDomain_t1858 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
