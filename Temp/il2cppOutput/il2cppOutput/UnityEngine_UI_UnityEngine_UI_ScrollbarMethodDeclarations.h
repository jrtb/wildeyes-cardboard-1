#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Scrollbar
struct Scrollbar_t281;
// UnityEngine.RectTransform
struct RectTransform_t227;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t278;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t150;
// UnityEngine.UI.Selectable
struct Selectable_t212;
// UnityEngine.Transform
struct Transform_t38;
// UnityEngine.UI.Scrollbar/Direction
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction.h"
// UnityEngine.UI.Scrollbar/Axis
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Scrollbar::.ctor()
extern "C" void Scrollbar__ctor_m1279 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::get_handleRect()
extern "C" RectTransform_t227 * Scrollbar_get_handleRect_m1280 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_handleRect(UnityEngine.RectTransform)
extern "C" void Scrollbar_set_handleRect_m1281 (Scrollbar_t281 * __this, RectTransform_t227 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::get_direction()
extern "C" int32_t Scrollbar_get_direction_m1282 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_direction(UnityEngine.UI.Scrollbar/Direction)
extern "C" void Scrollbar_set_direction_m1283 (Scrollbar_t281 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_value()
extern "C" float Scrollbar_get_value_m1284 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
extern "C" void Scrollbar_set_value_m1285 (Scrollbar_t281 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_size()
extern "C" float Scrollbar_get_size_m1286 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_size(System.Single)
extern "C" void Scrollbar_set_size_m1287 (Scrollbar_t281 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Scrollbar::get_numberOfSteps()
extern "C" int32_t Scrollbar_get_numberOfSteps_m1288 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_numberOfSteps(System.Int32)
extern "C" void Scrollbar_set_numberOfSteps_m1289 (Scrollbar_t281 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
extern "C" ScrollEvent_t278 * Scrollbar_get_onValueChanged_m1290 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_onValueChanged(UnityEngine.UI.Scrollbar/ScrollEvent)
extern "C" void Scrollbar_set_onValueChanged_m1291 (Scrollbar_t281 * __this, ScrollEvent_t278 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_stepSize()
extern "C" float Scrollbar_get_stepSize_m1292 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Scrollbar_Rebuild_m1293 (Scrollbar_t281 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnEnable()
extern "C" void Scrollbar_OnEnable_m1294 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDisable()
extern "C" void Scrollbar_OnDisable_m1295 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateCachedReferences()
extern "C" void Scrollbar_UpdateCachedReferences_m1296 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single)
extern "C" void Scrollbar_Set_m1297 (Scrollbar_t281 * __this, float ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single,System.Boolean)
extern "C" void Scrollbar_Set_m1298 (Scrollbar_t281 * __this, float ___input, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnRectTransformDimensionsChange()
extern "C" void Scrollbar_OnRectTransformDimensionsChange_m1299 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Axis UnityEngine.UI.Scrollbar::get_axis()
extern "C" int32_t Scrollbar_get_axis_m1300 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::get_reverseValue()
extern "C" bool Scrollbar_get_reverseValue_m1301 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateVisuals()
extern "C" void Scrollbar_UpdateVisuals_m1302 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_UpdateDrag_m1303 (Scrollbar_t281 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool Scrollbar_MayDrag_m1304 (Scrollbar_t281 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnBeginDrag_m1305 (Scrollbar_t281 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnDrag_m1306 (Scrollbar_t281 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnPointerDown_m1307 (Scrollbar_t281 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Scrollbar::ClickRepeat(UnityEngine.EventSystems.PointerEventData)
extern "C" Object_t * Scrollbar_ClickRepeat_m1308 (Scrollbar_t281 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnPointerUp_m1309 (Scrollbar_t281 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Scrollbar_OnMove_m1310 (Scrollbar_t281 * __this, AxisEventData_t150 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnLeft()
extern "C" Selectable_t212 * Scrollbar_FindSelectableOnLeft_m1311 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnRight()
extern "C" Selectable_t212 * Scrollbar_FindSelectableOnRight_m1312 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnUp()
extern "C" Selectable_t212 * Scrollbar_FindSelectableOnUp_m1313 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnDown()
extern "C" Selectable_t212 * Scrollbar_FindSelectableOnDown_m1314 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnInitializePotentialDrag_m1315 (Scrollbar_t281 * __this, PointerEventData_t52 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::SetDirection(UnityEngine.UI.Scrollbar/Direction,System.Boolean)
extern "C" void Scrollbar_SetDirection_m1316 (Scrollbar_t281 * __this, int32_t ___direction, bool ___includeRectLayouts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Scrollbar_UnityEngine_UI_ICanvasElement_IsDestroyed_m1317 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t38 * Scrollbar_UnityEngine_UI_ICanvasElement_get_transform_m1318 (Scrollbar_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
