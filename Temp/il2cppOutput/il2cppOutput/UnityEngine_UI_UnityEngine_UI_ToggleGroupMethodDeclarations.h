#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t308;
// UnityEngine.UI.Toggle
struct Toggle_t309;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t313;

// System.Void UnityEngine.UI.ToggleGroup::.ctor()
extern "C" void ToggleGroup__ctor_m1557 (ToggleGroup_t308 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::get_allowSwitchOff()
extern "C" bool ToggleGroup_get_allowSwitchOff_m1558 (ToggleGroup_t308 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::set_allowSwitchOff(System.Boolean)
extern "C" void ToggleGroup_set_allowSwitchOff_m1559 (ToggleGroup_t308 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::ValidateToggleIsInGroup(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_ValidateToggleIsInGroup_m1560 (ToggleGroup_t308 * __this, Toggle_t309 * ___toggle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::NotifyToggleOn(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_NotifyToggleOn_m1561 (ToggleGroup_t308 * __this, Toggle_t309 * ___toggle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::UnregisterToggle(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_UnregisterToggle_m1562 (ToggleGroup_t308 * __this, Toggle_t309 * ___toggle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::RegisterToggle(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_RegisterToggle_m1563 (ToggleGroup_t308 * __this, Toggle_t309 * ___toggle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::AnyTogglesOn()
extern "C" bool ToggleGroup_AnyTogglesOn_m1564 (ToggleGroup_t308 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::ActiveToggles()
extern "C" Object_t* ToggleGroup_ActiveToggles_m1565 (ToggleGroup_t308 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::SetAllTogglesOff()
extern "C" void ToggleGroup_SetAllTogglesOff_m1566 (ToggleGroup_t308 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<AnyTogglesOn>m__7(UnityEngine.UI.Toggle)
extern "C" bool ToggleGroup_U3CAnyTogglesOnU3Em__7_m1567 (Object_t * __this /* static, unused */, Toggle_t309 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<ActiveToggles>m__8(UnityEngine.UI.Toggle)
extern "C" bool ToggleGroup_U3CActiveTogglesU3Em__8_m1568 (Object_t * __this /* static, unused */, Toggle_t309 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
