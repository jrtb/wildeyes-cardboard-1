#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager
struct ServicePointManager_t1053;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t1052;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1039;
// System.Net.ServicePoint
struct ServicePoint_t1031;
// System.Uri
struct Uri_t26;
// System.Net.IWebProxy
struct IWebProxy_t1035;
// System.Net.SecurityProtocolType
#include "System_System_Net_SecurityProtocolType.h"

// System.Void System.Net.ServicePointManager::.cctor()
extern "C" void ServicePointManager__cctor_m4491 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
extern "C" Object_t * ServicePointManager_get_CertificatePolicy_m4492 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C" bool ServicePointManager_get_CheckCertificateRevocationList_m4493 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern "C" int32_t ServicePointManager_get_SecurityProtocol_m4494 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
extern "C" RemoteCertificateValidationCallback_t1039 * ServicePointManager_get_ServerCertificateValidationCallback_m4495 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern "C" ServicePoint_t1031 * ServicePointManager_FindServicePoint_m4496 (Object_t * __this /* static, unused */, Uri_t26 * ___address, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
extern "C" void ServicePointManager_RecycleServicePoints_m4497 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
