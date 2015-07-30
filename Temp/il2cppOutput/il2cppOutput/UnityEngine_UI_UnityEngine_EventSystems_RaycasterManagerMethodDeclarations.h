#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.RaycasterManager
struct RaycasterManager_t184;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t185;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t183;

// System.Void UnityEngine.EventSystems.RaycasterManager::.cctor()
extern "C" void RaycasterManager__cctor_m737 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::AddRaycaster(UnityEngine.EventSystems.BaseRaycaster)
extern "C" void RaycasterManager_AddRaycaster_m738 (Object_t * __this /* static, unused */, BaseRaycaster_t185 * ___baseRaycaster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> UnityEngine.EventSystems.RaycasterManager::GetRaycasters()
extern "C" List_1_t183 * RaycasterManager_GetRaycasters_m739 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::RemoveRaycasters(UnityEngine.EventSystems.BaseRaycaster)
extern "C" void RaycasterManager_RemoveRaycasters_m740 (Object_t * __this /* static, unused */, BaseRaycaster_t185 * ___baseRaycaster, MethodInfo* method) IL2CPP_METHOD_ATTR;
