#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// Teleport
#include "AssemblyU2DCSharp_Teleport.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Teleport_t1_il2cpp_TypeInfo;
// Teleport
#include "AssemblyU2DCSharp_TeleportMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// Cardboard
#include "AssemblyU2DCSharp_Cardboard.h"
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo Cardboard_t23_il2cpp_TypeInfo;
extern TypeInfo Vector3_t3_il2cpp_TypeInfo;
extern TypeInfo Mathf_t69_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m282_MethodInfo;
extern MethodInfo Component_get_transform_m283_MethodInfo;
extern MethodInfo Transform_get_localPosition_m284_MethodInfo;
extern MethodInfo Teleport_SetGazedAt_m2_MethodInfo;
extern MethodInfo Renderer_get_material_m285_MethodInfo;
extern MethodInfo Color_get_green_m286_MethodInfo;
extern MethodInfo Color_get_red_m287_MethodInfo;
extern MethodInfo Material_set_color_m288_MethodInfo;
extern MethodInfo Transform_set_localPosition_m289_MethodInfo;
extern MethodInfo Cardboard_get_SDK_m52_MethodInfo;
extern MethodInfo Cardboard_get_VRModeEnabled_m55_MethodInfo;
extern MethodInfo Cardboard_set_VRModeEnabled_m56_MethodInfo;
extern MethodInfo Random_get_onUnitSphere_m290_MethodInfo;
extern MethodInfo Mathf_Clamp_m291_MethodInfo;
extern MethodInfo Random_get_value_m292_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m293_MethodInfo;
struct Component_t71;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.Renderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
struct Component_t71;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m295_gshared (Component_t71 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m295(__this, method) (( Object_t * (*) (Component_t71 *, MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t70_m294(__this, method) (( Renderer_t70 * (*) (Component_t71 *, MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisRenderer_t70_m294_GenericMethod;


// System.Void Teleport::.ctor()
extern MethodInfo Teleport__ctor_m0_MethodInfo;
extern "C" void Teleport__ctor_m0 (Teleport_t1 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		return;
	}
}
// System.Void Teleport::Start()
extern MethodInfo Teleport_Start_m1_MethodInfo;
extern "C" void Teleport_Start_m1 (Teleport_t1 * __this, MethodInfo* method)
{
	{
		Transform_t38 * L_0 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		NullCheck(L_0);
		Vector3_t3  L_1 = Transform_get_localPosition_m284(L_0, /*hidden argument*/&Transform_get_localPosition_m284_MethodInfo);
		__this->___startingPosition_2 = L_1;
		Teleport_SetGazedAt_m2(__this, 0, /*hidden argument*/&Teleport_SetGazedAt_m2_MethodInfo);
		return;
	}
}
// System.Void Teleport::SetGazedAt(System.Boolean)
extern MethodInfo* Component_GetComponent_TisRenderer_t70_m294_MethodInfo_var;
extern "C" void Teleport_SetGazedAt_m2 (Teleport_t1 * __this, bool ___gazedAt, MethodInfo* method)
{
	static bool Teleport_SetGazedAt_m2_init;
	if (!Teleport_SetGazedAt_m2_init)
	{
		Component_GetComponent_TisRenderer_t70_m294_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t70_m294_GenericMethod);
		Teleport_SetGazedAt_m2_init = true;
	}
	Material_t50 * G_B2_0 = {0};
	Material_t50 * G_B1_0 = {0};
	Color_t12  G_B3_0 = {0};
	Material_t50 * G_B3_1 = {0};
	{
		Renderer_t70 * L_0 = Component_GetComponent_TisRenderer_t70_m294(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t70_m294_MethodInfo_var);
		NullCheck(L_0);
		Material_t50 * L_1 = Renderer_get_material_m285(L_0, /*hidden argument*/&Renderer_get_material_m285_MethodInfo);
		bool L_2 = ___gazedAt;
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_001b;
		}
	}
	{
		Color_t12  L_3 = Color_get_green_m286(NULL /*static, unused*/, /*hidden argument*/&Color_get_green_m286_MethodInfo);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_001b:
	{
		Color_t12  L_4 = Color_get_red_m287(NULL /*static, unused*/, /*hidden argument*/&Color_get_red_m287_MethodInfo);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		Material_set_color_m288(G_B3_1, G_B3_0, /*hidden argument*/&Material_set_color_m288_MethodInfo);
		return;
	}
}
// System.Void Teleport::Reset()
extern MethodInfo Teleport_Reset_m3_MethodInfo;
extern "C" void Teleport_Reset_m3 (Teleport_t1 * __this, MethodInfo* method)
{
	{
		Transform_t38 * L_0 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		Vector3_t3  L_1 = (__this->___startingPosition_2);
		NullCheck(L_0);
		Transform_set_localPosition_m289(L_0, L_1, /*hidden argument*/&Transform_set_localPosition_m289_MethodInfo);
		return;
	}
}
// System.Void Teleport::ToggleVRMode()
extern MethodInfo Teleport_ToggleVRMode_m4_MethodInfo;
extern "C" void Teleport_ToggleVRMode_m4 (Teleport_t1 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_0 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		Cardboard_t23 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_VRModeEnabled_m55(L_1, /*hidden argument*/&Cardboard_get_VRModeEnabled_m55_MethodInfo);
		NullCheck(L_0);
		Cardboard_set_VRModeEnabled_m56(L_0, ((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/&Cardboard_set_VRModeEnabled_m56_MethodInfo);
		return;
	}
}
// System.Void Teleport::TeleportRandomly()
extern MethodInfo Teleport_TeleportRandomly_m5_MethodInfo;
extern "C" void Teleport_TeleportRandomly_m5 (Teleport_t1 * __this, MethodInfo* method)
{
	Vector3_t3  V_0 = {0};
	float V_1 = 0.0f;
	{
		Vector3_t3  L_0 = Random_get_onUnitSphere_m290(NULL /*static, unused*/, /*hidden argument*/&Random_get_onUnitSphere_m290_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t69_il2cpp_TypeInfo));
		float L_2 = Mathf_Clamp_m291(NULL /*static, unused*/, L_1, (0.5f), (1.0f), /*hidden argument*/&Mathf_Clamp_m291_MethodInfo);
		(&V_0)->___y_2 = L_2;
		float L_3 = Random_get_value_m292(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m292_MethodInfo);
		V_1 = ((float)((float)((float)((float)(2.0f)*(float)L_3))+(float)(1.5f)));
		Transform_t38 * L_4 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		Vector3_t3  L_5 = V_0;
		float L_6 = V_1;
		Vector3_t3  L_7 = Vector3_op_Multiply_m293(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Vector3_op_Multiply_m293_MethodInfo);
		NullCheck(L_4);
		Transform_set_localPosition_m289(L_4, L_7, /*hidden argument*/&Transform_set_localPosition_m289_MethodInfo);
		return;
	}
}
// TeleportLegacyUI
#include "AssemblyU2DCSharp_TeleportLegacyUI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TeleportLegacyUI_t5_il2cpp_TypeInfo;
// TeleportLegacyUI
#include "AssemblyU2DCSharp_TeleportLegacyUIMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// StereoController
#include "AssemblyU2DCSharp_StereoController.h"
// CardboardHead
#include "AssemblyU2DCSharp_CardboardHead.h"
// CardboardOnGUI/OnGUICallback
#include "AssemblyU2DCSharp_CardboardOnGUI_OnGUICallback.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo OnGUICallback_t8_il2cpp_TypeInfo;
extern TypeInfo Rect_t18_il2cpp_TypeInfo;
extern TypeInfo GUI_t72_il2cpp_TypeInfo;
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// StereoController
#include "AssemblyU2DCSharp_StereoControllerMethodDeclarations.h"
// CardboardOnGUI
#include "AssemblyU2DCSharp_CardboardOnGUIMethodDeclarations.h"
// CardboardOnGUI/OnGUICallback
#include "AssemblyU2DCSharp_CardboardOnGUI_OnGUICallbackMethodDeclarations.h"
// CardboardHead
#include "AssemblyU2DCSharp_CardboardHeadMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
extern MethodInfo Camera_get_main_m296_MethodInfo;
extern MethodInfo StereoController_get_Head_m186_MethodInfo;
extern MethodInfo CardboardOnGUI_set_IsGUIVisible_m20_MethodInfo;
extern MethodInfo TeleportLegacyUI_OnGUI_m9_MethodInfo;
extern MethodInfo OnGUICallback__ctor_m11_MethodInfo;
extern MethodInfo CardboardOnGUI_add_onGUICallback_m16_MethodInfo;
extern MethodInfo CardboardHead_get_Gaze_m127_MethodInfo;
extern MethodInfo Collider_Raycast_m297_MethodInfo;
extern MethodInfo Cardboard_get_Triggered_m84_MethodInfo;
extern MethodInfo CardboardOnGUI_OKToDraw_m18_MethodInfo;
extern MethodInfo Rect__ctor_m298_MethodInfo;
extern MethodInfo GUI_Button_m299_MethodInfo;
extern MethodInfo Cardboard_Recenter_m93_MethodInfo;
extern MethodInfo CardboardOnGUI_remove_onGUICallback_m17_MethodInfo;
struct Component_t71;
// UnityEngine.CastHelper`1<StereoController>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_1.h"
// Declaration !!0 UnityEngine.Component::GetComponent<StereoController>()
// !!0 UnityEngine.Component::GetComponent<StereoController>()
#define Component_GetComponent_TisStereoController_t34_m300(__this, method) (( StereoController_t34 * (*) (Component_t71 *, MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
struct Component_t71;
// UnityEngine.CastHelper`1<UnityEngine.Collider>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
#define Component_GetComponent_TisCollider_t73_m301(__this, method) (( Collider_t73 * (*) (Component_t71 *, MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisStereoController_t34_m300_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisCollider_t73_m301_GenericMethod;


// System.Void TeleportLegacyUI::.ctor()
extern MethodInfo TeleportLegacyUI__ctor_m6_MethodInfo;
extern "C" void TeleportLegacyUI__ctor_m6 (TeleportLegacyUI_t5 * __this, MethodInfo* method)
{
	{
		Teleport__ctor_m0(__this, /*hidden argument*/&Teleport__ctor_m0_MethodInfo);
		return;
	}
}
// System.Void TeleportLegacyUI::Awake()
extern MethodInfo TeleportLegacyUI_Awake_m7_MethodInfo;
extern MethodInfo* Component_GetComponent_TisStereoController_t34_m300_MethodInfo_var;
extern "C" void TeleportLegacyUI_Awake_m7 (TeleportLegacyUI_t5 * __this, MethodInfo* method)
{
	static bool TeleportLegacyUI_Awake_m7_init;
	if (!TeleportLegacyUI_Awake_m7_init)
	{
		Component_GetComponent_TisStereoController_t34_m300_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisStereoController_t34_m300_GenericMethod);
		TeleportLegacyUI_Awake_m7_init = true;
	}
	{
		Camera_t35 * L_0 = Camera_get_main_m296(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m296_MethodInfo);
		NullCheck(L_0);
		StereoController_t34 * L_1 = Component_GetComponent_TisStereoController_t34_m300(L_0, /*hidden argument*/Component_GetComponent_TisStereoController_t34_m300_MethodInfo_var);
		NullCheck(L_1);
		CardboardHead_t4 * L_2 = StereoController_get_Head_m186(L_1, /*hidden argument*/&StereoController_get_Head_m186_MethodInfo);
		__this->___head_3 = L_2;
		CardboardOnGUI_set_IsGUIVisible_m20(NULL /*static, unused*/, 1, /*hidden argument*/&CardboardOnGUI_set_IsGUIVisible_m20_MethodInfo);
		IntPtr_t L_3 = { &TeleportLegacyUI_OnGUI_m9_MethodInfo };
		OnGUICallback_t8 * L_4 = (OnGUICallback_t8 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnGUICallback_t8_il2cpp_TypeInfo));
		OnGUICallback__ctor_m11(L_4, __this, L_3, /*hidden argument*/&OnGUICallback__ctor_m11_MethodInfo);
		CardboardOnGUI_add_onGUICallback_m16(NULL /*static, unused*/, L_4, /*hidden argument*/&CardboardOnGUI_add_onGUICallback_m16_MethodInfo);
		return;
	}
}
// System.Void TeleportLegacyUI::Update()
extern MethodInfo TeleportLegacyUI_Update_m8_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCollider_t73_m301_MethodInfo_var;
extern "C" void TeleportLegacyUI_Update_m8 (TeleportLegacyUI_t5 * __this, MethodInfo* method)
{
	static bool TeleportLegacyUI_Update_m8_init;
	if (!TeleportLegacyUI_Update_m8_init)
	{
		Component_GetComponent_TisCollider_t73_m301_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCollider_t73_m301_GenericMethod);
		TeleportLegacyUI_Update_m8_init = true;
	}
	RaycastHit_t74  V_0 = {0};
	bool V_1 = false;
	{
		Collider_t73 * L_0 = Component_GetComponent_TisCollider_t73_m301(__this, /*hidden argument*/Component_GetComponent_TisCollider_t73_m301_MethodInfo_var);
		CardboardHead_t4 * L_1 = (__this->___head_3);
		NullCheck(L_1);
		Ray_t39  L_2 = CardboardHead_get_Gaze_m127(L_1, /*hidden argument*/&CardboardHead_get_Gaze_m127_MethodInfo);
		NullCheck(L_0);
		bool L_3 = Collider_Raycast_m297(L_0, L_2, (&V_0), (std::numeric_limits<float>::infinity()), /*hidden argument*/&Collider_Raycast_m297_MethodInfo);
		V_1 = L_3;
		bool L_4 = V_1;
		Teleport_SetGazedAt_m2(__this, L_4, /*hidden argument*/&Teleport_SetGazedAt_m2_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_5 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_5);
		bool L_6 = Cardboard_get_Triggered_m84(L_5, /*hidden argument*/&Cardboard_get_Triggered_m84_MethodInfo);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		Teleport_TeleportRandomly_m5(__this, /*hidden argument*/&Teleport_TeleportRandomly_m5_MethodInfo);
	}

IL_0040:
	{
		return;
	}
}
// System.Void TeleportLegacyUI::OnGUI()
extern "C" void TeleportLegacyUI_OnGUI_m9 (TeleportLegacyUI_t5 * __this, MethodInfo* method)
{
	{
		bool L_0 = CardboardOnGUI_OKToDraw_m18(NULL /*static, unused*/, __this, /*hidden argument*/&CardboardOnGUI_OKToDraw_m18_MethodInfo);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Rect_t18  L_1 = {0};
		Rect__ctor_m298(&L_1, (50.0f), (50.0f), (200.0f), (50.0f), /*hidden argument*/&Rect__ctor_m298_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t72_il2cpp_TypeInfo));
		bool L_2 = GUI_Button_m299(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral1, /*hidden argument*/&GUI_Button_m299_MethodInfo);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		Teleport_Reset_m3(__this, /*hidden argument*/&Teleport_Reset_m3_MethodInfo);
	}

IL_003a:
	{
		Rect_t18  L_3 = {0};
		Rect__ctor_m298(&L_3, (50.0f), (110.0f), (200.0f), (50.0f), /*hidden argument*/&Rect__ctor_m298_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t72_il2cpp_TypeInfo));
		bool L_4 = GUI_Button_m299(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral2, /*hidden argument*/&GUI_Button_m299_MethodInfo);
		if (!L_4)
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_5 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_5);
		Cardboard_Recenter_m93(L_5, /*hidden argument*/&Cardboard_Recenter_m93_MethodInfo);
	}

IL_006c:
	{
		Rect_t18  L_6 = {0};
		Rect__ctor_m298(&L_6, (50.0f), (170.0f), (200.0f), (50.0f), /*hidden argument*/&Rect__ctor_m298_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t72_il2cpp_TypeInfo));
		bool L_7 = GUI_Button_m299(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral3, /*hidden argument*/&GUI_Button_m299_MethodInfo);
		if (!L_7)
		{
			goto IL_009a;
		}
	}
	{
		Teleport_ToggleVRMode_m4(__this, /*hidden argument*/&Teleport_ToggleVRMode_m4_MethodInfo);
	}

IL_009a:
	{
		return;
	}
}
// System.Void TeleportLegacyUI::OnDestroy()
extern MethodInfo TeleportLegacyUI_OnDestroy_m10_MethodInfo;
extern "C" void TeleportLegacyUI_OnDestroy_m10 (TeleportLegacyUI_t5 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = { &TeleportLegacyUI_OnGUI_m9_MethodInfo };
		OnGUICallback_t8 * L_1 = (OnGUICallback_t8 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnGUICallback_t8_il2cpp_TypeInfo));
		OnGUICallback__ctor_m11(L_1, __this, L_0, /*hidden argument*/&OnGUICallback__ctor_m11_MethodInfo);
		CardboardOnGUI_remove_onGUICallback_m17(NULL /*static, unused*/, L_1, /*hidden argument*/&CardboardOnGUI_remove_onGUICallback_m17_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void CardboardOnGUI/OnGUICallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnGUICallback__ctor_m11 (OnGUICallback_t8 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void CardboardOnGUI/OnGUICallback::Invoke()
extern MethodInfo OnGUICallback_Invoke_m12_MethodInfo;
extern "C" void OnGUICallback_Invoke_m12 (OnGUICallback_t8 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnGUICallback_Invoke_m12((OnGUICallback_t8 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_OnGUICallback_t8(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult CardboardOnGUI/OnGUICallback::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo OnGUICallback_BeginInvoke_m13_MethodInfo;
extern "C" Object_t * OnGUICallback_BeginInvoke_m13 (OnGUICallback_t8 * __this, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void CardboardOnGUI/OnGUICallback::EndInvoke(System.IAsyncResult)
extern MethodInfo OnGUICallback_EndInvoke_m14_MethodInfo;
extern "C" void OnGUICallback_EndInvoke_m14 (OnGUICallback_t8 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// CardboardOnGUI
#include "AssemblyU2DCSharp_CardboardOnGUI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CardboardOnGUI_t11_il2cpp_TypeInfo;

// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// CardboardOnGUIWindow
#include "AssemblyU2DCSharp_CardboardOnGUIWindow.h"
#include "Assembly-CSharp_ArrayTypes.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// CardboardOnGUIMouse
#include "AssemblyU2DCSharp_CardboardOnGUIMouse.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
extern TypeInfo RenderTexture_t10_il2cpp_TypeInfo;
extern TypeInfo Int32_t60_il2cpp_TypeInfo;
extern TypeInfo Void_t75_il2cpp_TypeInfo;
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// CardboardOnGUIWindow
#include "AssemblyU2DCSharp_CardboardOnGUIWindowMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// CardboardOnGUIMouse
#include "AssemblyU2DCSharp_CardboardOnGUIMouseMethodDeclarations.h"
extern MethodInfo SystemInfo_get_supportsRenderTextures_m302_MethodInfo;
extern MethodInfo CardboardOnGUI_get_IsGUIVisible_m19_MethodInfo;
extern MethodInfo Color_get_clear_m303_MethodInfo;
extern MethodInfo Delegate_Combine_m304_MethodInfo;
extern MethodInfo Delegate_Remove_m305_MethodInfo;
extern MethodInfo Object_op_Equality_m306_MethodInfo;
extern MethodInfo Behaviour_get_enabled_m307_MethodInfo;
extern MethodInfo Component_get_gameObject_m308_MethodInfo;
extern MethodInfo GameObject_get_activeInHierarchy_m309_MethodInfo;
extern MethodInfo Debug_LogWarning_m310_MethodInfo;
extern MethodInfo Behaviour_set_enabled_m311_MethodInfo;
extern MethodInfo CardboardOnGUI_Create_m24_MethodInfo;
extern MethodInfo Object_op_Inequality_m312_MethodInfo;
extern MethodInfo RenderTexture_Release_m313_MethodInfo;
extern MethodInfo Cardboard_get_StereoScreen_m73_MethodInfo;
extern MethodInfo Object_op_Implicit_m314_MethodInfo;
extern MethodInfo RenderTexture_get_width_m315_MethodInfo;
extern MethodInfo Screen_get_width_m316_MethodInfo;
extern MethodInfo RenderTexture_get_height_m317_MethodInfo;
extern MethodInfo Screen_get_height_m318_MethodInfo;
extern MethodInfo RenderTexture__ctor_m319_MethodInfo;
extern MethodInfo RenderTexture_Create_m320_MethodInfo;
extern MethodInfo CardboardOnGUIWindow_Create_m33_MethodInfo;
extern MethodInfo Event_get_current_m321_MethodInfo;
extern MethodInfo Event_get_type_m322_MethodInfo;
extern MethodInfo RenderTexture_get_active_m323_MethodInfo;
extern MethodInfo RenderTexture_set_active_m324_MethodInfo;
extern MethodInfo GL_Clear_m325_MethodInfo;
extern MethodInfo CardboardOnGUIMouse_DrawPointerImage_m29_MethodInfo;
struct Component_t71;
struct Component_t71;
#include "mscorlib_ArrayTypes.h"
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" ObjectU5BU5D_t76* Component_GetComponentsInChildren_TisObject_t_m327_gshared (Component_t71 * __this, bool p0, MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m327(__this, p0, method) (( ObjectU5BU5D_t76* (*) (Component_t71 *, bool, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m327_gshared)(__this, p0, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>(System.Boolean)
#define Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m326(__this, p0, method) (( CardboardOnGUIWindowU5BU5D_t77* (*) (Component_t71 *, bool, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m327_gshared)(__this, p0, method)
struct Component_t71;
// UnityEngine.CastHelper`1<CardboardOnGUIMouse>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_3.h"
// Declaration !!0 UnityEngine.Component::GetComponent<CardboardOnGUIMouse>()
// !!0 UnityEngine.Component::GetComponent<CardboardOnGUIMouse>()
#define Component_GetComponent_TisCardboardOnGUIMouse_t14_m328(__this, method) (( CardboardOnGUIMouse_t14 * (*) (Component_t71 *, MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m326_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisCardboardOnGUIMouse_t14_m328_GenericMethod;


// System.Void CardboardOnGUI::.ctor()
extern MethodInfo CardboardOnGUI__ctor_m15_MethodInfo;
extern "C" void CardboardOnGUI__ctor_m15 (CardboardOnGUI_t11 * __this, MethodInfo* method)
{
	{
		Color_t12  L_0 = Color_get_clear_m303(NULL /*static, unused*/, /*hidden argument*/&Color_get_clear_m303_MethodInfo);
		__this->___background_4 = L_0;
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUI::add_onGUICallback(CardboardOnGUI/OnGUICallback)
extern "C" void CardboardOnGUI_add_onGUICallback_m16 (Object_t * __this /* static, unused */, OnGUICallback_t8 * ___value, MethodInfo* method)
{
	{
		OnGUICallback_t8 * L_0 = ((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6;
		OnGUICallback_t8 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Combine_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m304_MethodInfo);
		((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6 = ((OnGUICallback_t8 *)Castclass(L_2, InitializedTypeInfo(&OnGUICallback_t8_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void CardboardOnGUI::remove_onGUICallback(CardboardOnGUI/OnGUICallback)
extern "C" void CardboardOnGUI_remove_onGUICallback_m17 (Object_t * __this /* static, unused */, OnGUICallback_t8 * ___value, MethodInfo* method)
{
	{
		OnGUICallback_t8 * L_0 = ((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6;
		OnGUICallback_t8 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Remove_m305(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m305_MethodInfo);
		((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6 = ((OnGUICallback_t8 *)Castclass(L_2, InitializedTypeInfo(&OnGUICallback_t8_il2cpp_TypeInfo)));
		return;
	}
}
// System.Boolean CardboardOnGUI::OKToDraw(UnityEngine.MonoBehaviour)
extern "C" bool CardboardOnGUI_OKToDraw_m18 (Object_t * __this /* static, unused */, MonoBehaviour_t2 * ___mb, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		bool L_0 = ((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___okToDraw_2;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		MonoBehaviour_t2 * L_1 = ___mb;
		bool L_2 = Object_op_Equality_m306(NULL /*static, unused*/, L_1, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		MonoBehaviour_t2 * L_3 = ___mb;
		NullCheck(L_3);
		bool L_4 = Behaviour_get_enabled_m307(L_3, /*hidden argument*/&Behaviour_get_enabled_m307_MethodInfo);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		MonoBehaviour_t2 * L_5 = ___mb;
		NullCheck(L_5);
		GameObject_t51 * L_6 = Component_get_gameObject_m308(L_5, /*hidden argument*/&Component_get_gameObject_m308_MethodInfo);
		NullCheck(L_6);
		bool L_7 = GameObject_get_activeInHierarchy_m309(L_6, /*hidden argument*/&GameObject_get_activeInHierarchy_m309_MethodInfo);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		G_B7_0 = G_B5_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B7_0 = 1;
	}

IL_0032:
	{
		G_B9_0 = G_B7_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B9_0 = 0;
	}

IL_0035:
	{
		return G_B9_0;
	}
}
// System.Boolean CardboardOnGUI::get_IsGUIVisible()
extern "C" bool CardboardOnGUI_get_IsGUIVisible_m19 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___isGUIVisible_3;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_VRModeEnabled_m55(L_1, /*hidden argument*/&Cardboard_get_VRModeEnabled_m55_MethodInfo);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		bool L_3 = SystemInfo_get_supportsRenderTextures_m302(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m302_MethodInfo);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 0;
	}

IL_0021:
	{
		return G_B4_0;
	}
}
// System.Void CardboardOnGUI::set_IsGUIVisible(System.Boolean)
extern "C" void CardboardOnGUI_set_IsGUIVisible_m20 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___isGUIVisible_3 = L_0;
		return;
	}
}
// System.Boolean CardboardOnGUI::get_Triggered()
extern MethodInfo CardboardOnGUI_get_Triggered_m21_MethodInfo;
extern "C" bool CardboardOnGUI_get_Triggered_m21 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = CardboardOnGUI_get_IsGUIVisible_m19(NULL /*static, unused*/, /*hidden argument*/&CardboardOnGUI_get_IsGUIVisible_m19_MethodInfo);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_Triggered_m84(L_1, /*hidden argument*/&Cardboard_get_Triggered_m84_MethodInfo);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Void CardboardOnGUI::Awake()
extern MethodInfo CardboardOnGUI_Awake_m22_MethodInfo;
extern "C" void CardboardOnGUI_Awake_m22 (CardboardOnGUI_t11 * __this, MethodInfo* method)
{
	{
		bool L_0 = SystemInfo_get_supportsRenderTextures_m302(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m302_MethodInfo);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, (String_t*) &_stringLiteral4, /*hidden argument*/&Debug_LogWarning_m310_MethodInfo);
		Behaviour_set_enabled_m311(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m311_MethodInfo);
	}

IL_001b:
	{
		return;
	}
}
// System.Void CardboardOnGUI::Start()
extern MethodInfo CardboardOnGUI_Start_m23_MethodInfo;
extern "C" void CardboardOnGUI_Start_m23 (CardboardOnGUI_t11 * __this, MethodInfo* method)
{
	{
		CardboardOnGUI_Create_m24(__this, /*hidden argument*/&CardboardOnGUI_Create_m24_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUI::Create()
extern MethodInfo* Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m326_MethodInfo_var;
extern "C" void CardboardOnGUI_Create_m24 (CardboardOnGUI_t11 * __this, MethodInfo* method)
{
	static bool CardboardOnGUI_Create_m24_init;
	if (!CardboardOnGUI_Create_m24_init)
	{
		Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m326_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m326_GenericMethod);
		CardboardOnGUI_Create_m24_init = true;
	}
	RenderTexture_t10 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	CardboardOnGUIWindow_t17 * V_3 = {0};
	CardboardOnGUIWindowU5BU5D_t77* V_4 = {0};
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		RenderTexture_t10 * L_0 = (__this->___guiScreen_5);
		bool L_1 = Object_op_Inequality_m312(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RenderTexture_t10 * L_2 = (__this->___guiScreen_5);
		NullCheck(L_2);
		RenderTexture_Release_m313(L_2, /*hidden argument*/&RenderTexture_Release_m313_MethodInfo);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_3 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_3);
		RenderTexture_t10 * L_4 = Cardboard_get_StereoScreen_m73(L_3, /*hidden argument*/&Cardboard_get_StereoScreen_m73_MethodInfo);
		V_0 = L_4;
		RenderTexture_t10 * L_5 = V_0;
		bool L_6 = Object_op_Implicit_m314(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_op_Implicit_m314_MethodInfo);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		RenderTexture_t10 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m315_MethodInfo, L_7);
		G_B5_0 = L_8;
		goto IL_0042;
	}

IL_003d:
	{
		int32_t L_9 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m316_MethodInfo);
		G_B5_0 = L_9;
	}

IL_0042:
	{
		V_1 = G_B5_0;
		RenderTexture_t10 * L_10 = V_0;
		bool L_11 = Object_op_Implicit_m314(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_op_Implicit_m314_MethodInfo);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		RenderTexture_t10 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m317_MethodInfo, L_12);
		G_B8_0 = L_13;
		goto IL_005e;
	}

IL_0059:
	{
		int32_t L_14 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		G_B8_0 = L_14;
	}

IL_005e:
	{
		V_2 = G_B8_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		RenderTexture_t10 * L_17 = (RenderTexture_t10 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RenderTexture_t10_il2cpp_TypeInfo));
		RenderTexture__ctor_m319(L_17, L_15, L_16, 0, 0, /*hidden argument*/&RenderTexture__ctor_m319_MethodInfo);
		__this->___guiScreen_5 = L_17;
		RenderTexture_t10 * L_18 = (__this->___guiScreen_5);
		NullCheck(L_18);
		RenderTexture_Create_m320(L_18, /*hidden argument*/&RenderTexture_Create_m320_MethodInfo);
		CardboardOnGUIWindowU5BU5D_t77* L_19 = Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m326(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m326_MethodInfo_var);
		V_4 = L_19;
		V_5 = 0;
		goto IL_00a3;
	}

IL_008b:
	{
		CardboardOnGUIWindowU5BU5D_t77* L_20 = V_4;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_3 = (*(CardboardOnGUIWindow_t17 **)(CardboardOnGUIWindow_t17 **)SZArrayLdElema(L_20, L_22));
		CardboardOnGUIWindow_t17 * L_23 = V_3;
		RenderTexture_t10 * L_24 = (__this->___guiScreen_5);
		NullCheck(L_23);
		CardboardOnGUIWindow_Create_m33(L_23, L_24, /*hidden argument*/&CardboardOnGUIWindow_Create_m33_MethodInfo);
		int32_t L_25 = V_5;
		V_5 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_26 = V_5;
		CardboardOnGUIWindowU5BU5D_t77* L_27 = V_4;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_008b;
		}
	}
	{
		return;
	}
}
// System.Void CardboardOnGUI::LateUpdate()
extern MethodInfo CardboardOnGUI_LateUpdate_m25_MethodInfo;
extern "C" void CardboardOnGUI_LateUpdate_m25 (CardboardOnGUI_t11 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_0 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_VRModeEnabled_m55(L_0, /*hidden argument*/&Cardboard_get_VRModeEnabled_m55_MethodInfo);
		((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___okToDraw_2 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		return;
	}
}
// System.Void CardboardOnGUI::OnGUI()
extern MethodInfo CardboardOnGUI_OnGUI_m26_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCardboardOnGUIMouse_t14_m328_MethodInfo_var;
extern "C" void CardboardOnGUI_OnGUI_m26 (CardboardOnGUI_t11 * __this, MethodInfo* method)
{
	static bool CardboardOnGUI_OnGUI_m26_init;
	if (!CardboardOnGUI_OnGUI_m26_init)
	{
		Component_GetComponent_TisCardboardOnGUIMouse_t14_m328_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCardboardOnGUIMouse_t14_m328_GenericMethod);
		CardboardOnGUI_OnGUI_m26_init = true;
	}
	RenderTexture_t10 * V_0 = {0};
	CardboardOnGUIMouse_t14 * V_1 = {0};
	{
		bool L_0 = CardboardOnGUI_get_IsGUIVisible_m19(NULL /*static, unused*/, /*hidden argument*/&CardboardOnGUI_get_IsGUIVisible_m19_MethodInfo);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		V_0 = (RenderTexture_t10 *)NULL;
		Event_t80 * L_1 = Event_get_current_m321(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m321_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = Event_get_type_m322(L_1, /*hidden argument*/&Event_get_type_m322_MethodInfo);
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_003b;
		}
	}
	{
		RenderTexture_t10 * L_3 = RenderTexture_get_active_m323(NULL /*static, unused*/, /*hidden argument*/&RenderTexture_get_active_m323_MethodInfo);
		V_0 = L_3;
		RenderTexture_t10 * L_4 = (__this->___guiScreen_5);
		RenderTexture_set_active_m324(NULL /*static, unused*/, L_4, /*hidden argument*/&RenderTexture_set_active_m324_MethodInfo);
		Color_t12  L_5 = (__this->___background_4);
		GL_Clear_m325(NULL /*static, unused*/, 0, 1, L_5, /*hidden argument*/&GL_Clear_m325_MethodInfo);
	}

IL_003b:
	{
		OnGUICallback_t8 * L_6 = ((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___okToDraw_2 = 1;
		OnGUICallback_t8 * L_7 = ((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(&OnGUICallback_Invoke_m12_MethodInfo, L_7);
		((CardboardOnGUI_t11_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t11_il2cpp_TypeInfo)->static_fields)->___okToDraw_2 = 0;
	}

IL_005b:
	{
		Event_t80 * L_8 = Event_get_current_m321(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m321_MethodInfo);
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m322(L_8, /*hidden argument*/&Event_get_type_m322_MethodInfo);
		if ((!(((uint32_t)L_9) == ((uint32_t)7))))
		{
			goto IL_008a;
		}
	}
	{
		CardboardOnGUIMouse_t14 * L_10 = Component_GetComponent_TisCardboardOnGUIMouse_t14_m328(__this, /*hidden argument*/Component_GetComponent_TisCardboardOnGUIMouse_t14_m328_MethodInfo_var);
		V_1 = L_10;
		CardboardOnGUIMouse_t14 * L_11 = V_1;
		bool L_12 = Object_op_Inequality_m312(NULL /*static, unused*/, L_11, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		CardboardOnGUIMouse_t14 * L_13 = V_1;
		NullCheck(L_13);
		CardboardOnGUIMouse_DrawPointerImage_m29(L_13, /*hidden argument*/&CardboardOnGUIMouse_DrawPointerImage_m29_MethodInfo);
	}

IL_0084:
	{
		RenderTexture_t10 * L_14 = V_0;
		RenderTexture_set_active_m324(NULL /*static, unused*/, L_14, /*hidden argument*/&RenderTexture_set_active_m324_MethodInfo);
	}

IL_008a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CardboardOnGUIMouse_t14_il2cpp_TypeInfo;

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
extern TypeInfo CardboardOnGUIWindow_t17_il2cpp_TypeInfo;
extern TypeInfo Vector2_t15_il2cpp_TypeInfo;
extern TypeInfo Texture_t13_il2cpp_TypeInfo;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern MethodInfo Vector2_get_zero_m329_MethodInfo;
extern MethodInfo RaycastHit_get_distance_m330_MethodInfo;
extern MethodInfo RaycastHit_get_textureCoord_m331_MethodInfo;
extern MethodInfo Rect_get_xMin_m332_MethodInfo;
extern MethodInfo Rect_get_width_m333_MethodInfo;
extern MethodInfo Rect_get_yMin_m334_MethodInfo;
extern MethodInfo Rect_get_height_m335_MethodInfo;
extern MethodInfo Cardboard_SetTouchCoordinates_m94_MethodInfo;
extern MethodInfo Vector2__ctor_m336_MethodInfo;
extern MethodInfo Vector2_get_sqrMagnitude_m337_MethodInfo;
extern MethodInfo Texture_get_width_m338_MethodInfo;
extern MethodInfo Texture_get_height_m339_MethodInfo;
extern MethodInfo GUI_DrawTexture_m340_MethodInfo;
struct Component_t71;
struct Component_t71;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t76* Component_GetComponentsInChildren_TisObject_t_m342_gshared (Component_t71 * __this, MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m342(__this, method) (( ObjectU5BU5D_t76* (*) (Component_t71 *, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m342_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>()
#define Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m341(__this, method) (( CardboardOnGUIWindowU5BU5D_t77* (*) (Component_t71 *, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m342_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m341_GenericMethod;


// System.Void CardboardOnGUIMouse::.ctor()
extern MethodInfo CardboardOnGUIMouse__ctor_m27_MethodInfo;
extern "C" void CardboardOnGUIMouse__ctor_m27 (CardboardOnGUIMouse_t14 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUIMouse::LateUpdate()
extern MethodInfo CardboardOnGUIMouse_LateUpdate_m28_MethodInfo;
extern MethodInfo* Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m341_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisCollider_t73_m301_MethodInfo_var;
extern "C" void CardboardOnGUIMouse_LateUpdate_m28 (CardboardOnGUIMouse_t14 * __this, MethodInfo* method)
{
	static bool CardboardOnGUIMouse_LateUpdate_m28_init;
	if (!CardboardOnGUIMouse_LateUpdate_m28_init)
	{
		Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m341_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m341_GenericMethod);
		Component_GetComponent_TisCollider_t73_m301_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCollider_t73_m301_GenericMethod);
		CardboardOnGUIMouse_LateUpdate_m28_init = true;
	}
	Ray_t39  V_0 = {0};
	CardboardOnGUIWindow_t17 * V_1 = {0};
	float V_2 = 0.0f;
	Vector2_t15  V_3 = {0};
	CardboardOnGUIWindow_t17 * V_4 = {0};
	CardboardOnGUIWindowU5BU5D_t77* V_5 = {0};
	int32_t V_6 = 0;
	RaycastHit_t74  V_7 = {0};
	{
		CardboardHead_t4 * L_0 = (__this->___head_2);
		bool L_1 = Object_op_Equality_m306(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		__this->___pointerVisible_6 = 1;
		return;
	}

IL_0019:
	{
		bool L_2 = CardboardOnGUI_get_IsGUIVisible_m19(NULL /*static, unused*/, /*hidden argument*/&CardboardOnGUI_get_IsGUIVisible_m19_MethodInfo);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		__this->___pointerVisible_6 = 0;
		return;
	}

IL_002b:
	{
		CardboardHead_t4 * L_3 = (__this->___head_2);
		NullCheck(L_3);
		Ray_t39  L_4 = CardboardHead_get_Gaze_m127(L_3, /*hidden argument*/&CardboardHead_get_Gaze_m127_MethodInfo);
		V_0 = L_4;
		V_1 = (CardboardOnGUIWindow_t17 *)NULL;
		V_2 = (std::numeric_limits<float>::infinity());
		Vector2_t15  L_5 = Vector2_get_zero_m329(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m329_MethodInfo);
		V_3 = L_5;
		CardboardOnGUIWindowU5BU5D_t77* L_6 = Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m341(__this, /*hidden argument*/Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t17_m341_MethodInfo_var);
		V_5 = L_6;
		V_6 = 0;
		goto IL_009b;
	}

IL_0055:
	{
		CardboardOnGUIWindowU5BU5D_t77* L_7 = V_5;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_4 = (*(CardboardOnGUIWindow_t17 **)(CardboardOnGUIWindow_t17 **)SZArrayLdElema(L_7, L_9));
		CardboardOnGUIWindow_t17 * L_10 = V_4;
		NullCheck(L_10);
		Collider_t73 * L_11 = Component_GetComponent_TisCollider_t73_m301(L_10, /*hidden argument*/Component_GetComponent_TisCollider_t73_m301_MethodInfo_var);
		Ray_t39  L_12 = V_0;
		NullCheck(L_11);
		bool L_13 = Collider_Raycast_m297(L_11, L_12, (&V_7), (std::numeric_limits<float>::infinity()), /*hidden argument*/&Collider_Raycast_m297_MethodInfo);
		if (!L_13)
		{
			goto IL_0095;
		}
	}
	{
		float L_14 = RaycastHit_get_distance_m330((&V_7), /*hidden argument*/&RaycastHit_get_distance_m330_MethodInfo);
		float L_15 = V_2;
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0095;
		}
	}
	{
		float L_16 = RaycastHit_get_distance_m330((&V_7), /*hidden argument*/&RaycastHit_get_distance_m330_MethodInfo);
		V_2 = L_16;
		CardboardOnGUIWindow_t17 * L_17 = V_4;
		V_1 = L_17;
		Vector2_t15  L_18 = RaycastHit_get_textureCoord_m331((&V_7), /*hidden argument*/&RaycastHit_get_textureCoord_m331_MethodInfo);
		V_3 = L_18;
	}

IL_0095:
	{
		int32_t L_19 = V_6;
		V_6 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_009b:
	{
		int32_t L_20 = V_6;
		CardboardOnGUIWindowU5BU5D_t77* L_21 = V_5;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)(((Array_t *)L_21)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		CardboardOnGUIWindow_t17 * L_22 = V_1;
		bool L_23 = Object_op_Equality_m306(NULL /*static, unused*/, L_22, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
		__this->___pointerVisible_6 = 0;
		return;
	}

IL_00ba:
	{
		CardboardOnGUIWindow_t17 * L_24 = V_1;
		NullCheck(L_24);
		Rect_t18 * L_25 = &(L_24->___rect_3);
		float L_26 = Rect_get_xMin_m332(L_25, /*hidden argument*/&Rect_get_xMin_m332_MethodInfo);
		CardboardOnGUIWindow_t17 * L_27 = V_1;
		NullCheck(L_27);
		Rect_t18 * L_28 = &(L_27->___rect_3);
		float L_29 = Rect_get_width_m333(L_28, /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		float L_30 = ((&V_3)->___x_1);
		(&V_3)->___x_1 = ((float)((float)L_26+(float)((float)((float)L_29*(float)L_30))));
		CardboardOnGUIWindow_t17 * L_31 = V_1;
		NullCheck(L_31);
		Rect_t18 * L_32 = &(L_31->___rect_3);
		float L_33 = Rect_get_yMin_m334(L_32, /*hidden argument*/&Rect_get_yMin_m334_MethodInfo);
		CardboardOnGUIWindow_t17 * L_34 = V_1;
		NullCheck(L_34);
		Rect_t18 * L_35 = &(L_34->___rect_3);
		float L_36 = Rect_get_height_m335(L_35, /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		float L_37 = ((&V_3)->___y_2);
		(&V_3)->___y_2 = ((float)((float)L_33+(float)((float)((float)L_36*(float)L_37))));
		float L_38 = ((&V_3)->___x_1);
		int32_t L_39 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m316_MethodInfo);
		__this->___pointerX_7 = (((int32_t)((float)((float)L_38*(float)(((float)L_39))))));
		float L_40 = ((&V_3)->___y_2);
		int32_t L_41 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		__this->___pointerY_8 = (((int32_t)((float)((float)L_40*(float)(((float)L_41))))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_42 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		int32_t L_43 = (__this->___pointerX_7);
		int32_t L_44 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		int32_t L_45 = (__this->___pointerY_8);
		NullCheck(L_42);
		Cardboard_SetTouchCoordinates_m94(L_42, L_43, ((int32_t)((int32_t)L_44-(int32_t)L_45)), /*hidden argument*/&Cardboard_SetTouchCoordinates_m94_MethodInfo);
		__this->___pointerVisible_6 = 1;
		return;
	}
}
// System.Void CardboardOnGUIMouse::DrawPointerImage()
extern "C" void CardboardOnGUIMouse_DrawPointerImage_m29 (CardboardOnGUIMouse_t14 * __this, MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	Vector2_t15  V_1 = {0};
	Vector2_t15  V_2 = {0};
	{
		Texture_t13 * L_0 = (__this->___pointerImage_3);
		bool L_1 = Object_op_Equality_m306(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = (__this->___pointerVisible_6);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = Behaviour_get_enabled_m307(__this, /*hidden argument*/&Behaviour_get_enabled_m307_MethodInfo);
		if (L_3)
		{
			goto IL_0028;
		}
	}

IL_0027:
	{
		return;
	}

IL_0028:
	{
		int32_t L_4 = (__this->___pointerX_7);
		int32_t L_5 = (__this->___pointerY_8);
		Vector2__ctor_m336((&V_0), (((float)L_4)), (((float)L_5)), /*hidden argument*/&Vector2__ctor_m336_MethodInfo);
		Vector2_t15  L_6 = (__this->___pointerSpot_5);
		V_1 = L_6;
		Vector2_t15  L_7 = (__this->___pointerSize_4);
		V_2 = L_7;
		float L_8 = Vector2_get_sqrMagnitude_m337((&V_2), /*hidden argument*/&Vector2_get_sqrMagnitude_m337_MethodInfo);
		if ((!(((float)L_8) < ((float)(1.0f)))))
		{
			goto IL_0082;
		}
	}
	{
		Texture_t13 * L_9 = (__this->___pointerImage_3);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_width_m338_MethodInfo, L_9);
		(&V_2)->___x_1 = (((float)L_10));
		Texture_t13 * L_11 = (__this->___pointerImage_3);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_height_m339_MethodInfo, L_11);
		(&V_2)->___y_2 = (((float)L_12));
	}

IL_0082:
	{
		float L_13 = ((&V_0)->___x_1);
		float L_14 = ((&V_1)->___x_1);
		int32_t L_15 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		float L_16 = ((&V_0)->___y_2);
		float L_17 = ((&V_1)->___y_2);
		float L_18 = ((&V_2)->___x_1);
		float L_19 = ((&V_2)->___y_2);
		Rect_t18  L_20 = {0};
		Rect__ctor_m298(&L_20, ((float)((float)L_13-(float)L_14)), ((float)((float)((float)((float)(((float)L_15))-(float)L_16))-(float)L_17)), L_18, L_19, /*hidden argument*/&Rect__ctor_m298_MethodInfo);
		Texture_t13 * L_21 = (__this->___pointerImage_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t72_il2cpp_TypeInfo));
		GUI_DrawTexture_m340(NULL /*static, unused*/, L_20, L_21, 0, /*hidden argument*/&GUI_DrawTexture_m340_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.MeshRenderer
#include "UnityEngine_UnityEngine_MeshRenderer.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
extern TypeInfo Material_t50_il2cpp_TypeInfo;
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern MethodInfo Shader_Find_m343_MethodInfo;
extern MethodInfo Material__ctor_m344_MethodInfo;
extern MethodInfo Material_set_mainTexture_m345_MethodInfo;
extern MethodInfo Rect_get_position_m346_MethodInfo;
extern MethodInfo Material_set_mainTextureOffset_m347_MethodInfo;
extern MethodInfo Rect_get_size_m348_MethodInfo;
extern MethodInfo Material_set_mainTextureScale_m349_MethodInfo;
extern MethodInfo Renderer_set_material_m350_MethodInfo;
extern MethodInfo Renderer_set_enabled_m351_MethodInfo;
extern MethodInfo Vector3__ctor_m352_MethodInfo;
extern MethodInfo Transform_set_localScale_m353_MethodInfo;
struct Component_t71;
// UnityEngine.CastHelper`1<UnityEngine.MeshRenderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_4.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
#define Component_GetComponent_TisMeshRenderer_t16_m354(__this, method) (( MeshRenderer_t16 * (*) (Component_t71 *, MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisMeshRenderer_t16_m354_GenericMethod;


// System.Void CardboardOnGUIWindow::.ctor()
extern MethodInfo CardboardOnGUIWindow__ctor_m30_MethodInfo;
extern "C" void CardboardOnGUIWindow__ctor_m30 (CardboardOnGUIWindow_t17 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUIWindow::Reset()
extern MethodInfo CardboardOnGUIWindow_Reset_m31_MethodInfo;
extern "C" void CardboardOnGUIWindow_Reset_m31 (CardboardOnGUIWindow_t17 * __this, MethodInfo* method)
{
	{
		Rect_t18  L_0 = {0};
		Rect__ctor_m298(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/&Rect__ctor_m298_MethodInfo);
		__this->___rect_3 = L_0;
		return;
	}
}
// System.Void CardboardOnGUIWindow::Awake()
extern MethodInfo CardboardOnGUIWindow_Awake_m32_MethodInfo;
extern MethodInfo* Component_GetComponent_TisMeshRenderer_t16_m354_MethodInfo_var;
extern "C" void CardboardOnGUIWindow_Awake_m32 (CardboardOnGUIWindow_t17 * __this, MethodInfo* method)
{
	static bool CardboardOnGUIWindow_Awake_m32_init;
	if (!CardboardOnGUIWindow_Awake_m32_init)
	{
		Component_GetComponent_TisMeshRenderer_t16_m354_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisMeshRenderer_t16_m354_GenericMethod);
		CardboardOnGUIWindow_Awake_m32_init = true;
	}
	{
		MeshRenderer_t16 * L_0 = Component_GetComponent_TisMeshRenderer_t16_m354(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t16_m354_MethodInfo_var);
		__this->___meshRenderer_2 = L_0;
		bool L_1 = SystemInfo_get_supportsRenderTextures_m302(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m302_MethodInfo);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		Behaviour_set_enabled_m311(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m311_MethodInfo);
	}

IL_001d:
	{
		return;
	}
}
// System.Void CardboardOnGUIWindow::Create(UnityEngine.RenderTexture)
extern "C" void CardboardOnGUIWindow_Create_m33 (CardboardOnGUIWindow_t17 * __this, RenderTexture_t10 * ___target, MethodInfo* method)
{
	Material_t50 * V_0 = {0};
	{
		MeshRenderer_t16 * L_0 = (__this->___meshRenderer_2);
		Shader_t81 * L_1 = Shader_Find_m343(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/&Shader_Find_m343_MethodInfo);
		Material_t50 * L_2 = (Material_t50 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t50_il2cpp_TypeInfo));
		Material__ctor_m344(L_2, L_1, /*hidden argument*/&Material__ctor_m344_MethodInfo);
		V_0 = L_2;
		Material_t50 * L_3 = V_0;
		RenderTexture_t10 * L_4 = ___target;
		NullCheck(L_3);
		Material_set_mainTexture_m345(L_3, L_4, /*hidden argument*/&Material_set_mainTexture_m345_MethodInfo);
		Material_t50 * L_5 = V_0;
		Rect_t18 * L_6 = &(__this->___rect_3);
		Vector2_t15  L_7 = Rect_get_position_m346(L_6, /*hidden argument*/&Rect_get_position_m346_MethodInfo);
		NullCheck(L_5);
		Material_set_mainTextureOffset_m347(L_5, L_7, /*hidden argument*/&Material_set_mainTextureOffset_m347_MethodInfo);
		Material_t50 * L_8 = V_0;
		Rect_t18 * L_9 = &(__this->___rect_3);
		Vector2_t15  L_10 = Rect_get_size_m348(L_9, /*hidden argument*/&Rect_get_size_m348_MethodInfo);
		NullCheck(L_8);
		Material_set_mainTextureScale_m349(L_8, L_10, /*hidden argument*/&Material_set_mainTextureScale_m349_MethodInfo);
		Material_t50 * L_11 = V_0;
		NullCheck(L_0);
		Renderer_set_material_m350(L_0, L_11, /*hidden argument*/&Renderer_set_material_m350_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUIWindow::OnDisable()
extern MethodInfo CardboardOnGUIWindow_OnDisable_m34_MethodInfo;
extern "C" void CardboardOnGUIWindow_OnDisable_m34 (CardboardOnGUIWindow_t17 * __this, MethodInfo* method)
{
	{
		MeshRenderer_t16 * L_0 = (__this->___meshRenderer_2);
		NullCheck(L_0);
		Renderer_set_enabled_m351(L_0, 0, /*hidden argument*/&Renderer_set_enabled_m351_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUIWindow::LateUpdate()
extern MethodInfo CardboardOnGUIWindow_LateUpdate_m35_MethodInfo;
extern "C" void CardboardOnGUIWindow_LateUpdate_m35 (CardboardOnGUIWindow_t17 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		MeshRenderer_t16 * L_0 = (__this->___meshRenderer_2);
		bool L_1 = CardboardOnGUI_get_IsGUIVisible_m19(NULL /*static, unused*/, /*hidden argument*/&CardboardOnGUI_get_IsGUIVisible_m19_MethodInfo);
		NullCheck(L_0);
		Renderer_set_enabled_m351(L_0, L_1, /*hidden argument*/&Renderer_set_enabled_m351_MethodInfo);
		MeshRenderer_t16 * L_2 = (__this->___meshRenderer_2);
		NullCheck(L_2);
		Material_t50 * L_3 = Renderer_get_material_m285(L_2, /*hidden argument*/&Renderer_get_material_m285_MethodInfo);
		Rect_t18 * L_4 = &(__this->___rect_3);
		Vector2_t15  L_5 = Rect_get_position_m346(L_4, /*hidden argument*/&Rect_get_position_m346_MethodInfo);
		NullCheck(L_3);
		Material_set_mainTextureOffset_m347(L_3, L_5, /*hidden argument*/&Material_set_mainTextureOffset_m347_MethodInfo);
		MeshRenderer_t16 * L_6 = (__this->___meshRenderer_2);
		NullCheck(L_6);
		Material_t50 * L_7 = Renderer_get_material_m285(L_6, /*hidden argument*/&Renderer_get_material_m285_MethodInfo);
		Rect_t18 * L_8 = &(__this->___rect_3);
		Vector2_t15  L_9 = Rect_get_size_m348(L_8, /*hidden argument*/&Rect_get_size_m348_MethodInfo);
		NullCheck(L_7);
		Material_set_mainTextureScale_m349(L_7, L_9, /*hidden argument*/&Material_set_mainTextureScale_m349_MethodInfo);
		int32_t L_10 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m316_MethodInfo);
		Rect_t18 * L_11 = &(__this->___rect_3);
		float L_12 = Rect_get_width_m333(L_11, /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		int32_t L_13 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		Rect_t18 * L_14 = &(__this->___rect_3);
		float L_15 = Rect_get_height_m335(L_14, /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		V_0 = ((float)((float)((float)((float)(((float)L_10))*(float)L_12))/(float)((float)((float)(((float)L_13))*(float)L_15))));
		Transform_t38 * L_16 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		float L_17 = V_0;
		Vector3_t3  L_18 = {0};
		Vector3__ctor_m352(&L_18, L_17, (1.0f), (1.0f), /*hidden argument*/&Vector3__ctor_m352_MethodInfo);
		NullCheck(L_16);
		Transform_set_localScale_m353(L_16, L_18, /*hidden argument*/&Transform_set_localScale_m353_MethodInfo);
		return;
	}
}
// SkyboxMesh
#include "AssemblyU2DCSharp_SkyboxMesh.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SkyboxMesh_t19_il2cpp_TypeInfo;
// SkyboxMesh
#include "AssemblyU2DCSharp_SkyboxMeshMethodDeclarations.h"

extern MethodInfo Debug_Log_m355_MethodInfo;
extern MethodInfo Object_Destroy_m356_MethodInfo;


// System.Void SkyboxMesh::.ctor()
extern MethodInfo SkyboxMesh__ctor_m36_MethodInfo;
extern "C" void SkyboxMesh__ctor_m36 (SkyboxMesh_t19 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		return;
	}
}
// System.Void SkyboxMesh::Awake()
extern MethodInfo SkyboxMesh_Awake_m37_MethodInfo;
extern "C" void SkyboxMesh_Awake_m37 (SkyboxMesh_t19 * __this, MethodInfo* method)
{
	{
		Debug_Log_m355(NULL /*static, unused*/, (String_t*) &_stringLiteral6, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		Object_Destroy_m356(NULL /*static, unused*/, __this, /*hidden argument*/&Object_Destroy_m356_MethodInfo);
		return;
	}
}
// StereoLensFlare
#include "AssemblyU2DCSharp_StereoLensFlare.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StereoLensFlare_t20_il2cpp_TypeInfo;
// StereoLensFlare
#include "AssemblyU2DCSharp_StereoLensFlareMethodDeclarations.h"



// System.Void StereoLensFlare::.ctor()
extern MethodInfo StereoLensFlare__ctor_m38_MethodInfo;
extern "C" void StereoLensFlare__ctor_m38 (StereoLensFlare_t20 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		return;
	}
}
// System.Void StereoLensFlare::Awake()
extern MethodInfo StereoLensFlare_Awake_m39_MethodInfo;
extern "C" void StereoLensFlare_Awake_m39 (StereoLensFlare_t20 * __this, MethodInfo* method)
{
	{
		Debug_Log_m355(NULL /*static, unused*/, (String_t*) &_stringLiteral7, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		Object_Destroy_m356(NULL /*static, unused*/, __this, /*hidden argument*/&Object_Destroy_m356_MethodInfo);
		return;
	}
}
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Eye_t21_il2cpp_TypeInfo;
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_EyeMethodDeclarations.h"



// Cardboard/Distortion
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Distortion_t22_il2cpp_TypeInfo;
// Cardboard/Distortion
#include "AssemblyU2DCSharp_Cardboard_DistortionMethodDeclarations.h"



// Cardboard/<EndOfFrame>c__Iterator0
#include "AssemblyU2DCSharp_Cardboard_U3CEndOfFrameU3Ec__Iterator0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CEndOfFrameU3Ec__Iterator0_t24_il2cpp_TypeInfo;
// Cardboard/<EndOfFrame>c__Iterator0
#include "AssemblyU2DCSharp_Cardboard_U3CEndOfFrameU3Ec__Iterator0MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// BaseVRDevice
#include "AssemblyU2DCSharp_BaseVRDevice.h"
// CardboardUILayer
#include "AssemblyU2DCSharp_CardboardUILayer.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo WaitForEndOfFrame_t82_il2cpp_TypeInfo;
extern TypeInfo BaseVRDevice_t25_il2cpp_TypeInfo;
extern TypeInfo Boolean_t83_il2cpp_TypeInfo;
extern TypeInfo CardboardUILayer_t27_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t84_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// BaseVRDevice
#include "AssemblyU2DCSharp_BaseVRDeviceMethodDeclarations.h"
// CardboardUILayer
#include "AssemblyU2DCSharp_CardboardUILayerMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo Object__ctor_m357_MethodInfo;
extern MethodInfo WaitForEndOfFrame__ctor_m358_MethodInfo;
extern MethodInfo Cardboard_UpdateState_m88_MethodInfo;
extern MethodInfo BaseVRDevice_PostRender_m359_MethodInfo;
extern MethodInfo Cardboard_get_NativeUILayerSupported_m71_MethodInfo;
extern MethodInfo CardboardUILayer__ctor_m143_MethodInfo;
extern MethodInfo CardboardUILayer_Draw_m146_MethodInfo;
extern MethodInfo Cardboard_DispatchEvents_m89_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m360_MethodInfo;


// System.Void Cardboard/<EndOfFrame>c__Iterator0::.ctor()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0__ctor_m40_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator0__ctor_m40 (U3CEndOfFrameU3Ec__Iterator0_t24 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Object Cardboard/<EndOfFrame>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m41_MethodInfo;
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m41 (U3CEndOfFrameU3Ec__Iterator0_t24 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Object Cardboard/<EndOfFrame>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m42_MethodInfo;
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m42 (U3CEndOfFrameU3Ec__Iterator0_t24 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Boolean Cardboard/<EndOfFrame>c__Iterator0::MoveNext()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0_MoveNext_m43_MethodInfo;
extern "C" bool U3CEndOfFrameU3Ec__Iterator0_MoveNext_m43 (U3CEndOfFrameU3Ec__Iterator0_t24 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___$PC_0);
		V_0 = L_0;
		__this->___$PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_00cb;
	}

IL_0021:
	{
		WaitForEndOfFrame_t82 * L_2 = (WaitForEndOfFrame_t82 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForEndOfFrame_t82_il2cpp_TypeInfo));
		WaitForEndOfFrame__ctor_m358(L_2, /*hidden argument*/&WaitForEndOfFrame__ctor_m358_MethodInfo);
		__this->___$current_1 = L_2;
		__this->___$PC_0 = 1;
		goto IL_00cd;
	}

IL_0038:
	{
		Cardboard_t23 * L_3 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		Cardboard_UpdateState_m88(L_3, /*hidden argument*/&Cardboard_UpdateState_m88_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_4 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		Cardboard_t23 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		bool L_6 = (L_5->___vrModeEnabled_4);
		NullCheck(L_4);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_PostRender_m359_MethodInfo, L_4, L_6);
		Cardboard_t23 * L_7 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_7);
		bool L_8 = (L_7->___vrModeEnabled_4);
		if (!L_8)
		{
			goto IL_00a8;
		}
	}
	{
		Cardboard_t23 * L_9 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_9);
		bool L_10 = Cardboard_get_NativeUILayerSupported_m71(L_9, /*hidden argument*/&Cardboard_get_NativeUILayerSupported_m71_MethodInfo);
		if (L_10)
		{
			goto IL_00a8;
		}
	}
	{
		Cardboard_t23 * L_11 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_11);
		CardboardUILayer_t27 * L_12 = (L_11->___uiLayer_16);
		if (L_12)
		{
			goto IL_0098;
		}
	}
	{
		Cardboard_t23 * L_13 = (__this->___U3CU3Ef__this_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardUILayer_t27_il2cpp_TypeInfo));
		CardboardUILayer_t27 * L_14 = (CardboardUILayer_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CardboardUILayer_t27_il2cpp_TypeInfo));
		CardboardUILayer__ctor_m143(L_14, /*hidden argument*/&CardboardUILayer__ctor_m143_MethodInfo);
		NullCheck(L_13);
		L_13->___uiLayer_16 = L_14;
	}

IL_0098:
	{
		Cardboard_t23 * L_15 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_15);
		CardboardUILayer_t27 * L_16 = (L_15->___uiLayer_16);
		NullCheck(L_16);
		CardboardUILayer_Draw_m146(L_16, /*hidden argument*/&CardboardUILayer_Draw_m146_MethodInfo);
	}

IL_00a8:
	{
		Cardboard_t23 * L_17 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_17);
		Cardboard_DispatchEvents_m89(L_17, /*hidden argument*/&Cardboard_DispatchEvents_m89_MethodInfo);
		Cardboard_t23 * L_18 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_18);
		L_18->___updated_15 = 0;
		goto IL_0021;
	}
	// Dead block : IL_00c4: ldarg.0

IL_00cb:
	{
		return 0;
	}

IL_00cd:
	{
		return 1;
	}
}
// System.Void Cardboard/<EndOfFrame>c__Iterator0::Dispose()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0_Dispose_m44_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator0_Dispose_m44 (U3CEndOfFrameU3Ec__Iterator0_t24 * __this, MethodInfo* method)
{
	{
		__this->___$PC_0 = (-1);
		return;
	}
}
// System.Void Cardboard/<EndOfFrame>c__Iterator0::Reset()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0_Reset_m45_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator0_Reset_m45 (U3CEndOfFrameU3Ec__Iterator0_t24 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// CardboardProfile
#include "AssemblyU2DCSharp_CardboardProfile.h"
// Pose3D
#include "AssemblyU2DCSharp_Pose3D.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.Action
#include "System_Core_System_Action.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Uri
#include "System_System_Uri.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern TypeInfo GameObject_t51_il2cpp_TypeInfo;
extern TypeInfo Single_t85_il2cpp_TypeInfo;
extern TypeInfo Action_t28_il2cpp_TypeInfo;
extern TypeInfo List_1_t64_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Uri_t26_il2cpp_TypeInfo;
extern TypeInfo Input_t86_il2cpp_TypeInfo;
// Pose3D
#include "AssemblyU2DCSharp_Pose3DMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"
extern Il2CppType List_1_t64_0_0_0;
extern MethodInfo GameObject__ctor_m361_MethodInfo;
extern MethodInfo GameObject_get_transform_m362_MethodInfo;
extern MethodInfo Vector3_get_zero_m363_MethodInfo;
extern MethodInfo Cardboard_get_NativeDistortionCorrectionSupported_m69_MethodInfo;
extern MethodInfo BaseVRDevice_SetDistortionCorrectionEnabled_m364_MethodInfo;
extern MethodInfo BaseVRDevice_SetVRModeEnabled_m365_MethodInfo;
extern MethodInfo BaseVRDevice_SetAlignmentMarkerEnabled_m366_MethodInfo;
extern MethodInfo BaseVRDevice_SetSettingsButtonEnabled_m367_MethodInfo;
extern MethodInfo BaseVRDevice_SetTapIsTrigger_m368_MethodInfo;
extern MethodInfo Mathf_Clamp01_m369_MethodInfo;
extern MethodInfo Mathf_Approximately_m370_MethodInfo;
extern MethodInfo BaseVRDevice_SetNeckModelScale_m371_MethodInfo;
extern MethodInfo BaseVRDevice_SetAutoDriftCorrectionEnabled_m372_MethodInfo;
extern MethodInfo Cardboard_CreateStereoScreen_m92_MethodInfo;
extern MethodInfo Cardboard_set_StereoScreen_m74_MethodInfo;
extern MethodInfo Debug_LogError_m373_MethodInfo;
extern MethodInfo RenderTexture_IsCreated_m374_MethodInfo;
extern MethodInfo BaseVRDevice_SetStereoScreen_m375_MethodInfo;
extern MethodInfo BaseVRDevice_get_Profile_m238_MethodInfo;
extern MethodInfo BaseVRDevice_GetHeadPose_m246_MethodInfo;
extern MethodInfo Cardboard_get_DistortionCorrection_m53_MethodInfo;
extern MethodInfo Cardboard_set_DistortionCorrection_m54_MethodInfo;
extern MethodInfo Cardboard_get_HeadPose_m77_MethodInfo;
extern MethodInfo Pose3D_get_Matrix_m165_MethodInfo;
extern MethodInfo Pose3D_get_Orientation_m163_MethodInfo;
extern MethodInfo Pose3D_get_Position_m161_MethodInfo;
extern MethodInfo Cardboard_get_ComfortableViewingRange_m81_MethodInfo;
extern MethodInfo BaseVRDevice_GetEyePose_m247_MethodInfo;
extern MethodInfo BaseVRDevice_GetProjection_m248_MethodInfo;
extern MethodInfo BaseVRDevice_GetViewport_m249_MethodInfo;
extern MethodInfo BaseVRDevice_Destroy_m255_MethodInfo;
extern MethodInfo BaseVRDevice_GetDevice_m258_MethodInfo;
extern MethodInfo BaseVRDevice_Init_m376_MethodInfo;
extern MethodInfo List_1__ctor_m377_MethodInfo;
extern MethodInfo BaseVRDevice_SupportsNativeDistortionCorrection_m240_MethodInfo;
extern MethodInfo Cardboard_set_NativeDistortionCorrectionSupported_m70_MethodInfo;
extern MethodInfo List_1_get_Count_m378_MethodInfo;
extern MethodInfo String_Join_m379_MethodInfo;
extern MethodInfo String_Concat_m380_MethodInfo;
extern MethodInfo List_1_Clear_m381_MethodInfo;
extern MethodInfo BaseVRDevice_SupportsNativeUILayer_m241_MethodInfo;
extern MethodInfo Cardboard_set_NativeUILayerSupported_m72_MethodInfo;
extern MethodInfo Uri_op_Inequality_m382_MethodInfo;
extern MethodInfo BaseVRDevice_SetDefaultDeviceProfile_m244_MethodInfo;
extern MethodInfo BaseVRDevice_UpdateScreenData_m383_MethodInfo;
extern MethodInfo Application_set_targetFrameRate_m384_MethodInfo;
extern MethodInfo Screen_set_sleepTimeout_m385_MethodInfo;
extern MethodInfo Cardboard_InitDevice_m82_MethodInfo;
extern MethodInfo Cardboard_AddDummyCamera_m90_MethodInfo;
extern MethodInfo BaseVRDevice_UpdateState_m386_MethodInfo;
extern MethodInfo Cardboard_get_TapIsTrigger_m61_MethodInfo;
extern MethodInfo Input_GetMouseButtonDown_m387_MethodInfo;
extern MethodInfo Cardboard_set_Triggered_m85_MethodInfo;
extern MethodInfo Input_GetKeyDown_m388_MethodInfo;
extern MethodInfo Cardboard_set_Tilted_m87_MethodInfo;
extern MethodInfo Cardboard_get_Tilted_m86_MethodInfo;
extern MethodInfo Action_Invoke_m389_MethodInfo;
extern MethodInfo Transform_set_parent_m390_MethodInfo;
extern MethodInfo Camera_set_clearFlags_m391_MethodInfo;
extern MethodInfo Color_get_black_m392_MethodInfo;
extern MethodInfo Camera_set_backgroundColor_m393_MethodInfo;
extern MethodInfo Camera_set_cullingMask_m394_MethodInfo;
extern MethodInfo Camera_set_useOcclusionCulling_m395_MethodInfo;
extern MethodInfo Camera_set_depth_m396_MethodInfo;
extern MethodInfo BaseVRDevice_CreateStereoScreen_m243_MethodInfo;
extern MethodInfo BaseVRDevice_Recenter_m397_MethodInfo;
extern MethodInfo BaseVRDevice_SetTouchCoordinates_m250_MethodInfo;
extern MethodInfo BaseVRDevice_ShowSettingsDialog_m245_MethodInfo;
extern MethodInfo BaseVRDevice_OnPause_m251_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m398_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutine_m399_MethodInfo;
extern MethodInfo BaseVRDevice_OnFocus_m252_MethodInfo;
extern MethodInfo BaseVRDevice_Reset_m253_MethodInfo;
extern MethodInfo BaseVRDevice_OnApplicationQuit_m254_MethodInfo;
extern MethodInfo Cardboard_EyePose_m78_MethodInfo;
extern MethodInfo Cardboard_Projection_m79_MethodInfo;
extern MethodInfo Cardboard_Viewport_m80_MethodInfo;
struct Object_t79;
// Declaration !!0 UnityEngine.Object::FindObjectOfType<Cardboard>()
// !!0 UnityEngine.Object::FindObjectOfType<Cardboard>()
extern "C" Cardboard_t23 * Object_FindObjectOfType_TisCardboard_t23_m400 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t51;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Cardboard>()
// !!0 UnityEngine.GameObject::AddComponent<Cardboard>()
extern "C" Cardboard_t23 * GameObject_AddComponent_TisCardboard_t23_m401 (GameObject_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t51;
// UnityEngine.CastHelper`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_5.h"
struct GameObject_t51;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m403_gshared (GameObject_t51 * __this, MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m403(__this, method) (( Object_t * (*) (GameObject_t51 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m403_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
#define GameObject_GetComponent_TisCamera_t35_m402(__this, method) (( Camera_t35 * (*) (GameObject_t51 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m403_gshared)(__this, method)
struct GameObject_t51;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
extern "C" Camera_t35 * GameObject_AddComponent_TisCamera_t35_m404 (GameObject_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Object_FindObjectOfType_TisCardboard_t23_m400_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisCardboard_t23_m401_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m377_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m378_GenericMethod;
extern Il2CppGenericMethod List_1_ToArray_m405_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m381_GenericMethod;
extern Il2CppGenericMethod GameObject_GetComponent_TisCamera_t35_m402_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisCamera_t35_m404_GenericMethod;


// System.Void Cardboard::.ctor()
extern MethodInfo Cardboard__ctor_m46_MethodInfo;
extern "C" void Cardboard__ctor_m46 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		__this->___distortionCorrection_3 = 1;
		__this->___vrModeEnabled_4 = 1;
		__this->___enableAlignmentMarker_5 = 1;
		__this->___enableSettingsButton_6 = 1;
		__this->___tapIsTrigger_7 = 1;
		__this->___autoDriftCorrection_9 = 1;
		Vector2_t15  L_0 = {0};
		Vector2__ctor_m336(&L_0, (1.0f), (100000.0f), /*hidden argument*/&Vector2__ctor_m336_MethodInfo);
		__this->___defaultComfortableViewingRange_13 = L_0;
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		return;
	}
}
// System.Void Cardboard::.cctor()
extern MethodInfo Cardboard__cctor_m47_MethodInfo;
extern "C" void Cardboard__cctor_m47 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Cardboard::add_OnTrigger(System.Action)
extern MethodInfo Cardboard_add_OnTrigger_m48_MethodInfo;
extern "C" void Cardboard_add_OnTrigger_m48 (Cardboard_t23 * __this, Action_t28 * ___value, MethodInfo* method)
{
	{
		Action_t28 * L_0 = (__this->___OnTrigger_17);
		Action_t28 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Combine_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m304_MethodInfo);
		__this->___OnTrigger_17 = ((Action_t28 *)Castclass(L_2, InitializedTypeInfo(&Action_t28_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void Cardboard::remove_OnTrigger(System.Action)
extern MethodInfo Cardboard_remove_OnTrigger_m49_MethodInfo;
extern "C" void Cardboard_remove_OnTrigger_m49 (Cardboard_t23 * __this, Action_t28 * ___value, MethodInfo* method)
{
	{
		Action_t28 * L_0 = (__this->___OnTrigger_17);
		Action_t28 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Remove_m305(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m305_MethodInfo);
		__this->___OnTrigger_17 = ((Action_t28 *)Castclass(L_2, InitializedTypeInfo(&Action_t28_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void Cardboard::add_OnTilt(System.Action)
extern MethodInfo Cardboard_add_OnTilt_m50_MethodInfo;
extern "C" void Cardboard_add_OnTilt_m50 (Cardboard_t23 * __this, Action_t28 * ___value, MethodInfo* method)
{
	{
		Action_t28 * L_0 = (__this->___OnTilt_18);
		Action_t28 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Combine_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m304_MethodInfo);
		__this->___OnTilt_18 = ((Action_t28 *)Castclass(L_2, InitializedTypeInfo(&Action_t28_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void Cardboard::remove_OnTilt(System.Action)
extern MethodInfo Cardboard_remove_OnTilt_m51_MethodInfo;
extern "C" void Cardboard_remove_OnTilt_m51 (Cardboard_t23 * __this, Action_t28 * ___value, MethodInfo* method)
{
	{
		Action_t28 * L_0 = (__this->___OnTilt_18);
		Action_t28 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Remove_m305(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m305_MethodInfo);
		__this->___OnTilt_18 = ((Action_t28 *)Castclass(L_2, InitializedTypeInfo(&Action_t28_il2cpp_TypeInfo)));
		return;
	}
}
// Cardboard Cardboard::get_SDK()
extern MethodInfo* Object_FindObjectOfType_TisCardboard_t23_m400_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisCardboard_t23_m401_MethodInfo_var;
extern "C" Cardboard_t23 * Cardboard_get_SDK_m52 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Cardboard_get_SDK_m52_init;
	if (!Cardboard_get_SDK_m52_init)
	{
		Object_FindObjectOfType_TisCardboard_t23_m400_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Object_FindObjectOfType_TisCardboard_t23_m400_GenericMethod);
		GameObject_AddComponent_TisCardboard_t23_m401_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCardboard_t23_m401_GenericMethod);
		Cardboard_get_SDK_m52_init = true;
	}
	GameObject_t51 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		bool L_1 = Object_op_Equality_m306(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Cardboard_t23 * L_2 = Object_FindObjectOfType_TisCardboard_t23_m400(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisCardboard_t23_m400_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___sdk_2 = L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_3 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		bool L_4 = Object_op_Equality_m306(NULL /*static, unused*/, L_3, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		Debug_Log_m355(NULL /*static, unused*/, (String_t*) &_stringLiteral8, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		GameObject_t51 * L_5 = (GameObject_t51 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t51_il2cpp_TypeInfo));
		GameObject__ctor_m361(L_5, (String_t*) &_stringLiteral9, /*hidden argument*/&GameObject__ctor_m361_MethodInfo);
		V_0 = L_5;
		GameObject_t51 * L_6 = V_0;
		NullCheck(L_6);
		Cardboard_t23 * L_7 = GameObject_AddComponent_TisCardboard_t23_m401(L_6, /*hidden argument*/GameObject_AddComponent_TisCardboard_t23_m401_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___sdk_2 = L_7;
		GameObject_t51 * L_8 = V_0;
		NullCheck(L_8);
		Transform_t38 * L_9 = GameObject_get_transform_m362(L_8, /*hidden argument*/&GameObject_get_transform_m362_MethodInfo);
		Vector3_t3  L_10 = Vector3_get_zero_m363(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m363_MethodInfo);
		NullCheck(L_9);
		Transform_set_localPosition_m289(L_9, L_10, /*hidden argument*/&Transform_set_localPosition_m289_MethodInfo);
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_11 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		return L_11;
	}
}
// System.Boolean Cardboard::get_DistortionCorrection()
extern "C" bool Cardboard_get_DistortionCorrection_m53 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___distortionCorrection_3);
		return L_0;
	}
}
// System.Void Cardboard::set_DistortionCorrection(System.Boolean)
extern "C" void Cardboard_set_DistortionCorrection_m54 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	BaseVRDevice_t25 * G_B4_0 = {0};
	BaseVRDevice_t25 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	BaseVRDevice_t25 * G_B5_1 = {0};
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___distortionCorrection_3);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_2 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_3 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_4 = ___value;
		G_B3_0 = L_3;
		if (!L_4)
		{
			G_B4_0 = L_3;
			goto IL_0029;
		}
	}
	{
		bool L_5 = Cardboard_get_NativeDistortionCorrectionSupported_m69(__this, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m69_MethodInfo);
		G_B5_0 = ((int32_t)(L_5));
		G_B5_1 = G_B3_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_002a:
	{
		NullCheck(G_B5_1);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetDistortionCorrectionEnabled_m364_MethodInfo, G_B5_1, G_B5_0);
	}

IL_002f:
	{
		bool L_6 = ___value;
		__this->___distortionCorrection_3 = L_6;
		return;
	}
}
// System.Boolean Cardboard::get_VRModeEnabled()
extern "C" bool Cardboard_get_VRModeEnabled_m55 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___vrModeEnabled_4);
		return L_0;
	}
}
// System.Void Cardboard::set_VRModeEnabled(System.Boolean)
extern "C" void Cardboard_set_VRModeEnabled_m56 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___vrModeEnabled_4);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_2 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_3 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_4 = ___value;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetVRModeEnabled_m365_MethodInfo, L_3, L_4);
	}

IL_0021:
	{
		bool L_5 = ___value;
		__this->___vrModeEnabled_4 = L_5;
		return;
	}
}
// System.Boolean Cardboard::get_EnableAlignmentMarker()
extern MethodInfo Cardboard_get_EnableAlignmentMarker_m57_MethodInfo;
extern "C" bool Cardboard_get_EnableAlignmentMarker_m57 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___enableAlignmentMarker_5);
		return L_0;
	}
}
// System.Void Cardboard::set_EnableAlignmentMarker(System.Boolean)
extern MethodInfo Cardboard_set_EnableAlignmentMarker_m58_MethodInfo;
extern "C" void Cardboard_set_EnableAlignmentMarker_m58 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	BaseVRDevice_t25 * G_B4_0 = {0};
	BaseVRDevice_t25 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	BaseVRDevice_t25 * G_B5_1 = {0};
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___enableAlignmentMarker_5);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_2 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_3 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_4 = ___value;
		G_B3_0 = L_3;
		if (!L_4)
		{
			G_B4_0 = L_3;
			goto IL_0029;
		}
	}
	{
		bool L_5 = Cardboard_get_NativeUILayerSupported_m71(__this, /*hidden argument*/&Cardboard_get_NativeUILayerSupported_m71_MethodInfo);
		G_B5_0 = ((int32_t)(L_5));
		G_B5_1 = G_B3_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_002a:
	{
		NullCheck(G_B5_1);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetAlignmentMarkerEnabled_m366_MethodInfo, G_B5_1, G_B5_0);
	}

IL_002f:
	{
		bool L_6 = ___value;
		__this->___enableAlignmentMarker_5 = L_6;
		return;
	}
}
// System.Boolean Cardboard::get_EnableSettingsButton()
extern MethodInfo Cardboard_get_EnableSettingsButton_m59_MethodInfo;
extern "C" bool Cardboard_get_EnableSettingsButton_m59 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___enableSettingsButton_6);
		return L_0;
	}
}
// System.Void Cardboard::set_EnableSettingsButton(System.Boolean)
extern MethodInfo Cardboard_set_EnableSettingsButton_m60_MethodInfo;
extern "C" void Cardboard_set_EnableSettingsButton_m60 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___enableSettingsButton_6);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_2 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_3 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_4 = ___value;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetSettingsButtonEnabled_m367_MethodInfo, L_3, L_4);
	}

IL_0021:
	{
		bool L_5 = ___value;
		__this->___enableSettingsButton_6 = L_5;
		return;
	}
}
// System.Boolean Cardboard::get_TapIsTrigger()
extern "C" bool Cardboard_get_TapIsTrigger_m61 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___tapIsTrigger_7);
		return L_0;
	}
}
// System.Void Cardboard::set_TapIsTrigger(System.Boolean)
extern MethodInfo Cardboard_set_TapIsTrigger_m62_MethodInfo;
extern "C" void Cardboard_set_TapIsTrigger_m62 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___tapIsTrigger_7);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_2 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_3 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_4 = ___value;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetTapIsTrigger_m368_MethodInfo, L_3, L_4);
	}

IL_0021:
	{
		bool L_5 = ___value;
		__this->___tapIsTrigger_7 = L_5;
		return;
	}
}
// System.Single Cardboard::get_NeckModelScale()
extern MethodInfo Cardboard_get_NeckModelScale_m63_MethodInfo;
extern "C" float Cardboard_get_NeckModelScale_m63 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___neckModelScale_8);
		return L_0;
	}
}
// System.Void Cardboard::set_NeckModelScale(System.Single)
extern MethodInfo Cardboard_set_NeckModelScale_m64_MethodInfo;
extern "C" void Cardboard_set_NeckModelScale_m64 (Cardboard_t23 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t69_il2cpp_TypeInfo));
		float L_1 = Mathf_Clamp01_m369(NULL /*static, unused*/, L_0, /*hidden argument*/&Mathf_Clamp01_m369_MethodInfo);
		___value = L_1;
		float L_2 = ___value;
		float L_3 = (__this->___neckModelScale_8);
		bool L_4 = Mathf_Approximately_m370(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Mathf_Approximately_m370_MethodInfo);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_5 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_6 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		float L_7 = ___value;
		NullCheck(L_6);
		VirtActionInvoker1< float >::Invoke(&BaseVRDevice_SetNeckModelScale_m371_MethodInfo, L_6, L_7);
	}

IL_002e:
	{
		float L_8 = ___value;
		__this->___neckModelScale_8 = L_8;
		return;
	}
}
// System.Boolean Cardboard::get_AutoDriftCorrection()
extern MethodInfo Cardboard_get_AutoDriftCorrection_m65_MethodInfo;
extern "C" bool Cardboard_get_AutoDriftCorrection_m65 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___autoDriftCorrection_9);
		return L_0;
	}
}
// System.Void Cardboard::set_AutoDriftCorrection(System.Boolean)
extern MethodInfo Cardboard_set_AutoDriftCorrection_m66_MethodInfo;
extern "C" void Cardboard_set_AutoDriftCorrection_m66 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___autoDriftCorrection_9);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_2 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_3 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_4 = ___value;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetAutoDriftCorrectionEnabled_m372_MethodInfo, L_3, L_4);
	}

IL_0021:
	{
		bool L_5 = ___value;
		__this->___autoDriftCorrection_9 = L_5;
		return;
	}
}
// System.Boolean Cardboard::get_SyncWithCardboardApp()
extern MethodInfo Cardboard_get_SyncWithCardboardApp_m67_MethodInfo;
extern "C" bool Cardboard_get_SyncWithCardboardApp_m67 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___syncWithCardboardApp_10);
		return L_0;
	}
}
// System.Void Cardboard::set_SyncWithCardboardApp(System.Boolean)
extern MethodInfo Cardboard_set_SyncWithCardboardApp_m68_MethodInfo;
extern "C" void Cardboard_set_SyncWithCardboardApp_m68 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = ___value;
		bool L_2 = (__this->___syncWithCardboardApp_10);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, (String_t*) &_stringLiteral10, /*hidden argument*/&Debug_LogWarning_m310_MethodInfo);
	}

IL_001c:
	{
		bool L_3 = ___value;
		__this->___syncWithCardboardApp_10 = L_3;
		return;
	}
}
// System.Boolean Cardboard::get_NativeDistortionCorrectionSupported()
extern "C" bool Cardboard_get_NativeDistortionCorrectionSupported_m69 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19);
		return L_0;
	}
}
// System.Void Cardboard::set_NativeDistortionCorrectionSupported(System.Boolean)
extern "C" void Cardboard_set_NativeDistortionCorrectionSupported_m70 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Boolean Cardboard::get_NativeUILayerSupported()
extern "C" bool Cardboard_get_NativeUILayerSupported_m71 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CNativeUILayerSupportedU3Ek__BackingField_20);
		return L_0;
	}
}
// System.Void Cardboard::set_NativeUILayerSupported(System.Boolean)
extern "C" void Cardboard_set_NativeUILayerSupported_m72 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CNativeUILayerSupportedU3Ek__BackingField_20 = L_0;
		return;
	}
}
// UnityEngine.RenderTexture Cardboard::get_StereoScreen()
extern "C" RenderTexture_t10 * Cardboard_get_StereoScreen_m73 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___distortionCorrection_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = (__this->___vrModeEnabled_4);
		if (L_1)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (RenderTexture_t10 *)NULL;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		RenderTexture_t10 * L_2 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		bool L_3 = Object_op_Equality_m306(NULL /*static, unused*/, L_2, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		bool L_4 = Cardboard_get_NativeDistortionCorrectionSupported_m69(__this, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m69_MethodInfo);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		RenderTexture_t10 * L_5 = Cardboard_CreateStereoScreen_m92(__this, /*hidden argument*/&Cardboard_CreateStereoScreen_m92_MethodInfo);
		Cardboard_set_StereoScreen_m74(__this, L_5, /*hidden argument*/&Cardboard_set_StereoScreen_m74_MethodInfo);
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		RenderTexture_t10 * L_6 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		return L_6;
	}
}
// System.Void Cardboard::set_StereoScreen(UnityEngine.RenderTexture)
extern "C" void Cardboard_set_StereoScreen_m74 (Cardboard_t23 * __this, RenderTexture_t10 * ___value, MethodInfo* method)
{
	{
		RenderTexture_t10 * L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		RenderTexture_t10 * L_1 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		bool L_2 = Object_op_Equality_m306(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		bool L_3 = Cardboard_get_NativeDistortionCorrectionSupported_m69(__this, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m69_MethodInfo);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		RenderTexture_t10 * L_4 = ___value;
		bool L_5 = Object_op_Inequality_m312(NULL /*static, unused*/, L_4, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Debug_LogError_m373(NULL /*static, unused*/, (String_t*) &_stringLiteral11, /*hidden argument*/&Debug_LogError_m373_MethodInfo);
		return;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		RenderTexture_t10 * L_6 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		bool L_7 = Object_op_Inequality_m312(NULL /*static, unused*/, L_6, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		RenderTexture_t10 * L_8 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		NullCheck(L_8);
		RenderTexture_Release_m313(L_8, /*hidden argument*/&RenderTexture_Release_m313_MethodInfo);
	}

IL_004d:
	{
		RenderTexture_t10 * L_9 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12 = L_9;
		RenderTexture_t10 * L_10 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		bool L_11 = Object_op_Inequality_m312(NULL /*static, unused*/, L_10, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		RenderTexture_t10 * L_12 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		NullCheck(L_12);
		bool L_13 = RenderTexture_IsCreated_m374(L_12, /*hidden argument*/&RenderTexture_IsCreated_m374_MethodInfo);
		if (L_13)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		RenderTexture_t10 * L_14 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		NullCheck(L_14);
		RenderTexture_Create_m320(L_14, /*hidden argument*/&RenderTexture_Create_m320_MethodInfo);
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_15 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_15)
		{
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_16 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		RenderTexture_t10 * L_17 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		NullCheck(L_16);
		VirtActionInvoker1< RenderTexture_t10 * >::Invoke(&BaseVRDevice_SetStereoScreen_m375_MethodInfo, L_16, L_17);
	}

IL_0096:
	{
		return;
	}
}
// System.Boolean Cardboard::get_UseDistortionEffect()
extern MethodInfo Cardboard_get_UseDistortionEffect_m75_MethodInfo;
extern "C" bool Cardboard_get_UseDistortionEffect_m75 (Cardboard_t23 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		bool L_0 = Cardboard_get_NativeDistortionCorrectionSupported_m69(__this, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m69_MethodInfo);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		bool L_1 = (__this->___distortionCorrection_3);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2 = (__this->___vrModeEnabled_4);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		bool L_3 = SystemInfo_get_supportsRenderTextures_m302(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m302_MethodInfo);
		G_B5_0 = ((int32_t)(L_3));
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		return G_B5_0;
	}
}
// CardboardProfile Cardboard::get_Profile()
extern MethodInfo Cardboard_get_Profile_m76_MethodInfo;
extern "C" CardboardProfile_t29 * Cardboard_get_Profile_m76 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		CardboardProfile_t29 * L_1 = BaseVRDevice_get_Profile_m238(L_0, /*hidden argument*/&BaseVRDevice_get_Profile_m238_MethodInfo);
		return L_1;
	}
}
// Pose3D Cardboard::get_HeadPose()
extern "C" Pose3D_t30 * Cardboard_get_HeadPose_m77 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		Pose3D_t30 * L_1 = BaseVRDevice_GetHeadPose_m246(L_0, /*hidden argument*/&BaseVRDevice_GetHeadPose_m246_MethodInfo);
		return L_1;
	}
}
// Pose3D Cardboard::EyePose(Cardboard/Eye)
extern "C" Pose3D_t30 * Cardboard_EyePose_m78 (Cardboard_t23 * __this, int32_t ___eye, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		int32_t L_1 = ___eye;
		NullCheck(L_0);
		Pose3D_t30 * L_2 = BaseVRDevice_GetEyePose_m247(L_0, L_1, /*hidden argument*/&BaseVRDevice_GetEyePose_m247_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Matrix4x4 Cardboard::Projection(Cardboard/Eye,Cardboard/Distortion)
extern "C" Matrix4x4_t32  Cardboard_Projection_m79 (Cardboard_t23 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		int32_t L_1 = ___eye;
		int32_t L_2 = ___distortion;
		NullCheck(L_0);
		Matrix4x4_t32  L_3 = BaseVRDevice_GetProjection_m248(L_0, L_1, L_2, /*hidden argument*/&BaseVRDevice_GetProjection_m248_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Rect Cardboard::Viewport(Cardboard/Eye,Cardboard/Distortion)
extern "C" Rect_t18  Cardboard_Viewport_m80 (Cardboard_t23 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		int32_t L_1 = ___eye;
		int32_t L_2 = ___distortion;
		NullCheck(L_0);
		Rect_t18  L_3 = BaseVRDevice_GetViewport_m249(L_0, L_1, L_2, /*hidden argument*/&BaseVRDevice_GetViewport_m249_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Vector2 Cardboard::get_ComfortableViewingRange()
extern "C" Vector2_t15  Cardboard_get_ComfortableViewingRange_m81 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		Vector2_t15  L_0 = (__this->___defaultComfortableViewingRange_13);
		return L_0;
	}
}
// System.Void Cardboard::InitDevice()
extern TypeInfo* List_1_t64_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m377_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m378_MethodInfo_var;
extern MethodInfo* List_1_ToArray_m405_MethodInfo_var;
extern MethodInfo* List_1_Clear_m381_MethodInfo_var;
extern "C" void Cardboard_InitDevice_m82 (Cardboard_t23 * __this, MethodInfo* method)
{
	static bool Cardboard_InitDevice_m82_init;
	if (!Cardboard_InitDevice_m82_init)
	{
		List_1_t64_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t64_0_0_0);
		List_1__ctor_m377_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m377_GenericMethod);
		List_1_get_Count_m378_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m378_GenericMethod);
		List_1_ToArray_m405_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_ToArray_m405_GenericMethod);
		List_1_Clear_m381_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m381_GenericMethod);
		Cardboard_InitDevice_m82_init = true;
	}
	List_1_t64 * V_0 = {0};
	BaseVRDevice_t25 * G_B10_0 = {0};
	BaseVRDevice_t25 * G_B9_0 = {0};
	int32_t G_B11_0 = 0;
	BaseVRDevice_t25 * G_B11_1 = {0};
	BaseVRDevice_t25 * G_B13_0 = {0};
	BaseVRDevice_t25 * G_B12_0 = {0};
	int32_t G_B14_0 = 0;
	BaseVRDevice_t25 * G_B14_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_1 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&BaseVRDevice_Destroy_m255_MethodInfo, L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_2 = BaseVRDevice_GetDevice_m258(NULL /*static, unused*/, /*hidden argument*/&BaseVRDevice_GetDevice_m258_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11 = L_2;
		BaseVRDevice_t25 * L_3 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(&BaseVRDevice_Init_m376_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t64_il2cpp_TypeInfo_var);
		List_1_t64 * L_4 = (List_1_t64 *)il2cpp_codegen_object_new (List_1_t64_il2cpp_TypeInfo_var);
		List_1__ctor_m377(L_4, /*hidden argument*/List_1__ctor_m377_MethodInfo_var);
		V_0 = L_4;
		BaseVRDevice_t25 * L_5 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		List_1_t64 * L_6 = V_0;
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, List_1_t64 * >::Invoke(&BaseVRDevice_SupportsNativeDistortionCorrection_m240_MethodInfo, L_5, L_6);
		Cardboard_set_NativeDistortionCorrectionSupported_m70(__this, L_7, /*hidden argument*/&Cardboard_set_NativeDistortionCorrectionSupported_m70_MethodInfo);
		List_1_t64 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m378_MethodInfo_var, L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		List_1_t64 * L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_t87* L_11 = List_1_ToArray_m405(L_10, /*hidden argument*/List_1_ToArray_m405_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = String_Join_m379(NULL /*static, unused*/, (String_t*) &_stringLiteral13, L_11, /*hidden argument*/&String_Join_m379_MethodInfo);
		String_t* L_13 = String_Concat_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral12, L_12, (String_t*) &_stringLiteral14, /*hidden argument*/&String_Concat_m380_MethodInfo);
		Debug_LogWarning_m310(NULL /*static, unused*/, L_13, /*hidden argument*/&Debug_LogWarning_m310_MethodInfo);
	}

IL_006f:
	{
		List_1_t64 * L_14 = V_0;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(List_1_Clear_m381_MethodInfo_var, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_15 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		List_1_t64 * L_16 = V_0;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, List_1_t64 * >::Invoke(&BaseVRDevice_SupportsNativeUILayer_m241_MethodInfo, L_15, L_16);
		Cardboard_set_NativeUILayerSupported_m72(__this, L_17, /*hidden argument*/&Cardboard_set_NativeUILayerSupported_m72_MethodInfo);
		List_1_t64 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m378_MethodInfo_var, L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		List_1_t64 * L_20 = V_0;
		NullCheck(L_20);
		StringU5BU5D_t87* L_21 = List_1_ToArray_m405(L_20, /*hidden argument*/List_1_ToArray_m405_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Join_m379(NULL /*static, unused*/, (String_t*) &_stringLiteral13, L_21, /*hidden argument*/&String_Join_m379_MethodInfo);
		String_t* L_23 = String_Concat_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral15, L_22, (String_t*) &_stringLiteral14, /*hidden argument*/&String_Concat_m380_MethodInfo);
		Debug_LogWarning_m310(NULL /*static, unused*/, L_23, /*hidden argument*/&Debug_LogWarning_m310_MethodInfo);
	}

IL_00b6:
	{
		Uri_t26 * L_24 = (__this->___DefaultDeviceProfile_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		bool L_25 = Uri_op_Inequality_m382(NULL /*static, unused*/, L_24, (Uri_t26 *)NULL, /*hidden argument*/&Uri_op_Inequality_m382_MethodInfo);
		if (!L_25)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_26 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		Uri_t26 * L_27 = (__this->___DefaultDeviceProfile_14);
		NullCheck(L_26);
		VirtFuncInvoker1< bool, Uri_t26 * >::Invoke(&BaseVRDevice_SetDefaultDeviceProfile_m244_MethodInfo, L_26, L_27);
	}

IL_00d8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_28 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_29 = (__this->___vrModeEnabled_4);
		NullCheck(L_28);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetVRModeEnabled_m365_MethodInfo, L_28, L_29);
		BaseVRDevice_t25 * L_30 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_31 = (__this->___distortionCorrection_3);
		G_B9_0 = L_30;
		if (!L_31)
		{
			G_B10_0 = L_30;
			goto IL_0100;
		}
	}
	{
		bool L_32 = Cardboard_get_NativeDistortionCorrectionSupported_m69(__this, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m69_MethodInfo);
		G_B11_0 = ((int32_t)(L_32));
		G_B11_1 = G_B9_0;
		goto IL_0101;
	}

IL_0100:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
	}

IL_0101:
	{
		NullCheck(G_B11_1);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetDistortionCorrectionEnabled_m364_MethodInfo, G_B11_1, G_B11_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_33 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_34 = (__this->___enableAlignmentMarker_5);
		G_B12_0 = L_33;
		if (!L_34)
		{
			G_B13_0 = L_33;
			goto IL_011e;
		}
	}
	{
		bool L_35 = Cardboard_get_NativeUILayerSupported_m71(__this, /*hidden argument*/&Cardboard_get_NativeUILayerSupported_m71_MethodInfo);
		G_B14_0 = ((int32_t)(L_35));
		G_B14_1 = G_B12_0;
		goto IL_011f;
	}

IL_011e:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
	}

IL_011f:
	{
		NullCheck(G_B14_1);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetAlignmentMarkerEnabled_m366_MethodInfo, G_B14_1, G_B14_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_36 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_37 = (__this->___enableSettingsButton_6);
		NullCheck(L_36);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetSettingsButtonEnabled_m367_MethodInfo, L_36, L_37);
		BaseVRDevice_t25 * L_38 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_39 = (__this->___tapIsTrigger_7);
		NullCheck(L_38);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetTapIsTrigger_m368_MethodInfo, L_38, L_39);
		BaseVRDevice_t25 * L_40 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		float L_41 = (__this->___neckModelScale_8);
		NullCheck(L_40);
		VirtActionInvoker1< float >::Invoke(&BaseVRDevice_SetNeckModelScale_m371_MethodInfo, L_40, L_41);
		BaseVRDevice_t25 * L_42 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_43 = (__this->___autoDriftCorrection_9);
		NullCheck(L_42);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetAutoDriftCorrectionEnabled_m372_MethodInfo, L_42, L_43);
		BaseVRDevice_t25 * L_44 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_44);
		VirtActionInvoker0::Invoke(&BaseVRDevice_UpdateScreenData_m383_MethodInfo, L_44);
		return;
	}
}
// System.Void Cardboard::Awake()
extern MethodInfo Cardboard_Awake_m83_MethodInfo;
extern "C" void Cardboard_Awake_m83 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		bool L_1 = Object_op_Equality_m306(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___sdk_2 = __this;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_2 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		bool L_3 = Object_op_Inequality_m312(NULL /*static, unused*/, L_2, __this, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, (String_t*) &_stringLiteral16, /*hidden argument*/&Debug_LogWarning_m310_MethodInfo);
		Behaviour_set_enabled_m311(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m311_MethodInfo);
		return;
	}

IL_0038:
	{
		Application_set_targetFrameRate_m384(NULL /*static, unused*/, ((int32_t)60), /*hidden argument*/&Application_set_targetFrameRate_m384_MethodInfo);
		Screen_set_sleepTimeout_m385(NULL /*static, unused*/, (-1), /*hidden argument*/&Screen_set_sleepTimeout_m385_MethodInfo);
		Cardboard_InitDevice_m82(__this, /*hidden argument*/&Cardboard_InitDevice_m82_MethodInfo);
		Cardboard_AddDummyCamera_m90(__this, /*hidden argument*/&Cardboard_AddDummyCamera_m90_MethodInfo);
		Cardboard_set_StereoScreen_m74(__this, (RenderTexture_t10 *)NULL, /*hidden argument*/&Cardboard_set_StereoScreen_m74_MethodInfo);
		return;
	}
}
// System.Boolean Cardboard::get_Triggered()
extern "C" bool Cardboard_get_Triggered_m84 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CTriggeredU3Ek__BackingField_21);
		return L_0;
	}
}
// System.Void Cardboard::set_Triggered(System.Boolean)
extern "C" void Cardboard_set_Triggered_m85 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CTriggeredU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Boolean Cardboard::get_Tilted()
extern "C" bool Cardboard_get_Tilted_m86 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CTiltedU3Ek__BackingField_22);
		return L_0;
	}
}
// System.Void Cardboard::set_Tilted(System.Boolean)
extern "C" void Cardboard_set_Tilted_m87 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CTiltedU3Ek__BackingField_22 = L_0;
		return;
	}
}
// System.Void Cardboard::UpdateState()
extern "C" void Cardboard_UpdateState_m88 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___updated_15);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_1 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&BaseVRDevice_UpdateState_m386_MethodInfo, L_1);
		__this->___updated_15 = 1;
	}

IL_001c:
	{
		return;
	}
}
// System.Void Cardboard::DispatchEvents()
extern "C" void Cardboard_DispatchEvents_m89 (Cardboard_t23 * __this, MethodInfo* method)
{
	Cardboard_t23 * G_B5_0 = {0};
	Cardboard_t23 * G_B1_0 = {0};
	Cardboard_t23 * G_B3_0 = {0};
	Cardboard_t23 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	Cardboard_t23 * G_B4_1 = {0};
	int32_t G_B6_0 = 0;
	Cardboard_t23 * G_B6_1 = {0};
	Cardboard_t23 * G_B11_0 = {0};
	Cardboard_t23 * G_B7_0 = {0};
	Cardboard_t23 * G_B9_0 = {0};
	Cardboard_t23 * G_B8_0 = {0};
	int32_t G_B10_0 = 0;
	Cardboard_t23 * G_B10_1 = {0};
	int32_t G_B12_0 = 0;
	Cardboard_t23 * G_B12_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		bool L_1 = (L_0->___triggered_12);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_0026;
		}
	}
	{
		bool L_2 = Cardboard_get_TapIsTrigger_m61(__this, /*hidden argument*/&Cardboard_get_TapIsTrigger_m61_MethodInfo);
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t86_il2cpp_TypeInfo));
		bool L_3 = Input_GetMouseButtonDown_m387(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m387_MethodInfo);
		G_B4_0 = ((int32_t)(L_3));
		G_B4_1 = G_B2_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0024:
	{
		G_B6_0 = G_B4_0;
		G_B6_1 = G_B4_1;
		goto IL_0027;
	}

IL_0026:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0027:
	{
		NullCheck(G_B6_1);
		Cardboard_set_Triggered_m85(G_B6_1, G_B6_0, /*hidden argument*/&Cardboard_set_Triggered_m85_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_4 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_4);
		bool L_5 = (L_4->___tilted_13);
		G_B7_0 = __this;
		if (L_5)
		{
			G_B11_0 = __this;
			goto IL_0053;
		}
	}
	{
		bool L_6 = Cardboard_get_TapIsTrigger_m61(__this, /*hidden argument*/&Cardboard_get_TapIsTrigger_m61_MethodInfo);
		G_B8_0 = G_B7_0;
		if (!L_6)
		{
			G_B9_0 = G_B7_0;
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t86_il2cpp_TypeInfo));
		bool L_7 = Input_GetKeyDown_m388(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/&Input_GetKeyDown_m388_MethodInfo);
		G_B10_0 = ((int32_t)(L_7));
		G_B10_1 = G_B8_0;
		goto IL_0051;
	}

IL_0050:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_0051:
	{
		G_B12_0 = G_B10_0;
		G_B12_1 = G_B10_1;
		goto IL_0054;
	}

IL_0053:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_0054:
	{
		NullCheck(G_B12_1);
		Cardboard_set_Tilted_m87(G_B12_1, G_B12_0, /*hidden argument*/&Cardboard_set_Tilted_m87_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_8 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_8);
		L_8->___triggered_12 = 0;
		BaseVRDevice_t25 * L_9 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_9);
		L_9->___tilted_13 = 0;
		bool L_10 = Cardboard_get_Tilted_m86(__this, /*hidden argument*/&Cardboard_get_Tilted_m86_MethodInfo);
		if (!L_10)
		{
			goto IL_0090;
		}
	}
	{
		Action_t28 * L_11 = (__this->___OnTilt_18);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		Action_t28 * L_12 = (__this->___OnTilt_18);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(&Action_Invoke_m389_MethodInfo, L_12);
	}

IL_0090:
	{
		bool L_13 = Cardboard_get_Triggered_m84(__this, /*hidden argument*/&Cardboard_get_Triggered_m84_MethodInfo);
		if (!L_13)
		{
			goto IL_00b1;
		}
	}
	{
		Action_t28 * L_14 = (__this->___OnTrigger_17);
		if (!L_14)
		{
			goto IL_00b1;
		}
	}
	{
		Action_t28 * L_15 = (__this->___OnTrigger_17);
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(&Action_Invoke_m389_MethodInfo, L_15);
	}

IL_00b1:
	{
		return;
	}
}
// System.Void Cardboard::AddDummyCamera()
extern MethodInfo* GameObject_GetComponent_TisCamera_t35_m402_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisCamera_t35_m404_MethodInfo_var;
extern "C" void Cardboard_AddDummyCamera_m90 (Cardboard_t23 * __this, MethodInfo* method)
{
	static bool Cardboard_AddDummyCamera_m90_init;
	if (!Cardboard_AddDummyCamera_m90_init)
	{
		GameObject_GetComponent_TisCamera_t35_m402_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisCamera_t35_m402_GenericMethod);
		GameObject_AddComponent_TisCamera_t35_m404_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCamera_t35_m404_GenericMethod);
		Cardboard_AddDummyCamera_m90_init = true;
	}
	GameObject_t51 * V_0 = {0};
	Camera_t35 * V_1 = {0};
	{
		GameObject_t51 * L_0 = Component_get_gameObject_m308(__this, /*hidden argument*/&Component_get_gameObject_m308_MethodInfo);
		V_0 = L_0;
		GameObject_t51 * L_1 = V_0;
		NullCheck(L_1);
		Camera_t35 * L_2 = GameObject_GetComponent_TisCamera_t35_m402(L_1, /*hidden argument*/GameObject_GetComponent_TisCamera_t35_m402_MethodInfo_var);
		bool L_3 = Object_op_Implicit_m314(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_op_Implicit_m314_MethodInfo);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t51 * L_4 = (GameObject_t51 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t51_il2cpp_TypeInfo));
		GameObject__ctor_m361(L_4, (String_t*) &_stringLiteral17, /*hidden argument*/&GameObject__ctor_m361_MethodInfo);
		V_0 = L_4;
		GameObject_t51 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t38 * L_6 = GameObject_get_transform_m362(L_5, /*hidden argument*/&GameObject_get_transform_m362_MethodInfo);
		GameObject_t51 * L_7 = Component_get_gameObject_m308(__this, /*hidden argument*/&Component_get_gameObject_m308_MethodInfo);
		NullCheck(L_7);
		Transform_t38 * L_8 = GameObject_get_transform_m362(L_7, /*hidden argument*/&GameObject_get_transform_m362_MethodInfo);
		NullCheck(L_6);
		Transform_set_parent_m390(L_6, L_8, /*hidden argument*/&Transform_set_parent_m390_MethodInfo);
	}

IL_0038:
	{
		GameObject_t51 * L_9 = V_0;
		NullCheck(L_9);
		Camera_t35 * L_10 = GameObject_AddComponent_TisCamera_t35_m404(L_9, /*hidden argument*/GameObject_AddComponent_TisCamera_t35_m404_MethodInfo_var);
		V_1 = L_10;
		Camera_t35 * L_11 = V_1;
		NullCheck(L_11);
		Camera_set_clearFlags_m391(L_11, 2, /*hidden argument*/&Camera_set_clearFlags_m391_MethodInfo);
		Camera_t35 * L_12 = V_1;
		Color_t12  L_13 = Color_get_black_m392(NULL /*static, unused*/, /*hidden argument*/&Color_get_black_m392_MethodInfo);
		NullCheck(L_12);
		Camera_set_backgroundColor_m393(L_12, L_13, /*hidden argument*/&Camera_set_backgroundColor_m393_MethodInfo);
		Camera_t35 * L_14 = V_1;
		NullCheck(L_14);
		Camera_set_cullingMask_m394(L_14, 0, /*hidden argument*/&Camera_set_cullingMask_m394_MethodInfo);
		Camera_t35 * L_15 = V_1;
		NullCheck(L_15);
		Camera_set_useOcclusionCulling_m395(L_15, 0, /*hidden argument*/&Camera_set_useOcclusionCulling_m395_MethodInfo);
		Camera_t35 * L_16 = V_1;
		NullCheck(L_16);
		Camera_set_depth_m396(L_16, (-100.0f), /*hidden argument*/&Camera_set_depth_m396_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator Cardboard::EndOfFrame()
extern MethodInfo Cardboard_EndOfFrame_m91_MethodInfo;
extern "C" Object_t * Cardboard_EndOfFrame_m91 (Cardboard_t23 * __this, MethodInfo* method)
{
	U3CEndOfFrameU3Ec__Iterator0_t24 * V_0 = {0};
	{
		U3CEndOfFrameU3Ec__Iterator0_t24 * L_0 = (U3CEndOfFrameU3Ec__Iterator0_t24 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CEndOfFrameU3Ec__Iterator0_t24_il2cpp_TypeInfo));
		U3CEndOfFrameU3Ec__Iterator0__ctor_m40(L_0, /*hidden argument*/&U3CEndOfFrameU3Ec__Iterator0__ctor_m40_MethodInfo);
		V_0 = L_0;
		U3CEndOfFrameU3Ec__Iterator0_t24 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CEndOfFrameU3Ec__Iterator0_t24 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.RenderTexture Cardboard::CreateStereoScreen()
extern "C" RenderTexture_t10 * Cardboard_CreateStereoScreen_m92 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		RenderTexture_t10 * L_1 = (RenderTexture_t10 *)VirtFuncInvoker0< RenderTexture_t10 * >::Invoke(&BaseVRDevice_CreateStereoScreen_m243_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void Cardboard::Recenter()
extern "C" void Cardboard_Recenter_m93 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&BaseVRDevice_Recenter_m397_MethodInfo, L_0);
		return;
	}
}
// System.Void Cardboard::SetTouchCoordinates(System.Int32,System.Int32)
extern "C" void Cardboard_SetTouchCoordinates_m94 (Cardboard_t23 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		int32_t L_1 = ___x;
		int32_t L_2 = ___y;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(&BaseVRDevice_SetTouchCoordinates_m250_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
// System.Void Cardboard::ShowSettingsDialog()
extern MethodInfo Cardboard_ShowSettingsDialog_m95_MethodInfo;
extern "C" void Cardboard_ShowSettingsDialog_m95 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&BaseVRDevice_ShowSettingsDialog_m245_MethodInfo, L_0);
		return;
	}
}
// System.Void Cardboard::OnEnable()
extern MethodInfo Cardboard_OnEnable_m96_MethodInfo;
extern "C" void Cardboard_OnEnable_m96 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_OnPause_m251_MethodInfo, L_0, 0);
		MonoBehaviour_StartCoroutine_m398(__this, (String_t*) &_stringLiteral18, /*hidden argument*/&MonoBehaviour_StartCoroutine_m398_MethodInfo);
		return;
	}
}
// System.Void Cardboard::OnDisable()
extern MethodInfo Cardboard_OnDisable_m97_MethodInfo;
extern "C" void Cardboard_OnDisable_m97 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		MonoBehaviour_StopCoroutine_m399(__this, (String_t*) &_stringLiteral18, /*hidden argument*/&MonoBehaviour_StopCoroutine_m399_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_OnPause_m251_MethodInfo, L_0, 1);
		return;
	}
}
// System.Void Cardboard::OnApplicationPause(System.Boolean)
extern MethodInfo Cardboard_OnApplicationPause_m98_MethodInfo;
extern "C" void Cardboard_OnApplicationPause_m98 (Cardboard_t23 * __this, bool ___pause, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_1 = ___pause;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_OnPause_m251_MethodInfo, L_0, L_1);
		return;
	}
}
// System.Void Cardboard::OnApplicationFocus(System.Boolean)
extern MethodInfo Cardboard_OnApplicationFocus_m99_MethodInfo;
extern "C" void Cardboard_OnApplicationFocus_m99 (Cardboard_t23 * __this, bool ___focus, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_1 = ___focus;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_OnFocus_m252_MethodInfo, L_0, L_1);
		return;
	}
}
// System.Void Cardboard::OnLevelWasLoaded(System.Int32)
extern MethodInfo Cardboard_OnLevelWasLoaded_m100_MethodInfo;
extern "C" void Cardboard_OnLevelWasLoaded_m100 (Cardboard_t23 * __this, int32_t ___level, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&BaseVRDevice_Reset_m253_MethodInfo, L_0);
		return;
	}
}
// System.Void Cardboard::OnDestroy()
extern MethodInfo Cardboard_OnDestroy_m101_MethodInfo;
extern "C" void Cardboard_OnDestroy_m101 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		Cardboard_set_VRModeEnabled_m56(__this, 0, /*hidden argument*/&Cardboard_set_VRModeEnabled_m56_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_1 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&BaseVRDevice_Destroy_m255_MethodInfo, L_1);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_2 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		bool L_3 = Object_op_Equality_m306(NULL /*static, unused*/, L_2, __this, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___sdk_2 = (Cardboard_t23 *)NULL;
	}

IL_0031:
	{
		return;
	}
}
// System.Void Cardboard::OnApplicationQuit()
extern MethodInfo Cardboard_OnApplicationQuit_m102_MethodInfo;
extern "C" void Cardboard_OnApplicationQuit_m102 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((Cardboard_t23_StaticFields*)InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&BaseVRDevice_OnApplicationQuit_m254_MethodInfo, L_0);
		return;
	}
}
// System.Boolean Cardboard::get_nativeDistortionCorrection()
extern MethodInfo Cardboard_get_nativeDistortionCorrection_m103_MethodInfo;
extern "C" bool Cardboard_get_nativeDistortionCorrection_m103 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = Cardboard_get_DistortionCorrection_m53(__this, /*hidden argument*/&Cardboard_get_DistortionCorrection_m53_MethodInfo);
		return L_0;
	}
}
// System.Void Cardboard::set_nativeDistortionCorrection(System.Boolean)
extern MethodInfo Cardboard_set_nativeDistortionCorrection_m104_MethodInfo;
extern "C" void Cardboard_set_nativeDistortionCorrection_m104 (Cardboard_t23 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		Cardboard_set_DistortionCorrection_m54(__this, L_0, /*hidden argument*/&Cardboard_set_DistortionCorrection_m54_MethodInfo);
		return;
	}
}
// System.Boolean Cardboard::get_InCardboard()
extern MethodInfo Cardboard_get_InCardboard_m105_MethodInfo;
extern "C" bool Cardboard_get_InCardboard_m105 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean Cardboard::get_CardboardTriggered()
extern MethodInfo Cardboard_get_CardboardTriggered_m106_MethodInfo;
extern "C" bool Cardboard_get_CardboardTriggered_m106 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		bool L_0 = Cardboard_get_Triggered_m84(__this, /*hidden argument*/&Cardboard_get_Triggered_m84_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 Cardboard::get_HeadView()
extern MethodInfo Cardboard_get_HeadView_m107_MethodInfo;
extern "C" Matrix4x4_t32  Cardboard_get_HeadView_m107 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		Pose3D_t30 * L_0 = Cardboard_get_HeadPose_m77(__this, /*hidden argument*/&Cardboard_get_HeadPose_m77_MethodInfo);
		NullCheck(L_0);
		Matrix4x4_t32  L_1 = Pose3D_get_Matrix_m165(L_0, /*hidden argument*/&Pose3D_get_Matrix_m165_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Quaternion Cardboard::get_HeadRotation()
extern MethodInfo Cardboard_get_HeadRotation_m108_MethodInfo;
extern "C" Quaternion_t33  Cardboard_get_HeadRotation_m108 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		Pose3D_t30 * L_0 = Cardboard_get_HeadPose_m77(__this, /*hidden argument*/&Cardboard_get_HeadPose_m77_MethodInfo);
		NullCheck(L_0);
		Quaternion_t33  L_1 = Pose3D_get_Orientation_m163(L_0, /*hidden argument*/&Pose3D_get_Orientation_m163_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Vector3 Cardboard::get_HeadPosition()
extern MethodInfo Cardboard_get_HeadPosition_m109_MethodInfo;
extern "C" Vector3_t3  Cardboard_get_HeadPosition_m109 (Cardboard_t23 * __this, MethodInfo* method)
{
	{
		Pose3D_t30 * L_0 = Cardboard_get_HeadPose_m77(__this, /*hidden argument*/&Cardboard_get_HeadPose_m77_MethodInfo);
		NullCheck(L_0);
		Vector3_t3  L_1 = Pose3D_get_Position_m161(L_0, /*hidden argument*/&Pose3D_get_Position_m161_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Matrix4x4 Cardboard::EyeView(Cardboard/Eye)
extern MethodInfo Cardboard_EyeView_m110_MethodInfo;
extern "C" Matrix4x4_t32  Cardboard_EyeView_m110 (Cardboard_t23 * __this, int32_t ___eye, MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Pose3D_t30 * L_1 = Cardboard_EyePose_m78(__this, L_0, /*hidden argument*/&Cardboard_EyePose_m78_MethodInfo);
		NullCheck(L_1);
		Matrix4x4_t32  L_2 = Pose3D_get_Matrix_m165(L_1, /*hidden argument*/&Pose3D_get_Matrix_m165_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 Cardboard::EyeOffset(Cardboard/Eye)
extern MethodInfo Cardboard_EyeOffset_m111_MethodInfo;
extern "C" Vector3_t3  Cardboard_EyeOffset_m111 (Cardboard_t23 * __this, int32_t ___eye, MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Pose3D_t30 * L_1 = Cardboard_EyePose_m78(__this, L_0, /*hidden argument*/&Cardboard_EyePose_m78_MethodInfo);
		NullCheck(L_1);
		Vector3_t3  L_2 = Pose3D_get_Position_m161(L_1, /*hidden argument*/&Pose3D_get_Position_m161_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Matrix4x4 Cardboard::UndistortedProjection(Cardboard/Eye)
extern MethodInfo Cardboard_UndistortedProjection_m112_MethodInfo;
extern "C" Matrix4x4_t32  Cardboard_UndistortedProjection_m112 (Cardboard_t23 * __this, int32_t ___eye, MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Matrix4x4_t32  L_1 = Cardboard_Projection_m79(__this, L_0, 1, /*hidden argument*/&Cardboard_Projection_m79_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Rect Cardboard::EyeRect(Cardboard/Eye)
extern MethodInfo Cardboard_EyeRect_m113_MethodInfo;
extern "C" Rect_t18  Cardboard_EyeRect_m113 (Cardboard_t23 * __this, int32_t ___eye, MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Rect_t18  L_1 = Cardboard_Viewport_m80(__this, L_0, 0, /*hidden argument*/&Cardboard_Viewport_m80_MethodInfo);
		return L_1;
	}
}
// System.Single Cardboard::get_MinimumComfortDistance()
extern MethodInfo Cardboard_get_MinimumComfortDistance_m114_MethodInfo;
extern "C" float Cardboard_get_MinimumComfortDistance_m114 (Cardboard_t23 * __this, MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Vector2_t15  L_0 = Cardboard_get_ComfortableViewingRange_m81(__this, /*hidden argument*/&Cardboard_get_ComfortableViewingRange_m81_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		return L_1;
	}
}
// System.Single Cardboard::get_MaximumComfortDistance()
extern MethodInfo Cardboard_get_MaximumComfortDistance_m115_MethodInfo;
extern "C" float Cardboard_get_MaximumComfortDistance_m115 (Cardboard_t23 * __this, MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Vector2_t15  L_0 = Cardboard_get_ComfortableViewingRange_m81(__this, /*hidden argument*/&Cardboard_get_ComfortableViewingRange_m81_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___y_2);
		return L_1;
	}
}
// CardboardEye
#include "AssemblyU2DCSharp_CardboardEye.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CardboardEye_t36_il2cpp_TypeInfo;
// CardboardEye
#include "AssemblyU2DCSharp_CardboardEyeMethodDeclarations.h"

// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// RadialUndistortionEffect
#include "AssemblyU2DCSharp_RadialUndistortionEffect.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// CardboardProfile/Device
#include "AssemblyU2DCSharp_CardboardProfile_Device.h"
// CardboardProfile/Distortion
#include "AssemblyU2DCSharp_CardboardProfile_Distortion.h"
// CardboardProfile/Screen
#include "AssemblyU2DCSharp_CardboardProfile_Screen.h"
// CardboardProfile/Lenses
#include "AssemblyU2DCSharp_CardboardProfile_Lenses.h"
extern TypeInfo StereoController_t34_il2cpp_TypeInfo;
extern TypeInfo Vector4_t88_il2cpp_TypeInfo;
extern TypeInfo CardboardProfile_t29_il2cpp_TypeInfo;
extern TypeInfo Device_t44_il2cpp_TypeInfo;
extern TypeInfo Distortion_t43_il2cpp_TypeInfo;
extern TypeInfo Screen_t40_il2cpp_TypeInfo;
extern TypeInfo Lenses_t41_il2cpp_TypeInfo;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// CardboardProfile
#include "AssemblyU2DCSharp_CardboardProfileMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern MethodInfo Transform_get_parent_m406_MethodInfo;
extern MethodInfo Application_get_isEditor_m407_MethodInfo;
extern MethodInfo Application_get_isPlaying_m408_MethodInfo;
extern MethodInfo LayerMask_op_Implicit_m409_MethodInfo;
extern MethodInfo CardboardEye_get_Controller_m117_MethodInfo;
extern MethodInfo Camera_get_rect_m410_MethodInfo;
extern MethodInfo Matrix4x4_get_Item_m411_MethodInfo;
extern MethodInfo Matrix4x4_set_Item_m412_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m413_MethodInfo;
extern MethodInfo Vector2_get_normalized_m414_MethodInfo;
extern MethodInfo Vector2_op_Multiply_m415_MethodInfo;
extern MethodInfo Mathf_Abs_m416_MethodInfo;
extern MethodInfo CardboardEye_CopyCameraAndMakeSideBySide_m125_MethodInfo;
extern MethodInfo Camera_get_projectionMatrix_m417_MethodInfo;
extern MethodInfo Mathf_Lerp_m418_MethodInfo;
extern MethodInfo Transform_get_lossyScale_m419_MethodInfo;
extern MethodInfo StereoController_ComputeStereoAdjustment_m192_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m420_MethodInfo;
extern MethodInfo Vector3_get_forward_m421_MethodInfo;
extern MethodInfo Vector3_op_Addition_m422_MethodInfo;
extern MethodInfo Camera_get_nearClipPlane_m423_MethodInfo;
extern MethodInfo Camera_get_farClipPlane_m424_MethodInfo;
extern MethodInfo CardboardEye_FixProjection_m121_MethodInfo;
extern MethodInfo Camera_set_projectionMatrix_m425_MethodInfo;
extern MethodInfo Mathf_Atan_m426_MethodInfo;
extern MethodInfo Camera_set_fieldOfView_m427_MethodInfo;
extern MethodInfo Vector4__ctor_m428_MethodInfo;
extern MethodInfo Vector4_op_Division_m429_MethodInfo;
extern MethodInfo Shader_SetGlobalVector_m430_MethodInfo;
extern MethodInfo Vector4__ctor_m431_MethodInfo;
extern MethodInfo StereoController_get_StereoScreen_m187_MethodInfo;
extern MethodInfo Rect_get_x_m432_MethodInfo;
extern MethodInfo Rect_set_x_m433_MethodInfo;
extern MethodInfo Rect_set_width_m434_MethodInfo;
extern MethodInfo Rect_set_height_m435_MethodInfo;
extern MethodInfo Rect_get_y_m436_MethodInfo;
extern MethodInfo Rect_set_y_m437_MethodInfo;
extern MethodInfo Camera_set_rect_m438_MethodInfo;
extern MethodInfo CardboardEye_Setup_m122_MethodInfo;
extern MethodInfo Camera_set_targetTexture_m439_MethodInfo;
extern MethodInfo Camera_Render_m440_MethodInfo;
extern MethodInfo Camera_get_pixelRect_m441_MethodInfo;
extern MethodInfo RenderTexture_get_depth_m442_MethodInfo;
extern MethodInfo RenderTexture_get_format_m443_MethodInfo;
extern MethodInfo RenderTexture_GetTemporary_m444_MethodInfo;
extern MethodInfo GL_PushMatrix_m445_MethodInfo;
extern MethodInfo GL_LoadPixelMatrix_m446_MethodInfo;
extern MethodInfo Camera_get_targetTexture_m447_MethodInfo;
extern MethodInfo Graphics_DrawTexture_m448_MethodInfo;
extern MethodInfo GL_PopMatrix_m449_MethodInfo;
extern MethodInfo RenderTexture_ReleaseTemporary_m450_MethodInfo;
extern MethodInfo Camera_CopyFrom_m451_MethodInfo;
extern MethodInfo Camera_get_cullingMask_m452_MethodInfo;
extern MethodInfo LayerMask_get_value_m453_MethodInfo;
extern MethodInfo Vector3_get_right_m454_MethodInfo;
extern MethodInfo Quaternion_get_identity_m455_MethodInfo;
extern MethodInfo Transform_set_localRotation_m456_MethodInfo;
extern MethodInfo Vector3_get_one_m457_MethodInfo;
extern MethodInfo Rect_get_center_m458_MethodInfo;
extern MethodInfo Rect_set_center_m459_MethodInfo;
extern MethodInfo Mathf_SmoothStep_m460_MethodInfo;
struct Component_t71;
struct Component_t71;
// Declaration !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C" Object_t * Component_GetComponentInParent_TisObject_t_m462_gshared (Component_t71 * __this, MethodInfo* method);
#define Component_GetComponentInParent_TisObject_t_m462(__this, method) (( Object_t * (*) (Component_t71 *, MethodInfo*))Component_GetComponentInParent_TisObject_t_m462_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponentInParent<StereoController>()
// !!0 UnityEngine.Component::GetComponentInParent<StereoController>()
#define Component_GetComponentInParent_TisStereoController_t34_m461(__this, method) (( StereoController_t34 * (*) (Component_t71 *, MethodInfo*))Component_GetComponentInParent_TisObject_t_m462_gshared)(__this, method)
struct Component_t71;
// Declaration !!0 UnityEngine.Component::GetComponentInParent<CardboardHead>()
// !!0 UnityEngine.Component::GetComponentInParent<CardboardHead>()
#define Component_GetComponentInParent_TisCardboardHead_t4_m463(__this, method) (( CardboardHead_t4 * (*) (Component_t71 *, MethodInfo*))Component_GetComponentInParent_TisObject_t_m462_gshared)(__this, method)
struct Component_t71;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t35_m464(__this, method) (( Camera_t35 * (*) (Component_t71 *, MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
struct Component_t71;
// UnityEngine.CastHelper`1<RadialUndistortionEffect>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6.h"
// Declaration !!0 UnityEngine.Component::GetComponent<RadialUndistortionEffect>()
// !!0 UnityEngine.Component::GetComponent<RadialUndistortionEffect>()
#define Component_GetComponent_TisRadialUndistortionEffect_t56_m465(__this, method) (( RadialUndistortionEffect_t56 * (*) (Component_t71 *, MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
struct GameObject_t51;
// Declaration !!0 UnityEngine.GameObject::AddComponent<RadialUndistortionEffect>()
// !!0 UnityEngine.GameObject::AddComponent<RadialUndistortionEffect>()
extern "C" RadialUndistortionEffect_t56 * GameObject_AddComponent_TisRadialUndistortionEffect_t56_m466 (GameObject_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Component_GetComponentInParent_TisStereoController_t34_m461_GenericMethod;
extern Il2CppGenericMethod Component_GetComponentInParent_TisCardboardHead_t4_m463_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisCamera_t35_m464_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisRadialUndistortionEffect_t56_m465_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisRadialUndistortionEffect_t56_m466_GenericMethod;


// System.Void CardboardEye::.ctor()
extern MethodInfo CardboardEye__ctor_m116_MethodInfo;
extern "C" void CardboardEye__ctor_m116 (CardboardEye_t36 * __this, MethodInfo* method)
{
	{
		LayerMask_t37  L_0 = LayerMask_op_Implicit_m409(NULL /*static, unused*/, 0, /*hidden argument*/&LayerMask_op_Implicit_m409_MethodInfo);
		__this->___toggleCullingMask_3 = L_0;
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		return;
	}
}
// StereoController CardboardEye::get_Controller()
extern MethodInfo* Component_GetComponentInParent_TisStereoController_t34_m461_MethodInfo_var;
extern "C" StereoController_t34 * CardboardEye_get_Controller_m117 (CardboardEye_t36 * __this, MethodInfo* method)
{
	static bool CardboardEye_get_Controller_m117_init;
	if (!CardboardEye_get_Controller_m117_init)
	{
		Component_GetComponentInParent_TisStereoController_t34_m461_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentInParent_TisStereoController_t34_m461_GenericMethod);
		CardboardEye_get_Controller_m117_init = true;
	}
	{
		Transform_t38 * L_0 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		NullCheck(L_0);
		Transform_t38 * L_1 = Transform_get_parent_m406(L_0, /*hidden argument*/&Transform_get_parent_m406_MethodInfo);
		bool L_2 = Object_op_Equality_m306(NULL /*static, unused*/, L_1, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (StereoController_t34 *)NULL;
	}

IL_0018:
	{
		bool L_3 = Application_get_isEditor_m407(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m407_MethodInfo);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		bool L_4 = Application_get_isPlaying_m408(NULL /*static, unused*/, /*hidden argument*/&Application_get_isPlaying_m408_MethodInfo);
		if (!L_4)
		{
			goto IL_003d;
		}
	}

IL_002c:
	{
		StereoController_t34 * L_5 = (__this->___controller_4);
		bool L_6 = Object_op_Equality_m306(NULL /*static, unused*/, L_5, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_6)
		{
			goto IL_004e;
		}
	}

IL_003d:
	{
		Transform_t38 * L_7 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		NullCheck(L_7);
		Transform_t38 * L_8 = Transform_get_parent_m406(L_7, /*hidden argument*/&Transform_get_parent_m406_MethodInfo);
		NullCheck(L_8);
		StereoController_t34 * L_9 = Component_GetComponentInParent_TisStereoController_t34_m461(L_8, /*hidden argument*/Component_GetComponentInParent_TisStereoController_t34_m461_MethodInfo_var);
		return L_9;
	}

IL_004e:
	{
		StereoController_t34 * L_10 = (__this->___controller_4);
		return L_10;
	}
}
// CardboardHead CardboardEye::get_Head()
extern MethodInfo CardboardEye_get_Head_m118_MethodInfo;
extern MethodInfo* Component_GetComponentInParent_TisCardboardHead_t4_m463_MethodInfo_var;
extern "C" CardboardHead_t4 * CardboardEye_get_Head_m118 (CardboardEye_t36 * __this, MethodInfo* method)
{
	static bool CardboardEye_get_Head_m118_init;
	if (!CardboardEye_get_Head_m118_init)
	{
		Component_GetComponentInParent_TisCardboardHead_t4_m463_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentInParent_TisCardboardHead_t4_m463_GenericMethod);
		CardboardEye_get_Head_m118_init = true;
	}
	{
		CardboardHead_t4 * L_0 = Component_GetComponentInParent_TisCardboardHead_t4_m463(__this, /*hidden argument*/Component_GetComponentInParent_TisCardboardHead_t4_m463_MethodInfo_var);
		return L_0;
	}
}
// System.Void CardboardEye::Awake()
extern MethodInfo CardboardEye_Awake_m119_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCamera_t35_m464_MethodInfo_var;
extern "C" void CardboardEye_Awake_m119 (CardboardEye_t36 * __this, MethodInfo* method)
{
	static bool CardboardEye_Awake_m119_init;
	if (!CardboardEye_Awake_m119_init)
	{
		Component_GetComponent_TisCamera_t35_m464_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t35_m464_GenericMethod);
		CardboardEye_Awake_m119_init = true;
	}
	{
		Camera_t35 * L_0 = Component_GetComponent_TisCamera_t35_m464(__this, /*hidden argument*/Component_GetComponent_TisCamera_t35_m464_MethodInfo_var);
		__this->___camera_5 = L_0;
		return;
	}
}
// System.Void CardboardEye::Start()
extern MethodInfo CardboardEye_Start_m120_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRadialUndistortionEffect_t56_m465_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisRadialUndistortionEffect_t56_m466_MethodInfo_var;
extern "C" void CardboardEye_Start_m120 (CardboardEye_t36 * __this, MethodInfo* method)
{
	static bool CardboardEye_Start_m120_init;
	if (!CardboardEye_Start_m120_init)
	{
		Component_GetComponent_TisRadialUndistortionEffect_t56_m465_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRadialUndistortionEffect_t56_m465_GenericMethod);
		GameObject_AddComponent_TisRadialUndistortionEffect_t56_m466_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisRadialUndistortionEffect_t56_m466_GenericMethod);
		CardboardEye_Start_m120_init = true;
	}
	StereoController_t34 * V_0 = {0};
	RadialUndistortionEffect_t56 * V_1 = {0};
	{
		StereoController_t34 * L_0 = CardboardEye_get_Controller_m117(__this, /*hidden argument*/&CardboardEye_get_Controller_m117_MethodInfo);
		V_0 = L_0;
		StereoController_t34 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m306(NULL /*static, unused*/, L_1, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		Debug_LogError_m373(NULL /*static, unused*/, (String_t*) &_stringLiteral19, /*hidden argument*/&Debug_LogError_m373_MethodInfo);
		Behaviour_set_enabled_m311(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m311_MethodInfo);
	}

IL_0024:
	{
		StereoController_t34 * L_3 = V_0;
		__this->___controller_4 = L_3;
		bool L_4 = Application_get_isPlaying_m408(NULL /*static, unused*/, /*hidden argument*/&Application_get_isPlaying_m408_MethodInfo);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_5 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_5);
		bool L_6 = Cardboard_get_NativeDistortionCorrectionSupported_m69(L_5, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m69_MethodInfo);
		if (L_6)
		{
			goto IL_006d;
		}
	}
	{
		bool L_7 = SystemInfo_get_supportsRenderTextures_m302(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m302_MethodInfo);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		RadialUndistortionEffect_t56 * L_8 = Component_GetComponent_TisRadialUndistortionEffect_t56_m465(__this, /*hidden argument*/Component_GetComponent_TisRadialUndistortionEffect_t56_m465_MethodInfo_var);
		V_1 = L_8;
		RadialUndistortionEffect_t56 * L_9 = V_1;
		bool L_10 = Object_op_Equality_m306(NULL /*static, unused*/, L_9, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		GameObject_t51 * L_11 = Component_get_gameObject_m308(__this, /*hidden argument*/&Component_get_gameObject_m308_MethodInfo);
		NullCheck(L_11);
		RadialUndistortionEffect_t56 * L_12 = GameObject_AddComponent_TisRadialUndistortionEffect_t56_m466(L_11, /*hidden argument*/GameObject_AddComponent_TisRadialUndistortionEffect_t56_m466_MethodInfo_var);
		V_1 = L_12;
	}

IL_006d:
	{
		return;
	}
}
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&,System.Single,System.Single,System.Single)
extern "C" void CardboardEye_FixProjection_m121 (CardboardEye_t36 * __this, Matrix4x4_t32 * ___proj, float ___near, float ___far, float ___ipdScale, MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector2_t15  V_1 = {0};
	Rect_t18  V_2 = {0};
	Rect_t18  V_3 = {0};
	Matrix4x4_t32 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	Matrix4x4_t32 * V_8 = {0};
	Matrix4x4_t32 * V_9 = {0};
	{
		Camera_t35 * L_0 = (__this->___camera_5);
		NullCheck(L_0);
		Rect_t18  L_1 = Camera_get_rect_m410(L_0, /*hidden argument*/&Camera_get_rect_m410_MethodInfo);
		V_2 = L_1;
		float L_2 = Rect_get_height_m335((&V_2), /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		Camera_t35 * L_3 = (__this->___camera_5);
		NullCheck(L_3);
		Rect_t18  L_4 = Camera_get_rect_m410(L_3, /*hidden argument*/&Camera_get_rect_m410_MethodInfo);
		V_3 = L_4;
		float L_5 = Rect_get_width_m333((&V_3), /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		V_0 = ((float)((float)((float)((float)L_2/(float)L_5))/(float)(2.0f)));
		Matrix4x4_t32 * L_6 = ___proj;
		Matrix4x4_t32 * L_7 = L_6;
		V_4 = L_7;
		int32_t L_8 = 0;
		V_5 = L_8;
		int32_t L_9 = 0;
		V_6 = L_9;
		Matrix4x4_t32 * L_10 = V_4;
		int32_t L_11 = V_5;
		int32_t L_12 = V_6;
		float L_13 = Matrix4x4_get_Item_m411(L_10, L_11, L_12, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		V_7 = L_13;
		float L_14 = V_7;
		float L_15 = V_0;
		Matrix4x4_set_Item_m412(L_7, L_8, L_9, ((float)((float)L_14*(float)L_15)), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		Transform_t38 * L_16 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		NullCheck(L_16);
		Vector3_t3  L_17 = Transform_get_localPosition_m284(L_16, /*hidden argument*/&Transform_get_localPosition_m284_MethodInfo);
		Vector2_t15  L_18 = Vector2_op_Implicit_m413(NULL /*static, unused*/, L_17, /*hidden argument*/&Vector2_op_Implicit_m413_MethodInfo);
		V_1 = L_18;
		Vector2_t15  L_19 = Vector2_get_normalized_m414((&V_1), /*hidden argument*/&Vector2_get_normalized_m414_MethodInfo);
		float L_20 = ___ipdScale;
		Vector2_t15  L_21 = Vector2_op_Multiply_m415(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&Vector2_op_Multiply_m415_MethodInfo);
		V_1 = L_21;
		Matrix4x4_t32 * L_22 = ___proj;
		Matrix4x4_t32 * L_23 = L_22;
		V_8 = L_23;
		int32_t L_24 = 0;
		V_6 = L_24;
		int32_t L_25 = 2;
		V_5 = L_25;
		Matrix4x4_t32 * L_26 = V_8;
		int32_t L_27 = V_6;
		int32_t L_28 = V_5;
		float L_29 = Matrix4x4_get_Item_m411(L_26, L_27, L_28, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		V_7 = L_29;
		float L_30 = V_7;
		float L_31 = ((&V_1)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t69_il2cpp_TypeInfo));
		float L_32 = fabsf(L_31);
		Matrix4x4_set_Item_m412(L_23, L_24, L_25, ((float)((float)L_30*(float)L_32)), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		Matrix4x4_t32 * L_33 = ___proj;
		Matrix4x4_t32 * L_34 = L_33;
		V_9 = L_34;
		int32_t L_35 = 1;
		V_5 = L_35;
		int32_t L_36 = 2;
		V_6 = L_36;
		Matrix4x4_t32 * L_37 = V_9;
		int32_t L_38 = V_5;
		int32_t L_39 = V_6;
		float L_40 = Matrix4x4_get_Item_m411(L_37, L_38, L_39, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		V_7 = L_40;
		float L_41 = V_7;
		float L_42 = ((&V_1)->___y_2);
		float L_43 = fabsf(L_42);
		Matrix4x4_set_Item_m412(L_34, L_35, L_36, ((float)((float)L_41*(float)L_43)), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		Matrix4x4_t32 * L_44 = ___proj;
		float L_45 = ___near;
		float L_46 = ___far;
		float L_47 = ___near;
		float L_48 = ___far;
		Matrix4x4_set_Item_m412(L_44, 2, 2, ((float)((float)((float)((float)L_45+(float)L_46))/(float)((float)((float)L_47-(float)L_48)))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		Matrix4x4_t32 * L_49 = ___proj;
		float L_50 = ___near;
		float L_51 = ___far;
		float L_52 = ___near;
		float L_53 = ___far;
		Matrix4x4_set_Item_m412(L_49, 2, 3, ((float)((float)((float)((float)((float)((float)(2.0f)*(float)L_50))*(float)L_51))/(float)((float)((float)L_52-(float)L_53)))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		return;
	}
}
// System.Void CardboardEye::Setup()
extern MethodInfo* Component_GetComponent_TisCamera_t35_m464_MethodInfo_var;
extern "C" void CardboardEye_Setup_m122 (CardboardEye_t36 * __this, MethodInfo* method)
{
	static bool CardboardEye_Setup_m122_init;
	if (!CardboardEye_Setup_m122_init)
	{
		Component_GetComponent_TisCamera_t35_m464_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t35_m464_GenericMethod);
		CardboardEye_Setup_m122_init = true;
	}
	Camera_t35 * V_0 = {0};
	Matrix4x4_t32  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Matrix4x4_t32  V_9 = {0};
	Vector4_t88  V_10 = {0};
	Vector4_t88  V_11 = {0};
	CardboardProfile_t29 * V_12 = {0};
	Rect_t18  V_13 = {0};
	Rect_t18  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	Matrix4x4_t32  V_18 = {0};
	Matrix4x4_t32 * V_19 = {0};
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	float V_22 = 0.0f;
	Matrix4x4_t32 * V_23 = {0};
	Vector3_t3  V_24 = {0};
	{
		StereoController_t34 * L_0 = (__this->___controller_4);
		bool L_1 = Object_op_Equality_m306(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		StereoController_t34 * L_2 = (__this->___controller_4);
		NullCheck(L_2);
		Camera_t35 * L_3 = Component_GetComponent_TisCamera_t35_m464(L_2, /*hidden argument*/Component_GetComponent_TisCamera_t35_m464_MethodInfo_var);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_4 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		int32_t L_5 = (__this->___eye_2);
		NullCheck(L_4);
		Matrix4x4_t32  L_6 = Cardboard_Projection_m79(L_4, L_5, 0, /*hidden argument*/&Cardboard_Projection_m79_MethodInfo);
		V_1 = L_6;
		StereoController_t34 * L_7 = (__this->___controller_4);
		float L_8 = Matrix4x4_get_Item_m411((&V_1), 0, 2, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		float L_9 = Matrix4x4_get_Item_m411((&V_1), 1, 2, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		CardboardEye_CopyCameraAndMakeSideBySide_m125(__this, L_7, L_8, L_9, /*hidden argument*/&CardboardEye_CopyCameraAndMakeSideBySide_m125_MethodInfo);
		StereoController_t34 * L_10 = (__this->___controller_4);
		NullCheck(L_10);
		float L_11 = (L_10->___matchByZoom_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t69_il2cpp_TypeInfo));
		float L_12 = Mathf_Clamp01_m369(NULL /*static, unused*/, L_11, /*hidden argument*/&Mathf_Clamp01_m369_MethodInfo);
		StereoController_t34 * L_13 = (__this->___controller_4);
		NullCheck(L_13);
		float L_14 = (L_13->___matchMonoFOV_4);
		float L_15 = Mathf_Clamp01_m369(NULL /*static, unused*/, L_14, /*hidden argument*/&Mathf_Clamp01_m369_MethodInfo);
		V_2 = ((float)((float)L_12*(float)L_15));
		Camera_t35 * L_16 = V_0;
		NullCheck(L_16);
		Matrix4x4_t32  L_17 = Camera_get_projectionMatrix_m417(L_16, /*hidden argument*/&Camera_get_projectionMatrix_m417_MethodInfo);
		V_18 = L_17;
		float L_18 = Matrix4x4_get_Item_m411((&V_18), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		V_3 = L_18;
		float L_19 = Matrix4x4_get_Item_m411((&V_1), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		float L_20 = V_3;
		float L_21 = V_2;
		float L_22 = Mathf_Lerp_m418(NULL /*static, unused*/, ((float)((float)(1.0f)/(float)L_19)), ((float)((float)(1.0f)/(float)L_20)), L_21, /*hidden argument*/&Mathf_Lerp_m418_MethodInfo);
		float L_23 = Matrix4x4_get_Item_m411((&V_1), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		V_4 = ((float)((float)((float)((float)(1.0f)/(float)L_22))/(float)L_23));
		Matrix4x4_t32 * L_24 = (&V_1);
		V_19 = L_24;
		int32_t L_25 = 0;
		V_20 = L_25;
		int32_t L_26 = 0;
		V_21 = L_26;
		Matrix4x4_t32 * L_27 = V_19;
		int32_t L_28 = V_20;
		int32_t L_29 = V_21;
		float L_30 = Matrix4x4_get_Item_m411(L_27, L_28, L_29, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		V_22 = L_30;
		float L_31 = V_22;
		float L_32 = V_4;
		Matrix4x4_set_Item_m412(L_24, L_25, L_26, ((float)((float)L_31*(float)L_32)), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		Matrix4x4_t32 * L_33 = (&V_1);
		V_23 = L_33;
		int32_t L_34 = 1;
		V_21 = L_34;
		int32_t L_35 = 1;
		V_20 = L_35;
		Matrix4x4_t32 * L_36 = V_23;
		int32_t L_37 = V_21;
		int32_t L_38 = V_20;
		float L_39 = Matrix4x4_get_Item_m411(L_36, L_37, L_38, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		V_22 = L_39;
		float L_40 = V_22;
		float L_41 = V_4;
		Matrix4x4_set_Item_m412(L_33, L_34, L_35, ((float)((float)L_40*(float)L_41)), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		StereoController_t34 * L_42 = (__this->___controller_4);
		float L_43 = Matrix4x4_get_Item_m411((&V_1), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		Transform_t38 * L_44 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		NullCheck(L_44);
		Vector3_t3  L_45 = Transform_get_lossyScale_m419(L_44, /*hidden argument*/&Transform_get_lossyScale_m419_MethodInfo);
		V_24 = L_45;
		float L_46 = ((&V_24)->___z_3);
		NullCheck(L_42);
		StereoController_ComputeStereoAdjustment_m192(L_42, L_43, L_46, (&V_5), (&V_6), /*hidden argument*/&StereoController_ComputeStereoAdjustment_m192_MethodInfo);
		Transform_t38 * L_47 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		float L_48 = V_5;
		Cardboard_t23 * L_49 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		int32_t L_50 = (__this->___eye_2);
		NullCheck(L_49);
		Pose3D_t30 * L_51 = Cardboard_EyePose_m78(L_49, L_50, /*hidden argument*/&Cardboard_EyePose_m78_MethodInfo);
		NullCheck(L_51);
		Vector3_t3  L_52 = Pose3D_get_Position_m161(L_51, /*hidden argument*/&Pose3D_get_Position_m161_MethodInfo);
		Vector3_t3  L_53 = Vector3_op_Multiply_m420(NULL /*static, unused*/, L_48, L_52, /*hidden argument*/&Vector3_op_Multiply_m420_MethodInfo);
		float L_54 = V_6;
		Vector3_t3  L_55 = Vector3_get_forward_m421(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m421_MethodInfo);
		Vector3_t3  L_56 = Vector3_op_Multiply_m420(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/&Vector3_op_Multiply_m420_MethodInfo);
		Vector3_t3  L_57 = Vector3_op_Addition_m422(NULL /*static, unused*/, L_53, L_56, /*hidden argument*/&Vector3_op_Addition_m422_MethodInfo);
		NullCheck(L_47);
		Transform_set_localPosition_m289(L_47, L_57, /*hidden argument*/&Transform_set_localPosition_m289_MethodInfo);
		Camera_t35 * L_58 = V_0;
		NullCheck(L_58);
		float L_59 = Camera_get_nearClipPlane_m423(L_58, /*hidden argument*/&Camera_get_nearClipPlane_m423_MethodInfo);
		V_7 = L_59;
		Camera_t35 * L_60 = V_0;
		NullCheck(L_60);
		float L_61 = Camera_get_farClipPlane_m424(L_60, /*hidden argument*/&Camera_get_farClipPlane_m424_MethodInfo);
		V_8 = L_61;
		float L_62 = V_7;
		float L_63 = V_8;
		float L_64 = V_5;
		CardboardEye_FixProjection_m121(__this, (&V_1), L_62, L_63, L_64, /*hidden argument*/&CardboardEye_FixProjection_m121_MethodInfo);
		Camera_t35 * L_65 = (__this->___camera_5);
		Matrix4x4_t32  L_66 = V_1;
		NullCheck(L_65);
		Camera_set_projectionMatrix_m425(L_65, L_66, /*hidden argument*/&Camera_set_projectionMatrix_m425_MethodInfo);
		bool L_67 = Application_get_isEditor_m407(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m407_MethodInfo);
		if (!L_67)
		{
			goto IL_01bb;
		}
	}
	{
		Camera_t35 * L_68 = (__this->___camera_5);
		float L_69 = Matrix4x4_get_Item_m411((&V_1), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t69_il2cpp_TypeInfo));
		float L_70 = atanf(((float)((float)(1.0f)/(float)L_69)));
		NullCheck(L_68);
		Camera_set_fieldOfView_m427(L_68, ((float)((float)((float)((float)(2.0f)*(float)L_70))*(float)(57.29578f))), /*hidden argument*/&Camera_set_fieldOfView_m427_MethodInfo);
	}

IL_01bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_71 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_71);
		bool L_72 = Cardboard_get_UseDistortionEffect_m75(L_71, /*hidden argument*/&Cardboard_get_UseDistortionEffect_m75_MethodInfo);
		if (!L_72)
		{
			goto IL_02f9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_73 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		int32_t L_74 = (__this->___eye_2);
		NullCheck(L_73);
		Matrix4x4_t32  L_75 = Cardboard_Projection_m79(L_73, L_74, 1, /*hidden argument*/&Cardboard_Projection_m79_MethodInfo);
		V_9 = L_75;
		float L_76 = V_7;
		float L_77 = V_8;
		float L_78 = V_5;
		CardboardEye_FixProjection_m121(__this, (&V_9), L_76, L_77, L_78, /*hidden argument*/&CardboardEye_FixProjection_m121_MethodInfo);
		float L_79 = Matrix4x4_get_Item_m411((&V_1), 0, 0, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		float L_80 = V_4;
		float L_81 = Matrix4x4_get_Item_m411((&V_1), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		float L_82 = V_4;
		float L_83 = Matrix4x4_get_Item_m411((&V_1), 0, 2, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		float L_84 = Matrix4x4_get_Item_m411((&V_1), 1, 2, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		Vector4_t88  L_85 = {0};
		Vector4__ctor_m428(&L_85, ((float)((float)L_79/(float)L_80)), ((float)((float)L_81/(float)L_82)), ((float)((float)L_83-(float)(1.0f))), ((float)((float)L_84-(float)(1.0f))), /*hidden argument*/&Vector4__ctor_m428_MethodInfo);
		Vector4_t88  L_86 = Vector4_op_Division_m429(NULL /*static, unused*/, L_85, (2.0f), /*hidden argument*/&Vector4_op_Division_m429_MethodInfo);
		V_10 = L_86;
		float L_87 = Matrix4x4_get_Item_m411((&V_9), 0, 0, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		float L_88 = Matrix4x4_get_Item_m411((&V_9), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		float L_89 = Matrix4x4_get_Item_m411((&V_9), 0, 2, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		float L_90 = Matrix4x4_get_Item_m411((&V_9), 1, 2, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		Vector4_t88  L_91 = {0};
		Vector4__ctor_m428(&L_91, L_87, L_88, ((float)((float)L_89-(float)(1.0f))), ((float)((float)L_90-(float)(1.0f))), /*hidden argument*/&Vector4__ctor_m428_MethodInfo);
		Vector4_t88  L_92 = Vector4_op_Division_m429(NULL /*static, unused*/, L_91, (2.0f), /*hidden argument*/&Vector4_op_Division_m429_MethodInfo);
		V_11 = L_92;
		Vector4_t88  L_93 = V_10;
		Shader_SetGlobalVector_m430(NULL /*static, unused*/, (String_t*) &_stringLiteral20, L_93, /*hidden argument*/&Shader_SetGlobalVector_m430_MethodInfo);
		Vector4_t88  L_94 = V_11;
		Shader_SetGlobalVector_m430(NULL /*static, unused*/, (String_t*) &_stringLiteral21, L_94, /*hidden argument*/&Shader_SetGlobalVector_m430_MethodInfo);
		Cardboard_t23 * L_95 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_95);
		CardboardProfile_t29 * L_96 = Cardboard_get_Profile_m76(L_95, /*hidden argument*/&Cardboard_get_Profile_m76_MethodInfo);
		V_12 = L_96;
		CardboardProfile_t29 * L_97 = V_12;
		NullCheck(L_97);
		Device_t44 * L_98 = &(L_97->___device_1);
		Distortion_t43 * L_99 = &(L_98->___inverse_3);
		float L_100 = (L_99->___k1_0);
		CardboardProfile_t29 * L_101 = V_12;
		NullCheck(L_101);
		Device_t44 * L_102 = &(L_101->___device_1);
		Distortion_t43 * L_103 = &(L_102->___inverse_3);
		float L_104 = (L_103->___k2_1);
		Vector4_t88  L_105 = {0};
		Vector4__ctor_m431(&L_105, L_100, L_104, /*hidden argument*/&Vector4__ctor_m431_MethodInfo);
		Shader_SetGlobalVector_m430(NULL /*static, unused*/, (String_t*) &_stringLiteral22, L_105, /*hidden argument*/&Shader_SetGlobalVector_m430_MethodInfo);
		CardboardProfile_t29 * L_106 = V_12;
		NullCheck(L_106);
		Device_t44 * L_107 = &(L_106->___device_1);
		Distortion_t43 * L_108 = &(L_107->___distortion_2);
		float L_109 = (L_108->___k1_0);
		CardboardProfile_t29 * L_110 = V_12;
		NullCheck(L_110);
		Device_t44 * L_111 = &(L_110->___device_1);
		Distortion_t43 * L_112 = &(L_111->___distortion_2);
		float L_113 = (L_112->___k2_1);
		Vector4_t88  L_114 = {0};
		Vector4__ctor_m431(&L_114, L_109, L_113, /*hidden argument*/&Vector4__ctor_m431_MethodInfo);
		Shader_SetGlobalVector_m430(NULL /*static, unused*/, (String_t*) &_stringLiteral23, L_114, /*hidden argument*/&Shader_SetGlobalVector_m430_MethodInfo);
	}

IL_02f9:
	{
		StereoController_t34 * L_115 = (__this->___controller_4);
		NullCheck(L_115);
		RenderTexture_t10 * L_116 = StereoController_get_StereoScreen_m187(L_115, /*hidden argument*/&StereoController_get_StereoScreen_m187_MethodInfo);
		bool L_117 = Object_op_Equality_m306(NULL /*static, unused*/, L_116, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_117)
		{
			goto IL_0493;
		}
	}
	{
		Camera_t35 * L_118 = (__this->___camera_5);
		NullCheck(L_118);
		Rect_t18  L_119 = Camera_get_rect_m410(L_118, /*hidden argument*/&Camera_get_rect_m410_MethodInfo);
		V_13 = L_119;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_120 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_120);
		bool L_121 = Cardboard_get_DistortionCorrection_m53(L_120, /*hidden argument*/&Cardboard_get_DistortionCorrection_m53_MethodInfo);
		if (!L_121)
		{
			goto IL_033a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_122 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_122);
		bool L_123 = Cardboard_get_UseDistortionEffect_m75(L_122, /*hidden argument*/&Cardboard_get_UseDistortionEffect_m75_MethodInfo);
		if (!L_123)
		{
			goto IL_03de;
		}
	}

IL_033a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_124 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		int32_t L_125 = (__this->___eye_2);
		NullCheck(L_124);
		Rect_t18  L_126 = Cardboard_Viewport_m80(L_124, L_125, 0, /*hidden argument*/&Cardboard_Viewport_m80_MethodInfo);
		V_14 = L_126;
		int32_t L_127 = (__this->___eye_2);
		if ((!(((uint32_t)L_127) == ((uint32_t)1))))
		{
			goto IL_036c;
		}
	}
	{
		Rect_t18 * L_128 = (&V_13);
		float L_129 = Rect_get_x_m432(L_128, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		Rect_set_x_m433(L_128, ((float)((float)L_129-(float)(0.5f))), /*hidden argument*/&Rect_set_x_m433_MethodInfo);
	}

IL_036c:
	{
		Rect_t18 * L_130 = (&V_13);
		float L_131 = Rect_get_width_m333(L_130, /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		float L_132 = Rect_get_width_m333((&V_14), /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		Rect_set_width_m434(L_130, ((float)((float)L_131*(float)((float)((float)(2.0f)*(float)L_132)))), /*hidden argument*/&Rect_set_width_m434_MethodInfo);
		float L_133 = Rect_get_x_m432((&V_14), /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		float L_134 = Rect_get_x_m432((&V_13), /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		float L_135 = Rect_get_width_m333((&V_14), /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		Rect_set_x_m433((&V_13), ((float)((float)L_133+(float)((float)((float)((float)((float)(2.0f)*(float)L_134))*(float)L_135)))), /*hidden argument*/&Rect_set_x_m433_MethodInfo);
		Rect_t18 * L_136 = (&V_13);
		float L_137 = Rect_get_height_m335(L_136, /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		float L_138 = Rect_get_height_m335((&V_14), /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		Rect_set_height_m435(L_136, ((float)((float)L_137*(float)L_138)), /*hidden argument*/&Rect_set_height_m435_MethodInfo);
		float L_139 = Rect_get_y_m436((&V_14), /*hidden argument*/&Rect_get_y_m436_MethodInfo);
		float L_140 = Rect_get_y_m436((&V_13), /*hidden argument*/&Rect_get_y_m436_MethodInfo);
		float L_141 = Rect_get_height_m335((&V_14), /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		Rect_set_y_m437((&V_13), ((float)((float)L_139+(float)((float)((float)L_140*(float)L_141)))), /*hidden argument*/&Rect_set_y_m437_MethodInfo);
	}

IL_03de:
	{
		bool L_142 = Application_get_isEditor_m407(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m407_MethodInfo);
		if (!L_142)
		{
			goto IL_0486;
		}
	}
	{
		int32_t L_143 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m316_MethodInfo);
		int32_t L_144 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		V_15 = ((float)((float)(((float)L_143))/(float)(((float)L_144))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_145 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_145);
		CardboardProfile_t29 * L_146 = Cardboard_get_Profile_m76(L_145, /*hidden argument*/&Cardboard_get_Profile_m76_MethodInfo);
		NullCheck(L_146);
		Screen_t40 * L_147 = &(L_146->___screen_0);
		float L_148 = (L_147->___width_0);
		Cardboard_t23 * L_149 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_149);
		CardboardProfile_t29 * L_150 = Cardboard_get_Profile_m76(L_149, /*hidden argument*/&Cardboard_get_Profile_m76_MethodInfo);
		NullCheck(L_150);
		Screen_t40 * L_151 = &(L_150->___screen_0);
		float L_152 = (L_151->___height_1);
		V_16 = ((float)((float)L_148/(float)L_152));
		float L_153 = V_16;
		float L_154 = V_15;
		V_17 = ((float)((float)L_153/(float)L_154));
		float L_155 = V_17;
		if ((!(((float)L_155) < ((float)(1.0f)))))
		{
			goto IL_0476;
		}
	}
	{
		Rect_t18 * L_156 = (&V_13);
		float L_157 = Rect_get_width_m333(L_156, /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		float L_158 = V_17;
		Rect_set_width_m434(L_156, ((float)((float)L_157*(float)L_158)), /*hidden argument*/&Rect_set_width_m434_MethodInfo);
		Rect_t18 * L_159 = (&V_13);
		float L_160 = Rect_get_x_m432(L_159, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		float L_161 = V_17;
		Rect_set_x_m433(L_159, ((float)((float)L_160*(float)L_161)), /*hidden argument*/&Rect_set_x_m433_MethodInfo);
		Rect_t18 * L_162 = (&V_13);
		float L_163 = Rect_get_x_m432(L_162, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		float L_164 = V_17;
		Rect_set_x_m433(L_162, ((float)((float)L_163+(float)((float)((float)((float)((float)(1.0f)-(float)L_164))/(float)(2.0f))))), /*hidden argument*/&Rect_set_x_m433_MethodInfo);
		goto IL_0486;
	}

IL_0476:
	{
		Rect_t18 * L_165 = (&V_13);
		float L_166 = Rect_get_height_m335(L_165, /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		float L_167 = V_17;
		Rect_set_height_m435(L_165, ((float)((float)L_166/(float)L_167)), /*hidden argument*/&Rect_set_height_m435_MethodInfo);
	}

IL_0486:
	{
		Camera_t35 * L_168 = (__this->___camera_5);
		Rect_t18  L_169 = V_13;
		NullCheck(L_168);
		Camera_set_rect_m438(L_168, L_169, /*hidden argument*/&Camera_set_rect_m438_MethodInfo);
	}

IL_0493:
	{
		return;
	}
}
// System.Void CardboardEye::Render()
extern MethodInfo CardboardEye_Render_m123_MethodInfo;
extern "C" void CardboardEye_Render_m123 (CardboardEye_t36 * __this, MethodInfo* method)
{
	Rect_t18  V_0 = {0};
	RenderTexture_t10 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = {0};
	RenderTexture_t10 * V_6 = {0};
	Rect_t18  V_7 = {0};
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	{
		CardboardEye_Setup_m122(__this, /*hidden argument*/&CardboardEye_Setup_m122_MethodInfo);
		StereoController_t34 * L_0 = (__this->___controller_4);
		NullCheck(L_0);
		bool L_1 = (L_0->___directRender_2);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		Camera_t35 * L_2 = (__this->___camera_5);
		StereoController_t34 * L_3 = (__this->___controller_4);
		NullCheck(L_3);
		RenderTexture_t10 * L_4 = StereoController_get_StereoScreen_m187(L_3, /*hidden argument*/&StereoController_get_StereoScreen_m187_MethodInfo);
		NullCheck(L_2);
		Camera_set_targetTexture_m439(L_2, L_4, /*hidden argument*/&Camera_set_targetTexture_m439_MethodInfo);
		Camera_t35 * L_5 = (__this->___camera_5);
		NullCheck(L_5);
		Camera_Render_m440(L_5, /*hidden argument*/&Camera_Render_m440_MethodInfo);
		goto IL_0181;
	}

IL_003c:
	{
		Camera_t35 * L_6 = (__this->___camera_5);
		NullCheck(L_6);
		Rect_t18  L_7 = Camera_get_pixelRect_m441(L_6, /*hidden argument*/&Camera_get_pixelRect_m441_MethodInfo);
		V_0 = L_7;
		Camera_t35 * L_8 = (__this->___camera_5);
		Rect_t18  L_9 = {0};
		Rect__ctor_m298(&L_9, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/&Rect__ctor_m298_MethodInfo);
		NullCheck(L_8);
		Camera_set_rect_m438(L_8, L_9, /*hidden argument*/&Camera_set_rect_m438_MethodInfo);
		StereoController_t34 * L_10 = (__this->___controller_4);
		NullCheck(L_10);
		RenderTexture_t10 * L_11 = StereoController_get_StereoScreen_m187(L_10, /*hidden argument*/&StereoController_get_StereoScreen_m187_MethodInfo);
		V_1 = L_11;
		RenderTexture_t10 * L_12 = V_1;
		bool L_13 = Object_op_Implicit_m314(NULL /*static, unused*/, L_12, /*hidden argument*/&Object_op_Implicit_m314_MethodInfo);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		RenderTexture_t10 * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m315_MethodInfo, L_14);
		G_B5_0 = L_15;
		goto IL_0093;
	}

IL_008e:
	{
		int32_t L_16 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m316_MethodInfo);
		G_B5_0 = L_16;
	}

IL_0093:
	{
		V_2 = G_B5_0;
		RenderTexture_t10 * L_17 = V_1;
		bool L_18 = Object_op_Implicit_m314(NULL /*static, unused*/, L_17, /*hidden argument*/&Object_op_Implicit_m314_MethodInfo);
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RenderTexture_t10 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m317_MethodInfo, L_19);
		G_B8_0 = L_20;
		goto IL_00af;
	}

IL_00aa:
	{
		int32_t L_21 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		G_B8_0 = L_21;
	}

IL_00af:
	{
		V_3 = G_B8_0;
		RenderTexture_t10 * L_22 = V_1;
		bool L_23 = Object_op_Implicit_m314(NULL /*static, unused*/, L_22, /*hidden argument*/&Object_op_Implicit_m314_MethodInfo);
		if (!L_23)
		{
			goto IL_00c6;
		}
	}
	{
		RenderTexture_t10 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = RenderTexture_get_depth_m442(L_24, /*hidden argument*/&RenderTexture_get_depth_m442_MethodInfo);
		G_B11_0 = L_25;
		goto IL_00c8;
	}

IL_00c6:
	{
		G_B11_0 = ((int32_t)16);
	}

IL_00c8:
	{
		V_4 = G_B11_0;
		RenderTexture_t10 * L_26 = V_1;
		bool L_27 = Object_op_Implicit_m314(NULL /*static, unused*/, L_26, /*hidden argument*/&Object_op_Implicit_m314_MethodInfo);
		if (!L_27)
		{
			goto IL_00e0;
		}
	}
	{
		RenderTexture_t10 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = RenderTexture_get_format_m443(L_28, /*hidden argument*/&RenderTexture_get_format_m443_MethodInfo);
		G_B14_0 = ((int32_t)(L_29));
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B14_0 = 4;
	}

IL_00e1:
	{
		V_5 = G_B14_0;
		Camera_t35 * L_30 = (__this->___camera_5);
		float L_31 = Rect_get_width_m333((&V_0), /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		float L_32 = Rect_get_height_m335((&V_0), /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		int32_t L_33 = V_4;
		int32_t L_34 = V_5;
		RenderTexture_t10 * L_35 = RenderTexture_GetTemporary_m444(NULL /*static, unused*/, (((int32_t)L_31)), (((int32_t)L_32)), L_33, L_34, /*hidden argument*/&RenderTexture_GetTemporary_m444_MethodInfo);
		NullCheck(L_30);
		Camera_set_targetTexture_m439(L_30, L_35, /*hidden argument*/&Camera_set_targetTexture_m439_MethodInfo);
		Camera_t35 * L_36 = (__this->___camera_5);
		NullCheck(L_36);
		Camera_Render_m440(L_36, /*hidden argument*/&Camera_Render_m440_MethodInfo);
		RenderTexture_t10 * L_37 = RenderTexture_get_active_m323(NULL /*static, unused*/, /*hidden argument*/&RenderTexture_get_active_m323_MethodInfo);
		V_6 = L_37;
		RenderTexture_t10 * L_38 = V_1;
		RenderTexture_set_active_m324(NULL /*static, unused*/, L_38, /*hidden argument*/&RenderTexture_set_active_m324_MethodInfo);
		GL_PushMatrix_m445(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m445_MethodInfo);
		int32_t L_39 = V_2;
		int32_t L_40 = V_3;
		GL_LoadPixelMatrix_m446(NULL /*static, unused*/, (0.0f), (((float)L_39)), (((float)L_40)), (0.0f), /*hidden argument*/&GL_LoadPixelMatrix_m446_MethodInfo);
		Rect_t18  L_41 = V_0;
		V_7 = L_41;
		int32_t L_42 = V_3;
		float L_43 = Rect_get_height_m335((&V_0), /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		float L_44 = Rect_get_y_m436((&V_0), /*hidden argument*/&Rect_get_y_m436_MethodInfo);
		Rect_set_y_m437((&V_7), ((float)((float)((float)((float)(((float)L_42))-(float)L_43))-(float)L_44)), /*hidden argument*/&Rect_set_y_m437_MethodInfo);
		Rect_t18  L_45 = V_7;
		Camera_t35 * L_46 = (__this->___camera_5);
		NullCheck(L_46);
		RenderTexture_t10 * L_47 = Camera_get_targetTexture_m447(L_46, /*hidden argument*/&Camera_get_targetTexture_m447_MethodInfo);
		Graphics_DrawTexture_m448(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/&Graphics_DrawTexture_m448_MethodInfo);
		GL_PopMatrix_m449(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m449_MethodInfo);
		RenderTexture_t10 * L_48 = V_6;
		RenderTexture_set_active_m324(NULL /*static, unused*/, L_48, /*hidden argument*/&RenderTexture_set_active_m324_MethodInfo);
		Camera_t35 * L_49 = (__this->___camera_5);
		NullCheck(L_49);
		RenderTexture_t10 * L_50 = Camera_get_targetTexture_m447(L_49, /*hidden argument*/&Camera_get_targetTexture_m447_MethodInfo);
		RenderTexture_ReleaseTemporary_m450(NULL /*static, unused*/, L_50, /*hidden argument*/&RenderTexture_ReleaseTemporary_m450_MethodInfo);
	}

IL_0181:
	{
		Camera_t35 * L_51 = (__this->___camera_5);
		NullCheck(L_51);
		Camera_set_targetTexture_m439(L_51, (RenderTexture_t10 *)NULL, /*hidden argument*/&Camera_set_targetTexture_m439_MethodInfo);
		return;
	}
}
// System.Void CardboardEye::OnPreCull()
extern MethodInfo CardboardEye_OnPreCull_m124_MethodInfo;
extern "C" void CardboardEye_OnPreCull_m124 (CardboardEye_t36 * __this, MethodInfo* method)
{
	{
		Camera_t35 * L_0 = (__this->___camera_5);
		NullCheck(L_0);
		bool L_1 = Behaviour_get_enabled_m307(L_0, /*hidden argument*/&Behaviour_get_enabled_m307_MethodInfo);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		CardboardEye_Setup_m122(__this, /*hidden argument*/&CardboardEye_Setup_m122_MethodInfo);
		Camera_t35 * L_2 = (__this->___camera_5);
		StereoController_t34 * L_3 = (__this->___controller_4);
		NullCheck(L_3);
		RenderTexture_t10 * L_4 = StereoController_get_StereoScreen_m187(L_3, /*hidden argument*/&StereoController_get_StereoScreen_m187_MethodInfo);
		NullCheck(L_2);
		Camera_set_targetTexture_m439(L_2, L_4, /*hidden argument*/&Camera_set_targetTexture_m439_MethodInfo);
	}

IL_002c:
	{
		return;
	}
}
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern MethodInfo* Component_GetComponent_TisCamera_t35_m464_MethodInfo_var;
extern "C" void CardboardEye_CopyCameraAndMakeSideBySide_m125 (CardboardEye_t36 * __this, StereoController_t34 * ___controller, float ___parx, float ___pary, MethodInfo* method)
{
	static bool CardboardEye_CopyCameraAndMakeSideBySide_m125_init;
	if (!CardboardEye_CopyCameraAndMakeSideBySide_m125_init)
	{
		Component_GetComponent_TisCamera_t35_m464_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t35_m464_GenericMethod);
		CardboardEye_CopyCameraAndMakeSideBySide_m125_init = true;
	}
	float V_0 = 0.0f;
	Rect_t18  V_1 = {0};
	Vector2_t15  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Rect_t18  V_5 = {0};
	Transform_t38 * G_B2_0 = {0};
	Transform_t38 * G_B1_0 = {0};
	float G_B3_0 = 0.0f;
	Transform_t38 * G_B3_1 = {0};
	{
		Camera_t35 * L_0 = (__this->___camera_5);
		StereoController_t34 * L_1 = ___controller;
		NullCheck(L_1);
		Camera_t35 * L_2 = Component_GetComponent_TisCamera_t35_m464(L_1, /*hidden argument*/Component_GetComponent_TisCamera_t35_m464_MethodInfo_var);
		NullCheck(L_0);
		Camera_CopyFrom_m451(L_0, L_2, /*hidden argument*/&Camera_CopyFrom_m451_MethodInfo);
		Camera_t35 * L_3 = (__this->___camera_5);
		Camera_t35 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = Camera_get_cullingMask_m452(L_4, /*hidden argument*/&Camera_get_cullingMask_m452_MethodInfo);
		LayerMask_t37 * L_6 = &(__this->___toggleCullingMask_3);
		int32_t L_7 = LayerMask_get_value_m453(L_6, /*hidden argument*/&LayerMask_get_value_m453_MethodInfo);
		NullCheck(L_4);
		Camera_set_cullingMask_m394(L_4, ((int32_t)((int32_t)L_5^(int32_t)L_7)), /*hidden argument*/&Camera_set_cullingMask_m394_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		CardboardProfile_t29 * L_8 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___Default_14;
		NullCheck(L_8);
		Device_t44 * L_9 = &(L_8->___device_1);
		Lenses_t41 * L_10 = &(L_9->___lenses_0);
		float L_11 = (L_10->___separation_3);
		StereoController_t34 * L_12 = ___controller;
		NullCheck(L_12);
		float L_13 = (L_12->___stereoMultiplier_3);
		V_0 = ((float)((float)L_11*(float)L_13));
		Transform_t38 * L_14 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		int32_t L_15 = (__this->___eye_2);
		G_B1_0 = L_14;
		if (L_15)
		{
			G_B2_0 = L_14;
			goto IL_0068;
		}
	}
	{
		float L_16 = V_0;
		G_B3_0 = ((float)((float)((-L_16))/(float)(2.0f)));
		G_B3_1 = G_B1_0;
		goto IL_006f;
	}

IL_0068:
	{
		float L_17 = V_0;
		G_B3_0 = ((float)((float)L_17/(float)(2.0f)));
		G_B3_1 = G_B2_0;
	}

IL_006f:
	{
		Vector3_t3  L_18 = Vector3_get_right_m454(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_right_m454_MethodInfo);
		Vector3_t3  L_19 = Vector3_op_Multiply_m420(NULL /*static, unused*/, G_B3_0, L_18, /*hidden argument*/&Vector3_op_Multiply_m420_MethodInfo);
		NullCheck(G_B3_1);
		Transform_set_localPosition_m289(G_B3_1, L_19, /*hidden argument*/&Transform_set_localPosition_m289_MethodInfo);
		Transform_t38 * L_20 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		Quaternion_t33  L_21 = Quaternion_get_identity_m455(NULL /*static, unused*/, /*hidden argument*/&Quaternion_get_identity_m455_MethodInfo);
		NullCheck(L_20);
		Transform_set_localRotation_m456(L_20, L_21, /*hidden argument*/&Transform_set_localRotation_m456_MethodInfo);
		Transform_t38 * L_22 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		Vector3_t3  L_23 = Vector3_get_one_m457(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m457_MethodInfo);
		NullCheck(L_22);
		Transform_set_localScale_m353(L_22, L_23, /*hidden argument*/&Transform_set_localScale_m353_MethodInfo);
		Camera_t35 * L_24 = (__this->___camera_5);
		NullCheck(L_24);
		Rect_t18  L_25 = Camera_get_rect_m410(L_24, /*hidden argument*/&Camera_get_rect_m410_MethodInfo);
		V_1 = L_25;
		Vector2_t15  L_26 = Rect_get_center_m458((&V_1), /*hidden argument*/&Rect_get_center_m458_MethodInfo);
		V_2 = L_26;
		float L_27 = ((&V_2)->___x_1);
		StereoController_t34 * L_28 = ___controller;
		NullCheck(L_28);
		float L_29 = (L_28->___stereoPaddingX_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t69_il2cpp_TypeInfo));
		float L_30 = Mathf_Clamp01_m369(NULL /*static, unused*/, L_29, /*hidden argument*/&Mathf_Clamp01_m369_MethodInfo);
		float L_31 = Mathf_Lerp_m418(NULL /*static, unused*/, L_27, (0.5f), L_30, /*hidden argument*/&Mathf_Lerp_m418_MethodInfo);
		(&V_2)->___x_1 = L_31;
		float L_32 = ((&V_2)->___y_2);
		StereoController_t34 * L_33 = ___controller;
		NullCheck(L_33);
		float L_34 = (L_33->___stereoPaddingY_11);
		float L_35 = Mathf_Clamp01_m369(NULL /*static, unused*/, L_34, /*hidden argument*/&Mathf_Clamp01_m369_MethodInfo);
		float L_36 = Mathf_Lerp_m418(NULL /*static, unused*/, L_32, (0.5f), L_35, /*hidden argument*/&Mathf_Lerp_m418_MethodInfo);
		(&V_2)->___y_2 = L_36;
		Vector2_t15  L_37 = V_2;
		Rect_set_center_m459((&V_1), L_37, /*hidden argument*/&Rect_set_center_m459_MethodInfo);
		float L_38 = Rect_get_width_m333((&V_1), /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		float L_39 = Mathf_SmoothStep_m460(NULL /*static, unused*/, (-0.5f), (0.5f), ((float)((float)((float)((float)L_38+(float)(1.0f)))/(float)(2.0f))), /*hidden argument*/&Mathf_SmoothStep_m460_MethodInfo);
		V_3 = L_39;
		Rect_t18 * L_40 = (&V_1);
		float L_41 = Rect_get_x_m432(L_40, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		float L_42 = Rect_get_width_m333((&V_1), /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		float L_43 = V_3;
		Rect_set_x_m433(L_40, ((float)((float)L_41+(float)((float)((float)((float)((float)L_42-(float)L_43))/(float)(2.0f))))), /*hidden argument*/&Rect_set_x_m433_MethodInfo);
		float L_44 = V_3;
		Rect_set_width_m434((&V_1), L_44, /*hidden argument*/&Rect_set_width_m434_MethodInfo);
		Rect_t18 * L_45 = (&V_1);
		float L_46 = Rect_get_x_m432(L_45, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		float L_47 = Rect_get_width_m333((&V_1), /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		float L_48 = Rect_get_width_m333((&V_1), /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		Rect_set_x_m433(L_45, ((float)((float)L_46*(float)((float)((float)((float)((float)(0.5f)-(float)L_47))/(float)((float)((float)(1.0f)-(float)L_48)))))), /*hidden argument*/&Rect_set_x_m433_MethodInfo);
		int32_t L_49 = (__this->___eye_2);
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_0190;
		}
	}
	{
		Rect_t18 * L_50 = (&V_1);
		float L_51 = Rect_get_x_m432(L_50, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		Rect_set_x_m433(L_50, ((float)((float)L_51+(float)(0.5f))), /*hidden argument*/&Rect_set_x_m433_MethodInfo);
	}

IL_0190:
	{
		StereoController_t34 * L_52 = ___controller;
		NullCheck(L_52);
		float L_53 = (L_52->___screenParallax_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t69_il2cpp_TypeInfo));
		float L_54 = Mathf_Clamp01_m369(NULL /*static, unused*/, L_53, /*hidden argument*/&Mathf_Clamp01_m369_MethodInfo);
		V_4 = L_54;
		StereoController_t34 * L_55 = ___controller;
		NullCheck(L_55);
		Camera_t35 * L_56 = Component_GetComponent_TisCamera_t35_m464(L_55, /*hidden argument*/Component_GetComponent_TisCamera_t35_m464_MethodInfo_var);
		NullCheck(L_56);
		Rect_t18  L_57 = Camera_get_rect_m410(L_56, /*hidden argument*/&Camera_get_rect_m410_MethodInfo);
		V_5 = L_57;
		float L_58 = Rect_get_width_m333((&V_5), /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		if ((!(((float)L_58) < ((float)(1.0f)))))
		{
			goto IL_01f7;
		}
	}
	{
		float L_59 = V_4;
		if ((!(((float)L_59) > ((float)(0.0f)))))
		{
			goto IL_01f7;
		}
	}
	{
		Rect_t18 * L_60 = (&V_1);
		float L_61 = Rect_get_x_m432(L_60, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		float L_62 = ___parx;
		float L_63 = V_4;
		Rect_set_x_m433(L_60, ((float)((float)L_61-(float)((float)((float)((float)((float)L_62/(float)(4.0f)))*(float)L_63)))), /*hidden argument*/&Rect_set_x_m433_MethodInfo);
		Rect_t18 * L_64 = (&V_1);
		float L_65 = Rect_get_y_m436(L_64, /*hidden argument*/&Rect_get_y_m436_MethodInfo);
		float L_66 = ___pary;
		float L_67 = V_4;
		Rect_set_y_m437(L_64, ((float)((float)L_65-(float)((float)((float)((float)((float)L_66/(float)(2.0f)))*(float)L_67)))), /*hidden argument*/&Rect_set_y_m437_MethodInfo);
	}

IL_01f7:
	{
		Camera_t35 * L_68 = (__this->___camera_5);
		Rect_t18  L_69 = V_1;
		NullCheck(L_68);
		Camera_set_rect_m438(L_68, L_69, /*hidden argument*/&Camera_set_rect_m438_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CardboardHead_t4_il2cpp_TypeInfo;

extern TypeInfo Ray_t39_il2cpp_TypeInfo;
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern MethodInfo CardboardHead_UpdateHead_m130_MethodInfo;
extern MethodInfo Transform_get_position_m467_MethodInfo;
extern MethodInfo Transform_get_forward_m468_MethodInfo;
extern MethodInfo Ray__ctor_m469_MethodInfo;
extern MethodInfo Transform_get_rotation_m470_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m471_MethodInfo;
extern MethodInfo Transform_set_rotation_m472_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m473_MethodInfo;
extern MethodInfo Transform_set_position_m474_MethodInfo;


// System.Void CardboardHead::.ctor()
extern MethodInfo CardboardHead__ctor_m126_MethodInfo;
extern "C" void CardboardHead__ctor_m126 (CardboardHead_t4 * __this, MethodInfo* method)
{
	{
		__this->___trackRotation_2 = 1;
		__this->___trackPosition_3 = 1;
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		return;
	}
}
// UnityEngine.Ray CardboardHead::get_Gaze()
extern "C" Ray_t39  CardboardHead_get_Gaze_m127 (CardboardHead_t4 * __this, MethodInfo* method)
{
	{
		CardboardHead_UpdateHead_m130(__this, /*hidden argument*/&CardboardHead_UpdateHead_m130_MethodInfo);
		Transform_t38 * L_0 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		NullCheck(L_0);
		Vector3_t3  L_1 = Transform_get_position_m467(L_0, /*hidden argument*/&Transform_get_position_m467_MethodInfo);
		Transform_t38 * L_2 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		NullCheck(L_2);
		Vector3_t3  L_3 = Transform_get_forward_m468(L_2, /*hidden argument*/&Transform_get_forward_m468_MethodInfo);
		Ray_t39  L_4 = {0};
		Ray__ctor_m469(&L_4, L_1, L_3, /*hidden argument*/&Ray__ctor_m469_MethodInfo);
		return L_4;
	}
}
// System.Void CardboardHead::Update()
extern MethodInfo CardboardHead_Update_m128_MethodInfo;
extern "C" void CardboardHead_Update_m128 (CardboardHead_t4 * __this, MethodInfo* method)
{
	{
		__this->___updated_6 = 0;
		bool L_0 = (__this->___updateEarly_5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		CardboardHead_UpdateHead_m130(__this, /*hidden argument*/&CardboardHead_UpdateHead_m130_MethodInfo);
	}

IL_0018:
	{
		return;
	}
}
// System.Void CardboardHead::LateUpdate()
extern MethodInfo CardboardHead_LateUpdate_m129_MethodInfo;
extern "C" void CardboardHead_LateUpdate_m129 (CardboardHead_t4 * __this, MethodInfo* method)
{
	{
		CardboardHead_UpdateHead_m130(__this, /*hidden argument*/&CardboardHead_UpdateHead_m130_MethodInfo);
		return;
	}
}
// System.Void CardboardHead::UpdateHead()
extern "C" void CardboardHead_UpdateHead_m130 (CardboardHead_t4 * __this, MethodInfo* method)
{
	Quaternion_t33  V_0 = {0};
	Vector3_t3  V_1 = {0};
	{
		bool L_0 = (__this->___updated_6);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___updated_6 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_1);
		Cardboard_UpdateState_m88(L_1, /*hidden argument*/&Cardboard_UpdateState_m88_MethodInfo);
		bool L_2 = (__this->___trackRotation_2);
		if (!L_2)
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_3 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_3);
		Pose3D_t30 * L_4 = Cardboard_get_HeadPose_m77(L_3, /*hidden argument*/&Cardboard_get_HeadPose_m77_MethodInfo);
		NullCheck(L_4);
		Quaternion_t33  L_5 = Pose3D_get_Orientation_m163(L_4, /*hidden argument*/&Pose3D_get_Orientation_m163_MethodInfo);
		V_0 = L_5;
		Transform_t38 * L_6 = (__this->___target_4);
		bool L_7 = Object_op_Equality_m306(NULL /*static, unused*/, L_6, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		Transform_t38 * L_8 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		Quaternion_t33  L_9 = V_0;
		NullCheck(L_8);
		Transform_set_localRotation_m456(L_8, L_9, /*hidden argument*/&Transform_set_localRotation_m456_MethodInfo);
		goto IL_0076;
	}

IL_005a:
	{
		Transform_t38 * L_10 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		Quaternion_t33  L_11 = V_0;
		Transform_t38 * L_12 = (__this->___target_4);
		NullCheck(L_12);
		Quaternion_t33  L_13 = Transform_get_rotation_m470(L_12, /*hidden argument*/&Transform_get_rotation_m470_MethodInfo);
		Quaternion_t33  L_14 = Quaternion_op_Multiply_m471(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/&Quaternion_op_Multiply_m471_MethodInfo);
		NullCheck(L_10);
		Transform_set_rotation_m472(L_10, L_14, /*hidden argument*/&Transform_set_rotation_m472_MethodInfo);
	}

IL_0076:
	{
		bool L_15 = (__this->___trackPosition_3);
		if (!L_15)
		{
			goto IL_00df;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_16 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_16);
		Pose3D_t30 * L_17 = Cardboard_get_HeadPose_m77(L_16, /*hidden argument*/&Cardboard_get_HeadPose_m77_MethodInfo);
		NullCheck(L_17);
		Vector3_t3  L_18 = Pose3D_get_Position_m161(L_17, /*hidden argument*/&Pose3D_get_Position_m161_MethodInfo);
		V_1 = L_18;
		Transform_t38 * L_19 = (__this->___target_4);
		bool L_20 = Object_op_Equality_m306(NULL /*static, unused*/, L_19, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_20)
		{
			goto IL_00b3;
		}
	}
	{
		Transform_t38 * L_21 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		Vector3_t3  L_22 = V_1;
		NullCheck(L_21);
		Transform_set_localPosition_m289(L_21, L_22, /*hidden argument*/&Transform_set_localPosition_m289_MethodInfo);
		goto IL_00df;
	}

IL_00b3:
	{
		Transform_t38 * L_23 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		Transform_t38 * L_24 = (__this->___target_4);
		NullCheck(L_24);
		Vector3_t3  L_25 = Transform_get_position_m467(L_24, /*hidden argument*/&Transform_get_position_m467_MethodInfo);
		Transform_t38 * L_26 = (__this->___target_4);
		NullCheck(L_26);
		Quaternion_t33  L_27 = Transform_get_rotation_m470(L_26, /*hidden argument*/&Transform_get_rotation_m470_MethodInfo);
		Vector3_t3  L_28 = V_1;
		Vector3_t3  L_29 = Quaternion_op_Multiply_m473(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/&Quaternion_op_Multiply_m473_MethodInfo);
		Vector3_t3  L_30 = Vector3_op_Addition_m422(NULL /*static, unused*/, L_25, L_29, /*hidden argument*/&Vector3_op_Addition_m422_MethodInfo);
		NullCheck(L_23);
		Transform_set_position_m474(L_23, L_30, /*hidden argument*/&Transform_set_position_m474_MethodInfo);
	}

IL_00df:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// CardboardProfile/Screen
#include "AssemblyU2DCSharp_CardboardProfile_ScreenMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// CardboardProfile/Lenses
#include "AssemblyU2DCSharp_CardboardProfile_LensesMethodDeclarations.h"



// CardboardProfile/MaxFOV
#include "AssemblyU2DCSharp_CardboardProfile_MaxFOV.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MaxFOV_t42_il2cpp_TypeInfo;
// CardboardProfile/MaxFOV
#include "AssemblyU2DCSharp_CardboardProfile_MaxFOVMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// CardboardProfile/Distortion
#include "AssemblyU2DCSharp_CardboardProfile_DistortionMethodDeclarations.h"



// System.Single CardboardProfile/Distortion::distort(System.Single)
extern MethodInfo Distortion_distort_m131_MethodInfo;
extern "C" float Distortion_distort_m131 (Distortion_t43 * __this, float ___r, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = ___r;
		float L_1 = ___r;
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = (__this->___k2_1);
		float L_3 = V_0;
		float L_4 = (__this->___k1_0);
		float L_5 = V_0;
		float L_6 = ___r;
		return ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_2*(float)L_3))+(float)L_4))*(float)L_5))+(float)(1.0f)))*(float)L_6));
	}
}
#ifndef _MSC_VER
#else
#endif
// CardboardProfile/Device
#include "AssemblyU2DCSharp_CardboardProfile_DeviceMethodDeclarations.h"



// CardboardProfile/ScreenSizes
#include "AssemblyU2DCSharp_CardboardProfile_ScreenSizes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ScreenSizes_t45_il2cpp_TypeInfo;
// CardboardProfile/ScreenSizes
#include "AssemblyU2DCSharp_CardboardProfile_ScreenSizesMethodDeclarations.h"



// CardboardProfile/DeviceTypes
#include "AssemblyU2DCSharp_CardboardProfile_DeviceTypes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DeviceTypes_t46_il2cpp_TypeInfo;
// CardboardProfile/DeviceTypes
#include "AssemblyU2DCSharp_CardboardProfile_DeviceTypesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Double
#include "mscorlib_System_Double.h"
extern TypeInfo DoubleU5BU2CU5D_t49_il2cpp_TypeInfo;
extern TypeInfo Double_t89_il2cpp_TypeInfo;
extern TypeInfo DoubleU5BU5D_t48_il2cpp_TypeInfo;
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType DoubleU5BU2CU5D_t49_0_0_0;
extern Il2CppType Double_t89_0_0_0;
extern Il2CppType DoubleU5BU5D_t48_0_0_0;
extern MethodInfo CardboardProfile_ApproximateInverse_m141_MethodInfo;
extern MethodInfo CardboardProfile__ctor_m132_MethodInfo;
extern MethodInfo Math_Tan_m475_MethodInfo;
extern MethodInfo CardboardProfile_get_VerticalLensOffset_m135_MethodInfo;
extern MethodInfo Math_Max_m476_MethodInfo;
extern MethodInfo Math_Min_m477_MethodInfo;
extern MethodInfo Array_GetLength_m478_MethodInfo;
extern MethodInfo DoubleU5BU2CU5D__ctor_m479_MethodInfo;
extern MethodInfo DoubleU5BU2CU5D_Get_m480_MethodInfo;
extern MethodInfo DoubleU5BU2CU5D_Set_m481_MethodInfo;
extern MethodInfo CardboardProfile_ApproximateInverse_m142_MethodInfo;
extern MethodInfo CardboardProfile_solveLeastSquares_m140_MethodInfo;


// System.Void CardboardProfile::.ctor()
extern "C" void CardboardProfile__ctor_m132 (CardboardProfile_t29 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void CardboardProfile::.cctor()
extern MethodInfo CardboardProfile__cctor_m133_MethodInfo;
extern "C" void CardboardProfile__cctor_m133 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Screen_t40  V_0 = {0};
	Screen_t40  V_1 = {0};
	Screen_t40  V_2 = {0};
	Screen_t40  V_3 = {0};
	Screen_t40  V_4 = {0};
	Screen_t40  V_5 = {0};
	Screen_t40  V_6 = {0};
	Screen_t40  V_7 = {0};
	Screen_t40  V_8 = {0};
	Device_t44  V_9 = {0};
	Device_t44  V_10 = {0};
	Device_t44  V_11 = {0};
	CardboardProfile_t29 * V_12 = {0};
	{
		Initobj (InitializedTypeInfo(&Screen_t40_il2cpp_TypeInfo), (&V_0));
		(&V_0)->___width_0 = (0.11f);
		(&V_0)->___height_1 = (0.062f);
		(&V_0)->___border_2 = (0.004f);
		Screen_t40  L_0 = V_0;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___Nexus5_2 = L_0;
		Initobj (InitializedTypeInfo(&Screen_t40_il2cpp_TypeInfo), (&V_1));
		(&V_1)->___width_0 = (0.133f);
		(&V_1)->___height_1 = (0.074f);
		(&V_1)->___border_2 = (0.004f);
		Screen_t40  L_1 = V_1;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___Nexus6_3 = L_1;
		Initobj (InitializedTypeInfo(&Screen_t40_il2cpp_TypeInfo), (&V_2));
		(&V_2)->___width_0 = (0.114f);
		(&V_2)->___height_1 = (0.0635f);
		(&V_2)->___border_2 = (0.0035f);
		Screen_t40  L_2 = V_2;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___GalaxyS6_4 = L_2;
		Initobj (InitializedTypeInfo(&Screen_t40_il2cpp_TypeInfo), (&V_3));
		(&V_3)->___width_0 = (0.125f);
		(&V_3)->___height_1 = (0.0705f);
		(&V_3)->___border_2 = (0.0045f);
		Screen_t40  L_3 = V_3;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___GalaxyNote4_5 = L_3;
		Initobj (InitializedTypeInfo(&Screen_t40_il2cpp_TypeInfo), (&V_4));
		(&V_4)->___width_0 = (0.121f);
		(&V_4)->___height_1 = (0.068f);
		(&V_4)->___border_2 = (0.003f);
		Screen_t40  L_4 = V_4;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___LGG3_6 = L_4;
		Initobj (InitializedTypeInfo(&Screen_t40_il2cpp_TypeInfo), (&V_5));
		(&V_5)->___width_0 = (0.075f);
		(&V_5)->___height_1 = (0.05f);
		(&V_5)->___border_2 = (0.0045f);
		Screen_t40  L_5 = V_5;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___iPhone4_7 = L_5;
		Initobj (InitializedTypeInfo(&Screen_t40_il2cpp_TypeInfo), (&V_6));
		(&V_6)->___width_0 = (0.089f);
		(&V_6)->___height_1 = (0.05f);
		(&V_6)->___border_2 = (0.0045f);
		Screen_t40  L_6 = V_6;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___iPhone5_8 = L_6;
		Initobj (InitializedTypeInfo(&Screen_t40_il2cpp_TypeInfo), (&V_7));
		(&V_7)->___width_0 = (0.104f);
		(&V_7)->___height_1 = (0.058f);
		(&V_7)->___border_2 = (0.005f);
		Screen_t40  L_7 = V_7;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___iPhone6_9 = L_7;
		Initobj (InitializedTypeInfo(&Screen_t40_il2cpp_TypeInfo), (&V_8));
		(&V_8)->___width_0 = (0.112f);
		(&V_8)->___height_1 = (0.068f);
		(&V_8)->___border_2 = (0.005f);
		Screen_t40  L_8 = V_8;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___iPhone6p_10 = L_8;
		Initobj (InitializedTypeInfo(&Device_t44_il2cpp_TypeInfo), (&V_9));
		Lenses_t41 * L_9 = &((&V_9)->___lenses_0);
		L_9->___separation_3 = (0.06f);
		Lenses_t41 * L_10 = &((&V_9)->___lenses_0);
		L_10->___offset_4 = (0.035f);
		Lenses_t41 * L_11 = &((&V_9)->___lenses_0);
		L_11->___screenDistance_5 = (0.042f);
		Lenses_t41 * L_12 = &((&V_9)->___lenses_0);
		L_12->___alignment_6 = 1;
		MaxFOV_t42 * L_13 = &((&V_9)->___maxFOV_1);
		L_13->___outer_0 = (40.0f);
		MaxFOV_t42 * L_14 = &((&V_9)->___maxFOV_1);
		L_14->___inner_1 = (40.0f);
		MaxFOV_t42 * L_15 = &((&V_9)->___maxFOV_1);
		L_15->___upper_2 = (40.0f);
		MaxFOV_t42 * L_16 = &((&V_9)->___maxFOV_1);
		L_16->___lower_3 = (40.0f);
		Distortion_t43 * L_17 = &((&V_9)->___distortion_2);
		L_17->___k1_0 = (0.441f);
		Distortion_t43 * L_18 = &((&V_9)->___distortion_2);
		L_18->___k2_1 = (0.156f);
		Distortion_t43  L_19 = CardboardProfile_ApproximateInverse_m141(NULL /*static, unused*/, (0.441f), (0.156f), (1.0f), ((int32_t)10), /*hidden argument*/&CardboardProfile_ApproximateInverse_m141_MethodInfo);
		(&V_9)->___inverse_3 = L_19;
		Device_t44  L_20 = V_9;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___CardboardJun2014_11 = L_20;
		Initobj (InitializedTypeInfo(&Device_t44_il2cpp_TypeInfo), (&V_10));
		Lenses_t41 * L_21 = &((&V_10)->___lenses_0);
		L_21->___separation_3 = (0.062f);
		Lenses_t41 * L_22 = &((&V_10)->___lenses_0);
		L_22->___offset_4 = (0.035f);
		Lenses_t41 * L_23 = &((&V_10)->___lenses_0);
		L_23->___screenDistance_5 = (0.037f);
		Lenses_t41 * L_24 = &((&V_10)->___lenses_0);
		L_24->___alignment_6 = 1;
		MaxFOV_t42 * L_25 = &((&V_10)->___maxFOV_1);
		L_25->___outer_0 = (50.0f);
		MaxFOV_t42 * L_26 = &((&V_10)->___maxFOV_1);
		L_26->___inner_1 = (50.0f);
		MaxFOV_t42 * L_27 = &((&V_10)->___maxFOV_1);
		L_27->___upper_2 = (50.0f);
		MaxFOV_t42 * L_28 = &((&V_10)->___maxFOV_1);
		L_28->___lower_3 = (50.0f);
		Distortion_t43 * L_29 = &((&V_10)->___distortion_2);
		L_29->___k1_0 = (0.26f);
		Distortion_t43 * L_30 = &((&V_10)->___distortion_2);
		L_30->___k2_1 = (0.27f);
		Distortion_t43  L_31 = CardboardProfile_ApproximateInverse_m141(NULL /*static, unused*/, (0.26f), (0.27f), (1.0f), ((int32_t)10), /*hidden argument*/&CardboardProfile_ApproximateInverse_m141_MethodInfo);
		(&V_10)->___inverse_3 = L_31;
		Device_t44  L_32 = V_10;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___CardboardMay2015_12 = L_32;
		Initobj (InitializedTypeInfo(&Device_t44_il2cpp_TypeInfo), (&V_11));
		Lenses_t41 * L_33 = &((&V_11)->___lenses_0);
		L_33->___separation_3 = (0.065f);
		Lenses_t41 * L_34 = &((&V_11)->___lenses_0);
		L_34->___offset_4 = (0.036f);
		Lenses_t41 * L_35 = &((&V_11)->___lenses_0);
		L_35->___screenDistance_5 = (0.058f);
		Lenses_t41 * L_36 = &((&V_11)->___lenses_0);
		L_36->___alignment_6 = 1;
		MaxFOV_t42 * L_37 = &((&V_11)->___maxFOV_1);
		L_37->___outer_0 = (50.0f);
		MaxFOV_t42 * L_38 = &((&V_11)->___maxFOV_1);
		L_38->___inner_1 = (50.0f);
		MaxFOV_t42 * L_39 = &((&V_11)->___maxFOV_1);
		L_39->___upper_2 = (50.0f);
		MaxFOV_t42 * L_40 = &((&V_11)->___maxFOV_1);
		L_40->___lower_3 = (50.0f);
		Distortion_t43 * L_41 = &((&V_11)->___distortion_2);
		L_41->___k1_0 = (0.3f);
		Distortion_t43  L_42 = CardboardProfile_ApproximateInverse_m141(NULL /*static, unused*/, (0.3f), (0.0f), (1.0f), ((int32_t)10), /*hidden argument*/&CardboardProfile_ApproximateInverse_m141_MethodInfo);
		(&V_11)->___inverse_3 = L_42;
		Device_t44  L_43 = V_11;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___GoggleTechC1Glass_13 = L_43;
		CardboardProfile_t29 * L_44 = (CardboardProfile_t29 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		CardboardProfile__ctor_m132(L_44, /*hidden argument*/&CardboardProfile__ctor_m132_MethodInfo);
		V_12 = L_44;
		CardboardProfile_t29 * L_45 = V_12;
		Screen_t40  L_46 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___Nexus5_2;
		NullCheck(L_45);
		L_45->___screen_0 = L_46;
		CardboardProfile_t29 * L_47 = V_12;
		Device_t44  L_48 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___CardboardJun2014_11;
		NullCheck(L_47);
		L_47->___device_1 = L_48;
		CardboardProfile_t29 * L_49 = V_12;
		((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___Default_14 = L_49;
		return;
	}
}
// CardboardProfile CardboardProfile::Clone()
extern MethodInfo CardboardProfile_Clone_m134_MethodInfo;
extern "C" CardboardProfile_t29 * CardboardProfile_Clone_m134 (CardboardProfile_t29 * __this, MethodInfo* method)
{
	CardboardProfile_t29 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		CardboardProfile_t29 * L_0 = (CardboardProfile_t29 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		CardboardProfile__ctor_m132(L_0, /*hidden argument*/&CardboardProfile__ctor_m132_MethodInfo);
		V_0 = L_0;
		CardboardProfile_t29 * L_1 = V_0;
		Screen_t40  L_2 = (__this->___screen_0);
		NullCheck(L_1);
		L_1->___screen_0 = L_2;
		CardboardProfile_t29 * L_3 = V_0;
		Device_t44  L_4 = (__this->___device_1);
		NullCheck(L_3);
		L_3->___device_1 = L_4;
		CardboardProfile_t29 * L_5 = V_0;
		return L_5;
	}
}
// System.Single CardboardProfile::get_VerticalLensOffset()
extern "C" float CardboardProfile_get_VerticalLensOffset_m135 (CardboardProfile_t29 * __this, MethodInfo* method)
{
	{
		Device_t44 * L_0 = &(__this->___device_1);
		Lenses_t41 * L_1 = &(L_0->___lenses_0);
		float L_2 = (L_1->___offset_4);
		Screen_t40 * L_3 = &(__this->___screen_0);
		float L_4 = (L_3->___border_2);
		Screen_t40 * L_5 = &(__this->___screen_0);
		float L_6 = (L_5->___height_1);
		Device_t44 * L_7 = &(__this->___device_1);
		Lenses_t41 * L_8 = &(L_7->___lenses_0);
		int32_t L_9 = (L_8->___alignment_6);
		return ((float)((float)((float)((float)((float)((float)L_2-(float)L_4))-(float)((float)((float)L_6/(float)(2.0f)))))*(float)(((float)L_9))));
	}
}
// CardboardProfile CardboardProfile::GetKnownProfile(CardboardProfile/ScreenSizes,CardboardProfile/DeviceTypes)
extern MethodInfo CardboardProfile_GetKnownProfile_m136_MethodInfo;
extern "C" CardboardProfile_t29 * CardboardProfile_GetKnownProfile_m136 (Object_t * __this /* static, unused */, int32_t ___screenSize, int32_t ___deviceType, MethodInfo* method)
{
	Screen_t40  V_0 = {0};
	Device_t44  V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	CardboardProfile_t29 * V_4 = {0};
	{
		int32_t L_0 = ___screenSize;
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_002f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_003a;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_005b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0066;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_0071;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0087;
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Screen_t40  L_2 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___Nexus6_3;
		V_0 = L_2;
		goto IL_0092;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Screen_t40  L_3 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___GalaxyS6_4;
		V_0 = L_3;
		goto IL_0092;
	}

IL_0045:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Screen_t40  L_4 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___GalaxyNote4_5;
		V_0 = L_4;
		goto IL_0092;
	}

IL_0050:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Screen_t40  L_5 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___LGG3_6;
		V_0 = L_5;
		goto IL_0092;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Screen_t40  L_6 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___iPhone4_7;
		V_0 = L_6;
		goto IL_0092;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Screen_t40  L_7 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___iPhone5_8;
		V_0 = L_7;
		goto IL_0092;
	}

IL_0071:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Screen_t40  L_8 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___iPhone6_9;
		V_0 = L_8;
		goto IL_0092;
	}

IL_007c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Screen_t40  L_9 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___iPhone6p_10;
		V_0 = L_9;
		goto IL_0092;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Screen_t40  L_10 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___Nexus5_2;
		V_0 = L_10;
		goto IL_0092;
	}

IL_0092:
	{
		int32_t L_11 = ___deviceType;
		V_3 = L_11;
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		goto IL_00ab;
	}

IL_00a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Device_t44  L_13 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___CardboardMay2015_12;
		V_1 = L_13;
		goto IL_00b6;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Device_t44  L_14 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___CardboardJun2014_11;
		V_1 = L_14;
		goto IL_00b6;
	}

IL_00b6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		CardboardProfile_t29 * L_15 = (CardboardProfile_t29 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		CardboardProfile__ctor_m132(L_15, /*hidden argument*/&CardboardProfile__ctor_m132_MethodInfo);
		V_4 = L_15;
		CardboardProfile_t29 * L_16 = V_4;
		Screen_t40  L_17 = V_0;
		NullCheck(L_16);
		L_16->___screen_0 = L_17;
		CardboardProfile_t29 * L_18 = V_4;
		Device_t44  L_19 = V_1;
		NullCheck(L_18);
		L_18->___device_1 = L_19;
		CardboardProfile_t29 * L_20 = V_4;
		return L_20;
	}
}
// System.Void CardboardProfile::GetLeftEyeVisibleTanAngles(System.Single[]&)
extern MethodInfo CardboardProfile_GetLeftEyeVisibleTanAngles_m137_MethodInfo;
extern "C" void CardboardProfile_GetLeftEyeVisibleTanAngles_m137 (CardboardProfile_t29 * __this, SingleU5BU5D_t47** ___result, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		Device_t44 * L_0 = &(__this->___device_1);
		MaxFOV_t42 * L_1 = &(L_0->___maxFOV_1);
		float L_2 = (L_1->___outer_0);
		double L_3 = tan(((double)((double)((double)((double)(((double)((-L_2))))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_0 = (((float)L_3));
		Device_t44 * L_4 = &(__this->___device_1);
		MaxFOV_t42 * L_5 = &(L_4->___maxFOV_1);
		float L_6 = (L_5->___upper_2);
		double L_7 = tan(((double)((double)((double)((double)(((double)L_6))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_1 = (((float)L_7));
		Device_t44 * L_8 = &(__this->___device_1);
		MaxFOV_t42 * L_9 = &(L_8->___maxFOV_1);
		float L_10 = (L_9->___inner_1);
		double L_11 = tan(((double)((double)((double)((double)(((double)L_10))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_2 = (((float)L_11));
		Device_t44 * L_12 = &(__this->___device_1);
		MaxFOV_t42 * L_13 = &(L_12->___maxFOV_1);
		float L_14 = (L_13->___lower_3);
		double L_15 = tan(((double)((double)((double)((double)(((double)((-L_14))))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_3 = (((float)L_15));
		Screen_t40 * L_16 = &(__this->___screen_0);
		float L_17 = (L_16->___width_0);
		V_4 = ((float)((float)L_17/(float)(4.0f)));
		Screen_t40 * L_18 = &(__this->___screen_0);
		float L_19 = (L_18->___height_1);
		V_5 = ((float)((float)L_19/(float)(2.0f)));
		Device_t44 * L_20 = &(__this->___device_1);
		Lenses_t41 * L_21 = &(L_20->___lenses_0);
		float L_22 = (L_21->___separation_3);
		float L_23 = V_4;
		V_6 = ((float)((float)((float)((float)L_22/(float)(2.0f)))-(float)L_23));
		float L_24 = CardboardProfile_get_VerticalLensOffset_m135(__this, /*hidden argument*/&CardboardProfile_get_VerticalLensOffset_m135_MethodInfo);
		V_7 = ((-L_24));
		Device_t44 * L_25 = &(__this->___device_1);
		Lenses_t41 * L_26 = &(L_25->___lenses_0);
		float L_27 = (L_26->___screenDistance_5);
		V_8 = L_27;
		Device_t44 * L_28 = &(__this->___device_1);
		Distortion_t43 * L_29 = &(L_28->___distortion_2);
		float L_30 = V_6;
		float L_31 = V_4;
		float L_32 = V_8;
		float L_33 = Distortion_distort_m131(L_29, ((float)((float)((float)((float)L_30-(float)L_31))/(float)L_32)), /*hidden argument*/&Distortion_distort_m131_MethodInfo);
		V_9 = L_33;
		Device_t44 * L_34 = &(__this->___device_1);
		Distortion_t43 * L_35 = &(L_34->___distortion_2);
		float L_36 = V_7;
		float L_37 = V_5;
		float L_38 = V_8;
		float L_39 = Distortion_distort_m131(L_35, ((float)((float)((float)((float)L_36+(float)L_37))/(float)L_38)), /*hidden argument*/&Distortion_distort_m131_MethodInfo);
		V_10 = L_39;
		Device_t44 * L_40 = &(__this->___device_1);
		Distortion_t43 * L_41 = &(L_40->___distortion_2);
		float L_42 = V_6;
		float L_43 = V_4;
		float L_44 = V_8;
		float L_45 = Distortion_distort_m131(L_41, ((float)((float)((float)((float)L_42+(float)L_43))/(float)L_44)), /*hidden argument*/&Distortion_distort_m131_MethodInfo);
		V_11 = L_45;
		Device_t44 * L_46 = &(__this->___device_1);
		Distortion_t43 * L_47 = &(L_46->___distortion_2);
		float L_48 = V_7;
		float L_49 = V_4;
		float L_50 = V_8;
		float L_51 = Distortion_distort_m131(L_47, ((float)((float)((float)((float)L_48-(float)L_49))/(float)L_50)), /*hidden argument*/&Distortion_distort_m131_MethodInfo);
		V_12 = L_51;
		SingleU5BU5D_t47** L_52 = ___result;
		float L_53 = V_0;
		float L_54 = V_9;
		float L_55 = Math_Max_m476(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/&Math_Max_m476_MethodInfo);
		NullCheck((*((SingleU5BU5D_t47**)L_52)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t47**)L_52)), 0);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t47**)L_52)), 0)) = (float)L_55;
		SingleU5BU5D_t47** L_56 = ___result;
		float L_57 = V_1;
		float L_58 = V_10;
		float L_59 = Math_Min_m477(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/&Math_Min_m477_MethodInfo);
		NullCheck((*((SingleU5BU5D_t47**)L_56)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t47**)L_56)), 1);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t47**)L_56)), 1)) = (float)L_59;
		SingleU5BU5D_t47** L_60 = ___result;
		float L_61 = V_2;
		float L_62 = V_11;
		float L_63 = Math_Min_m477(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/&Math_Min_m477_MethodInfo);
		NullCheck((*((SingleU5BU5D_t47**)L_60)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t47**)L_60)), 2);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t47**)L_60)), 2)) = (float)L_63;
		SingleU5BU5D_t47** L_64 = ___result;
		float L_65 = V_3;
		float L_66 = V_12;
		float L_67 = Math_Max_m476(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/&Math_Max_m476_MethodInfo);
		NullCheck((*((SingleU5BU5D_t47**)L_64)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t47**)L_64)), 3);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t47**)L_64)), 3)) = (float)L_67;
		return;
	}
}
// System.Void CardboardProfile::GetLeftEyeNoLensTanAngles(System.Single[]&)
extern MethodInfo CardboardProfile_GetLeftEyeNoLensTanAngles_m138_MethodInfo;
extern "C" void CardboardProfile_GetLeftEyeNoLensTanAngles_m138 (CardboardProfile_t29 * __this, SingleU5BU5D_t47** ___result, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		Device_t44 * L_0 = &(__this->___device_1);
		Distortion_t43 * L_1 = &(L_0->___inverse_3);
		Device_t44 * L_2 = &(__this->___device_1);
		MaxFOV_t42 * L_3 = &(L_2->___maxFOV_1);
		float L_4 = (L_3->___outer_0);
		double L_5 = tan(((double)((double)((double)((double)(((double)((-L_4))))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_6 = Distortion_distort_m131(L_1, (((float)L_5)), /*hidden argument*/&Distortion_distort_m131_MethodInfo);
		V_0 = L_6;
		Device_t44 * L_7 = &(__this->___device_1);
		Distortion_t43 * L_8 = &(L_7->___inverse_3);
		Device_t44 * L_9 = &(__this->___device_1);
		MaxFOV_t42 * L_10 = &(L_9->___maxFOV_1);
		float L_11 = (L_10->___upper_2);
		double L_12 = tan(((double)((double)((double)((double)(((double)L_11))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_13 = Distortion_distort_m131(L_8, (((float)L_12)), /*hidden argument*/&Distortion_distort_m131_MethodInfo);
		V_1 = L_13;
		Device_t44 * L_14 = &(__this->___device_1);
		Distortion_t43 * L_15 = &(L_14->___inverse_3);
		Device_t44 * L_16 = &(__this->___device_1);
		MaxFOV_t42 * L_17 = &(L_16->___maxFOV_1);
		float L_18 = (L_17->___inner_1);
		double L_19 = tan(((double)((double)((double)((double)(((double)L_18))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_20 = Distortion_distort_m131(L_15, (((float)L_19)), /*hidden argument*/&Distortion_distort_m131_MethodInfo);
		V_2 = L_20;
		Device_t44 * L_21 = &(__this->___device_1);
		Distortion_t43 * L_22 = &(L_21->___inverse_3);
		Device_t44 * L_23 = &(__this->___device_1);
		MaxFOV_t42 * L_24 = &(L_23->___maxFOV_1);
		float L_25 = (L_24->___lower_3);
		double L_26 = tan(((double)((double)((double)((double)(((double)((-L_25))))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_27 = Distortion_distort_m131(L_22, (((float)L_26)), /*hidden argument*/&Distortion_distort_m131_MethodInfo);
		V_3 = L_27;
		Screen_t40 * L_28 = &(__this->___screen_0);
		float L_29 = (L_28->___width_0);
		V_4 = ((float)((float)L_29/(float)(4.0f)));
		Screen_t40 * L_30 = &(__this->___screen_0);
		float L_31 = (L_30->___height_1);
		V_5 = ((float)((float)L_31/(float)(2.0f)));
		Device_t44 * L_32 = &(__this->___device_1);
		Lenses_t41 * L_33 = &(L_32->___lenses_0);
		float L_34 = (L_33->___separation_3);
		float L_35 = V_4;
		V_6 = ((float)((float)((float)((float)L_34/(float)(2.0f)))-(float)L_35));
		float L_36 = CardboardProfile_get_VerticalLensOffset_m135(__this, /*hidden argument*/&CardboardProfile_get_VerticalLensOffset_m135_MethodInfo);
		V_7 = ((-L_36));
		Device_t44 * L_37 = &(__this->___device_1);
		Lenses_t41 * L_38 = &(L_37->___lenses_0);
		float L_39 = (L_38->___screenDistance_5);
		V_8 = L_39;
		float L_40 = V_6;
		float L_41 = V_4;
		float L_42 = V_8;
		V_9 = ((float)((float)((float)((float)L_40-(float)L_41))/(float)L_42));
		float L_43 = V_7;
		float L_44 = V_5;
		float L_45 = V_8;
		V_10 = ((float)((float)((float)((float)L_43+(float)L_44))/(float)L_45));
		float L_46 = V_6;
		float L_47 = V_4;
		float L_48 = V_8;
		V_11 = ((float)((float)((float)((float)L_46+(float)L_47))/(float)L_48));
		float L_49 = V_7;
		float L_50 = V_4;
		float L_51 = V_8;
		V_12 = ((float)((float)((float)((float)L_49-(float)L_50))/(float)L_51));
		SingleU5BU5D_t47** L_52 = ___result;
		float L_53 = V_0;
		float L_54 = V_9;
		float L_55 = Math_Max_m476(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/&Math_Max_m476_MethodInfo);
		NullCheck((*((SingleU5BU5D_t47**)L_52)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t47**)L_52)), 0);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t47**)L_52)), 0)) = (float)L_55;
		SingleU5BU5D_t47** L_56 = ___result;
		float L_57 = V_1;
		float L_58 = V_10;
		float L_59 = Math_Min_m477(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/&Math_Min_m477_MethodInfo);
		NullCheck((*((SingleU5BU5D_t47**)L_56)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t47**)L_56)), 1);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t47**)L_56)), 1)) = (float)L_59;
		SingleU5BU5D_t47** L_60 = ___result;
		float L_61 = V_2;
		float L_62 = V_11;
		float L_63 = Math_Min_m477(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/&Math_Min_m477_MethodInfo);
		NullCheck((*((SingleU5BU5D_t47**)L_60)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t47**)L_60)), 2);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t47**)L_60)), 2)) = (float)L_63;
		SingleU5BU5D_t47** L_64 = ___result;
		float L_65 = V_3;
		float L_66 = V_12;
		float L_67 = Math_Max_m476(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/&Math_Max_m476_MethodInfo);
		NullCheck((*((SingleU5BU5D_t47**)L_64)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t47**)L_64)), 3);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t47**)L_64)), 3)) = (float)L_67;
		return;
	}
}
// UnityEngine.Rect CardboardProfile::GetLeftEyeVisibleScreenRect(System.Single[])
extern MethodInfo CardboardProfile_GetLeftEyeVisibleScreenRect_m139_MethodInfo;
extern "C" Rect_t18  CardboardProfile_GetLeftEyeVisibleScreenRect_m139 (CardboardProfile_t29 * __this, SingleU5BU5D_t47* ___undistortedFrustum, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		Device_t44 * L_0 = &(__this->___device_1);
		Lenses_t41 * L_1 = &(L_0->___lenses_0);
		float L_2 = (L_1->___screenDistance_5);
		V_0 = L_2;
		Screen_t40 * L_3 = &(__this->___screen_0);
		float L_4 = (L_3->___width_0);
		Device_t44 * L_5 = &(__this->___device_1);
		Lenses_t41 * L_6 = &(L_5->___lenses_0);
		float L_7 = (L_6->___separation_3);
		V_1 = ((float)((float)((float)((float)L_4-(float)L_7))/(float)(2.0f)));
		float L_8 = CardboardProfile_get_VerticalLensOffset_m135(__this, /*hidden argument*/&CardboardProfile_get_VerticalLensOffset_m135_MethodInfo);
		Screen_t40 * L_9 = &(__this->___screen_0);
		float L_10 = (L_9->___height_1);
		V_2 = ((float)((float)L_8+(float)((float)((float)L_10/(float)(2.0f)))));
		SingleU5BU5D_t47* L_11 = ___undistortedFrustum;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		int32_t L_12 = 0;
		float L_13 = V_0;
		float L_14 = V_1;
		Screen_t40 * L_15 = &(__this->___screen_0);
		float L_16 = (L_15->___width_0);
		V_3 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_11, L_12))*(float)L_13))+(float)L_14))/(float)L_16));
		SingleU5BU5D_t47* L_17 = ___undistortedFrustum;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		int32_t L_18 = 1;
		float L_19 = V_0;
		float L_20 = V_2;
		Screen_t40 * L_21 = &(__this->___screen_0);
		float L_22 = (L_21->___height_1);
		V_4 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_17, L_18))*(float)L_19))+(float)L_20))/(float)L_22));
		SingleU5BU5D_t47* L_23 = ___undistortedFrustum;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
		int32_t L_24 = 2;
		float L_25 = V_0;
		float L_26 = V_1;
		Screen_t40 * L_27 = &(__this->___screen_0);
		float L_28 = (L_27->___width_0);
		V_5 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_23, L_24))*(float)L_25))+(float)L_26))/(float)L_28));
		SingleU5BU5D_t47* L_29 = ___undistortedFrustum;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 3);
		int32_t L_30 = 3;
		float L_31 = V_0;
		float L_32 = V_2;
		Screen_t40 * L_33 = &(__this->___screen_0);
		float L_34 = (L_33->___height_1);
		V_6 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_29, L_30))*(float)L_31))+(float)L_32))/(float)L_34));
		float L_35 = V_3;
		float L_36 = V_6;
		float L_37 = V_5;
		float L_38 = V_3;
		float L_39 = V_4;
		float L_40 = V_6;
		Rect_t18  L_41 = {0};
		Rect__ctor_m298(&L_41, L_35, L_36, ((float)((float)L_37-(float)L_38)), ((float)((float)L_39-(float)L_40)), /*hidden argument*/&Rect__ctor_m298_MethodInfo);
		return L_41;
	}
}
// System.Double[] CardboardProfile::solveLeastSquares(System.Double[,],System.Double[])
extern TypeInfo* DoubleU5BU2CU5D_t49_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t48_il2cpp_TypeInfo_var;
extern "C" DoubleU5BU5D_t48* CardboardProfile_solveLeastSquares_m140 (Object_t * __this /* static, unused */, DoubleU5BU2CU5D_t49* ___matA, DoubleU5BU5D_t48* ___vecY, MethodInfo* method)
{
	static bool CardboardProfile_solveLeastSquares_m140_init;
	if (!CardboardProfile_solveLeastSquares_m140_init)
	{
		DoubleU5BU2CU5D_t49_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DoubleU5BU2CU5D_t49_0_0_0);
		DoubleU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DoubleU5BU5D_t48_0_0_0);
		CardboardProfile_solveLeastSquares_m140_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DoubleU5BU2CU5D_t49* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	DoubleU5BU2CU5D_t49* V_7 = {0};
	double V_8 = 0.0;
	DoubleU5BU5D_t48* V_9 = {0};
	int32_t V_10 = 0;
	double V_11 = 0.0;
	int32_t V_12 = 0;
	DoubleU5BU5D_t48* V_13 = {0};
	int32_t V_14 = 0;
	double V_15 = 0.0;
	int32_t V_16 = 0;
	{
		DoubleU5BU2CU5D_t49* L_0 = ___matA;
		NullCheck(L_0);
		int32_t L_1 = Array_GetLength_m478(L_0, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		V_0 = L_1;
		DoubleU5BU2CU5D_t49* L_2 = ___matA;
		NullCheck(L_2);
		int32_t L_3 = Array_GetLength_m478(L_2, 1, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = V_0;
		DoubleU5BU5D_t48* L_5 = ___vecY;
		NullCheck(L_5);
		if ((((int32_t)L_4) == ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		Debug_LogError_m373(NULL /*static, unused*/, (String_t*) &_stringLiteral24, /*hidden argument*/&Debug_LogError_m373_MethodInfo);
		return (DoubleU5BU5D_t48*)NULL;
	}

IL_0025:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		Debug_LogError_m373(NULL /*static, unused*/, (String_t*) &_stringLiteral25, /*hidden argument*/&Debug_LogError_m373_MethodInfo);
		return (DoubleU5BU5D_t48*)NULL;
	}

IL_0038:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = V_1;
		DoubleU5BU2CU5D_t49* L_9 = (DoubleU5BU2CU5D_t49*)GenArrayNew2(DoubleU5BU2CU5D_t49_il2cpp_TypeInfo_var, L_7, L_8);
		V_2 = L_9;
		V_3 = 0;
		goto IL_00a6;
	}

IL_0047:
	{
		V_4 = 0;
		goto IL_009a;
	}

IL_004f:
	{
		V_5 = (0.0);
		V_6 = 0;
		goto IL_0081;
	}

IL_0062:
	{
		double L_10 = V_5;
		DoubleU5BU2CU5D_t49* L_11 = ___matA;
		int32_t L_12 = V_6;
		int32_t L_13 = V_4;
		NullCheck(L_11);
		double L_14 = GenArrayGet2(L_11, L_12, L_13, double);;
		DoubleU5BU2CU5D_t49* L_15 = ___matA;
		int32_t L_16 = V_6;
		int32_t L_17 = V_3;
		NullCheck(L_15);
		double L_18 = GenArrayGet2(L_15, L_16, L_17, double);;
		V_5 = ((double)((double)L_10+(double)((double)((double)L_14*(double)L_18))));
		int32_t L_19 = V_6;
		V_6 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0081:
	{
		int32_t L_20 = V_6;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		DoubleU5BU2CU5D_t49* L_22 = V_2;
		int32_t L_23 = V_4;
		int32_t L_24 = V_3;
		double L_25 = V_5;
		NullCheck(L_22);
		GenArraySet2(L_22, L_23, L_24, L_25, double);;
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009a:
	{
		int32_t L_27 = V_4;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00a6:
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_1;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_32 = V_1;
		int32_t L_33 = V_1;
		DoubleU5BU2CU5D_t49* L_34 = (DoubleU5BU2CU5D_t49*)GenArrayNew2(DoubleU5BU2CU5D_t49_il2cpp_TypeInfo_var, L_32, L_33);
		V_7 = L_34;
		DoubleU5BU2CU5D_t49* L_35 = V_2;
		NullCheck(L_35);
		double L_36 = GenArrayGet2(L_35, 0, 0, double);;
		DoubleU5BU2CU5D_t49* L_37 = V_2;
		NullCheck(L_37);
		double L_38 = GenArrayGet2(L_37, 1, 1, double);;
		DoubleU5BU2CU5D_t49* L_39 = V_2;
		NullCheck(L_39);
		double L_40 = GenArrayGet2(L_39, 0, 1, double);;
		DoubleU5BU2CU5D_t49* L_41 = V_2;
		NullCheck(L_41);
		double L_42 = GenArrayGet2(L_41, 1, 0, double);;
		V_8 = ((double)((double)((double)((double)L_36*(double)L_38))-(double)((double)((double)L_40*(double)L_42))));
		DoubleU5BU2CU5D_t49* L_43 = V_7;
		DoubleU5BU2CU5D_t49* L_44 = V_2;
		NullCheck(L_44);
		double L_45 = GenArrayGet2(L_44, 1, 1, double);;
		double L_46 = V_8;
		NullCheck(L_43);
		GenArraySet2(L_43, 0, 0, ((double)((double)L_45/(double)L_46)), double);;
		DoubleU5BU2CU5D_t49* L_47 = V_7;
		DoubleU5BU2CU5D_t49* L_48 = V_2;
		NullCheck(L_48);
		double L_49 = GenArrayGet2(L_48, 0, 0, double);;
		double L_50 = V_8;
		NullCheck(L_47);
		GenArraySet2(L_47, 1, 1, ((double)((double)L_49/(double)L_50)), double);;
		DoubleU5BU2CU5D_t49* L_51 = V_7;
		DoubleU5BU2CU5D_t49* L_52 = V_2;
		NullCheck(L_52);
		double L_53 = GenArrayGet2(L_52, 1, 0, double);;
		double L_54 = V_8;
		NullCheck(L_51);
		GenArraySet2(L_51, 0, 1, ((double)((double)((-L_53))/(double)L_54)), double);;
		DoubleU5BU2CU5D_t49* L_55 = V_7;
		DoubleU5BU2CU5D_t49* L_56 = V_2;
		NullCheck(L_56);
		double L_57 = GenArrayGet2(L_56, 0, 1, double);;
		double L_58 = V_8;
		NullCheck(L_55);
		GenArraySet2(L_55, 1, 0, ((double)((double)((-L_57))/(double)L_58)), double);;
		int32_t L_59 = V_1;
		V_9 = ((DoubleU5BU5D_t48*)SZArrayNew(DoubleU5BU5D_t48_il2cpp_TypeInfo_var, L_59));
		V_10 = 0;
		goto IL_017f;
	}

IL_013d:
	{
		V_11 = (0.0);
		V_12 = 0;
		goto IL_016a;
	}

IL_0150:
	{
		double L_60 = V_11;
		DoubleU5BU2CU5D_t49* L_61 = ___matA;
		int32_t L_62 = V_12;
		int32_t L_63 = V_10;
		NullCheck(L_61);
		double L_64 = GenArrayGet2(L_61, L_62, L_63, double);;
		DoubleU5BU5D_t48* L_65 = ___vecY;
		int32_t L_66 = V_12;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		V_11 = ((double)((double)L_60+(double)((double)((double)L_64*(double)(*(double*)(double*)SZArrayLdElema(L_65, L_67))))));
		int32_t L_68 = V_12;
		V_12 = ((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_016a:
	{
		int32_t L_69 = V_12;
		int32_t L_70 = V_0;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_0150;
		}
	}
	{
		DoubleU5BU5D_t48* L_71 = V_9;
		int32_t L_72 = V_10;
		double L_73 = V_11;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((double*)(double*)SZArrayLdElema(L_71, L_72)) = (double)L_73;
		int32_t L_74 = V_10;
		V_10 = ((int32_t)((int32_t)L_74+(int32_t)1));
	}

IL_017f:
	{
		int32_t L_75 = V_10;
		int32_t L_76 = V_1;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_77 = V_1;
		V_13 = ((DoubleU5BU5D_t48*)SZArrayNew(DoubleU5BU5D_t48_il2cpp_TypeInfo_var, L_77));
		V_14 = 0;
		goto IL_01db;
	}

IL_0197:
	{
		V_15 = (0.0);
		V_16 = 0;
		goto IL_01c6;
	}

IL_01aa:
	{
		double L_78 = V_15;
		DoubleU5BU2CU5D_t49* L_79 = V_7;
		int32_t L_80 = V_16;
		int32_t L_81 = V_14;
		NullCheck(L_79);
		double L_82 = GenArrayGet2(L_79, L_80, L_81, double);;
		DoubleU5BU5D_t48* L_83 = V_9;
		int32_t L_84 = V_16;
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, L_84);
		int32_t L_85 = L_84;
		V_15 = ((double)((double)L_78+(double)((double)((double)L_82*(double)(*(double*)(double*)SZArrayLdElema(L_83, L_85))))));
		int32_t L_86 = V_16;
		V_16 = ((int32_t)((int32_t)L_86+(int32_t)1));
	}

IL_01c6:
	{
		int32_t L_87 = V_16;
		int32_t L_88 = V_1;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_01aa;
		}
	}
	{
		DoubleU5BU5D_t48* L_89 = V_13;
		int32_t L_90 = V_14;
		double L_91 = V_15;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, L_90);
		*((double*)(double*)SZArrayLdElema(L_89, L_90)) = (double)L_91;
		int32_t L_92 = V_14;
		V_14 = ((int32_t)((int32_t)L_92+(int32_t)1));
	}

IL_01db:
	{
		int32_t L_93 = V_14;
		int32_t L_94 = V_1;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_0197;
		}
	}
	{
		DoubleU5BU5D_t48* L_95 = V_13;
		return L_95;
	}
}
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(System.Single,System.Single,System.Single,System.Int32)
extern "C" Distortion_t43  CardboardProfile_ApproximateInverse_m141 (Object_t * __this /* static, unused */, float ___k1, float ___k2, float ___maxRadius, int32_t ___numSamples, MethodInfo* method)
{
	Distortion_t43  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Distortion_t43_il2cpp_TypeInfo), (&V_0));
		float L_0 = ___k1;
		(&V_0)->___k1_0 = L_0;
		float L_1 = ___k2;
		(&V_0)->___k2_1 = L_1;
		Distortion_t43  L_2 = V_0;
		float L_3 = ___maxRadius;
		int32_t L_4 = ___numSamples;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Distortion_t43  L_5 = CardboardProfile_ApproximateInverse_m142(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/&CardboardProfile_ApproximateInverse_m142_MethodInfo);
		return L_5;
	}
}
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(CardboardProfile/Distortion,System.Single,System.Int32)
extern TypeInfo* DoubleU5BU2CU5D_t49_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t48_il2cpp_TypeInfo_var;
extern "C" Distortion_t43  CardboardProfile_ApproximateInverse_m142 (Object_t * __this /* static, unused */, Distortion_t43  ___distort, float ___maxRadius, int32_t ___numSamples, MethodInfo* method)
{
	static bool CardboardProfile_ApproximateInverse_m142_init;
	if (!CardboardProfile_ApproximateInverse_m142_init)
	{
		DoubleU5BU2CU5D_t49_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DoubleU5BU2CU5D_t49_0_0_0);
		DoubleU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DoubleU5BU5D_t48_0_0_0);
		CardboardProfile_ApproximateInverse_m142_init = true;
	}
	int32_t V_0 = 0;
	DoubleU5BU2CU5D_t49* V_1 = {0};
	DoubleU5BU5D_t48* V_2 = {0};
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	double V_5 = 0.0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	DoubleU5BU5D_t48* V_8 = {0};
	Distortion_t43  V_9 = {0};
	{
		int32_t L_0 = ___numSamples;
		DoubleU5BU2CU5D_t49* L_1 = (DoubleU5BU2CU5D_t49*)GenArrayNew2(DoubleU5BU2CU5D_t49_il2cpp_TypeInfo_var, L_0, 2);
		V_1 = L_1;
		int32_t L_2 = ___numSamples;
		V_2 = ((DoubleU5BU5D_t48*)SZArrayNew(DoubleU5BU5D_t48_il2cpp_TypeInfo_var, L_2));
		V_3 = 0;
		goto IL_0069;
	}

IL_0016:
	{
		float L_3 = ___maxRadius;
		int32_t L_4 = V_3;
		int32_t L_5 = ___numSamples;
		V_4 = ((float)((float)((float)((float)L_3*(float)(((float)((int32_t)((int32_t)L_4+(int32_t)1))))))/(float)(((float)L_5))));
		float L_6 = V_4;
		float L_7 = Distortion_distort_m131((&___distort), L_6, /*hidden argument*/&Distortion_distort_m131_MethodInfo);
		V_5 = (((double)L_7));
		double L_8 = V_5;
		V_6 = L_8;
		V_7 = 0;
		goto IL_0054;
	}

IL_0039:
	{
		double L_9 = V_6;
		double L_10 = V_5;
		double L_11 = V_5;
		V_6 = ((double)((double)L_9*(double)((double)((double)L_10*(double)L_11))));
		DoubleU5BU2CU5D_t49* L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14 = V_7;
		double L_15 = V_6;
		NullCheck(L_12);
		GenArraySet2(L_12, L_13, L_14, L_15, double);;
		int32_t L_16 = V_7;
		V_7 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_17 = V_7;
		if ((((int32_t)L_17) < ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		DoubleU5BU5D_t48* L_18 = V_2;
		int32_t L_19 = V_3;
		float L_20 = V_4;
		double L_21 = V_5;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		*((double*)(double*)SZArrayLdElema(L_18, L_19)) = (double)((double)((double)(((double)L_20))-(double)L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0069:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = ___numSamples;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0016;
		}
	}
	{
		DoubleU5BU2CU5D_t49* L_25 = V_1;
		DoubleU5BU5D_t48* L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		DoubleU5BU5D_t48* L_27 = CardboardProfile_solveLeastSquares_m140(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/&CardboardProfile_solveLeastSquares_m140_MethodInfo);
		V_8 = L_27;
		Initobj (InitializedTypeInfo(&Distortion_t43_il2cpp_TypeInfo), (&V_9));
		DoubleU5BU5D_t48* L_28 = V_8;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 0);
		int32_t L_29 = 0;
		(&V_9)->___k1_0 = (((float)(*(double*)(double*)SZArrayLdElema(L_28, L_29))));
		DoubleU5BU5D_t48* L_30 = V_8;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 1);
		int32_t L_31 = 1;
		(&V_9)->___k2_1 = (((float)(*(double*)(double*)SZArrayLdElema(L_30, L_31))));
		Distortion_t43  L_32 = V_9;
		return L_32;
	}
}
#ifndef _MSC_VER
#else
#endif

// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$20
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_$ArrayT.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
extern TypeInfo Color_t12_il2cpp_TypeInfo;
extern TypeInfo SingleU5BU5D_t47_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t68_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
extern Il2CppType SingleU5BU5D_t47_0_0_0;
extern MethodInfo Color__ctor_m482_MethodInfo;
extern MethodInfo CardboardUILayer_ComputeMatrix_m145_MethodInfo;
extern MethodInfo RuntimeHelpers_InitializeArray_m483_MethodInfo;
extern MethodInfo Screen_get_dpi_m484_MethodInfo;
extern MethodInfo Matrix4x4_TRS_m485_MethodInfo;
extern MethodInfo Material_SetPass_m486_MethodInfo;
extern MethodInfo GL_LoadPixelMatrix_m487_MethodInfo;
extern MethodInfo GL_Begin_m488_MethodInfo;
extern MethodInfo GL_Vertex3_m489_MethodInfo;
extern MethodInfo GL_End_m490_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t68____$$fieldU2D0_0_FieldInfo;


// System.Void CardboardUILayer::.ctor()
extern "C" void CardboardUILayer__ctor_m143 (CardboardUILayer_t27 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Shader_t81 * L_0 = Shader_Find_m343(NULL /*static, unused*/, (String_t*) &_stringLiteral26, /*hidden argument*/&Shader_Find_m343_MethodInfo);
		Material_t50 * L_1 = (Material_t50 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t50_il2cpp_TypeInfo));
		Material__ctor_m344(L_1, L_0, /*hidden argument*/&Material__ctor_m344_MethodInfo);
		__this->___material_10 = L_1;
		Material_t50 * L_2 = (__this->___material_10);
		Color_t12  L_3 = {0};
		Color__ctor_m482(&L_3, (0.8f), (0.8f), (0.8f), /*hidden argument*/&Color__ctor_m482_MethodInfo);
		NullCheck(L_2);
		Material_set_color_m288(L_2, L_3, /*hidden argument*/&Material_set_color_m288_MethodInfo);
		bool L_4 = Application_get_isEditor_m407(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m407_MethodInfo);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		CardboardUILayer_ComputeMatrix_m145(__this, /*hidden argument*/&CardboardUILayer_ComputeMatrix_m145_MethodInfo);
	}

IL_004a:
	{
		return;
	}
}
// System.Void CardboardUILayer::.cctor()
extern MethodInfo CardboardUILayer__cctor_m144_MethodInfo;
extern TypeInfo* SingleU5BU5D_t47_il2cpp_TypeInfo_var;
extern "C" void CardboardUILayer__cctor_m144 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool CardboardUILayer__cctor_m144_init;
	if (!CardboardUILayer__cctor_m144_init)
	{
		SingleU5BU5D_t47_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&SingleU5BU5D_t47_0_0_0);
		CardboardUILayer__cctor_m144_init = true;
	}
	{
		SingleU5BU5D_t47* L_0 = ((SingleU5BU5D_t47*)SZArrayNew(SingleU5BU5D_t47_il2cpp_TypeInfo_var, 5));
		RuntimeHelpers_InitializeArray_m483(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t68____$$fieldU2D0_0_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m483_MethodInfo);
		((CardboardUILayer_t27_StaticFields*)InitializedTypeInfo(&CardboardUILayer_t27_il2cpp_TypeInfo)->static_fields)->___Angles_9 = L_0;
		return;
	}
}
// System.Void CardboardUILayer::ComputeMatrix()
extern "C" void CardboardUILayer_ComputeMatrix_m145 (CardboardUILayer_t27 * __this, MethodInfo* method)
{
	{
		float L_0 = Screen_get_dpi_m484(NULL /*static, unused*/, /*hidden argument*/&Screen_get_dpi_m484_MethodInfo);
		__this->___centerWidthPx_11 = ((float)((float)((float)((float)(0.025f)*(float)L_0))/(float)(2.0f)));
		float L_1 = Screen_get_dpi_m484(NULL /*static, unused*/, /*hidden argument*/&Screen_get_dpi_m484_MethodInfo);
		__this->___buttonWidthPx_12 = ((float)((float)((float)((float)(0.175f)*(float)L_1))/(float)(2.0f)));
		float L_2 = (__this->___buttonWidthPx_12);
		int32_t L_3 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m316_MethodInfo);
		__this->___xScale_13 = ((float)((float)L_2/(float)(((float)L_3))));
		float L_4 = (__this->___buttonWidthPx_12);
		int32_t L_5 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		__this->___yScale_14 = ((float)((float)L_4/(float)(((float)L_5))));
		float L_6 = (__this->___yScale_14);
		Vector3_t3  L_7 = {0};
		Vector3__ctor_m352(&L_7, (0.5f), L_6, (0.0f), /*hidden argument*/&Vector3__ctor_m352_MethodInfo);
		Quaternion_t33  L_8 = Quaternion_get_identity_m455(NULL /*static, unused*/, /*hidden argument*/&Quaternion_get_identity_m455_MethodInfo);
		float L_9 = (__this->___xScale_13);
		float L_10 = (__this->___yScale_14);
		Vector3_t3  L_11 = {0};
		Vector3__ctor_m352(&L_11, L_9, L_10, (1.0f), /*hidden argument*/&Vector3__ctor_m352_MethodInfo);
		Matrix4x4_t32  L_12 = Matrix4x4_TRS_m485(NULL /*static, unused*/, L_7, L_8, L_11, /*hidden argument*/&Matrix4x4_TRS_m485_MethodInfo);
		__this->___xfm_15 = L_12;
		return;
	}
}
// System.Void CardboardUILayer::Draw()
extern "C" void CardboardUILayer_Draw_m146 (CardboardUILayer_t27 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_0 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_NativeUILayerSupported_m71(L_0, /*hidden argument*/&Cardboard_get_NativeUILayerSupported_m71_MethodInfo);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Color_t12  L_2 = Color_get_black_m392(NULL /*static, unused*/, /*hidden argument*/&Color_get_black_m392_MethodInfo);
		GL_Clear_m325(NULL /*static, unused*/, 1, 0, L_2, /*hidden argument*/&GL_Clear_m325_MethodInfo);
		Material_t50 * L_3 = (__this->___material_10);
		NullCheck(L_3);
		Material_SetPass_m486(L_3, 0, /*hidden argument*/&Material_SetPass_m486_MethodInfo);
		bool L_4 = Application_get_isEditor_m407(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m407_MethodInfo);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		CardboardUILayer_ComputeMatrix_m145(__this, /*hidden argument*/&CardboardUILayer_ComputeMatrix_m145_MethodInfo);
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_5 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_5);
		bool L_6 = Cardboard_get_EnableAlignmentMarker_m57(L_5, /*hidden argument*/&Cardboard_get_EnableAlignmentMarker_m57_MethodInfo);
		if (!L_6)
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_7 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m316_MethodInfo);
		V_0 = ((int32_t)((int32_t)L_7/(int32_t)2));
		float L_8 = (__this->___centerWidthPx_11);
		V_1 = (((int32_t)L_8));
		float L_9 = (__this->___buttonWidthPx_12);
		V_2 = (((int32_t)((float)((float)(3.0f)*(float)L_9))));
		GL_PushMatrix_m445(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m445_MethodInfo);
		GL_LoadPixelMatrix_m487(NULL /*static, unused*/, /*hidden argument*/&GL_LoadPixelMatrix_m487_MethodInfo);
		GL_Begin_m488(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m488_MethodInfo);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		GL_Vertex3_m489(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_10-(int32_t)L_11)))), (((float)L_12)), (0.0f), /*hidden argument*/&GL_Vertex3_m489_MethodInfo);
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		int32_t L_16 = V_2;
		GL_Vertex3_m489(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_13-(int32_t)L_14)))), (((float)((int32_t)((int32_t)L_15-(int32_t)L_16)))), (0.0f), /*hidden argument*/&GL_Vertex3_m489_MethodInfo);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		int32_t L_20 = V_2;
		GL_Vertex3_m489(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_17+(int32_t)L_18)))), (((float)((int32_t)((int32_t)L_19-(int32_t)L_20)))), (0.0f), /*hidden argument*/&GL_Vertex3_m489_MethodInfo);
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		GL_Vertex3_m489(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_21+(int32_t)L_22)))), (((float)L_23)), (0.0f), /*hidden argument*/&GL_Vertex3_m489_MethodInfo);
		GL_End_m490(NULL /*static, unused*/, /*hidden argument*/&GL_End_m490_MethodInfo);
		GL_PopMatrix_m449(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m449_MethodInfo);
	}

IL_00cc:
	{
		return;
	}
}
// GazeInputModule
#include "AssemblyU2DCSharp_GazeInputModule.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GazeInputModule_t53_il2cpp_TypeInfo;
// GazeInputModule
#include "AssemblyU2DCSharp_GazeInputModuleMethodDeclarations.h"

// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystem.h"
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_0.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_1.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_2.h"
extern TypeInfo BaseInputModule_t54_il2cpp_TypeInfo;
extern TypeInfo BaseEventData_t90_il2cpp_TypeInfo;
extern TypeInfo PointerEventData_t52_il2cpp_TypeInfo;
extern TypeInfo List_1_t91_il2cpp_TypeInfo;
extern TypeInfo ExecuteEvents_t92_il2cpp_TypeInfo;
extern TypeInfo RaycastResult_t93_il2cpp_TypeInfo;
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModuleMethodDeclarations.h"
// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystemMethodDeclarations.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventDataMethodDeclarations.h"
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventDataMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResultMethodDeclarations.h"
// UnityEngine.EventSystems.ExecuteEvents
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEventsMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern Il2CppType List_1_t91_0_0_0;
extern MethodInfo BaseInputModule__ctor_m491_MethodInfo;
extern MethodInfo BaseInputModule_ShouldActivateModule_m492_MethodInfo;
extern MethodInfo BaseInputModule_DeactivateModule_m493_MethodInfo;
extern MethodInfo GazeInputModule_HandlePendingClick_m155_MethodInfo;
extern MethodInfo BaseInputModule_HandlePointerExitAndEnter_m494_MethodInfo;
extern MethodInfo BaseInputModule_get_eventSystem_m495_MethodInfo;
extern MethodInfo BaseInputModule_GetBaseEventData_m496_MethodInfo;
extern MethodInfo EventSystem_SetSelectedGameObject_m497_MethodInfo;
extern MethodInfo GameObject_SetActive_m498_MethodInfo;
extern MethodInfo PointerEventData_get_pointerEnter_m499_MethodInfo;
extern MethodInfo GazeInputModule_CastRayFromGaze_m152_MethodInfo;
extern MethodInfo GazeInputModule_UpdateCurrentObject_m153_MethodInfo;
extern MethodInfo GazeInputModule_PlaceCursor_m154_MethodInfo;
extern MethodInfo GazeInputModule_HandleTrigger_m156_MethodInfo;
extern MethodInfo PointerEventData__ctor_m500_MethodInfo;
extern MethodInfo BaseEventData_Reset_m501_MethodInfo;
extern MethodInfo PointerEventData_set_position_m502_MethodInfo;
extern MethodInfo EventSystem_RaycastAll_m503_MethodInfo;
extern MethodInfo BaseInputModule_FindFirstRaycast_m504_MethodInfo;
extern MethodInfo PointerEventData_set_pointerCurrentRaycast_m505_MethodInfo;
extern MethodInfo List_1_Clear_m506_MethodInfo;
extern MethodInfo PointerEventData_get_pointerCurrentRaycast_m507_MethodInfo;
extern MethodInfo RaycastResult_get_gameObject_m508_MethodInfo;
extern MethodInfo EventSystem_get_currentSelectedGameObject_m509_MethodInfo;
extern MethodInfo ExecuteEvents_get_updateSelectedHandler_m510_MethodInfo;
extern MethodInfo PointerEventData_get_enterEventCamera_m511_MethodInfo;
extern MethodInfo PointerEventData_get_eligibleForClick_m512_MethodInfo;
extern MethodInfo Time_get_unscaledTime_m513_MethodInfo;
extern MethodInfo PointerEventData_get_clickTime_m514_MethodInfo;
extern MethodInfo Input_GetMouseButton_m515_MethodInfo;
extern MethodInfo PointerEventData_get_pointerPress_m516_MethodInfo;
extern MethodInfo ExecuteEvents_get_pointerUpHandler_m517_MethodInfo;
extern MethodInfo ExecuteEvents_get_pointerClickHandler_m518_MethodInfo;
extern MethodInfo PointerEventData_set_pointerPress_m519_MethodInfo;
extern MethodInfo PointerEventData_set_rawPointerPress_m520_MethodInfo;
extern MethodInfo PointerEventData_set_eligibleForClick_m521_MethodInfo;
extern MethodInfo PointerEventData_set_clickCount_m522_MethodInfo;
extern MethodInfo PointerEventData_get_position_m523_MethodInfo;
extern MethodInfo PointerEventData_set_pressPosition_m524_MethodInfo;
extern MethodInfo PointerEventData_set_pointerPressRaycast_m525_MethodInfo;
extern MethodInfo ExecuteEvents_get_pointerDownHandler_m526_MethodInfo;
extern MethodInfo PointerEventData_set_clickTime_m527_MethodInfo;
struct ExecuteEvents_t92;
// UnityEngine.EventSystems.ExecuteEvents
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents.h"
struct ExecuteEvents_t92;
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern "C" GameObject_t51 * ExecuteEvents_GetEventHandler_TisObject_t_m529_gshared (Object_t * __this /* static, unused */, GameObject_t51 * p0, MethodInfo* method);
#define ExecuteEvents_GetEventHandler_TisObject_t_m529(__this /* static, unused */, p0, method) (( GameObject_t51 * (*) (Object_t * /* static, unused */, GameObject_t51 *, MethodInfo*))ExecuteEvents_GetEventHandler_TisObject_t_m529_gshared)(__this /* static, unused */, p0, method)
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.ISelectHandler>(UnityEngine.GameObject)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.ISelectHandler>(UnityEngine.GameObject)
#define ExecuteEvents_GetEventHandler_TisISelectHandler_t94_m528(__this /* static, unused */, p0, method) (( GameObject_t51 * (*) (Object_t * /* static, unused */, GameObject_t51 *, MethodInfo*))ExecuteEvents_GetEventHandler_TisObject_t_m529_gshared)(__this /* static, unused */, p0, method)
struct ExecuteEvents_t92;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
struct ExecuteEvents_t92;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_3.h"
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
extern "C" bool ExecuteEvents_Execute_TisObject_t_m531_gshared (Object_t * __this /* static, unused */, GameObject_t51 * p0, BaseEventData_t90 * p1, EventFunction_1_t96 * p2, MethodInfo* method);
#define ExecuteEvents_Execute_TisObject_t_m531(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t51 *, BaseEventData_t90 *, EventFunction_1_t96 *, MethodInfo*))ExecuteEvents_Execute_TisObject_t_m531_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IUpdateSelectedHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IUpdateSelectedHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIUpdateSelectedHandler_t95_m530(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t51 *, BaseEventData_t90 *, EventFunction_1_t97 *, MethodInfo*))ExecuteEvents_Execute_TisObject_t_m531_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct ExecuteEvents_t92;
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIPointerUpHandler_t98_m532(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t51 *, BaseEventData_t90 *, EventFunction_1_t99 *, MethodInfo*))ExecuteEvents_Execute_TisObject_t_m531_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct ExecuteEvents_t92;
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIPointerClickHandler_t100_m533(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t51 *, BaseEventData_t90 *, EventFunction_1_t101 *, MethodInfo*))ExecuteEvents_Execute_TisObject_t_m531_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct ExecuteEvents_t92;
// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_2.h"
struct ExecuteEvents_t92;
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
extern "C" GameObject_t51 * ExecuteEvents_ExecuteHierarchy_TisObject_t_m535_gshared (Object_t * __this /* static, unused */, GameObject_t51 * p0, BaseEventData_t90 * p1, EventFunction_1_t96 * p2, MethodInfo* method);
#define ExecuteEvents_ExecuteHierarchy_TisObject_t_m535(__this /* static, unused */, p0, p1, p2, method) (( GameObject_t51 * (*) (Object_t * /* static, unused */, GameObject_t51 *, BaseEventData_t90 *, EventFunction_1_t96 *, MethodInfo*))ExecuteEvents_ExecuteHierarchy_TisObject_t_m535_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t102_m534(__this /* static, unused */, p0, p1, p2, method) (( GameObject_t51 * (*) (Object_t * /* static, unused */, GameObject_t51 *, BaseEventData_t90 *, EventFunction_1_t103 *, MethodInfo*))ExecuteEvents_ExecuteHierarchy_TisObject_t_m535_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct ExecuteEvents_t92;
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject)
#define ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t100_m536(__this /* static, unused */, p0, method) (( GameObject_t51 * (*) (Object_t * /* static, unused */, GameObject_t51 *, MethodInfo*))ExecuteEvents_GetEventHandler_TisObject_t_m529_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod List_1_Clear_m506_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_GetEventHandler_TisISelectHandler_t94_m528_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_Execute_TisIUpdateSelectedHandler_t95_m530_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_Execute_TisIPointerUpHandler_t98_m532_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_Execute_TisIPointerClickHandler_t100_m533_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t102_m534_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t100_m536_GenericMethod;


// System.Void GazeInputModule::.ctor()
extern MethodInfo GazeInputModule__ctor_m147_MethodInfo;
extern "C" void GazeInputModule__ctor_m147 (GazeInputModule_t53 * __this, MethodInfo* method)
{
	{
		__this->___clickTime_8 = (0.1f);
		Vector2_t15  L_0 = {0};
		Vector2__ctor_m336(&L_0, (0.5f), (0.5f), /*hidden argument*/&Vector2__ctor_m336_MethodInfo);
		__this->___hotspot_9 = L_0;
		BaseInputModule__ctor_m491(__this, /*hidden argument*/&BaseInputModule__ctor_m491_MethodInfo);
		return;
	}
}
// System.Boolean GazeInputModule::ShouldActivateModule()
extern MethodInfo GazeInputModule_ShouldActivateModule_m148_MethodInfo;
extern "C" bool GazeInputModule_ShouldActivateModule_m148 (GazeInputModule_t53 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		bool L_0 = BaseInputModule_ShouldActivateModule_m492(__this, /*hidden argument*/&BaseInputModule_ShouldActivateModule_m492_MethodInfo);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_VRModeEnabled_m55(L_1, /*hidden argument*/&Cardboard_get_VRModeEnabled_m55_MethodInfo);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = (__this->___vrModeOnly_6);
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = 1;
	}

IL_0028:
	{
		return G_B5_0;
	}
}
// System.Void GazeInputModule::DeactivateModule()
extern MethodInfo GazeInputModule_DeactivateModule_m149_MethodInfo;
extern "C" void GazeInputModule_DeactivateModule_m149 (GazeInputModule_t53 * __this, MethodInfo* method)
{
	{
		BaseInputModule_DeactivateModule_m493(__this, /*hidden argument*/&BaseInputModule_DeactivateModule_m493_MethodInfo);
		PointerEventData_t52 * L_0 = (__this->___pointerData_10);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		GazeInputModule_HandlePendingClick_m155(__this, /*hidden argument*/&GazeInputModule_HandlePendingClick_m155_MethodInfo);
		PointerEventData_t52 * L_1 = (__this->___pointerData_10);
		BaseInputModule_HandlePointerExitAndEnter_m494(__this, L_1, (GameObject_t51 *)NULL, /*hidden argument*/&BaseInputModule_HandlePointerExitAndEnter_m494_MethodInfo);
		__this->___pointerData_10 = (PointerEventData_t52 *)NULL;
	}

IL_002b:
	{
		EventSystem_t104 * L_2 = BaseInputModule_get_eventSystem_m495(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m495_MethodInfo);
		BaseEventData_t90 * L_3 = (BaseEventData_t90 *)VirtFuncInvoker0< BaseEventData_t90 * >::Invoke(&BaseInputModule_GetBaseEventData_m496_MethodInfo, __this);
		NullCheck(L_2);
		EventSystem_SetSelectedGameObject_m497(L_2, (GameObject_t51 *)NULL, L_3, /*hidden argument*/&EventSystem_SetSelectedGameObject_m497_MethodInfo);
		GameObject_t51 * L_4 = (__this->___cursor_7);
		bool L_5 = Object_op_Inequality_m312(NULL /*static, unused*/, L_4, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		GameObject_t51 * L_6 = (__this->___cursor_7);
		NullCheck(L_6);
		GameObject_SetActive_m498(L_6, 0, /*hidden argument*/&GameObject_SetActive_m498_MethodInfo);
	}

IL_005a:
	{
		return;
	}
}
// System.Boolean GazeInputModule::IsPointerOverGameObject(System.Int32)
extern MethodInfo GazeInputModule_IsPointerOverGameObject_m150_MethodInfo;
extern "C" bool GazeInputModule_IsPointerOverGameObject_m150 (GazeInputModule_t53 * __this, int32_t ___pointerId, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		PointerEventData_t52 * L_0 = (__this->___pointerData_10);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		PointerEventData_t52 * L_1 = (__this->___pointerData_10);
		NullCheck(L_1);
		GameObject_t51 * L_2 = PointerEventData_get_pointerEnter_m499(L_1, /*hidden argument*/&PointerEventData_get_pointerEnter_m499_MethodInfo);
		bool L_3 = Object_op_Inequality_m312(NULL /*static, unused*/, L_2, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Void GazeInputModule::Process()
extern MethodInfo GazeInputModule_Process_m151_MethodInfo;
extern "C" void GazeInputModule_Process_m151 (GazeInputModule_t53 * __this, MethodInfo* method)
{
	{
		GazeInputModule_CastRayFromGaze_m152(__this, /*hidden argument*/&GazeInputModule_CastRayFromGaze_m152_MethodInfo);
		GazeInputModule_UpdateCurrentObject_m153(__this, /*hidden argument*/&GazeInputModule_UpdateCurrentObject_m153_MethodInfo);
		GazeInputModule_PlaceCursor_m154(__this, /*hidden argument*/&GazeInputModule_PlaceCursor_m154_MethodInfo);
		GazeInputModule_HandlePendingClick_m155(__this, /*hidden argument*/&GazeInputModule_HandlePendingClick_m155_MethodInfo);
		GazeInputModule_HandleTrigger_m156(__this, /*hidden argument*/&GazeInputModule_HandleTrigger_m156_MethodInfo);
		return;
	}
}
// System.Void GazeInputModule::CastRayFromGaze()
extern MethodInfo* List_1_Clear_m506_MethodInfo_var;
extern "C" void GazeInputModule_CastRayFromGaze_m152 (GazeInputModule_t53 * __this, MethodInfo* method)
{
	static bool GazeInputModule_CastRayFromGaze_m152_init;
	if (!GazeInputModule_CastRayFromGaze_m152_init)
	{
		List_1_Clear_m506_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m506_GenericMethod);
		GazeInputModule_CastRayFromGaze_m152_init = true;
	}
	{
		PointerEventData_t52 * L_0 = (__this->___pointerData_10);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		EventSystem_t104 * L_1 = BaseInputModule_get_eventSystem_m495(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m495_MethodInfo);
		PointerEventData_t52 * L_2 = (PointerEventData_t52 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PointerEventData_t52_il2cpp_TypeInfo));
		PointerEventData__ctor_m500(L_2, L_1, /*hidden argument*/&PointerEventData__ctor_m500_MethodInfo);
		__this->___pointerData_10 = L_2;
	}

IL_001c:
	{
		PointerEventData_t52 * L_3 = (__this->___pointerData_10);
		NullCheck(L_3);
		BaseEventData_Reset_m501(L_3, /*hidden argument*/&BaseEventData_Reset_m501_MethodInfo);
		PointerEventData_t52 * L_4 = (__this->___pointerData_10);
		Vector2_t15 * L_5 = &(__this->___hotspot_9);
		float L_6 = (L_5->___x_1);
		int32_t L_7 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m316_MethodInfo);
		Vector2_t15 * L_8 = &(__this->___hotspot_9);
		float L_9 = (L_8->___y_2);
		int32_t L_10 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		Vector2_t15  L_11 = {0};
		Vector2__ctor_m336(&L_11, ((float)((float)L_6*(float)(((float)L_7)))), ((float)((float)L_9*(float)(((float)L_10)))), /*hidden argument*/&Vector2__ctor_m336_MethodInfo);
		NullCheck(L_4);
		PointerEventData_set_position_m502(L_4, L_11, /*hidden argument*/&PointerEventData_set_position_m502_MethodInfo);
		EventSystem_t104 * L_12 = BaseInputModule_get_eventSystem_m495(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m495_MethodInfo);
		PointerEventData_t52 * L_13 = (__this->___pointerData_10);
		List_1_t91 * L_14 = (__this->___m_RaycastResultCache_2);
		NullCheck(L_12);
		EventSystem_RaycastAll_m503(L_12, L_13, L_14, /*hidden argument*/&EventSystem_RaycastAll_m503_MethodInfo);
		PointerEventData_t52 * L_15 = (__this->___pointerData_10);
		List_1_t91 * L_16 = (__this->___m_RaycastResultCache_2);
		RaycastResult_t93  L_17 = BaseInputModule_FindFirstRaycast_m504(NULL /*static, unused*/, L_16, /*hidden argument*/&BaseInputModule_FindFirstRaycast_m504_MethodInfo);
		NullCheck(L_15);
		PointerEventData_set_pointerCurrentRaycast_m505(L_15, L_17, /*hidden argument*/&PointerEventData_set_pointerCurrentRaycast_m505_MethodInfo);
		List_1_t91 * L_18 = (__this->___m_RaycastResultCache_2);
		NullCheck(L_18);
		VirtActionInvoker0::Invoke(List_1_Clear_m506_MethodInfo_var, L_18);
		return;
	}
}
// System.Void GazeInputModule::UpdateCurrentObject()
extern MethodInfo* ExecuteEvents_GetEventHandler_TisISelectHandler_t94_m528_MethodInfo_var;
extern MethodInfo* ExecuteEvents_Execute_TisIUpdateSelectedHandler_t95_m530_MethodInfo_var;
extern "C" void GazeInputModule_UpdateCurrentObject_m153 (GazeInputModule_t53 * __this, MethodInfo* method)
{
	static bool GazeInputModule_UpdateCurrentObject_m153_init;
	if (!GazeInputModule_UpdateCurrentObject_m153_init)
	{
		ExecuteEvents_GetEventHandler_TisISelectHandler_t94_m528_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_GetEventHandler_TisISelectHandler_t94_m528_GenericMethod);
		ExecuteEvents_Execute_TisIUpdateSelectedHandler_t95_m530_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIUpdateSelectedHandler_t95_m530_GenericMethod);
		GazeInputModule_UpdateCurrentObject_m153_init = true;
	}
	GameObject_t51 * V_0 = {0};
	GameObject_t51 * V_1 = {0};
	RaycastResult_t93  V_2 = {0};
	{
		PointerEventData_t52 * L_0 = (__this->___pointerData_10);
		NullCheck(L_0);
		RaycastResult_t93  L_1 = PointerEventData_get_pointerCurrentRaycast_m507(L_0, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m507_MethodInfo);
		V_2 = L_1;
		GameObject_t51 * L_2 = RaycastResult_get_gameObject_m508((&V_2), /*hidden argument*/&RaycastResult_get_gameObject_m508_MethodInfo);
		V_0 = L_2;
		PointerEventData_t52 * L_3 = (__this->___pointerData_10);
		GameObject_t51 * L_4 = V_0;
		BaseInputModule_HandlePointerExitAndEnter_m494(__this, L_3, L_4, /*hidden argument*/&BaseInputModule_HandlePointerExitAndEnter_m494_MethodInfo);
		GameObject_t51 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t92_il2cpp_TypeInfo));
		GameObject_t51 * L_6 = ExecuteEvents_GetEventHandler_TisISelectHandler_t94_m528(NULL /*static, unused*/, L_5, /*hidden argument*/ExecuteEvents_GetEventHandler_TisISelectHandler_t94_m528_MethodInfo_var);
		V_1 = L_6;
		GameObject_t51 * L_7 = V_1;
		EventSystem_t104 * L_8 = BaseInputModule_get_eventSystem_m495(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m495_MethodInfo);
		NullCheck(L_8);
		GameObject_t51 * L_9 = EventSystem_get_currentSelectedGameObject_m509(L_8, /*hidden argument*/&EventSystem_get_currentSelectedGameObject_m509_MethodInfo);
		bool L_10 = Object_op_Equality_m306(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		EventSystem_t104 * L_11 = BaseInputModule_get_eventSystem_m495(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m495_MethodInfo);
		NullCheck(L_11);
		GameObject_t51 * L_12 = EventSystem_get_currentSelectedGameObject_m509(L_11, /*hidden argument*/&EventSystem_get_currentSelectedGameObject_m509_MethodInfo);
		BaseEventData_t90 * L_13 = (BaseEventData_t90 *)VirtFuncInvoker0< BaseEventData_t90 * >::Invoke(&BaseInputModule_GetBaseEventData_m496_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t92_il2cpp_TypeInfo));
		EventFunction_1_t97 * L_14 = ExecuteEvents_get_updateSelectedHandler_m510(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_updateSelectedHandler_m510_MethodInfo);
		ExecuteEvents_Execute_TisIUpdateSelectedHandler_t95_m530(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/ExecuteEvents_Execute_TisIUpdateSelectedHandler_t95_m530_MethodInfo_var);
		goto IL_0071;
	}

IL_005f:
	{
		EventSystem_t104 * L_15 = BaseInputModule_get_eventSystem_m495(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m495_MethodInfo);
		PointerEventData_t52 * L_16 = (__this->___pointerData_10);
		NullCheck(L_15);
		EventSystem_SetSelectedGameObject_m497(L_15, (GameObject_t51 *)NULL, L_16, /*hidden argument*/&EventSystem_SetSelectedGameObject_m497_MethodInfo);
	}

IL_0071:
	{
		return;
	}
}
// System.Void GazeInputModule::PlaceCursor()
extern "C" void GazeInputModule_PlaceCursor_m154 (GazeInputModule_t53 * __this, MethodInfo* method)
{
	GameObject_t51 * V_0 = {0};
	Camera_t35 * V_1 = {0};
	float V_2 = 0.0f;
	RaycastResult_t93  V_3 = {0};
	RaycastResult_t93  V_4 = {0};
	{
		GameObject_t51 * L_0 = (__this->___cursor_7);
		bool L_1 = Object_op_Equality_m306(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		PointerEventData_t52 * L_2 = (__this->___pointerData_10);
		NullCheck(L_2);
		RaycastResult_t93  L_3 = PointerEventData_get_pointerCurrentRaycast_m507(L_2, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m507_MethodInfo);
		V_3 = L_3;
		GameObject_t51 * L_4 = RaycastResult_get_gameObject_m508((&V_3), /*hidden argument*/&RaycastResult_get_gameObject_m508_MethodInfo);
		V_0 = L_4;
		GameObject_t51 * L_5 = (__this->___cursor_7);
		GameObject_t51 * L_6 = V_0;
		bool L_7 = Object_op_Inequality_m312(NULL /*static, unused*/, L_6, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		NullCheck(L_5);
		GameObject_SetActive_m498(L_5, L_7, /*hidden argument*/&GameObject_SetActive_m498_MethodInfo);
		GameObject_t51 * L_8 = (__this->___cursor_7);
		NullCheck(L_8);
		bool L_9 = GameObject_get_activeInHierarchy_m309(L_8, /*hidden argument*/&GameObject_get_activeInHierarchy_m309_MethodInfo);
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		PointerEventData_t52 * L_10 = (__this->___pointerData_10);
		NullCheck(L_10);
		Camera_t35 * L_11 = PointerEventData_get_enterEventCamera_m511(L_10, /*hidden argument*/&PointerEventData_get_enterEventCamera_m511_MethodInfo);
		V_1 = L_11;
		PointerEventData_t52 * L_12 = (__this->___pointerData_10);
		NullCheck(L_12);
		RaycastResult_t93  L_13 = PointerEventData_get_pointerCurrentRaycast_m507(L_12, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m507_MethodInfo);
		V_4 = L_13;
		float L_14 = ((&V_4)->___distance_2);
		Camera_t35 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = Camera_get_nearClipPlane_m423(L_15, /*hidden argument*/&Camera_get_nearClipPlane_m423_MethodInfo);
		V_2 = ((float)((float)L_14+(float)L_16));
		GameObject_t51 * L_17 = (__this->___cursor_7);
		NullCheck(L_17);
		Transform_t38 * L_18 = GameObject_get_transform_m362(L_17, /*hidden argument*/&GameObject_get_transform_m362_MethodInfo);
		Camera_t35 * L_19 = V_1;
		NullCheck(L_19);
		Transform_t38 * L_20 = Component_get_transform_m283(L_19, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		NullCheck(L_20);
		Vector3_t3  L_21 = Transform_get_position_m467(L_20, /*hidden argument*/&Transform_get_position_m467_MethodInfo);
		Camera_t35 * L_22 = V_1;
		NullCheck(L_22);
		Transform_t38 * L_23 = Component_get_transform_m283(L_22, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		NullCheck(L_23);
		Vector3_t3  L_24 = Transform_get_forward_m468(L_23, /*hidden argument*/&Transform_get_forward_m468_MethodInfo);
		float L_25 = V_2;
		Vector3_t3  L_26 = Vector3_op_Multiply_m293(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/&Vector3_op_Multiply_m293_MethodInfo);
		Vector3_t3  L_27 = Vector3_op_Addition_m422(NULL /*static, unused*/, L_21, L_26, /*hidden argument*/&Vector3_op_Addition_m422_MethodInfo);
		NullCheck(L_18);
		Transform_set_position_m474(L_18, L_27, /*hidden argument*/&Transform_set_position_m474_MethodInfo);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void GazeInputModule::HandlePendingClick()
extern MethodInfo* ExecuteEvents_Execute_TisIPointerUpHandler_t98_m532_MethodInfo_var;
extern MethodInfo* ExecuteEvents_Execute_TisIPointerClickHandler_t100_m533_MethodInfo_var;
extern "C" void GazeInputModule_HandlePendingClick_m155 (GazeInputModule_t53 * __this, MethodInfo* method)
{
	static bool GazeInputModule_HandlePendingClick_m155_init;
	if (!GazeInputModule_HandlePendingClick_m155_init)
	{
		ExecuteEvents_Execute_TisIPointerUpHandler_t98_m532_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIPointerUpHandler_t98_m532_GenericMethod);
		ExecuteEvents_Execute_TisIPointerClickHandler_t100_m533_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIPointerClickHandler_t100_m533_GenericMethod);
		GazeInputModule_HandlePendingClick_m155_init = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B8_0 = false;
	bool G_B7_0 = false;
	int32_t G_B9_0 = 0;
	bool G_B9_1 = false;
	{
		PointerEventData_t52 * L_0 = (__this->___pointerData_10);
		NullCheck(L_0);
		bool L_1 = PointerEventData_get_eligibleForClick_m512(L_0, /*hidden argument*/&PointerEventData_get_eligibleForClick_m512_MethodInfo);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_2 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_2);
		bool L_3 = Cardboard_get_Triggered_m84(L_2, /*hidden argument*/&Cardboard_get_Triggered_m84_MethodInfo);
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		float L_4 = Time_get_unscaledTime_m513(NULL /*static, unused*/, /*hidden argument*/&Time_get_unscaledTime_m513_MethodInfo);
		PointerEventData_t52 * L_5 = (__this->___pointerData_10);
		NullCheck(L_5);
		float L_6 = PointerEventData_get_clickTime_m514(L_5, /*hidden argument*/&PointerEventData_get_clickTime_m514_MethodInfo);
		float L_7 = (__this->___clickTime_8);
		G_B5_0 = ((((float)((float)((float)L_4-(float)L_6))) < ((float)L_7))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = G_B5_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_8 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_8);
		bool L_9 = Cardboard_get_TapIsTrigger_m61(L_8, /*hidden argument*/&Cardboard_get_TapIsTrigger_m61_MethodInfo);
		if (L_9)
		{
			goto IL_0063;
		}
	}
	{
		bool L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t86_il2cpp_TypeInfo));
		bool L_11 = Input_GetMouseButtonDown_m387(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m387_MethodInfo);
		G_B7_0 = L_10;
		if (L_11)
		{
			G_B8_0 = L_10;
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t86_il2cpp_TypeInfo));
		bool L_12 = Input_GetMouseButton_m515(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m515_MethodInfo);
		G_B9_0 = ((int32_t)(L_12));
		G_B9_1 = G_B7_0;
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0061:
	{
		V_0 = ((int32_t)((int32_t)G_B9_1|(int32_t)G_B9_0));
	}

IL_0063:
	{
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		return;
	}

IL_006a:
	{
		PointerEventData_t52 * L_14 = (__this->___pointerData_10);
		NullCheck(L_14);
		GameObject_t51 * L_15 = PointerEventData_get_pointerPress_m516(L_14, /*hidden argument*/&PointerEventData_get_pointerPress_m516_MethodInfo);
		PointerEventData_t52 * L_16 = (__this->___pointerData_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t92_il2cpp_TypeInfo));
		EventFunction_1_t99 * L_17 = ExecuteEvents_get_pointerUpHandler_m517(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_pointerUpHandler_m517_MethodInfo);
		ExecuteEvents_Execute_TisIPointerUpHandler_t98_m532(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/ExecuteEvents_Execute_TisIPointerUpHandler_t98_m532_MethodInfo_var);
		PointerEventData_t52 * L_18 = (__this->___pointerData_10);
		NullCheck(L_18);
		GameObject_t51 * L_19 = PointerEventData_get_pointerPress_m516(L_18, /*hidden argument*/&PointerEventData_get_pointerPress_m516_MethodInfo);
		PointerEventData_t52 * L_20 = (__this->___pointerData_10);
		EventFunction_1_t101 * L_21 = ExecuteEvents_get_pointerClickHandler_m518(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_pointerClickHandler_m518_MethodInfo);
		ExecuteEvents_Execute_TisIPointerClickHandler_t100_m533(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/ExecuteEvents_Execute_TisIPointerClickHandler_t100_m533_MethodInfo_var);
		PointerEventData_t52 * L_22 = (__this->___pointerData_10);
		NullCheck(L_22);
		PointerEventData_set_pointerPress_m519(L_22, (GameObject_t51 *)NULL, /*hidden argument*/&PointerEventData_set_pointerPress_m519_MethodInfo);
		PointerEventData_t52 * L_23 = (__this->___pointerData_10);
		NullCheck(L_23);
		PointerEventData_set_rawPointerPress_m520(L_23, (GameObject_t51 *)NULL, /*hidden argument*/&PointerEventData_set_rawPointerPress_m520_MethodInfo);
		PointerEventData_t52 * L_24 = (__this->___pointerData_10);
		NullCheck(L_24);
		PointerEventData_set_eligibleForClick_m521(L_24, 0, /*hidden argument*/&PointerEventData_set_eligibleForClick_m521_MethodInfo);
		PointerEventData_t52 * L_25 = (__this->___pointerData_10);
		NullCheck(L_25);
		PointerEventData_set_clickCount_m522(L_25, 0, /*hidden argument*/&PointerEventData_set_clickCount_m522_MethodInfo);
		return;
	}
}
// System.Void GazeInputModule::HandleTrigger()
extern MethodInfo* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t102_m534_MethodInfo_var;
extern MethodInfo* ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t100_m536_MethodInfo_var;
extern "C" void GazeInputModule_HandleTrigger_m156 (GazeInputModule_t53 * __this, MethodInfo* method)
{
	static bool GazeInputModule_HandleTrigger_m156_init;
	if (!GazeInputModule_HandleTrigger_m156_init)
	{
		ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t102_m534_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t102_m534_GenericMethod);
		ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t100_m536_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t100_m536_GenericMethod);
		GazeInputModule_HandleTrigger_m156_init = true;
	}
	bool V_0 = false;
	GameObject_t51 * V_1 = {0};
	RaycastResult_t93  V_2 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	GameObject_t51 * G_B10_0 = {0};
	PointerEventData_t52 * G_B10_1 = {0};
	GameObject_t51 * G_B9_0 = {0};
	PointerEventData_t52 * G_B9_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_0 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_Triggered_m84(L_0, /*hidden argument*/&Cardboard_get_Triggered_m84_MethodInfo);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_2 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_2);
		bool L_3 = Cardboard_get_TapIsTrigger_m61(L_2, /*hidden argument*/&Cardboard_get_TapIsTrigger_m61_MethodInfo);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t86_il2cpp_TypeInfo));
		bool L_4 = Input_GetMouseButtonDown_m387(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m387_MethodInfo);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
	}

IL_0027:
	{
		G_B6_0 = G_B4_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B6_0 = 1;
	}

IL_002a:
	{
		V_0 = G_B6_0;
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		return;
	}

IL_0032:
	{
		PointerEventData_t52 * L_6 = (__this->___pointerData_10);
		NullCheck(L_6);
		RaycastResult_t93  L_7 = PointerEventData_get_pointerCurrentRaycast_m507(L_6, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m507_MethodInfo);
		V_2 = L_7;
		GameObject_t51 * L_8 = RaycastResult_get_gameObject_m508((&V_2), /*hidden argument*/&RaycastResult_get_gameObject_m508_MethodInfo);
		V_1 = L_8;
		PointerEventData_t52 * L_9 = (__this->___pointerData_10);
		PointerEventData_t52 * L_10 = (__this->___pointerData_10);
		NullCheck(L_10);
		Vector2_t15  L_11 = PointerEventData_get_position_m523(L_10, /*hidden argument*/&PointerEventData_get_position_m523_MethodInfo);
		NullCheck(L_9);
		PointerEventData_set_pressPosition_m524(L_9, L_11, /*hidden argument*/&PointerEventData_set_pressPosition_m524_MethodInfo);
		PointerEventData_t52 * L_12 = (__this->___pointerData_10);
		PointerEventData_t52 * L_13 = (__this->___pointerData_10);
		NullCheck(L_13);
		RaycastResult_t93  L_14 = PointerEventData_get_pointerCurrentRaycast_m507(L_13, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m507_MethodInfo);
		NullCheck(L_12);
		PointerEventData_set_pointerPressRaycast_m525(L_12, L_14, /*hidden argument*/&PointerEventData_set_pointerPressRaycast_m525_MethodInfo);
		PointerEventData_t52 * L_15 = (__this->___pointerData_10);
		GameObject_t51 * L_16 = V_1;
		PointerEventData_t52 * L_17 = (__this->___pointerData_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t92_il2cpp_TypeInfo));
		EventFunction_1_t103 * L_18 = ExecuteEvents_get_pointerDownHandler_m526(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_pointerDownHandler_m526_MethodInfo);
		GameObject_t51 * L_19 = ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t102_m534(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t102_m534_MethodInfo_var);
		GameObject_t51 * L_20 = L_19;
		G_B9_0 = L_20;
		G_B9_1 = L_15;
		if (L_20)
		{
			G_B10_0 = L_20;
			G_B10_1 = L_15;
			goto IL_0096;
		}
	}
	{
		GameObject_t51 * L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t92_il2cpp_TypeInfo));
		GameObject_t51 * L_22 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t100_m536(NULL /*static, unused*/, L_21, /*hidden argument*/ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t100_m536_MethodInfo_var);
		G_B10_0 = L_22;
		G_B10_1 = G_B9_1;
	}

IL_0096:
	{
		NullCheck(G_B10_1);
		PointerEventData_set_pointerPress_m519(G_B10_1, G_B10_0, /*hidden argument*/&PointerEventData_set_pointerPress_m519_MethodInfo);
		PointerEventData_t52 * L_23 = (__this->___pointerData_10);
		GameObject_t51 * L_24 = V_1;
		NullCheck(L_23);
		PointerEventData_set_rawPointerPress_m520(L_23, L_24, /*hidden argument*/&PointerEventData_set_rawPointerPress_m520_MethodInfo);
		PointerEventData_t52 * L_25 = (__this->___pointerData_10);
		NullCheck(L_25);
		PointerEventData_set_eligibleForClick_m521(L_25, 1, /*hidden argument*/&PointerEventData_set_eligibleForClick_m521_MethodInfo);
		PointerEventData_t52 * L_26 = (__this->___pointerData_10);
		NullCheck(L_26);
		PointerEventData_set_clickCount_m522(L_26, 1, /*hidden argument*/&PointerEventData_set_clickCount_m522_MethodInfo);
		PointerEventData_t52 * L_27 = (__this->___pointerData_10);
		float L_28 = Time_get_unscaledTime_m513(NULL /*static, unused*/, /*hidden argument*/&Time_get_unscaledTime_m513_MethodInfo);
		NullCheck(L_27);
		PointerEventData_set_clickTime_m527(L_27, L_28, /*hidden argument*/&PointerEventData_set_clickTime_m527_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Pose3D_t30_il2cpp_TypeInfo;

extern MethodInfo Matrix4x4_op_Multiply_m537_MethodInfo;
extern MethodInfo Pose3D_set_Position_m162_MethodInfo;
extern MethodInfo Pose3D_set_Orientation_m164_MethodInfo;
extern MethodInfo Matrix4x4_get_identity_m538_MethodInfo;
extern MethodInfo Pose3D_set_Matrix_m166_MethodInfo;
extern MethodInfo Pose3D_Set_m168_MethodInfo;
extern MethodInfo Pose3D_Set_m169_MethodInfo;
extern MethodInfo Matrix4x4_Scale_m539_MethodInfo;
extern MethodInfo Matrix4x4_GetColumn_m540_MethodInfo;
extern MethodInfo Vector4_op_Implicit_m541_MethodInfo;
extern MethodInfo Quaternion_LookRotation_m542_MethodInfo;


// System.Void Pose3D::.ctor()
extern MethodInfo Pose3D__ctor_m157_MethodInfo;
extern "C" void Pose3D__ctor_m157 (Pose3D_t30 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Vector3_t3  L_0 = Vector3_get_zero_m363(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m363_MethodInfo);
		Pose3D_set_Position_m162(__this, L_0, /*hidden argument*/&Pose3D_set_Position_m162_MethodInfo);
		Quaternion_t33  L_1 = Quaternion_get_identity_m455(NULL /*static, unused*/, /*hidden argument*/&Quaternion_get_identity_m455_MethodInfo);
		Pose3D_set_Orientation_m164(__this, L_1, /*hidden argument*/&Pose3D_set_Orientation_m164_MethodInfo);
		Matrix4x4_t32  L_2 = Matrix4x4_get_identity_m538(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_identity_m538_MethodInfo);
		Pose3D_set_Matrix_m166(__this, L_2, /*hidden argument*/&Pose3D_set_Matrix_m166_MethodInfo);
		return;
	}
}
// System.Void Pose3D::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
extern MethodInfo Pose3D__ctor_m158_MethodInfo;
extern "C" void Pose3D__ctor_m158 (Pose3D_t30 * __this, Vector3_t3  ___position, Quaternion_t33  ___orientation, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Vector3_t3  L_0 = ___position;
		Quaternion_t33  L_1 = ___orientation;
		Pose3D_Set_m168(__this, L_0, L_1, /*hidden argument*/&Pose3D_Set_m168_MethodInfo);
		return;
	}
}
// System.Void Pose3D::.ctor(UnityEngine.Matrix4x4)
extern MethodInfo Pose3D__ctor_m159_MethodInfo;
extern "C" void Pose3D__ctor_m159 (Pose3D_t30 * __this, Matrix4x4_t32  ___matrix, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Matrix4x4_t32  L_0 = ___matrix;
		Pose3D_Set_m169(__this, L_0, /*hidden argument*/&Pose3D_Set_m169_MethodInfo);
		return;
	}
}
// System.Void Pose3D::.cctor()
extern MethodInfo Pose3D__cctor_m160_MethodInfo;
extern "C" void Pose3D__cctor_m160 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = {0};
		Vector3__ctor_m352(&L_0, (1.0f), (1.0f), (-1.0f), /*hidden argument*/&Vector3__ctor_m352_MethodInfo);
		Matrix4x4_t32  L_1 = Matrix4x4_Scale_m539(NULL /*static, unused*/, L_0, /*hidden argument*/&Matrix4x4_Scale_m539_MethodInfo);
		((Pose3D_t30_StaticFields*)InitializedTypeInfo(&Pose3D_t30_il2cpp_TypeInfo)->static_fields)->___flipZ_0 = L_1;
		return;
	}
}
// UnityEngine.Vector3 Pose3D::get_Position()
extern "C" Vector3_t3  Pose3D_get_Position_m161 (Pose3D_t30 * __this, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = (__this->___U3CPositionU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void Pose3D::set_Position(UnityEngine.Vector3)
extern "C" void Pose3D_set_Position_m162 (Pose3D_t30 * __this, Vector3_t3  ___value, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___value;
		__this->___U3CPositionU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.Quaternion Pose3D::get_Orientation()
extern "C" Quaternion_t33  Pose3D_get_Orientation_m163 (Pose3D_t30 * __this, MethodInfo* method)
{
	{
		Quaternion_t33  L_0 = (__this->___U3COrientationU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void Pose3D::set_Orientation(UnityEngine.Quaternion)
extern "C" void Pose3D_set_Orientation_m164 (Pose3D_t30 * __this, Quaternion_t33  ___value, MethodInfo* method)
{
	{
		Quaternion_t33  L_0 = ___value;
		__this->___U3COrientationU3Ek__BackingField_2 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 Pose3D::get_Matrix()
extern "C" Matrix4x4_t32  Pose3D_get_Matrix_m165 (Pose3D_t30 * __this, MethodInfo* method)
{
	{
		Matrix4x4_t32  L_0 = (__this->___U3CMatrixU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void Pose3D::set_Matrix(UnityEngine.Matrix4x4)
extern "C" void Pose3D_set_Matrix_m166 (Pose3D_t30 * __this, Matrix4x4_t32  ___value, MethodInfo* method)
{
	{
		Matrix4x4_t32  L_0 = ___value;
		__this->___U3CMatrixU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 Pose3D::get_RightHandedMatrix()
extern MethodInfo Pose3D_get_RightHandedMatrix_m167_MethodInfo;
extern "C" Matrix4x4_t32  Pose3D_get_RightHandedMatrix_m167 (Pose3D_t30 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Pose3D_t30_il2cpp_TypeInfo));
		Matrix4x4_t32  L_0 = ((Pose3D_t30_StaticFields*)InitializedTypeInfo(&Pose3D_t30_il2cpp_TypeInfo)->static_fields)->___flipZ_0;
		Matrix4x4_t32  L_1 = Pose3D_get_Matrix_m165(__this, /*hidden argument*/&Pose3D_get_Matrix_m165_MethodInfo);
		Matrix4x4_t32  L_2 = Matrix4x4_op_Multiply_m537(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Matrix4x4_op_Multiply_m537_MethodInfo);
		Matrix4x4_t32  L_3 = ((Pose3D_t30_StaticFields*)InitializedTypeInfo(&Pose3D_t30_il2cpp_TypeInfo)->static_fields)->___flipZ_0;
		Matrix4x4_t32  L_4 = Matrix4x4_op_Multiply_m537(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Matrix4x4_op_Multiply_m537_MethodInfo);
		return L_4;
	}
}
// System.Void Pose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Pose3D_Set_m168 (Pose3D_t30 * __this, Vector3_t3  ___position, Quaternion_t33  ___orientation, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___position;
		Pose3D_set_Position_m162(__this, L_0, /*hidden argument*/&Pose3D_set_Position_m162_MethodInfo);
		Quaternion_t33  L_1 = ___orientation;
		Pose3D_set_Orientation_m164(__this, L_1, /*hidden argument*/&Pose3D_set_Orientation_m164_MethodInfo);
		Vector3_t3  L_2 = ___position;
		Quaternion_t33  L_3 = ___orientation;
		Vector3_t3  L_4 = Vector3_get_one_m457(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m457_MethodInfo);
		Matrix4x4_t32  L_5 = Matrix4x4_TRS_m485(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/&Matrix4x4_TRS_m485_MethodInfo);
		Pose3D_set_Matrix_m166(__this, L_5, /*hidden argument*/&Pose3D_set_Matrix_m166_MethodInfo);
		return;
	}
}
// System.Void Pose3D::Set(UnityEngine.Matrix4x4)
extern "C" void Pose3D_Set_m169 (Pose3D_t30 * __this, Matrix4x4_t32  ___matrix, MethodInfo* method)
{
	{
		Matrix4x4_t32  L_0 = ___matrix;
		Pose3D_set_Matrix_m166(__this, L_0, /*hidden argument*/&Pose3D_set_Matrix_m166_MethodInfo);
		Vector4_t88  L_1 = Matrix4x4_GetColumn_m540((&___matrix), 3, /*hidden argument*/&Matrix4x4_GetColumn_m540_MethodInfo);
		Vector3_t3  L_2 = Vector4_op_Implicit_m541(NULL /*static, unused*/, L_1, /*hidden argument*/&Vector4_op_Implicit_m541_MethodInfo);
		Pose3D_set_Position_m162(__this, L_2, /*hidden argument*/&Pose3D_set_Position_m162_MethodInfo);
		Vector4_t88  L_3 = Matrix4x4_GetColumn_m540((&___matrix), 2, /*hidden argument*/&Matrix4x4_GetColumn_m540_MethodInfo);
		Vector3_t3  L_4 = Vector4_op_Implicit_m541(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector4_op_Implicit_m541_MethodInfo);
		Vector4_t88  L_5 = Matrix4x4_GetColumn_m540((&___matrix), 1, /*hidden argument*/&Matrix4x4_GetColumn_m540_MethodInfo);
		Vector3_t3  L_6 = Vector4_op_Implicit_m541(NULL /*static, unused*/, L_5, /*hidden argument*/&Vector4_op_Implicit_m541_MethodInfo);
		Quaternion_t33  L_7 = Quaternion_LookRotation_m542(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&Quaternion_LookRotation_m542_MethodInfo);
		Pose3D_set_Orientation_m164(__this, L_7, /*hidden argument*/&Pose3D_set_Orientation_m164_MethodInfo);
		return;
	}
}
// MutablePose3D
#include "AssemblyU2DCSharp_MutablePose3D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MutablePose3D_t55_il2cpp_TypeInfo;
// MutablePose3D
#include "AssemblyU2DCSharp_MutablePose3DMethodDeclarations.h"

extern MethodInfo MutablePose3D_Set_m172_MethodInfo;


// System.Void MutablePose3D::.ctor()
extern MethodInfo MutablePose3D__ctor_m170_MethodInfo;
extern "C" void MutablePose3D__ctor_m170 (MutablePose3D_t55 * __this, MethodInfo* method)
{
	{
		Pose3D__ctor_m157(__this, /*hidden argument*/&Pose3D__ctor_m157_MethodInfo);
		return;
	}
}
// System.Void MutablePose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern MethodInfo MutablePose3D_Set_m171_MethodInfo;
extern "C" void MutablePose3D_Set_m171 (MutablePose3D_t55 * __this, Vector3_t3  ___position, Quaternion_t33  ___orientation, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___position;
		Quaternion_t33  L_1 = ___orientation;
		Pose3D_Set_m168(__this, L_0, L_1, /*hidden argument*/&Pose3D_Set_m168_MethodInfo);
		return;
	}
}
// System.Void MutablePose3D::Set(UnityEngine.Matrix4x4)
extern "C" void MutablePose3D_Set_m172 (MutablePose3D_t55 * __this, Matrix4x4_t32  ___matrix, MethodInfo* method)
{
	{
		Matrix4x4_t32  L_0 = ___matrix;
		Pose3D_Set_m169(__this, L_0, /*hidden argument*/&Pose3D_Set_m169_MethodInfo);
		return;
	}
}
// System.Void MutablePose3D::SetRightHanded(UnityEngine.Matrix4x4)
extern MethodInfo MutablePose3D_SetRightHanded_m173_MethodInfo;
extern "C" void MutablePose3D_SetRightHanded_m173 (MutablePose3D_t55 * __this, Matrix4x4_t32  ___matrix, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Pose3D_t30_il2cpp_TypeInfo));
		Matrix4x4_t32  L_0 = ((Pose3D_t30_StaticFields*)InitializedTypeInfo(&Pose3D_t30_il2cpp_TypeInfo)->static_fields)->___flipZ_0;
		Matrix4x4_t32  L_1 = ___matrix;
		Matrix4x4_t32  L_2 = Matrix4x4_op_Multiply_m537(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Matrix4x4_op_Multiply_m537_MethodInfo);
		Matrix4x4_t32  L_3 = ((Pose3D_t30_StaticFields*)InitializedTypeInfo(&Pose3D_t30_il2cpp_TypeInfo)->static_fields)->___flipZ_0;
		Matrix4x4_t32  L_4 = Matrix4x4_op_Multiply_m537(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Matrix4x4_op_Multiply_m537_MethodInfo);
		MutablePose3D_Set_m172(__this, L_4, /*hidden argument*/&MutablePose3D_Set_m172_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RadialUndistortionEffect_t56_il2cpp_TypeInfo;
// RadialUndistortionEffect
#include "AssemblyU2DCSharp_RadialUndistortionEffectMethodDeclarations.h"

extern MethodInfo Graphics_Blit_m543_MethodInfo;
extern MethodInfo Graphics_Blit_m544_MethodInfo;


// System.Void RadialUndistortionEffect::.ctor()
extern MethodInfo RadialUndistortionEffect__ctor_m174_MethodInfo;
extern "C" void RadialUndistortionEffect__ctor_m174 (RadialUndistortionEffect_t56 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		return;
	}
}
// System.Void RadialUndistortionEffect::Awake()
extern MethodInfo RadialUndistortionEffect_Awake_m175_MethodInfo;
extern "C" void RadialUndistortionEffect_Awake_m175 (RadialUndistortionEffect_t56 * __this, MethodInfo* method)
{
	Shader_t81 * V_0 = {0};
	{
		bool L_0 = SystemInfo_get_supportsRenderTextures_m302(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m302_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_Log_m355(NULL /*static, unused*/, (String_t*) &_stringLiteral27, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		return;
	}

IL_0015:
	{
		Shader_t81 * L_1 = Shader_Find_m343(NULL /*static, unused*/, (String_t*) &_stringLiteral28, /*hidden argument*/&Shader_Find_m343_MethodInfo);
		V_0 = L_1;
		Shader_t81 * L_2 = V_0;
		bool L_3 = Object_op_Equality_m306(NULL /*static, unused*/, L_2, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Debug_Log_m355(NULL /*static, unused*/, (String_t*) &_stringLiteral29, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		return;
	}

IL_0037:
	{
		Shader_t81 * L_4 = V_0;
		Material_t50 * L_5 = (Material_t50 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t50_il2cpp_TypeInfo));
		Material__ctor_m344(L_5, L_4, /*hidden argument*/&Material__ctor_m344_MethodInfo);
		__this->___material_2 = L_5;
		return;
	}
}
// System.Void RadialUndistortionEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo RadialUndistortionEffect_OnRenderImage_m176_MethodInfo;
extern "C" void RadialUndistortionEffect_OnRenderImage_m176 (RadialUndistortionEffect_t56 * __this, RenderTexture_t10 * ___source, RenderTexture_t10 * ___dest, MethodInfo* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Material_t50 * L_0 = (__this->___material_2);
		bool L_1 = Object_op_Equality_m306(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_2 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_2);
		bool L_3 = Cardboard_get_UseDistortionEffect_m75(L_2, /*hidden argument*/&Cardboard_get_UseDistortionEffect_m75_MethodInfo);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		RenderTexture_t10 * L_5 = ___source;
		RenderTexture_t10 * L_6 = ___dest;
		Graphics_Blit_m543(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Graphics_Blit_m543_MethodInfo);
		goto IL_0041;
	}

IL_0034:
	{
		RenderTexture_t10 * L_7 = ___source;
		RenderTexture_t10 * L_8 = ___dest;
		Material_t50 * L_9 = (__this->___material_2);
		Graphics_Blit_m544(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/&Graphics_Blit_m544_MethodInfo);
	}

IL_0041:
	{
		return;
	}
}
// StereoController/<EndOfFrame>c__Iterator1
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU3Ec__Iterat.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CEndOfFrameU3Ec__Iterator1_t57_il2cpp_TypeInfo;
// StereoController/<EndOfFrame>c__Iterator1
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU3Ec__IteratMethodDeclarations.h"



// System.Void StereoController/<EndOfFrame>c__Iterator1::.ctor()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1__ctor_m177_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator1__ctor_m177 (U3CEndOfFrameU3Ec__Iterator1_t57 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Object StereoController/<EndOfFrame>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m178_MethodInfo;
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m178 (U3CEndOfFrameU3Ec__Iterator1_t57 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Object StereoController/<EndOfFrame>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m179_MethodInfo;
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m179 (U3CEndOfFrameU3Ec__Iterator1_t57 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Boolean StereoController/<EndOfFrame>c__Iterator1::MoveNext()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1_MoveNext_m180_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCamera_t35_m464_MethodInfo_var;
extern "C" bool U3CEndOfFrameU3Ec__Iterator1_MoveNext_m180 (U3CEndOfFrameU3Ec__Iterator1_t57 * __this, MethodInfo* method)
{
	static bool U3CEndOfFrameU3Ec__Iterator1_MoveNext_m180_init;
	if (!U3CEndOfFrameU3Ec__Iterator1_MoveNext_m180_init)
	{
		Component_GetComponent_TisCamera_t35_m464_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t35_m464_GenericMethod);
		U3CEndOfFrameU3Ec__Iterator1_MoveNext_m180_init = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___$PC_0);
		V_0 = L_0;
		__this->___$PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0071;
	}

IL_0021:
	{
		StereoController_t34 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		bool L_3 = (L_2->___renderedStereo_12);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		StereoController_t34 * L_4 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_4);
		Camera_t35 * L_5 = Component_GetComponent_TisCamera_t35_m464(L_4, /*hidden argument*/Component_GetComponent_TisCamera_t35_m464_MethodInfo_var);
		NullCheck(L_5);
		Behaviour_set_enabled_m311(L_5, 1, /*hidden argument*/&Behaviour_set_enabled_m311_MethodInfo);
		StereoController_t34 * L_6 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_6);
		L_6->___renderedStereo_12 = 0;
	}

IL_004e:
	{
		WaitForEndOfFrame_t82 * L_7 = (WaitForEndOfFrame_t82 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForEndOfFrame_t82_il2cpp_TypeInfo));
		WaitForEndOfFrame__ctor_m358(L_7, /*hidden argument*/&WaitForEndOfFrame__ctor_m358_MethodInfo);
		__this->___$current_1 = L_7;
		__this->___$PC_0 = 1;
		goto IL_0073;
	}

IL_0065:
	{
		goto IL_0021;
	}
	// Dead block : IL_006a: ldarg.0

IL_0071:
	{
		return 0;
	}

IL_0073:
	{
		return 1;
	}
}
// System.Void StereoController/<EndOfFrame>c__Iterator1::Dispose()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1_Dispose_m181_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator1_Dispose_m181 (U3CEndOfFrameU3Ec__Iterator1_t57 * __this, MethodInfo* method)
{
	{
		__this->___$PC_0 = (-1);
		return;
	}
}
// System.Void StereoController/<EndOfFrame>c__Iterator1::Reset()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1_Reset_m182_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator1_Reset_m182 (U3CEndOfFrameU3Ec__Iterator1_t57 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Func`2<CardboardEye,System.Boolean>
#include "System_Core_System_Func_2_gen.h"
// System.Func`2<CardboardEye,CardboardHead>
#include "System_Core_System_Func_2_gen_0.h"
extern TypeInfo Func_2_t105_il2cpp_TypeInfo;
extern TypeInfo Func_2_t59_il2cpp_TypeInfo;
// System.Func`2<CardboardEye,System.Boolean>
#include "System_Core_System_Func_2_genMethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Func`2<CardboardEye,CardboardHead>
#include "System_Core_System_Func_2_gen_0MethodDeclarations.h"
extern Il2CppType Func_2_t105_0_0_0;
extern Il2CppType Func_2_t59_0_0_0;
extern MethodInfo StereoController_U3Cget_EyesU3Em__0_m197_MethodInfo;
extern MethodInfo Func_2__ctor_m545_MethodInfo;
extern MethodInfo StereoController_get_Eyes_m184_MethodInfo;
extern MethodInfo StereoController_U3Cget_HeadU3Em__1_m198_MethodInfo;
extern MethodInfo Func_2__ctor_m546_MethodInfo;
extern MethodInfo StereoController_AddStereoRig_m190_MethodInfo;
extern MethodInfo StereoController_CreateEye_m191_MethodInfo;
extern MethodInfo Object_get_name_m547_MethodInfo;
extern MethodInfo String_Concat_m548_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m549_MethodInfo;
extern MethodInfo Vector3_get_magnitude_m550_MethodInfo;
extern MethodInfo Mathf_Sqrt_m551_MethodInfo;
struct Component_t71;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardEye>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardEye>(System.Boolean)
#define Component_GetComponentsInChildren_TisCardboardEye_t36_m552(__this, p0, method) (( CardboardEyeU5BU5D_t58* (*) (Component_t71 *, bool, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m327_gshared)(__this, p0, method)
struct Enumerable_t106;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct Enumerable_t106;
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_1.h"
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" Object_t* Enumerable_Where_TisObject_t_m554_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t107 * p1, MethodInfo* method);
#define Enumerable_Where_TisObject_t_m554(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t107 *, MethodInfo*))Enumerable_Where_TisObject_t_m554_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisCardboardEye_t36_m553(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t105 *, MethodInfo*))Enumerable_Where_TisObject_t_m554_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t106;
// System.Collections.Generic.List`1<CardboardEye>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
struct Enumerable_t106;
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" ObjectU5BU5D_t76* Enumerable_ToArray_TisObject_t_m556_gshared (Object_t * __this /* static, unused */, Object_t* p0, MethodInfo* method);
#define Enumerable_ToArray_TisObject_t_m556(__this /* static, unused */, p0, method) (( ObjectU5BU5D_t76* (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_ToArray_TisObject_t_m556_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0[] System.Linq.Enumerable::ToArray<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisCardboardEye_t36_m555(__this /* static, unused */, p0, method) (( CardboardEyeU5BU5D_t58* (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_ToArray_TisObject_t_m556_gshared)(__this /* static, unused */, p0, method)
struct Enumerable_t106;
struct Enumerable_t106;
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_2.h"
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisObject_t_TisObject_t_m558_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t108 * p1, MethodInfo* method);
#define Enumerable_Select_TisObject_t_TisObject_t_m558(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t108 *, MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m558_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<CardboardEye,CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<CardboardEye,CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisCardboardEye_t36_TisCardboardHead_t4_m557(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t59 *, MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m558_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t106;
// System.Linq.Enumerable/PredicateOf`1<CardboardHead>
#include "System_Core_System_Linq_Enumerable_PredicateOf_1_gen.h"
// System.Func`2<CardboardHead,System.Boolean>
#include "System_Core_System_Func_2_gen_3.h"
// System.Linq.Enumerable/Fallback
#include "System_Core_System_Linq_Enumerable_Fallback.h"
struct Enumerable_t106;
// System.Linq.Enumerable/PredicateOf`1<System.Object>
#include "System_Core_System_Linq_Enumerable_PredicateOf_1_gen_0.h"
// Declaration !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" Object_t * Enumerable_FirstOrDefault_TisObject_t_m560_gshared (Object_t * __this /* static, unused */, Object_t* p0, MethodInfo* method);
#define Enumerable_FirstOrDefault_TisObject_t_m560(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_FirstOrDefault_TisObject_t_m560_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 System.Linq.Enumerable::FirstOrDefault<CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::FirstOrDefault<CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_FirstOrDefault_TisCardboardHead_t4_m559(__this /* static, unused */, p0, method) (( CardboardHead_t4 * (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_FirstOrDefault_TisObject_t_m560_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t51;
// Declaration !!0 UnityEngine.GameObject::AddComponent<CardboardHead>()
// !!0 UnityEngine.GameObject::AddComponent<CardboardHead>()
extern "C" CardboardHead_t4 * GameObject_AddComponent_TisCardboardHead_t4_m561 (GameObject_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t51;
// Declaration !!0 UnityEngine.GameObject::AddComponent<CardboardEye>()
// !!0 UnityEngine.GameObject::AddComponent<CardboardEye>()
extern "C" CardboardEye_t36 * GameObject_AddComponent_TisCardboardEye_t36_m562 (GameObject_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisCardboardEye_t36_m552_GenericMethod;
extern Il2CppGenericMethod Func_2__ctor_m545_GenericMethod;
extern Il2CppGenericMethod Enumerable_Where_TisCardboardEye_t36_m553_GenericMethod;
extern Il2CppGenericMethod Enumerable_ToArray_TisCardboardEye_t36_m555_GenericMethod;
extern Il2CppGenericMethod Func_2__ctor_m546_GenericMethod;
extern Il2CppGenericMethod Enumerable_Select_TisCardboardEye_t36_TisCardboardHead_t4_m557_GenericMethod;
extern Il2CppGenericMethod Enumerable_FirstOrDefault_TisCardboardHead_t4_m559_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisCardboardHead_t4_m561_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisCardboardEye_t36_m562_GenericMethod;


// System.Void StereoController::.ctor()
extern MethodInfo StereoController__ctor_m183_MethodInfo;
extern "C" void StereoController__ctor_m183 (StereoController_t34 * __this, MethodInfo* method)
{
	{
		__this->___directRender_2 = 1;
		__this->___stereoMultiplier_3 = (1.0f);
		__this->___checkStereoComfort_8 = 1;
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		return;
	}
}
// CardboardEye[] StereoController::get_Eyes()
extern TypeInfo* Func_2_t105_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponentsInChildren_TisCardboardEye_t36_m552_MethodInfo_var;
extern MethodInfo* Func_2__ctor_m545_MethodInfo_var;
extern MethodInfo* Enumerable_Where_TisCardboardEye_t36_m553_MethodInfo_var;
extern MethodInfo* Enumerable_ToArray_TisCardboardEye_t36_m555_MethodInfo_var;
extern "C" CardboardEyeU5BU5D_t58* StereoController_get_Eyes_m184 (StereoController_t34 * __this, MethodInfo* method)
{
	static bool StereoController_get_Eyes_m184_init;
	if (!StereoController_get_Eyes_m184_init)
	{
		Func_2_t105_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Func_2_t105_0_0_0);
		Component_GetComponentsInChildren_TisCardboardEye_t36_m552_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisCardboardEye_t36_m552_GenericMethod);
		Func_2__ctor_m545_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Func_2__ctor_m545_GenericMethod);
		Enumerable_Where_TisCardboardEye_t36_m553_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerable_Where_TisCardboardEye_t36_m553_GenericMethod);
		Enumerable_ToArray_TisCardboardEye_t36_m555_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerable_ToArray_TisCardboardEye_t36_m555_GenericMethod);
		StereoController_get_Eyes_m184_init = true;
	}
	{
		CardboardEyeU5BU5D_t58* L_0 = (__this->___eyes_13);
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		CardboardEyeU5BU5D_t58* L_1 = Component_GetComponentsInChildren_TisCardboardEye_t36_m552(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisCardboardEye_t36_m552_MethodInfo_var);
		IntPtr_t L_2 = { &StereoController_U3Cget_EyesU3Em__0_m197_MethodInfo };
		Func_2_t105 * L_3 = (Func_2_t105 *)il2cpp_codegen_object_new (Func_2_t105_il2cpp_TypeInfo_var);
		Func_2__ctor_m545(L_3, __this, L_2, /*hidden argument*/Func_2__ctor_m545_MethodInfo_var);
		Object_t* L_4 = Enumerable_Where_TisCardboardEye_t36_m553(NULL /*static, unused*/, (Object_t*)(Object_t*)L_1, L_3, /*hidden argument*/Enumerable_Where_TisCardboardEye_t36_m553_MethodInfo_var);
		CardboardEyeU5BU5D_t58* L_5 = Enumerable_ToArray_TisCardboardEye_t36_m555(NULL /*static, unused*/, L_4, /*hidden argument*/Enumerable_ToArray_TisCardboardEye_t36_m555_MethodInfo_var);
		__this->___eyes_13 = L_5;
	}

IL_002e:
	{
		CardboardEyeU5BU5D_t58* L_6 = (__this->___eyes_13);
		return L_6;
	}
}
// System.Void StereoController::InvalidateEyes()
extern MethodInfo StereoController_InvalidateEyes_m185_MethodInfo;
extern "C" void StereoController_InvalidateEyes_m185 (StereoController_t34 * __this, MethodInfo* method)
{
	{
		__this->___eyes_13 = (CardboardEyeU5BU5D_t58*)NULL;
		return;
	}
}
// CardboardHead StereoController::get_Head()
extern TypeInfo* Func_2_t59_il2cpp_TypeInfo_var;
extern MethodInfo* Func_2__ctor_m546_MethodInfo_var;
extern MethodInfo* Enumerable_Select_TisCardboardEye_t36_TisCardboardHead_t4_m557_MethodInfo_var;
extern MethodInfo* Enumerable_FirstOrDefault_TisCardboardHead_t4_m559_MethodInfo_var;
extern "C" CardboardHead_t4 * StereoController_get_Head_m186 (StereoController_t34 * __this, MethodInfo* method)
{
	static bool StereoController_get_Head_m186_init;
	if (!StereoController_get_Head_m186_init)
	{
		Func_2_t59_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Func_2_t59_0_0_0);
		Func_2__ctor_m546_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Func_2__ctor_m546_GenericMethod);
		Enumerable_Select_TisCardboardEye_t36_TisCardboardHead_t4_m557_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerable_Select_TisCardboardEye_t36_TisCardboardHead_t4_m557_GenericMethod);
		Enumerable_FirstOrDefault_TisCardboardHead_t4_m559_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerable_FirstOrDefault_TisCardboardHead_t4_m559_GenericMethod);
		StereoController_get_Head_m186_init = true;
	}
	CardboardEyeU5BU5D_t58* G_B2_0 = {0};
	CardboardEyeU5BU5D_t58* G_B1_0 = {0};
	{
		CardboardEyeU5BU5D_t58* L_0 = StereoController_get_Eyes_m184(__this, /*hidden argument*/&StereoController_get_Eyes_m184_MethodInfo);
		Func_2_t59 * L_1 = ((StereoController_t34_StaticFields*)InitializedTypeInfo(&StereoController_t34_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__am$cacheC_14;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { &StereoController_U3Cget_HeadU3Em__1_m198_MethodInfo };
		Func_2_t59 * L_3 = (Func_2_t59 *)il2cpp_codegen_object_new (Func_2_t59_il2cpp_TypeInfo_var);
		Func_2__ctor_m546(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m546_MethodInfo_var);
		((StereoController_t34_StaticFields*)InitializedTypeInfo(&StereoController_t34_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__am$cacheC_14 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t59 * L_4 = ((StereoController_t34_StaticFields*)InitializedTypeInfo(&StereoController_t34_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__am$cacheC_14;
		Object_t* L_5 = Enumerable_Select_TisCardboardEye_t36_TisCardboardHead_t4_m557(NULL /*static, unused*/, (Object_t*)(Object_t*)G_B2_0, L_4, /*hidden argument*/Enumerable_Select_TisCardboardEye_t36_TisCardboardHead_t4_m557_MethodInfo_var);
		CardboardHead_t4 * L_6 = Enumerable_FirstOrDefault_TisCardboardHead_t4_m559(NULL /*static, unused*/, L_5, /*hidden argument*/Enumerable_FirstOrDefault_TisCardboardHead_t4_m559_MethodInfo_var);
		return L_6;
	}
}
// UnityEngine.RenderTexture StereoController::get_StereoScreen()
extern MethodInfo* Component_GetComponent_TisCamera_t35_m464_MethodInfo_var;
extern "C" RenderTexture_t10 * StereoController_get_StereoScreen_m187 (StereoController_t34 * __this, MethodInfo* method)
{
	static bool StereoController_get_StereoScreen_m187_init;
	if (!StereoController_get_StereoScreen_m187_init)
	{
		Component_GetComponent_TisCamera_t35_m464_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t35_m464_GenericMethod);
		StereoController_get_StereoScreen_m187_init = true;
	}
	RenderTexture_t10 * G_B2_0 = {0};
	RenderTexture_t10 * G_B1_0 = {0};
	{
		Camera_t35 * L_0 = Component_GetComponent_TisCamera_t35_m464(__this, /*hidden argument*/Component_GetComponent_TisCamera_t35_m464_MethodInfo_var);
		NullCheck(L_0);
		RenderTexture_t10 * L_1 = Camera_get_targetTexture_m447(L_0, /*hidden argument*/&Camera_get_targetTexture_m447_MethodInfo);
		RenderTexture_t10 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_3 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_3);
		RenderTexture_t10 * L_4 = Cardboard_get_StereoScreen_m73(L_3, /*hidden argument*/&Cardboard_get_StereoScreen_m73_MethodInfo);
		G_B2_0 = L_4;
	}

IL_001c:
	{
		return G_B2_0;
	}
}
// System.Int32 StereoController::get_ScreenHeight()
extern MethodInfo StereoController_get_ScreenHeight_m188_MethodInfo;
extern "C" int32_t StereoController_get_ScreenHeight_m188 (StereoController_t34 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	{
		int32_t L_0 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		bool L_1 = Application_get_isEditor_m407(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m407_MethodInfo);
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B3_0 = L_0;
			goto IL_0027;
		}
	}
	{
		RenderTexture_t10 * L_2 = StereoController_get_StereoScreen_m187(__this, /*hidden argument*/&StereoController_get_StereoScreen_m187_MethodInfo);
		bool L_3 = Object_op_Equality_m306(NULL /*static, unused*/, L_2, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0027;
		}
	}
	{
		G_B4_0 = ((int32_t)36);
		G_B4_1 = G_B2_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0028:
	{
		return ((int32_t)((int32_t)G_B4_1-(int32_t)G_B4_0));
	}
}
// System.Void StereoController::Awake()
extern MethodInfo StereoController_Awake_m189_MethodInfo;
extern "C" void StereoController_Awake_m189 (StereoController_t34 * __this, MethodInfo* method)
{
	{
		StereoController_AddStereoRig_m190(__this, /*hidden argument*/&StereoController_AddStereoRig_m190_MethodInfo);
		return;
	}
}
// System.Void StereoController::AddStereoRig()
extern MethodInfo* GameObject_AddComponent_TisCardboardHead_t4_m561_MethodInfo_var;
extern "C" void StereoController_AddStereoRig_m190 (StereoController_t34 * __this, MethodInfo* method)
{
	static bool StereoController_AddStereoRig_m190_init;
	if (!StereoController_AddStereoRig_m190_init)
	{
		GameObject_AddComponent_TisCardboardHead_t4_m561_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCardboardHead_t4_m561_GenericMethod);
		StereoController_AddStereoRig_m190_init = true;
	}
	{
		CardboardEyeU5BU5D_t58* L_0 = StereoController_get_Eyes_m184(__this, /*hidden argument*/&StereoController_get_Eyes_m184_MethodInfo);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		StereoController_CreateEye_m191(__this, 0, /*hidden argument*/&StereoController_CreateEye_m191_MethodInfo);
		StereoController_CreateEye_m191(__this, 1, /*hidden argument*/&StereoController_CreateEye_m191_MethodInfo);
		CardboardHead_t4 * L_1 = StereoController_get_Head_m186(__this, /*hidden argument*/&StereoController_get_Head_m186_MethodInfo);
		bool L_2 = Object_op_Equality_m306(NULL /*static, unused*/, L_1, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t51 * L_3 = Component_get_gameObject_m308(__this, /*hidden argument*/&Component_get_gameObject_m308_MethodInfo);
		NullCheck(L_3);
		GameObject_AddComponent_TisCardboardHead_t4_m561(L_3, /*hidden argument*/GameObject_AddComponent_TisCardboardHead_t4_m561_MethodInfo_var);
	}

IL_003a:
	{
		return;
	}
}
// System.Void StereoController::CreateEye(Cardboard/Eye)
extern MethodInfo* GameObject_AddComponent_TisCamera_t35_m404_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisCardboardEye_t36_m562_MethodInfo_var;
extern "C" void StereoController_CreateEye_m191 (StereoController_t34 * __this, int32_t ___eye, MethodInfo* method)
{
	static bool StereoController_CreateEye_m191_init;
	if (!StereoController_CreateEye_m191_init)
	{
		GameObject_AddComponent_TisCamera_t35_m404_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCamera_t35_m404_GenericMethod);
		GameObject_AddComponent_TisCardboardEye_t36_m562_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCardboardEye_t36_m562_GenericMethod);
		StereoController_CreateEye_m191_init = true;
	}
	String_t* V_0 = {0};
	GameObject_t51 * V_1 = {0};
	CardboardEye_t36 * V_2 = {0};
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	String_t* G_B3_1 = {0};
	{
		String_t* L_0 = Object_get_name_m547(__this, /*hidden argument*/&Object_get_name_m547_MethodInfo);
		int32_t L_1 = ___eye;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral30;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (String_t*) &_stringLiteral31;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m548(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/&String_Concat_m548_MethodInfo);
		V_0 = L_2;
		String_t* L_3 = V_0;
		GameObject_t51 * L_4 = (GameObject_t51 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t51_il2cpp_TypeInfo));
		GameObject__ctor_m361(L_4, L_3, /*hidden argument*/&GameObject__ctor_m361_MethodInfo);
		V_1 = L_4;
		GameObject_t51 * L_5 = V_1;
		NullCheck(L_5);
		Transform_t38 * L_6 = GameObject_get_transform_m362(L_5, /*hidden argument*/&GameObject_get_transform_m362_MethodInfo);
		Transform_t38 * L_7 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		NullCheck(L_6);
		Transform_set_parent_m390(L_6, L_7, /*hidden argument*/&Transform_set_parent_m390_MethodInfo);
		GameObject_t51 * L_8 = V_1;
		NullCheck(L_8);
		Camera_t35 * L_9 = GameObject_AddComponent_TisCamera_t35_m404(L_8, /*hidden argument*/GameObject_AddComponent_TisCamera_t35_m404_MethodInfo_var);
		NullCheck(L_9);
		Behaviour_set_enabled_m311(L_9, 0, /*hidden argument*/&Behaviour_set_enabled_m311_MethodInfo);
		GameObject_t51 * L_10 = V_1;
		NullCheck(L_10);
		CardboardEye_t36 * L_11 = GameObject_AddComponent_TisCardboardEye_t36_m562(L_10, /*hidden argument*/GameObject_AddComponent_TisCardboardEye_t36_m562_MethodInfo_var);
		V_2 = L_11;
		CardboardEye_t36 * L_12 = V_2;
		int32_t L_13 = ___eye;
		NullCheck(L_12);
		L_12->___eye_2 = L_13;
		CardboardEye_t36 * L_14 = V_2;
		NullCheck(L_14);
		CardboardEye_CopyCameraAndMakeSideBySide_m125(L_14, __this, (0.0f), (0.0f), /*hidden argument*/&CardboardEye_CopyCameraAndMakeSideBySide_m125_MethodInfo);
		return;
	}
}
// System.Void StereoController::ComputeStereoAdjustment(System.Single,System.Single,System.Single&,System.Single&)
extern MethodInfo* Component_GetComponent_TisCamera_t35_m464_MethodInfo_var;
extern "C" void StereoController_ComputeStereoAdjustment_m192 (StereoController_t34 * __this, float ___proj11, float ___zScale, float* ___ipdScale, float* ___eyeOffset, MethodInfo* method)
{
	static bool StereoController_ComputeStereoAdjustment_m192_init;
	if (!StereoController_ComputeStereoAdjustment_m192_init)
	{
		Component_GetComponent_TisCamera_t35_m464_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t35_m464_GenericMethod);
		StereoController_ComputeStereoAdjustment_m192_init = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t3  V_7 = {0};
	Matrix4x4_t32  V_8 = {0};
	Vector2_t15  V_9 = {0};
	Vector2_t15  V_10 = {0};
	{
		float* L_0 = ___ipdScale;
		float L_1 = (__this->___stereoMultiplier_3);
		*((float*)(L_0)) = (float)L_1;
		float* L_2 = ___eyeOffset;
		*((float*)(L_2)) = (float)(0.0f);
		Transform_t38 * L_3 = (__this->___centerOfInterest_6);
		bool L_4 = Object_op_Equality_m306(NULL /*static, unused*/, L_3, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		Transform_t38 * L_5 = (__this->___centerOfInterest_6);
		NullCheck(L_5);
		GameObject_t51 * L_6 = Component_get_gameObject_m308(L_5, /*hidden argument*/&Component_get_gameObject_m308_MethodInfo);
		NullCheck(L_6);
		bool L_7 = GameObject_get_activeInHierarchy_m309(L_6, /*hidden argument*/&GameObject_get_activeInHierarchy_m309_MethodInfo);
		if (L_7)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		return;
	}

IL_0037:
	{
		Transform_t38 * L_8 = (__this->___centerOfInterest_6);
		NullCheck(L_8);
		Vector3_t3  L_9 = Transform_get_position_m467(L_8, /*hidden argument*/&Transform_get_position_m467_MethodInfo);
		Transform_t38 * L_10 = Component_get_transform_m283(__this, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		NullCheck(L_10);
		Vector3_t3  L_11 = Transform_get_position_m467(L_10, /*hidden argument*/&Transform_get_position_m467_MethodInfo);
		Vector3_t3  L_12 = Vector3_op_Subtraction_m549(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/&Vector3_op_Subtraction_m549_MethodInfo);
		V_7 = L_12;
		float L_13 = Vector3_get_magnitude_m550((&V_7), /*hidden argument*/&Vector3_get_magnitude_m550_MethodInfo);
		V_0 = L_13;
		float L_14 = (__this->___radiusOfInterest_7);
		float L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t69_il2cpp_TypeInfo));
		float L_16 = Mathf_Clamp_m291(NULL /*static, unused*/, L_14, (0.0f), L_15, /*hidden argument*/&Mathf_Clamp_m291_MethodInfo);
		V_1 = L_16;
		float L_17 = ___proj11;
		Camera_t35 * L_18 = Component_GetComponent_TisCamera_t35_m464(__this, /*hidden argument*/Component_GetComponent_TisCamera_t35_m464_MethodInfo_var);
		NullCheck(L_18);
		Matrix4x4_t32  L_19 = Camera_get_projectionMatrix_m417(L_18, /*hidden argument*/&Camera_get_projectionMatrix_m417_MethodInfo);
		V_8 = L_19;
		float L_20 = Matrix4x4_get_Item_m411((&V_8), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		V_2 = ((float)((float)L_17/(float)L_20));
		float L_21 = V_1;
		float L_22 = V_1;
		float L_23 = V_0;
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_1;
		float L_27 = V_2;
		float L_28 = V_2;
		float L_29 = sqrtf(((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)((float)((float)((float)((float)((float)((float)L_23*(float)L_24))-(float)((float)((float)L_25*(float)L_26))))*(float)L_27))*(float)L_28)))));
		V_3 = L_29;
		float* L_30 = ___eyeOffset;
		float L_31 = V_0;
		float L_32 = V_3;
		float L_33 = (__this->___matchMonoFOV_4);
		float L_34 = Mathf_Clamp01_m369(NULL /*static, unused*/, L_33, /*hidden argument*/&Mathf_Clamp01_m369_MethodInfo);
		float L_35 = ___zScale;
		*((float*)(L_30)) = (float)((float)((float)((float)((float)((float)((float)L_31-(float)L_32))*(float)L_34))/(float)L_35));
		bool L_36 = (__this->___checkStereoComfort_8);
		if (!L_36)
		{
			goto IL_010c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_37 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_37);
		Vector2_t15  L_38 = Cardboard_get_ComfortableViewingRange_m81(L_37, /*hidden argument*/&Cardboard_get_ComfortableViewingRange_m81_MethodInfo);
		V_9 = L_38;
		float L_39 = ((&V_9)->___x_1);
		V_4 = L_39;
		Cardboard_t23 * L_40 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_40);
		Vector2_t15  L_41 = Cardboard_get_ComfortableViewingRange_m81(L_40, /*hidden argument*/&Cardboard_get_ComfortableViewingRange_m81_MethodInfo);
		V_10 = L_41;
		float L_42 = ((&V_10)->___y_2);
		V_5 = L_42;
		float L_43 = V_4;
		float L_44 = V_5;
		if ((!(((float)L_43) < ((float)L_44))))
		{
			goto IL_010c;
		}
	}
	{
		float L_45 = V_0;
		float L_46 = V_1;
		float L_47 = ___zScale;
		float* L_48 = ___eyeOffset;
		V_6 = ((float)((float)((float)((float)((float)((float)L_45-(float)L_46))/(float)L_47))-(float)(*((float*)L_48))));
		float* L_49 = ___ipdScale;
		float* L_50 = ___ipdScale;
		float L_51 = V_6;
		float L_52 = V_6;
		float L_53 = V_4;
		float L_54 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t69_il2cpp_TypeInfo));
		float L_55 = Mathf_Clamp_m291(NULL /*static, unused*/, L_52, L_53, L_54, /*hidden argument*/&Mathf_Clamp_m291_MethodInfo);
		*((float*)(L_49)) = (float)((float)((float)(*((float*)L_50))*(float)((float)((float)L_51/(float)L_55))));
	}

IL_010c:
	{
		return;
	}
}
// System.Void StereoController::OnEnable()
extern MethodInfo StereoController_OnEnable_m193_MethodInfo;
extern "C" void StereoController_OnEnable_m193 (StereoController_t34 * __this, MethodInfo* method)
{
	{
		MonoBehaviour_StartCoroutine_m398(__this, (String_t*) &_stringLiteral18, /*hidden argument*/&MonoBehaviour_StartCoroutine_m398_MethodInfo);
		return;
	}
}
// System.Void StereoController::OnDisable()
extern MethodInfo StereoController_OnDisable_m194_MethodInfo;
extern "C" void StereoController_OnDisable_m194 (StereoController_t34 * __this, MethodInfo* method)
{
	{
		MonoBehaviour_StopCoroutine_m399(__this, (String_t*) &_stringLiteral18, /*hidden argument*/&MonoBehaviour_StopCoroutine_m399_MethodInfo);
		return;
	}
}
// System.Void StereoController::OnPreCull()
extern MethodInfo StereoController_OnPreCull_m195_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCamera_t35_m464_MethodInfo_var;
extern "C" void StereoController_OnPreCull_m195 (StereoController_t34 * __this, MethodInfo* method)
{
	static bool StereoController_OnPreCull_m195_init;
	if (!StereoController_OnPreCull_m195_init)
	{
		Component_GetComponent_TisCamera_t35_m464_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t35_m464_GenericMethod);
		StereoController_OnPreCull_m195_init = true;
	}
	CardboardEye_t36 * V_0 = {0};
	CardboardEyeU5BU5D_t58* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_0 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_VRModeEnabled_m55(L_0, /*hidden argument*/&Cardboard_get_VRModeEnabled_m55_MethodInfo);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_2 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_2);
		Cardboard_UpdateState_m88(L_2, /*hidden argument*/&Cardboard_UpdateState_m88_MethodInfo);
		Camera_t35 * L_3 = Component_GetComponent_TisCamera_t35_m464(__this, /*hidden argument*/Component_GetComponent_TisCamera_t35_m464_MethodInfo_var);
		NullCheck(L_3);
		Behaviour_set_enabled_m311(L_3, 0, /*hidden argument*/&Behaviour_set_enabled_m311_MethodInfo);
		CardboardEyeU5BU5D_t58* L_4 = StereoController_get_Eyes_m184(__this, /*hidden argument*/&StereoController_get_Eyes_m184_MethodInfo);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0042;
	}

IL_0034:
	{
		CardboardEyeU5BU5D_t58* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(CardboardEye_t36 **)(CardboardEye_t36 **)SZArrayLdElema(L_5, L_7));
		CardboardEye_t36 * L_8 = V_0;
		NullCheck(L_8);
		CardboardEye_Render_m123(L_8, /*hidden argument*/&CardboardEye_Render_m123_MethodInfo);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_10 = V_2;
		CardboardEyeU5BU5D_t58* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		__this->___renderedStereo_12 = 1;
		return;
	}
}
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern MethodInfo StereoController_EndOfFrame_m196_MethodInfo;
extern "C" Object_t * StereoController_EndOfFrame_m196 (StereoController_t34 * __this, MethodInfo* method)
{
	U3CEndOfFrameU3Ec__Iterator1_t57 * V_0 = {0};
	{
		U3CEndOfFrameU3Ec__Iterator1_t57 * L_0 = (U3CEndOfFrameU3Ec__Iterator1_t57 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CEndOfFrameU3Ec__Iterator1_t57_il2cpp_TypeInfo));
		U3CEndOfFrameU3Ec__Iterator1__ctor_m177(L_0, /*hidden argument*/&U3CEndOfFrameU3Ec__Iterator1__ctor_m177_MethodInfo);
		V_0 = L_0;
		U3CEndOfFrameU3Ec__Iterator1_t57 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CEndOfFrameU3Ec__Iterator1_t57 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean StereoController::<get_Eyes>m__0(CardboardEye)
extern "C" bool StereoController_U3Cget_EyesU3Em__0_m197 (StereoController_t34 * __this, CardboardEye_t36 * ___eye, MethodInfo* method)
{
	{
		CardboardEye_t36 * L_0 = ___eye;
		NullCheck(L_0);
		StereoController_t34 * L_1 = CardboardEye_get_Controller_m117(L_0, /*hidden argument*/&CardboardEye_get_Controller_m117_MethodInfo);
		bool L_2 = Object_op_Equality_m306(NULL /*static, unused*/, L_1, __this, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		return L_2;
	}
}
// CardboardHead StereoController::<get_Head>m__1(CardboardEye)
extern "C" CardboardHead_t4 * StereoController_U3Cget_HeadU3Em__1_m198 (Object_t * __this /* static, unused */, CardboardEye_t36 * ___eye, MethodInfo* method)
{
	{
		CardboardEye_t36 * L_0 = ___eye;
		NullCheck(L_0);
		CardboardHead_t4 * L_1 = CardboardEye_get_Head_m118(L_0, /*hidden argument*/&CardboardEye_get_Head_m118_MethodInfo);
		return L_1;
	}
}
// BaseCardboardDevice/VREventCallback
#include "AssemblyU2DCSharp_BaseCardboardDevice_VREventCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VREventCallback_t61_il2cpp_TypeInfo;
// BaseCardboardDevice/VREventCallback
#include "AssemblyU2DCSharp_BaseCardboardDevice_VREventCallbackMethodDeclarations.h"



// System.Void BaseCardboardDevice/VREventCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo VREventCallback__ctor_m199_MethodInfo;
extern "C" void VREventCallback__ctor_m199 (VREventCallback_t61 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void BaseCardboardDevice/VREventCallback::Invoke(System.Int32)
extern MethodInfo VREventCallback_Invoke_m200_MethodInfo;
extern "C" void VREventCallback_Invoke_m200 (VREventCallback_t61 * __this, int32_t ___eventID, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		VREventCallback_Invoke_m200((VREventCallback_t61 *)__this->___prev_9,___eventID, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___eventID, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___eventID,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___eventID, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___eventID,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_VREventCallback_t61(Il2CppObject* delegate, int32_t ___eventID)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___eventID' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___eventID);

	// Marshaling cleanup of parameter '___eventID' native representation

}
// System.IAsyncResult BaseCardboardDevice/VREventCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo VREventCallback_BeginInvoke_m201_MethodInfo;
extern "C" Object_t * VREventCallback_BeginInvoke_m201 (VREventCallback_t61 * __this, int32_t ___eventID, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &___eventID);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void BaseCardboardDevice/VREventCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo VREventCallback_EndInvoke_m202_MethodInfo;
extern "C" void VREventCallback_EndInvoke_m202 (VREventCallback_t61 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// BaseCardboardDevice
#include "AssemblyU2DCSharp_BaseCardboardDevice.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BaseCardboardDevice_t63_il2cpp_TypeInfo;
// BaseCardboardDevice
#include "AssemblyU2DCSharp_BaseCardboardDeviceMethodDeclarations.h"

// System.Collections.Generic.Queue`1<System.Int32>
#include "System_System_Collections_Generic_Queue_1_gen.h"
extern TypeInfo Matrix4x4_t32_il2cpp_TypeInfo;
extern TypeInfo Queue_1_t62_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t109_il2cpp_TypeInfo;
// System.Collections.Generic.Queue`1<System.Int32>
#include "System_System_Collections_Generic_Queue_1_genMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern Il2CppType Queue_1_t62_0_0_0;
extern Il2CppType Int32U5BU5D_t109_0_0_0;
extern MethodInfo Queue_1__ctor_m563_MethodInfo;
extern MethodInfo BaseVRDevice__ctor_m236_MethodInfo;
extern MethodInfo List_1_Add_m564_MethodInfo;
extern MethodInfo BaseCardboardDevice_EnableDistortionCorrection_m226_MethodInfo;
extern MethodInfo BaseCardboardDevice_EnableAlignmentMarker_m227_MethodInfo;
extern MethodInfo BaseCardboardDevice_SetNeckModelFactor_m230_MethodInfo;
extern MethodInfo BaseCardboardDevice_EnableAutoDriftCorrection_m228_MethodInfo;
extern MethodInfo BaseCardboardDevice_EnableElectronicDisplayStabilization_m229_MethodInfo;
extern MethodInfo Mathf_Max_m565_MethodInfo;
extern MethodInfo Mathf_Min_m566_MethodInfo;
extern MethodInfo BaseCardboardDevice_Start_m223_MethodInfo;
extern MethodInfo BaseCardboardDevice_OnVREvent_m222_MethodInfo;
extern MethodInfo BaseCardboardDevice_SetEventCallback_m224_MethodInfo;
extern MethodInfo Texture_GetNativeTextureID_m567_MethodInfo;
extern MethodInfo BaseCardboardDevice_SetTextureId_m225_MethodInfo;
extern MethodInfo Time_get_smoothDeltaTime_m568_MethodInfo;
extern MethodInfo BaseCardboardDevice_GetHeadPose_m233_MethodInfo;
extern MethodInfo BaseCardboardDevice_ExtractMatrix_m220_MethodInfo;
extern MethodInfo Matrix4x4_get_inverse_m569_MethodInfo;
extern MethodInfo BaseCardboardDevice_UpdateProfile_m219_MethodInfo;
extern MethodInfo BaseVRDevice_ComputeEyesFromProfile_m256_MethodInfo;
extern MethodInfo BaseCardboardDevice_UpdateView_m218_MethodInfo;
extern MethodInfo BaseCardboardDevice_ResetHeadTracker_m231_MethodInfo;
extern MethodInfo GL_IssuePluginEvent_m570_MethodInfo;
extern MethodInfo GL_InvalidateState_m571_MethodInfo;
extern MethodInfo BaseCardboardDevice_ProcessEvents_m221_MethodInfo;
extern MethodInfo BaseCardboardDevice_Stop_m235_MethodInfo;
extern MethodInfo BaseCardboardDevice_GetViewParameters_m234_MethodInfo;
extern MethodInfo Rect_Set_m572_MethodInfo;
extern MethodInfo BaseCardboardDevice_GetProfile_m232_MethodInfo;
extern MethodInfo Monitor_Enter_m573_MethodInfo;
extern MethodInfo Queue_1_get_Count_m574_MethodInfo;
extern MethodInfo Monitor_Exit_m575_MethodInfo;
extern MethodInfo BaseCardboardDevice_UpdateScreenData_m214_MethodInfo;
extern Il2CppGenericMethod Queue_1__ctor_m563_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m564_GenericMethod;
extern Il2CppGenericMethod Queue_1_get_Count_m574_GenericMethod;
extern Il2CppGenericMethod Queue_1_CopyTo_m576_GenericMethod;
extern Il2CppGenericMethod Queue_1_Clear_m577_GenericMethod;
extern Il2CppGenericMethod Queue_1_Enqueue_m578_GenericMethod;


// System.Void BaseCardboardDevice::.ctor()
extern MethodInfo BaseCardboardDevice__ctor_m203_MethodInfo;
extern TypeInfo* SingleU5BU5D_t47_il2cpp_TypeInfo_var;
extern TypeInfo* Queue_1_t62_il2cpp_TypeInfo_var;
extern MethodInfo* Queue_1__ctor_m563_MethodInfo_var;
extern "C" void BaseCardboardDevice__ctor_m203 (BaseCardboardDevice_t63 * __this, MethodInfo* method)
{
	static bool BaseCardboardDevice__ctor_m203_init;
	if (!BaseCardboardDevice__ctor_m203_init)
	{
		SingleU5BU5D_t47_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&SingleU5BU5D_t47_0_0_0);
		Queue_1_t62_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Queue_1_t62_0_0_0);
		Queue_1__ctor_m563_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Queue_1__ctor_m563_GenericMethod);
		BaseCardboardDevice__ctor_m203_init = true;
	}
	Matrix4x4_t32  V_0 = {0};
	Matrix4x4_t32  V_1 = {0};
	Matrix4x4_t32  V_2 = {0};
	{
		__this->___headData_20 = ((SingleU5BU5D_t47*)SZArrayNew(SingleU5BU5D_t47_il2cpp_TypeInfo_var, ((int32_t)16)));
		__this->___viewData_21 = ((SingleU5BU5D_t47*)SZArrayNew(SingleU5BU5D_t47_il2cpp_TypeInfo_var, ((int32_t)104)));
		__this->___profileData_22 = ((SingleU5BU5D_t47*)SZArrayNew(SingleU5BU5D_t47_il2cpp_TypeInfo_var, ((int32_t)13)));
		Initobj (InitializedTypeInfo(&Matrix4x4_t32_il2cpp_TypeInfo), (&V_0));
		Matrix4x4_t32  L_0 = V_0;
		__this->___headView_23 = L_0;
		Initobj (InitializedTypeInfo(&Matrix4x4_t32_il2cpp_TypeInfo), (&V_1));
		Matrix4x4_t32  L_1 = V_1;
		__this->___leftEyeView_24 = L_1;
		Initobj (InitializedTypeInfo(&Matrix4x4_t32_il2cpp_TypeInfo), (&V_2));
		Matrix4x4_t32  L_2 = V_2;
		__this->___rightEyeView_25 = L_2;
		Queue_1_t62 * L_3 = (Queue_1_t62 *)il2cpp_codegen_object_new (Queue_1_t62_il2cpp_TypeInfo_var);
		Queue_1__ctor_m563(L_3, /*hidden argument*/Queue_1__ctor_m563_MethodInfo_var);
		__this->___eventQueue_26 = L_3;
		BaseVRDevice__ctor_m236(__this, /*hidden argument*/&BaseVRDevice__ctor_m236_MethodInfo);
		return;
	}
}
// System.Boolean BaseCardboardDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern MethodInfo BaseCardboardDevice_SupportsNativeDistortionCorrection_m204_MethodInfo;
extern MethodInfo* List_1_Add_m564_MethodInfo_var;
extern "C" bool BaseCardboardDevice_SupportsNativeDistortionCorrection_m204 (BaseCardboardDevice_t63 * __this, List_1_t64 * ___diagnostics, MethodInfo* method)
{
	static bool BaseCardboardDevice_SupportsNativeDistortionCorrection_m204_init;
	if (!BaseCardboardDevice_SupportsNativeDistortionCorrection_m204_init)
	{
		List_1_Add_m564_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m564_GenericMethod);
		BaseCardboardDevice_SupportsNativeDistortionCorrection_m204_init = true;
	}
	bool V_0 = false;
	{
		List_1_t64 * L_0 = ___diagnostics;
		bool L_1 = BaseVRDevice_SupportsNativeDistortionCorrection_m240(__this, L_0, /*hidden argument*/&BaseVRDevice_SupportsNativeDistortionCorrection_m240_MethodInfo);
		V_0 = L_1;
		bool L_2 = (__this->___debugDisableNativeDistortion_28);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = 0;
		List_1_t64 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m564_MethodInfo_var, L_3, (String_t*) &_stringLiteral32);
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean BaseCardboardDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern MethodInfo BaseCardboardDevice_SupportsNativeUILayer_m205_MethodInfo;
extern MethodInfo* List_1_Add_m564_MethodInfo_var;
extern "C" bool BaseCardboardDevice_SupportsNativeUILayer_m205 (BaseCardboardDevice_t63 * __this, List_1_t64 * ___diagnostics, MethodInfo* method)
{
	static bool BaseCardboardDevice_SupportsNativeUILayer_m205_init;
	if (!BaseCardboardDevice_SupportsNativeUILayer_m205_init)
	{
		List_1_Add_m564_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m564_GenericMethod);
		BaseCardboardDevice_SupportsNativeUILayer_m205_init = true;
	}
	bool V_0 = false;
	{
		List_1_t64 * L_0 = ___diagnostics;
		bool L_1 = BaseVRDevice_SupportsNativeUILayer_m241(__this, L_0, /*hidden argument*/&BaseVRDevice_SupportsNativeUILayer_m241_MethodInfo);
		V_0 = L_1;
		bool L_2 = (__this->___debugDisableNativeUILayer_29);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = 0;
		List_1_t64 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m564_MethodInfo_var, L_3, (String_t*) &_stringLiteral32);
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void BaseCardboardDevice::SetDistortionCorrectionEnabled(System.Boolean)
extern MethodInfo BaseCardboardDevice_SetDistortionCorrectionEnabled_m206_MethodInfo;
extern "C" void BaseCardboardDevice_SetDistortionCorrectionEnabled_m206 (BaseCardboardDevice_t63 * __this, bool ___enabled, MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		BaseCardboardDevice_EnableDistortionCorrection_m226(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseCardboardDevice_EnableDistortionCorrection_m226_MethodInfo);
		return;
	}
}
// System.Void BaseCardboardDevice::SetAlignmentMarkerEnabled(System.Boolean)
extern MethodInfo BaseCardboardDevice_SetAlignmentMarkerEnabled_m207_MethodInfo;
extern "C" void BaseCardboardDevice_SetAlignmentMarkerEnabled_m207 (BaseCardboardDevice_t63 * __this, bool ___enabled, MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		BaseCardboardDevice_EnableAlignmentMarker_m227(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseCardboardDevice_EnableAlignmentMarker_m227_MethodInfo);
		return;
	}
}
// System.Void BaseCardboardDevice::SetNeckModelScale(System.Single)
extern MethodInfo BaseCardboardDevice_SetNeckModelScale_m208_MethodInfo;
extern "C" void BaseCardboardDevice_SetNeckModelScale_m208 (BaseCardboardDevice_t63 * __this, float ___scale, MethodInfo* method)
{
	{
		float L_0 = ___scale;
		BaseCardboardDevice_SetNeckModelFactor_m230(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseCardboardDevice_SetNeckModelFactor_m230_MethodInfo);
		return;
	}
}
// System.Void BaseCardboardDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern MethodInfo BaseCardboardDevice_SetAutoDriftCorrectionEnabled_m209_MethodInfo;
extern "C" void BaseCardboardDevice_SetAutoDriftCorrectionEnabled_m209 (BaseCardboardDevice_t63 * __this, bool ___enabled, MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		BaseCardboardDevice_EnableAutoDriftCorrection_m228(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseCardboardDevice_EnableAutoDriftCorrection_m228_MethodInfo);
		return;
	}
}
// System.Void BaseCardboardDevice::SetElectronicDisplayStabilizationEnabled(System.Boolean)
extern MethodInfo BaseCardboardDevice_SetElectronicDisplayStabilizationEnabled_m210_MethodInfo;
extern "C" void BaseCardboardDevice_SetElectronicDisplayStabilizationEnabled_m210 (BaseCardboardDevice_t63 * __this, bool ___enabled, MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		BaseCardboardDevice_EnableElectronicDisplayStabilization_m229(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseCardboardDevice_EnableElectronicDisplayStabilization_m229_MethodInfo);
		return;
	}
}
// System.Void BaseCardboardDevice::Init()
extern MethodInfo BaseCardboardDevice_Init_m211_MethodInfo;
extern "C" void BaseCardboardDevice_Init_m211 (BaseCardboardDevice_t63 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m316_MethodInfo);
		int32_t L_1 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t69_il2cpp_TypeInfo));
		int32_t L_2 = Mathf_Max_m565(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Max_m565_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		int32_t L_4 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m316_MethodInfo);
		int32_t L_5 = Mathf_Min_m566(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Min_m566_MethodInfo);
		V_1 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = Screen_get_dpi_m484(NULL /*static, unused*/, /*hidden argument*/&Screen_get_dpi_m484_MethodInfo);
		float L_9 = Screen_get_dpi_m484(NULL /*static, unused*/, /*hidden argument*/&Screen_get_dpi_m484_MethodInfo);
		BaseCardboardDevice_Start_m223(NULL /*static, unused*/, L_6, L_7, L_8, L_9, /*hidden argument*/&BaseCardboardDevice_Start_m223_MethodInfo);
		IntPtr_t L_10 = { &BaseCardboardDevice_OnVREvent_m222_MethodInfo };
		VREventCallback_t61 * L_11 = (VREventCallback_t61 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VREventCallback_t61_il2cpp_TypeInfo));
		VREventCallback__ctor_m199(L_11, NULL, L_10, /*hidden argument*/&VREventCallback__ctor_m199_MethodInfo);
		BaseCardboardDevice_SetEventCallback_m224(NULL /*static, unused*/, L_11, /*hidden argument*/&BaseCardboardDevice_SetEventCallback_m224_MethodInfo);
		return;
	}
}
// System.Void BaseCardboardDevice::SetStereoScreen(UnityEngine.RenderTexture)
extern MethodInfo BaseCardboardDevice_SetStereoScreen_m212_MethodInfo;
extern "C" void BaseCardboardDevice_SetStereoScreen_m212 (BaseCardboardDevice_t63 * __this, RenderTexture_t10 * ___stereoScreen, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		RenderTexture_t10 * L_0 = ___stereoScreen;
		bool L_1 = Object_op_Inequality_m312(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		RenderTexture_t10 * L_2 = ___stereoScreen;
		NullCheck(L_2);
		int32_t L_3 = Texture_GetNativeTextureID_m567(L_2, /*hidden argument*/&Texture_GetNativeTextureID_m567_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		BaseCardboardDevice_SetTextureId_m225(NULL /*static, unused*/, G_B3_0, /*hidden argument*/&BaseCardboardDevice_SetTextureId_m225_MethodInfo);
		return;
	}
}
// System.Void BaseCardboardDevice::UpdateState()
extern MethodInfo BaseCardboardDevice_UpdateState_m213_MethodInfo;
extern "C" void BaseCardboardDevice_UpdateState_m213 (BaseCardboardDevice_t63 * __this, MethodInfo* method)
{
	{
		SingleU5BU5D_t47* L_0 = (__this->___headData_20);
		float L_1 = Time_get_smoothDeltaTime_m568(NULL /*static, unused*/, /*hidden argument*/&Time_get_smoothDeltaTime_m568_MethodInfo);
		BaseCardboardDevice_GetHeadPose_m233(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&BaseCardboardDevice_GetHeadPose_m233_MethodInfo);
		Matrix4x4_t32 * L_2 = &(__this->___headView_23);
		SingleU5BU5D_t47* L_3 = (__this->___headData_20);
		BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_2, L_3, 0, /*hidden argument*/&BaseCardboardDevice_ExtractMatrix_m220_MethodInfo);
		MutablePose3D_t55 * L_4 = (__this->___headPose_1);
		Matrix4x4_t32 * L_5 = &(__this->___headView_23);
		Matrix4x4_t32  L_6 = Matrix4x4_get_inverse_m569(L_5, /*hidden argument*/&Matrix4x4_get_inverse_m569_MethodInfo);
		NullCheck(L_4);
		MutablePose3D_SetRightHanded_m173(L_4, L_6, /*hidden argument*/&MutablePose3D_SetRightHanded_m173_MethodInfo);
		return;
	}
}
// System.Void BaseCardboardDevice::UpdateScreenData()
extern "C" void BaseCardboardDevice_UpdateScreenData_m214 (BaseCardboardDevice_t63 * __this, MethodInfo* method)
{
	{
		BaseCardboardDevice_UpdateProfile_m219(__this, /*hidden argument*/&BaseCardboardDevice_UpdateProfile_m219_MethodInfo);
		bool L_0 = (__this->___debugDisableNativeProjections_27);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		BaseVRDevice_ComputeEyesFromProfile_m256(__this, /*hidden argument*/&BaseVRDevice_ComputeEyesFromProfile_m256_MethodInfo);
		goto IL_0022;
	}

IL_001c:
	{
		BaseCardboardDevice_UpdateView_m218(__this, /*hidden argument*/&BaseCardboardDevice_UpdateView_m218_MethodInfo);
	}

IL_0022:
	{
		return;
	}
}
// System.Void BaseCardboardDevice::Recenter()
extern MethodInfo BaseCardboardDevice_Recenter_m215_MethodInfo;
extern "C" void BaseCardboardDevice_Recenter_m215 (BaseCardboardDevice_t63 * __this, MethodInfo* method)
{
	{
		BaseCardboardDevice_ResetHeadTracker_m231(NULL /*static, unused*/, /*hidden argument*/&BaseCardboardDevice_ResetHeadTracker_m231_MethodInfo);
		return;
	}
}
// System.Void BaseCardboardDevice::PostRender(System.Boolean)
extern MethodInfo BaseCardboardDevice_PostRender_m216_MethodInfo;
extern "C" void BaseCardboardDevice_PostRender_m216 (BaseCardboardDevice_t63 * __this, bool ___vrMode, MethodInfo* method)
{
	{
		bool L_0 = ___vrMode;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		GL_IssuePluginEvent_m570(NULL /*static, unused*/, 0, /*hidden argument*/&GL_IssuePluginEvent_m570_MethodInfo);
		GL_InvalidateState_m571(NULL /*static, unused*/, /*hidden argument*/&GL_InvalidateState_m571_MethodInfo);
	}

IL_0011:
	{
		VirtActionInvoker0::Invoke(&BaseCardboardDevice_ProcessEvents_m221_MethodInfo, __this);
		return;
	}
}
// System.Void BaseCardboardDevice::OnApplicationQuit()
extern MethodInfo BaseCardboardDevice_OnApplicationQuit_m217_MethodInfo;
extern "C" void BaseCardboardDevice_OnApplicationQuit_m217 (BaseCardboardDevice_t63 * __this, MethodInfo* method)
{
	{
		BaseCardboardDevice_Stop_m235(NULL /*static, unused*/, /*hidden argument*/&BaseCardboardDevice_Stop_m235_MethodInfo);
		BaseVRDevice_OnApplicationQuit_m254(__this, /*hidden argument*/&BaseVRDevice_OnApplicationQuit_m254_MethodInfo);
		return;
	}
}
// System.Void BaseCardboardDevice::UpdateView()
extern "C" void BaseCardboardDevice_UpdateView_m218 (BaseCardboardDevice_t63 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		SingleU5BU5D_t47* L_0 = (__this->___viewData_21);
		BaseCardboardDevice_GetViewParameters_m234(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseCardboardDevice_GetViewParameters_m234_MethodInfo);
		V_0 = 0;
		Matrix4x4_t32 * L_1 = &(__this->___leftEyeView_24);
		SingleU5BU5D_t47* L_2 = (__this->___viewData_21);
		int32_t L_3 = V_0;
		int32_t L_4 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&BaseCardboardDevice_ExtractMatrix_m220_MethodInfo);
		V_0 = L_4;
		Matrix4x4_t32 * L_5 = &(__this->___rightEyeView_25);
		SingleU5BU5D_t47* L_6 = (__this->___viewData_21);
		int32_t L_7 = V_0;
		int32_t L_8 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/&BaseCardboardDevice_ExtractMatrix_m220_MethodInfo);
		V_0 = L_8;
		MutablePose3D_t55 * L_9 = (__this->___leftEyePose_2);
		Matrix4x4_t32 * L_10 = &(__this->___leftEyeView_24);
		Matrix4x4_t32  L_11 = Matrix4x4_get_inverse_m569(L_10, /*hidden argument*/&Matrix4x4_get_inverse_m569_MethodInfo);
		NullCheck(L_9);
		MutablePose3D_SetRightHanded_m173(L_9, L_11, /*hidden argument*/&MutablePose3D_SetRightHanded_m173_MethodInfo);
		MutablePose3D_t55 * L_12 = (__this->___rightEyePose_3);
		Matrix4x4_t32 * L_13 = &(__this->___rightEyeView_25);
		Matrix4x4_t32  L_14 = Matrix4x4_get_inverse_m569(L_13, /*hidden argument*/&Matrix4x4_get_inverse_m569_MethodInfo);
		NullCheck(L_12);
		MutablePose3D_SetRightHanded_m173(L_12, L_14, /*hidden argument*/&MutablePose3D_SetRightHanded_m173_MethodInfo);
		Matrix4x4_t32 * L_15 = &(__this->___leftEyeDistortedProjection_4);
		SingleU5BU5D_t47* L_16 = (__this->___viewData_21);
		int32_t L_17 = V_0;
		int32_t L_18 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/&BaseCardboardDevice_ExtractMatrix_m220_MethodInfo);
		V_0 = L_18;
		Matrix4x4_t32 * L_19 = &(__this->___rightEyeDistortedProjection_5);
		SingleU5BU5D_t47* L_20 = (__this->___viewData_21);
		int32_t L_21 = V_0;
		int32_t L_22 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/&BaseCardboardDevice_ExtractMatrix_m220_MethodInfo);
		V_0 = L_22;
		Matrix4x4_t32 * L_23 = &(__this->___leftEyeUndistortedProjection_6);
		SingleU5BU5D_t47* L_24 = (__this->___viewData_21);
		int32_t L_25 = V_0;
		int32_t L_26 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/&BaseCardboardDevice_ExtractMatrix_m220_MethodInfo);
		V_0 = L_26;
		Matrix4x4_t32 * L_27 = &(__this->___rightEyeUndistortedProjection_7);
		SingleU5BU5D_t47* L_28 = (__this->___viewData_21);
		int32_t L_29 = V_0;
		int32_t L_30 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_27, L_28, L_29, /*hidden argument*/&BaseCardboardDevice_ExtractMatrix_m220_MethodInfo);
		V_0 = L_30;
		Rect_t18 * L_31 = &(__this->___leftEyeUndistortedViewport_10);
		SingleU5BU5D_t47* L_32 = (__this->___viewData_21);
		int32_t L_33 = V_0;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = L_33;
		SingleU5BU5D_t47* L_35 = (__this->___viewData_21);
		int32_t L_36 = V_0;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, ((int32_t)((int32_t)L_36+(int32_t)1)));
		int32_t L_37 = ((int32_t)((int32_t)L_36+(int32_t)1));
		SingleU5BU5D_t47* L_38 = (__this->___viewData_21);
		int32_t L_39 = V_0;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)((int32_t)L_39+(int32_t)2)));
		int32_t L_40 = ((int32_t)((int32_t)L_39+(int32_t)2));
		SingleU5BU5D_t47* L_41 = (__this->___viewData_21);
		int32_t L_42 = V_0;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)((int32_t)L_42+(int32_t)3)));
		int32_t L_43 = ((int32_t)((int32_t)L_42+(int32_t)3));
		Rect_Set_m572(L_31, (*(float*)(float*)SZArrayLdElema(L_32, L_34)), (*(float*)(float*)SZArrayLdElema(L_35, L_37)), (*(float*)(float*)SZArrayLdElema(L_38, L_40)), (*(float*)(float*)SZArrayLdElema(L_41, L_43)), /*hidden argument*/&Rect_Set_m572_MethodInfo);
		Rect_t18  L_44 = (__this->___leftEyeUndistortedViewport_10);
		__this->___leftEyeDistortedViewport_8 = L_44;
		int32_t L_45 = V_0;
		V_0 = ((int32_t)((int32_t)L_45+(int32_t)4));
		Rect_t18 * L_46 = &(__this->___rightEyeUndistortedViewport_11);
		SingleU5BU5D_t47* L_47 = (__this->___viewData_21);
		int32_t L_48 = V_0;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		int32_t L_49 = L_48;
		SingleU5BU5D_t47* L_50 = (__this->___viewData_21);
		int32_t L_51 = V_0;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, ((int32_t)((int32_t)L_51+(int32_t)1)));
		int32_t L_52 = ((int32_t)((int32_t)L_51+(int32_t)1));
		SingleU5BU5D_t47* L_53 = (__this->___viewData_21);
		int32_t L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, ((int32_t)((int32_t)L_54+(int32_t)2)));
		int32_t L_55 = ((int32_t)((int32_t)L_54+(int32_t)2));
		SingleU5BU5D_t47* L_56 = (__this->___viewData_21);
		int32_t L_57 = V_0;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)((int32_t)L_57+(int32_t)3)));
		int32_t L_58 = ((int32_t)((int32_t)L_57+(int32_t)3));
		Rect_Set_m572(L_46, (*(float*)(float*)SZArrayLdElema(L_47, L_49)), (*(float*)(float*)SZArrayLdElema(L_50, L_52)), (*(float*)(float*)SZArrayLdElema(L_53, L_55)), (*(float*)(float*)SZArrayLdElema(L_56, L_58)), /*hidden argument*/&Rect_Set_m572_MethodInfo);
		Rect_t18  L_59 = (__this->___rightEyeUndistortedViewport_11);
		__this->___rightEyeDistortedViewport_9 = L_59;
		int32_t L_60 = V_0;
		V_0 = ((int32_t)((int32_t)L_60+(int32_t)4));
		return;
	}
}
// System.Void BaseCardboardDevice::UpdateProfile()
extern "C" void BaseCardboardDevice_UpdateProfile_m219 (BaseCardboardDevice_t63 * __this, MethodInfo* method)
{
	Device_t44  V_0 = {0};
	Screen_t40  V_1 = {0};
	{
		SingleU5BU5D_t47* L_0 = (__this->___profileData_22);
		BaseCardboardDevice_GetProfile_m232(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseCardboardDevice_GetProfile_m232_MethodInfo);
		Initobj (InitializedTypeInfo(&Device_t44_il2cpp_TypeInfo), (&V_0));
		Initobj (InitializedTypeInfo(&Screen_t40_il2cpp_TypeInfo), (&V_1));
		MaxFOV_t42 * L_1 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t47* L_2 = (__this->___profileData_22);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		L_1->___outer_0 = (*(float*)(float*)SZArrayLdElema(L_2, L_3));
		MaxFOV_t42 * L_4 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t47* L_5 = (__this->___profileData_22);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		int32_t L_6 = 1;
		L_4->___upper_2 = (*(float*)(float*)SZArrayLdElema(L_5, L_6));
		MaxFOV_t42 * L_7 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t47* L_8 = (__this->___profileData_22);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		int32_t L_9 = 2;
		L_7->___inner_1 = (*(float*)(float*)SZArrayLdElema(L_8, L_9));
		MaxFOV_t42 * L_10 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t47* L_11 = (__this->___profileData_22);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		int32_t L_12 = 3;
		L_10->___lower_3 = (*(float*)(float*)SZArrayLdElema(L_11, L_12));
		SingleU5BU5D_t47* L_13 = (__this->___profileData_22);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		int32_t L_14 = 4;
		(&V_1)->___width_0 = (*(float*)(float*)SZArrayLdElema(L_13, L_14));
		SingleU5BU5D_t47* L_15 = (__this->___profileData_22);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 5);
		int32_t L_16 = 5;
		(&V_1)->___height_1 = (*(float*)(float*)SZArrayLdElema(L_15, L_16));
		SingleU5BU5D_t47* L_17 = (__this->___profileData_22);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 6);
		int32_t L_18 = 6;
		(&V_1)->___border_2 = (*(float*)(float*)SZArrayLdElema(L_17, L_18));
		Lenses_t41 * L_19 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t47* L_20 = (__this->___profileData_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 7);
		int32_t L_21 = 7;
		L_19->___separation_3 = (*(float*)(float*)SZArrayLdElema(L_20, L_21));
		Lenses_t41 * L_22 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t47* L_23 = (__this->___profileData_22);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 8);
		int32_t L_24 = 8;
		L_22->___offset_4 = (*(float*)(float*)SZArrayLdElema(L_23, L_24));
		Lenses_t41 * L_25 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t47* L_26 = (__this->___profileData_22);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)9));
		int32_t L_27 = ((int32_t)9);
		L_25->___screenDistance_5 = (*(float*)(float*)SZArrayLdElema(L_26, L_27));
		Lenses_t41 * L_28 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t47* L_29 = (__this->___profileData_22);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)10));
		int32_t L_30 = ((int32_t)10);
		L_28->___alignment_6 = (((int32_t)(*(float*)(float*)SZArrayLdElema(L_29, L_30))));
		Distortion_t43 * L_31 = &((&V_0)->___distortion_2);
		SingleU5BU5D_t47* L_32 = (__this->___profileData_22);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)11));
		int32_t L_33 = ((int32_t)11);
		L_31->___k1_0 = (*(float*)(float*)SZArrayLdElema(L_32, L_33));
		Distortion_t43 * L_34 = &((&V_0)->___distortion_2);
		SingleU5BU5D_t47* L_35 = (__this->___profileData_22);
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, ((int32_t)12));
		int32_t L_36 = ((int32_t)12);
		L_34->___k2_1 = (*(float*)(float*)SZArrayLdElema(L_35, L_36));
		Distortion_t43  L_37 = ((&V_0)->___distortion_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		Distortion_t43  L_38 = CardboardProfile_ApproximateInverse_m142(NULL /*static, unused*/, L_37, (1.0f), ((int32_t)10), /*hidden argument*/&CardboardProfile_ApproximateInverse_m142_MethodInfo);
		(&V_0)->___inverse_3 = L_38;
		CardboardProfile_t29 * L_39 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m238_MethodInfo);
		Screen_t40  L_40 = V_1;
		NullCheck(L_39);
		L_39->___screen_0 = L_40;
		CardboardProfile_t29 * L_41 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m238_MethodInfo);
		Device_t44  L_42 = V_0;
		NullCheck(L_41);
		L_41->___device_1 = L_42;
		return;
	}
}
// System.Int32 BaseCardboardDevice::ExtractMatrix(UnityEngine.Matrix4x4&,System.Single[],System.Int32)
extern "C" int32_t BaseCardboardDevice_ExtractMatrix_m220 (Object_t * __this /* static, unused */, Matrix4x4_t32 * ___mat, SingleU5BU5D_t47* ___data, int32_t ___i, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_002d;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0022;
	}

IL_000e:
	{
		Matrix4x4_t32 * L_0 = ___mat;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		SingleU5BU5D_t47* L_3 = ___data;
		int32_t L_4 = ___i;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Matrix4x4_set_Item_m412(L_0, L_1, L_2, (*(float*)(float*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = ___i;
		___i = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_11 = ___i;
		return L_11;
	}
}
// System.Void BaseCardboardDevice::ProcessEvents()
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern MethodInfo* Queue_1_get_Count_m574_MethodInfo_var;
extern MethodInfo* Queue_1_CopyTo_m576_MethodInfo_var;
extern MethodInfo* Queue_1_Clear_m577_MethodInfo_var;
extern "C" void BaseCardboardDevice_ProcessEvents_m221 (BaseCardboardDevice_t63 * __this, MethodInfo* method)
{
	static bool BaseCardboardDevice_ProcessEvents_m221_init;
	if (!BaseCardboardDevice_ProcessEvents_m221_init)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		Queue_1_get_Count_m574_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Queue_1_get_Count_m574_GenericMethod);
		Queue_1_CopyTo_m576_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Queue_1_CopyTo_m576_GenericMethod);
		Queue_1_Clear_m577_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Queue_1_Clear_m577_GenericMethod);
		BaseCardboardDevice_ProcessEvents_m221_init = true;
	}
	Int32U5BU5D_t109* V_0 = {0};
	Queue_1_t62 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int32U5BU5D_t109* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Int32U5BU5D_t109*)NULL;
		Queue_1_t62 * L_0 = (__this->___eventQueue_26);
		V_1 = L_0;
		Queue_1_t62 * L_1 = V_1;
		Monitor_Enter_m573(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t62 * L_2 = (__this->___eventQueue_26);
			NullCheck(L_2);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Queue_1_get_Count_m574_MethodInfo_var, L_2);
			V_2 = L_3;
			int32_t L_4 = V_2;
			if ((((int32_t)L_4) <= ((int32_t)0)))
			{
				goto IL_0041;
			}
		}

IL_0022:
		{
			int32_t L_5 = V_2;
			V_0 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, L_5));
			Queue_1_t62 * L_6 = (__this->___eventQueue_26);
			Int32U5BU5D_t109* L_7 = V_0;
			NullCheck(L_6);
			Queue_1_CopyTo_m576(L_6, L_7, 0, /*hidden argument*/Queue_1_CopyTo_m576_MethodInfo_var);
			Queue_1_t62 * L_8 = (__this->___eventQueue_26);
			NullCheck(L_8);
			Queue_1_Clear_m577(L_8, /*hidden argument*/Queue_1_Clear_m577_MethodInfo_var);
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Queue_1_t62 * L_9 = V_1;
		Monitor_Exit_m575(NULL /*static, unused*/, L_9, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_004d:
	{
		Int32U5BU5D_t109* L_10 = V_0;
		if (L_10)
		{
			goto IL_0054;
		}
	}
	{
		return;
	}

IL_0054:
	{
		Int32U5BU5D_t109* L_11 = V_0;
		V_4 = L_11;
		V_5 = 0;
		goto IL_00ab;
	}

IL_005f:
	{
		Int32U5BU5D_t109* L_12 = V_4;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_12, L_14));
		int32_t L_15 = V_3;
		V_6 = L_15;
		int32_t L_16 = V_6;
		if (((int32_t)((int32_t)L_16-(int32_t)1)) == 0)
		{
			goto IL_0082;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)1)) == 1)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)1)) == 2)
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00a5;
	}

IL_0082:
	{
		__this->___triggered_12 = 1;
		goto IL_00a5;
	}

IL_008e:
	{
		__this->___tilted_13 = 1;
		goto IL_00a5;
	}

IL_009a:
	{
		VirtActionInvoker0::Invoke(&BaseCardboardDevice_UpdateScreenData_m214_MethodInfo, __this);
		goto IL_00a5;
	}

IL_00a5:
	{
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_18 = V_5;
		Int32U5BU5D_t109* L_19 = V_4;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)(((Array_t *)L_19)->max_length))))))
		{
			goto IL_005f;
		}
	}
	{
		return;
	}
}
// System.Void BaseCardboardDevice::OnVREvent(System.Int32)
void STDCALL native_delegate_wrapper_BaseCardboardDevice_OnVREvent_m222(int32_t ___eventID)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	// Marshaling of parameter '___eventID' to managed representation

	BaseCardboardDevice_OnVREvent_m222(NULL, ___eventID, &BaseCardboardDevice_OnVREvent_m222_MethodInfo);

	// Marshaling of parameter '___eventID' to native representation

}
extern MethodInfo* Queue_1_Enqueue_m578_MethodInfo_var;
extern "C" void BaseCardboardDevice_OnVREvent_m222 (Object_t * __this /* static, unused */, int32_t ___eventID, MethodInfo* method)
{
	static bool BaseCardboardDevice_OnVREvent_m222_init;
	if (!BaseCardboardDevice_OnVREvent_m222_init)
	{
		Queue_1_Enqueue_m578_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Queue_1_Enqueue_m578_GenericMethod);
		BaseCardboardDevice_OnVREvent_m222_init = true;
	}
	BaseCardboardDevice_t63 * V_0 = {0};
	Queue_1_t62 * V_1 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = BaseVRDevice_GetDevice_m258(NULL /*static, unused*/, /*hidden argument*/&BaseVRDevice_GetDevice_m258_MethodInfo);
		V_0 = ((BaseCardboardDevice_t63 *)IsInst(L_0, InitializedTypeInfo(&BaseCardboardDevice_t63_il2cpp_TypeInfo)));
		BaseCardboardDevice_t63 * L_1 = V_0;
		NullCheck(L_1);
		Queue_1_t62 * L_2 = (L_1->___eventQueue_26);
		V_1 = L_2;
		Queue_1_t62 * L_3 = V_1;
		Monitor_Enter_m573(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		BaseCardboardDevice_t63 * L_4 = V_0;
		NullCheck(L_4);
		Queue_1_t62 * L_5 = (L_4->___eventQueue_26);
		int32_t L_6 = ___eventID;
		NullCheck(L_5);
		Queue_1_Enqueue_m578(L_5, L_6, /*hidden argument*/Queue_1_Enqueue_m578_MethodInfo_var);
		IL2CPP_LEAVE(0x30, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		Queue_1_t62 * L_7 = V_1;
		Monitor_Exit_m575(NULL /*static, unused*/, L_7, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x30, IL_0030)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0030:
	{
		return;
	}
}
// System.Void BaseCardboardDevice::Start(System.Int32,System.Int32,System.Single,System.Single)
extern "C" {void DEFAULT_CALL Start(int32_t, int32_t, float, float);}
extern "C" void BaseCardboardDevice_Start_m223 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, float ___xdpi, float ___ydpi, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, float, float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)Start;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Start'"));
		}
	}

	// Marshaling of parameter '___width' to native representation

	// Marshaling of parameter '___height' to native representation

	// Marshaling of parameter '___xdpi' to native representation

	// Marshaling of parameter '___ydpi' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___width, ___height, ___xdpi, ___ydpi);

	// Marshaling cleanup of parameter '___width' native representation

	// Marshaling cleanup of parameter '___height' native representation

	// Marshaling cleanup of parameter '___xdpi' native representation

	// Marshaling cleanup of parameter '___ydpi' native representation

}
// System.Void BaseCardboardDevice::SetEventCallback(BaseCardboardDevice/VREventCallback)
extern TypeInfo VREventCallback_t61_il2cpp_TypeInfo;
extern "C" {void DEFAULT_CALL SetEventCallback(methodPointerType);}
extern TypeInfo VREventCallback_t61_il2cpp_TypeInfo;
extern "C" void BaseCardboardDevice_SetEventCallback_m224 (Object_t * __this /* static, unused */, VREventCallback_t61 * ___callback, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SetEventCallback;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SetEventCallback'"));
		}
	}

	// Marshaling of parameter '___callback' to native representation
	methodPointerType ____callback_marshaled = { 0 };
	____callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback));

	// Native function invocation
	_il2cpp_pinvoke_func(____callback_marshaled);

	// Marshaling cleanup of parameter '___callback' native representation

}
// System.Void BaseCardboardDevice::SetTextureId(System.Int32)
extern "C" {void DEFAULT_CALL SetTextureId(int32_t);}
extern "C" void BaseCardboardDevice_SetTextureId_m225 (Object_t * __this /* static, unused */, int32_t ___id, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SetTextureId;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SetTextureId'"));
		}
	}

	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.Void BaseCardboardDevice::EnableDistortionCorrection(System.Boolean)
extern "C" {void DEFAULT_CALL EnableDistortionCorrection(int32_t);}
extern "C" void BaseCardboardDevice_EnableDistortionCorrection_m226 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableDistortionCorrection;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableDistortionCorrection'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void BaseCardboardDevice::EnableAlignmentMarker(System.Boolean)
extern "C" {void DEFAULT_CALL EnableAlignmentMarker(int32_t);}
extern "C" void BaseCardboardDevice_EnableAlignmentMarker_m227 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableAlignmentMarker;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableAlignmentMarker'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void BaseCardboardDevice::EnableAutoDriftCorrection(System.Boolean)
extern "C" {void DEFAULT_CALL EnableAutoDriftCorrection(int32_t);}
extern "C" void BaseCardboardDevice_EnableAutoDriftCorrection_m228 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableAutoDriftCorrection;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableAutoDriftCorrection'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void BaseCardboardDevice::EnableElectronicDisplayStabilization(System.Boolean)
extern "C" {void DEFAULT_CALL EnableElectronicDisplayStabilization(int32_t);}
extern "C" void BaseCardboardDevice_EnableElectronicDisplayStabilization_m229 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableElectronicDisplayStabilization;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableElectronicDisplayStabilization'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void BaseCardboardDevice::SetNeckModelFactor(System.Single)
extern "C" {void DEFAULT_CALL SetNeckModelFactor(float);}
extern "C" void BaseCardboardDevice_SetNeckModelFactor_m230 (Object_t * __this /* static, unused */, float ___factor, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SetNeckModelFactor;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SetNeckModelFactor'"));
		}
	}

	// Marshaling of parameter '___factor' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___factor);

	// Marshaling cleanup of parameter '___factor' native representation

}
// System.Void BaseCardboardDevice::ResetHeadTracker()
extern "C" {void DEFAULT_CALL ResetHeadTracker();}
extern "C" void BaseCardboardDevice_ResetHeadTracker_m231 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)ResetHeadTracker;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'ResetHeadTracker'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void BaseCardboardDevice::GetProfile(System.Single[])
extern "C" {void DEFAULT_CALL GetProfile(float*);}
extern "C" void BaseCardboardDevice_GetProfile_m232 (Object_t * __this /* static, unused */, SingleU5BU5D_t47* ___profile, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)GetProfile;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetProfile'"));
		}
	}

	// Marshaling of parameter '___profile' to native representation
	float* ____profile_marshaled = { 0 };
	____profile_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___profile);

	// Native function invocation
	_il2cpp_pinvoke_func(____profile_marshaled);

	// Marshaling cleanup of parameter '___profile' native representation

}
// System.Void BaseCardboardDevice::GetHeadPose(System.Single[],System.Single)
extern "C" {void DEFAULT_CALL GetHeadPose(float*, float);}
extern "C" void BaseCardboardDevice_GetHeadPose_m233 (Object_t * __this /* static, unused */, SingleU5BU5D_t47* ___pose, float ___fps, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*, float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)GetHeadPose;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetHeadPose'"));
		}
	}

	// Marshaling of parameter '___pose' to native representation
	float* ____pose_marshaled = { 0 };
	____pose_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___pose);

	// Marshaling of parameter '___fps' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____pose_marshaled, ___fps);

	// Marshaling cleanup of parameter '___pose' native representation

	// Marshaling cleanup of parameter '___fps' native representation

}
// System.Void BaseCardboardDevice::GetViewParameters(System.Single[])
extern "C" {void DEFAULT_CALL GetViewParameters(float*);}
extern "C" void BaseCardboardDevice_GetViewParameters_m234 (Object_t * __this /* static, unused */, SingleU5BU5D_t47* ___viewParams, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)GetViewParameters;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetViewParameters'"));
		}
	}

	// Marshaling of parameter '___viewParams' to native representation
	float* ____viewParams_marshaled = { 0 };
	____viewParams_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___viewParams);

	// Native function invocation
	_il2cpp_pinvoke_func(____viewParams_marshaled);

	// Marshaling cleanup of parameter '___viewParams' native representation

}
// System.Void BaseCardboardDevice::Stop()
extern "C" {void DEFAULT_CALL Stop();}
extern "C" void BaseCardboardDevice_Stop_m235 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)Stop;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Stop'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
#ifndef _MSC_VER
#else
#endif

// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Version
#include "mscorlib_System_Version.h"
// CardboardiOSDevice
#include "AssemblyU2DCSharp_CardboardiOSDevice.h"
extern TypeInfo Regex_t111_il2cpp_TypeInfo;
extern TypeInfo Version_t112_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CardboardiOSDevice_t65_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// CardboardiOSDevice
#include "AssemblyU2DCSharp_CardboardiOSDeviceMethodDeclarations.h"
extern MethodInfo BaseVRDevice_set_Profile_m239_MethodInfo;
extern MethodInfo BaseVRDevice_SupportsUnityRenderEvent_m242_MethodInfo;
extern MethodInfo Application_get_isMobilePlatform_m579_MethodInfo;
extern MethodInfo Regex__ctor_m580_MethodInfo;
extern MethodInfo Application_get_unityVersion_m581_MethodInfo;
extern MethodInfo Regex_Replace_m582_MethodInfo;
extern MethodInfo Version__ctor_m583_MethodInfo;
extern MethodInfo Version_op_LessThan_m584_MethodInfo;
extern MethodInfo BaseVRDevice_MakeProjection_m257_MethodInfo;
extern MethodInfo Rect_get_xMax_m585_MethodInfo;
extern MethodInfo Matrix4x4_get_zero_m586_MethodInfo;
extern MethodInfo CardboardiOSDevice__ctor_m259_MethodInfo;


// System.Void BaseVRDevice::.ctor()
extern "C" void BaseVRDevice__ctor_m236 (BaseVRDevice_t25 * __this, MethodInfo* method)
{
	{
		MutablePose3D_t55 * L_0 = (MutablePose3D_t55 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MutablePose3D_t55_il2cpp_TypeInfo));
		MutablePose3D__ctor_m170(L_0, /*hidden argument*/&MutablePose3D__ctor_m170_MethodInfo);
		__this->___headPose_1 = L_0;
		MutablePose3D_t55 * L_1 = (MutablePose3D_t55 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MutablePose3D_t55_il2cpp_TypeInfo));
		MutablePose3D__ctor_m170(L_1, /*hidden argument*/&MutablePose3D__ctor_m170_MethodInfo);
		__this->___leftEyePose_2 = L_1;
		MutablePose3D_t55 * L_2 = (MutablePose3D_t55 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MutablePose3D_t55_il2cpp_TypeInfo));
		MutablePose3D__ctor_m170(L_2, /*hidden argument*/&MutablePose3D__ctor_m170_MethodInfo);
		__this->___rightEyePose_3 = L_2;
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo));
		CardboardProfile_t29 * L_3 = ((CardboardProfile_t29_StaticFields*)InitializedTypeInfo(&CardboardProfile_t29_il2cpp_TypeInfo)->static_fields)->___Default_14;
		NullCheck(L_3);
		CardboardProfile_t29 * L_4 = CardboardProfile_Clone_m134(L_3, /*hidden argument*/&CardboardProfile_Clone_m134_MethodInfo);
		BaseVRDevice_set_Profile_m239(__this, L_4, /*hidden argument*/&BaseVRDevice_set_Profile_m239_MethodInfo);
		return;
	}
}
// System.Void BaseVRDevice::.cctor()
extern MethodInfo BaseVRDevice__cctor_m237_MethodInfo;
extern "C" void BaseVRDevice__cctor_m237 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// CardboardProfile BaseVRDevice::get_Profile()
extern "C" CardboardProfile_t29 * BaseVRDevice_get_Profile_m238 (BaseVRDevice_t25 * __this, MethodInfo* method)
{
	{
		CardboardProfile_t29 * L_0 = (__this->___U3CProfileU3Ek__BackingField_14);
		return L_0;
	}
}
// System.Void BaseVRDevice::set_Profile(CardboardProfile)
extern "C" void BaseVRDevice_set_Profile_m239 (BaseVRDevice_t25 * __this, CardboardProfile_t29 * ___value, MethodInfo* method)
{
	{
		CardboardProfile_t29 * L_0 = ___value;
		__this->___U3CProfileU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Void BaseVRDevice::Init()
// System.Void BaseVRDevice::SetDistortionCorrectionEnabled(System.Boolean)
// System.Void BaseVRDevice::SetVRModeEnabled(System.Boolean)
// System.Void BaseVRDevice::SetAlignmentMarkerEnabled(System.Boolean)
// System.Void BaseVRDevice::SetSettingsButtonEnabled(System.Boolean)
// System.Void BaseVRDevice::SetTapIsTrigger(System.Boolean)
// System.Void BaseVRDevice::SetNeckModelScale(System.Single)
// System.Void BaseVRDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
// System.Void BaseVRDevice::SetStereoScreen(UnityEngine.RenderTexture)
// System.Boolean BaseVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern MethodInfo* List_1_Add_m564_MethodInfo_var;
extern "C" bool BaseVRDevice_SupportsNativeDistortionCorrection_m240 (BaseVRDevice_t25 * __this, List_1_t64 * ___diagnostics, MethodInfo* method)
{
	static bool BaseVRDevice_SupportsNativeDistortionCorrection_m240_init;
	if (!BaseVRDevice_SupportsNativeDistortionCorrection_m240_init)
	{
		List_1_Add_m564_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m564_GenericMethod);
		BaseVRDevice_SupportsNativeDistortionCorrection_m240_init = true;
	}
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = SystemInfo_get_supportsRenderTextures_m302(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m302_MethodInfo);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t64 * L_1 = ___diagnostics;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m564_MethodInfo_var, L_1, (String_t*) &_stringLiteral33);
		V_0 = 0;
	}

IL_0019:
	{
		bool L_2 = BaseVRDevice_SupportsUnityRenderEvent_m242(__this, /*hidden argument*/&BaseVRDevice_SupportsUnityRenderEvent_m242_MethodInfo);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t64 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m564_MethodInfo_var, L_3, (String_t*) &_stringLiteral34);
		V_0 = 0;
	}

IL_0031:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean BaseVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern MethodInfo* List_1_Add_m564_MethodInfo_var;
extern "C" bool BaseVRDevice_SupportsNativeUILayer_m241 (BaseVRDevice_t25 * __this, List_1_t64 * ___diagnostics, MethodInfo* method)
{
	static bool BaseVRDevice_SupportsNativeUILayer_m241_init;
	if (!BaseVRDevice_SupportsNativeUILayer_m241_init)
	{
		List_1_Add_m564_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m564_GenericMethod);
		BaseVRDevice_SupportsNativeUILayer_m241_init = true;
	}
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = BaseVRDevice_SupportsUnityRenderEvent_m242(__this, /*hidden argument*/&BaseVRDevice_SupportsUnityRenderEvent_m242_MethodInfo);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		List_1_t64 * L_1 = ___diagnostics;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m564_MethodInfo_var, L_1, (String_t*) &_stringLiteral34);
		V_0 = 0;
	}

IL_001a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean BaseVRDevice::SupportsUnityRenderEvent()
extern "C" bool BaseVRDevice_SupportsUnityRenderEvent_m242 (BaseVRDevice_t25 * __this, MethodInfo* method)
{
	bool V_0 = false;
	String_t* V_1 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 1;
		bool L_0 = Application_get_isMobilePlatform_m579(NULL /*static, unused*/, /*hidden argument*/&Application_get_isMobilePlatform_m579_MethodInfo);
		if (!L_0)
		{
			goto IL_0061;
		}
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t111_il2cpp_TypeInfo));
			Regex_t111 * L_1 = (Regex_t111 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t111_il2cpp_TypeInfo));
			Regex__ctor_m580(L_1, (String_t*) &_stringLiteral35, /*hidden argument*/&Regex__ctor_m580_MethodInfo);
			String_t* L_2 = Application_get_unityVersion_m581(NULL /*static, unused*/, /*hidden argument*/&Application_get_unityVersion_m581_MethodInfo);
			NullCheck(L_1);
			String_t* L_3 = Regex_Replace_m582(L_1, L_2, (String_t*) &_stringLiteral36, /*hidden argument*/&Regex_Replace_m582_MethodInfo);
			V_1 = L_3;
			String_t* L_4 = V_1;
			Version_t112 * L_5 = (Version_t112 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Version_t112_il2cpp_TypeInfo));
			Version__ctor_m583(L_5, L_4, /*hidden argument*/&Version__ctor_m583_MethodInfo);
			Version_t112 * L_6 = (Version_t112 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Version_t112_il2cpp_TypeInfo));
			Version__ctor_m583(L_6, (String_t*) &_stringLiteral37, /*hidden argument*/&Version__ctor_m583_MethodInfo);
			bool L_7 = Version_op_LessThan_m584(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Version_op_LessThan_m584_MethodInfo);
			if (!L_7)
			{
				goto IL_0042;
			}
		}

IL_0040:
		{
			V_0 = 0;
		}

IL_0042:
		{
			goto IL_0061;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t110 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Object_t_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0047;
		throw e;
	}

CATCH_0047:
	{ // begin catch(System.Object)
		String_t* L_8 = Application_get_unityVersion_m581(NULL /*static, unused*/, /*hidden argument*/&Application_get_unityVersion_m581_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral38, L_8, /*hidden argument*/&String_Concat_m548_MethodInfo);
		Debug_LogWarning_m310(NULL /*static, unused*/, L_9, /*hidden argument*/&Debug_LogWarning_m310_MethodInfo);
		goto IL_0061;
	} // end catch (depth: 1)

IL_0061:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.RenderTexture BaseVRDevice::CreateStereoScreen()
extern "C" RenderTexture_t10 * BaseVRDevice_CreateStereoScreen_m243 (BaseVRDevice_t25 * __this, MethodInfo* method)
{
	{
		Debug_Log_m355(NULL /*static, unused*/, (String_t*) &_stringLiteral39, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		int32_t L_0 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m316_MethodInfo);
		int32_t L_1 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m318_MethodInfo);
		RenderTexture_t10 * L_2 = (RenderTexture_t10 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RenderTexture_t10_il2cpp_TypeInfo));
		RenderTexture__ctor_m319(L_2, L_0, L_1, ((int32_t)16), 4, /*hidden argument*/&RenderTexture__ctor_m319_MethodInfo);
		return L_2;
	}
}
// System.Boolean BaseVRDevice::SetDefaultDeviceProfile(System.Uri)
extern "C" bool BaseVRDevice_SetDefaultDeviceProfile_m244 (BaseVRDevice_t25 * __this, Uri_t26 * ___uri, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void BaseVRDevice::ShowSettingsDialog()
extern "C" void BaseVRDevice_ShowSettingsDialog_m245 (BaseVRDevice_t25 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Pose3D BaseVRDevice::GetHeadPose()
extern "C" Pose3D_t30 * BaseVRDevice_GetHeadPose_m246 (BaseVRDevice_t25 * __this, MethodInfo* method)
{
	{
		MutablePose3D_t55 * L_0 = (__this->___headPose_1);
		return L_0;
	}
}
// Pose3D BaseVRDevice::GetEyePose(Cardboard/Eye)
extern "C" Pose3D_t30 * BaseVRDevice_GetEyePose_m247 (BaseVRDevice_t25 * __this, int32_t ___eye, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___eye;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		MutablePose3D_t55 * L_3 = (__this->___leftEyePose_2);
		return L_3;
	}

IL_001b:
	{
		MutablePose3D_t55 * L_4 = (__this->___rightEyePose_3);
		return L_4;
	}

IL_0022:
	{
		return (Pose3D_t30 *)NULL;
	}
}
// UnityEngine.Matrix4x4 BaseVRDevice::GetProjection(Cardboard/Eye,Cardboard/Distortion)
extern "C" Matrix4x4_t32  BaseVRDevice_GetProjection_m248 (BaseVRDevice_t25 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method)
{
	int32_t V_0 = {0};
	Matrix4x4_t32  G_B6_0 = {0};
	Matrix4x4_t32  G_B10_0 = {0};
	{
		int32_t L_0 = ___eye;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0044;
	}

IL_0014:
	{
		int32_t L_3 = ___distortion;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		Matrix4x4_t32  L_4 = (__this->___leftEyeDistortedProjection_4);
		G_B6_0 = L_4;
		goto IL_002b;
	}

IL_0025:
	{
		Matrix4x4_t32  L_5 = (__this->___leftEyeUndistortedProjection_6);
		G_B6_0 = L_5;
	}

IL_002b:
	{
		return G_B6_0;
	}

IL_002c:
	{
		int32_t L_6 = ___distortion;
		if (L_6)
		{
			goto IL_003d;
		}
	}
	{
		Matrix4x4_t32  L_7 = (__this->___rightEyeDistortedProjection_5);
		G_B10_0 = L_7;
		goto IL_0043;
	}

IL_003d:
	{
		Matrix4x4_t32  L_8 = (__this->___rightEyeUndistortedProjection_7);
		G_B10_0 = L_8;
	}

IL_0043:
	{
		return G_B10_0;
	}

IL_0044:
	{
		Matrix4x4_t32  L_9 = Matrix4x4_get_identity_m538(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_identity_m538_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Rect BaseVRDevice::GetViewport(Cardboard/Eye,Cardboard/Distortion)
extern "C" Rect_t18  BaseVRDevice_GetViewport_m249 (BaseVRDevice_t25 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method)
{
	int32_t V_0 = {0};
	Rect_t18  V_1 = {0};
	Rect_t18  G_B6_0 = {0};
	Rect_t18  G_B10_0 = {0};
	{
		int32_t L_0 = ___eye;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0044;
	}

IL_0014:
	{
		int32_t L_3 = ___distortion;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		Rect_t18  L_4 = (__this->___leftEyeDistortedViewport_8);
		G_B6_0 = L_4;
		goto IL_002b;
	}

IL_0025:
	{
		Rect_t18  L_5 = (__this->___leftEyeUndistortedViewport_10);
		G_B6_0 = L_5;
	}

IL_002b:
	{
		return G_B6_0;
	}

IL_002c:
	{
		int32_t L_6 = ___distortion;
		if (L_6)
		{
			goto IL_003d;
		}
	}
	{
		Rect_t18  L_7 = (__this->___rightEyeDistortedViewport_9);
		G_B10_0 = L_7;
		goto IL_0043;
	}

IL_003d:
	{
		Rect_t18  L_8 = (__this->___rightEyeUndistortedViewport_11);
		G_B10_0 = L_8;
	}

IL_0043:
	{
		return G_B10_0;
	}

IL_0044:
	{
		Initobj (InitializedTypeInfo(&Rect_t18_il2cpp_TypeInfo), (&V_1));
		Rect_t18  L_9 = V_1;
		return L_9;
	}
}
// System.Void BaseVRDevice::UpdateState()
// System.Void BaseVRDevice::UpdateScreenData()
// System.Void BaseVRDevice::Recenter()
// System.Void BaseVRDevice::PostRender(System.Boolean)
// System.Void BaseVRDevice::SetTouchCoordinates(System.Int32,System.Int32)
extern "C" void BaseVRDevice_SetTouchCoordinates_m250 (BaseVRDevice_t25 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BaseVRDevice::OnPause(System.Boolean)
extern "C" void BaseVRDevice_OnPause_m251 (BaseVRDevice_t25 * __this, bool ___pause, MethodInfo* method)
{
	{
		bool L_0 = ___pause;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		VirtActionInvoker0::Invoke(&BaseVRDevice_UpdateScreenData_m383_MethodInfo, __this);
	}

IL_000c:
	{
		return;
	}
}
// System.Void BaseVRDevice::OnFocus(System.Boolean)
extern "C" void BaseVRDevice_OnFocus_m252 (BaseVRDevice_t25 * __this, bool ___focus, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BaseVRDevice::Reset()
extern "C" void BaseVRDevice_Reset_m253 (BaseVRDevice_t25 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&BaseVRDevice_Recenter_m397_MethodInfo, __this);
		return;
	}
}
// System.Void BaseVRDevice::OnApplicationQuit()
extern "C" void BaseVRDevice_OnApplicationQuit_m254 (BaseVRDevice_t25 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BaseVRDevice::Destroy()
extern "C" void BaseVRDevice_Destroy_m255 (BaseVRDevice_t25 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((BaseVRDevice_t25_StaticFields*)InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo)->static_fields)->___device_0;
		if ((!(((Object_t*)(BaseVRDevice_t25 *)L_0) == ((Object_t*)(BaseVRDevice_t25 *)__this))))
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo));
		((BaseVRDevice_t25_StaticFields*)InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo)->static_fields)->___device_0 = (BaseVRDevice_t25 *)NULL;
	}

IL_0011:
	{
		return;
	}
}
// System.Void BaseVRDevice::ComputeEyesFromProfile()
extern TypeInfo* SingleU5BU5D_t47_il2cpp_TypeInfo_var;
extern "C" void BaseVRDevice_ComputeEyesFromProfile_m256 (BaseVRDevice_t25 * __this, MethodInfo* method)
{
	static bool BaseVRDevice_ComputeEyesFromProfile_m256_init;
	if (!BaseVRDevice_ComputeEyesFromProfile_m256_init)
	{
		SingleU5BU5D_t47_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&SingleU5BU5D_t47_0_0_0);
		BaseVRDevice_ComputeEyesFromProfile_m256_init = true;
	}
	Matrix4x4_t32  V_0 = {0};
	SingleU5BU5D_t47* V_1 = {0};
	Matrix4x4_t32  V_2 = {0};
	Matrix4x4_t32 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	Matrix4x4_t32 * V_7 = {0};
	Matrix4x4_t32 * V_8 = {0};
	{
		Matrix4x4_t32  L_0 = Matrix4x4_get_identity_m538(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_identity_m538_MethodInfo);
		V_0 = L_0;
		CardboardProfile_t29 * L_1 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m238_MethodInfo);
		NullCheck(L_1);
		Device_t44 * L_2 = &(L_1->___device_1);
		Lenses_t41 * L_3 = &(L_2->___lenses_0);
		float L_4 = (L_3->___separation_3);
		Matrix4x4_set_Item_m412((&V_0), 0, 3, ((float)((float)((-L_4))/(float)(2.0f))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		MutablePose3D_t55 * L_5 = (__this->___leftEyePose_2);
		Matrix4x4_t32  L_6 = V_0;
		NullCheck(L_5);
		MutablePose3D_Set_m172(L_5, L_6, /*hidden argument*/&MutablePose3D_Set_m172_MethodInfo);
		V_1 = ((SingleU5BU5D_t47*)SZArrayNew(SingleU5BU5D_t47_il2cpp_TypeInfo_var, 4));
		CardboardProfile_t29 * L_7 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m238_MethodInfo);
		NullCheck(L_7);
		CardboardProfile_GetLeftEyeVisibleTanAngles_m137(L_7, (&V_1), /*hidden argument*/&CardboardProfile_GetLeftEyeVisibleTanAngles_m137_MethodInfo);
		SingleU5BU5D_t47* L_8 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t L_9 = 0;
		SingleU5BU5D_t47* L_10 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		int32_t L_11 = 1;
		SingleU5BU5D_t47* L_12 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		int32_t L_13 = 2;
		SingleU5BU5D_t47* L_14 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 3);
		int32_t L_15 = 3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo));
		Matrix4x4_t32  L_16 = BaseVRDevice_MakeProjection_m257(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_8, L_9)), (*(float*)(float*)SZArrayLdElema(L_10, L_11)), (*(float*)(float*)SZArrayLdElema(L_12, L_13)), (*(float*)(float*)SZArrayLdElema(L_14, L_15)), (1.0f), (1000.0f), /*hidden argument*/&BaseVRDevice_MakeProjection_m257_MethodInfo);
		__this->___leftEyeDistortedProjection_4 = L_16;
		CardboardProfile_t29 * L_17 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m238_MethodInfo);
		NullCheck(L_17);
		CardboardProfile_GetLeftEyeNoLensTanAngles_m138(L_17, (&V_1), /*hidden argument*/&CardboardProfile_GetLeftEyeNoLensTanAngles_m138_MethodInfo);
		SingleU5BU5D_t47* L_18 = V_1;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		int32_t L_19 = 0;
		SingleU5BU5D_t47* L_20 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		int32_t L_21 = 1;
		SingleU5BU5D_t47* L_22 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		int32_t L_23 = 2;
		SingleU5BU5D_t47* L_24 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 3);
		int32_t L_25 = 3;
		Matrix4x4_t32  L_26 = BaseVRDevice_MakeProjection_m257(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_18, L_19)), (*(float*)(float*)SZArrayLdElema(L_20, L_21)), (*(float*)(float*)SZArrayLdElema(L_22, L_23)), (*(float*)(float*)SZArrayLdElema(L_24, L_25)), (1.0f), (1000.0f), /*hidden argument*/&BaseVRDevice_MakeProjection_m257_MethodInfo);
		__this->___leftEyeUndistortedProjection_6 = L_26;
		CardboardProfile_t29 * L_27 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m238_MethodInfo);
		SingleU5BU5D_t47* L_28 = V_1;
		NullCheck(L_27);
		Rect_t18  L_29 = CardboardProfile_GetLeftEyeVisibleScreenRect_m139(L_27, L_28, /*hidden argument*/&CardboardProfile_GetLeftEyeVisibleScreenRect_m139_MethodInfo);
		__this->___leftEyeUndistortedViewport_10 = L_29;
		Rect_t18  L_30 = (__this->___leftEyeUndistortedViewport_10);
		__this->___leftEyeDistortedViewport_8 = L_30;
		Matrix4x4_t32  L_31 = V_0;
		V_2 = L_31;
		Matrix4x4_t32 * L_32 = (&V_2);
		V_3 = L_32;
		int32_t L_33 = 0;
		V_4 = L_33;
		int32_t L_34 = 3;
		V_5 = L_34;
		Matrix4x4_t32 * L_35 = V_3;
		int32_t L_36 = V_4;
		int32_t L_37 = V_5;
		float L_38 = Matrix4x4_get_Item_m411(L_35, L_36, L_37, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		V_6 = L_38;
		float L_39 = V_6;
		Matrix4x4_set_Item_m412(L_32, L_33, L_34, ((float)((float)L_39*(float)(-1.0f))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		MutablePose3D_t55 * L_40 = (__this->___rightEyePose_3);
		Matrix4x4_t32  L_41 = V_2;
		NullCheck(L_40);
		MutablePose3D_Set_m172(L_40, L_41, /*hidden argument*/&MutablePose3D_Set_m172_MethodInfo);
		Matrix4x4_t32  L_42 = (__this->___leftEyeDistortedProjection_4);
		__this->___rightEyeDistortedProjection_5 = L_42;
		Matrix4x4_t32 * L_43 = &(__this->___rightEyeDistortedProjection_5);
		Matrix4x4_t32 * L_44 = L_43;
		V_7 = L_44;
		int32_t L_45 = 0;
		V_5 = L_45;
		int32_t L_46 = 2;
		V_4 = L_46;
		Matrix4x4_t32 * L_47 = V_7;
		int32_t L_48 = V_5;
		int32_t L_49 = V_4;
		float L_50 = Matrix4x4_get_Item_m411(L_47, L_48, L_49, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		V_6 = L_50;
		float L_51 = V_6;
		Matrix4x4_set_Item_m412(L_44, L_45, L_46, ((float)((float)L_51*(float)(-1.0f))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		Matrix4x4_t32  L_52 = (__this->___leftEyeUndistortedProjection_6);
		__this->___rightEyeUndistortedProjection_7 = L_52;
		Matrix4x4_t32 * L_53 = &(__this->___rightEyeUndistortedProjection_7);
		Matrix4x4_t32 * L_54 = L_53;
		V_8 = L_54;
		int32_t L_55 = 0;
		V_4 = L_55;
		int32_t L_56 = 2;
		V_5 = L_56;
		Matrix4x4_t32 * L_57 = V_8;
		int32_t L_58 = V_4;
		int32_t L_59 = V_5;
		float L_60 = Matrix4x4_get_Item_m411(L_57, L_58, L_59, /*hidden argument*/&Matrix4x4_get_Item_m411_MethodInfo);
		V_6 = L_60;
		float L_61 = V_6;
		Matrix4x4_set_Item_m412(L_54, L_55, L_56, ((float)((float)L_61*(float)(-1.0f))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		Rect_t18  L_62 = (__this->___leftEyeUndistortedViewport_10);
		__this->___rightEyeUndistortedViewport_11 = L_62;
		Rect_t18 * L_63 = &(__this->___rightEyeUndistortedViewport_11);
		Rect_t18 * L_64 = &(__this->___rightEyeUndistortedViewport_11);
		float L_65 = Rect_get_xMax_m585(L_64, /*hidden argument*/&Rect_get_xMax_m585_MethodInfo);
		Rect_set_x_m433(L_63, ((float)((float)(1.0f)-(float)L_65)), /*hidden argument*/&Rect_set_x_m433_MethodInfo);
		Rect_t18  L_66 = (__this->___rightEyeUndistortedViewport_11);
		__this->___rightEyeDistortedViewport_9 = L_66;
		return;
	}
}
// UnityEngine.Matrix4x4 BaseVRDevice::MakeProjection(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t32  BaseVRDevice_MakeProjection_m257 (Object_t * __this /* static, unused */, float ___l, float ___t, float ___r, float ___b, float ___n, float ___f, MethodInfo* method)
{
	Matrix4x4_t32  V_0 = {0};
	{
		Matrix4x4_t32  L_0 = Matrix4x4_get_zero_m586(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_zero_m586_MethodInfo);
		V_0 = L_0;
		float L_1 = ___n;
		float L_2 = ___r;
		float L_3 = ___l;
		Matrix4x4_set_Item_m412((&V_0), 0, 0, ((float)((float)((float)((float)(2.0f)*(float)L_1))/(float)((float)((float)L_2-(float)L_3)))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		float L_4 = ___n;
		float L_5 = ___t;
		float L_6 = ___b;
		Matrix4x4_set_Item_m412((&V_0), 1, 1, ((float)((float)((float)((float)(2.0f)*(float)L_4))/(float)((float)((float)L_5-(float)L_6)))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		float L_7 = ___r;
		float L_8 = ___l;
		float L_9 = ___r;
		float L_10 = ___l;
		Matrix4x4_set_Item_m412((&V_0), 0, 2, ((float)((float)((float)((float)L_7+(float)L_8))/(float)((float)((float)L_9-(float)L_10)))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		float L_11 = ___t;
		float L_12 = ___b;
		float L_13 = ___t;
		float L_14 = ___b;
		Matrix4x4_set_Item_m412((&V_0), 1, 2, ((float)((float)((float)((float)L_11+(float)L_12))/(float)((float)((float)L_13-(float)L_14)))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		float L_15 = ___n;
		float L_16 = ___f;
		float L_17 = ___n;
		float L_18 = ___f;
		Matrix4x4_set_Item_m412((&V_0), 2, 2, ((float)((float)((float)((float)L_15+(float)L_16))/(float)((float)((float)L_17-(float)L_18)))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		float L_19 = ___n;
		float L_20 = ___f;
		float L_21 = ___n;
		float L_22 = ___f;
		Matrix4x4_set_Item_m412((&V_0), 2, 3, ((float)((float)((float)((float)((float)((float)(2.0f)*(float)L_19))*(float)L_20))/(float)((float)((float)L_21-(float)L_22)))), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		Matrix4x4_set_Item_m412((&V_0), 3, 2, (-1.0f), /*hidden argument*/&Matrix4x4_set_Item_m412_MethodInfo);
		Matrix4x4_t32  L_23 = V_0;
		return L_23;
	}
}
// BaseVRDevice BaseVRDevice::GetDevice()
extern "C" BaseVRDevice_t25 * BaseVRDevice_GetDevice_m258 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_0 = ((BaseVRDevice_t25_StaticFields*)InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo)->static_fields)->___device_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		CardboardiOSDevice_t65 * L_1 = (CardboardiOSDevice_t65 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CardboardiOSDevice_t65_il2cpp_TypeInfo));
		CardboardiOSDevice__ctor_m259(L_1, /*hidden argument*/&CardboardiOSDevice__ctor_m259_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo));
		((BaseVRDevice_t25_StaticFields*)InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo)->static_fields)->___device_0 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo));
		BaseVRDevice_t25 * L_2 = ((BaseVRDevice_t25_StaticFields*)InitializedTypeInfo(&BaseVRDevice_t25_il2cpp_TypeInfo)->static_fields)->___device_0;
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Byte
#include "mscorlib_System_Byte.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
extern TypeInfo Encoding_t113_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t66_il2cpp_TypeInfo;
extern TypeInfo Byte_t114_il2cpp_TypeInfo;
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern MethodInfo CardboardiOSDevice_setVRModeEnabled_m273_MethodInfo;
extern MethodInfo CardboardiOSDevice_setSettingsButtonEnabled_m274_MethodInfo;
extern MethodInfo Encoding_get_UTF8_m587_MethodInfo;
extern MethodInfo Uri_ToString_m588_MethodInfo;
extern MethodInfo Encoding_GetBytes_m589_MethodInfo;
extern MethodInfo CardboardiOSDevice_setDefaultDeviceProfile_m277_MethodInfo;
extern MethodInfo CardboardiOSDevice_isOpenGLAPI_m272_MethodInfo;
extern MethodInfo CardboardiOSDevice_setSyncWithCardboardEnabled_m275_MethodInfo;
extern MethodInfo CardboardiOSDevice_SetAutoDriftCorrectionEnabled_m264_MethodInfo;
extern MethodInfo CardboardiOSDevice_isOnboardingDone_m278_MethodInfo;
extern MethodInfo CardboardiOSDevice_launchOnboardingDialog_m280_MethodInfo;
extern MethodInfo CardboardiOSDevice_readProfile_m276_MethodInfo;
extern MethodInfo CardboardiOSDevice_launchSettingsDialog_m279_MethodInfo;


// System.Void CardboardiOSDevice::.ctor()
extern "C" void CardboardiOSDevice__ctor_m259 (CardboardiOSDevice_t65 * __this, MethodInfo* method)
{
	{
		BaseCardboardDevice__ctor_m203(__this, /*hidden argument*/&BaseCardboardDevice__ctor_m203_MethodInfo);
		return;
	}
}
// System.Boolean CardboardiOSDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern MethodInfo CardboardiOSDevice_SupportsNativeDistortionCorrection_m260_MethodInfo;
extern MethodInfo* List_1_Add_m564_MethodInfo_var;
extern "C" bool CardboardiOSDevice_SupportsNativeDistortionCorrection_m260 (CardboardiOSDevice_t65 * __this, List_1_t64 * ___diagnostics, MethodInfo* method)
{
	static bool CardboardiOSDevice_SupportsNativeDistortionCorrection_m260_init;
	if (!CardboardiOSDevice_SupportsNativeDistortionCorrection_m260_init)
	{
		List_1_Add_m564_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m564_GenericMethod);
		CardboardiOSDevice_SupportsNativeDistortionCorrection_m260_init = true;
	}
	bool V_0 = false;
	{
		List_1_t64 * L_0 = ___diagnostics;
		bool L_1 = BaseCardboardDevice_SupportsNativeDistortionCorrection_m204(__this, L_0, /*hidden argument*/&BaseCardboardDevice_SupportsNativeDistortionCorrection_m204_MethodInfo);
		V_0 = L_1;
		bool L_2 = (__this->___isOpenGL_30);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t64 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m564_MethodInfo_var, L_3, (String_t*) &_stringLiteral40);
		V_0 = 0;
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean CardboardiOSDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern MethodInfo CardboardiOSDevice_SupportsNativeUILayer_m261_MethodInfo;
extern MethodInfo* List_1_Add_m564_MethodInfo_var;
extern "C" bool CardboardiOSDevice_SupportsNativeUILayer_m261 (CardboardiOSDevice_t65 * __this, List_1_t64 * ___diagnostics, MethodInfo* method)
{
	static bool CardboardiOSDevice_SupportsNativeUILayer_m261_init;
	if (!CardboardiOSDevice_SupportsNativeUILayer_m261_init)
	{
		List_1_Add_m564_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m564_GenericMethod);
		CardboardiOSDevice_SupportsNativeUILayer_m261_init = true;
	}
	bool V_0 = false;
	{
		List_1_t64 * L_0 = ___diagnostics;
		bool L_1 = BaseCardboardDevice_SupportsNativeUILayer_m205(__this, L_0, /*hidden argument*/&BaseCardboardDevice_SupportsNativeUILayer_m205_MethodInfo);
		V_0 = L_1;
		bool L_2 = (__this->___isOpenGL_30);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t64 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m564_MethodInfo_var, L_3, (String_t*) &_stringLiteral40);
		V_0 = 0;
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void CardboardiOSDevice::SetVRModeEnabled(System.Boolean)
extern MethodInfo CardboardiOSDevice_SetVRModeEnabled_m262_MethodInfo;
extern "C" void CardboardiOSDevice_SetVRModeEnabled_m262 (CardboardiOSDevice_t65 * __this, bool ___enabled, MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		CardboardiOSDevice_setVRModeEnabled_m273(NULL /*static, unused*/, L_0, /*hidden argument*/&CardboardiOSDevice_setVRModeEnabled_m273_MethodInfo);
		return;
	}
}
// System.Void CardboardiOSDevice::SetSettingsButtonEnabled(System.Boolean)
extern MethodInfo CardboardiOSDevice_SetSettingsButtonEnabled_m263_MethodInfo;
extern "C" void CardboardiOSDevice_SetSettingsButtonEnabled_m263 (CardboardiOSDevice_t65 * __this, bool ___enabled, MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		CardboardiOSDevice_setSettingsButtonEnabled_m274(NULL /*static, unused*/, L_0, /*hidden argument*/&CardboardiOSDevice_setSettingsButtonEnabled_m274_MethodInfo);
		return;
	}
}
// System.Void CardboardiOSDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetAutoDriftCorrectionEnabled_m264 (CardboardiOSDevice_t65 * __this, bool ___enabled, MethodInfo* method)
{
	{
		BaseCardboardDevice_SetAutoDriftCorrectionEnabled_m209(__this, 0, /*hidden argument*/&BaseCardboardDevice_SetAutoDriftCorrectionEnabled_m209_MethodInfo);
		return;
	}
}
// System.Void CardboardiOSDevice::SetTapIsTrigger(System.Boolean)
extern MethodInfo CardboardiOSDevice_SetTapIsTrigger_m265_MethodInfo;
extern "C" void CardboardiOSDevice_SetTapIsTrigger_m265 (CardboardiOSDevice_t65 * __this, bool ___enabled, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean CardboardiOSDevice::SetDefaultDeviceProfile(System.Uri)
extern MethodInfo CardboardiOSDevice_SetDefaultDeviceProfile_m266_MethodInfo;
extern "C" bool CardboardiOSDevice_SetDefaultDeviceProfile_m266 (CardboardiOSDevice_t65 * __this, Uri_t26 * ___uri, MethodInfo* method)
{
	ByteU5BU5D_t66* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t113_il2cpp_TypeInfo));
		Encoding_t113 * L_0 = Encoding_get_UTF8_m587(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m587_MethodInfo);
		Uri_t26 * L_1 = ___uri;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m588_MethodInfo, L_1);
		NullCheck(L_0);
		ByteU5BU5D_t66* L_3 = (ByteU5BU5D_t66*)VirtFuncInvoker1< ByteU5BU5D_t66*, String_t* >::Invoke(&Encoding_GetBytes_m589_MethodInfo, L_0, L_2);
		V_0 = L_3;
		ByteU5BU5D_t66* L_4 = V_0;
		ByteU5BU5D_t66* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = CardboardiOSDevice_setDefaultDeviceProfile_m277(NULL /*static, unused*/, L_4, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&CardboardiOSDevice_setDefaultDeviceProfile_m277_MethodInfo);
		return L_6;
	}
}
// System.Void CardboardiOSDevice::Init()
extern MethodInfo CardboardiOSDevice_Init_m267_MethodInfo;
extern "C" void CardboardiOSDevice_Init_m267 (CardboardiOSDevice_t65 * __this, MethodInfo* method)
{
	{
		bool L_0 = CardboardiOSDevice_isOpenGLAPI_m272(NULL /*static, unused*/, /*hidden argument*/&CardboardiOSDevice_isOpenGLAPI_m272_MethodInfo);
		__this->___isOpenGL_30 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t23_il2cpp_TypeInfo));
		Cardboard_t23 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m52_MethodInfo);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_SyncWithCardboardApp_m67(L_1, /*hidden argument*/&Cardboard_get_SyncWithCardboardApp_m67_MethodInfo);
		CardboardiOSDevice_setSyncWithCardboardEnabled_m275(NULL /*static, unused*/, L_2, /*hidden argument*/&CardboardiOSDevice_setSyncWithCardboardEnabled_m275_MethodInfo);
		BaseCardboardDevice_Init_m211(__this, /*hidden argument*/&BaseCardboardDevice_Init_m211_MethodInfo);
		VirtActionInvoker1< bool >::Invoke(&CardboardiOSDevice_SetAutoDriftCorrectionEnabled_m264_MethodInfo, __this, 0);
		return;
	}
}
// System.Void CardboardiOSDevice::PostRender(System.Boolean)
extern MethodInfo CardboardiOSDevice_PostRender_m268_MethodInfo;
extern "C" void CardboardiOSDevice_PostRender_m268 (CardboardiOSDevice_t65 * __this, bool ___vrMode, MethodInfo* method)
{
	CardboardiOSDevice_t65 * G_B2_0 = {0};
	CardboardiOSDevice_t65 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	CardboardiOSDevice_t65 * G_B3_1 = {0};
	{
		bool L_0 = ___vrMode;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		bool L_1 = (__this->___isOpenGL_30);
		G_B3_0 = ((int32_t)(L_1));
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		BaseCardboardDevice_PostRender_m216(G_B3_1, G_B3_0, /*hidden argument*/&BaseCardboardDevice_PostRender_m216_MethodInfo);
		return;
	}
}
// System.Void CardboardiOSDevice::OnFocus(System.Boolean)
extern MethodInfo CardboardiOSDevice_OnFocus_m269_MethodInfo;
extern "C" void CardboardiOSDevice_OnFocus_m269 (CardboardiOSDevice_t65 * __this, bool ___focus, MethodInfo* method)
{
	{
		bool L_0 = ___focus;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___debugOnboarding_31);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2 = CardboardiOSDevice_isOnboardingDone_m278(NULL /*static, unused*/, /*hidden argument*/&CardboardiOSDevice_isOnboardingDone_m278_MethodInfo);
		if (L_2)
		{
			goto IL_0027;
		}
	}

IL_001b:
	{
		__this->___debugOnboarding_31 = 0;
		CardboardiOSDevice_launchOnboardingDialog_m280(NULL /*static, unused*/, /*hidden argument*/&CardboardiOSDevice_launchOnboardingDialog_m280_MethodInfo);
	}

IL_0027:
	{
		return;
	}
}
// System.Void CardboardiOSDevice::OnPause(System.Boolean)
extern MethodInfo CardboardiOSDevice_OnPause_m270_MethodInfo;
extern "C" void CardboardiOSDevice_OnPause_m270 (CardboardiOSDevice_t65 * __this, bool ___pause, MethodInfo* method)
{
	{
		bool L_0 = ___pause;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		CardboardiOSDevice_readProfile_m276(NULL /*static, unused*/, /*hidden argument*/&CardboardiOSDevice_readProfile_m276_MethodInfo);
	}

IL_000b:
	{
		return;
	}
}
// System.Void CardboardiOSDevice::ShowSettingsDialog()
extern MethodInfo CardboardiOSDevice_ShowSettingsDialog_m271_MethodInfo;
extern "C" void CardboardiOSDevice_ShowSettingsDialog_m271 (CardboardiOSDevice_t65 * __this, MethodInfo* method)
{
	{
		CardboardiOSDevice_launchSettingsDialog_m279(NULL /*static, unused*/, /*hidden argument*/&CardboardiOSDevice_launchSettingsDialog_m279_MethodInfo);
		return;
	}
}
// System.Boolean CardboardiOSDevice::isOpenGLAPI()
extern "C" {int32_t DEFAULT_CALL isOpenGLAPI();}
extern "C" bool CardboardiOSDevice_isOpenGLAPI_m272 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)isOpenGLAPI;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'isOpenGLAPI'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void CardboardiOSDevice::setVRModeEnabled(System.Boolean)
extern "C" {void DEFAULT_CALL setVRModeEnabled(int32_t);}
extern "C" void CardboardiOSDevice_setVRModeEnabled_m273 (Object_t * __this /* static, unused */, bool ___enabled, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setVRModeEnabled;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setVRModeEnabled'"));
		}
	}

	// Marshaling of parameter '___enabled' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enabled);

	// Marshaling cleanup of parameter '___enabled' native representation

}
// System.Void CardboardiOSDevice::setSettingsButtonEnabled(System.Boolean)
extern "C" {void DEFAULT_CALL setSettingsButtonEnabled(int32_t);}
extern "C" void CardboardiOSDevice_setSettingsButtonEnabled_m274 (Object_t * __this /* static, unused */, bool ___enabled, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setSettingsButtonEnabled;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setSettingsButtonEnabled'"));
		}
	}

	// Marshaling of parameter '___enabled' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enabled);

	// Marshaling cleanup of parameter '___enabled' native representation

}
// System.Void CardboardiOSDevice::setSyncWithCardboardEnabled(System.Boolean)
extern "C" {void DEFAULT_CALL setSyncWithCardboardEnabled(int32_t);}
extern "C" void CardboardiOSDevice_setSyncWithCardboardEnabled_m275 (Object_t * __this /* static, unused */, bool ___enabled, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setSyncWithCardboardEnabled;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setSyncWithCardboardEnabled'"));
		}
	}

	// Marshaling of parameter '___enabled' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enabled);

	// Marshaling cleanup of parameter '___enabled' native representation

}
// System.Void CardboardiOSDevice::readProfile()
extern "C" {void DEFAULT_CALL readProfile();}
extern "C" void CardboardiOSDevice_readProfile_m276 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)readProfile;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'readProfile'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Boolean CardboardiOSDevice::setDefaultDeviceProfile(System.Byte[],System.Int32)
extern "C" {int32_t DEFAULT_CALL setDefaultDeviceProfile(uint8_t*, int32_t);}
extern "C" bool CardboardiOSDevice_setDefaultDeviceProfile_m277 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___profileData, int32_t ___size, MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint8_t*, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setDefaultDeviceProfile;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setDefaultDeviceProfile'"));
		}
	}

	// Marshaling of parameter '___profileData' to native representation
	uint8_t* ____profileData_marshaled = { 0 };
	____profileData_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)___profileData);

	// Marshaling of parameter '___size' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____profileData_marshaled, ___size);

	// Marshaling cleanup of parameter '___profileData' native representation

	// Marshaling cleanup of parameter '___size' native representation

	return _return_value;
}
// System.Boolean CardboardiOSDevice::isOnboardingDone()
extern "C" {int32_t DEFAULT_CALL isOnboardingDone();}
extern "C" bool CardboardiOSDevice_isOnboardingDone_m278 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)isOnboardingDone;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'isOnboardingDone'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void CardboardiOSDevice::launchSettingsDialog()
extern "C" {void DEFAULT_CALL launchSettingsDialog();}
extern "C" void CardboardiOSDevice_launchSettingsDialog_m279 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)launchSettingsDialog;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'launchSettingsDialog'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void CardboardiOSDevice::launchOnboardingDialog()
extern "C" {void DEFAULT_CALL launchOnboardingDialog();}
extern "C" void CardboardiOSDevice_launchOnboardingDialog_m280 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)launchOnboardingDialog;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'launchOnboardingDialog'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$20_t67_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_$ArrayTMethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t67_marshal(const $ArrayType$20_t67& unmarshaled, $ArrayType$20_t67_marshaled& marshaled)
{
}
void $ArrayType$20_t67_marshal_back(const $ArrayType$20_t67_marshaled& marshaled, $ArrayType$20_t67& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t67_marshal_cleanup($ArrayType$20_t67_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



// System.Void <PrivateImplementationDetails>::.ctor()
extern MethodInfo U3CPrivateImplementationDetailsU3E__ctor_m281_MethodInfo;
extern "C" void U3CPrivateImplementationDetailsU3E__ctor_m281 (U3CPrivateImplementationDetailsU3E_t68 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
