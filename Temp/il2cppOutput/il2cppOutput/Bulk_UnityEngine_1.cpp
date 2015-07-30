#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
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
extern TypeInfo Application_t567_il2cpp_TypeInfo;
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.String
#include "mscorlib_System_String.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
extern TypeInfo LogCallback_t566_il2cpp_TypeInfo;
extern TypeInfo Void_t75_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo LogType_t481_il2cpp_TypeInfo;
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"
extern MethodInfo Application_get_platform_m2107_MethodInfo;
extern MethodInfo LogCallback_Invoke_m3075_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Boolean UnityEngine.Application::get_isPlaying()
extern MethodInfo Application_get_isPlaying_m408_MethodInfo;
extern "C" bool Application_get_isPlaying_m408 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m408_ftn) ();
	static Application_get_isPlaying_m408_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m408_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern MethodInfo Application_get_isEditor_m407_MethodInfo;
extern "C" bool Application_get_isEditor_m407 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m407_ftn) ();
	static Application_get_isEditor_m407_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m407_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m2107 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m2107_ftn) ();
	static Application_get_platform_m2107_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m2107_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
extern MethodInfo Application_get_isMobilePlatform_m579_MethodInfo;
extern "C" bool Application_get_isMobilePlatform_m579 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Application_get_platform_m2107(NULL /*static, unused*/, /*hidden argument*/&Application_get_platform_m2107_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)11))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)21))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)22))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_0;
		G_B6_0 = ((((int32_t)L_5) == ((int32_t)((int32_t)23)))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B6_0 = 1;
	}

IL_002d:
	{
		return G_B6_0;
	}
}
// System.String UnityEngine.Application::get_unityVersion()
extern MethodInfo Application_get_unityVersion_m581_MethodInfo;
extern "C" String_t* Application_get_unityVersion_m581 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Application_get_unityVersion_m581_ftn) ();
	static Application_get_unityVersion_m581_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_unityVersion_m581_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_unityVersion()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern MethodInfo Application_set_targetFrameRate_m384_MethodInfo;
extern "C" void Application_set_targetFrameRate_m384 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method)
{
	typedef void (*Application_set_targetFrameRate_m384_ftn) (int32_t);
	static Application_set_targetFrameRate_m384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_set_targetFrameRate_m384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::set_targetFrameRate(System.Int32)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern MethodInfo Application_CallLogCallback_m3078_MethodInfo;
extern "C" void Application_CallLogCallback_m3078 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, MethodInfo* method)
{
	LogCallback_t566 * V_0 = {0};
	LogCallback_t566 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t566 * L_1 = ((Application_t567_StaticFields*)InitializedTypeInfo(&Application_t567_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t566 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t566 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m3075_MethodInfo, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		LogCallback_t566 * L_7 = ((Application_t567_StaticFields*)InitializedTypeInfo(&Application_t567_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t566 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t566 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m3075_MethodInfo, L_9, L_10, L_11, L_12);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Behaviour_t402_il2cpp_TypeInfo;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern MethodInfo Component__ctor_m3155_MethodInfo;


// System.Void UnityEngine.Behaviour::.ctor()
extern MethodInfo Behaviour__ctor_m3079_MethodInfo;
extern "C" void Behaviour__ctor_m3079 (Behaviour_t402 * __this, MethodInfo* method)
{
	{
		Component__ctor_m3155(__this, /*hidden argument*/&Component__ctor_m3155_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern MethodInfo Behaviour_get_enabled_m307_MethodInfo;
extern "C" bool Behaviour_get_enabled_m307 (Behaviour_t402 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m307_ftn) (Behaviour_t402 *);
	static Behaviour_get_enabled_m307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m307_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern MethodInfo Behaviour_set_enabled_m311_MethodInfo;
extern "C" void Behaviour_set_enabled_m311 (Behaviour_t402 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m311_ftn) (Behaviour_t402 *, bool);
	static Behaviour_set_enabled_m311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern MethodInfo Behaviour_get_isActiveAndEnabled_m1873_MethodInfo;
extern "C" bool Behaviour_get_isActiveAndEnabled_m1873 (Behaviour_t402 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m1873_ftn) (Behaviour_t402 *);
	static Behaviour_get_isActiveAndEnabled_m1873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m1873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraCallback_t568_il2cpp_TypeInfo;
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CameraCallback__ctor_m3080_MethodInfo;
extern "C" void CameraCallback__ctor_m3080 (CameraCallback_t568 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern MethodInfo CameraCallback_Invoke_m3081_MethodInfo;
extern "C" void CameraCallback_Invoke_m3081 (CameraCallback_t568 * __this, Camera_t35 * ___cam, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m3081((CameraCallback_t568 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t35 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t35 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t568(Il2CppObject* delegate, Camera_t35 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t35 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern MethodInfo CameraCallback_BeginInvoke_m3082_MethodInfo;
extern "C" Object_t * CameraCallback_BeginInvoke_m3082 (CameraCallback_t568 * __this, Camera_t35 * ___cam, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CameraCallback_EndInvoke_m3083_MethodInfo;
extern "C" void CameraCallback_EndInvoke_m3083 (CameraCallback_t568 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Camera_t35_il2cpp_TypeInfo;
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
extern MethodInfo Camera_INTERNAL_set_backgroundColor_m3085_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_rect_m3086_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_rect_m3087_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_pixelRect_m3088_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_projectionMatrix_m3089_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_projectionMatrix_m3090_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenToViewportPoint_m3092_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenPointToRay_m3093_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry_m3100_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry2D_m3102_MethodInfo;


// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern MethodInfo Camera_set_fieldOfView_m427_MethodInfo;
extern "C" void Camera_set_fieldOfView_m427 (Camera_t35 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_fieldOfView_m427_ftn) (Camera_t35 *, float);
	static Camera_set_fieldOfView_m427_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_fieldOfView_m427_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_fieldOfView(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern MethodInfo Camera_get_nearClipPlane_m423_MethodInfo;
extern "C" float Camera_get_nearClipPlane_m423 (Camera_t35 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m423_ftn) (Camera_t35 *);
	static Camera_get_nearClipPlane_m423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern MethodInfo Camera_get_farClipPlane_m424_MethodInfo;
extern "C" float Camera_get_farClipPlane_m424 (Camera_t35 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m424_ftn) (Camera_t35 *);
	static Camera_get_farClipPlane_m424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m424_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_depth()
extern MethodInfo Camera_get_depth_m1802_MethodInfo;
extern "C" float Camera_get_depth_m1802 (Camera_t35 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_depth_m1802_ftn) (Camera_t35 *);
	static Camera_get_depth_m1802_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m1802_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_depth(System.Single)
extern MethodInfo Camera_set_depth_m396_MethodInfo;
extern "C" void Camera_set_depth_m396 (Camera_t35 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_depth_m396_ftn) (Camera_t35 *, float);
	static Camera_set_depth_m396_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_depth_m396_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_depth(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern MethodInfo Camera_get_cullingMask_m452_MethodInfo;
extern "C" int32_t Camera_get_cullingMask_m452 (Camera_t35 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m452_ftn) (Camera_t35 *);
	static Camera_get_cullingMask_m452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern MethodInfo Camera_set_cullingMask_m394_MethodInfo;
extern "C" void Camera_set_cullingMask_m394 (Camera_t35 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_cullingMask_m394_ftn) (Camera_t35 *, int32_t);
	static Camera_set_cullingMask_m394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_cullingMask_m394_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_cullingMask(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern MethodInfo Camera_get_eventMask_m3084_MethodInfo;
extern "C" int32_t Camera_get_eventMask_m3084 (Camera_t35 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m3084_ftn) (Camera_t35 *);
	static Camera_get_eventMask_m3084_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m3084_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_set_backgroundColor_m3085 (Camera_t35 * __this, Color_t12 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_backgroundColor_m3085_ftn) (Camera_t35 *, Color_t12 *);
	static Camera_INTERNAL_set_backgroundColor_m3085_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_backgroundColor_m3085_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern MethodInfo Camera_set_backgroundColor_m393_MethodInfo;
extern "C" void Camera_set_backgroundColor_m393 (Camera_t35 * __this, Color_t12  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_backgroundColor_m3085(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_backgroundColor_m3085_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_rect_m3086 (Camera_t35 * __this, Rect_t18 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_rect_m3086_ftn) (Camera_t35 *, Rect_t18 *);
	static Camera_INTERNAL_get_rect_m3086_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_rect_m3086_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_set_rect_m3087 (Camera_t35 * __this, Rect_t18 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_rect_m3087_ftn) (Camera_t35 *, Rect_t18 *);
	static Camera_INTERNAL_set_rect_m3087_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_rect_m3087_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern MethodInfo Camera_get_rect_m410_MethodInfo;
extern "C" Rect_t18  Camera_get_rect_m410 (Camera_t35 * __this, MethodInfo* method)
{
	Rect_t18  V_0 = {0};
	{
		Camera_INTERNAL_get_rect_m3086(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_rect_m3086_MethodInfo);
		Rect_t18  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern MethodInfo Camera_set_rect_m438_MethodInfo;
extern "C" void Camera_set_rect_m438 (Camera_t35 * __this, Rect_t18  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_rect_m3087(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_rect_m3087_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m3088 (Camera_t35 * __this, Rect_t18 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m3088_ftn) (Camera_t35 *, Rect_t18 *);
	static Camera_INTERNAL_get_pixelRect_m3088_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m3088_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern MethodInfo Camera_get_pixelRect_m441_MethodInfo;
extern "C" Rect_t18  Camera_get_pixelRect_m441 (Camera_t35 * __this, MethodInfo* method)
{
	Rect_t18  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m3088(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_pixelRect_m3088_MethodInfo);
		Rect_t18  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern MethodInfo Camera_get_targetTexture_m447_MethodInfo;
extern "C" RenderTexture_t10 * Camera_get_targetTexture_m447 (Camera_t35 * __this, MethodInfo* method)
{
	typedef RenderTexture_t10 * (*Camera_get_targetTexture_m447_ftn) (Camera_t35 *);
	static Camera_get_targetTexture_m447_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m447_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern MethodInfo Camera_set_targetTexture_m439_MethodInfo;
extern "C" void Camera_set_targetTexture_m439 (Camera_t35 * __this, RenderTexture_t10 * ___value, MethodInfo* method)
{
	typedef void (*Camera_set_targetTexture_m439_ftn) (Camera_t35 *, RenderTexture_t10 *);
	static Camera_set_targetTexture_m439_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_targetTexture_m439_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m3089 (Camera_t35 * __this, Matrix4x4_t32 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_projectionMatrix_m3089_ftn) (Camera_t35 *, Matrix4x4_t32 *);
	static Camera_INTERNAL_get_projectionMatrix_m3089_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_projectionMatrix_m3089_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_projectionMatrix_m3090 (Camera_t35 * __this, Matrix4x4_t32 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_projectionMatrix_m3090_ftn) (Camera_t35 *, Matrix4x4_t32 *);
	static Camera_INTERNAL_set_projectionMatrix_m3090_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_projectionMatrix_m3090_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern MethodInfo Camera_get_projectionMatrix_m417_MethodInfo;
extern "C" Matrix4x4_t32  Camera_get_projectionMatrix_m417 (Camera_t35 * __this, MethodInfo* method)
{
	Matrix4x4_t32  V_0 = {0};
	{
		Camera_INTERNAL_get_projectionMatrix_m3089(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_projectionMatrix_m3089_MethodInfo);
		Matrix4x4_t32  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern MethodInfo Camera_set_projectionMatrix_m425_MethodInfo;
extern "C" void Camera_set_projectionMatrix_m425 (Camera_t35 * __this, Matrix4x4_t32  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_projectionMatrix_m3090(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_projectionMatrix_m3090_MethodInfo);
		return;
	}
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern MethodInfo Camera_get_clearFlags_m3091_MethodInfo;
extern "C" int32_t Camera_get_clearFlags_m3091 (Camera_t35 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m3091_ftn) (Camera_t35 *);
	static Camera_get_clearFlags_m3091_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m3091_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern MethodInfo Camera_set_clearFlags_m391_MethodInfo;
extern "C" void Camera_set_clearFlags_m391 (Camera_t35 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_clearFlags_m391_ftn) (Camera_t35 *, int32_t);
	static Camera_set_clearFlags_m391_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_clearFlags_m391_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenToViewportPoint_m2043_MethodInfo;
extern "C" Vector3_t3  Camera_ScreenToViewportPoint_m2043 (Camera_t35 * __this, Vector3_t3  ___position, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m3092(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenToViewportPoint_m3092_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t3  Camera_INTERNAL_CALL_ScreenToViewportPoint_m3092 (Object_t * __this /* static, unused */, Camera_t35 * ___self, Vector3_t3 * ___position, MethodInfo* method)
{
	typedef Vector3_t3  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m3092_ftn) (Camera_t35 *, Vector3_t3 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m3092_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m3092_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenPointToRay_m1935_MethodInfo;
extern "C" Ray_t39  Camera_ScreenPointToRay_m1935 (Camera_t35 * __this, Vector3_t3  ___position, MethodInfo* method)
{
	{
		Ray_t39  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m3093(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenPointToRay_m3093_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t39  Camera_INTERNAL_CALL_ScreenPointToRay_m3093 (Object_t * __this /* static, unused */, Camera_t35 * ___self, Vector3_t3 * ___position, MethodInfo* method)
{
	typedef Ray_t39  (*Camera_INTERNAL_CALL_ScreenPointToRay_m3093_ftn) (Camera_t35 *, Vector3_t3 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m3093_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m3093_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern MethodInfo Camera_get_main_m296_MethodInfo;
extern "C" Camera_t35 * Camera_get_main_m296 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t35 * (*Camera_get_main_m296_ftn) ();
	static Camera_get_main_m296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m296_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern MethodInfo Camera_get_allCamerasCount_m3094_MethodInfo;
extern "C" int32_t Camera_get_allCamerasCount_m3094 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m3094_ftn) ();
	static Camera_get_allCamerasCount_m3094_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m3094_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern MethodInfo Camera_GetAllCameras_m3095_MethodInfo;
extern "C" int32_t Camera_GetAllCameras_m3095 (Object_t * __this /* static, unused */, CameraU5BU5D_t569* ___cameras, MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m3095_ftn) (CameraU5BU5D_t569*);
	static Camera_GetAllCameras_m3095_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m3095_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreCull_m3096_MethodInfo;
extern "C" void Camera_FireOnPreCull_m3096 (Object_t * __this /* static, unused */, Camera_t35 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t568 * L_0 = ((Camera_t35_StaticFields*)InitializedTypeInfo(&Camera_t35_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t568 * L_1 = ((Camera_t35_StaticFields*)InitializedTypeInfo(&Camera_t35_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		Camera_t35 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t35 * >::Invoke(&CameraCallback_Invoke_m3081_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreRender_m3097_MethodInfo;
extern "C" void Camera_FireOnPreRender_m3097 (Object_t * __this /* static, unused */, Camera_t35 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t568 * L_0 = ((Camera_t35_StaticFields*)InitializedTypeInfo(&Camera_t35_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t568 * L_1 = ((Camera_t35_StaticFields*)InitializedTypeInfo(&Camera_t35_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		Camera_t35 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t35 * >::Invoke(&CameraCallback_Invoke_m3081_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPostRender_m3098_MethodInfo;
extern "C" void Camera_FireOnPostRender_m3098 (Object_t * __this /* static, unused */, Camera_t35 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t568 * L_0 = ((Camera_t35_StaticFields*)InitializedTypeInfo(&Camera_t35_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t568 * L_1 = ((Camera_t35_StaticFields*)InitializedTypeInfo(&Camera_t35_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		Camera_t35 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t35 * >::Invoke(&CameraCallback_Invoke_m3081_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::Render()
extern MethodInfo Camera_Render_m440_MethodInfo;
extern "C" void Camera_Render_m440 (Camera_t35 * __this, MethodInfo* method)
{
	typedef void (*Camera_Render_m440_ftn) (Camera_t35 *);
	static Camera_Render_m440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_Render_m440_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::Render()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
extern MethodInfo Camera_set_useOcclusionCulling_m395_MethodInfo;
extern "C" void Camera_set_useOcclusionCulling_m395 (Camera_t35 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Camera_set_useOcclusionCulling_m395_ftn) (Camera_t35 *, bool);
	static Camera_set_useOcclusionCulling_m395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_useOcclusionCulling_m395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern MethodInfo Camera_CopyFrom_m451_MethodInfo;
extern "C" void Camera_CopyFrom_m451 (Camera_t35 * __this, Camera_t35 * ___other, MethodInfo* method)
{
	typedef void (*Camera_CopyFrom_m451_ftn) (Camera_t35 *, Camera_t35 *);
	static Camera_CopyFrom_m451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_CopyFrom_m451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::CopyFrom(UnityEngine.Camera)");
	_il2cpp_icall_func(__this, ___other);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry_m3099_MethodInfo;
extern "C" GameObject_t51 * Camera_RaycastTry_m3099 (Camera_t35 * __this, Ray_t39  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t51 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m3100(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry_m3100_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t51 * Camera_INTERNAL_CALL_RaycastTry_m3100 (Object_t * __this /* static, unused */, Camera_t35 * ___self, Ray_t39 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t51 * (*Camera_INTERNAL_CALL_RaycastTry_m3100_ftn) (Camera_t35 *, Ray_t39 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m3100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m3100_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry2D_m3101_MethodInfo;
extern "C" GameObject_t51 * Camera_RaycastTry2D_m3101 (Camera_t35 * __this, Ray_t39  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t51 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m3102(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry2D_m3102_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t51 * Camera_INTERNAL_CALL_RaycastTry2D_m3102 (Object_t * __this /* static, unused */, Camera_t35 * ___self, Ray_t39 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t51 * (*Camera_INTERNAL_CALL_RaycastTry2D_m3102_ftn) (Camera_t35 *, Ray_t39 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m3102_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m3102_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Debug_t570_il2cpp_TypeInfo;
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Object_ToString_m597_MethodInfo;
extern MethodInfo Debug_Internal_Log_m3103_MethodInfo;
extern MethodInfo Debug_Internal_LogException_m3104_MethodInfo;


// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m3103 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t79 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m3103_ftn) (int32_t, String_t*, Object_t79 *);
	static Debug_Internal_Log_m3103_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m3103_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m3104 (Object_t * __this /* static, unused */, Exception_t110 * ___exception, Object_t79 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m3104_ftn) (Exception_t110 *, Object_t79 *);
	static Debug_Internal_LogException_m3104_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m3104_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern MethodInfo Debug_Log_m355_MethodInfo;
extern "C" void Debug_Log_m355 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral218;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m3103(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t79 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3103_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern MethodInfo Debug_LogError_m373_MethodInfo;
extern "C" void Debug_LogError_m373 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral218;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m3103(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t79 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3103_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogError_m2093_MethodInfo;
extern "C" void Debug_LogError_m2093 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t79 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, L_0);
		Object_t79 * L_2 = ___context;
		Debug_Internal_Log_m3103(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m3103_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern MethodInfo Debug_LogException_m3105_MethodInfo;
extern "C" void Debug_LogException_m3105 (Object_t * __this /* static, unused */, Exception_t110 * ___exception, MethodInfo* method)
{
	{
		Exception_t110 * L_0 = ___exception;
		Debug_Internal_LogException_m3104(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Debug_Internal_LogException_m3104_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern MethodInfo Debug_LogException_m1971_MethodInfo;
extern "C" void Debug_LogException_m1971 (Object_t * __this /* static, unused */, Exception_t110 * ___exception, Object_t79 * ___context, MethodInfo* method)
{
	{
		Exception_t110 * L_0 = ___exception;
		Object_t79 * L_1 = ___context;
		Debug_Internal_LogException_m3104(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Debug_Internal_LogException_m3104_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern MethodInfo Debug_LogWarning_m310_MethodInfo;
extern "C" void Debug_LogWarning_m310 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, L_0);
		Debug_Internal_Log_m3103(NULL /*static, unused*/, 1, L_1, (Object_t79 *)NULL, /*hidden argument*/&Debug_Internal_Log_m3103_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogWarning_m2281_MethodInfo;
extern "C" void Debug_LogWarning_m2281 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t79 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, L_0);
		Object_t79 * L_2 = ___context;
		Debug_Internal_Log_m3103(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m3103_MethodInfo);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DisplaysUpdatedDelegate_t571_il2cpp_TypeInfo;
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo DisplaysUpdatedDelegate__ctor_m3106_MethodInfo;
extern "C" void DisplaysUpdatedDelegate__ctor_m3106 (DisplaysUpdatedDelegate_t571 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern MethodInfo DisplaysUpdatedDelegate_Invoke_m3107_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_Invoke_m3107 (DisplaysUpdatedDelegate_t571 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m3107((DisplaysUpdatedDelegate_t571 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t571(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DisplaysUpdatedDelegate_BeginInvoke_m3108_MethodInfo;
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m3108 (DisplaysUpdatedDelegate_t571 * __this, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo DisplaysUpdatedDelegate_EndInvoke_m3109_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m3109 (DisplaysUpdatedDelegate_t571 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Display_t573_il2cpp_TypeInfo;
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern TypeInfo DisplayU5BU5D_t572_il2cpp_TypeInfo;
extern TypeInfo Vector3_t3_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern Il2CppType DisplayU5BU5D_t572_0_0_0;
extern MethodInfo Display_GetRenderingExtImpl_m3131_MethodInfo;
extern MethodInfo Display_GetSystemExtImpl_m3130_MethodInfo;
extern MethodInfo Display_GetRenderingBuffersImpl_m3132_MethodInfo;
extern MethodInfo Object__ctor_m357_MethodInfo;
extern MethodInfo IntPtr__ctor_m3859_MethodInfo;
extern MethodInfo Display__ctor_m3110_MethodInfo;
extern MethodInfo Delegate_Combine_m304_MethodInfo;
extern MethodInfo Delegate_Remove_m305_MethodInfo;
extern MethodInfo Display_ActivateDisplayImpl_m3134_MethodInfo;
extern MethodInfo Display_SetParamsImpl_m3135_MethodInfo;
extern MethodInfo Display_SetRenderingResolutionImpl_m3133_MethodInfo;
extern MethodInfo Display_MultiDisplayLicenseImpl_m3136_MethodInfo;
extern MethodInfo Display_RelativeMouseAtImpl_m3137_MethodInfo;
extern MethodInfo Display__ctor_m3111_MethodInfo;


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m3110 (Display_t573 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m3859(&L_0, 0, /*hidden argument*/&IntPtr__ctor_m3859_MethodInfo);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m3111 (Display_t573 * __this, IntPtr_t ___nativeDisplay, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern MethodInfo Display__cctor_m3112_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t572_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m3112 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Display__cctor_m3112_init;
	if (!Display__cctor_m3112_init)
	{
		DisplayU5BU5D_t572_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t572_0_0_0);
		Display__cctor_m3112_init = true;
	}
	{
		DisplayU5BU5D_t572* L_0 = ((DisplayU5BU5D_t572*)SZArrayNew(DisplayU5BU5D_t572_il2cpp_TypeInfo_var, 1));
		Display_t573 * L_1 = (Display_t573 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display__ctor_m3110(L_1, /*hidden argument*/&Display__ctor_m3110_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t573 **)(Display_t573 **)SZArrayLdElema(L_0, 0)) = (Display_t573 *)L_1;
		((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t572* L_2 = ((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t573 **)(Display_t573 **)SZArrayLdElema(L_2, L_3));
		((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t571 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_add_onDisplaysUpdated_m3113_MethodInfo;
extern "C" void Display_add_onDisplaysUpdated_m3113 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t571 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t571 * L_0 = ((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t571 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Combine_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m304_MethodInfo);
		((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t571 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t571_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_remove_onDisplaysUpdated_m3114_MethodInfo;
extern "C" void Display_remove_onDisplaysUpdated_m3114 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t571 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t571 * L_0 = ((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t571 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Remove_m305(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m305_MethodInfo);
		((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t571 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t571_il2cpp_TypeInfo)));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern MethodInfo Display_get_renderingWidth_m3115_MethodInfo;
extern "C" int32_t Display_get_renderingWidth_m3115 (Display_t573 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m3131(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m3131_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern MethodInfo Display_get_renderingHeight_m3116_MethodInfo;
extern "C" int32_t Display_get_renderingHeight_m3116 (Display_t573 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m3131(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m3131_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern MethodInfo Display_get_systemWidth_m3117_MethodInfo;
extern "C" int32_t Display_get_systemWidth_m3117 (Display_t573 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m3130(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m3130_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern MethodInfo Display_get_systemHeight_m3118_MethodInfo;
extern "C" int32_t Display_get_systemHeight_m3118 (Display_t573 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m3130(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m3130_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern MethodInfo Display_get_colorBuffer_m3119_MethodInfo;
extern "C" RenderBuffer_t575  Display_get_colorBuffer_m3119 (Display_t573 * __this, MethodInfo* method)
{
	RenderBuffer_t575  V_0 = {0};
	RenderBuffer_t575  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m3132(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m3132_MethodInfo);
		RenderBuffer_t575  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern MethodInfo Display_get_depthBuffer_m3120_MethodInfo;
extern "C" RenderBuffer_t575  Display_get_depthBuffer_m3120 (Display_t573 * __this, MethodInfo* method)
{
	RenderBuffer_t575  V_0 = {0};
	RenderBuffer_t575  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m3132(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m3132_MethodInfo);
		RenderBuffer_t575  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern MethodInfo Display_Activate_m3121_MethodInfo;
extern "C" void Display_Activate_m3121 (Display_t573 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m3134(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/&Display_ActivateDisplayImpl_m3134_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_Activate_m3122_MethodInfo;
extern "C" void Display_Activate_m3122 (Display_t573 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m3134(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Display_ActivateDisplayImpl_m3134_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_SetParams_m3123_MethodInfo;
extern "C" void Display_SetParams_m3123 (Display_t573 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display_SetParamsImpl_m3135(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Display_SetParamsImpl_m3135_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern MethodInfo Display_SetRenderingResolution_m3124_MethodInfo;
extern "C" void Display_SetRenderingResolution_m3124 (Display_t573 * __this, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display_SetRenderingResolutionImpl_m3133(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Display_SetRenderingResolutionImpl_m3133_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern MethodInfo Display_MultiDisplayLicense_m3125_MethodInfo;
extern "C" bool Display_MultiDisplayLicense_m3125 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		bool L_0 = Display_MultiDisplayLicenseImpl_m3136(NULL /*static, unused*/, /*hidden argument*/&Display_MultiDisplayLicenseImpl_m3136_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern MethodInfo Display_RelativeMouseAt_m3126_MethodInfo;
extern "C" Vector3_t3  Display_RelativeMouseAt_m3126 (Object_t * __this /* static, unused */, Vector3_t3  ___inputMouseCoordinates, MethodInfo* method)
{
	Vector3_t3  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		int32_t L_4 = Display_RelativeMouseAtImpl_m3137(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/&Display_RelativeMouseAtImpl_m3137_MethodInfo);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t3  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern MethodInfo Display_get_main_m3127_MethodInfo;
extern "C" Display_t573 * Display_get_main_m3127 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display_t573 * L_0 = ((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern MethodInfo Display_RecreateDisplayList_m3128_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t572_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m3128 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t574* ___nativeDisplay, MethodInfo* method)
{
	static bool Display_RecreateDisplayList_m3128_init;
	if (!Display_RecreateDisplayList_m3128_init)
	{
		DisplayU5BU5D_t572_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t572_0_0_0);
		Display_RecreateDisplayList_m3128_init = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t574* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___displays_1 = ((DisplayU5BU5D_t572*)SZArrayNew(DisplayU5BU5D_t572_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		DisplayU5BU5D_t572* L_1 = ((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t574* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t573 * L_6 = (Display_t573 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		Display__ctor_m3111(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&Display__ctor_m3111_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t573 **)(Display_t573 **)SZArrayLdElema(L_1, L_2)) = (Display_t573 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t574* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		DisplayU5BU5D_t572* L_10 = ((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t573 **)(Display_t573 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern MethodInfo Display_FireDisplaysUpdated_m3129_MethodInfo;
extern "C" void Display_FireDisplaysUpdated_m3129 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t571 * L_0 = ((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t571 * L_1 = ((Display_t573_StaticFields*)InitializedTypeInfo(&Display_t573_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&DisplaysUpdatedDelegate_Invoke_m3107_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m3130 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m3130_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m3130_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m3130_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m3131 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m3131_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m3131_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m3131_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m3132 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t575 * ___color, RenderBuffer_t575 * ___depth, MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m3132_ftn) (IntPtr_t, RenderBuffer_t575 *, RenderBuffer_t575 *);
	static Display_GetRenderingBuffersImpl_m3132_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m3132_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m3133 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m3133_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m3133_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m3133_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m3134 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m3134_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m3134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m3134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m3135 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m3135_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m3135_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m3135_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m3136 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m3136_ftn) ();
	static Display_MultiDisplayLicenseImpl_m3136_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m3136_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m3137 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m3137_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m3137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m3137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoBehaviour_t2_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern MethodInfo MonoBehaviour_StartCoroutine_Auto_m3138_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m3139_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3141_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutine_Auto_m3142_MethodInfo;


// System.Void UnityEngine.MonoBehaviour::.ctor()
extern MethodInfo MonoBehaviour__ctor_m282_MethodInfo;
extern "C" void MonoBehaviour__ctor_m282 (MonoBehaviour_t2 * __this, MethodInfo* method)
{
	{
		Behaviour__ctor_m3079(__this, /*hidden argument*/&Behaviour__ctor_m3079_MethodInfo);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StartCoroutine_m1962_MethodInfo;
extern "C" Coroutine_t271 * MonoBehaviour_StartCoroutine_m1962 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t271 * L_1 = MonoBehaviour_StartCoroutine_Auto_m3138(__this, L_0, /*hidden argument*/&MonoBehaviour_StartCoroutine_Auto_m3138_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t271 * MonoBehaviour_StartCoroutine_Auto_m3138 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef Coroutine_t271 * (*MonoBehaviour_StartCoroutine_Auto_m3138_ftn) (MonoBehaviour_t2 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m3138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m3138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C" Coroutine_t271 * MonoBehaviour_StartCoroutine_m3139 (MonoBehaviour_t2 * __this, String_t* ___methodName, Object_t * ___value, MethodInfo* method)
{
	typedef Coroutine_t271 * (*MonoBehaviour_StartCoroutine_m3139_ftn) (MonoBehaviour_t2 *, String_t*, Object_t *);
	static MonoBehaviour_StartCoroutine_m3139_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_m3139_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)");
	return _il2cpp_icall_func(__this, ___methodName, ___value);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern MethodInfo MonoBehaviour_StartCoroutine_m398_MethodInfo;
extern "C" Coroutine_t271 * MonoBehaviour_StartCoroutine_m398 (MonoBehaviour_t2 * __this, String_t* ___methodName, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		V_0 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_0;
		Coroutine_t271 * L_2 = MonoBehaviour_StartCoroutine_m3139(__this, L_0, L_1, /*hidden argument*/&MonoBehaviour_StartCoroutine_m3139_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern MethodInfo MonoBehaviour_StopCoroutine_m399_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m399 (MonoBehaviour_t2 * __this, String_t* ___methodName, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_m399_ftn) (MonoBehaviour_t2 *, String_t*);
	static MonoBehaviour_StopCoroutine_m399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_m399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine(System.String)");
	_il2cpp_icall_func(__this, ___methodName);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StopCoroutine_m3140_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m3140 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3141(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3141_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern MethodInfo MonoBehaviour_StopCoroutine_m2214_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m2214 (MonoBehaviour_t2 * __this, Coroutine_t271 * ___routine, MethodInfo* method)
{
	{
		Coroutine_t271 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m3142(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutine_Auto_m3142_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3141 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3141_ftn) (MonoBehaviour_t2 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3141_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m3141_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m3142 (MonoBehaviour_t2 * __this, Coroutine_t271 * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m3142_ftn) (MonoBehaviour_t2 *, Coroutine_t271 *);
	static MonoBehaviour_StopCoroutine_Auto_m3142_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m3142_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchPhase_t576_il2cpp_TypeInfo;
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IMECompositionMode_t577_il2cpp_TypeInfo;
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Touch_t195_il2cpp_TypeInfo;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// System.Int32 UnityEngine.Touch::get_fingerId()
extern MethodInfo Touch_get_fingerId_m1894_MethodInfo;
extern "C" int32_t Touch_get_fingerId_m1894 (Touch_t195 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern MethodInfo Touch_get_position_m1896_MethodInfo;
extern "C" Vector2_t15  Touch_get_position_m1896 (Touch_t195 * __this, MethodInfo* method)
{
	{
		Vector2_t15  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern MethodInfo Touch_get_phase_m1895_MethodInfo;
extern "C" int32_t Touch_get_phase_m1895 (Touch_t195 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t195_marshal(const Touch_t195& unmarshaled, Touch_t195_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t195_marshal_back(const Touch_t195_marshaled& marshaled, Touch_t195& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void Touch_t195_marshal_cleanup(Touch_t195_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Input_t86_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"

// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
extern MethodInfo Input_INTERNAL_set_compositionCursorPos_m3145_MethodInfo;
extern MethodInfo Input_GetKeyDownInt_m3144_MethodInfo;


// System.Void UnityEngine.Input::.cctor()
extern MethodInfo Input__cctor_m3143_MethodInfo;
extern "C" void Input__cctor_m3143 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyDownInt(System.Int32)
extern "C" bool Input_GetKeyDownInt_m3144 (Object_t * __this /* static, unused */, int32_t ___key, MethodInfo* method)
{
	typedef bool (*Input_GetKeyDownInt_m3144_ftn) (int32_t);
	static Input_GetKeyDownInt_m3144_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyDownInt_m3144_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyDownInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern MethodInfo Input_GetAxisRaw_m1918_MethodInfo;
extern "C" float Input_GetAxisRaw_m1918 (Object_t * __this /* static, unused */, String_t* ___axisName, MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m1918_ftn) (String_t*);
	static Input_GetAxisRaw_m1918_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m1918_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern MethodInfo Input_GetButtonDown_m1917_MethodInfo;
extern "C" bool Input_GetButtonDown_m1917 (Object_t * __this /* static, unused */, String_t* ___buttonName, MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m1917_ftn) (String_t*);
	static Input_GetButtonDown_m1917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m1917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern MethodInfo Input_GetKeyDown_m388_MethodInfo;
extern "C" bool Input_GetKeyDown_m388 (Object_t * __this /* static, unused */, int32_t ___key, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t86_il2cpp_TypeInfo));
		bool L_1 = Input_GetKeyDownInt_m3144(NULL /*static, unused*/, L_0, /*hidden argument*/&Input_GetKeyDownInt_m3144_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern MethodInfo Input_GetMouseButton_m515_MethodInfo;
extern "C" bool Input_GetMouseButton_m515 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m515_ftn) (int32_t);
	static Input_GetMouseButton_m515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern MethodInfo Input_GetMouseButtonDown_m387_MethodInfo;
extern "C" bool Input_GetMouseButtonDown_m387 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m387_ftn) (int32_t);
	static Input_GetMouseButtonDown_m387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern MethodInfo Input_GetMouseButtonUp_m1898_MethodInfo;
extern "C" bool Input_GetMouseButtonUp_m1898 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m1898_ftn) (int32_t);
	static Input_GetMouseButtonUp_m1898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m1898_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern MethodInfo Input_get_mousePosition_m1899_MethodInfo;
extern "C" Vector3_t3  Input_get_mousePosition_m1899 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t3  (*Input_get_mousePosition_m1899_ftn) ();
	static Input_get_mousePosition_m1899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m1899_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern MethodInfo Input_get_mouseScrollDelta_m1900_MethodInfo;
extern "C" Vector2_t15  Input_get_mouseScrollDelta_m1900 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector2_t15  (*Input_get_mouseScrollDelta_m1900_ftn) ();
	static Input_get_mouseScrollDelta_m1900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m1900_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern MethodInfo Input_get_mousePresent_m1916_MethodInfo;
extern "C" bool Input_get_mousePresent_m1916 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m1916_ftn) ();
	static Input_get_mousePresent_m1916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m1916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern MethodInfo Input_GetTouch_m1930_MethodInfo;
extern "C" Touch_t195  Input_GetTouch_m1930 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	typedef Touch_t195  (*Input_GetTouch_m1930_ftn) (int32_t);
	static Input_GetTouch_m1930_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m1930_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern MethodInfo Input_get_touchCount_m1931_MethodInfo;
extern "C" int32_t Input_get_touchCount_m1931 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m1931_ftn) ();
	static Input_get_touchCount_m1931_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m1931_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern MethodInfo Input_get_touchSupported_m1929_MethodInfo;
extern "C" bool Input_get_touchSupported_m1929 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern MethodInfo Input_set_imeCompositionMode_m2192_MethodInfo;
extern "C" void Input_set_imeCompositionMode_m2192 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m2192_ftn) (int32_t);
	static Input_set_imeCompositionMode_m2192_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m2192_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern MethodInfo Input_get_compositionString_m2113_MethodInfo;
extern "C" String_t* Input_get_compositionString_m2113 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m2113_ftn) ();
	static Input_get_compositionString_m2113_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m2113_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m3145 (Object_t * __this /* static, unused */, Vector2_t15 * ___value, MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m3145_ftn) (Vector2_t15 *);
	static Input_INTERNAL_set_compositionCursorPos_m3145_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m3145_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern MethodInfo Input_set_compositionCursorPos_m2180_MethodInfo;
extern "C" void Input_set_compositionCursorPos_m2180 (Object_t * __this /* static, unused */, Vector2_t15  ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t86_il2cpp_TypeInfo));
		Input_INTERNAL_set_compositionCursorPos_m3145(NULL /*static, unused*/, (&___value), /*hidden argument*/&Input_INTERNAL_set_compositionCursorPos_m3145_MethodInfo);
		return;
	}
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HideFlags_t578_il2cpp_TypeInfo;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo Object_t79_il2cpp_TypeInfo;
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
extern MethodInfo Object_Destroy_m3147_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m3148_MethodInfo;
extern MethodInfo Object_CompareBaseObjects_m3150_MethodInfo;
extern MethodInfo Object_GetInstanceID_m3152_MethodInfo;
extern MethodInfo Object_IsNativeObjectAlive_m3151_MethodInfo;
extern MethodInfo Object_GetCachedPtr_m3153_MethodInfo;
extern MethodInfo IntPtr_op_Inequality_m3860_MethodInfo;
extern MethodInfo Object_FindObjectsOfType_m3149_MethodInfo;


// System.Void UnityEngine.Object::.ctor()
extern MethodInfo Object__ctor_m3146_MethodInfo;
extern "C" void Object__ctor_m3146 (Object_t79 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m3147 (Object_t * __this /* static, unused */, Object_t79 * ___obj, float ___t, MethodInfo* method)
{
	typedef void (*Object_Destroy_m3147_ftn) (Object_t79 *, float);
	static Object_Destroy_m3147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m3147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern MethodInfo Object_Destroy_m356_MethodInfo;
extern "C" void Object_Destroy_m356 (Object_t * __this /* static, unused */, Object_t79 * ___obj, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t79 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m3147(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_Destroy_m3147_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m3148 (Object_t * __this /* static, unused */, Object_t79 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m3148_ftn) (Object_t79 *, bool);
	static Object_DestroyImmediate_m3148_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m3148_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern MethodInfo Object_DestroyImmediate_m2211_MethodInfo;
extern "C" void Object_DestroyImmediate_m2211 (Object_t * __this /* static, unused */, Object_t79 * ___obj, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t79 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m3148(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_DestroyImmediate_m3148_MethodInfo);
		return;
	}
}
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t478* Object_FindObjectsOfType_m3149 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	typedef ObjectU5BU5D_t478* (*Object_FindObjectsOfType_m3149_ftn) (Type_t *);
	static Object_FindObjectsOfType_m3149_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_FindObjectsOfType_m3149_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.String UnityEngine.Object::get_name()
extern MethodInfo Object_get_name_m547_MethodInfo;
extern "C" String_t* Object_get_name_m547 (Object_t79 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m547_ftn) (Object_t79 *);
	static Object_get_name_m547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern MethodInfo Object_set_name_m2285_MethodInfo;
extern "C" void Object_set_name_m2285 (Object_t79 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*Object_set_name_m2285_ftn) (Object_t79 *, String_t*);
	static Object_set_name_m2285_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m2285_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern MethodInfo Object_set_hideFlags_m2160_MethodInfo;
extern "C" void Object_set_hideFlags_m2160 (Object_t79 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m2160_ftn) (Object_t79 *, int32_t);
	static Object_set_hideFlags_m2160_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m2160_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern MethodInfo Object_ToString_m593_MethodInfo;
extern "C" String_t* Object_ToString_m593 (Object_t79 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m593_ftn) (Object_t79 *);
	static Object_ToString_m593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern MethodInfo Object_Equals_m590_MethodInfo;
extern "C" bool Object_Equals_m590 (Object_t79 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m3150(NULL /*static, unused*/, __this, ((Object_t79 *)IsInst(L_0, InitializedTypeInfo(&Object_t79_il2cpp_TypeInfo))), /*hidden argument*/&Object_CompareBaseObjects_m3150_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern MethodInfo Object_GetHashCode_m592_MethodInfo;
extern "C" int32_t Object_GetHashCode_m592 (Object_t79 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m3152(__this, /*hidden argument*/&Object_GetInstanceID_m3152_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m3150 (Object_t * __this /* static, unused */, Object_t79 * ___lhs, Object_t79 * ___rhs, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t79 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t79 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t79 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t79 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t79 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m3151(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_IsNativeObjectAlive_m3151_MethodInfo);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t79 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m3151(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_IsNativeObjectAlive_m3151_MethodInfo);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t79 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t79 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m3151 (Object_t * __this /* static, unused */, Object_t79 * ___o, MethodInfo* method)
{
	{
		Object_t79 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m3153(L_0, /*hidden argument*/&Object_GetCachedPtr_m3153_MethodInfo);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m3860(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&IntPtr_op_Inequality_m3860_MethodInfo);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m3152 (Object_t79 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m3153 (Object_t79 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern MethodInfo Object_FindObjectOfType_m3154_MethodInfo;
extern "C" Object_t79 * Object_FindObjectOfType_m3154 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	ObjectU5BU5D_t478* V_0 = {0};
	{
		Type_t * L_0 = ___type;
		ObjectU5BU5D_t478* L_1 = Object_FindObjectsOfType_m3149(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_FindObjectsOfType_m3149_MethodInfo);
		V_0 = L_1;
		ObjectU5BU5D_t478* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t478* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		return (*(Object_t79 **)(Object_t79 **)SZArrayLdElema(L_3, L_4));
	}

IL_0014:
	{
		return (Object_t79 *)NULL;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern MethodInfo Object_op_Implicit_m314_MethodInfo;
extern "C" bool Object_op_Implicit_m314 (Object_t * __this /* static, unused */, Object_t79 * ___exists, MethodInfo* method)
{
	{
		Object_t79 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m3150(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_CompareBaseObjects_m3150_MethodInfo);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Equality_m306_MethodInfo;
extern "C" bool Object_op_Equality_m306 (Object_t * __this /* static, unused */, Object_t79 * ___x, Object_t79 * ___y, MethodInfo* method)
{
	{
		Object_t79 * L_0 = ___x;
		Object_t79 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m3150(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m3150_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Inequality_m312_MethodInfo;
extern "C" bool Object_op_Inequality_m312 (Object_t * __this /* static, unused */, Object_t79 * ___x, Object_t79 * ___y, MethodInfo* method)
{
	{
		Object_t79 * L_0 = ___x;
		Object_t79 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m3150(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m3150_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t79_marshal(const Object_t79& unmarshaled, Object_t79_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = unmarshaled.___m_CachedPtr_1;
}
void Object_t79_marshal_back(const Object_t79_marshaled& marshaled, Object_t79& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	unmarshaled.___m_CachedPtr_1 = marshaled.___m_CachedPtr_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t79_marshal_cleanup(Object_t79_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Component_t71_il2cpp_TypeInfo;

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern MethodInfo Component_get_gameObject_m308_MethodInfo;
extern MethodInfo GameObject_GetComponent_m3159_MethodInfo;
extern MethodInfo GameObject_GetComponentInParent_m3161_MethodInfo;
extern MethodInfo Component_GetComponentsForListInternal_m3158_MethodInfo;


// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m3155 (Component_t71 * __this, MethodInfo* method)
{
	{
		Object__ctor_m3146(__this, /*hidden argument*/&Object__ctor_m3146_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern MethodInfo Component_get_transform_m283_MethodInfo;
extern "C" Transform_t38 * Component_get_transform_m283 (Component_t71 * __this, MethodInfo* method)
{
	typedef Transform_t38 * (*Component_get_transform_m283_ftn) (Component_t71 *);
	static Component_get_transform_m283_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m283_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t51 * Component_get_gameObject_m308 (Component_t71 * __this, MethodInfo* method)
{
	typedef GameObject_t51 * (*Component_get_gameObject_m308_ftn) (Component_t71 *);
	static Component_get_gameObject_m308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m308_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern MethodInfo Component_GetComponent_m2341_MethodInfo;
extern "C" Component_t71 * Component_GetComponent_m2341 (Component_t71 * __this, Type_t * ___type, MethodInfo* method)
{
	{
		GameObject_t51 * L_0 = Component_get_gameObject_m308(__this, /*hidden argument*/&Component_get_gameObject_m308_MethodInfo);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t71 * L_2 = GameObject_GetComponent_m3159(L_0, L_1, /*hidden argument*/&GameObject_GetComponent_m3159_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo Component_GetComponentFastPath_m3156_MethodInfo;
extern "C" void Component_GetComponentFastPath_m3156 (Component_t71 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m3156_ftn) (Component_t71 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m3156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m3156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern MethodInfo Component_GetComponentInParent_m3157_MethodInfo;
extern "C" Component_t71 * Component_GetComponentInParent_m3157 (Component_t71 * __this, Type_t * ___t, MethodInfo* method)
{
	{
		GameObject_t51 * L_0 = Component_get_gameObject_m308(__this, /*hidden argument*/&Component_get_gameObject_m308_MethodInfo);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t71 * L_2 = GameObject_GetComponentInParent_m3161(L_0, L_1, /*hidden argument*/&GameObject_GetComponentInParent_m3161_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m3158 (Component_t71 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m3158_ftn) (Component_t71 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m3158_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m3158_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern MethodInfo Component_GetComponents_m1996_MethodInfo;
extern "C" void Component_GetComponents_m1996 (Component_t71 * __this, Type_t * ___type, List_1_t335 * ___results, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t335 * L_1 = ___results;
		Component_GetComponentsForListInternal_m3158(__this, L_0, L_1, /*hidden argument*/&Component_GetComponentsForListInternal_m3158_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GameObject_t51_il2cpp_TypeInfo;

// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern MethodInfo GameObject_Internal_CreateGameObject_m3166_MethodInfo;
extern MethodInfo GameObject_get_activeInHierarchy_m309_MethodInfo;
extern MethodInfo GameObject_get_transform_m362_MethodInfo;
extern MethodInfo Transform_get_parent_m406_MethodInfo;
extern MethodInfo GameObject_Internal_AddComponentWithType_m3164_MethodInfo;


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern MethodInfo GameObject__ctor_m361_MethodInfo;
extern "C" void GameObject__ctor_m361 (GameObject_t51 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Object__ctor_m3146(__this, /*hidden argument*/&Object__ctor_m3146_MethodInfo);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m3166(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&GameObject_Internal_CreateGameObject_m3166_MethodInfo);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t71 * GameObject_GetComponent_m3159 (GameObject_t51 * __this, Type_t * ___type, MethodInfo* method)
{
	typedef Component_t71 * (*GameObject_GetComponent_m3159_ftn) (GameObject_t51 *, Type_t *);
	static GameObject_GetComponent_m3159_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m3159_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo GameObject_GetComponentFastPath_m3160_MethodInfo;
extern "C" void GameObject_GetComponentFastPath_m3160 (GameObject_t51 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m3160_ftn) (GameObject_t51 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m3160_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m3160_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
extern "C" Component_t71 * GameObject_GetComponentInParent_m3161 (GameObject_t51 * __this, Type_t * ___type, MethodInfo* method)
{
	Component_t71 * V_0 = {0};
	Transform_t38 * V_1 = {0};
	Component_t71 * V_2 = {0};
	{
		bool L_0 = GameObject_get_activeInHierarchy_m309(__this, /*hidden argument*/&GameObject_get_activeInHierarchy_m309_MethodInfo);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t71 * L_2 = GameObject_GetComponent_m3159(__this, L_1, /*hidden argument*/&GameObject_GetComponent_m3159_MethodInfo);
		V_0 = L_2;
		Component_t71 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m312(NULL /*static, unused*/, L_3, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t71 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t38 * L_6 = GameObject_get_transform_m362(__this, /*hidden argument*/&GameObject_get_transform_m362_MethodInfo);
		NullCheck(L_6);
		Transform_t38 * L_7 = Transform_get_parent_m406(L_6, /*hidden argument*/&Transform_get_parent_m406_MethodInfo);
		V_1 = L_7;
		Transform_t38 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m312(NULL /*static, unused*/, L_8, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0070;
	}

IL_003e:
	{
		Transform_t38 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t51 * L_11 = Component_get_gameObject_m308(L_10, /*hidden argument*/&Component_get_gameObject_m308_MethodInfo);
		NullCheck(L_11);
		bool L_12 = GameObject_get_activeInHierarchy_m309(L_11, /*hidden argument*/&GameObject_get_activeInHierarchy_m309_MethodInfo);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		Transform_t38 * L_13 = V_1;
		NullCheck(L_13);
		GameObject_t51 * L_14 = Component_get_gameObject_m308(L_13, /*hidden argument*/&Component_get_gameObject_m308_MethodInfo);
		Type_t * L_15 = ___type;
		NullCheck(L_14);
		Component_t71 * L_16 = GameObject_GetComponent_m3159(L_14, L_15, /*hidden argument*/&GameObject_GetComponent_m3159_MethodInfo);
		V_2 = L_16;
		Component_t71 * L_17 = V_2;
		bool L_18 = Object_op_Inequality_m312(NULL /*static, unused*/, L_17, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		Component_t71 * L_19 = V_2;
		return L_19;
	}

IL_0069:
	{
		Transform_t38 * L_20 = V_1;
		NullCheck(L_20);
		Transform_t38 * L_21 = Transform_get_parent_m406(L_20, /*hidden argument*/&Transform_get_parent_m406_MethodInfo);
		V_1 = L_21;
	}

IL_0070:
	{
		Transform_t38 * L_22 = V_1;
		bool L_23 = Object_op_Inequality_m312(NULL /*static, unused*/, L_22, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (L_23)
		{
			goto IL_003e;
		}
	}

IL_007c:
	{
		return (Component_t71 *)NULL;
	}
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern MethodInfo GameObject_GetComponentsInternal_m3162_MethodInfo;
extern "C" Array_t * GameObject_GetComponentsInternal_m3162 (GameObject_t51 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m3162_ftn) (GameObject_t51 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m3162_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m3162_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t38 * GameObject_get_transform_m362 (GameObject_t51 * __this, MethodInfo* method)
{
	typedef Transform_t38 * (*GameObject_get_transform_m362_ftn) (GameObject_t51 *);
	static GameObject_get_transform_m362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern MethodInfo GameObject_get_layer_m2163_MethodInfo;
extern "C" int32_t GameObject_get_layer_m2163 (GameObject_t51 * __this, MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m2163_ftn) (GameObject_t51 *);
	static GameObject_get_layer_m2163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m2163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern MethodInfo GameObject_set_layer_m2164_MethodInfo;
extern "C" void GameObject_set_layer_m2164 (GameObject_t51 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m2164_ftn) (GameObject_t51 *, int32_t);
	static GameObject_set_layer_m2164_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m2164_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern MethodInfo GameObject_SetActive_m498_MethodInfo;
extern "C" void GameObject_SetActive_m498 (GameObject_t51 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m498_ftn) (GameObject_t51 *, bool);
	static GameObject_SetActive_m498_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m498_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m309 (GameObject_t51 * __this, MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m309_ftn) (GameObject_t51 *);
	static GameObject_get_activeInHierarchy_m309_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m309_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern MethodInfo GameObject_SendMessage_m3163_MethodInfo;
extern "C" void GameObject_SendMessage_m3163 (GameObject_t51 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m3163_ftn) (GameObject_t51 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m3163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m3163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t71 * GameObject_Internal_AddComponentWithType_m3164 (GameObject_t51 * __this, Type_t * ___componentType, MethodInfo* method)
{
	typedef Component_t71 * (*GameObject_Internal_AddComponentWithType_m3164_ftn) (GameObject_t51 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m3164_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m3164_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern MethodInfo GameObject_AddComponent_m3165_MethodInfo;
extern "C" Component_t71 * GameObject_AddComponent_m3165 (GameObject_t51 * __this, Type_t * ___componentType, MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t71 * L_1 = GameObject_Internal_AddComponentWithType_m3164(__this, L_0, /*hidden argument*/&GameObject_Internal_AddComponentWithType_m3164_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m3166 (Object_t * __this /* static, unused */, GameObject_t51 * ___mono, String_t* ___name, MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m3166_ftn) (GameObject_t51 *, String_t*);
	static GameObject_Internal_CreateGameObject_m3166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m3166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t579_il2cpp_TypeInfo;
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"

extern MethodInfo Transform_GetChild_m2345_MethodInfo;
extern MethodInfo Transform_get_childCount_m2348_MethodInfo;


// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern MethodInfo Enumerator__ctor_m3167_MethodInfo;
extern "C" void Enumerator__ctor_m3167 (Enumerator_t579 * __this, Transform_t38 * ___outer, MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Transform_t38 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern MethodInfo Enumerator_get_Current_m3168_MethodInfo;
extern "C" Object_t * Enumerator_get_Current_m3168 (Enumerator_t579 * __this, MethodInfo* method)
{
	{
		Transform_t38 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t38 * L_2 = Transform_GetChild_m2345(L_0, L_1, /*hidden argument*/&Transform_GetChild_m2345_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern MethodInfo Enumerator_MoveNext_m3169_MethodInfo;
extern "C" bool Enumerator_MoveNext_m3169 (Enumerator_t579 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t38 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m2348(L_0, /*hidden argument*/&Transform_get_childCount_m2348_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_t38_il2cpp_TypeInfo;

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
extern TypeInfo RectTransform_t227_il2cpp_TypeInfo;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern MethodInfo Transform_INTERNAL_get_position_m3170_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_position_m3171_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localPosition_m3172_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localPosition_m3173_MethodInfo;
extern MethodInfo Transform_get_rotation_m470_MethodInfo;
extern MethodInfo Vector3_get_forward_m421_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m473_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_rotation_m3174_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_rotation_m3175_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localRotation_m3176_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localRotation_m3177_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localScale_m3178_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localScale_m3179_MethodInfo;
extern MethodInfo Transform_get_parentInternal_m3180_MethodInfo;
extern MethodInfo Transform_set_parentInternal_m3181_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_worldToLocalMatrix_m3183_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_lossyScale_m3186_MethodInfo;
extern MethodInfo Transform_SetParent_m3182_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformPoint_m3184_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_InverseTransformPoint_m3185_MethodInfo;


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m3170 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m3170_ftn) (Transform_t38 *, Vector3_t3 *);
	static Transform_INTERNAL_get_position_m3170_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m3170_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m3171 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m3171_ftn) (Transform_t38 *, Vector3_t3 *);
	static Transform_INTERNAL_set_position_m3171_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m3171_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern MethodInfo Transform_get_position_m467_MethodInfo;
extern "C" Vector3_t3  Transform_get_position_m467 (Transform_t38 * __this, MethodInfo* method)
{
	Vector3_t3  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m3170(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_position_m3170_MethodInfo);
		Vector3_t3  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern MethodInfo Transform_set_position_m474_MethodInfo;
extern "C" void Transform_set_position_m474 (Transform_t38 * __this, Vector3_t3  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m3171(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_position_m3171_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m3172 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m3172_ftn) (Transform_t38 *, Vector3_t3 *);
	static Transform_INTERNAL_get_localPosition_m3172_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m3172_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m3173 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m3173_ftn) (Transform_t38 *, Vector3_t3 *);
	static Transform_INTERNAL_set_localPosition_m3173_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m3173_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern MethodInfo Transform_get_localPosition_m284_MethodInfo;
extern "C" Vector3_t3  Transform_get_localPosition_m284 (Transform_t38 * __this, MethodInfo* method)
{
	Vector3_t3  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m3172(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localPosition_m3172_MethodInfo);
		Vector3_t3  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern MethodInfo Transform_set_localPosition_m289_MethodInfo;
extern "C" void Transform_set_localPosition_m289 (Transform_t38 * __this, Vector3_t3  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m3173(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localPosition_m3173_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern MethodInfo Transform_get_forward_m468_MethodInfo;
extern "C" Vector3_t3  Transform_get_forward_m468 (Transform_t38 * __this, MethodInfo* method)
{
	{
		Quaternion_t33  L_0 = Transform_get_rotation_m470(__this, /*hidden argument*/&Transform_get_rotation_m470_MethodInfo);
		Vector3_t3  L_1 = Vector3_get_forward_m421(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m421_MethodInfo);
		Vector3_t3  L_2 = Quaternion_op_Multiply_m473(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m473_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m3174 (Transform_t38 * __this, Quaternion_t33 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m3174_ftn) (Transform_t38 *, Quaternion_t33 *);
	static Transform_INTERNAL_get_rotation_m3174_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m3174_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m3175 (Transform_t38 * __this, Quaternion_t33 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m3175_ftn) (Transform_t38 *, Quaternion_t33 *);
	static Transform_INTERNAL_set_rotation_m3175_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m3175_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t33  Transform_get_rotation_m470 (Transform_t38 * __this, MethodInfo* method)
{
	Quaternion_t33  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m3174(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_rotation_m3174_MethodInfo);
		Quaternion_t33  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern MethodInfo Transform_set_rotation_m472_MethodInfo;
extern "C" void Transform_set_rotation_m472 (Transform_t38 * __this, Quaternion_t33  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m3175(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_rotation_m3175_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m3176 (Transform_t38 * __this, Quaternion_t33 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m3176_ftn) (Transform_t38 *, Quaternion_t33 *);
	static Transform_INTERNAL_get_localRotation_m3176_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m3176_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m3177 (Transform_t38 * __this, Quaternion_t33 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m3177_ftn) (Transform_t38 *, Quaternion_t33 *);
	static Transform_INTERNAL_set_localRotation_m3177_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m3177_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern MethodInfo Transform_get_localRotation_m2167_MethodInfo;
extern "C" Quaternion_t33  Transform_get_localRotation_m2167 (Transform_t38 * __this, MethodInfo* method)
{
	Quaternion_t33  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m3176(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localRotation_m3176_MethodInfo);
		Quaternion_t33  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern MethodInfo Transform_set_localRotation_m456_MethodInfo;
extern "C" void Transform_set_localRotation_m456 (Transform_t38 * __this, Quaternion_t33  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m3177(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localRotation_m3177_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m3178 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m3178_ftn) (Transform_t38 *, Vector3_t3 *);
	static Transform_INTERNAL_get_localScale_m3178_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m3178_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m3179 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m3179_ftn) (Transform_t38 *, Vector3_t3 *);
	static Transform_INTERNAL_set_localScale_m3179_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m3179_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern MethodInfo Transform_get_localScale_m2169_MethodInfo;
extern "C" Vector3_t3  Transform_get_localScale_m2169 (Transform_t38 * __this, MethodInfo* method)
{
	Vector3_t3  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m3178(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localScale_m3178_MethodInfo);
		Vector3_t3  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern MethodInfo Transform_set_localScale_m353_MethodInfo;
extern "C" void Transform_set_localScale_m353 (Transform_t38 * __this, Vector3_t3  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m3179(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localScale_m3179_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t38 * Transform_get_parent_m406 (Transform_t38 * __this, MethodInfo* method)
{
	{
		Transform_t38 * L_0 = Transform_get_parentInternal_m3180(__this, /*hidden argument*/&Transform_get_parentInternal_m3180_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern MethodInfo Transform_set_parent_m390_MethodInfo;
extern "C" void Transform_set_parent_m390 (Transform_t38 * __this, Transform_t38 * ___value, MethodInfo* method)
{
	{
		if (!((RectTransform_t227 *)IsInst(__this, InitializedTypeInfo(&RectTransform_t227_il2cpp_TypeInfo))))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m2281(NULL /*static, unused*/, (String_t*) &_stringLiteral219, __this, /*hidden argument*/&Debug_LogWarning_m2281_MethodInfo);
	}

IL_0016:
	{
		Transform_t38 * L_0 = ___value;
		Transform_set_parentInternal_m3181(__this, L_0, /*hidden argument*/&Transform_set_parentInternal_m3181_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t38 * Transform_get_parentInternal_m3180 (Transform_t38 * __this, MethodInfo* method)
{
	typedef Transform_t38 * (*Transform_get_parentInternal_m3180_ftn) (Transform_t38 *);
	static Transform_get_parentInternal_m3180_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m3180_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m3181 (Transform_t38 * __this, Transform_t38 * ___value, MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m3181_ftn) (Transform_t38 *, Transform_t38 *);
	static Transform_set_parentInternal_m3181_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m3181_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern MethodInfo Transform_SetParent_m2161_MethodInfo;
extern "C" void Transform_SetParent_m2161 (Transform_t38 * __this, Transform_t38 * ___parent, MethodInfo* method)
{
	{
		Transform_t38 * L_0 = ___parent;
		Transform_SetParent_m3182(__this, L_0, 1, /*hidden argument*/&Transform_SetParent_m3182_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m3182 (Transform_t38 * __this, Transform_t38 * ___parent, bool ___worldPositionStays, MethodInfo* method)
{
	typedef void (*Transform_SetParent_m3182_ftn) (Transform_t38 *, Transform_t38 *, bool);
	static Transform_SetParent_m3182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m3182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m3183 (Transform_t38 * __this, Matrix4x4_t32 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m3183_ftn) (Transform_t38 *, Matrix4x4_t32 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m3183_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m3183_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern MethodInfo Transform_get_worldToLocalMatrix_m2239_MethodInfo;
extern "C" Matrix4x4_t32  Transform_get_worldToLocalMatrix_m2239 (Transform_t38 * __this, MethodInfo* method)
{
	Matrix4x4_t32  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m3183(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_worldToLocalMatrix_m3183_MethodInfo);
		Matrix4x4_t32  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_TransformPoint_m2259_MethodInfo;
extern "C" Vector3_t3  Transform_TransformPoint_m2259 (Transform_t38 * __this, Vector3_t3  ___position, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = Transform_INTERNAL_CALL_TransformPoint_m3184(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_TransformPoint_m3184_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t3  Transform_INTERNAL_CALL_TransformPoint_m3184 (Object_t * __this /* static, unused */, Transform_t38 * ___self, Vector3_t3 * ___position, MethodInfo* method)
{
	typedef Vector3_t3  (*Transform_INTERNAL_CALL_TransformPoint_m3184_ftn) (Transform_t38 *, Vector3_t3 *);
	static Transform_INTERNAL_CALL_TransformPoint_m3184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m3184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_InverseTransformPoint_m2131_MethodInfo;
extern "C" Vector3_t3  Transform_InverseTransformPoint_m2131 (Transform_t38 * __this, Vector3_t3  ___position, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m3185(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_InverseTransformPoint_m3185_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t3  Transform_INTERNAL_CALL_InverseTransformPoint_m3185 (Object_t * __this /* static, unused */, Transform_t38 * ___self, Vector3_t3 * ___position, MethodInfo* method)
{
	typedef Vector3_t3  (*Transform_INTERNAL_CALL_InverseTransformPoint_m3185_ftn) (Transform_t38 *, Vector3_t3 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m3185_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m3185_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m2348 (Transform_t38 * __this, MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m2348_ftn) (Transform_t38 *);
	static Transform_get_childCount_m2348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m2348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern MethodInfo Transform_SetAsFirstSibling_m2162_MethodInfo;
extern "C" void Transform_SetAsFirstSibling_m2162 (Transform_t38 * __this, MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m2162_ftn) (Transform_t38 *);
	static Transform_SetAsFirstSibling_m2162_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m2162_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_lossyScale_m3186 (Transform_t38 * __this, Vector3_t3 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_lossyScale_m3186_ftn) (Transform_t38 *, Vector3_t3 *);
	static Transform_INTERNAL_get_lossyScale_m3186_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_lossyScale_m3186_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern MethodInfo Transform_get_lossyScale_m419_MethodInfo;
extern "C" Vector3_t3  Transform_get_lossyScale_m419 (Transform_t38 * __this, MethodInfo* method)
{
	Vector3_t3  V_0 = {0};
	{
		Transform_INTERNAL_get_lossyScale_m3186(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_lossyScale_m3186_MethodInfo);
		Vector3_t3  L_0 = V_0;
		return L_0;
	}
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern MethodInfo Transform_GetEnumerator_m3187_MethodInfo;
extern "C" Object_t * Transform_GetEnumerator_m3187 (Transform_t38 * __this, MethodInfo* method)
{
	{
		Enumerator_t579 * L_0 = (Enumerator_t579 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Enumerator_t579_il2cpp_TypeInfo));
		Enumerator__ctor_m3167(L_0, __this, /*hidden argument*/&Enumerator__ctor_m3167_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t38 * Transform_GetChild_m2345 (Transform_t38 * __this, int32_t ___index, MethodInfo* method)
{
	typedef Transform_t38 * (*Transform_GetChild_m2345_ftn) (Transform_t38 *, int32_t);
	static Transform_GetChild_m2345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m2345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Time_t580_il2cpp_TypeInfo;
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_deltaTime()
extern MethodInfo Time_get_deltaTime_m3188_MethodInfo;
extern "C" float Time_get_deltaTime_m3188 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m3188_ftn) ();
	static Time_get_deltaTime_m3188_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m3188_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern MethodInfo Time_get_unscaledTime_m513_MethodInfo;
extern "C" float Time_get_unscaledTime_m513 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m513_ftn) ();
	static Time_get_unscaledTime_m513_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m513_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern MethodInfo Time_get_unscaledDeltaTime_m1960_MethodInfo;
extern "C" float Time_get_unscaledDeltaTime_m1960 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m1960_ftn) ();
	static Time_get_unscaledDeltaTime_m1960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m1960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_smoothDeltaTime()
extern MethodInfo Time_get_smoothDeltaTime_m568_MethodInfo;
extern "C" float Time_get_smoothDeltaTime_m568 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_smoothDeltaTime_m568_ftn) ();
	static Time_get_smoothDeltaTime_m568_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_smoothDeltaTime_m568_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_smoothDeltaTime()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Random_t581_il2cpp_TypeInfo;
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"

extern MethodInfo Random_RandomRangeInt_m3190_MethodInfo;


// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern MethodInfo Random_Range_m3189_MethodInfo;
extern "C" int32_t Random_Range_m3189 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m3190(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Random_RandomRangeInt_m3190_MethodInfo);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m3190 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m3190_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m3190_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m3190_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Single UnityEngine.Random::get_value()
extern MethodInfo Random_get_value_m292_MethodInfo;
extern "C" float Random_get_value_m292 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Random_get_value_m292_ftn) ();
	static Random_get_value_m292_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_value_m292_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_value()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
extern MethodInfo Random_get_onUnitSphere_m290_MethodInfo;
extern "C" Vector3_t3  Random_get_onUnitSphere_m290 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t3  (*Random_get_onUnitSphere_m290_ftn) ();
	static Random_get_onUnitSphere_m290_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_onUnitSphere_m290_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_onUnitSphere()");
	return _il2cpp_icall_func();
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo YieldInstruction_t483_il2cpp_TypeInfo;
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"



// System.Void UnityEngine.YieldInstruction::.ctor()
extern MethodInfo YieldInstruction__ctor_m3191_MethodInfo;
extern "C" void YieldInstruction__ctor_m3191 (YieldInstruction_t483 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t483_marshal(const YieldInstruction_t483& unmarshaled, YieldInstruction_t483_marshaled& marshaled)
{
}
void YieldInstruction_t483_marshal_back(const YieldInstruction_t483_marshaled& marshaled, YieldInstruction_t483& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t483_marshal_cleanup(YieldInstruction_t483_marshaled& marshaled)
{
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PlayerPrefs_t582_il2cpp_TypeInfo;
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"

// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo PlayerPrefs_GetString_m3192_MethodInfo;


// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m3192 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, MethodInfo* method)
{
	typedef String_t* (*PlayerPrefs_GetString_m3192_ftn) (String_t*, String_t*);
	static PlayerPrefs_GetString_m3192_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetString_m3192_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern MethodInfo PlayerPrefs_GetString_m3193_MethodInfo;
extern "C" String_t* PlayerPrefs_GetString_m3193 (Object_t * __this /* static, unused */, String_t* ___key, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___key;
		String_t* L_2 = V_0;
		String_t* L_3 = PlayerPrefs_GetString_m3192(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&PlayerPrefs_GetString_m3192_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Particle_t583_il2cpp_TypeInfo;
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern MethodInfo Particle_get_position_m3194_MethodInfo;
extern "C" Vector3_t3  Particle_get_position_m3194 (Particle_t583 * __this, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern MethodInfo Particle_set_position_m3195_MethodInfo;
extern "C" void Particle_set_position_m3195 (Particle_t583 * __this, Vector3_t3  ___value, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern MethodInfo Particle_get_velocity_m3196_MethodInfo;
extern "C" Vector3_t3  Particle_get_velocity_m3196 (Particle_t583 * __this, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern MethodInfo Particle_set_velocity_m3197_MethodInfo;
extern "C" void Particle_set_velocity_m3197 (Particle_t583 * __this, Vector3_t3  ___value, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern MethodInfo Particle_get_energy_m3198_MethodInfo;
extern "C" float Particle_get_energy_m3198 (Particle_t583 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern MethodInfo Particle_set_energy_m3199_MethodInfo;
extern "C" void Particle_set_energy_m3199 (Particle_t583 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern MethodInfo Particle_get_startEnergy_m3200_MethodInfo;
extern "C" float Particle_get_startEnergy_m3200 (Particle_t583 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern MethodInfo Particle_set_startEnergy_m3201_MethodInfo;
extern "C" void Particle_set_startEnergy_m3201 (Particle_t583 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern MethodInfo Particle_get_size_m3202_MethodInfo;
extern "C" float Particle_get_size_m3202 (Particle_t583 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern MethodInfo Particle_set_size_m3203_MethodInfo;
extern "C" void Particle_set_size_m3203 (Particle_t583 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern MethodInfo Particle_get_rotation_m3204_MethodInfo;
extern "C" float Particle_get_rotation_m3204 (Particle_t583 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern MethodInfo Particle_set_rotation_m3205_MethodInfo;
extern "C" void Particle_set_rotation_m3205 (Particle_t583 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern MethodInfo Particle_get_angularVelocity_m3206_MethodInfo;
extern "C" float Particle_get_angularVelocity_m3206 (Particle_t583 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern MethodInfo Particle_set_angularVelocity_m3207_MethodInfo;
extern "C" void Particle_set_angularVelocity_m3207 (Particle_t583 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern MethodInfo Particle_get_color_m3208_MethodInfo;
extern "C" Color_t12  Particle_get_color_m3208 (Particle_t583 * __this, MethodInfo* method)
{
	{
		Color_t12  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern MethodInfo Particle_set_color_m3209_MethodInfo;
extern "C" void Particle_set_color_m3209 (Particle_t583 * __this, Color_t12  ___value, MethodInfo* method)
{
	{
		Color_t12  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics_t584_il2cpp_TypeInfo;
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern MethodInfo Physics_INTERNAL_CALL_Internal_Raycast_m3211_MethodInfo;
extern MethodInfo Physics_Internal_Raycast_m3210_MethodInfo;
extern MethodInfo Ray_get_origin_m1936_MethodInfo;
extern MethodInfo Ray_get_direction_m1937_MethodInfo;
extern MethodInfo Physics_Raycast_m3212_MethodInfo;
extern MethodInfo Physics_RaycastAll_m3213_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_RaycastAll_m3214_MethodInfo;


// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m3210 (Object_t * __this /* static, unused */, Vector3_t3  ___origin, Vector3_t3  ___direction, RaycastHit_t74 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		RaycastHit_t74 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m3211(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/&Physics_INTERNAL_CALL_Internal_Raycast_m3211_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m3211 (Object_t * __this /* static, unused */, Vector3_t3 * ___origin, Vector3_t3 * ___direction, RaycastHit_t74 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m3211_ftn) (Vector3_t3 *, Vector3_t3 *, RaycastHit_t74 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m3211_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m3211_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m3212 (Object_t * __this /* static, unused */, Vector3_t3  ___origin, Vector3_t3  ___direction, RaycastHit_t74 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___origin;
		Vector3_t3  L_1 = ___direction;
		RaycastHit_t74 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m3210(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Internal_Raycast_m3210_MethodInfo);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern MethodInfo Physics_Raycast_m2044_MethodInfo;
extern "C" bool Physics_Raycast_m2044 (Object_t * __this /* static, unused */, Ray_t39  ___ray, RaycastHit_t74 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = Ray_get_origin_m1936((&___ray), /*hidden argument*/&Ray_get_origin_m1936_MethodInfo);
		Vector3_t3  L_1 = Ray_get_direction_m1937((&___ray), /*hidden argument*/&Ray_get_direction_m1937_MethodInfo);
		RaycastHit_t74 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m3212(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Raycast_m3212_MethodInfo);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Physics_RaycastAll_m1949_MethodInfo;
extern "C" RaycastHitU5BU5D_t365* Physics_RaycastAll_m1949 (Object_t * __this /* static, unused */, Ray_t39  ___ray, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = Ray_get_origin_m1936((&___ray), /*hidden argument*/&Ray_get_origin_m1936_MethodInfo);
		Vector3_t3  L_1 = Ray_get_direction_m1937((&___ray), /*hidden argument*/&Ray_get_direction_m1937_MethodInfo);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t365* L_4 = Physics_RaycastAll_m3213(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_RaycastAll_m3213_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t365* Physics_RaycastAll_m3213 (Object_t * __this /* static, unused */, Vector3_t3  ___origin, Vector3_t3  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t365* L_2 = Physics_INTERNAL_CALL_RaycastAll_m3214(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/&Physics_INTERNAL_CALL_RaycastAll_m3214_MethodInfo);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t365* Physics_INTERNAL_CALL_RaycastAll_m3214 (Object_t * __this /* static, unused */, Vector3_t3 * ___origin, Vector3_t3 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t365* (*Physics_INTERNAL_CALL_RaycastAll_m3214_ftn) (Vector3_t3 *, Vector3_t3 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m3214_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m3214_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider_t73_il2cpp_TypeInfo;
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"

extern MethodInfo Collider_INTERNAL_CALL_Internal_Raycast_m3216_MethodInfo;
extern MethodInfo Collider_Internal_Raycast_m3215_MethodInfo;


// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_Internal_Raycast_m3215 (Object_t * __this /* static, unused */, Collider_t73 * ___col, Ray_t39  ___ray, RaycastHit_t74 * ___hitInfo, float ___maxDistance, MethodInfo* method)
{
	{
		Collider_t73 * L_0 = ___col;
		RaycastHit_t74 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		bool L_3 = Collider_INTERNAL_CALL_Internal_Raycast_m3216(NULL /*static, unused*/, L_0, (&___ray), L_1, L_2, /*hidden argument*/&Collider_INTERNAL_CALL_Internal_Raycast_m3216_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_INTERNAL_CALL_Internal_Raycast_m3216 (Object_t * __this /* static, unused */, Collider_t73 * ___col, Ray_t39 * ___ray, RaycastHit_t74 * ___hitInfo, float ___maxDistance, MethodInfo* method)
{
	typedef bool (*Collider_INTERNAL_CALL_Internal_Raycast_m3216_ftn) (Collider_t73 *, Ray_t39 *, RaycastHit_t74 *, float);
	static Collider_INTERNAL_CALL_Internal_Raycast_m3216_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_INTERNAL_CALL_Internal_Raycast_m3216_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)");
	return _il2cpp_icall_func(___col, ___ray, ___hitInfo, ___maxDistance);
}
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern MethodInfo Collider_Raycast_m297_MethodInfo;
extern "C" bool Collider_Raycast_m297 (Collider_t73 * __this, Ray_t39  ___ray, RaycastHit_t74 * ___hitInfo, float ___maxDistance, MethodInfo* method)
{
	{
		Ray_t39  L_0 = ___ray;
		RaycastHit_t74 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		bool L_3 = Collider_Internal_Raycast_m3215(NULL /*static, unused*/, __this, L_0, L_1, L_2, /*hidden argument*/&Collider_Internal_Raycast_m3215_MethodInfo);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit_t74_il2cpp_TypeInfo;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"

extern MethodInfo RaycastHit_get_collider_m1951_MethodInfo;
extern MethodInfo RaycastHit_CalculateRaycastTexCoord_m3217_MethodInfo;
extern MethodInfo RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m3218_MethodInfo;


// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern MethodInfo RaycastHit_get_point_m1952_MethodInfo;
extern "C" Vector3_t3  RaycastHit_get_point_m1952 (RaycastHit_t74 * __this, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern MethodInfo RaycastHit_get_normal_m1953_MethodInfo;
extern "C" Vector3_t3  RaycastHit_get_normal_m1953 (RaycastHit_t74 * __this, MethodInfo* method)
{
	{
		Vector3_t3  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern MethodInfo RaycastHit_get_distance_m330_MethodInfo;
extern "C" float RaycastHit_get_distance_m330 (RaycastHit_t74 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// System.Void UnityEngine.RaycastHit::CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2,UnityEngine.Vector3,System.Int32,System.Int32)
extern "C" void RaycastHit_CalculateRaycastTexCoord_m3217 (Object_t * __this /* static, unused */, Vector2_t15 * ___output, Collider_t73 * ___col, Vector2_t15  ___uv, Vector3_t3  ___point, int32_t ___face, int32_t ___index, MethodInfo* method)
{
	{
		Vector2_t15 * L_0 = ___output;
		Collider_t73 * L_1 = ___col;
		int32_t L_2 = ___face;
		int32_t L_3 = ___index;
		RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m3218(NULL /*static, unused*/, L_0, L_1, (&___uv), (&___point), L_2, L_3, /*hidden argument*/&RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m3218_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)
extern "C" void RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m3218 (Object_t * __this /* static, unused */, Vector2_t15 * ___output, Collider_t73 * ___col, Vector2_t15 * ___uv, Vector3_t3 * ___point, int32_t ___face, int32_t ___index, MethodInfo* method)
{
	typedef void (*RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m3218_ftn) (Vector2_t15 *, Collider_t73 *, Vector2_t15 *, Vector3_t3 *, int32_t, int32_t);
	static RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m3218_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m3218_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)");
	_il2cpp_icall_func(___output, ___col, ___uv, ___point, ___face, ___index);
}
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
extern MethodInfo RaycastHit_get_textureCoord_m331_MethodInfo;
extern "C" Vector2_t15  RaycastHit_get_textureCoord_m331 (RaycastHit_t74 * __this, MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Collider_t73 * L_0 = RaycastHit_get_collider_m1951(__this, /*hidden argument*/&RaycastHit_get_collider_m1951_MethodInfo);
		Vector2_t15  L_1 = (__this->___m_UV_4);
		Vector3_t3  L_2 = (__this->___m_Point_0);
		int32_t L_3 = (__this->___m_FaceID_2);
		RaycastHit_CalculateRaycastTexCoord_m3217(NULL /*static, unused*/, (&V_0), L_0, L_1, L_2, L_3, 0, /*hidden argument*/&RaycastHit_CalculateRaycastTexCoord_m3217_MethodInfo);
		Vector2_t15  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t73 * RaycastHit_get_collider_m1951 (RaycastHit_t74 * __this, MethodInfo* method)
{
	{
		Collider_t73 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics2D_t360_il2cpp_TypeInfo;
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_23.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
extern TypeInfo List_1_t585_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
extern Il2CppType List_1_t585_0_0_0;
extern MethodInfo List_1__ctor_m3861_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_Internal_Raycast_m3221_MethodInfo;
extern MethodInfo Physics2D_Raycast_m3222_MethodInfo;
extern MethodInfo Physics2D_Internal_Raycast_m3220_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_RaycastAll_m3223_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3861_GenericMethod;


// System.Void UnityEngine.Physics2D::.cctor()
extern MethodInfo Physics2D__cctor_m3219_MethodInfo;
extern TypeInfo* List_1_t585_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3861_MethodInfo_var;
extern "C" void Physics2D__cctor_m3219 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Physics2D__cctor_m3219_init;
	if (!Physics2D__cctor_m3219_init)
	{
		List_1_t585_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t585_0_0_0);
		List_1__ctor_m3861_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3861_GenericMethod);
		Physics2D__cctor_m3219_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t585_il2cpp_TypeInfo_var);
		List_1_t585 * L_0 = (List_1_t585 *)il2cpp_codegen_object_new (List_1_t585_il2cpp_TypeInfo_var);
		List_1__ctor_m3861(L_0, /*hidden argument*/List_1__ctor_m3861_MethodInfo_var);
		((Physics2D_t360_StaticFields*)InitializedTypeInfo(&Physics2D_t360_il2cpp_TypeInfo)->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m3220 (Object_t * __this /* static, unused */, Vector2_t15  ___origin, Vector2_t15  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t363 * ___raycastHit, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t363 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t360_il2cpp_TypeInfo));
		Physics2D_INTERNAL_CALL_Internal_Raycast_m3221(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics2D_INTERNAL_CALL_Internal_Raycast_m3221_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m3221 (Object_t * __this /* static, unused */, Vector2_t15 * ___origin, Vector2_t15 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t363 * ___raycastHit, MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m3221_ftn) (Vector2_t15 *, Vector2_t15 *, float, int32_t, float, float, RaycastHit2D_t363 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m3221_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m3221_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_Raycast_m2045_MethodInfo;
extern "C" RaycastHit2D_t363  Physics2D_Raycast_m2045 (Object_t * __this /* static, unused */, Vector2_t15  ___origin, Vector2_t15  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t15  L_0 = ___origin;
		Vector2_t15  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t360_il2cpp_TypeInfo));
		RaycastHit2D_t363  L_6 = Physics2D_Raycast_m3222(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&Physics2D_Raycast_m3222_MethodInfo);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t363  Physics2D_Raycast_m3222 (Object_t * __this /* static, unused */, Vector2_t15  ___origin, Vector2_t15  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	RaycastHit2D_t363  V_0 = {0};
	{
		Vector2_t15  L_0 = ___origin;
		Vector2_t15  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t360_il2cpp_TypeInfo));
		Physics2D_Internal_Raycast_m3220(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/&Physics2D_Internal_Raycast_m3220_MethodInfo);
		RaycastHit2D_t363  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_RaycastAll_m1938_MethodInfo;
extern "C" RaycastHit2DU5BU5D_t362* Physics2D_RaycastAll_m1938 (Object_t * __this /* static, unused */, Vector2_t15  ___origin, Vector2_t15  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t360_il2cpp_TypeInfo));
		RaycastHit2DU5BU5D_t362* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m3223(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/&Physics2D_INTERNAL_CALL_RaycastAll_m3223_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t362* Physics2D_INTERNAL_CALL_RaycastAll_m3223 (Object_t * __this /* static, unused */, Vector2_t15 * ___origin, Vector2_t15 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t362* (*Physics2D_INTERNAL_CALL_RaycastAll_m3223_ftn) (Vector2_t15 *, Vector2_t15 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m3223_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m3223_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit2D_t363_il2cpp_TypeInfo;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern MethodInfo RaycastHit2D_get_collider_m1939_MethodInfo;
extern MethodInfo Collider2D_get_attachedRigidbody_m3225_MethodInfo;
extern MethodInfo RaycastHit2D_get_rigidbody_m3224_MethodInfo;


// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern MethodInfo RaycastHit2D_get_point_m1942_MethodInfo;
extern "C" Vector2_t15  RaycastHit2D_get_point_m1942 (RaycastHit2D_t363 * __this, MethodInfo* method)
{
	{
		Vector2_t15  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern MethodInfo RaycastHit2D_get_normal_m1943_MethodInfo;
extern "C" Vector2_t15  RaycastHit2D_get_normal_m1943 (RaycastHit2D_t363 * __this, MethodInfo* method)
{
	{
		Vector2_t15  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern MethodInfo RaycastHit2D_get_fraction_m2046_MethodInfo;
extern "C" float RaycastHit2D_get_fraction_m2046 (RaycastHit2D_t363 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t364 * RaycastHit2D_get_collider_m1939 (RaycastHit2D_t363 * __this, MethodInfo* method)
{
	{
		Collider2D_t364 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t586 * RaycastHit2D_get_rigidbody_m3224 (RaycastHit2D_t363 * __this, MethodInfo* method)
{
	Rigidbody2D_t586 * G_B3_0 = {0};
	{
		Collider2D_t364 * L_0 = RaycastHit2D_get_collider_m1939(__this, /*hidden argument*/&RaycastHit2D_get_collider_m1939_MethodInfo);
		bool L_1 = Object_op_Inequality_m312(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t364 * L_2 = RaycastHit2D_get_collider_m1939(__this, /*hidden argument*/&RaycastHit2D_get_collider_m1939_MethodInfo);
		NullCheck(L_2);
		Rigidbody2D_t586 * L_3 = Collider2D_get_attachedRigidbody_m3225(L_2, /*hidden argument*/&Collider2D_get_attachedRigidbody_m3225_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t586 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern MethodInfo RaycastHit2D_get_transform_m1940_MethodInfo;
extern "C" Transform_t38 * RaycastHit2D_get_transform_m1940 (RaycastHit2D_t363 * __this, MethodInfo* method)
{
	Rigidbody2D_t586 * V_0 = {0};
	{
		Rigidbody2D_t586 * L_0 = RaycastHit2D_get_rigidbody_m3224(__this, /*hidden argument*/&RaycastHit2D_get_rigidbody_m3224_MethodInfo);
		V_0 = L_0;
		Rigidbody2D_t586 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m312(NULL /*static, unused*/, L_1, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t586 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t38 * L_4 = Component_get_transform_m283(L_3, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t364 * L_5 = RaycastHit2D_get_collider_m1939(__this, /*hidden argument*/&RaycastHit2D_get_collider_m1939_MethodInfo);
		bool L_6 = Object_op_Inequality_m312(NULL /*static, unused*/, L_5, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t364 * L_7 = RaycastHit2D_get_collider_m1939(__this, /*hidden argument*/&RaycastHit2D_get_collider_m1939_MethodInfo);
		NullCheck(L_7);
		Transform_t38 * L_8 = Component_get_transform_m283(L_7, /*hidden argument*/&Component_get_transform_m283_MethodInfo);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t38 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rigidbody2D_t586_il2cpp_TypeInfo;
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider2D_t364_il2cpp_TypeInfo;



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t586 * Collider2D_get_attachedRigidbody_m3225 (Collider2D_t364 * __this, MethodInfo* method)
{
	typedef Rigidbody2D_t586 * (*Collider2D_get_attachedRigidbody_m3225_ftn) (Collider2D_t364 *);
	static Collider2D_get_attachedRigidbody_m3225_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m3225_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioConfigurationChangeHandler_t587_il2cpp_TypeInfo;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo AudioConfigurationChangeHandler__ctor_m3226_MethodInfo;
extern "C" void AudioConfigurationChangeHandler__ctor_m3226 (AudioConfigurationChangeHandler_t587 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern MethodInfo AudioConfigurationChangeHandler_Invoke_m3227_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_Invoke_m3227 (AudioConfigurationChangeHandler_t587 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m3227((AudioConfigurationChangeHandler_t587 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t587(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern MethodInfo AudioConfigurationChangeHandler_BeginInvoke_m3228_MethodInfo;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m3228 (AudioConfigurationChangeHandler_t587 * __this, bool ___deviceWasChanged, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Boolean_t83_il2cpp_TypeInfo), &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo AudioConfigurationChangeHandler_EndInvoke_m3229_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m3229 (AudioConfigurationChangeHandler_t587 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioSettings_t588_il2cpp_TypeInfo;
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"

extern TypeInfo Boolean_t83_il2cpp_TypeInfo;


// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern MethodInfo AudioSettings_InvokeOnAudioConfigurationChanged_m3230_MethodInfo;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m3230 (AudioSettings_t588 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	{
		AudioConfigurationChangeHandler_t587 * L_0 = ((AudioSettings_t588_StaticFields*)InitializedTypeInfo(&AudioSettings_t588_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t587 * L_1 = ((AudioSettings_t588_StaticFields*)InitializedTypeInfo(&AudioSettings_t588_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(&AudioConfigurationChangeHandler_Invoke_m3227_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMReaderCallback_t589_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMReaderCallback__ctor_m3231_MethodInfo;
extern "C" void PCMReaderCallback__ctor_m3231 (PCMReaderCallback_t589 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern MethodInfo PCMReaderCallback_Invoke_m3232_MethodInfo;
extern "C" void PCMReaderCallback_Invoke_m3232 (PCMReaderCallback_t589 * __this, SingleU5BU5D_t47* ___data, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m3232((PCMReaderCallback_t589 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t47* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t47* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern TypeInfo Single_t85_il2cpp_TypeInfo;
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t589(Il2CppObject* delegate, SingleU5BU5D_t47* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern MethodInfo PCMReaderCallback_BeginInvoke_m3233_MethodInfo;
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m3233 (PCMReaderCallback_t589 * __this, SingleU5BU5D_t47* ___data, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMReaderCallback_EndInvoke_m3234_MethodInfo;
extern "C" void PCMReaderCallback_EndInvoke_m3234 (PCMReaderCallback_t589 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMSetPositionCallback_t590_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMSetPositionCallback__ctor_m3235_MethodInfo;
extern "C" void PCMSetPositionCallback__ctor_m3235 (PCMSetPositionCallback_t590 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern MethodInfo PCMSetPositionCallback_Invoke_m3236_MethodInfo;
extern "C" void PCMSetPositionCallback_Invoke_m3236 (PCMSetPositionCallback_t590 * __this, int32_t ___position, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m3236((PCMSetPositionCallback_t590 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t590(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo PCMSetPositionCallback_BeginInvoke_m3237_MethodInfo;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m3237 (PCMSetPositionCallback_t590 * __this, int32_t ___position, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMSetPositionCallback_EndInvoke_m3238_MethodInfo;
extern "C" void PCMSetPositionCallback_EndInvoke_m3238 (PCMSetPositionCallback_t590 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioClip_t591_il2cpp_TypeInfo;
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"

extern TypeInfo SingleU5BU5D_t47_il2cpp_TypeInfo;
extern TypeInfo Int32_t60_il2cpp_TypeInfo;


// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern MethodInfo AudioClip_InvokePCMReaderCallback_Internal_m3239_MethodInfo;
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m3239 (AudioClip_t591 * __this, SingleU5BU5D_t47* ___data, MethodInfo* method)
{
	{
		PCMReaderCallback_t589 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t589 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t47* L_2 = ___data;
		NullCheck(L_1);
		VirtActionInvoker1< SingleU5BU5D_t47* >::Invoke(&PCMReaderCallback_Invoke_m3232_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern MethodInfo AudioClip_InvokePCMSetPositionCallback_Internal_m3240_MethodInfo;
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m3240 (AudioClip_t591 * __this, int32_t ___position, MethodInfo* method)
{
	{
		PCMSetPositionCallback_t590 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t590 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(&PCMSetPositionCallback_Invoke_m3236_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WebCamDevice_t592_il2cpp_TypeInfo;
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern MethodInfo WebCamDevice_get_name_m3241_MethodInfo;
extern "C" String_t* WebCamDevice_get_name_m3241 (WebCamDevice_t592 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern MethodInfo WebCamDevice_get_isFrontFacing_m3242_MethodInfo;
extern "C" bool WebCamDevice_get_isFrontFacing_m3242 (WebCamDevice_t592 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t592_marshal(const WebCamDevice_t592& unmarshaled, WebCamDevice_t592_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t592_marshal_back(const WebCamDevice_t592_marshaled& marshaled, WebCamDevice_t592& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t592_marshal_cleanup(WebCamDevice_t592_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEventSource_t593_il2cpp_TypeInfo;
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEvent_t595_il2cpp_TypeInfo;
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern MethodInfo AnimationEvent_get_isFiredByLegacy_m3260_MethodInfo;
extern MethodInfo AnimationEvent_get_isFiredByAnimator_m3261_MethodInfo;
extern MethodInfo AnimationEvent_get_functionName_m3254_MethodInfo;
extern MethodInfo String_GetHashCode_m3786_MethodInfo;
extern MethodInfo AnimationEvent_get_time_m3256_MethodInfo;
extern MethodInfo Single_GetHashCode_m3783_MethodInfo;


// System.Void UnityEngine.AnimationEvent::.ctor()
extern MethodInfo AnimationEvent__ctor_m3243_MethodInfo;
extern "C" void AnimationEvent__ctor_m3243 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t79 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t594 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern MethodInfo AnimationEvent_get_data_m3244_MethodInfo;
extern "C" String_t* AnimationEvent_get_data_m3244 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern MethodInfo AnimationEvent_set_data_m3245_MethodInfo;
extern "C" void AnimationEvent_set_data_m3245 (AnimationEvent_t595 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern MethodInfo AnimationEvent_get_stringParameter_m3246_MethodInfo;
extern "C" String_t* AnimationEvent_get_stringParameter_m3246 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern MethodInfo AnimationEvent_set_stringParameter_m3247_MethodInfo;
extern "C" void AnimationEvent_set_stringParameter_m3247 (AnimationEvent_t595 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern MethodInfo AnimationEvent_get_floatParameter_m3248_MethodInfo;
extern "C" float AnimationEvent_get_floatParameter_m3248 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern MethodInfo AnimationEvent_set_floatParameter_m3249_MethodInfo;
extern "C" void AnimationEvent_set_floatParameter_m3249 (AnimationEvent_t595 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern MethodInfo AnimationEvent_get_intParameter_m3250_MethodInfo;
extern "C" int32_t AnimationEvent_get_intParameter_m3250 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern MethodInfo AnimationEvent_set_intParameter_m3251_MethodInfo;
extern "C" void AnimationEvent_set_intParameter_m3251 (AnimationEvent_t595 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern MethodInfo AnimationEvent_get_objectReferenceParameter_m3252_MethodInfo;
extern "C" Object_t79 * AnimationEvent_get_objectReferenceParameter_m3252 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		Object_t79 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern MethodInfo AnimationEvent_set_objectReferenceParameter_m3253_MethodInfo;
extern "C" void AnimationEvent_set_objectReferenceParameter_m3253 (AnimationEvent_t595 * __this, Object_t79 * ___value, MethodInfo* method)
{
	{
		Object_t79 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m3254 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern MethodInfo AnimationEvent_set_functionName_m3255_MethodInfo;
extern "C" void AnimationEvent_set_functionName_m3255 (AnimationEvent_t595 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m3256 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern MethodInfo AnimationEvent_set_time_m3257_MethodInfo;
extern "C" void AnimationEvent_set_time_m3257 (AnimationEvent_t595 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern MethodInfo AnimationEvent_get_messageOptions_m3258_MethodInfo;
extern "C" int32_t AnimationEvent_get_messageOptions_m3258 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern MethodInfo AnimationEvent_set_messageOptions_m3259_MethodInfo;
extern "C" void AnimationEvent_set_messageOptions_m3259 (AnimationEvent_t595 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m3260 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m3261 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern MethodInfo AnimationEvent_get_animationState_m3262_MethodInfo;
extern "C" AnimationState_t594 * AnimationEvent_get_animationState_m3262 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m3260(__this, /*hidden argument*/&AnimationEvent_get_isFiredByLegacy_m3260_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m373(NULL /*static, unused*/, (String_t*) &_stringLiteral220, /*hidden argument*/&Debug_LogError_m373_MethodInfo);
	}

IL_0015:
	{
		AnimationState_t594 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern MethodInfo AnimationEvent_get_animatorStateInfo_m3263_MethodInfo;
extern "C" AnimatorStateInfo_t596  AnimationEvent_get_animatorStateInfo_m3263 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m3261(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m3261_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m373(NULL /*static, unused*/, (String_t*) &_stringLiteral221, /*hidden argument*/&Debug_LogError_m373_MethodInfo);
	}

IL_0015:
	{
		AnimatorStateInfo_t596  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern MethodInfo AnimationEvent_get_animatorClipInfo_m3264_MethodInfo;
extern "C" AnimatorClipInfo_t597  AnimationEvent_get_animatorClipInfo_m3264 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m3261(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m3261_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m373(NULL /*static, unused*/, (String_t*) &_stringLiteral222, /*hidden argument*/&Debug_LogError_m373_MethodInfo);
	}

IL_0015:
	{
		AnimatorClipInfo_t597  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern MethodInfo AnimationEvent_GetHash_m3265_MethodInfo;
extern "C" int32_t AnimationEvent_GetHash_m3265 (AnimationEvent_t595 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m3254(__this, /*hidden argument*/&AnimationEvent_get_functionName_m3254_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3786_MethodInfo, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m3256(__this, /*hidden argument*/&AnimationEvent_get_time_m3256_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m3783((&V_1), /*hidden argument*/&Single_GetHashCode_m3783_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Keyframe_t598_il2cpp_TypeInfo;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationCurve_t599_il2cpp_TypeInfo;
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"

extern MethodInfo AnimationCurve_Init_m3270_MethodInfo;
extern MethodInfo AnimationCurve_Cleanup_m3268_MethodInfo;
extern MethodInfo Object_Finalize_m591_MethodInfo;


// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern MethodInfo AnimationCurve__ctor_m3266_MethodInfo;
extern "C" void AnimationCurve__ctor_m3266 (AnimationCurve_t599 * __this, KeyframeU5BU5D_t600* ___keys, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		KeyframeU5BU5D_t600* L_0 = ___keys;
		AnimationCurve_Init_m3270(__this, L_0, /*hidden argument*/&AnimationCurve_Init_m3270_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern MethodInfo AnimationCurve__ctor_m3267_MethodInfo;
extern "C" void AnimationCurve__ctor_m3267 (AnimationCurve_t599 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		AnimationCurve_Init_m3270(__this, (KeyframeU5BU5D_t600*)(KeyframeU5BU5D_t600*)NULL, /*hidden argument*/&AnimationCurve_Init_m3270_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3268 (AnimationCurve_t599 * __this, MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m3268_ftn) (AnimationCurve_t599 *);
	static AnimationCurve_Cleanup_m3268_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m3268_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern MethodInfo AnimationCurve_Finalize_m3269_MethodInfo;
extern "C" void AnimationCurve_Finalize_m3269 (AnimationCurve_t599 * __this, MethodInfo* method)
{
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m3268(__this, /*hidden argument*/&AnimationCurve_Cleanup_m3268_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m591(__this, /*hidden argument*/&Object_Finalize_m591_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3270 (AnimationCurve_t599 * __this, KeyframeU5BU5D_t600* ___keys, MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m3270_ftn) (AnimationCurve_t599 *, KeyframeU5BU5D_t600*);
	static AnimationCurve_Init_m3270_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m3270_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t599_marshal(const AnimationCurve_t599& unmarshaled, AnimationCurve_t599_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AnimationCurve_t599_marshal_back(const AnimationCurve_t599_marshaled& marshaled, AnimationCurve_t599& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t599_marshal_cleanup(AnimationCurve_t599_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationState_t594_il2cpp_TypeInfo;
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorClipInfo_t597_il2cpp_TypeInfo;
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorStateInfo_t596_il2cpp_TypeInfo;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern MethodInfo Animator_StringToHash_m3289_MethodInfo;


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern MethodInfo AnimatorStateInfo_IsName_m3271_MethodInfo;
extern "C" bool AnimatorStateInfo_IsName_m3271 (AnimatorStateInfo_t596 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3289(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3289_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern MethodInfo AnimatorStateInfo_get_fullPathHash_m3272_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m3272 (AnimatorStateInfo_t596 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern MethodInfo AnimatorStateInfo_get_nameHash_m3273_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_nameHash_m3273 (AnimatorStateInfo_t596 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern MethodInfo AnimatorStateInfo_get_shortNameHash_m3274_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m3274 (AnimatorStateInfo_t596 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern MethodInfo AnimatorStateInfo_get_normalizedTime_m3275_MethodInfo;
extern "C" float AnimatorStateInfo_get_normalizedTime_m3275 (AnimatorStateInfo_t596 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern MethodInfo AnimatorStateInfo_get_length_m3276_MethodInfo;
extern "C" float AnimatorStateInfo_get_length_m3276 (AnimatorStateInfo_t596 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern MethodInfo AnimatorStateInfo_get_tagHash_m3277_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_tagHash_m3277 (AnimatorStateInfo_t596 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern MethodInfo AnimatorStateInfo_IsTag_m3278_MethodInfo;
extern "C" bool AnimatorStateInfo_IsTag_m3278 (AnimatorStateInfo_t596 * __this, String_t* ___tag, MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m3289(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3289_MethodInfo);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern MethodInfo AnimatorStateInfo_get_loop_m3279_MethodInfo;
extern "C" bool AnimatorStateInfo_get_loop_m3279 (AnimatorStateInfo_t596 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorTransitionInfo_t602_il2cpp_TypeInfo;
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsName_m3280_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsName_m3280 (AnimatorTransitionInfo_t602 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3289(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3289_MethodInfo);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m3289(NULL /*static, unused*/, L_3, /*hidden argument*/&Animator_StringToHash_m3289_MethodInfo);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsUserName_m3281_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsUserName_m3281 (AnimatorTransitionInfo_t602 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3289(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m3289_MethodInfo);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern MethodInfo AnimatorTransitionInfo_get_fullPathHash_m3282_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m3282 (AnimatorTransitionInfo_t602 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern MethodInfo AnimatorTransitionInfo_get_nameHash_m3283_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m3283 (AnimatorTransitionInfo_t602 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern MethodInfo AnimatorTransitionInfo_get_userNameHash_m3284_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m3284 (AnimatorTransitionInfo_t602 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern MethodInfo AnimatorTransitionInfo_get_normalizedTime_m3285_MethodInfo;
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m3285 (AnimatorTransitionInfo_t602 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern MethodInfo AnimatorTransitionInfo_get_anyState_m3286_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_anyState_m3286 (AnimatorTransitionInfo_t602 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern MethodInfo AnimatorTransitionInfo_get_entry_m3287_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_entry_m3287 (AnimatorTransitionInfo_t602 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern MethodInfo AnimatorTransitionInfo_get_exit_m3288_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_exit_m3288 (AnimatorTransitionInfo_t602 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t602_marshal(const AnimatorTransitionInfo_t602& unmarshaled, AnimatorTransitionInfo_t602_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t602_marshal_back(const AnimatorTransitionInfo_t602_marshaled& marshaled, AnimatorTransitionInfo_t602& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t602_marshal_cleanup(AnimatorTransitionInfo_t602_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Animator_t295_il2cpp_TypeInfo;

// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
extern MethodInfo Animator_SetTriggerString_m3290_MethodInfo;
extern MethodInfo Animator_ResetTriggerString_m3291_MethodInfo;


// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern MethodInfo Animator_SetTrigger_m2268_MethodInfo;
extern "C" void Animator_SetTrigger_m2268 (Animator_t295 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m3290(__this, L_0, /*hidden argument*/&Animator_SetTriggerString_m3290_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern MethodInfo Animator_ResetTrigger_m2267_MethodInfo;
extern "C" void Animator_ResetTrigger_m2267 (Animator_t295 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m3291(__this, L_0, /*hidden argument*/&Animator_ResetTriggerString_m3291_MethodInfo);
		return;
	}
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern MethodInfo Animator_get_runtimeAnimatorController_m2266_MethodInfo;
extern "C" RuntimeAnimatorController_t392 * Animator_get_runtimeAnimatorController_m2266 (Animator_t295 * __this, MethodInfo* method)
{
	typedef RuntimeAnimatorController_t392 * (*Animator_get_runtimeAnimatorController_m2266_ftn) (Animator_t295 *);
	static Animator_get_runtimeAnimatorController_m2266_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m2266_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m3289 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m3289_ftn) (String_t*);
	static Animator_StringToHash_m3289_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m3289_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m3290 (Animator_t295 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m3290_ftn) (Animator_t295 *, String_t*);
	static Animator_SetTriggerString_m3290_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m3290_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m3291 (Animator_t295 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m3291_ftn) (Animator_t295 *, String_t*);
	static Animator_ResetTriggerString_m3291_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m3291_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SkeletonBone_t603_il2cpp_TypeInfo;
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t603_marshal(const SkeletonBone_t603& unmarshaled, SkeletonBone_t603_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t603_marshal_back(const SkeletonBone_t603_marshaled& marshaled, SkeletonBone_t603& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t603_marshal_cleanup(SkeletonBone_t603_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanLimit_t604_il2cpp_TypeInfo;
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanBone_t605_il2cpp_TypeInfo;
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern MethodInfo HumanBone_get_boneName_m3292_MethodInfo;
extern "C" String_t* HumanBone_get_boneName_m3292 (HumanBone_t605 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern MethodInfo HumanBone_set_boneName_m3293_MethodInfo;
extern "C" void HumanBone_set_boneName_m3293 (HumanBone_t605 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern MethodInfo HumanBone_get_humanName_m3294_MethodInfo;
extern "C" String_t* HumanBone_get_humanName_m3294 (HumanBone_t605 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern MethodInfo HumanBone_set_humanName_m3295_MethodInfo;
extern "C" void HumanBone_set_humanName_m3295 (HumanBone_t605 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t605_marshal(const HumanBone_t605& unmarshaled, HumanBone_t605_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t605_marshal_back(const HumanBone_t605_marshaled& marshaled, HumanBone_t605& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t605_marshal_cleanup(HumanBone_t605_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RuntimeAnimatorController_t392_il2cpp_TypeInfo;
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"



// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAnchor_t398_il2cpp_TypeInfo;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HorizontalWrapMode_t430_il2cpp_TypeInfo;
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VerticalWrapMode_t431_il2cpp_TypeInfo;
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CharacterInfo_t606_il2cpp_TypeInfo;
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

extern TypeInfo Vector2_t15_il2cpp_TypeInfo;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern MethodInfo Rect_get_width_m333_MethodInfo;
extern MethodInfo Rect_get_height_m335_MethodInfo;
extern MethodInfo Rect_get_x_m432_MethodInfo;
extern MethodInfo Rect_get_y_m436_MethodInfo;
extern MethodInfo Vector2__ctor_m336_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomLeftUnFlipped_m3304_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopLeftUnFlipped_m3307_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomRightUnFlipped_m3305_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopRightUnFlipped_m3306_MethodInfo;


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern MethodInfo CharacterInfo_get_advance_m3296_MethodInfo;
extern "C" int32_t CharacterInfo_get_advance_m3296 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern MethodInfo CharacterInfo_get_glyphWidth_m3297_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphWidth_m3297 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m333(L_0, /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern MethodInfo CharacterInfo_get_glyphHeight_m3298_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphHeight_m3298 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m335(L_0, /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern MethodInfo CharacterInfo_get_bearing_m3299_MethodInfo;
extern "C" int32_t CharacterInfo_get_bearing_m3299 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m432(L_0, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern MethodInfo CharacterInfo_get_minY_m3300_MethodInfo;
extern "C" int32_t CharacterInfo_get_minY_m3300 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t18 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m436(L_1, /*hidden argument*/&Rect_get_y_m436_MethodInfo);
		Rect_t18 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m335(L_3, /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern MethodInfo CharacterInfo_get_maxY_m3301_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxY_m3301 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t18 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m436(L_1, /*hidden argument*/&Rect_get_y_m436_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern MethodInfo CharacterInfo_get_minX_m3302_MethodInfo;
extern "C" int32_t CharacterInfo_get_minX_m3302 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m432(L_0, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern MethodInfo CharacterInfo_get_maxX_m3303_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxX_m3303 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m432(L_0, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		Rect_t18 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m333(L_2, /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomLeftUnFlipped_m3304 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m432(L_0, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		Rect_t18 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m436(L_2, /*hidden argument*/&Rect_get_y_m436_MethodInfo);
		Vector2_t15  L_4 = {0};
		Vector2__ctor_m336(&L_4, L_1, L_3, /*hidden argument*/&Vector2__ctor_m336_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomRightUnFlipped_m3305 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m432(L_0, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		Rect_t18 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m333(L_2, /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		Rect_t18 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m436(L_4, /*hidden argument*/&Rect_get_y_m436_MethodInfo);
		Vector2_t15  L_6 = {0};
		Vector2__ctor_m336(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/&Vector2__ctor_m336_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvTopRightUnFlipped_m3306 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m432(L_0, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		Rect_t18 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m333(L_2, /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		Rect_t18 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m436(L_4, /*hidden argument*/&Rect_get_y_m436_MethodInfo);
		Rect_t18 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m335(L_6, /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		Vector2_t15  L_8 = {0};
		Vector2__ctor_m336(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/&Vector2__ctor_m336_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvTopLeftUnFlipped_m3307 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m432(L_0, /*hidden argument*/&Rect_get_x_m432_MethodInfo);
		Rect_t18 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m436(L_2, /*hidden argument*/&Rect_get_y_m436_MethodInfo);
		Rect_t18 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m335(L_4, /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		Vector2_t15  L_6 = {0};
		Vector2__ctor_m336(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/&Vector2__ctor_m336_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern MethodInfo CharacterInfo_get_uvBottomLeft_m3308_MethodInfo;
extern "C" Vector2_t15  CharacterInfo_get_uvBottomLeft_m3308 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	Vector2_t15  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t15  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m3304(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m3304_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t15  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m3304(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m3304_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern MethodInfo CharacterInfo_get_uvBottomRight_m3309_MethodInfo;
extern "C" Vector2_t15  CharacterInfo_get_uvBottomRight_m3309 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	Vector2_t15  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t15  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m3307(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m3307_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t15  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m3305(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m3305_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern MethodInfo CharacterInfo_get_uvTopRight_m3310_MethodInfo;
extern "C" Vector2_t15  CharacterInfo_get_uvTopRight_m3310 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	Vector2_t15  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t15  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m3306(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m3306_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t15  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m3306(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m3306_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern MethodInfo CharacterInfo_get_uvTopLeft_m3311_MethodInfo;
extern "C" Vector2_t15  CharacterInfo_get_uvTopLeft_m3311 (CharacterInfo_t606 * __this, MethodInfo* method)
{
	Vector2_t15  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t15  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m3305(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m3305_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t15  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m3307(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m3307_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t606_marshal(const CharacterInfo_t606& unmarshaled, CharacterInfo_t606_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t606_marshal_back(const CharacterInfo_t606_marshaled& marshaled, CharacterInfo_t606& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t606_marshal_cleanup(CharacterInfo_t606_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FontTextureRebuildCallback_t607_il2cpp_TypeInfo;
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo FontTextureRebuildCallback__ctor_m3312_MethodInfo;
extern "C" void FontTextureRebuildCallback__ctor_m3312 (FontTextureRebuildCallback_t607 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern MethodInfo FontTextureRebuildCallback_Invoke_m3313_MethodInfo;
extern "C" void FontTextureRebuildCallback_Invoke_m3313 (FontTextureRebuildCallback_t607 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m3313((FontTextureRebuildCallback_t607 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t607(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo FontTextureRebuildCallback_BeginInvoke_m3314_MethodInfo;
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m3314 (FontTextureRebuildCallback_t607 * __this, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo FontTextureRebuildCallback_EndInvoke_m3315_MethodInfo;
extern "C" void FontTextureRebuildCallback_EndInvoke_m3315 (FontTextureRebuildCallback_t607 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Font_t220_il2cpp_TypeInfo;
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo Action_1_t368_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
extern Il2CppType Action_1_t368_0_0_0;
extern MethodInfo Action_1_Invoke_m3862_MethodInfo;
extern Il2CppGenericMethod Action_1_Invoke_m3862_GenericMethod;


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_add_textureRebuilt_m1988_MethodInfo;
extern TypeInfo* Action_1_t368_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m1988 (Object_t * __this /* static, unused */, Action_1_t368 * ___value, MethodInfo* method)
{
	static bool Font_add_textureRebuilt_m1988_init;
	if (!Font_add_textureRebuilt_m1988_init)
	{
		Action_1_t368_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t368_0_0_0);
		Font_add_textureRebuilt_m1988_init = true;
	}
	{
		Action_1_t368 * L_0 = ((Font_t220_StaticFields*)InitializedTypeInfo(&Font_t220_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t368 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Combine_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m304_MethodInfo);
		((Font_t220_StaticFields*)InitializedTypeInfo(&Font_t220_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t368 *)Castclass(L_2, Action_1_t368_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_remove_textureRebuilt_m3316_MethodInfo;
extern TypeInfo* Action_1_t368_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m3316 (Object_t * __this /* static, unused */, Action_1_t368 * ___value, MethodInfo* method)
{
	static bool Font_remove_textureRebuilt_m3316_init;
	if (!Font_remove_textureRebuilt_m3316_init)
	{
		Action_1_t368_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t368_0_0_0);
		Font_remove_textureRebuilt_m3316_init = true;
	}
	{
		Action_1_t368 * L_0 = ((Font_t220_StaticFields*)InitializedTypeInfo(&Font_t220_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t368 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Remove_m305(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m305_MethodInfo);
		((Font_t220_StaticFields*)InitializedTypeInfo(&Font_t220_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t368 *)Castclass(L_2, Action_1_t368_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern MethodInfo Font_get_material_m2291_MethodInfo;
extern "C" Material_t50 * Font_get_material_m2291 (Font_t220 * __this, MethodInfo* method)
{
	typedef Material_t50 * (*Font_get_material_m2291_ftn) (Font_t220 *);
	static Font_get_material_m2291_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m2291_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern MethodInfo Font_HasCharacter_m2145_MethodInfo;
extern "C" bool Font_HasCharacter_m2145 (Font_t220 * __this, uint16_t ___c, MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m2145_ftn) (Font_t220 *, uint16_t);
	static Font_HasCharacter_m2145_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m2145_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern MethodInfo Font_InvokeTextureRebuilt_Internal_m3317_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3862_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m3317 (Object_t * __this /* static, unused */, Font_t220 * ___font, MethodInfo* method)
{
	static bool Font_InvokeTextureRebuilt_Internal_m3317_init;
	if (!Font_InvokeTextureRebuilt_Internal_m3317_init)
	{
		Action_1_Invoke_m3862_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3862_GenericMethod);
		Font_InvokeTextureRebuilt_Internal_m3317_init = true;
	}
	Action_1_t368 * V_0 = {0};
	{
		Action_1_t368 * L_0 = ((Font_t220_StaticFields*)InitializedTypeInfo(&Font_t220_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t368 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t368 * L_2 = V_0;
		Font_t220 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t220 * >::Invoke(Action_1_Invoke_m3862_MethodInfo_var, L_2, L_3);
	}

IL_0013:
	{
		Font_t220 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t607 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t220 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t607 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(&FontTextureRebuildCallback_Invoke_m3313_MethodInfo, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern MethodInfo Font_get_dynamic_m2293_MethodInfo;
extern "C" bool Font_get_dynamic_m2293 (Font_t220 * __this, MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m2293_ftn) (Font_t220 *);
	static Font_get_dynamic_m2293_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m2293_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern MethodInfo Font_get_fontSize_m2295_MethodInfo;
extern "C" int32_t Font_get_fontSize_m2295 (Font_t220 * __this, MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m2295_ftn) (Font_t220 *);
	static Font_get_fontSize_m2295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m2295_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UICharInfo_t386_il2cpp_TypeInfo;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UILineInfo_t384_il2cpp_TypeInfo;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerator_t270_il2cpp_TypeInfo;
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
extern TypeInfo Mathf_t69_il2cpp_TypeInfo;
extern TypeInfo List_1_t234_il2cpp_TypeInfo;
extern TypeInfo List_1_t608_il2cpp_TypeInfo;
extern TypeInfo List_1_t609_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t127_il2cpp_TypeInfo;
extern TypeInfo TextGenerationSettings_t304_il2cpp_TypeInfo;
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern Il2CppType List_1_t234_0_0_0;
extern Il2CppType List_1_t608_0_0_0;
extern Il2CppType List_1_t609_0_0_0;
extern MethodInfo String_IsNullOrEmpty_m2156_MethodInfo;
extern MethodInfo String_get_Length_m2112_MethodInfo;
extern MethodInfo TextGenerator_get_vertexCount_m3324_MethodInfo;
extern MethodInfo Mathf_Max_m565_MethodInfo;
extern MethodInfo Mathf_Min_m566_MethodInfo;
extern MethodInfo TextGenerator_GetVertices_m3336_MethodInfo;
extern MethodInfo TextGenerator_GetCharacters_m3334_MethodInfo;
extern MethodInfo TextGenerator_GetLines_m3335_MethodInfo;
extern MethodInfo TextGenerator__ctor_m2289_MethodInfo;
extern MethodInfo List_1__ctor_m3863_MethodInfo;
extern MethodInfo List_1__ctor_m3864_MethodInfo;
extern MethodInfo List_1__ctor_m3865_MethodInfo;
extern MethodInfo TextGenerator_Init_m3319_MethodInfo;
extern MethodInfo TextGenerator_Dispose_cpp_m3320_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_cpp_m3322_MethodInfo;
extern MethodInfo TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3323_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1901_MethodInfo;
extern MethodInfo TextGenerator_GetCharactersInternal_m3328_MethodInfo;
extern MethodInfo TextGenerator_GetLinesInternal_m3330_MethodInfo;
extern MethodInfo TextGenerator_GetVerticesInternal_m3325_MethodInfo;
extern MethodInfo TextGenerator_Populate_m2157_MethodInfo;
extern MethodInfo TextGenerator_get_rectExtents_m2159_MethodInfo;
extern MethodInfo String_op_Equality_m2110_MethodInfo;
extern MethodInfo TextGenerationSettings_Equals_m3706_MethodInfo;
extern MethodInfo TextGenerator_PopulateAlways_m3337_MethodInfo;
extern MethodInfo TextGenerator_ValidatedSettings_m3333_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_m3321_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3863_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3864_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3865_GenericMethod;


// System.Void UnityEngine.TextGenerator::.ctor()
extern MethodInfo TextGenerator__ctor_m2106_MethodInfo;
extern "C" void TextGenerator__ctor_m2106 (TextGenerator_t270 * __this, MethodInfo* method)
{
	{
		TextGenerator__ctor_m2289(__this, ((int32_t)50), /*hidden argument*/&TextGenerator__ctor_m2289_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t234_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t608_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t609_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3863_MethodInfo_var;
extern MethodInfo* List_1__ctor_m3864_MethodInfo_var;
extern MethodInfo* List_1__ctor_m3865_MethodInfo_var;
extern "C" void TextGenerator__ctor_m2289 (TextGenerator_t270 * __this, int32_t ___initialCapacity, MethodInfo* method)
{
	static bool TextGenerator__ctor_m2289_init;
	if (!TextGenerator__ctor_m2289_init)
	{
		List_1_t234_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t234_0_0_0);
		List_1_t608_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t608_0_0_0);
		List_1_t609_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t609_0_0_0);
		List_1__ctor_m3863_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3863_GenericMethod);
		List_1__ctor_m3864_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3864_GenericMethod);
		List_1__ctor_m3865_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3865_GenericMethod);
		TextGenerator__ctor_m2289_init = true;
	}
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		int32_t L_0 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t234_il2cpp_TypeInfo_var);
		List_1_t234 * L_1 = (List_1_t234 *)il2cpp_codegen_object_new (List_1_t234_il2cpp_TypeInfo_var);
		List_1__ctor_m3863(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m3863_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t608_il2cpp_TypeInfo_var);
		List_1_t608 * L_3 = (List_1_t608 *)il2cpp_codegen_object_new (List_1_t608_il2cpp_TypeInfo_var);
		List_1__ctor_m3864(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m3864_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t609_il2cpp_TypeInfo_var);
		List_1_t609 * L_4 = (List_1_t609 *)il2cpp_codegen_object_new (List_1_t609_il2cpp_TypeInfo_var);
		List_1__ctor_m3865(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m3865_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m3319(__this, /*hidden argument*/&TextGenerator_Init_m3319_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern MethodInfo TextGenerator_System_IDisposable_Dispose_m3318_MethodInfo;
extern "C" void TextGenerator_System_IDisposable_Dispose_m3318 (TextGenerator_t270 * __this, MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m3320(__this, /*hidden argument*/&TextGenerator_Dispose_cpp_m3320_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m3319 (TextGenerator_t270 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m3319_ftn) (TextGenerator_t270 *);
	static TextGenerator_Init_m3319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m3319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m3320 (TextGenerator_t270 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m3320_ftn) (TextGenerator_t270 *);
	static TextGenerator_Dispose_cpp_m3320_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m3320_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m3321 (TextGenerator_t270 * __this, String_t* ___str, Font_t220 * ___font, Color_t12  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t15  ___extents, Vector2_t15  ___pivot, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t220 * L_1 = ___font;
		Color_t12  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m3322(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/&TextGenerator_Populate_Internal_cpp_m3322_MethodInfo);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m3322 (TextGenerator_t270 * __this, String_t* ___str, Font_t220 * ___font, Color_t12  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t220 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3323(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/&TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3323_MethodInfo);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3323 (Object_t * __this /* static, unused */, TextGenerator_t270 * ___self, String_t* ___str, Font_t220 * ___font, Color_t12 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3323_ftn) (TextGenerator_t270 *, String_t*, Font_t220 *, Color_t12 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t18  TextGenerator_get_rectExtents_m2159 (TextGenerator_t270 * __this, MethodInfo* method)
{
	typedef Rect_t18  (*TextGenerator_get_rectExtents_m2159_ftn) (TextGenerator_t270 *);
	static TextGenerator_get_rectExtents_m2159_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_rectExtents_m2159_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m3324 (TextGenerator_t270 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m3324_ftn) (TextGenerator_t270 *);
	static TextGenerator_get_vertexCount_m3324_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m3324_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m3325 (TextGenerator_t270 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m3325_ftn) (TextGenerator_t270 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m3325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m3325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern MethodInfo TextGenerator_GetVerticesArray_m3326_MethodInfo;
extern "C" UIVertexU5BU5D_t269* TextGenerator_GetVerticesArray_m3326 (TextGenerator_t270 * __this, MethodInfo* method)
{
	typedef UIVertexU5BU5D_t269* (*TextGenerator_GetVerticesArray_m3326_ftn) (TextGenerator_t270 *);
	static TextGenerator_GetVerticesArray_m3326_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m3326_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern MethodInfo TextGenerator_get_characterCount_m3327_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCount_m3327 (TextGenerator_t270 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m3327_ftn) (TextGenerator_t270 *);
	static TextGenerator_get_characterCount_m3327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m3327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern MethodInfo TextGenerator_get_characterCountVisible_m2138_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCountVisible_m2138 (TextGenerator_t270 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_IsNullOrEmpty_m2156(NULL /*static, unused*/, L_0, /*hidden argument*/&String_IsNullOrEmpty_m2156_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2112(L_2, /*hidden argument*/&String_get_Length_m2112_MethodInfo);
		int32_t L_4 = TextGenerator_get_vertexCount_m3324(__this, /*hidden argument*/&TextGenerator_get_vertexCount_m3324_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t69_il2cpp_TypeInfo));
		int32_t L_5 = Mathf_Max_m565(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/&Mathf_Max_m565_MethodInfo);
		int32_t L_6 = Mathf_Min_m566(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Mathf_Min_m566_MethodInfo);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m3328 (TextGenerator_t270 * __this, Object_t * ___characters, MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m3328_ftn) (TextGenerator_t270 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m3328_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m3328_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern MethodInfo TextGenerator_GetCharactersArray_m3329_MethodInfo;
extern "C" UICharInfoU5BU5D_t610* TextGenerator_GetCharactersArray_m3329 (TextGenerator_t270 * __this, MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t610* (*TextGenerator_GetCharactersArray_m3329_ftn) (TextGenerator_t270 *);
	static TextGenerator_GetCharactersArray_m3329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m3329_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern MethodInfo TextGenerator_get_lineCount_m2137_MethodInfo;
extern "C" int32_t TextGenerator_get_lineCount_m2137 (TextGenerator_t270 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m2137_ftn) (TextGenerator_t270 *);
	static TextGenerator_get_lineCount_m2137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m2137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m3330 (TextGenerator_t270 * __this, Object_t * ___lines, MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m3330_ftn) (TextGenerator_t270 *, Object_t *);
	static TextGenerator_GetLinesInternal_m3330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m3330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern MethodInfo TextGenerator_GetLinesArray_m3331_MethodInfo;
extern "C" UILineInfoU5BU5D_t611* TextGenerator_GetLinesArray_m3331 (TextGenerator_t270 * __this, MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t611* (*TextGenerator_GetLinesArray_m3331_ftn) (TextGenerator_t270 *);
	static TextGenerator_GetLinesArray_m3331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m3331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern MethodInfo TextGenerator_get_fontSizeUsedForBestFit_m2179_MethodInfo;
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m2179 (TextGenerator_t270 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m2179_ftn) (TextGenerator_t270 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m2179_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m2179_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern MethodInfo TextGenerator_Finalize_m3332_MethodInfo;
extern "C" void TextGenerator_Finalize_m3332 (TextGenerator_t270 * __this, MethodInfo* method)
{
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m591(__this, /*hidden argument*/&Object_Finalize_m591_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t304  TextGenerator_ValidatedSettings_m3333 (TextGenerator_t270 * __this, TextGenerationSettings_t304  ___settings, MethodInfo* method)
{
	{
		Font_t220 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m312(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t220 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m2293(L_2, /*hidden argument*/&Font_get_dynamic_m2293_MethodInfo);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t304  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, (String_t*) &_stringLiteral223, /*hidden argument*/&Debug_LogWarning_m310_MethodInfo);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, (String_t*) &_stringLiteral224, /*hidden argument*/&Debug_LogWarning_m310_MethodInfo);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t304  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern MethodInfo TextGenerator_Invalidate_m2298_MethodInfo;
extern "C" void TextGenerator_Invalidate_m2298 (TextGenerator_t270 * __this, MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m3334 (TextGenerator_t270 * __this, List_1_t608 * ___characters, MethodInfo* method)
{
	{
		List_1_t608 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m3328(__this, L_0, /*hidden argument*/&TextGenerator_GetCharactersInternal_m3328_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m3335 (TextGenerator_t270 * __this, List_1_t609 * ___lines, MethodInfo* method)
{
	{
		List_1_t609 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m3330(__this, L_0, /*hidden argument*/&TextGenerator_GetLinesInternal_m3330_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m3336 (TextGenerator_t270 * __this, List_1_t234 * ___vertices, MethodInfo* method)
{
	{
		List_1_t234 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m3325(__this, L_0, /*hidden argument*/&TextGenerator_GetVerticesInternal_m3325_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredWidth_m2296_MethodInfo;
extern "C" float TextGenerator_GetPreferredWidth_m2296 (TextGenerator_t270 * __this, String_t* ___str, TextGenerationSettings_t304  ___settings, MethodInfo* method)
{
	Rect_t18  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t304  L_1 = ___settings;
		TextGenerator_Populate_m2157(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2157_MethodInfo);
		Rect_t18  L_2 = TextGenerator_get_rectExtents_m2159(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2159_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_width_m333((&V_0), /*hidden argument*/&Rect_get_width_m333_MethodInfo);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredHeight_m2297_MethodInfo;
extern "C" float TextGenerator_GetPreferredHeight_m2297 (TextGenerator_t270 * __this, String_t* ___str, TextGenerationSettings_t304  ___settings, MethodInfo* method)
{
	Rect_t18  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t304  L_1 = ___settings;
		TextGenerator_Populate_m2157(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2157_MethodInfo);
		Rect_t18  L_2 = TextGenerator_get_rectExtents_m2159(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2159_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_height_m335((&V_0), /*hidden argument*/&Rect_get_height_m335_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_Populate_m2157 (TextGenerator_t270 * __this, String_t* ___str, TextGenerationSettings_t304  ___settings, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_op_Equality_m2110(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t304  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m3706((&___settings), L_4, /*hidden argument*/&TextGenerationSettings_Equals_m3706_MethodInfo);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t304  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m3337(__this, L_7, L_8, /*hidden argument*/&TextGenerator_PopulateAlways_m3337_MethodInfo);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m3337 (TextGenerator_t270 * __this, String_t* ___str, TextGenerationSettings_t304  ___settings, MethodInfo* method)
{
	TextGenerationSettings_t304  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t304  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t304  L_2 = ___settings;
		TextGenerationSettings_t304  L_3 = TextGenerator_ValidatedSettings_m3333(__this, L_2, /*hidden argument*/&TextGenerator_ValidatedSettings_m3333_MethodInfo);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t220 * L_5 = ((&V_0)->___font_0);
		Color_t12  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t15  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t15  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m3321(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/&TextGenerator_Populate_Internal_m3321_MethodInfo);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern MethodInfo TextGenerator_get_verts_m2299_MethodInfo;
extern "C" Object_t* TextGenerator_get_verts_m2299 (TextGenerator_t270 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t234 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m3336(__this, L_1, /*hidden argument*/&TextGenerator_GetVertices_m3336_MethodInfo);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t234 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern MethodInfo TextGenerator_get_characters_m2139_MethodInfo;
extern "C" Object_t* TextGenerator_get_characters_m2139 (TextGenerator_t270 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t608 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m3334(__this, L_1, /*hidden argument*/&TextGenerator_GetCharacters_m3334_MethodInfo);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t608 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern MethodInfo TextGenerator_get_lines_m2135_MethodInfo;
extern "C" Object_t* TextGenerator_get_lines_m2135 (TextGenerator_t270 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t609 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m3335(__this, L_1, /*hidden argument*/&TextGenerator_GetLines_m3335_MethodInfo);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t609 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderMode_t612_il2cpp_TypeInfo;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"



// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WillRenderCanvases_t366_il2cpp_TypeInfo;
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern MethodInfo WillRenderCanvases__ctor_m1964_MethodInfo;
extern "C" void WillRenderCanvases__ctor_m1964 (WillRenderCanvases_t366 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern MethodInfo WillRenderCanvases_Invoke_m3338_MethodInfo;
extern "C" void WillRenderCanvases_Invoke_m3338 (WillRenderCanvases_t366 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m3338((WillRenderCanvases_t366 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t366(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo WillRenderCanvases_BeginInvoke_m3339_MethodInfo;
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m3339 (WillRenderCanvases_t366 * __this, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern MethodInfo WillRenderCanvases_EndInvoke_m3340_MethodInfo;
extern "C" void WillRenderCanvases_EndInvoke_m3340 (WillRenderCanvases_t366 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Canvas_t229_il2cpp_TypeInfo;
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"

extern MethodInfo Canvas_SendWillRenderCanvases_m3342_MethodInfo;


// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_add_willRenderCanvases_m1965_MethodInfo;
extern "C" void Canvas_add_willRenderCanvases_m1965 (Object_t * __this /* static, unused */, WillRenderCanvases_t366 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t366 * L_0 = ((Canvas_t229_StaticFields*)InitializedTypeInfo(&Canvas_t229_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t366 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Combine_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m304_MethodInfo);
		((Canvas_t229_StaticFields*)InitializedTypeInfo(&Canvas_t229_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t366 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t366_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_remove_willRenderCanvases_m3341_MethodInfo;
extern "C" void Canvas_remove_willRenderCanvases_m3341 (Object_t * __this /* static, unused */, WillRenderCanvases_t366 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t366 * L_0 = ((Canvas_t229_StaticFields*)InitializedTypeInfo(&Canvas_t229_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t366 * L_1 = ___value;
		Delegate_t78 * L_2 = Delegate_Remove_m305(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m305_MethodInfo);
		((Canvas_t229_StaticFields*)InitializedTypeInfo(&Canvas_t229_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t366 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t366_il2cpp_TypeInfo)));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern MethodInfo Canvas_get_renderMode_m2038_MethodInfo;
extern "C" int32_t Canvas_get_renderMode_m2038 (Canvas_t229 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m2038_ftn) (Canvas_t229 *);
	static Canvas_get_renderMode_m2038_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m2038_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern MethodInfo Canvas_get_isRootCanvas_m2318_MethodInfo;
extern "C" bool Canvas_get_isRootCanvas_m2318 (Canvas_t229 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m2318_ftn) (Canvas_t229 *);
	static Canvas_get_isRootCanvas_m2318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m2318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern MethodInfo Canvas_get_worldCamera_m2041_MethodInfo;
extern "C" Camera_t35 * Canvas_get_worldCamera_m2041 (Canvas_t229 * __this, MethodInfo* method)
{
	typedef Camera_t35 * (*Canvas_get_worldCamera_m2041_ftn) (Canvas_t229 *);
	static Canvas_get_worldCamera_m2041_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m2041_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern MethodInfo Canvas_get_scaleFactor_m2294_MethodInfo;
extern "C" float Canvas_get_scaleFactor_m2294 (Canvas_t229 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m2294_ftn) (Canvas_t229 *);
	static Canvas_get_scaleFactor_m2294_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m2294_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern MethodInfo Canvas_set_scaleFactor_m2321_MethodInfo;
extern "C" void Canvas_set_scaleFactor_m2321 (Canvas_t229 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m2321_ftn) (Canvas_t229 *, float);
	static Canvas_set_scaleFactor_m2321_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m2321_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern MethodInfo Canvas_get_referencePixelsPerUnit_m2069_MethodInfo;
extern "C" float Canvas_get_referencePixelsPerUnit_m2069 (Canvas_t229 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m2069_ftn) (Canvas_t229 *);
	static Canvas_get_referencePixelsPerUnit_m2069_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m2069_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern MethodInfo Canvas_set_referencePixelsPerUnit_m2322_MethodInfo;
extern "C" void Canvas_set_referencePixelsPerUnit_m2322 (Canvas_t229 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m2322_ftn) (Canvas_t229 *, float);
	static Canvas_set_referencePixelsPerUnit_m2322_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m2322_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern MethodInfo Canvas_get_pixelPerfect_m2019_MethodInfo;
extern "C" bool Canvas_get_pixelPerfect_m2019 (Canvas_t229 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m2019_ftn) (Canvas_t229 *);
	static Canvas_get_pixelPerfect_m2019_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m2019_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern MethodInfo Canvas_get_renderOrder_m2040_MethodInfo;
extern "C" int32_t Canvas_get_renderOrder_m2040 (Canvas_t229 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m2040_ftn) (Canvas_t229 *);
	static Canvas_get_renderOrder_m2040_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m2040_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern MethodInfo Canvas_get_sortingOrder_m2039_MethodInfo;
extern "C" int32_t Canvas_get_sortingOrder_m2039 (Canvas_t229 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m2039_ftn) (Canvas_t229 *);
	static Canvas_get_sortingOrder_m2039_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m2039_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern MethodInfo Canvas_get_cachedSortingLayerValue_m2050_MethodInfo;
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m2050 (Canvas_t229 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m2050_ftn) (Canvas_t229 *);
	static Canvas_get_cachedSortingLayerValue_m2050_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m2050_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern MethodInfo Canvas_GetDefaultCanvasMaterial_m1993_MethodInfo;
extern "C" Material_t50 * Canvas_GetDefaultCanvasMaterial_m1993 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t50 * (*Canvas_GetDefaultCanvasMaterial_m1993_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m1993_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m1993_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern MethodInfo Canvas_GetDefaultCanvasTextMaterial_m2290_MethodInfo;
extern "C" Material_t50 * Canvas_GetDefaultCanvasTextMaterial_m2290 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t50 * (*Canvas_GetDefaultCanvasTextMaterial_m2290_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m2290_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m2290_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C" void Canvas_SendWillRenderCanvases_m3342 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		WillRenderCanvases_t366 * L_0 = ((Canvas_t229_StaticFields*)InitializedTypeInfo(&Canvas_t229_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t366 * L_1 = ((Canvas_t229_StaticFields*)InitializedTypeInfo(&Canvas_t229_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&WillRenderCanvases_Invoke_m3338_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern MethodInfo Canvas_ForceUpdateCanvases_m2227_MethodInfo;
extern "C" void Canvas_ForceUpdateCanvases_m2227 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m3342(NULL /*static, unused*/, /*hidden argument*/&Canvas_SendWillRenderCanvases_m3342_MethodInfo);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasGroup_t373_il2cpp_TypeInfo;
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"

extern MethodInfo CanvasGroup_get_blocksRaycasts_m3343_MethodInfo;


// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern MethodInfo CanvasGroup_get_interactable_m2252_MethodInfo;
extern "C" bool CanvasGroup_get_interactable_m2252 (CanvasGroup_t373 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m2252_ftn) (CanvasGroup_t373 *);
	static CanvasGroup_get_interactable_m2252_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m2252_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m3343 (CanvasGroup_t373 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m3343_ftn) (CanvasGroup_t373 *);
	static CanvasGroup_get_blocksRaycasts_m3343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m3343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern MethodInfo CanvasGroup_get_ignoreParentGroups_m2017_MethodInfo;
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2017 (CanvasGroup_t373 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m2017_ftn) (CanvasGroup_t373 *);
	static CanvasGroup_get_ignoreParentGroups_m2017_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m2017_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo CanvasGroup_IsRaycastLocationValid_m3344_MethodInfo;
extern "C" bool CanvasGroup_IsRaycastLocationValid_m3344 (CanvasGroup_t373 * __this, Vector2_t15  ___sp, Camera_t35 * ___eventCamera, MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m3343(__this, /*hidden argument*/&CanvasGroup_get_blocksRaycasts_m3343_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UIVertex_t253_il2cpp_TypeInfo;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern TypeInfo Color32_t352_il2cpp_TypeInfo;
extern TypeInfo Vector4_t88_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern MethodInfo Color32__ctor_m1980_MethodInfo;
extern MethodInfo Vector4__ctor_m428_MethodInfo;
extern MethodInfo Vector3_get_zero_m363_MethodInfo;
extern MethodInfo Vector3_get_back_m2896_MethodInfo;
extern MethodInfo Vector2_get_zero_m329_MethodInfo;


// System.Void UnityEngine.UIVertex::.cctor()
extern MethodInfo UIVertex__cctor_m3345_MethodInfo;
extern "C" void UIVertex__cctor_m3345 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	UIVertex_t253  V_0 = {0};
	{
		Color32_t352  L_0 = {0};
		Color32__ctor_m1980(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/&Color32__ctor_m1980_MethodInfo);
		((UIVertex_t253_StaticFields*)InitializedTypeInfo(&UIVertex_t253_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t88  L_1 = {0};
		Vector4__ctor_m428(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/&Vector4__ctor_m428_MethodInfo);
		((UIVertex_t253_StaticFields*)InitializedTypeInfo(&UIVertex_t253_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (InitializedTypeInfo(&UIVertex_t253_il2cpp_TypeInfo), (&V_0));
		Vector3_t3  L_2 = Vector3_get_zero_m363(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m363_MethodInfo);
		(&V_0)->___position_0 = L_2;
		Vector3_t3  L_3 = Vector3_get_back_m2896(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m2896_MethodInfo);
		(&V_0)->___normal_1 = L_3;
		Vector4_t88  L_4 = ((UIVertex_t253_StaticFields*)InitializedTypeInfo(&UIVertex_t253_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t352  L_5 = ((UIVertex_t253_StaticFields*)InitializedTypeInfo(&UIVertex_t253_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t15  L_6 = Vector2_get_zero_m329(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m329_MethodInfo);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t15  L_7 = Vector2_get_zero_m329(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m329_MethodInfo);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t253  L_8 = V_0;
		((UIVertex_t253_StaticFields*)InitializedTypeInfo(&UIVertex_t253_il2cpp_TypeInfo)->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasRenderer_t228_il2cpp_TypeInfo;
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo ObjectU5BU5D_t76_il2cpp_TypeInfo;
extern TypeInfo UInt16_t750_il2cpp_TypeInfo;
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t76_0_0_0;
extern MethodInfo CanvasRenderer_INTERNAL_CALL_SetColor_m3346_MethodInfo;
extern MethodInfo List_1_get_Count_m2165_MethodInfo;
extern MethodInfo UnityString_Format_m3070_MethodInfo;
extern MethodInfo List_1_Clear_m2026_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternal_m3347_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternalArray_m3348_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m2165_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m2026_GenericMethod;


// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern MethodInfo CanvasRenderer_SetColor_m2024_MethodInfo;
extern "C" void CanvasRenderer_SetColor_m2024 (CanvasRenderer_t228 * __this, Color_t12  ___color, MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m3346(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/&CanvasRenderer_INTERNAL_CALL_SetColor_m3346_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m3346 (Object_t * __this /* static, unused */, CanvasRenderer_t228 * ___self, Color_t12 * ___color, MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m3346_ftn) (CanvasRenderer_t228 *, Color_t12 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m3346_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m3346_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern MethodInfo CanvasRenderer_GetColor_m2022_MethodInfo;
extern "C" Color_t12  CanvasRenderer_GetColor_m2022 (CanvasRenderer_t228 * __this, MethodInfo* method)
{
	typedef Color_t12  (*CanvasRenderer_GetColor_m2022_ftn) (CanvasRenderer_t228 *);
	static CanvasRenderer_GetColor_m2022_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m2022_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern MethodInfo CanvasRenderer_set_isMask_m2372_MethodInfo;
extern "C" void CanvasRenderer_set_isMask_m2372 (CanvasRenderer_t228 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m2372_ftn) (CanvasRenderer_t228 *, bool);
	static CanvasRenderer_set_isMask_m2372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m2372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern MethodInfo CanvasRenderer_SetMaterial_m2013_MethodInfo;
extern "C" void CanvasRenderer_SetMaterial_m2013 (CanvasRenderer_t228 * __this, Material_t50 * ___material, Texture_t13 * ___texture, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m2013_ftn) (CanvasRenderer_t228 *, Material_t50 *, Texture_t13 *);
	static CanvasRenderer_SetMaterial_m2013_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m2013_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern MethodInfo CanvasRenderer_SetVertices_m2012_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m2165_MethodInfo_var;
extern MethodInfo* List_1_Clear_m2026_MethodInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2012 (CanvasRenderer_t228 * __this, List_1_t234 * ___vertices, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2012_init;
	if (!CanvasRenderer_SetVertices_m2012_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		List_1_get_Count_m2165_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m2165_GenericMethod);
		List_1_Clear_m2026_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m2026_GenericMethod);
		CanvasRenderer_SetVertices_m2012_init = true;
	}
	{
		List_1_t234 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m2165_MethodInfo_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t76* L_2 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(InitializedTypeInfo(&UInt16_t750_il2cpp_TypeInfo), &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m3070(NULL /*static, unused*/, (String_t*) &_stringLiteral225, L_2, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		Debug_LogWarning_m2281(NULL /*static, unused*/, L_5, __this, /*hidden argument*/&Debug_LogWarning_m2281_MethodInfo);
		List_1_t234 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(List_1_Clear_m2026_MethodInfo_var, L_6);
	}

IL_0039:
	{
		List_1_t234 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m3347(__this, L_7, /*hidden argument*/&CanvasRenderer_SetVerticesInternal_m3347_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m3347 (CanvasRenderer_t228 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m3347_ftn) (CanvasRenderer_t228 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m3347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m3347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern MethodInfo CanvasRenderer_SetVertices_m2124_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2124 (CanvasRenderer_t228 * __this, UIVertexU5BU5D_t269* ___vertices, int32_t ___size, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2124_init;
	if (!CanvasRenderer_SetVertices_m2124_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		CanvasRenderer_SetVertices_m2124_init = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t76* L_1 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(InitializedTypeInfo(&UInt16_t750_il2cpp_TypeInfo), &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m3070(NULL /*static, unused*/, (String_t*) &_stringLiteral225, L_1, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		Debug_LogWarning_m2281(NULL /*static, unused*/, L_4, __this, /*hidden argument*/&Debug_LogWarning_m2281_MethodInfo);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t269* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m3348(__this, L_5, L_6, /*hidden argument*/&CanvasRenderer_SetVerticesInternalArray_m3348_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m3348 (CanvasRenderer_t228 * __this, UIVertexU5BU5D_t269* ___vertices, int32_t ___size, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m3348_ftn) (CanvasRenderer_t228 *, UIVertexU5BU5D_t269*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m3348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m3348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern MethodInfo CanvasRenderer_Clear_m2008_MethodInfo;
extern "C" void CanvasRenderer_Clear_m2008 (CanvasRenderer_t228 * __this, MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m2008_ftn) (CanvasRenderer_t228 *);
	static CanvasRenderer_Clear_m2008_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m2008_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern MethodInfo CanvasRenderer_get_absoluteDepth_m1994_MethodInfo;
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m1994 (CanvasRenderer_t228 * __this, MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m1994_ftn) (CanvasRenderer_t228 *);
	static CanvasRenderer_get_absoluteDepth_m1994_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m1994_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RectTransformUtility_t374_il2cpp_TypeInfo;
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"

// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
extern TypeInfo Vector3U5BU5D_t287_il2cpp_TypeInfo;
extern TypeInfo Ray_t39_il2cpp_TypeInfo;
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern Il2CppType Vector3U5BU5D_t287_0_0_0;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3350_MethodInfo;
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m3351_MethodInfo;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3352_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m1934_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToRay_m3354_MethodInfo;
extern MethodInfo Plane__ctor_m2132_MethodInfo;
extern MethodInfo Plane_Raycast_m2133_MethodInfo;
extern MethodInfo Ray_GetPoint_m2134_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToWorldPointInRectangle_m3353_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m413_MethodInfo;
extern MethodInfo Ray__ctor_m469_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutOnAxis_m2219_MethodInfo;
extern MethodInfo RectTransform_get_pivot_m2075_MethodInfo;
extern MethodInfo Vector2_get_Item_m2084_MethodInfo;
extern MethodInfo Vector2_set_Item_m2094_MethodInfo;
extern MethodInfo RectTransform_set_pivot_m2176_MethodInfo;
extern MethodInfo RectTransform_get_anchoredPosition_m2172_MethodInfo;
extern MethodInfo RectTransform_set_anchoredPosition_m2175_MethodInfo;
extern MethodInfo RectTransform_get_anchorMin_m2076_MethodInfo;
extern MethodInfo RectTransform_get_anchorMax_m2171_MethodInfo;
extern MethodInfo RectTransform_set_anchorMin_m2174_MethodInfo;
extern MethodInfo RectTransform_set_anchorMax_m2077_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutAxes_m2218_MethodInfo;
extern MethodInfo RectTransformUtility_GetTransposed_m3355_MethodInfo;
extern MethodInfo RectTransform_get_sizeDelta_m2173_MethodInfo;
extern MethodInfo RectTransform_set_sizeDelta_m2078_MethodInfo;


// System.Void UnityEngine.RectTransformUtility::.cctor()
extern MethodInfo RectTransformUtility__cctor_m3349_MethodInfo;
extern TypeInfo* Vector3U5BU5D_t287_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m3349 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool RectTransformUtility__cctor_m3349_init;
	if (!RectTransformUtility__cctor_m3349_init)
	{
		Vector3U5BU5D_t287_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t287_0_0_0);
		RectTransformUtility__cctor_m3349_init = true;
	}
	{
		((RectTransformUtility_t374_StaticFields*)InitializedTypeInfo(&RectTransformUtility_t374_il2cpp_TypeInfo)->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t287*)SZArrayNew(Vector3U5BU5D_t287_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo RectTransformUtility_RectangleContainsScreenPoint_m2053_MethodInfo;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2053 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, Vector2_t15  ___screenPoint, Camera_t35 * ___cam, MethodInfo* method)
{
	{
		RectTransform_t227 * L_0 = ___rect;
		Camera_t35 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t374_il2cpp_TypeInfo));
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3350(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3350_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3350 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, Vector2_t15 * ___screenPoint, Camera_t35 * ___cam, MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3350_ftn) (RectTransform_t227 *, Vector2_t15 *, Camera_t35 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3350_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3350_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m2020_MethodInfo;
extern "C" Vector2_t15  RectTransformUtility_PixelAdjustPoint_m2020 (Object_t * __this /* static, unused */, Vector2_t15  ___point, Transform_t38 * ___elementTransform, Canvas_t229 * ___canvas, MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Vector2_t15  L_0 = ___point;
		Transform_t38 * L_1 = ___elementTransform;
		Canvas_t229 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t374_il2cpp_TypeInfo));
		RectTransformUtility_PixelAdjustPoint_m3351(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/&RectTransformUtility_PixelAdjustPoint_m3351_MethodInfo);
		Vector2_t15  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m3351 (Object_t * __this /* static, unused */, Vector2_t15  ___point, Transform_t38 * ___elementTransform, Canvas_t229 * ___canvas, Vector2_t15 * ___output, MethodInfo* method)
{
	{
		Transform_t38 * L_0 = ___elementTransform;
		Canvas_t229 * L_1 = ___canvas;
		Vector2_t15 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t374_il2cpp_TypeInfo));
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3352(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3352_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3352 (Object_t * __this /* static, unused */, Vector2_t15 * ___point, Transform_t38 * ___elementTransform, Canvas_t229 * ___canvas, Vector2_t15 * ___output, MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3352_ftn) (Vector2_t15 *, Transform_t38 *, Canvas_t229 *, Vector2_t15 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3352_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3352_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustRect_m2021_MethodInfo;
extern "C" Rect_t18  RectTransformUtility_PixelAdjustRect_m2021 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rectTransform, Canvas_t229 * ___canvas, MethodInfo* method)
{
	typedef Rect_t18  (*RectTransformUtility_PixelAdjustRect_m2021_ftn) (RectTransform_t227 *, Canvas_t229 *);
	static RectTransformUtility_PixelAdjustRect_m2021_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m2021_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m3353 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, Vector2_t15  ___screenPoint, Camera_t35 * ___cam, Vector3_t3 * ___worldPoint, MethodInfo* method)
{
	Ray_t39  V_0 = {0};
	Plane_t389  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t3 * L_0 = ___worldPoint;
		Vector2_t15  L_1 = Vector2_get_zero_m329(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m329_MethodInfo);
		Vector3_t3  L_2 = Vector2_op_Implicit_m1934(NULL /*static, unused*/, L_1, /*hidden argument*/&Vector2_op_Implicit_m1934_MethodInfo);
		*L_0 = L_2;
		Camera_t35 * L_3 = ___cam;
		Vector2_t15  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t374_il2cpp_TypeInfo));
		Ray_t39  L_5 = RectTransformUtility_ScreenPointToRay_m3354(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&RectTransformUtility_ScreenPointToRay_m3354_MethodInfo);
		V_0 = L_5;
		RectTransform_t227 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t33  L_7 = Transform_get_rotation_m470(L_6, /*hidden argument*/&Transform_get_rotation_m470_MethodInfo);
		Vector3_t3  L_8 = Vector3_get_back_m2896(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m2896_MethodInfo);
		Vector3_t3  L_9 = Quaternion_op_Multiply_m473(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Quaternion_op_Multiply_m473_MethodInfo);
		RectTransform_t227 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t3  L_11 = Transform_get_position_m467(L_10, /*hidden argument*/&Transform_get_position_m467_MethodInfo);
		Plane__ctor_m2132((&V_1), L_9, L_11, /*hidden argument*/&Plane__ctor_m2132_MethodInfo);
		Ray_t39  L_12 = V_0;
		bool L_13 = Plane_Raycast_m2133((&V_1), L_12, (&V_2), /*hidden argument*/&Plane_Raycast_m2133_MethodInfo);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t3 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t3  L_16 = Ray_GetPoint_m2134((&V_0), L_15, /*hidden argument*/&Ray_GetPoint_m2134_MethodInfo);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern MethodInfo RectTransformUtility_ScreenPointToLocalPointInRectangle_m2088_MethodInfo;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2088 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, Vector2_t15  ___screenPoint, Camera_t35 * ___cam, Vector2_t15 * ___localPoint, MethodInfo* method)
{
	Vector3_t3  V_0 = {0};
	{
		Vector2_t15 * L_0 = ___localPoint;
		Vector2_t15  L_1 = Vector2_get_zero_m329(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m329_MethodInfo);
		*L_0 = L_1;
		RectTransform_t227 * L_2 = ___rect;
		Vector2_t15  L_3 = ___screenPoint;
		Camera_t35 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t374_il2cpp_TypeInfo));
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m3353(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/&RectTransformUtility_ScreenPointToWorldPointInRectangle_m3353_MethodInfo);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t15 * L_6 = ___localPoint;
		RectTransform_t227 * L_7 = ___rect;
		Vector3_t3  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t3  L_9 = Transform_InverseTransformPoint_m2131(L_7, L_8, /*hidden argument*/&Transform_InverseTransformPoint_m2131_MethodInfo);
		Vector2_t15  L_10 = Vector2_op_Implicit_m413(NULL /*static, unused*/, L_9, /*hidden argument*/&Vector2_op_Implicit_m413_MethodInfo);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t39  RectTransformUtility_ScreenPointToRay_m3354 (Object_t * __this /* static, unused */, Camera_t35 * ___cam, Vector2_t15  ___screenPos, MethodInfo* method)
{
	Vector3_t3  V_0 = {0};
	{
		Camera_t35 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m312(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t35 * L_2 = ___cam;
		Vector2_t15  L_3 = ___screenPos;
		Vector3_t3  L_4 = Vector2_op_Implicit_m1934(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector2_op_Implicit_m1934_MethodInfo);
		NullCheck(L_2);
		Ray_t39  L_5 = Camera_ScreenPointToRay_m1935(L_2, L_4, /*hidden argument*/&Camera_ScreenPointToRay_m1935_MethodInfo);
		return L_5;
	}

IL_0019:
	{
		Vector2_t15  L_6 = ___screenPos;
		Vector3_t3  L_7 = Vector2_op_Implicit_m1934(NULL /*static, unused*/, L_6, /*hidden argument*/&Vector2_op_Implicit_m1934_MethodInfo);
		V_0 = L_7;
		Vector3_t3 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t3  L_10 = V_0;
		Vector3_t3  L_11 = Vector3_get_forward_m421(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m421_MethodInfo);
		Ray_t39  L_12 = {0};
		Ray__ctor_m469(&L_12, L_10, L_11, /*hidden argument*/&Ray__ctor_m469_MethodInfo);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2219 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t227 * V_1 = {0};
	Vector2_t15  V_2 = {0};
	Vector2_t15  V_3 = {0};
	Vector2_t15  V_4 = {0};
	Vector2_t15  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t227 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m306(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t227 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t38 * L_5 = Transform_GetChild_m2345(L_3, L_4, /*hidden argument*/&Transform_GetChild_m2345_MethodInfo);
		V_1 = ((RectTransform_t227 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t227_il2cpp_TypeInfo)));
		RectTransform_t227 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m312(NULL /*static, unused*/, L_6, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t227 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t374_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutOnAxis_m2219(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutOnAxis_m2219_MethodInfo);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t227 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m2348(L_12, /*hidden argument*/&Transform_get_childCount_m2348_MethodInfo);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t227 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t15  L_15 = RectTransform_get_pivot_m2075(L_14, /*hidden argument*/&RectTransform_get_pivot_m2075_MethodInfo);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m2084((&V_2), L_17, /*hidden argument*/&Vector2_get_Item_m2084_MethodInfo);
		Vector2_set_Item_m2094((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/&Vector2_set_Item_m2094_MethodInfo);
		RectTransform_t227 * L_19 = ___rect;
		Vector2_t15  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m2176(L_19, L_20, /*hidden argument*/&RectTransform_set_pivot_m2176_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t227 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t15  L_23 = RectTransform_get_anchoredPosition_m2172(L_22, /*hidden argument*/&RectTransform_get_anchoredPosition_m2172_MethodInfo);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m2084((&V_3), L_25, /*hidden argument*/&Vector2_get_Item_m2084_MethodInfo);
		Vector2_set_Item_m2094((&V_3), L_24, ((-L_26)), /*hidden argument*/&Vector2_set_Item_m2094_MethodInfo);
		RectTransform_t227 * L_27 = ___rect;
		Vector2_t15  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m2175(L_27, L_28, /*hidden argument*/&RectTransform_set_anchoredPosition_m2175_MethodInfo);
		RectTransform_t227 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t15  L_30 = RectTransform_get_anchorMin_m2076(L_29, /*hidden argument*/&RectTransform_get_anchorMin_m2076_MethodInfo);
		V_4 = L_30;
		RectTransform_t227 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t15  L_32 = RectTransform_get_anchorMax_m2171(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2171_MethodInfo);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m2084((&V_4), L_33, /*hidden argument*/&Vector2_get_Item_m2084_MethodInfo);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m2084((&V_5), L_36, /*hidden argument*/&Vector2_get_Item_m2084_MethodInfo);
		Vector2_set_Item_m2094((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/&Vector2_set_Item_m2094_MethodInfo);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m2094((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/&Vector2_set_Item_m2094_MethodInfo);
		RectTransform_t227 * L_40 = ___rect;
		Vector2_t15  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m2174(L_40, L_41, /*hidden argument*/&RectTransform_set_anchorMin_m2174_MethodInfo);
		RectTransform_t227 * L_42 = ___rect;
		Vector2_t15  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m2077(L_42, L_43, /*hidden argument*/&RectTransform_set_anchorMax_m2077_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m2218 (Object_t * __this /* static, unused */, RectTransform_t227 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t227 * V_1 = {0};
	{
		RectTransform_t227 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m306(NULL /*static, unused*/, L_0, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Equality_m306_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t227 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t38 * L_5 = Transform_GetChild_m2345(L_3, L_4, /*hidden argument*/&Transform_GetChild_m2345_MethodInfo);
		V_1 = ((RectTransform_t227 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t227_il2cpp_TypeInfo)));
		RectTransform_t227 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m312(NULL /*static, unused*/, L_6, (Object_t79 *)NULL, /*hidden argument*/&Object_op_Inequality_m312_MethodInfo);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t227 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t374_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutAxes_m2218(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutAxes_m2218_MethodInfo);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t227 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m2348(L_11, /*hidden argument*/&Transform_get_childCount_m2348_MethodInfo);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t227 * L_13 = ___rect;
		RectTransform_t227 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t15  L_15 = RectTransform_get_pivot_m2075(L_14, /*hidden argument*/&RectTransform_get_pivot_m2075_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t374_il2cpp_TypeInfo));
		Vector2_t15  L_16 = RectTransformUtility_GetTransposed_m3355(NULL /*static, unused*/, L_15, /*hidden argument*/&RectTransformUtility_GetTransposed_m3355_MethodInfo);
		NullCheck(L_13);
		RectTransform_set_pivot_m2176(L_13, L_16, /*hidden argument*/&RectTransform_set_pivot_m2176_MethodInfo);
		RectTransform_t227 * L_17 = ___rect;
		RectTransform_t227 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t15  L_19 = RectTransform_get_sizeDelta_m2173(L_18, /*hidden argument*/&RectTransform_get_sizeDelta_m2173_MethodInfo);
		Vector2_t15  L_20 = RectTransformUtility_GetTransposed_m3355(NULL /*static, unused*/, L_19, /*hidden argument*/&RectTransformUtility_GetTransposed_m3355_MethodInfo);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m2078(L_17, L_20, /*hidden argument*/&RectTransform_set_sizeDelta_m2078_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t227 * L_22 = ___rect;
		RectTransform_t227 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t15  L_24 = RectTransform_get_anchoredPosition_m2172(L_23, /*hidden argument*/&RectTransform_get_anchoredPosition_m2172_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t374_il2cpp_TypeInfo));
		Vector2_t15  L_25 = RectTransformUtility_GetTransposed_m3355(NULL /*static, unused*/, L_24, /*hidden argument*/&RectTransformUtility_GetTransposed_m3355_MethodInfo);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m2175(L_22, L_25, /*hidden argument*/&RectTransform_set_anchoredPosition_m2175_MethodInfo);
		RectTransform_t227 * L_26 = ___rect;
		RectTransform_t227 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t15  L_28 = RectTransform_get_anchorMin_m2076(L_27, /*hidden argument*/&RectTransform_get_anchorMin_m2076_MethodInfo);
		Vector2_t15  L_29 = RectTransformUtility_GetTransposed_m3355(NULL /*static, unused*/, L_28, /*hidden argument*/&RectTransformUtility_GetTransposed_m3355_MethodInfo);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m2174(L_26, L_29, /*hidden argument*/&RectTransform_set_anchorMin_m2174_MethodInfo);
		RectTransform_t227 * L_30 = ___rect;
		RectTransform_t227 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t15  L_32 = RectTransform_get_anchorMax_m2171(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2171_MethodInfo);
		Vector2_t15  L_33 = RectTransformUtility_GetTransposed_m3355(NULL /*static, unused*/, L_32, /*hidden argument*/&RectTransformUtility_GetTransposed_m3355_MethodInfo);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m2077(L_30, L_33, /*hidden argument*/&RectTransform_set_anchorMax_m2077_MethodInfo);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t15  RectTransformUtility_GetTransposed_m3355 (Object_t * __this /* static, unused */, Vector2_t15  ___input, MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t15  L_2 = {0};
		Vector2__ctor_m336(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m336_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Request_t613_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"

// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo SourceID_t632_il2cpp_TypeInfo;
extern TypeInfo AppID_t631_il2cpp_TypeInfo;
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
extern MethodInfo Request_get_sourceId_m3357_MethodInfo;
extern MethodInfo Enum_ToString_m3866_MethodInfo;
extern MethodInfo Request_get_appId_m3358_MethodInfo;
extern MethodInfo Request_get_domain_m3359_MethodInfo;


// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern MethodInfo Request__ctor_m3356_MethodInfo;
extern "C" void Request__ctor_m3356 (Request_t613 * __this, MethodInfo* method)
{
	{
		__this->___version_0 = 1;
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m3357 (Request_t613 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CsourceIdU3Ek__BackingField_1);
		return L_0;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m3358 (Request_t613 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CappIdU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m3359 (Request_t613 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CdomainU3Ek__BackingField_3);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern MethodInfo Request_ToString_m3360_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" String_t* Request_ToString_m3360 (Request_t613 * __this, MethodInfo* method)
{
	static bool Request_ToString_m3360_init;
	if (!Request_ToString_m3360_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Request_ToString_m3360_init = true;
	}
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m597(__this, /*hidden argument*/&Object_ToString_m597_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m3357(__this, /*hidden argument*/&Request_get_sourceId_m3357_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&SourceID_t632_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3866(L_5, (String_t*) &_stringLiteral227, /*hidden argument*/&Enum_ToString_m3866_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t76* L_7 = L_2;
		uint64_t L_8 = Request_get_appId_m3358(__this, /*hidden argument*/&Request_get_appId_m3358_MethodInfo);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&AppID_t631_il2cpp_TypeInfo), &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m3866(L_10, (String_t*) &_stringLiteral227, /*hidden argument*/&Enum_ToString_m3866_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t76* L_12 = L_7;
		int32_t L_13 = Request_get_domain_m3359(__this, /*hidden argument*/&Request_get_domain_m3359_MethodInfo);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m3070(NULL /*static, unused*/, (String_t*) &_stringLiteral226, L_12, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_16;
	}
}
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResponseBase_t614_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"

// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
extern TypeInfo IDictionary_2_t615_il2cpp_TypeInfo;
extern TypeInfo FormatException_t751_il2cpp_TypeInfo;
extern TypeInfo Convert_t744_il2cpp_TypeInfo;
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
extern Il2CppType IDictionary_2_t615_0_0_0;
extern MethodInfo IDictionary_2_TryGetValue_m3867_MethodInfo;
extern MethodInfo String_Concat_m548_MethodInfo;
extern MethodInfo FormatException__ctor_m3868_MethodInfo;
extern MethodInfo Convert_ToInt32_m3869_MethodInfo;
extern MethodInfo Convert_ToUInt16_m3870_MethodInfo;
extern MethodInfo Convert_ToUInt64_m3871_MethodInfo;
extern MethodInfo Convert_ToBoolean_m3872_MethodInfo;
extern Il2CppGenericMethod IDictionary_2_TryGetValue_m3867_GenericMethod;


// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern MethodInfo ResponseBase__ctor_m3361_MethodInfo;
extern "C" void ResponseBase__ctor_m3361 (ResponseBase_t614 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object)
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONString_m3362_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m3867_MethodInfo_var;
extern "C" String_t* ResponseBase_ParseJSONString_m3362 (ResponseBase_t614 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONString_m3362_init;
	if (!ResponseBase_ParseJSONString_m3362_init)
	{
		IDictionary_2_TryGetValue_m3867_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m3867_GenericMethod);
		ResponseBase_ParseJSONString_m3362_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m3867_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		return ((String_t*)IsInst(L_3, (&String_t_il2cpp_TypeInfo)));
	}

IL_0015:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Concat_m548(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral228, /*hidden argument*/&String_Concat_m548_MethodInfo);
		FormatException_t751 * L_6 = (FormatException_t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t751_il2cpp_TypeInfo));
		FormatException__ctor_m3868(L_6, L_5, /*hidden argument*/&FormatException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONInt32_m3363_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m3867_MethodInfo_var;
extern "C" int32_t ResponseBase_ParseJSONInt32_m3363 (ResponseBase_t614 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONInt32_m3363_init;
	if (!ResponseBase_ParseJSONInt32_m3363_init)
	{
		IDictionary_2_TryGetValue_m3867_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m3867_GenericMethod);
		ResponseBase_ParseJSONInt32_m3363_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m3867_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		int32_t L_4 = Convert_ToInt32_m3869(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToInt32_m3869_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m548(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral228, /*hidden argument*/&String_Concat_m548_MethodInfo);
		FormatException_t751 * L_7 = (FormatException_t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t751_il2cpp_TypeInfo));
		FormatException__ctor_m3868(L_7, L_6, /*hidden argument*/&FormatException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONUInt16_m3364_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m3867_MethodInfo_var;
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m3364 (ResponseBase_t614 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONUInt16_m3364_init;
	if (!ResponseBase_ParseJSONUInt16_m3364_init)
	{
		IDictionary_2_TryGetValue_m3867_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m3867_GenericMethod);
		ResponseBase_ParseJSONUInt16_m3364_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m3867_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		uint16_t L_4 = Convert_ToUInt16_m3870(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToUInt16_m3870_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m548(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral228, /*hidden argument*/&String_Concat_m548_MethodInfo);
		FormatException_t751 * L_7 = (FormatException_t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t751_il2cpp_TypeInfo));
		FormatException__ctor_m3868(L_7, L_6, /*hidden argument*/&FormatException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONUInt64_m3365_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m3867_MethodInfo_var;
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m3365 (ResponseBase_t614 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONUInt64_m3365_init;
	if (!ResponseBase_ParseJSONUInt64_m3365_init)
	{
		IDictionary_2_TryGetValue_m3867_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m3867_GenericMethod);
		ResponseBase_ParseJSONUInt64_m3365_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m3867_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		uint64_t L_4 = Convert_ToUInt64_m3871(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToUInt64_m3871_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m548(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral228, /*hidden argument*/&String_Concat_m548_MethodInfo);
		FormatException_t751 * L_7 = (FormatException_t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t751_il2cpp_TypeInfo));
		FormatException__ctor_m3868(L_7, L_6, /*hidden argument*/&FormatException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONBool_m3366_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m3867_MethodInfo_var;
extern "C" bool ResponseBase_ParseJSONBool_m3366 (ResponseBase_t614 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONBool_m3366_init;
	if (!ResponseBase_ParseJSONBool_m3366_init)
	{
		IDictionary_2_TryGetValue_m3867_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m3867_GenericMethod);
		ResponseBase_ParseJSONBool_m3366_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m3867_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		bool L_4 = Convert_ToBoolean_m3872(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToBoolean_m3872_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m548(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral228, /*hidden argument*/&String_Concat_m548_MethodInfo);
		FormatException_t751 * L_7 = (FormatException_t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t751_il2cpp_TypeInfo));
		FormatException__ctor_m3868(L_7, L_6, /*hidden argument*/&FormatException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Response_t616_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"

extern MethodInfo Response_get_success_m3368_MethodInfo;
extern MethodInfo Response_get_extendedInfo_m3370_MethodInfo;
extern MethodInfo Response_set_success_m3369_MethodInfo;
extern MethodInfo Response_set_extendedInfo_m3371_MethodInfo;


// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern MethodInfo Response__ctor_m3367_MethodInfo;
extern "C" void Response__ctor_m3367 (Response_t616 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m3361(__this, /*hidden argument*/&ResponseBase__ctor_m3361_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m3368 (Response_t616 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsuccessU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C" void Response_set_success_m3369 (Response_t616 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m3370 (Response_t616 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CextendedInfoU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C" void Response_set_extendedInfo_m3371 (Response_t616 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CextendedInfoU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern MethodInfo Response_ToString_m3372_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" String_t* Response_ToString_m3372 (Response_t616 * __this, MethodInfo* method)
{
	static bool Response_ToString_m3372_init;
	if (!Response_ToString_m3372_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Response_ToString_m3372_init = true;
	}
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Object_ToString_m597(__this, /*hidden argument*/&Object_ToString_m597_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		bool L_3 = Response_get_success_m3368(__this, /*hidden argument*/&Response_get_success_m3368_MethodInfo);
		bool L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Boolean_t83_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t76* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m3370(__this, /*hidden argument*/&Response_get_extendedInfo_m3370_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m3070(NULL /*static, unused*/, (String_t*) &_stringLiteral229, L_6, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_8;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern MethodInfo Response_Parse_m3373_MethodInfo;
extern TypeInfo* IDictionary_2_t615_il2cpp_TypeInfo_var;
extern "C" void Response_Parse_m3373 (Response_t616 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool Response_Parse_m3373_init;
	if (!Response_Parse_m3373_init)
	{
		IDictionary_2_t615_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t615_0_0_0);
		Response_Parse_m3373_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t615_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m3366(__this, (String_t*) &_stringLiteral230, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONBool_m3366_MethodInfo);
		Response_set_success_m3369(__this, L_4, /*hidden argument*/&Response_set_success_m3369_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m3362(__this, (String_t*) &_stringLiteral231, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m3362_MethodInfo);
		Response_set_extendedInfo_m3371(__this, L_7, /*hidden argument*/&Response_set_extendedInfo_m3371_MethodInfo);
		bool L_8 = Response_get_success_m3368(__this, /*hidden argument*/&Response_get_success_m3368_MethodInfo);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m3370(__this, /*hidden argument*/&Response_get_extendedInfo_m3370_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral232, L_9, /*hidden argument*/&String_Concat_m548_MethodInfo);
		FormatException_t751 * L_11 = (FormatException_t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t751_il2cpp_TypeInfo));
		FormatException__ctor_m3868(L_11, L_10, /*hidden argument*/&FormatException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BasicResponse_t617_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern MethodInfo BasicResponse__ctor_m3374_MethodInfo;
extern "C" void BasicResponse__ctor_m3374 (BasicResponse_t617 * __this, MethodInfo* method)
{
	{
		Response__ctor_m3367(__this, /*hidden argument*/&Response__ctor_m3367_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CreateMatchRequest_t619_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
extern TypeInfo UInt32_t752_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t618_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
extern Il2CppType Dictionary_2_t618_0_0_0;
extern MethodInfo CreateMatchRequest_get_name_m3376_MethodInfo;
extern MethodInfo CreateMatchRequest_get_size_m3378_MethodInfo;
extern MethodInfo CreateMatchRequest_get_advertise_m3380_MethodInfo;
extern MethodInfo CreateMatchRequest_get_password_m3382_MethodInfo;
extern MethodInfo CreateMatchRequest_get_matchAttributes_m3384_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m3873_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_get_Count_m3873_GenericMethod;


// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern MethodInfo CreateMatchRequest__ctor_m3375_MethodInfo;
extern "C" void CreateMatchRequest__ctor_m3375 (CreateMatchRequest_t619 * __this, MethodInfo* method)
{
	{
		Request__ctor_m3356(__this, /*hidden argument*/&Request__ctor_m3356_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m3376 (CreateMatchRequest_t619 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern MethodInfo CreateMatchRequest_set_name_m3377_MethodInfo;
extern "C" void CreateMatchRequest_set_name_m3377 (CreateMatchRequest_t619 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m3378 (CreateMatchRequest_t619 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___U3CsizeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern MethodInfo CreateMatchRequest_set_size_m3379_MethodInfo;
extern "C" void CreateMatchRequest_set_size_m3379 (CreateMatchRequest_t619 * __this, uint32_t ___value, MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m3380 (CreateMatchRequest_t619 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CadvertiseU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern MethodInfo CreateMatchRequest_set_advertise_m3381_MethodInfo;
extern "C" void CreateMatchRequest_set_advertise_m3381 (CreateMatchRequest_t619 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CadvertiseU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m3382 (CreateMatchRequest_t619 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern MethodInfo CreateMatchRequest_set_password_m3383_MethodInfo;
extern "C" void CreateMatchRequest_set_password_m3383 (CreateMatchRequest_t619 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t618 * CreateMatchRequest_get_matchAttributes_m3384 (CreateMatchRequest_t619 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t618 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern MethodInfo CreateMatchRequest_ToString_m3385_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m3873_MethodInfo_var;
extern "C" String_t* CreateMatchRequest_ToString_m3385 (CreateMatchRequest_t619 * __this, MethodInfo* method)
{
	static bool CreateMatchRequest_ToString_m3385_init;
	if (!CreateMatchRequest_ToString_m3385_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Dictionary_2_get_Count_m3873_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m3873_GenericMethod);
		CreateMatchRequest_ToString_m3385_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t76* G_B2_1 = {0};
	ObjectU5BU5D_t76* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t76* G_B1_1 = {0};
	ObjectU5BU5D_t76* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t76* G_B3_2 = {0};
	ObjectU5BU5D_t76* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t76* G_B5_1 = {0};
	ObjectU5BU5D_t76* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t76* G_B4_1 = {0};
	ObjectU5BU5D_t76* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t76* G_B6_2 = {0};
	ObjectU5BU5D_t76* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m3360(__this, /*hidden argument*/&Request_ToString_m3360_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		String_t* L_3 = CreateMatchRequest_get_name_m3376(__this, /*hidden argument*/&CreateMatchRequest_get_name_m3376_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t76* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m3378(__this, /*hidden argument*/&CreateMatchRequest_get_size_m3378_MethodInfo);
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&UInt32_t752_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t76* L_8 = L_4;
		bool L_9 = CreateMatchRequest_get_advertise_m3380(__this, /*hidden argument*/&CreateMatchRequest_get_advertise_m3380_MethodInfo);
		bool L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Boolean_t83_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t76* L_12 = L_8;
		String_t* L_13 = CreateMatchRequest_get_password_m3382(__this, /*hidden argument*/&CreateMatchRequest_get_password_m3382_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_15 = String_op_Equality_m2110(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral233;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral233;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral234;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (String_t*) &_stringLiteral235;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		ObjectU5BU5D_t76* L_16 = G_B3_3;
		Dictionary_2_t618 * L_17 = CreateMatchRequest_get_matchAttributes_m3384(__this, /*hidden argument*/&CreateMatchRequest_get_matchAttributes_m3384_MethodInfo);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		Dictionary_2_t618 * L_18 = CreateMatchRequest_get_matchAttributes_m3384(__this, /*hidden argument*/&CreateMatchRequest_get_matchAttributes_m3384_MethodInfo);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m3873_MethodInfo_var, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		Object_t * L_21 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_20);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m3070(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_22;
	}
}
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CreateMatchResponse_t620_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo NetworkID_t633_il2cpp_TypeInfo;
extern TypeInfo NodeID_t634_il2cpp_TypeInfo;
extern MethodInfo CreateMatchResponse_get_address_m3387_MethodInfo;
extern MethodInfo CreateMatchResponse_get_port_m3389_MethodInfo;
extern MethodInfo CreateMatchResponse_get_networkId_m3391_MethodInfo;
extern MethodInfo CreateMatchResponse_get_nodeId_m3395_MethodInfo;
extern MethodInfo CreateMatchResponse_get_usingRelay_m3397_MethodInfo;
extern MethodInfo CreateMatchResponse_set_address_m3388_MethodInfo;
extern MethodInfo CreateMatchResponse_set_port_m3390_MethodInfo;
extern MethodInfo CreateMatchResponse_set_networkId_m3392_MethodInfo;
extern MethodInfo CreateMatchResponse_set_accessTokenString_m3394_MethodInfo;
extern MethodInfo CreateMatchResponse_set_nodeId_m3396_MethodInfo;
extern MethodInfo CreateMatchResponse_set_usingRelay_m3398_MethodInfo;


// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern MethodInfo CreateMatchResponse__ctor_m3386_MethodInfo;
extern "C" void CreateMatchResponse__ctor_m3386 (CreateMatchResponse_t620 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m3374(__this, /*hidden argument*/&BasicResponse__ctor_m3374_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m3387 (CreateMatchResponse_t620 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C" void CreateMatchResponse_set_address_m3388 (CreateMatchResponse_t620 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m3389 (CreateMatchResponse_t620 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C" void CreateMatchResponse_set_port_m3390 (CreateMatchResponse_t620 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m3391 (CreateMatchResponse_t620 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void CreateMatchResponse_set_networkId_m3392 (CreateMatchResponse_t620 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern MethodInfo CreateMatchResponse_get_accessTokenString_m3393_MethodInfo;
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m3393 (CreateMatchResponse_t620 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m3394 (CreateMatchResponse_t620 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m3395 (CreateMatchResponse_t620 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void CreateMatchResponse_set_nodeId_m3396 (CreateMatchResponse_t620 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m3397 (CreateMatchResponse_t620 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C" void CreateMatchResponse_set_usingRelay_m3398 (CreateMatchResponse_t620 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern MethodInfo CreateMatchResponse_ToString_m3399_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchResponse_ToString_m3399 (CreateMatchResponse_t620 * __this, MethodInfo* method)
{
	static bool CreateMatchResponse_ToString_m3399_init;
	if (!CreateMatchResponse_ToString_m3399_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		CreateMatchResponse_ToString_m3399_init = true;
	}
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m3372(__this, /*hidden argument*/&Response_ToString_m3372_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m3387(__this, /*hidden argument*/&CreateMatchResponse_get_address_m3387_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t76* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m3389(__this, /*hidden argument*/&CreateMatchResponse_get_port_m3389_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t76* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m3391(__this, /*hidden argument*/&CreateMatchResponse_get_networkId_m3391_MethodInfo);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&NetworkID_t633_il2cpp_TypeInfo), &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m3866(L_11, (String_t*) &_stringLiteral227, /*hidden argument*/&Enum_ToString_m3866_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t76* L_13 = L_8;
		uint16_t L_14 = CreateMatchResponse_get_nodeId_m3395(__this, /*hidden argument*/&CreateMatchResponse_get_nodeId_m3395_MethodInfo);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&NodeID_t634_il2cpp_TypeInfo), &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m3866(L_16, (String_t*) &_stringLiteral227, /*hidden argument*/&Enum_ToString_m3866_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t76* L_18 = L_13;
		bool L_19 = CreateMatchResponse_get_usingRelay_m3397(__this, /*hidden argument*/&CreateMatchResponse_get_usingRelay_m3397_MethodInfo);
		bool L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&Boolean_t83_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m3070(NULL /*static, unused*/, (String_t*) &_stringLiteral236, L_18, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern MethodInfo CreateMatchResponse_Parse_m3400_MethodInfo;
extern TypeInfo* IDictionary_2_t615_il2cpp_TypeInfo_var;
extern "C" void CreateMatchResponse_Parse_m3400 (CreateMatchResponse_t620 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool CreateMatchResponse_Parse_m3400_init;
	if (!CreateMatchResponse_Parse_m3400_init)
	{
		IDictionary_2_t615_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t615_0_0_0);
		CreateMatchResponse_Parse_m3400_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m3373(__this, L_0, /*hidden argument*/&Response_Parse_m3373_MethodInfo);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t615_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m3362(__this, (String_t*) &_stringLiteral237, L_3, L_4, /*hidden argument*/&ResponseBase_ParseJSONString_m3362_MethodInfo);
		CreateMatchResponse_set_address_m3388(__this, L_5, /*hidden argument*/&CreateMatchResponse_set_address_m3388_MethodInfo);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m3363(__this, (String_t*) &_stringLiteral238, L_6, L_7, /*hidden argument*/&ResponseBase_ParseJSONInt32_m3363_MethodInfo);
		CreateMatchResponse_set_port_m3390(__this, L_8, /*hidden argument*/&CreateMatchResponse_set_port_m3390_MethodInfo);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m3365(__this, (String_t*) &_stringLiteral239, L_9, L_10, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m3365_MethodInfo);
		CreateMatchResponse_set_networkId_m3392(__this, L_11, /*hidden argument*/&CreateMatchResponse_set_networkId_m3392_MethodInfo);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m3362(__this, (String_t*) &_stringLiteral240, L_12, L_13, /*hidden argument*/&ResponseBase_ParseJSONString_m3362_MethodInfo);
		CreateMatchResponse_set_accessTokenString_m3394(__this, L_14, /*hidden argument*/&CreateMatchResponse_set_accessTokenString_m3394_MethodInfo);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m3364(__this, (String_t*) &_stringLiteral241, L_15, L_16, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m3364_MethodInfo);
		CreateMatchResponse_set_nodeId_m3396(__this, L_17, /*hidden argument*/&CreateMatchResponse_set_nodeId_m3396_MethodInfo);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m3366(__this, (String_t*) &_stringLiteral242, L_18, L_19, /*hidden argument*/&ResponseBase_ParseJSONBool_m3366_MethodInfo);
		CreateMatchResponse_set_usingRelay_m3398(__this, L_20, /*hidden argument*/&CreateMatchResponse_set_usingRelay_m3398_MethodInfo);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral243, L_22, /*hidden argument*/&String_Concat_m548_MethodInfo);
		FormatException_t751 * L_24 = (FormatException_t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t751_il2cpp_TypeInfo));
		FormatException__ctor_m3868(L_24, L_23, /*hidden argument*/&FormatException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JoinMatchRequest_t621_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"

extern MethodInfo JoinMatchRequest_get_networkId_m3402_MethodInfo;
extern MethodInfo JoinMatchRequest_get_password_m3404_MethodInfo;


// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern MethodInfo JoinMatchRequest__ctor_m3401_MethodInfo;
extern "C" void JoinMatchRequest__ctor_m3401 (JoinMatchRequest_t621 * __this, MethodInfo* method)
{
	{
		Request__ctor_m3356(__this, /*hidden argument*/&Request__ctor_m3356_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m3402 (JoinMatchRequest_t621 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo JoinMatchRequest_set_networkId_m3403_MethodInfo;
extern "C" void JoinMatchRequest_set_networkId_m3403 (JoinMatchRequest_t621 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m3404 (JoinMatchRequest_t621 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern MethodInfo JoinMatchRequest_set_password_m3405_MethodInfo;
extern "C" void JoinMatchRequest_set_password_m3405 (JoinMatchRequest_t621 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern MethodInfo JoinMatchRequest_ToString_m3406_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchRequest_ToString_m3406 (JoinMatchRequest_t621 * __this, MethodInfo* method)
{
	static bool JoinMatchRequest_ToString_m3406_init;
	if (!JoinMatchRequest_ToString_m3406_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		JoinMatchRequest_ToString_m3406_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t76* G_B2_1 = {0};
	ObjectU5BU5D_t76* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t76* G_B1_1 = {0};
	ObjectU5BU5D_t76* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t76* G_B3_2 = {0};
	ObjectU5BU5D_t76* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m3360(__this, /*hidden argument*/&Request_ToString_m3360_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m3402(__this, /*hidden argument*/&JoinMatchRequest_get_networkId_m3402_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t633_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3866(L_5, (String_t*) &_stringLiteral227, /*hidden argument*/&Enum_ToString_m3866_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t76* L_7 = L_2;
		String_t* L_8 = JoinMatchRequest_get_password_m3404(__this, /*hidden argument*/&JoinMatchRequest_get_password_m3404_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_10 = String_op_Equality_m2110(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (String_t*) &_stringLiteral244;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (String_t*) &_stringLiteral244;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral234;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (String_t*) &_stringLiteral235;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		String_t* L_11 = UnityString_Format_m3070(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_11;
	}
}
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JoinMatchResponse_t622_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"

extern MethodInfo JoinMatchResponse_get_address_m3408_MethodInfo;
extern MethodInfo JoinMatchResponse_get_port_m3410_MethodInfo;
extern MethodInfo JoinMatchResponse_get_networkId_m3412_MethodInfo;
extern MethodInfo JoinMatchResponse_get_nodeId_m3416_MethodInfo;
extern MethodInfo JoinMatchResponse_get_usingRelay_m3418_MethodInfo;
extern MethodInfo JoinMatchResponse_set_address_m3409_MethodInfo;
extern MethodInfo JoinMatchResponse_set_port_m3411_MethodInfo;
extern MethodInfo JoinMatchResponse_set_networkId_m3413_MethodInfo;
extern MethodInfo JoinMatchResponse_set_accessTokenString_m3415_MethodInfo;
extern MethodInfo JoinMatchResponse_set_nodeId_m3417_MethodInfo;
extern MethodInfo JoinMatchResponse_set_usingRelay_m3419_MethodInfo;


// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern MethodInfo JoinMatchResponse__ctor_m3407_MethodInfo;
extern "C" void JoinMatchResponse__ctor_m3407 (JoinMatchResponse_t622 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m3374(__this, /*hidden argument*/&BasicResponse__ctor_m3374_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m3408 (JoinMatchResponse_t622 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C" void JoinMatchResponse_set_address_m3409 (JoinMatchResponse_t622 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m3410 (JoinMatchResponse_t622 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C" void JoinMatchResponse_set_port_m3411 (JoinMatchResponse_t622 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m3412 (JoinMatchResponse_t622 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchResponse_set_networkId_m3413 (JoinMatchResponse_t622 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern MethodInfo JoinMatchResponse_get_accessTokenString_m3414_MethodInfo;
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m3414 (JoinMatchResponse_t622 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m3415 (JoinMatchResponse_t622 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m3416 (JoinMatchResponse_t622 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void JoinMatchResponse_set_nodeId_m3417 (JoinMatchResponse_t622 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m3418 (JoinMatchResponse_t622 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C" void JoinMatchResponse_set_usingRelay_m3419 (JoinMatchResponse_t622 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern MethodInfo JoinMatchResponse_ToString_m3420_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchResponse_ToString_m3420 (JoinMatchResponse_t622 * __this, MethodInfo* method)
{
	static bool JoinMatchResponse_ToString_m3420_init;
	if (!JoinMatchResponse_ToString_m3420_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		JoinMatchResponse_ToString_m3420_init = true;
	}
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m3372(__this, /*hidden argument*/&Response_ToString_m3372_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m3408(__this, /*hidden argument*/&JoinMatchResponse_get_address_m3408_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t76* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m3410(__this, /*hidden argument*/&JoinMatchResponse_get_port_m3410_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t76* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m3412(__this, /*hidden argument*/&JoinMatchResponse_get_networkId_m3412_MethodInfo);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&NetworkID_t633_il2cpp_TypeInfo), &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m3866(L_11, (String_t*) &_stringLiteral227, /*hidden argument*/&Enum_ToString_m3866_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t76* L_13 = L_8;
		uint16_t L_14 = JoinMatchResponse_get_nodeId_m3416(__this, /*hidden argument*/&JoinMatchResponse_get_nodeId_m3416_MethodInfo);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&NodeID_t634_il2cpp_TypeInfo), &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m3866(L_16, (String_t*) &_stringLiteral227, /*hidden argument*/&Enum_ToString_m3866_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t76* L_18 = L_13;
		bool L_19 = JoinMatchResponse_get_usingRelay_m3418(__this, /*hidden argument*/&JoinMatchResponse_get_usingRelay_m3418_MethodInfo);
		bool L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&Boolean_t83_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m3070(NULL /*static, unused*/, (String_t*) &_stringLiteral236, L_18, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern MethodInfo JoinMatchResponse_Parse_m3421_MethodInfo;
extern TypeInfo* IDictionary_2_t615_il2cpp_TypeInfo_var;
extern "C" void JoinMatchResponse_Parse_m3421 (JoinMatchResponse_t622 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool JoinMatchResponse_Parse_m3421_init;
	if (!JoinMatchResponse_Parse_m3421_init)
	{
		IDictionary_2_t615_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t615_0_0_0);
		JoinMatchResponse_Parse_m3421_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m3373(__this, L_0, /*hidden argument*/&Response_Parse_m3373_MethodInfo);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t615_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m3362(__this, (String_t*) &_stringLiteral237, L_3, L_4, /*hidden argument*/&ResponseBase_ParseJSONString_m3362_MethodInfo);
		JoinMatchResponse_set_address_m3409(__this, L_5, /*hidden argument*/&JoinMatchResponse_set_address_m3409_MethodInfo);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m3363(__this, (String_t*) &_stringLiteral238, L_6, L_7, /*hidden argument*/&ResponseBase_ParseJSONInt32_m3363_MethodInfo);
		JoinMatchResponse_set_port_m3411(__this, L_8, /*hidden argument*/&JoinMatchResponse_set_port_m3411_MethodInfo);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m3365(__this, (String_t*) &_stringLiteral239, L_9, L_10, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m3365_MethodInfo);
		JoinMatchResponse_set_networkId_m3413(__this, L_11, /*hidden argument*/&JoinMatchResponse_set_networkId_m3413_MethodInfo);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m3362(__this, (String_t*) &_stringLiteral240, L_12, L_13, /*hidden argument*/&ResponseBase_ParseJSONString_m3362_MethodInfo);
		JoinMatchResponse_set_accessTokenString_m3415(__this, L_14, /*hidden argument*/&JoinMatchResponse_set_accessTokenString_m3415_MethodInfo);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m3364(__this, (String_t*) &_stringLiteral241, L_15, L_16, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m3364_MethodInfo);
		JoinMatchResponse_set_nodeId_m3417(__this, L_17, /*hidden argument*/&JoinMatchResponse_set_nodeId_m3417_MethodInfo);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m3366(__this, (String_t*) &_stringLiteral242, L_18, L_19, /*hidden argument*/&ResponseBase_ParseJSONBool_m3366_MethodInfo);
		JoinMatchResponse_set_usingRelay_m3419(__this, L_20, /*hidden argument*/&JoinMatchResponse_set_usingRelay_m3419_MethodInfo);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral243, L_22, /*hidden argument*/&String_Concat_m548_MethodInfo);
		FormatException_t751 * L_24 = (FormatException_t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t751_il2cpp_TypeInfo));
		FormatException__ctor_m3868(L_24, L_23, /*hidden argument*/&FormatException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DestroyMatchRequest_t623_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"

extern MethodInfo DestroyMatchRequest_get_networkId_m3423_MethodInfo;


// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern MethodInfo DestroyMatchRequest__ctor_m3422_MethodInfo;
extern "C" void DestroyMatchRequest__ctor_m3422 (DestroyMatchRequest_t623 * __this, MethodInfo* method)
{
	{
		Request__ctor_m3356(__this, /*hidden argument*/&Request__ctor_m3356_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" uint64_t DestroyMatchRequest_get_networkId_m3423 (DestroyMatchRequest_t623 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo DestroyMatchRequest_set_networkId_m3424_MethodInfo;
extern "C" void DestroyMatchRequest_set_networkId_m3424 (DestroyMatchRequest_t623 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern MethodInfo DestroyMatchRequest_ToString_m3425_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" String_t* DestroyMatchRequest_ToString_m3425 (DestroyMatchRequest_t623 * __this, MethodInfo* method)
{
	static bool DestroyMatchRequest_ToString_m3425_init;
	if (!DestroyMatchRequest_ToString_m3425_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		DestroyMatchRequest_ToString_m3425_init = true;
	}
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Request_ToString_m3360(__this, /*hidden argument*/&Request_ToString_m3360_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m3423(__this, /*hidden argument*/&DestroyMatchRequest_get_networkId_m3423_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t633_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3866(L_5, (String_t*) &_stringLiteral227, /*hidden argument*/&Enum_ToString_m3866_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m3070(NULL /*static, unused*/, (String_t*) &_stringLiteral245, L_2, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DropConnectionRequest_t624_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"

extern MethodInfo DropConnectionRequest_get_networkId_m3427_MethodInfo;
extern MethodInfo DropConnectionRequest_get_nodeId_m3429_MethodInfo;


// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern MethodInfo DropConnectionRequest__ctor_m3426_MethodInfo;
extern "C" void DropConnectionRequest__ctor_m3426 (DropConnectionRequest_t624 * __this, MethodInfo* method)
{
	{
		Request__ctor_m3356(__this, /*hidden argument*/&Request__ctor_m3356_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m3427 (DropConnectionRequest_t624 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo DropConnectionRequest_set_networkId_m3428_MethodInfo;
extern "C" void DropConnectionRequest_set_networkId_m3428 (DropConnectionRequest_t624 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m3429 (DropConnectionRequest_t624 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern MethodInfo DropConnectionRequest_set_nodeId_m3430_MethodInfo;
extern "C" void DropConnectionRequest_set_nodeId_m3430 (DropConnectionRequest_t624 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern MethodInfo DropConnectionRequest_ToString_m3431_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" String_t* DropConnectionRequest_ToString_m3431 (DropConnectionRequest_t624 * __this, MethodInfo* method)
{
	static bool DropConnectionRequest_ToString_m3431_init;
	if (!DropConnectionRequest_ToString_m3431_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		DropConnectionRequest_ToString_m3431_init = true;
	}
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m3360(__this, /*hidden argument*/&Request_ToString_m3360_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m3427(__this, /*hidden argument*/&DropConnectionRequest_get_networkId_m3427_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t633_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3866(L_5, (String_t*) &_stringLiteral227, /*hidden argument*/&Enum_ToString_m3866_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t76* L_7 = L_2;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m3429(__this, /*hidden argument*/&DropConnectionRequest_get_nodeId_m3429_MethodInfo);
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&NodeID_t634_il2cpp_TypeInfo), &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m3866(L_10, (String_t*) &_stringLiteral227, /*hidden argument*/&Enum_ToString_m3866_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m3070(NULL /*static, unused*/, (String_t*) &_stringLiteral246, L_7, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_12;
	}
}
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ListMatchRequest_t625_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"

extern MethodInfo ListMatchRequest_get_pageSize_m3433_MethodInfo;
extern MethodInfo ListMatchRequest_get_pageNum_m3435_MethodInfo;
extern MethodInfo ListMatchRequest_get_nameFilter_m3437_MethodInfo;
extern MethodInfo ListMatchRequest_get_matchAttributeFilterLessThan_m3439_MethodInfo;
extern MethodInfo ListMatchRequest_get_matchAttributeFilterGreaterThan_m3440_MethodInfo;


// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern MethodInfo ListMatchRequest__ctor_m3432_MethodInfo;
extern "C" void ListMatchRequest__ctor_m3432 (ListMatchRequest_t625 * __this, MethodInfo* method)
{
	{
		Request__ctor_m3356(__this, /*hidden argument*/&Request__ctor_m3356_MethodInfo);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m3433 (ListMatchRequest_t625 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern MethodInfo ListMatchRequest_set_pageSize_m3434_MethodInfo;
extern "C" void ListMatchRequest_set_pageSize_m3434 (ListMatchRequest_t625 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m3435 (ListMatchRequest_t625 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageNumU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern MethodInfo ListMatchRequest_set_pageNum_m3436_MethodInfo;
extern "C" void ListMatchRequest_set_pageNum_m3436 (ListMatchRequest_t625 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageNumU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m3437 (ListMatchRequest_t625 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameFilterU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern MethodInfo ListMatchRequest_set_nameFilter_m3438_MethodInfo;
extern "C" void ListMatchRequest_set_nameFilter_m3438 (ListMatchRequest_t625 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameFilterU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t618 * ListMatchRequest_get_matchAttributeFilterLessThan_m3439 (ListMatchRequest_t625 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t618 * L_0 = (__this->___U3CmatchAttributeFilterLessThanU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t618 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m3440 (ListMatchRequest_t625 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t618 * L_0 = (__this->___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern MethodInfo ListMatchRequest_ToString_m3441_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m3873_MethodInfo_var;
extern "C" String_t* ListMatchRequest_ToString_m3441 (ListMatchRequest_t625 * __this, MethodInfo* method)
{
	static bool ListMatchRequest_ToString_m3441_init;
	if (!ListMatchRequest_ToString_m3441_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Dictionary_2_get_Count_m3873_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m3873_GenericMethod);
		ListMatchRequest_ToString_m3441_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t76* G_B2_1 = {0};
	ObjectU5BU5D_t76* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t76* G_B1_1 = {0};
	ObjectU5BU5D_t76* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t76* G_B3_2 = {0};
	ObjectU5BU5D_t76* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t76* G_B5_1 = {0};
	ObjectU5BU5D_t76* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t76* G_B4_1 = {0};
	ObjectU5BU5D_t76* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t76* G_B6_2 = {0};
	ObjectU5BU5D_t76* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m3360(__this, /*hidden argument*/&Request_ToString_m3360_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m3433(__this, /*hidden argument*/&ListMatchRequest_get_pageSize_m3433_MethodInfo);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t76* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m3435(__this, /*hidden argument*/&ListMatchRequest_get_pageNum_m3435_MethodInfo);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t76* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m3437(__this, /*hidden argument*/&ListMatchRequest_get_nameFilter_m3437_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t76* L_12 = L_10;
		Dictionary_2_t618 * L_13 = ListMatchRequest_get_matchAttributeFilterLessThan_m3439(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterLessThan_m3439_MethodInfo);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral247;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral247;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		Dictionary_2_t618 * L_14 = ListMatchRequest_get_matchAttributeFilterLessThan_m3439(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterLessThan_m3439_MethodInfo);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m3873_MethodInfo_var, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		Object_t * L_17 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_16);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_17;
		ObjectU5BU5D_t76* L_18 = G_B3_3;
		Dictionary_2_t618 * L_19 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m3440(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterGreaterThan_m3440_MethodInfo);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		Dictionary_2_t618 * L_20 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m3440(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterGreaterThan_m3440_MethodInfo);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m3873_MethodInfo_var, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		Object_t * L_23 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_22);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_23;
		String_t* L_24 = UnityString_Format_m3070(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_24;
	}
}
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MatchDirectConnectInfo_t626_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"

extern MethodInfo MatchDirectConnectInfo_get_nodeId_m3443_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_get_publicAddress_m3445_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_get_privateAddress_m3447_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_nodeId_m3444_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_publicAddress_m3446_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_privateAddress_m3448_MethodInfo;


// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern MethodInfo MatchDirectConnectInfo__ctor_m3442_MethodInfo;
extern "C" void MatchDirectConnectInfo__ctor_m3442 (MatchDirectConnectInfo_t626 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m3361(__this, /*hidden argument*/&ResponseBase__ctor_m3361_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m3443 (MatchDirectConnectInfo_t626 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void MatchDirectConnectInfo_set_nodeId_m3444 (MatchDirectConnectInfo_t626 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m3445 (MatchDirectConnectInfo_t626 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpublicAddressU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_publicAddress_m3446 (MatchDirectConnectInfo_t626 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpublicAddressU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m3447 (MatchDirectConnectInfo_t626 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CprivateAddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m3448 (MatchDirectConnectInfo_t626 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CprivateAddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern MethodInfo MatchDirectConnectInfo_ToString_m3449_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDirectConnectInfo_ToString_m3449 (MatchDirectConnectInfo_t626 * __this, MethodInfo* method)
{
	static bool MatchDirectConnectInfo_ToString_m3449_init;
	if (!MatchDirectConnectInfo_ToString_m3449_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		MatchDirectConnectInfo_ToString_m3449_init = true;
	}
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m597(__this, /*hidden argument*/&Object_ToString_m597_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m3443(__this, /*hidden argument*/&MatchDirectConnectInfo_get_nodeId_m3443_MethodInfo);
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NodeID_t634_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t76* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m3445(__this, /*hidden argument*/&MatchDirectConnectInfo_get_publicAddress_m3445_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t76* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m3447(__this, /*hidden argument*/&MatchDirectConnectInfo_get_privateAddress_m3447_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		String_t* L_10 = UnityString_Format_m3070(NULL /*static, unused*/, (String_t*) &_stringLiteral248, L_8, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_10;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern MethodInfo MatchDirectConnectInfo_Parse_m3450_MethodInfo;
extern TypeInfo* IDictionary_2_t615_il2cpp_TypeInfo_var;
extern "C" void MatchDirectConnectInfo_Parse_m3450 (MatchDirectConnectInfo_t626 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool MatchDirectConnectInfo_Parse_m3450_init;
	if (!MatchDirectConnectInfo_Parse_m3450_init)
	{
		IDictionary_2_t615_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t615_0_0_0);
		MatchDirectConnectInfo_Parse_m3450_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t615_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m3364(__this, (String_t*) &_stringLiteral241, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m3364_MethodInfo);
		MatchDirectConnectInfo_set_nodeId_m3444(__this, L_4, /*hidden argument*/&MatchDirectConnectInfo_set_nodeId_m3444_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m3362(__this, (String_t*) &_stringLiteral249, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m3362_MethodInfo);
		MatchDirectConnectInfo_set_publicAddress_m3446(__this, L_7, /*hidden argument*/&MatchDirectConnectInfo_set_publicAddress_m3446_MethodInfo);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m3362(__this, (String_t*) &_stringLiteral250, L_8, L_9, /*hidden argument*/&ResponseBase_ParseJSONString_m3362_MethodInfo);
		MatchDirectConnectInfo_set_privateAddress_m3448(__this, L_10, /*hidden argument*/&MatchDirectConnectInfo_set_privateAddress_m3448_MethodInfo);
		goto IL_0061;
	}

IL_004b:
	{
		Object_t * L_11 = ___obj;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, L_11);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral243, L_12, /*hidden argument*/&String_Concat_m548_MethodInfo);
		FormatException_t751 * L_14 = (FormatException_t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t751_il2cpp_TypeInfo));
		FormatException__ctor_m3868(L_14, L_13, /*hidden argument*/&FormatException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MatchDesc_t628_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
extern TypeInfo List_1_t627_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
extern Il2CppType List_1_t627_0_0_0;
extern MethodInfo MatchDesc_get_networkId_m3452_MethodInfo;
extern MethodInfo MatchDesc_get_name_m3454_MethodInfo;
extern MethodInfo MatchDesc_get_averageEloScore_m3456_MethodInfo;
extern MethodInfo MatchDesc_get_maxSize_m3457_MethodInfo;
extern MethodInfo MatchDesc_get_currentSize_m3459_MethodInfo;
extern MethodInfo MatchDesc_get_isPrivate_m3461_MethodInfo;
extern MethodInfo MatchDesc_get_matchAttributes_m3463_MethodInfo;
extern MethodInfo MatchDesc_get_directConnectInfos_m3465_MethodInfo;
extern MethodInfo List_1_get_Count_m3874_MethodInfo;
extern MethodInfo MatchDesc_set_networkId_m3453_MethodInfo;
extern MethodInfo MatchDesc_set_name_m3455_MethodInfo;
extern MethodInfo MatchDesc_set_maxSize_m3458_MethodInfo;
extern MethodInfo MatchDesc_set_currentSize_m3460_MethodInfo;
extern MethodInfo MatchDesc_set_isPrivate_m3462_MethodInfo;
extern MethodInfo MatchDesc_set_directConnectInfos_m3466_MethodInfo;
struct ResponseBase_t614;
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t627 * ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t626_m3875 (ResponseBase_t614 * __this, String_t* p0, Object_t * p1, Object_t* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod List_1_get_Count_m3874_GenericMethod;
extern Il2CppGenericMethod ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t626_m3875_GenericMethod;


// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern MethodInfo MatchDesc__ctor_m3451_MethodInfo;
extern "C" void MatchDesc__ctor_m3451 (MatchDesc_t628 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m3361(__this, /*hidden argument*/&ResponseBase__ctor_m3361_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m3452 (MatchDesc_t628 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void MatchDesc_set_networkId_m3453 (MatchDesc_t628 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m3454 (MatchDesc_t628 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C" void MatchDesc_set_name_m3455 (MatchDesc_t628 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m3456 (MatchDesc_t628 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CaverageEloScoreU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m3457 (MatchDesc_t628 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmaxSizeU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C" void MatchDesc_set_maxSize_m3458 (MatchDesc_t628 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmaxSizeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m3459 (MatchDesc_t628 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcurrentSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m3460 (MatchDesc_t628 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcurrentSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m3461 (MatchDesc_t628 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPrivateU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C" void MatchDesc_set_isPrivate_m3462 (MatchDesc_t628 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPrivateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t618 * MatchDesc_get_matchAttributes_m3463 (MatchDesc_t628 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t618 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_6);
		return L_0;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern MethodInfo MatchDesc_get_hostNodeId_m3464_MethodInfo;
extern "C" uint16_t MatchDesc_get_hostNodeId_m3464 (MatchDesc_t628 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3ChostNodeIdU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t627 * MatchDesc_get_directConnectInfos_m3465 (MatchDesc_t628 * __this, MethodInfo* method)
{
	{
		List_1_t627 * L_0 = (__this->___U3CdirectConnectInfosU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C" void MatchDesc_set_directConnectInfos_m3466 (MatchDesc_t628 * __this, List_1_t627 * ___value, MethodInfo* method)
{
	{
		List_1_t627 * L_0 = ___value;
		__this->___U3CdirectConnectInfosU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern MethodInfo MatchDesc_ToString_m3467_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m3873_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m3874_MethodInfo_var;
extern "C" String_t* MatchDesc_ToString_m3467 (MatchDesc_t628 * __this, MethodInfo* method)
{
	static bool MatchDesc_ToString_m3467_init;
	if (!MatchDesc_ToString_m3467_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Dictionary_2_get_Count_m3873_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m3873_GenericMethod);
		List_1_get_Count_m3874_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3874_GenericMethod);
		MatchDesc_ToString_m3467_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t76* G_B2_1 = {0};
	ObjectU5BU5D_t76* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t76* G_B1_1 = {0};
	ObjectU5BU5D_t76* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t76* G_B3_2 = {0};
	ObjectU5BU5D_t76* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = Object_ToString_m597(__this, /*hidden argument*/&Object_ToString_m597_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m3452(__this, /*hidden argument*/&MatchDesc_get_networkId_m3452_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t633_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m3866(L_5, (String_t*) &_stringLiteral227, /*hidden argument*/&Enum_ToString_m3866_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t76* L_7 = L_2;
		String_t* L_8 = MatchDesc_get_name_m3454(__this, /*hidden argument*/&MatchDesc_get_name_m3454_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t76* L_9 = L_7;
		int32_t L_10 = MatchDesc_get_averageEloScore_m3456(__this, /*hidden argument*/&MatchDesc_get_averageEloScore_m3456_MethodInfo);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t76* L_13 = L_9;
		int32_t L_14 = MatchDesc_get_maxSize_m3457(__this, /*hidden argument*/&MatchDesc_get_maxSize_m3457_MethodInfo);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_16;
		ObjectU5BU5D_t76* L_17 = L_13;
		int32_t L_18 = MatchDesc_get_currentSize_m3459(__this, /*hidden argument*/&MatchDesc_get_currentSize_m3459_MethodInfo);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5)) = (Object_t *)L_20;
		ObjectU5BU5D_t76* L_21 = L_17;
		bool L_22 = MatchDesc_get_isPrivate_m3461(__this, /*hidden argument*/&MatchDesc_get_isPrivate_m3461_MethodInfo);
		bool L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Boolean_t83_il2cpp_TypeInfo), &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 6);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 6)) = (Object_t *)L_24;
		ObjectU5BU5D_t76* L_25 = L_21;
		Dictionary_2_t618 * L_26 = MatchDesc_get_matchAttributes_m3463(__this, /*hidden argument*/&MatchDesc_get_matchAttributes_m3463_MethodInfo);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (String_t*) &_stringLiteral251;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (String_t*) &_stringLiteral251;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		Dictionary_2_t618 * L_27 = MatchDesc_get_matchAttributes_m3463(__this, /*hidden argument*/&MatchDesc_get_matchAttributes_m3463_MethodInfo);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m3873_MethodInfo_var, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		Object_t * L_30 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_29);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_30;
		ObjectU5BU5D_t76* L_31 = G_B3_3;
		List_1_t627 * L_32 = MatchDesc_get_directConnectInfos_m3465(__this, /*hidden argument*/&MatchDesc_get_directConnectInfos_m3465_MethodInfo);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3874_MethodInfo_var, L_32);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 8);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 8)) = (Object_t *)L_35;
		String_t* L_36 = UnityString_Format_m3070(NULL /*static, unused*/, G_B3_4, L_31, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_36;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern MethodInfo MatchDesc_Parse_m3468_MethodInfo;
extern TypeInfo* IDictionary_2_t615_il2cpp_TypeInfo_var;
extern MethodInfo* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t626_m3875_MethodInfo_var;
extern "C" void MatchDesc_Parse_m3468 (MatchDesc_t628 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool MatchDesc_Parse_m3468_init;
	if (!MatchDesc_Parse_m3468_init)
	{
		IDictionary_2_t615_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t615_0_0_0);
		ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t626_m3875_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t626_m3875_GenericMethod);
		MatchDesc_Parse_m3468_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t615_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m3365(__this, (String_t*) &_stringLiteral239, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m3365_MethodInfo);
		MatchDesc_set_networkId_m3453(__this, L_4, /*hidden argument*/&MatchDesc_set_networkId_m3453_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m3362(__this, (String_t*) &_stringLiteral252, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m3362_MethodInfo);
		MatchDesc_set_name_m3455(__this, L_7, /*hidden argument*/&MatchDesc_set_name_m3455_MethodInfo);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m3363(__this, (String_t*) &_stringLiteral253, L_8, L_9, /*hidden argument*/&ResponseBase_ParseJSONInt32_m3363_MethodInfo);
		MatchDesc_set_maxSize_m3458(__this, L_10, /*hidden argument*/&MatchDesc_set_maxSize_m3458_MethodInfo);
		Object_t * L_11 = ___obj;
		Object_t* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m3363(__this, (String_t*) &_stringLiteral254, L_11, L_12, /*hidden argument*/&ResponseBase_ParseJSONInt32_m3363_MethodInfo);
		MatchDesc_set_currentSize_m3460(__this, L_13, /*hidden argument*/&MatchDesc_set_currentSize_m3460_MethodInfo);
		Object_t * L_14 = ___obj;
		Object_t* L_15 = V_0;
		bool L_16 = ResponseBase_ParseJSONBool_m3366(__this, (String_t*) &_stringLiteral255, L_14, L_15, /*hidden argument*/&ResponseBase_ParseJSONBool_m3366_MethodInfo);
		MatchDesc_set_isPrivate_m3462(__this, L_16, /*hidden argument*/&MatchDesc_set_isPrivate_m3462_MethodInfo);
		Object_t * L_17 = ___obj;
		Object_t* L_18 = V_0;
		List_1_t627 * L_19 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t626_m3875(__this, (String_t*) &_stringLiteral256, L_17, L_18, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t626_m3875_MethodInfo_var);
		MatchDesc_set_directConnectInfos_m3466(__this, L_19, /*hidden argument*/&MatchDesc_set_directConnectInfos_m3466_MethodInfo);
		goto IL_009a;
	}

IL_0084:
	{
		Object_t * L_20 = ___obj;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, L_20);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral243, L_21, /*hidden argument*/&String_Concat_m548_MethodInfo);
		FormatException_t751 * L_23 = (FormatException_t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t751_il2cpp_TypeInfo));
		FormatException__ctor_m3868(L_23, L_22, /*hidden argument*/&FormatException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ListMatchResponse_t630_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_27.h"
extern TypeInfo List_1_t629_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_27MethodDeclarations.h"
extern Il2CppType List_1_t629_0_0_0;
extern MethodInfo ListMatchResponse_get_matches_m3470_MethodInfo;
extern MethodInfo List_1_get_Count_m3876_MethodInfo;
extern MethodInfo ListMatchResponse_set_matches_m3471_MethodInfo;
struct ResponseBase_t614;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t629 * ResponseBase_ParseJSONList_TisMatchDesc_t628_m3877 (ResponseBase_t614 * __this, String_t* p0, Object_t * p1, Object_t* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod List_1_get_Count_m3876_GenericMethod;
extern Il2CppGenericMethod ResponseBase_ParseJSONList_TisMatchDesc_t628_m3877_GenericMethod;


// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern MethodInfo ListMatchResponse__ctor_m3469_MethodInfo;
extern "C" void ListMatchResponse__ctor_m3469 (ListMatchResponse_t630 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m3374(__this, /*hidden argument*/&BasicResponse__ctor_m3374_MethodInfo);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t629 * ListMatchResponse_get_matches_m3470 (ListMatchResponse_t630 * __this, MethodInfo* method)
{
	{
		List_1_t629 * L_0 = (__this->___U3CmatchesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m3471 (ListMatchResponse_t630 * __this, List_1_t629 * ___value, MethodInfo* method)
{
	{
		List_1_t629 * L_0 = ___value;
		__this->___U3CmatchesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern MethodInfo ListMatchResponse_ToString_m3472_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m3876_MethodInfo_var;
extern "C" String_t* ListMatchResponse_ToString_m3472 (ListMatchResponse_t630 * __this, MethodInfo* method)
{
	static bool ListMatchResponse_ToString_m3472_init;
	if (!ListMatchResponse_ToString_m3472_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		List_1_get_Count_m3876_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3876_GenericMethod);
		ListMatchResponse_ToString_m3472_init = true;
	}
	{
		ObjectU5BU5D_t76* L_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Response_ToString_m3372(__this, /*hidden argument*/&Response_ToString_m3372_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t76* L_2 = L_0;
		List_1_t629 * L_3 = ListMatchResponse_get_matches_m3470(__this, /*hidden argument*/&ListMatchResponse_get_matches_m3470_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3876_MethodInfo_var, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m3070(NULL /*static, unused*/, (String_t*) &_stringLiteral257, L_2, /*hidden argument*/&UnityString_Format_m3070_MethodInfo);
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern MethodInfo ListMatchResponse_Parse_m3473_MethodInfo;
extern TypeInfo* IDictionary_2_t615_il2cpp_TypeInfo_var;
extern MethodInfo* ResponseBase_ParseJSONList_TisMatchDesc_t628_m3877_MethodInfo_var;
extern "C" void ListMatchResponse_Parse_m3473 (ListMatchResponse_t630 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool ListMatchResponse_Parse_m3473_init;
	if (!ListMatchResponse_Parse_m3473_init)
	{
		IDictionary_2_t615_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t615_0_0_0);
		ResponseBase_ParseJSONList_TisMatchDesc_t628_m3877_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseBase_ParseJSONList_TisMatchDesc_t628_m3877_GenericMethod);
		ListMatchResponse_Parse_m3473_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m3373(__this, L_0, /*hidden argument*/&Response_Parse_m3373_MethodInfo);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t615_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		List_1_t629 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t628_m3877(__this, (String_t*) &_stringLiteral258, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t628_m3877_MethodInfo_var);
		ListMatchResponse_set_matches_m3471(__this, L_5, /*hidden argument*/&ListMatchResponse_set_matches_m3471_MethodInfo);
		goto IL_0042;
	}

IL_002c:
	{
		Object_t * L_6 = ___obj;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral243, L_7, /*hidden argument*/&String_Concat_m548_MethodInfo);
		FormatException_t751 * L_9 = (FormatException_t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t751_il2cpp_TypeInfo));
		FormatException__ctor_m3868(L_9, L_8, /*hidden argument*/&FormatException__ctor_m3868_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"



// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NetworkAccessToken_t635_il2cpp_TypeInfo;
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"

extern TypeInfo ByteU5BU5D_t66_il2cpp_TypeInfo;
extern TypeInfo Byte_t114_il2cpp_TypeInfo;
extern Il2CppType ByteU5BU5D_t66_0_0_0;
extern MethodInfo Convert_ToBase64String_m3878_MethodInfo;


// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern MethodInfo NetworkAccessToken__ctor_m3474_MethodInfo;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" void NetworkAccessToken__ctor_m3474 (NetworkAccessToken_t635 * __this, MethodInfo* method)
{
	static bool NetworkAccessToken__ctor_m3474_init;
	if (!NetworkAccessToken__ctor_m3474_init)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t66_0_0_0);
		NetworkAccessToken__ctor_m3474_init = true;
	}
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		__this->___array_0 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)64)));
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern MethodInfo NetworkAccessToken_GetByteString_m3475_MethodInfo;
extern "C" String_t* NetworkAccessToken_GetByteString_m3475 (NetworkAccessToken_t635 * __this, MethodInfo* method)
{
	{
		ByteU5BU5D_t66* L_0 = (__this->___array_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		String_t* L_1 = Convert_ToBase64String_m3878(NULL /*static, unused*/, L_0, /*hidden argument*/&Convert_ToBase64String_m3878_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_Utility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Utility_t638_il2cpp_TypeInfo;
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"

// System.Random
#include "mscorlib_System_Random.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8.h"
extern TypeInfo Random_t636_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t637_il2cpp_TypeInfo;
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
extern Il2CppType Dictionary_2_t637_0_0_0;
extern MethodInfo Environment_get_TickCount_m3879_MethodInfo;
extern MethodInfo Random__ctor_m3880_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3881_MethodInfo;
extern MethodInfo SystemInfo_get_deviceUniqueIdentifier_m2535_MethodInfo;
extern MethodInfo String_Concat_m1810_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3882_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m3881_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3882_GenericMethod;


// System.Void UnityEngine.Networking.Utility::.cctor()
extern MethodInfo Utility__cctor_m3476_MethodInfo;
extern TypeInfo* Dictionary_2_t637_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3881_MethodInfo_var;
extern "C" void Utility__cctor_m3476 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Utility__cctor_m3476_init;
	if (!Utility__cctor_m3476_init)
	{
		Dictionary_2_t637_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t637_0_0_0);
		Dictionary_2__ctor_m3881_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3881_GenericMethod);
		Utility__cctor_m3476_init = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m3879(NULL /*static, unused*/, /*hidden argument*/&Environment_get_TickCount_m3879_MethodInfo);
		Random_t636 * L_1 = (Random_t636 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Random_t636_il2cpp_TypeInfo));
		Random__ctor_m3880(L_1, L_0, /*hidden argument*/&Random__ctor_m3880_MethodInfo);
		((Utility_t638_StaticFields*)InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo)->static_fields)->___s_randomGenerator_0 = L_1;
		((Utility_t638_StaticFields*)InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo)->static_fields)->___s_useRandomSourceID_1 = 0;
		((Utility_t638_StaticFields*)InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo)->static_fields)->___s_randomSourceComponent_2 = 0;
		((Utility_t638_StaticFields*)InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3 = (((int64_t)(-1)));
		Dictionary_2_t637 * L_2 = (Dictionary_2_t637 *)il2cpp_codegen_object_new (Dictionary_2_t637_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3881(L_2, /*hidden argument*/Dictionary_2__ctor_m3881_MethodInfo_var);
		((Utility_t638_StaticFields*)InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo)->static_fields)->___s_dictTokens_4 = L_2;
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern MethodInfo Utility_GetSourceID_m3477_MethodInfo;
extern "C" uint64_t Utility_GetSourceID_m3477 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m2535(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_deviceUniqueIdentifier_m2535_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo));
		int32_t L_1 = ((Utility_t638_StaticFields*)InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo)->static_fields)->___s_randomSourceComponent_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m1810(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/&String_Concat_m1810_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3786_MethodInfo, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern MethodInfo Utility_SetAppID_m3478_MethodInfo;
extern "C" void Utility_SetAppID_m3478 (Object_t * __this /* static, unused */, uint64_t ___newAppID, MethodInfo* method)
{
	{
		uint64_t L_0 = ___newAppID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo));
		((Utility_t638_StaticFields*)InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern MethodInfo Utility_GetAppID_m3479_MethodInfo;
extern "C" uint64_t Utility_GetAppID_m3479 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo));
		uint64_t L_0 = ((Utility_t638_StaticFields*)InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3;
		return L_0;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo Utility_GetAccessTokenForNetwork_m3480_MethodInfo;
extern MethodInfo* Dictionary_2_TryGetValue_m3882_MethodInfo_var;
extern "C" NetworkAccessToken_t635 * Utility_GetAccessTokenForNetwork_m3480 (Object_t * __this /* static, unused */, uint64_t ___netId, MethodInfo* method)
{
	static bool Utility_GetAccessTokenForNetwork_m3480_init;
	if (!Utility_GetAccessTokenForNetwork_m3480_init)
	{
		Dictionary_2_TryGetValue_m3882_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3882_GenericMethod);
		Utility_GetAccessTokenForNetwork_m3480_init = true;
	}
	NetworkAccessToken_t635 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo));
		Dictionary_2_t637 * L_0 = ((Utility_t638_StaticFields*)InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo)->static_fields)->___s_dictTokens_4;
		uint64_t L_1 = ___netId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, NetworkAccessToken_t635 ** >::Invoke(Dictionary_2_TryGetValue_m3882_MethodInfo_var, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		NetworkAccessToken_t635 * L_3 = (NetworkAccessToken_t635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NetworkAccessToken_t635_il2cpp_TypeInfo));
		NetworkAccessToken__ctor_m3474(L_3, /*hidden argument*/&NetworkAccessToken__ctor_m3474_MethodInfo);
		V_0 = L_3;
	}

IL_0018:
	{
		NetworkAccessToken_t635 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NetworkMatch_t639_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatchMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2.h"
extern TypeInfo Uri_t26_il2cpp_TypeInfo;
extern TypeInfo WWWForm_t561_il2cpp_TypeInfo;
extern TypeInfo Enum_t125_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t560_il2cpp_TypeInfo;
extern TypeInfo WWW_t559_il2cpp_TypeInfo;
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64MethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
extern Il2CppType Dictionary_2_t560_0_0_0;
extern MethodInfo Uri__ctor_m3883_MethodInfo;
extern MethodInfo UInt64_TryParse_m3884_MethodInfo;
extern MethodInfo NetworkMatch_SetProgramAppID_m3484_MethodInfo;
extern MethodInfo NetworkMatch_CreateMatch_m3486_MethodInfo;
extern MethodInfo NetworkMatch_get_baseUri_m3482_MethodInfo;
extern MethodInfo Uri__ctor_m3885_MethodInfo;
extern MethodInfo WWWForm__ctor_m3056_MethodInfo;
extern MethodInfo Enum_ToString_m606_MethodInfo;
extern MethodInfo WWWForm_AddField_m3057_MethodInfo;
extern MethodInfo WWWForm_AddField_m3059_MethodInfo;
extern MethodInfo UInt32_ToString_m3886_MethodInfo;
extern MethodInfo Boolean_ToString_m3887_MethodInfo;
extern MethodInfo WWWForm_get_headers_m3060_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m3837_MethodInfo;
extern MethodInfo Uri_ToString_m588_MethodInfo;
extern MethodInfo WWW__ctor_m3041_MethodInfo;
extern MethodInfo NetworkMatch_JoinMatch_m3488_MethodInfo;
extern MethodInfo NetworkMatch_DestroyMatch_m3490_MethodInfo;
extern MethodInfo NetworkMatch_DropConnection_m3492_MethodInfo;
extern MethodInfo NetworkMatch_ListMatches_m3494_MethodInfo;
struct NetworkMatch_t639;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t620_m3888 (NetworkMatch_t639 * __this, WWW_t559 * p0, ResponseDelegate_1_t640 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t639;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_0.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t622_m3889 (NetworkMatch_t639 * __this, WWW_t559 * p0, ResponseDelegate_1_t641 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t639;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_1.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890 (NetworkMatch_t639 * __this, WWW_t559 * p0, ResponseDelegate_1_t642 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t639;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_2.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t630_m3891 (NetworkMatch_t639 * __this, WWW_t559 * p0, ResponseDelegate_1_t643 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_set_Item_m3837_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t620_m3888_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t622_m3889_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t630_m3891_GenericMethod;


// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern MethodInfo NetworkMatch__ctor_m3481_MethodInfo;
extern "C" void NetworkMatch__ctor_m3481 (NetworkMatch_t639 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	uint64_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri_t26 * L_0 = (Uri_t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri__ctor_m3883(L_0, (String_t*) &_stringLiteral259, /*hidden argument*/&Uri__ctor_m3883_MethodInfo);
		__this->___m_BaseUri_3 = L_0;
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/&MonoBehaviour__ctor_m282_MethodInfo);
		String_t* L_1 = PlayerPrefs_GetString_m3193(NULL /*static, unused*/, (String_t*) &_stringLiteral260, /*hidden argument*/&PlayerPrefs_GetString_m3193_MethodInfo);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = UInt64_TryParse_m3884(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/&UInt64_TryParse_m3884_MethodInfo);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		Debug_Log_m355(NULL /*static, unused*/, (String_t*) &_stringLiteral261, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		NetworkMatch_SetProgramAppID_m3484(__this, L_4, /*hidden argument*/&NetworkMatch_SetProgramAppID_m3484_MethodInfo);
	}

IL_0044:
	{
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t26 * NetworkMatch_get_baseUri_m3482 (NetworkMatch_t639 * __this, MethodInfo* method)
{
	{
		Uri_t26 * L_0 = (__this->___m_BaseUri_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern MethodInfo NetworkMatch_set_baseUri_m3483_MethodInfo;
extern "C" void NetworkMatch_set_baseUri_m3483 (NetworkMatch_t639 * __this, Uri_t26 * ___value, MethodInfo* method)
{
	{
		Uri_t26 * L_0 = ___value;
		__this->___m_BaseUri_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C" void NetworkMatch_SetProgramAppID_m3484 (NetworkMatch_t639 * __this, uint64_t ___programAppID, MethodInfo* method)
{
	{
		uint64_t L_0 = ___programAppID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo));
		Utility_SetAppID_m3478(NULL /*static, unused*/, L_0, /*hidden argument*/&Utility_SetAppID_m3478_MethodInfo);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern MethodInfo NetworkMatch_CreateMatch_m3485_MethodInfo;
extern "C" Coroutine_t271 * NetworkMatch_CreateMatch_m3485 (NetworkMatch_t639 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t640 * ___callback, MethodInfo* method)
{
	CreateMatchRequest_t619 * V_0 = {0};
	{
		CreateMatchRequest_t619 * L_0 = (CreateMatchRequest_t619 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CreateMatchRequest_t619_il2cpp_TypeInfo));
		CreateMatchRequest__ctor_m3375(L_0, /*hidden argument*/&CreateMatchRequest__ctor_m3375_MethodInfo);
		V_0 = L_0;
		CreateMatchRequest_t619 * L_1 = V_0;
		String_t* L_2 = ___matchName;
		NullCheck(L_1);
		CreateMatchRequest_set_name_m3377(L_1, L_2, /*hidden argument*/&CreateMatchRequest_set_name_m3377_MethodInfo);
		CreateMatchRequest_t619 * L_3 = V_0;
		uint32_t L_4 = ___matchSize;
		NullCheck(L_3);
		CreateMatchRequest_set_size_m3379(L_3, L_4, /*hidden argument*/&CreateMatchRequest_set_size_m3379_MethodInfo);
		CreateMatchRequest_t619 * L_5 = V_0;
		bool L_6 = ___matchAdvertise;
		NullCheck(L_5);
		CreateMatchRequest_set_advertise_m3381(L_5, L_6, /*hidden argument*/&CreateMatchRequest_set_advertise_m3381_MethodInfo);
		CreateMatchRequest_t619 * L_7 = V_0;
		String_t* L_8 = ___matchPassword;
		NullCheck(L_7);
		CreateMatchRequest_set_password_m3383(L_7, L_8, /*hidden argument*/&CreateMatchRequest_set_password_m3383_MethodInfo);
		CreateMatchRequest_t619 * L_9 = V_0;
		ResponseDelegate_1_t640 * L_10 = ___callback;
		Coroutine_t271 * L_11 = NetworkMatch_CreateMatch_m3486(__this, L_9, L_10, /*hidden argument*/&NetworkMatch_CreateMatch_m3486_MethodInfo);
		return L_11;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m3837_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t620_m3888_MethodInfo_var;
extern "C" Coroutine_t271 * NetworkMatch_CreateMatch_m3486 (NetworkMatch_t639 * __this, CreateMatchRequest_t619 * ___req, ResponseDelegate_1_t640 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_CreateMatch_m3486_init;
	if (!NetworkMatch_CreateMatch_m3486_init)
	{
		Dictionary_2_set_Item_m3837_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3837_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t620_m3888_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t620_m3888_GenericMethod);
		NetworkMatch_CreateMatch_m3486_init = true;
	}
	Uri_t26 * V_0 = {0};
	WWWForm_t561 * V_1 = {0};
	WWW_t559 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		Uri_t26 * L_0 = NetworkMatch_get_baseUri_m3482(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m3482_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri_t26 * L_1 = (Uri_t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri__ctor_m3885(L_1, L_0, (String_t*) &_stringLiteral262, /*hidden argument*/&Uri__ctor_m3885_MethodInfo);
		V_0 = L_1;
		Uri_t26 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1810(NULL /*static, unused*/, (String_t*) &_stringLiteral263, L_2, /*hidden argument*/&String_Concat_m1810_MethodInfo);
		Debug_Log_m355(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		WWWForm_t561 * L_4 = (WWWForm_t561 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t561_il2cpp_TypeInfo));
		WWWForm__ctor_m3056(L_4, /*hidden argument*/&WWWForm__ctor_m3056_MethodInfo);
		V_1 = L_4;
		WWWForm_t561 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m3477(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m3477_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t632_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3057(L_5, (String_t*) &_stringLiteral264, L_9, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3479(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m3479_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t631_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3057(L_10, (String_t*) &_stringLiteral265, L_14, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m3059(L_15, (String_t*) &_stringLiteral240, 0, /*hidden argument*/&WWWForm_AddField_m3059_MethodInfo);
		WWWForm_t561 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m3059(L_16, (String_t*) &_stringLiteral266, 0, /*hidden argument*/&WWWForm_AddField_m3059_MethodInfo);
		WWWForm_t561 * L_17 = V_1;
		CreateMatchRequest_t619 * L_18 = ___req;
		NullCheck(L_18);
		String_t* L_19 = CreateMatchRequest_get_name_m3376(L_18, /*hidden argument*/&CreateMatchRequest_get_name_m3376_MethodInfo);
		NullCheck(L_17);
		WWWForm_AddField_m3057(L_17, (String_t*) &_stringLiteral252, L_19, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_20 = V_1;
		CreateMatchRequest_t619 * L_21 = ___req;
		NullCheck(L_21);
		uint32_t L_22 = CreateMatchRequest_get_size_m3378(L_21, /*hidden argument*/&CreateMatchRequest_get_size_m3378_MethodInfo);
		V_3 = L_22;
		String_t* L_23 = UInt32_ToString_m3886((&V_3), /*hidden argument*/&UInt32_ToString_m3886_MethodInfo);
		NullCheck(L_20);
		WWWForm_AddField_m3057(L_20, (String_t*) &_stringLiteral267, L_23, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_24 = V_1;
		CreateMatchRequest_t619 * L_25 = ___req;
		NullCheck(L_25);
		bool L_26 = CreateMatchRequest_get_advertise_m3380(L_25, /*hidden argument*/&CreateMatchRequest_get_advertise_m3380_MethodInfo);
		V_4 = L_26;
		String_t* L_27 = Boolean_ToString_m3887((&V_4), /*hidden argument*/&Boolean_ToString_m3887_MethodInfo);
		NullCheck(L_24);
		WWWForm_AddField_m3057(L_24, (String_t*) &_stringLiteral268, L_27, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_28 = V_1;
		CreateMatchRequest_t619 * L_29 = ___req;
		NullCheck(L_29);
		String_t* L_30 = CreateMatchRequest_get_password_m3382(L_29, /*hidden argument*/&CreateMatchRequest_get_password_m3382_MethodInfo);
		NullCheck(L_28);
		WWWForm_AddField_m3057(L_28, (String_t*) &_stringLiteral269, L_30, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_31 = V_1;
		NullCheck(L_31);
		Dictionary_2_t560 * L_32 = WWWForm_get_headers_m3060(L_31, /*hidden argument*/&WWWForm_get_headers_m3060_MethodInfo);
		NullCheck(L_32);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3837_MethodInfo_var, L_32, (String_t*) &_stringLiteral270, (String_t*) &_stringLiteral271);
		Uri_t26 * L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m588_MethodInfo, L_33);
		WWWForm_t561 * L_35 = V_1;
		WWW_t559 * L_36 = (WWW_t559 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t559_il2cpp_TypeInfo));
		WWW__ctor_m3041(L_36, L_34, L_35, /*hidden argument*/&WWW__ctor_m3041_MethodInfo);
		V_2 = L_36;
		WWW_t559 * L_37 = V_2;
		ResponseDelegate_1_t640 * L_38 = ___callback;
		Object_t * L_39 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t620_m3888(__this, L_37, L_38, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t620_m3888_MethodInfo_var);
		Coroutine_t271 * L_40 = MonoBehaviour_StartCoroutine_m1962(__this, L_39, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1962_MethodInfo);
		return L_40;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern MethodInfo NetworkMatch_JoinMatch_m3487_MethodInfo;
extern "C" Coroutine_t271 * NetworkMatch_JoinMatch_m3487 (NetworkMatch_t639 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t641 * ___callback, MethodInfo* method)
{
	JoinMatchRequest_t621 * V_0 = {0};
	{
		JoinMatchRequest_t621 * L_0 = (JoinMatchRequest_t621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JoinMatchRequest_t621_il2cpp_TypeInfo));
		JoinMatchRequest__ctor_m3401(L_0, /*hidden argument*/&JoinMatchRequest__ctor_m3401_MethodInfo);
		V_0 = L_0;
		JoinMatchRequest_t621 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		JoinMatchRequest_set_networkId_m3403(L_1, L_2, /*hidden argument*/&JoinMatchRequest_set_networkId_m3403_MethodInfo);
		JoinMatchRequest_t621 * L_3 = V_0;
		String_t* L_4 = ___matchPassword;
		NullCheck(L_3);
		JoinMatchRequest_set_password_m3405(L_3, L_4, /*hidden argument*/&JoinMatchRequest_set_password_m3405_MethodInfo);
		JoinMatchRequest_t621 * L_5 = V_0;
		ResponseDelegate_1_t641 * L_6 = ___callback;
		Coroutine_t271 * L_7 = NetworkMatch_JoinMatch_m3488(__this, L_5, L_6, /*hidden argument*/&NetworkMatch_JoinMatch_m3488_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m3837_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t622_m3889_MethodInfo_var;
extern "C" Coroutine_t271 * NetworkMatch_JoinMatch_m3488 (NetworkMatch_t639 * __this, JoinMatchRequest_t621 * ___req, ResponseDelegate_1_t641 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_JoinMatch_m3488_init;
	if (!NetworkMatch_JoinMatch_m3488_init)
	{
		Dictionary_2_set_Item_m3837_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3837_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t622_m3889_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t622_m3889_GenericMethod);
		NetworkMatch_JoinMatch_m3488_init = true;
	}
	Uri_t26 * V_0 = {0};
	WWWForm_t561 * V_1 = {0};
	WWW_t559 * V_2 = {0};
	{
		Uri_t26 * L_0 = NetworkMatch_get_baseUri_m3482(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m3482_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri_t26 * L_1 = (Uri_t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri__ctor_m3885(L_1, L_0, (String_t*) &_stringLiteral272, /*hidden argument*/&Uri__ctor_m3885_MethodInfo);
		V_0 = L_1;
		Uri_t26 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1810(NULL /*static, unused*/, (String_t*) &_stringLiteral273, L_2, /*hidden argument*/&String_Concat_m1810_MethodInfo);
		Debug_Log_m355(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		WWWForm_t561 * L_4 = (WWWForm_t561 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t561_il2cpp_TypeInfo));
		WWWForm__ctor_m3056(L_4, /*hidden argument*/&WWWForm__ctor_m3056_MethodInfo);
		V_1 = L_4;
		WWWForm_t561 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m3477(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m3477_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t632_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3057(L_5, (String_t*) &_stringLiteral264, L_9, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3479(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m3479_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t631_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3057(L_10, (String_t*) &_stringLiteral265, L_14, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m3059(L_15, (String_t*) &_stringLiteral240, 0, /*hidden argument*/&WWWForm_AddField_m3059_MethodInfo);
		WWWForm_t561 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m3059(L_16, (String_t*) &_stringLiteral266, 0, /*hidden argument*/&WWWForm_AddField_m3059_MethodInfo);
		WWWForm_t561 * L_17 = V_1;
		JoinMatchRequest_t621 * L_18 = ___req;
		NullCheck(L_18);
		uint64_t L_19 = JoinMatchRequest_get_networkId_m3402(L_18, /*hidden argument*/&JoinMatchRequest_get_networkId_m3402_MethodInfo);
		uint64_t L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&NetworkID_t633_il2cpp_TypeInfo), &L_20);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_21);
		NullCheck(L_17);
		WWWForm_AddField_m3057(L_17, (String_t*) &_stringLiteral239, L_22, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_23 = V_1;
		JoinMatchRequest_t621 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = JoinMatchRequest_get_password_m3404(L_24, /*hidden argument*/&JoinMatchRequest_get_password_m3404_MethodInfo);
		NullCheck(L_23);
		WWWForm_AddField_m3057(L_23, (String_t*) &_stringLiteral269, L_25, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t560 * L_27 = WWWForm_get_headers_m3060(L_26, /*hidden argument*/&WWWForm_get_headers_m3060_MethodInfo);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3837_MethodInfo_var, L_27, (String_t*) &_stringLiteral270, (String_t*) &_stringLiteral271);
		Uri_t26 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m588_MethodInfo, L_28);
		WWWForm_t561 * L_30 = V_1;
		WWW_t559 * L_31 = (WWW_t559 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t559_il2cpp_TypeInfo));
		WWW__ctor_m3041(L_31, L_29, L_30, /*hidden argument*/&WWW__ctor_m3041_MethodInfo);
		V_2 = L_31;
		WWW_t559 * L_32 = V_2;
		ResponseDelegate_1_t641 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t622_m3889(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t622_m3889_MethodInfo_var);
		Coroutine_t271 * L_35 = MonoBehaviour_StartCoroutine_m1962(__this, L_34, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1962_MethodInfo);
		return L_35;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo NetworkMatch_DestroyMatch_m3489_MethodInfo;
extern "C" Coroutine_t271 * NetworkMatch_DestroyMatch_m3489 (NetworkMatch_t639 * __this, uint64_t ___netId, ResponseDelegate_1_t642 * ___callback, MethodInfo* method)
{
	DestroyMatchRequest_t623 * V_0 = {0};
	{
		DestroyMatchRequest_t623 * L_0 = (DestroyMatchRequest_t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DestroyMatchRequest_t623_il2cpp_TypeInfo));
		DestroyMatchRequest__ctor_m3422(L_0, /*hidden argument*/&DestroyMatchRequest__ctor_m3422_MethodInfo);
		V_0 = L_0;
		DestroyMatchRequest_t623 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DestroyMatchRequest_set_networkId_m3424(L_1, L_2, /*hidden argument*/&DestroyMatchRequest_set_networkId_m3424_MethodInfo);
		DestroyMatchRequest_t623 * L_3 = V_0;
		ResponseDelegate_1_t642 * L_4 = ___callback;
		Coroutine_t271 * L_5 = NetworkMatch_DestroyMatch_m3490(__this, L_3, L_4, /*hidden argument*/&NetworkMatch_DestroyMatch_m3490_MethodInfo);
		return L_5;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo* Dictionary_2_set_Item_m3837_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890_MethodInfo_var;
extern "C" Coroutine_t271 * NetworkMatch_DestroyMatch_m3490 (NetworkMatch_t639 * __this, DestroyMatchRequest_t623 * ___req, ResponseDelegate_1_t642 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_DestroyMatch_m3490_init;
	if (!NetworkMatch_DestroyMatch_m3490_init)
	{
		Dictionary_2_set_Item_m3837_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3837_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890_GenericMethod);
		NetworkMatch_DestroyMatch_m3490_init = true;
	}
	Uri_t26 * V_0 = {0};
	WWWForm_t561 * V_1 = {0};
	WWW_t559 * V_2 = {0};
	{
		Uri_t26 * L_0 = NetworkMatch_get_baseUri_m3482(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m3482_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri_t26 * L_1 = (Uri_t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri__ctor_m3885(L_1, L_0, (String_t*) &_stringLiteral274, /*hidden argument*/&Uri__ctor_m3885_MethodInfo);
		V_0 = L_1;
		Uri_t26 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m588_MethodInfo, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral275, L_3, /*hidden argument*/&String_Concat_m548_MethodInfo);
		Debug_Log_m355(NULL /*static, unused*/, L_4, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		WWWForm_t561 * L_5 = (WWWForm_t561 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t561_il2cpp_TypeInfo));
		WWWForm__ctor_m3056(L_5, /*hidden argument*/&WWWForm__ctor_m3056_MethodInfo);
		V_1 = L_5;
		WWWForm_t561 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo));
		uint64_t L_7 = Utility_GetSourceID_m3477(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m3477_MethodInfo);
		uint64_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&SourceID_t632_il2cpp_TypeInfo), &L_8);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_9);
		NullCheck(L_6);
		WWWForm_AddField_m3057(L_6, (String_t*) &_stringLiteral264, L_10, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_11 = V_1;
		uint64_t L_12 = Utility_GetAppID_m3479(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m3479_MethodInfo);
		uint64_t L_13 = L_12;
		Object_t * L_14 = Box(InitializedTypeInfo(&AppID_t631_il2cpp_TypeInfo), &L_13);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_14);
		NullCheck(L_11);
		WWWForm_AddField_m3057(L_11, (String_t*) &_stringLiteral265, L_15, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_16 = V_1;
		DestroyMatchRequest_t623 * L_17 = ___req;
		NullCheck(L_17);
		uint64_t L_18 = DestroyMatchRequest_get_networkId_m3423(L_17, /*hidden argument*/&DestroyMatchRequest_get_networkId_m3423_MethodInfo);
		NetworkAccessToken_t635 * L_19 = Utility_GetAccessTokenForNetwork_m3480(NULL /*static, unused*/, L_18, /*hidden argument*/&Utility_GetAccessTokenForNetwork_m3480_MethodInfo);
		NullCheck(L_19);
		String_t* L_20 = NetworkAccessToken_GetByteString_m3475(L_19, /*hidden argument*/&NetworkAccessToken_GetByteString_m3475_MethodInfo);
		NullCheck(L_16);
		WWWForm_AddField_m3057(L_16, (String_t*) &_stringLiteral240, L_20, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_21 = V_1;
		NullCheck(L_21);
		WWWForm_AddField_m3059(L_21, (String_t*) &_stringLiteral266, 0, /*hidden argument*/&WWWForm_AddField_m3059_MethodInfo);
		WWWForm_t561 * L_22 = V_1;
		DestroyMatchRequest_t623 * L_23 = ___req;
		NullCheck(L_23);
		uint64_t L_24 = DestroyMatchRequest_get_networkId_m3423(L_23, /*hidden argument*/&DestroyMatchRequest_get_networkId_m3423_MethodInfo);
		uint64_t L_25 = L_24;
		Object_t * L_26 = Box(InitializedTypeInfo(&NetworkID_t633_il2cpp_TypeInfo), &L_25);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_26);
		NullCheck(L_22);
		WWWForm_AddField_m3057(L_22, (String_t*) &_stringLiteral239, L_27, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_28 = V_1;
		NullCheck(L_28);
		Dictionary_2_t560 * L_29 = WWWForm_get_headers_m3060(L_28, /*hidden argument*/&WWWForm_get_headers_m3060_MethodInfo);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3837_MethodInfo_var, L_29, (String_t*) &_stringLiteral270, (String_t*) &_stringLiteral271);
		Uri_t26 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m588_MethodInfo, L_30);
		WWWForm_t561 * L_32 = V_1;
		WWW_t559 * L_33 = (WWW_t559 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t559_il2cpp_TypeInfo));
		WWW__ctor_m3041(L_33, L_31, L_32, /*hidden argument*/&WWW__ctor_m3041_MethodInfo);
		V_2 = L_33;
		WWW_t559 * L_34 = V_2;
		ResponseDelegate_1_t642 * L_35 = ___callback;
		Object_t * L_36 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890(__this, L_34, L_35, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890_MethodInfo_var);
		Coroutine_t271 * L_37 = MonoBehaviour_StartCoroutine_m1962(__this, L_36, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1962_MethodInfo);
		return L_37;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo NetworkMatch_DropConnection_m3491_MethodInfo;
extern "C" Coroutine_t271 * NetworkMatch_DropConnection_m3491 (NetworkMatch_t639 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t642 * ___callback, MethodInfo* method)
{
	DropConnectionRequest_t624 * V_0 = {0};
	{
		DropConnectionRequest_t624 * L_0 = (DropConnectionRequest_t624 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DropConnectionRequest_t624_il2cpp_TypeInfo));
		DropConnectionRequest__ctor_m3426(L_0, /*hidden argument*/&DropConnectionRequest__ctor_m3426_MethodInfo);
		V_0 = L_0;
		DropConnectionRequest_t624 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DropConnectionRequest_set_networkId_m3428(L_1, L_2, /*hidden argument*/&DropConnectionRequest_set_networkId_m3428_MethodInfo);
		DropConnectionRequest_t624 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId;
		NullCheck(L_3);
		DropConnectionRequest_set_nodeId_m3430(L_3, L_4, /*hidden argument*/&DropConnectionRequest_set_nodeId_m3430_MethodInfo);
		DropConnectionRequest_t624 * L_5 = V_0;
		ResponseDelegate_1_t642 * L_6 = ___callback;
		Coroutine_t271 * L_7 = NetworkMatch_DropConnection_m3492(__this, L_5, L_6, /*hidden argument*/&NetworkMatch_DropConnection_m3492_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo* Dictionary_2_set_Item_m3837_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890_MethodInfo_var;
extern "C" Coroutine_t271 * NetworkMatch_DropConnection_m3492 (NetworkMatch_t639 * __this, DropConnectionRequest_t624 * ___req, ResponseDelegate_1_t642 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_DropConnection_m3492_init;
	if (!NetworkMatch_DropConnection_m3492_init)
	{
		Dictionary_2_set_Item_m3837_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3837_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890_GenericMethod);
		NetworkMatch_DropConnection_m3492_init = true;
	}
	Uri_t26 * V_0 = {0};
	WWWForm_t561 * V_1 = {0};
	WWW_t559 * V_2 = {0};
	{
		Uri_t26 * L_0 = NetworkMatch_get_baseUri_m3482(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m3482_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri_t26 * L_1 = (Uri_t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri__ctor_m3885(L_1, L_0, (String_t*) &_stringLiteral276, /*hidden argument*/&Uri__ctor_m3885_MethodInfo);
		V_0 = L_1;
		Uri_t26 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1810(NULL /*static, unused*/, (String_t*) &_stringLiteral277, L_2, /*hidden argument*/&String_Concat_m1810_MethodInfo);
		Debug_Log_m355(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		WWWForm_t561 * L_4 = (WWWForm_t561 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t561_il2cpp_TypeInfo));
		WWWForm__ctor_m3056(L_4, /*hidden argument*/&WWWForm__ctor_m3056_MethodInfo);
		V_1 = L_4;
		WWWForm_t561 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m3477(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m3477_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t632_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3057(L_5, (String_t*) &_stringLiteral264, L_9, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3479(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m3479_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t631_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3057(L_10, (String_t*) &_stringLiteral265, L_14, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_15 = V_1;
		DropConnectionRequest_t624 * L_16 = ___req;
		NullCheck(L_16);
		uint64_t L_17 = DropConnectionRequest_get_networkId_m3427(L_16, /*hidden argument*/&DropConnectionRequest_get_networkId_m3427_MethodInfo);
		NetworkAccessToken_t635 * L_18 = Utility_GetAccessTokenForNetwork_m3480(NULL /*static, unused*/, L_17, /*hidden argument*/&Utility_GetAccessTokenForNetwork_m3480_MethodInfo);
		NullCheck(L_18);
		String_t* L_19 = NetworkAccessToken_GetByteString_m3475(L_18, /*hidden argument*/&NetworkAccessToken_GetByteString_m3475_MethodInfo);
		NullCheck(L_15);
		WWWForm_AddField_m3057(L_15, (String_t*) &_stringLiteral240, L_19, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_20 = V_1;
		NullCheck(L_20);
		WWWForm_AddField_m3059(L_20, (String_t*) &_stringLiteral266, 0, /*hidden argument*/&WWWForm_AddField_m3059_MethodInfo);
		WWWForm_t561 * L_21 = V_1;
		DropConnectionRequest_t624 * L_22 = ___req;
		NullCheck(L_22);
		uint64_t L_23 = DropConnectionRequest_get_networkId_m3427(L_22, /*hidden argument*/&DropConnectionRequest_get_networkId_m3427_MethodInfo);
		uint64_t L_24 = L_23;
		Object_t * L_25 = Box(InitializedTypeInfo(&NetworkID_t633_il2cpp_TypeInfo), &L_24);
		NullCheck(L_25);
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_25);
		NullCheck(L_21);
		WWWForm_AddField_m3057(L_21, (String_t*) &_stringLiteral239, L_26, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_27 = V_1;
		DropConnectionRequest_t624 * L_28 = ___req;
		NullCheck(L_28);
		uint16_t L_29 = DropConnectionRequest_get_nodeId_m3429(L_28, /*hidden argument*/&DropConnectionRequest_get_nodeId_m3429_MethodInfo);
		uint16_t L_30 = L_29;
		Object_t * L_31 = Box(InitializedTypeInfo(&NodeID_t634_il2cpp_TypeInfo), &L_30);
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_31);
		NullCheck(L_27);
		WWWForm_AddField_m3057(L_27, (String_t*) &_stringLiteral241, L_32, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_33 = V_1;
		NullCheck(L_33);
		Dictionary_2_t560 * L_34 = WWWForm_get_headers_m3060(L_33, /*hidden argument*/&WWWForm_get_headers_m3060_MethodInfo);
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3837_MethodInfo_var, L_34, (String_t*) &_stringLiteral270, (String_t*) &_stringLiteral271);
		Uri_t26 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m588_MethodInfo, L_35);
		WWWForm_t561 * L_37 = V_1;
		WWW_t559 * L_38 = (WWW_t559 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t559_il2cpp_TypeInfo));
		WWW__ctor_m3041(L_38, L_36, L_37, /*hidden argument*/&WWW__ctor_m3041_MethodInfo);
		V_2 = L_38;
		WWW_t559 * L_39 = V_2;
		ResponseDelegate_1_t642 * L_40 = ___callback;
		Object_t * L_41 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890(__this, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t617_m3890_MethodInfo_var);
		Coroutine_t271 * L_42 = MonoBehaviour_StartCoroutine_m1962(__this, L_41, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1962_MethodInfo);
		return L_42;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern MethodInfo NetworkMatch_ListMatches_m3493_MethodInfo;
extern "C" Coroutine_t271 * NetworkMatch_ListMatches_m3493 (NetworkMatch_t639 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t643 * ___callback, MethodInfo* method)
{
	ListMatchRequest_t625 * V_0 = {0};
	{
		ListMatchRequest_t625 * L_0 = (ListMatchRequest_t625 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ListMatchRequest_t625_il2cpp_TypeInfo));
		ListMatchRequest__ctor_m3432(L_0, /*hidden argument*/&ListMatchRequest__ctor_m3432_MethodInfo);
		V_0 = L_0;
		ListMatchRequest_t625 * L_1 = V_0;
		int32_t L_2 = ___startPageNumber;
		NullCheck(L_1);
		ListMatchRequest_set_pageNum_m3436(L_1, L_2, /*hidden argument*/&ListMatchRequest_set_pageNum_m3436_MethodInfo);
		ListMatchRequest_t625 * L_3 = V_0;
		int32_t L_4 = ___resultPageSize;
		NullCheck(L_3);
		ListMatchRequest_set_pageSize_m3434(L_3, L_4, /*hidden argument*/&ListMatchRequest_set_pageSize_m3434_MethodInfo);
		ListMatchRequest_t625 * L_5 = V_0;
		String_t* L_6 = ___matchNameFilter;
		NullCheck(L_5);
		ListMatchRequest_set_nameFilter_m3438(L_5, L_6, /*hidden argument*/&ListMatchRequest_set_nameFilter_m3438_MethodInfo);
		ListMatchRequest_t625 * L_7 = V_0;
		ResponseDelegate_1_t643 * L_8 = ___callback;
		Coroutine_t271 * L_9 = NetworkMatch_ListMatches_m3494(__this, L_7, L_8, /*hidden argument*/&NetworkMatch_ListMatches_m3494_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m3837_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t630_m3891_MethodInfo_var;
extern "C" Coroutine_t271 * NetworkMatch_ListMatches_m3494 (NetworkMatch_t639 * __this, ListMatchRequest_t625 * ___req, ResponseDelegate_1_t643 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_ListMatches_m3494_init;
	if (!NetworkMatch_ListMatches_m3494_init)
	{
		Dictionary_2_set_Item_m3837_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3837_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t630_m3891_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t630_m3891_GenericMethod);
		NetworkMatch_ListMatches_m3494_init = true;
	}
	Uri_t26 * V_0 = {0};
	WWWForm_t561 * V_1 = {0};
	WWW_t559 * V_2 = {0};
	{
		Uri_t26 * L_0 = NetworkMatch_get_baseUri_m3482(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m3482_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri_t26 * L_1 = (Uri_t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo));
		Uri__ctor_m3885(L_1, L_0, (String_t*) &_stringLiteral278, /*hidden argument*/&Uri__ctor_m3885_MethodInfo);
		V_0 = L_1;
		Uri_t26 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1810(NULL /*static, unused*/, (String_t*) &_stringLiteral279, L_2, /*hidden argument*/&String_Concat_m1810_MethodInfo);
		Debug_Log_m355(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m355_MethodInfo);
		WWWForm_t561 * L_4 = (WWWForm_t561 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t561_il2cpp_TypeInfo));
		WWWForm__ctor_m3056(L_4, /*hidden argument*/&WWWForm__ctor_m3056_MethodInfo);
		V_1 = L_4;
		WWWForm_t561 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t638_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m3477(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m3477_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t632_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3057(L_5, (String_t*) &_stringLiteral264, L_9, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m3479(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m3479_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t631_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m606_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3057(L_10, (String_t*) &_stringLiteral265, L_14, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m3059(L_15, (String_t*) &_stringLiteral240, 0, /*hidden argument*/&WWWForm_AddField_m3059_MethodInfo);
		WWWForm_t561 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m3059(L_16, (String_t*) &_stringLiteral266, 0, /*hidden argument*/&WWWForm_AddField_m3059_MethodInfo);
		WWWForm_t561 * L_17 = V_1;
		ListMatchRequest_t625 * L_18 = ___req;
		NullCheck(L_18);
		int32_t L_19 = ListMatchRequest_get_pageSize_m3433(L_18, /*hidden argument*/&ListMatchRequest_get_pageSize_m3433_MethodInfo);
		NullCheck(L_17);
		WWWForm_AddField_m3059(L_17, (String_t*) &_stringLiteral280, L_19, /*hidden argument*/&WWWForm_AddField_m3059_MethodInfo);
		WWWForm_t561 * L_20 = V_1;
		ListMatchRequest_t625 * L_21 = ___req;
		NullCheck(L_21);
		int32_t L_22 = ListMatchRequest_get_pageNum_m3435(L_21, /*hidden argument*/&ListMatchRequest_get_pageNum_m3435_MethodInfo);
		NullCheck(L_20);
		WWWForm_AddField_m3059(L_20, (String_t*) &_stringLiteral281, L_22, /*hidden argument*/&WWWForm_AddField_m3059_MethodInfo);
		WWWForm_t561 * L_23 = V_1;
		ListMatchRequest_t625 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = ListMatchRequest_get_nameFilter_m3437(L_24, /*hidden argument*/&ListMatchRequest_get_nameFilter_m3437_MethodInfo);
		NullCheck(L_23);
		WWWForm_AddField_m3057(L_23, (String_t*) &_stringLiteral282, L_25, /*hidden argument*/&WWWForm_AddField_m3057_MethodInfo);
		WWWForm_t561 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t560 * L_27 = WWWForm_get_headers_m3060(L_26, /*hidden argument*/&WWWForm_get_headers_m3060_MethodInfo);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m3837_MethodInfo_var, L_27, (String_t*) &_stringLiteral270, (String_t*) &_stringLiteral271);
		Uri_t26 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m588_MethodInfo, L_28);
		WWWForm_t561 * L_30 = V_1;
		WWW_t559 * L_31 = (WWW_t559 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t559_il2cpp_TypeInfo));
		WWW__ctor_m3041(L_31, L_29, L_30, /*hidden argument*/&WWW__ctor_m3041_MethodInfo);
		V_2 = L_31;
		WWW_t559 * L_32 = V_2;
		ResponseDelegate_1_t643 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t630_m3891(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t630_m3891_MethodInfo_var);
		Coroutine_t271 * L_35 = MonoBehaviour_StartCoroutine_m1962(__this, L_34, /*hidden argument*/&MonoBehaviour_StartCoroutine_m1962_MethodInfo);
		return L_35;
	}
}
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArray.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JsonArray_t644_il2cpp_TypeInfo;
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArrayMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"
extern MethodInfo SimpleJson_SerializeObject_m3517_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3892_GenericMethod;


// System.Void SimpleJson.JsonArray::.ctor()
extern MethodInfo JsonArray__ctor_m3495_MethodInfo;
extern MethodInfo* List_1__ctor_m3892_MethodInfo_var;
extern "C" void JsonArray__ctor_m3495 (JsonArray_t644 * __this, MethodInfo* method)
{
	static bool JsonArray__ctor_m3495_init;
	if (!JsonArray__ctor_m3495_init)
	{
		List_1__ctor_m3892_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3892_GenericMethod);
		JsonArray__ctor_m3495_init = true;
	}
	{
		List_1__ctor_m3892(__this, /*hidden argument*/List_1__ctor_m3892_MethodInfo_var);
		return;
	}
}
// System.String SimpleJson.JsonArray::ToString()
extern MethodInfo JsonArray_ToString_m3496_MethodInfo;
extern "C" String_t* JsonArray_ToString_m3496 (JsonArray_t644 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	{
		String_t* L_0 = SimpleJson_SerializeObject_m3517(NULL /*static, unused*/, __this, /*hidden argument*/&SimpleJson_SerializeObject_m3517_MethodInfo);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JsonObject_t646_il2cpp_TypeInfo;
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo Dictionary_2_t645_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t753_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t754_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t651_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t650_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t31_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern Il2CppType Dictionary_2_t645_0_0_0;
extern Il2CppType Enumerator_t753_0_0_0;
extern Il2CppType IEnumerator_1_t651_0_0_0;
extern MethodInfo Dictionary_2_get_Item_m3893_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m3894_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m3895_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3896_MethodInfo;
extern MethodInfo Dictionary_2_Add_m3897_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m3898_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3899_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m3900_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m3901_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3902_MethodInfo;
extern MethodInfo JsonObject_get_Count_m3510_MethodInfo;
extern MethodInfo JsonObject_GetEnumerator_m3513_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m3903_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3904_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m3905_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m3906_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m3893_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m3894_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m3895_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m3896_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m3907_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m3897_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m3898_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3899_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m3908_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m3909_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m3900_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m3901_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m3903_GenericMethod;


// System.Void SimpleJson.JsonObject::.ctor()
extern MethodInfo JsonObject__ctor_m3497_MethodInfo;
extern TypeInfo* Dictionary_2_t645_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3896_MethodInfo_var;
extern "C" void JsonObject__ctor_m3497 (JsonObject_t646 * __this, MethodInfo* method)
{
	static bool JsonObject__ctor_m3497_init;
	if (!JsonObject__ctor_m3497_init)
	{
		Dictionary_2_t645_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t645_0_0_0);
		Dictionary_2__ctor_m3896_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3896_GenericMethod);
		JsonObject__ctor_m3497_init = true;
	}
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Dictionary_2_t645 * L_0 = (Dictionary_2_t645 *)il2cpp_codegen_object_new (Dictionary_2_t645_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3896(L_0, /*hidden argument*/Dictionary_2__ctor_m3896_MethodInfo_var);
		__this->____members_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo JsonObject_System_Collections_IEnumerable_GetEnumerator_m3498_MethodInfo;
extern TypeInfo* Enumerator_t753_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_GetEnumerator_m3907_MethodInfo_var;
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m3498 (JsonObject_t646 * __this, MethodInfo* method)
{
	static bool JsonObject_System_Collections_IEnumerable_GetEnumerator_m3498_init;
	if (!JsonObject_System_Collections_IEnumerable_GetEnumerator_m3498_init)
	{
		Enumerator_t753_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t753_0_0_0);
		Dictionary_2_GetEnumerator_m3907_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_GetEnumerator_m3907_GenericMethod);
		JsonObject_System_Collections_IEnumerable_GetEnumerator_m3498_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t753  L_1 = Dictionary_2_GetEnumerator_m3907(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3907_MethodInfo_var);
		Enumerator_t753  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t753_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern MethodInfo JsonObject_Add_m3499_MethodInfo;
extern MethodInfo* Dictionary_2_Add_m3897_MethodInfo_var;
extern "C" void JsonObject_Add_m3499 (JsonObject_t646 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool JsonObject_Add_m3499_init;
	if (!JsonObject_Add_m3499_init)
	{
		Dictionary_2_Add_m3897_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m3897_GenericMethod);
		JsonObject_Add_m3499_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_Add_m3897_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern MethodInfo JsonObject_get_Keys_m3500_MethodInfo;
extern MethodInfo* Dictionary_2_get_Keys_m3905_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Keys_m3500 (JsonObject_t646 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Keys_m3500_init;
	if (!JsonObject_get_Keys_m3500_init)
	{
		Dictionary_2_get_Keys_m3905_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Keys_m3905_GenericMethod);
		JsonObject_get_Keys_m3500_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		KeyCollection_t755 * L_1 = Dictionary_2_get_Keys_m3905(L_0, /*hidden argument*/Dictionary_2_get_Keys_m3905_MethodInfo_var);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.String)
extern MethodInfo JsonObject_Remove_m3501_MethodInfo;
extern MethodInfo* Dictionary_2_Remove_m3898_MethodInfo_var;
extern "C" bool JsonObject_Remove_m3501 (JsonObject_t646 * __this, String_t* ___key, MethodInfo* method)
{
	static bool JsonObject_Remove_m3501_init;
	if (!JsonObject_Remove_m3501_init)
	{
		Dictionary_2_Remove_m3898_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Remove_m3898_GenericMethod);
		JsonObject_Remove_m3501_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_Remove_m3898_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern MethodInfo JsonObject_TryGetValue_m3502_MethodInfo;
extern MethodInfo* Dictionary_2_TryGetValue_m3899_MethodInfo_var;
extern "C" bool JsonObject_TryGetValue_m3502 (JsonObject_t646 * __this, String_t* ___key, Object_t ** ___value, MethodInfo* method)
{
	static bool JsonObject_TryGetValue_m3502_init;
	if (!JsonObject_TryGetValue_m3502_init)
	{
		Dictionary_2_TryGetValue_m3899_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3899_GenericMethod);
		JsonObject_TryGetValue_m3502_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t ** L_2 = ___value;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(Dictionary_2_TryGetValue_m3899_MethodInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern MethodInfo JsonObject_get_Values_m3503_MethodInfo;
extern MethodInfo* Dictionary_2_get_Values_m3906_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Values_m3503 (JsonObject_t646 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Values_m3503_init;
	if (!JsonObject_get_Values_m3503_init)
	{
		Dictionary_2_get_Values_m3906_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Values_m3906_GenericMethod);
		JsonObject_get_Values_m3503_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		ValueCollection_t756 * L_1 = Dictionary_2_get_Values_m3906(L_0, /*hidden argument*/Dictionary_2_get_Values_m3906_MethodInfo_var);
		return L_1;
	}
}
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern MethodInfo JsonObject_get_Item_m3504_MethodInfo;
extern MethodInfo* Dictionary_2_get_Item_m3893_MethodInfo_var;
extern "C" Object_t * JsonObject_get_Item_m3504 (JsonObject_t646 * __this, String_t* ___key, MethodInfo* method)
{
	static bool JsonObject_get_Item_m3504_init;
	if (!JsonObject_get_Item_m3504_init)
	{
		Dictionary_2_get_Item_m3893_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m3893_GenericMethod);
		JsonObject_get_Item_m3504_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(Dictionary_2_get_Item_m3893_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern MethodInfo JsonObject_set_Item_m3505_MethodInfo;
extern MethodInfo* Dictionary_2_set_Item_m3894_MethodInfo_var;
extern "C" void JsonObject_set_Item_m3505 (JsonObject_t646 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool JsonObject_set_Item_m3505_init;
	if (!JsonObject_set_Item_m3505_init)
	{
		Dictionary_2_set_Item_m3894_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3894_GenericMethod);
		JsonObject_set_Item_m3505_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_set_Item_m3894_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Add_m3506_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m3908_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m3909_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m3897_MethodInfo_var;
extern "C" void JsonObject_Add_m3506 (JsonObject_t646 * __this, KeyValuePair_2_t650  ___item, MethodInfo* method)
{
	static bool JsonObject_Add_m3506_init;
	if (!JsonObject_Add_m3506_init)
	{
		KeyValuePair_2_get_Key_m3908_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m3908_GenericMethod);
		KeyValuePair_2_get_Value_m3909_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m3909_GenericMethod);
		Dictionary_2_Add_m3897_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m3897_GenericMethod);
		JsonObject_Add_m3506_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m3908((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3908_MethodInfo_var);
		Object_t * L_2 = KeyValuePair_2_get_Value_m3909((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m3909_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_Add_m3897_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Clear()
extern MethodInfo JsonObject_Clear_m3507_MethodInfo;
extern MethodInfo* Dictionary_2_Clear_m3900_MethodInfo_var;
extern "C" void JsonObject_Clear_m3507 (JsonObject_t646 * __this, MethodInfo* method)
{
	static bool JsonObject_Clear_m3507_init;
	if (!JsonObject_Clear_m3507_init)
	{
		Dictionary_2_Clear_m3900_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Clear_m3900_GenericMethod);
		JsonObject_Clear_m3507_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(Dictionary_2_Clear_m3900_MethodInfo_var, L_0);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Contains_m3508_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m3908_MethodInfo_var;
extern MethodInfo* Dictionary_2_ContainsKey_m3901_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m3893_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m3909_MethodInfo_var;
extern "C" bool JsonObject_Contains_m3508 (JsonObject_t646 * __this, KeyValuePair_2_t650  ___item, MethodInfo* method)
{
	static bool JsonObject_Contains_m3508_init;
	if (!JsonObject_Contains_m3508_init)
	{
		KeyValuePair_2_get_Key_m3908_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m3908_GenericMethod);
		Dictionary_2_ContainsKey_m3901_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m3901_GenericMethod);
		Dictionary_2_get_Item_m3893_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m3893_GenericMethod);
		KeyValuePair_2_get_Value_m3909_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m3909_GenericMethod);
		JsonObject_Contains_m3508_init = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m3908((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3908_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m3901_MethodInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t645 * L_3 = (__this->____members_0);
		String_t* L_4 = KeyValuePair_2_get_Key_m3908((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3908_MethodInfo_var);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(Dictionary_2_get_Item_m3893_MethodInfo_var, L_3, L_4);
		Object_t * L_6 = KeyValuePair_2_get_Value_m3909((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m3909_MethodInfo_var);
		G_B3_0 = ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern MethodInfo JsonObject_CopyTo_m3509_MethodInfo;
extern MethodInfo* IEnumerator_1_get_Current_m3903_MethodInfo_var;
extern "C" void JsonObject_CopyTo_m3509 (JsonObject_t646 * __this, KeyValuePair_2U5BU5D_t649* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	static bool JsonObject_CopyTo_m3509_init;
	if (!JsonObject_CopyTo_m3509_init)
	{
		IEnumerator_1_get_Current_m3903_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3903_GenericMethod);
		JsonObject_CopyTo_m3509_init = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t650  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t649* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral287, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&JsonObject_get_Count_m3510_MethodInfo, __this);
		V_0 = L_2;
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(&JsonObject_GetEnumerator_m3513_MethodInfo, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t650  L_5 = (KeyValuePair_2_t650 )InterfaceFuncInvoker0< KeyValuePair_2_t650  >::Invoke(IEnumerator_1_get_Current_m3903_MethodInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t649* L_6 = ___array;
			int32_t L_7 = ___arrayIndex;
			int32_t L_8 = L_7;
			___arrayIndex = ((int32_t)((int32_t)L_8+(int32_t)1));
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			KeyValuePair_2_t650  L_9 = V_1;
			*((KeyValuePair_2_t650 *)(KeyValuePair_2_t650 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 SimpleJson.JsonObject::get_Count()
extern MethodInfo* Dictionary_2_get_Count_m3895_MethodInfo_var;
extern "C" int32_t JsonObject_get_Count_m3510 (JsonObject_t646 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Count_m3510_init;
	if (!JsonObject_get_Count_m3510_init)
	{
		Dictionary_2_get_Count_m3895_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m3895_GenericMethod);
		JsonObject_get_Count_m3510_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m3895_MethodInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern MethodInfo JsonObject_get_IsReadOnly_m3511_MethodInfo;
extern "C" bool JsonObject_get_IsReadOnly_m3511 (JsonObject_t646 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Remove_m3512_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m3908_MethodInfo_var;
extern MethodInfo* Dictionary_2_Remove_m3898_MethodInfo_var;
extern "C" bool JsonObject_Remove_m3512 (JsonObject_t646 * __this, KeyValuePair_2_t650  ___item, MethodInfo* method)
{
	static bool JsonObject_Remove_m3512_init;
	if (!JsonObject_Remove_m3512_init)
	{
		KeyValuePair_2_get_Key_m3908_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m3908_GenericMethod);
		Dictionary_2_Remove_m3898_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Remove_m3898_GenericMethod);
		JsonObject_Remove_m3512_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m3908((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m3908_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_Remove_m3898_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern TypeInfo* Enumerator_t753_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_GetEnumerator_m3907_MethodInfo_var;
extern "C" Object_t* JsonObject_GetEnumerator_m3513 (JsonObject_t646 * __this, MethodInfo* method)
{
	static bool JsonObject_GetEnumerator_m3513_init;
	if (!JsonObject_GetEnumerator_m3513_init)
	{
		Enumerator_t753_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t753_0_0_0);
		Dictionary_2_GetEnumerator_m3907_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_GetEnumerator_m3907_GenericMethod);
		JsonObject_GetEnumerator_m3513_init = true;
	}
	{
		Dictionary_2_t645 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t753  L_1 = Dictionary_2_GetEnumerator_m3907(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m3907_MethodInfo_var);
		Enumerator_t753  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t753_il2cpp_TypeInfo_var, &L_2);
		return (Object_t*)L_3;
	}
}
// System.String SimpleJson.JsonObject::ToString()
extern MethodInfo JsonObject_ToString_m3514_MethodInfo;
extern "C" String_t* JsonObject_ToString_m3514 (JsonObject_t646 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m3517(NULL /*static, unused*/, __this, /*hidden argument*/&SimpleJson_SerializeObject_m3517_MethodInfo);
		return L_0;
	}
}
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJson.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SimpleJson_t654_il2cpp_TypeInfo;

// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Int16
#include "mscorlib_System_Int16.h"
extern TypeInfo PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t353_il2cpp_TypeInfo;
extern TypeInfo List_1_t354_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t757_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t758_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t268_il2cpp_TypeInfo;
extern TypeInfo Char_t262_il2cpp_TypeInfo;
extern TypeInfo Double_t89_il2cpp_TypeInfo;
extern TypeInfo Int64_t759_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t647_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t648_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t760_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t457_il2cpp_TypeInfo;
extern TypeInfo IJsonSerializerStrategy_t652_il2cpp_TypeInfo;
extern TypeInfo IFormatProvider_t761_il2cpp_TypeInfo;
extern TypeInfo UInt64_t762_il2cpp_TypeInfo;
extern TypeInfo Decimal_t763_il2cpp_TypeInfo;
extern TypeInfo SByte_t115_il2cpp_TypeInfo;
extern TypeInfo Int16_t434_il2cpp_TypeInfo;
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
extern Il2CppType List_1_t354_0_0_0;
extern Il2CppType CharU5BU5D_t268_0_0_0;
extern Il2CppType IDictionary_2_t760_0_0_0;
extern MethodInfo SimpleJson_get_PocoJsonSerializerStrategy_m3535_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy__ctor_m3536_MethodInfo;
extern MethodInfo String_ToCharArray_m3910_MethodInfo;
extern MethodInfo SimpleJson_ParseValue_m3520_MethodInfo;
extern MethodInfo StringBuilder__ctor_m3911_MethodInfo;
extern MethodInfo SimpleJson_SerializeValue_m3528_MethodInfo;
extern MethodInfo StringBuilder_ToString_m1813_MethodInfo;
extern MethodInfo SimpleJson_get_CurrentJsonSerializerStrategy_m3534_MethodInfo;
extern MethodInfo SimpleJson_SerializeObject_m3516_MethodInfo;
extern MethodInfo SimpleJson_NextToken_m3527_MethodInfo;
extern MethodInfo SimpleJson_LookAhead_m3526_MethodInfo;
extern MethodInfo SimpleJson_ParseString_m3521_MethodInfo;
extern MethodInfo IDictionary_2_set_Item_m3912_MethodInfo;
extern MethodInfo List_1_Add_m3913_MethodInfo;
extern MethodInfo SimpleJson_ParseNumber_m3523_MethodInfo;
extern MethodInfo SimpleJson_ParseObject_m3518_MethodInfo;
extern MethodInfo SimpleJson_ParseArray_m3519_MethodInfo;
extern MethodInfo SimpleJson_EatWhitespace_m3525_MethodInfo;
extern MethodInfo StringBuilder_Append_m2148_MethodInfo;
extern MethodInfo String__ctor_m3914_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m3915_MethodInfo;
extern MethodInfo UInt32_TryParse_m3916_MethodInfo;
extern MethodInfo SimpleJson_ConvertFromUtf32_m3522_MethodInfo;
extern MethodInfo StringBuilder_Append_m3917_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m3918_MethodInfo;
extern MethodInfo String__ctor_m2155_MethodInfo;
extern MethodInfo String__ctor_m3919_MethodInfo;
extern MethodInfo SimpleJson_GetLastIndexOfNumber_m3524_MethodInfo;
extern MethodInfo String_IndexOf_m3826_MethodInfo;
extern MethodInfo Double_TryParse_m3920_MethodInfo;
extern MethodInfo Int64_TryParse_m3921_MethodInfo;
extern MethodInfo String_IndexOf_m2187_MethodInfo;
extern MethodInfo SimpleJson_SerializeString_m3531_MethodInfo;
extern MethodInfo IDictionary_2_get_Keys_m3922_MethodInfo;
extern MethodInfo IDictionary_2_get_Values_m3923_MethodInfo;
extern MethodInfo SimpleJson_SerializeObject_m3529_MethodInfo;
extern MethodInfo IDictionary_2_get_Keys_m3924_MethodInfo;
extern MethodInfo IDictionary_2_get_Values_m3925_MethodInfo;
extern MethodInfo SimpleJson_SerializeArray_m3530_MethodInfo;
extern MethodInfo SimpleJson_IsNumeric_m3533_MethodInfo;
extern MethodInfo SimpleJson_SerializeNumber_m3532_MethodInfo;
extern MethodInfo IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3926_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m3927_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m3928_MethodInfo;
extern MethodInfo Int64_ToString_m3929_MethodInfo;
extern MethodInfo UInt64_ToString_m3930_MethodInfo;
extern MethodInfo Int32_ToString_m3931_MethodInfo;
extern MethodInfo UInt32_ToString_m3932_MethodInfo;
extern MethodInfo Decimal_ToString_m3933_MethodInfo;
extern MethodInfo Single_ToString_m3934_MethodInfo;
extern MethodInfo Convert_ToDouble_m3935_MethodInfo;
extern MethodInfo Double_ToString_m3936_MethodInfo;
extern Il2CppGenericMethod IDictionary_2_set_Item_m3912_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3913_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Keys_m3922_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Values_m3923_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Keys_m3924_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Values_m3925_GenericMethod;


// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern MethodInfo SimpleJson_TryDeserializeObject_m3515_MethodInfo;
extern "C" bool SimpleJson_TryDeserializeObject_m3515 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, MethodInfo* method)
{
	bool V_0 = false;
	CharU5BU5D_t268* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 1;
		String_t* L_0 = ___json;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json;
		NullCheck(L_1);
		CharU5BU5D_t268* L_2 = String_ToCharArray_m3910(L_1, /*hidden argument*/&String_ToCharArray_m3910_MethodInfo);
		V_1 = L_2;
		V_2 = 0;
		Object_t ** L_3 = ___obj;
		CharU5BU5D_t268* L_4 = V_1;
		Object_t * L_5 = SimpleJson_ParseValue_m3520(NULL /*static, unused*/, L_4, (&V_2), (&V_0), /*hidden argument*/&SimpleJson_ParseValue_m3520_MethodInfo);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		goto IL_0025;
	}

IL_0022:
	{
		Object_t ** L_6 = ___obj;
		*((Object_t **)(L_6)) = (Object_t *)NULL;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C" String_t* SimpleJson_SerializeObject_m3516 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, MethodInfo* method)
{
	StringBuilder_t353 * V_0 = {0};
	bool V_1 = false;
	String_t* G_B3_0 = {0};
	{
		StringBuilder_t353 * L_0 = (StringBuilder_t353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t353_il2cpp_TypeInfo));
		StringBuilder__ctor_m3911(L_0, ((int32_t)2000), /*hidden argument*/&StringBuilder__ctor_m3911_MethodInfo);
		V_0 = L_0;
		Object_t * L_1 = ___jsonSerializerStrategy;
		Object_t * L_2 = ___json;
		StringBuilder_t353 * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m3528(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&SimpleJson_SerializeValue_m3528_MethodInfo);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t353 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1813_MethodInfo, L_6);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m3517 (Object_t * __this /* static, unused */, Object_t * ___json, MethodInfo* method)
{
	{
		Object_t * L_0 = ___json;
		Object_t * L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m3534(NULL /*static, unused*/, /*hidden argument*/&SimpleJson_get_CurrentJsonSerializerStrategy_m3534_MethodInfo);
		String_t* L_2 = SimpleJson_SerializeObject_m3516(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_SerializeObject_m3516_MethodInfo);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern MethodInfo* IDictionary_2_set_Item_m3912_MethodInfo_var;
extern "C" Object_t* SimpleJson_ParseObject_m3518 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	static bool SimpleJson_ParseObject_m3518_init;
	if (!SimpleJson_ParseObject_m3518_init)
	{
		IDictionary_2_set_Item_m3912_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_set_Item_m3912_GenericMethod);
		SimpleJson_ParseObject_m3518_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	Object_t * V_4 = {0};
	{
		JsonObject_t646 * L_0 = (JsonObject_t646 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JsonObject_t646_il2cpp_TypeInfo));
		JsonObject__ctor_m3497(L_0, /*hidden argument*/&JsonObject__ctor_m3497_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t268* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m3527(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_NextToken_m3527_MethodInfo);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t268* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m3526(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/&SimpleJson_LookAhead_m3526_MethodInfo);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t268* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m3527(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&SimpleJson_NextToken_m3527_MethodInfo);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t268* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m3527(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&SimpleJson_NextToken_m3527_MethodInfo);
		Object_t* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		CharU5BU5D_t268* L_15 = ___json;
		int32_t* L_16 = ___index;
		bool* L_17 = ___success;
		String_t* L_18 = SimpleJson_ParseString_m3521(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/&SimpleJson_ParseString_m3521_MethodInfo);
		V_3 = L_18;
		bool* L_19 = ___success;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = ___success;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t268* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t L_23 = SimpleJson_NextToken_m3527(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/&SimpleJson_NextToken_m3527_MethodInfo);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = ___success;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t268* L_26 = ___json;
		int32_t* L_27 = ___index;
		bool* L_28 = ___success;
		Object_t * L_29 = SimpleJson_ParseValue_m3520(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/&SimpleJson_ParseValue_m3520_MethodInfo);
		V_4 = L_29;
		bool* L_30 = ___success;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = ___success;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_008d:
	{
		Object_t* L_32 = V_0;
		String_t* L_33 = V_3;
		Object_t * L_34 = V_4;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(IDictionary_2_set_Item_m3912_MethodInfo_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		Object_t* L_36 = V_0;
		return L_36;
	}
}
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern MethodInfo* List_1_Add_m3913_MethodInfo_var;
extern "C" JsonArray_t644 * SimpleJson_ParseArray_m3519 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	static bool SimpleJson_ParseArray_m3519_init;
	if (!SimpleJson_ParseArray_m3519_init)
	{
		List_1_Add_m3913_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3913_GenericMethod);
		SimpleJson_ParseArray_m3519_init = true;
	}
	JsonArray_t644 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		JsonArray_t644 * L_0 = (JsonArray_t644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JsonArray_t644_il2cpp_TypeInfo));
		JsonArray__ctor_m3495(L_0, /*hidden argument*/&JsonArray__ctor_m3495_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t268* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m3527(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_NextToken_m3527_MethodInfo);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t268* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m3526(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/&SimpleJson_LookAhead_m3526_MethodInfo);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (JsonArray_t644 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t268* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m3527(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&SimpleJson_NextToken_m3527_MethodInfo);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t268* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m3527(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&SimpleJson_NextToken_m3527_MethodInfo);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t268* L_14 = ___json;
		int32_t* L_15 = ___index;
		bool* L_16 = ___success;
		Object_t * L_17 = SimpleJson_ParseValue_m3520(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/&SimpleJson_ParseValue_m3520_MethodInfo);
		V_3 = L_17;
		bool* L_18 = ___success;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_t644 *)NULL;
	}

IL_0063:
	{
		JsonArray_t644 * L_19 = V_0;
		Object_t * L_20 = V_3;
		NullCheck(L_19);
		VirtActionInvoker1< Object_t * >::Invoke(List_1_Add_m3913_MethodInfo_var, L_19, L_20);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_t644 * L_22 = V_0;
		return L_22;
	}
}
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseValue_m3520 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		CharU5BU5D_t268* L_0 = ___json;
		int32_t* L_1 = ___index;
		int32_t L_2 = SimpleJson_LookAhead_m3526(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/&SimpleJson_LookAhead_m3526_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0090;
		}
		if (L_3 == 1)
		{
			goto IL_0056;
		}
		if (L_3 == 2)
		{
			goto IL_0095;
		}
		if (L_3 == 3)
		{
			goto IL_005f;
		}
		if (L_3 == 4)
		{
			goto IL_0095;
		}
		if (L_3 == 5)
		{
			goto IL_0095;
		}
		if (L_3 == 6)
		{
			goto IL_0095;
		}
		if (L_3 == 7)
		{
			goto IL_0044;
		}
		if (L_3 == 8)
		{
			goto IL_004d;
		}
		if (L_3 == 9)
		{
			goto IL_0068;
		}
		if (L_3 == 10)
		{
			goto IL_0077;
		}
		if (L_3 == 11)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t268* L_4 = ___json;
		int32_t* L_5 = ___index;
		bool* L_6 = ___success;
		String_t* L_7 = SimpleJson_ParseString_m3521(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/&SimpleJson_ParseString_m3521_MethodInfo);
		return L_7;
	}

IL_004d:
	{
		CharU5BU5D_t268* L_8 = ___json;
		int32_t* L_9 = ___index;
		bool* L_10 = ___success;
		Object_t * L_11 = SimpleJson_ParseNumber_m3523(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/&SimpleJson_ParseNumber_m3523_MethodInfo);
		return L_11;
	}

IL_0056:
	{
		CharU5BU5D_t268* L_12 = ___json;
		int32_t* L_13 = ___index;
		bool* L_14 = ___success;
		Object_t* L_15 = SimpleJson_ParseObject_m3518(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/&SimpleJson_ParseObject_m3518_MethodInfo);
		return L_15;
	}

IL_005f:
	{
		CharU5BU5D_t268* L_16 = ___json;
		int32_t* L_17 = ___index;
		bool* L_18 = ___success;
		JsonArray_t644 * L_19 = SimpleJson_ParseArray_m3519(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/&SimpleJson_ParseArray_m3519_MethodInfo);
		return L_19;
	}

IL_0068:
	{
		CharU5BU5D_t268* L_20 = ___json;
		int32_t* L_21 = ___index;
		SimpleJson_NextToken_m3527(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&SimpleJson_NextToken_m3527_MethodInfo);
		bool L_22 = 1;
		Object_t * L_23 = Box(InitializedTypeInfo(&Boolean_t83_il2cpp_TypeInfo), &L_22);
		return L_23;
	}

IL_0077:
	{
		CharU5BU5D_t268* L_24 = ___json;
		int32_t* L_25 = ___index;
		SimpleJson_NextToken_m3527(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/&SimpleJson_NextToken_m3527_MethodInfo);
		bool L_26 = 0;
		Object_t * L_27 = Box(InitializedTypeInfo(&Boolean_t83_il2cpp_TypeInfo), &L_26);
		return L_27;
	}

IL_0086:
	{
		CharU5BU5D_t268* L_28 = ___json;
		int32_t* L_29 = ___index;
		SimpleJson_NextToken_m3527(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/&SimpleJson_NextToken_m3527_MethodInfo);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = ___success;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" String_t* SimpleJson_ParseString_m3521 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	StringBuilder_t353 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		StringBuilder_t353 * L_0 = (StringBuilder_t353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t353_il2cpp_TypeInfo));
		StringBuilder__ctor_m3911(L_0, ((int32_t)2000), /*hidden argument*/&StringBuilder__ctor_m3911_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t268* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_EatWhitespace_m3525(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_EatWhitespace_m3525_MethodInfo);
		CharU5BU5D_t268* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		int32_t L_6 = (*((int32_t*)L_5));
		V_6 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_8));
		V_2 = 0;
		goto IL_0239;
	}

IL_0027:
	{
		int32_t* L_9 = ___index;
		CharU5BU5D_t268* L_10 = ___json;
		NullCheck(L_10);
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_023f;
	}

IL_0036:
	{
		CharU5BU5D_t268* L_11 = ___json;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_6 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_6;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_16));
		uint16_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0053;
		}
	}
	{
		V_2 = 1;
		goto IL_023f;
	}

IL_0053:
	{
		uint16_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_19 = ___index;
		CharU5BU5D_t268* L_20 = ___json;
		NullCheck(L_20);
		if ((!(((uint32_t)(*((int32_t*)L_19))) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_023f;
	}

IL_006a:
	{
		CharU5BU5D_t268* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_6 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_6;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_25);
		int32_t L_26 = L_25;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_26));
		uint16_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		StringBuilder_t353 * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_Append_m2148(L_28, ((int32_t)34), /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
		goto IL_022c;
	}

IL_008e:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		StringBuilder_t353 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m2148(L_30, ((int32_t)92), /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
		goto IL_022c;
	}

IL_00a4:
	{
		uint16_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t353 * L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_Append_m2148(L_32, ((int32_t)47), /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
		goto IL_022c;
	}

IL_00ba:
	{
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t353 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m2148(L_34, 8, /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
		goto IL_022c;
	}

IL_00cf:
	{
		uint16_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t353 * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m2148(L_36, ((int32_t)12), /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
		goto IL_022c;
	}

IL_00e5:
	{
		uint16_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00fb;
		}
	}
	{
		StringBuilder_t353 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m2148(L_38, ((int32_t)10), /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
		goto IL_022c;
	}

IL_00fb:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0111;
		}
	}
	{
		StringBuilder_t353 * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m2148(L_40, ((int32_t)13), /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
		goto IL_022c;
	}

IL_0111:
	{
		uint16_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t353 * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_Append_m2148(L_42, ((int32_t)9), /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
		goto IL_022c;
	}

IL_0127:
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022c;
		}
	}
	{
		CharU5BU5D_t268* L_44 = ___json;
		NullCheck(L_44);
		int32_t* L_45 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))-(int32_t)(*((int32_t*)L_45))));
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_0227;
		}
	}
	{
		bool* L_47 = ___success;
		CharU5BU5D_t268* L_48 = ___json;
		int32_t* L_49 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_50 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_50 = String_CreateString_m3937(L_50, L_48, (*((int32_t*)L_49)), 4, /*hidden argument*/&String__ctor_m3914_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_51 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		bool L_52 = UInt32_TryParse_m3916(NULL /*static, unused*/, L_50, ((int32_t)515), L_51, (&V_4), /*hidden argument*/&UInt32_TryParse_m3916_MethodInfo);
		bool L_53 = L_52;
		V_7 = L_53;
		*((int8_t*)(L_47)) = (int8_t)L_53;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_55 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_55;
	}

IL_0169:
	{
		uint32_t L_56 = V_4;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_56))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_57 = V_4;
		if ((!(((uint32_t)L_57) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020e;
		}
	}
	{
		int32_t* L_58 = ___index;
		int32_t* L_59 = ___index;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		CharU5BU5D_t268* L_60 = ___json;
		NullCheck(L_60);
		int32_t* L_61 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t268* L_63 = ___json;
		int32_t* L_64 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_65 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_65 = String_CreateString_m3937(L_65, L_63, (*((int32_t*)L_64)), 2, /*hidden argument*/&String__ctor_m3914_MethodInfo);
		bool L_66 = String_op_Equality_m2110(NULL /*static, unused*/, L_65, (String_t*) &_stringLiteral288, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t268* L_67 = ___json;
		int32_t* L_68 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_69 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_69 = String_CreateString_m3937(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, /*hidden argument*/&String__ctor_m3914_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_70 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		bool L_71 = UInt32_TryParse_m3916(NULL /*static, unused*/, L_69, ((int32_t)515), L_70, (&V_5), /*hidden argument*/&UInt32_TryParse_m3916_MethodInfo);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_72 = V_5;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_72))))
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)L_73) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0205;
		}
	}
	{
		StringBuilder_t353 * L_74 = V_0;
		uint32_t L_75 = V_4;
		NullCheck(L_74);
		StringBuilder_Append_m2148(L_74, (((uint16_t)L_75)), /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
		StringBuilder_t353 * L_76 = V_0;
		uint32_t L_77 = V_5;
		NullCheck(L_76);
		StringBuilder_Append_m2148(L_76, (((uint16_t)L_77)), /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
		int32_t* L_78 = ___index;
		int32_t* L_79 = ___index;
		*((int32_t*)(L_78)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_79))+(int32_t)6));
		goto IL_0239;
	}

IL_0205:
	{
		bool* L_80 = ___success;
		*((int8_t*)(L_80)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_81 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_81;
	}

IL_020e:
	{
		StringBuilder_t353 * L_82 = V_0;
		uint32_t L_83 = V_4;
		String_t* L_84 = SimpleJson_ConvertFromUtf32_m3522(NULL /*static, unused*/, L_83, /*hidden argument*/&SimpleJson_ConvertFromUtf32_m3522_MethodInfo);
		NullCheck(L_82);
		StringBuilder_Append_m3917(L_82, L_84, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		int32_t* L_85 = ___index;
		int32_t* L_86 = ___index;
		*((int32_t*)(L_85)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_86))+(int32_t)4));
		goto IL_022c;
	}

IL_0227:
	{
		goto IL_023f;
	}

IL_022c:
	{
		goto IL_0239;
	}

IL_0231:
	{
		StringBuilder_t353 * L_87 = V_0;
		uint16_t L_88 = V_1;
		NullCheck(L_87);
		StringBuilder_Append_m2148(L_87, L_88, /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
	}

IL_0239:
	{
		bool L_89 = V_2;
		if (!L_89)
		{
			goto IL_0027;
		}
	}

IL_023f:
	{
		bool L_90 = V_2;
		if (L_90)
		{
			goto IL_024a;
		}
	}
	{
		bool* L_91 = ___success;
		*((int8_t*)(L_91)) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_024a:
	{
		StringBuilder_t353 * L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1813_MethodInfo, L_92);
		return L_93;
	}
}
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern TypeInfo* CharU5BU5D_t268_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_ConvertFromUtf32_m3522 (Object_t * __this /* static, unused */, int32_t ___utf32, MethodInfo* method)
{
	static bool SimpleJson_ConvertFromUtf32_m3522_init;
	if (!SimpleJson_ConvertFromUtf32_m3522_init)
	{
		CharU5BU5D_t268_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t268_0_0_0);
		SimpleJson_ConvertFromUtf32_m3522_init = true;
	}
	{
		int32_t L_0 = ___utf32;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___utf32;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_t758 * L_2 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_2, (String_t*) &_stringLiteral289, (String_t*) &_stringLiteral290, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		int32_t L_3 = ___utf32;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = ___utf32;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_5 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_5, (String_t*) &_stringLiteral289, (String_t*) &_stringLiteral291, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		int32_t L_6 = ___utf32;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___utf32;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_8 = String_CreateString_m2209(L_8, (((uint16_t)L_7)), 1, /*hidden argument*/&String__ctor_m2155_MethodInfo);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = ___utf32;
		___utf32 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		CharU5BU5D_t268* L_10 = ((CharU5BU5D_t268*)SZArrayNew(CharU5BU5D_t268_il2cpp_TypeInfo_var, 2));
		int32_t L_11 = ___utf32;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t268* L_12 = L_10;
		int32_t L_13 = ___utf32;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_14 = String_CreateString_m3938(L_14, L_12, /*hidden argument*/&String__ctor_m3919_MethodInfo);
		return L_14;
	}
}
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseNumber_m3523 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t268* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m3525(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_EatWhitespace_m3525_MethodInfo);
		CharU5BU5D_t268* L_2 = ___json;
		int32_t* L_3 = ___index;
		int32_t L_4 = SimpleJson_GetLastIndexOfNumber_m3524(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/&SimpleJson_GetLastIndexOfNumber_m3524_MethodInfo);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		CharU5BU5D_t268* L_7 = ___json;
		int32_t* L_8 = ___index;
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_10 = String_CreateString_m3937(L_10, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/&String__ctor_m3914_MethodInfo);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m3826(L_11, (String_t*) &_stringLiteral88, 5, /*hidden argument*/&String_IndexOf_m3826_MethodInfo);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m3826(L_13, (String_t*) &_stringLiteral292, 5, /*hidden argument*/&String_IndexOf_m3826_MethodInfo);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = ___success;
		CharU5BU5D_t268* L_16 = ___json;
		int32_t* L_17 = ___index;
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_19 = String_CreateString_m3937(L_19, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/&String__ctor_m3914_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_20 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		bool L_21 = Double_TryParse_m3920(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (&V_4), /*hidden argument*/&Double_TryParse_m3920_MethodInfo);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Double_t89_il2cpp_TypeInfo), &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = ___success;
		CharU5BU5D_t268* L_26 = ___json;
		int32_t* L_27 = ___index;
		int32_t L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_29 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_29 = String_CreateString_m3937(L_29, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/&String__ctor_m3914_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_30 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		bool L_31 = Int64_TryParse_m3921(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (&V_5), /*hidden argument*/&Int64_TryParse_m3921_MethodInfo);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = ___index;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)((int32_t)L_36+(int32_t)1));
		Object_t * L_37 = V_2;
		return L_37;
	}
}
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m3524 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t268* L_1 = ___json;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((String_t*) &_stringLiteral293);
		int32_t L_4 = String_IndexOf_m2187((String_t*) &_stringLiteral293, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/&String_IndexOf_m2187_MethodInfo);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t268* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" void SimpleJson_EatWhitespace_m3525 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, MethodInfo* method)
{
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t268* L_0 = ___json;
		int32_t* L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		NullCheck((String_t*) &_stringLiteral294);
		int32_t L_3 = String_IndexOf_m2187((String_t*) &_stringLiteral294, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), /*hidden argument*/&String_IndexOf_m2187_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = ___index;
		CharU5BU5D_t268* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m3526 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		CharU5BU5D_t268* L_1 = ___json;
		int32_t L_2 = SimpleJson_NextToken_m3527(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/&SimpleJson_NextToken_m3527_MethodInfo);
		return L_2;
	}
}
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m3527 (Object_t * __this /* static, unused */, CharU5BU5D_t268* ___json, int32_t* ___index, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		CharU5BU5D_t268* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m3525(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_EatWhitespace_m3525_MethodInfo);
		int32_t* L_2 = ___index;
		CharU5BU5D_t268* L_3 = ___json;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t268* L_4 = ___json;
		int32_t* L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*((int32_t*)L_5)));
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = ___index;
		int32_t* L_8 = ___index;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c4;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ca;
		}
	}

IL_008d:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c2;
		}
	}

IL_00a2:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00cc;
	}

IL_00bc:
	{
		return 1;
	}

IL_00be:
	{
		return 2;
	}

IL_00c0:
	{
		return 3;
	}

IL_00c2:
	{
		return 4;
	}

IL_00c4:
	{
		return 6;
	}

IL_00c6:
	{
		return 7;
	}

IL_00c8:
	{
		return 8;
	}

IL_00ca:
	{
		return 5;
	}

IL_00cc:
	{
		int32_t* L_13 = ___index;
		int32_t* L_14 = ___index;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		CharU5BU5D_t268* L_15 = ___json;
		NullCheck(L_15);
		int32_t* L_16 = ___index;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t268* L_18 = ___json;
		int32_t* L_19 = ___index;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, (*((int32_t*)L_19)));
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t268* L_21 = ___json;
		int32_t* L_22 = ___index;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1)));
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t268* L_24 = ___json;
		int32_t* L_25 = ___index;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2)));
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t268* L_27 = ___json;
		int32_t* L_28 = ___index;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3)));
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t268* L_30 = ___json;
		int32_t* L_31 = ___index;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4)));
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t* L_33 = ___index;
		int32_t* L_34 = ___index;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0128:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t268* L_36 = ___json;
		int32_t* L_37 = ___index;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, (*((int32_t*)L_37)));
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t268* L_39 = ___json;
		int32_t* L_40 = ___index;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t268* L_42 = ___json;
		int32_t* L_43 = ___index;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2)));
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t268* L_45 = ___json;
		int32_t* L_46 = ___index;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3)));
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t* L_48 = ___index;
		int32_t* L_49 = ___index;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016a:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t268* L_51 = ___json;
		int32_t* L_52 = ___index;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, (*((int32_t*)L_52)));
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t268* L_54 = ___json;
		int32_t* L_55 = ___index;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1)));
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t268* L_57 = ___json;
		int32_t* L_58 = ___index;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2)));
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t268* L_60 = ___json;
		int32_t* L_61 = ___index;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3)));
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t* L_63 = ___index;
		int32_t* L_64 = ___index;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ac:
	{
		return 0;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern TypeInfo* IDictionary_2_t615_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t760_il2cpp_TypeInfo_var;
extern MethodInfo* IDictionary_2_get_Keys_m3922_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Values_m3923_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Keys_m3924_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Values_m3925_MethodInfo_var;
extern "C" bool SimpleJson_SerializeValue_m3528 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t353 * ___builder, MethodInfo* method)
{
	static bool SimpleJson_SerializeValue_m3528_init;
	if (!SimpleJson_SerializeValue_m3528_init)
	{
		IDictionary_2_t615_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t615_0_0_0);
		IDictionary_2_t760_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t760_0_0_0);
		IDictionary_2_get_Keys_m3922_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Keys_m3922_GenericMethod);
		IDictionary_2_get_Values_m3923_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Values_m3923_GenericMethod);
		IDictionary_2_get_Keys_m3924_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Keys_m3924_GenericMethod);
		IDictionary_2_get_Values_m3925_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Values_m3925_GenericMethod);
		SimpleJson_SerializeValue_m3528_init = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	Object_t* V_2 = {0};
	Object_t* V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	StringBuilder_t353 * G_B13_0 = {0};
	StringBuilder_t353 * G_B12_0 = {0};
	String_t* G_B14_0 = {0};
	StringBuilder_t353 * G_B14_1 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___value;
		V_1 = ((String_t*)IsInst(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t353 * L_3 = ___builder;
		bool L_4 = SimpleJson_SerializeString_m3531(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&SimpleJson_SerializeString_m3531_MethodInfo);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		Object_t * L_5 = ___value;
		V_2 = ((Object_t*)IsInst(L_5, IDictionary_2_t615_il2cpp_TypeInfo_var));
		Object_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_7 = ___jsonSerializerStrategy;
		Object_t* L_8 = V_2;
		NullCheck(L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Keys_m3922_MethodInfo_var, L_8);
		Object_t* L_10 = V_2;
		NullCheck(L_10);
		Object_t* L_11 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Values_m3923_MethodInfo_var, L_10);
		StringBuilder_t353 * L_12 = ___builder;
		bool L_13 = SimpleJson_SerializeObject_m3529(NULL /*static, unused*/, L_7, L_9, L_11, L_12, /*hidden argument*/&SimpleJson_SerializeObject_m3529_MethodInfo);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		Object_t * L_14 = ___value;
		V_3 = ((Object_t*)IsInst(L_14, IDictionary_2_t760_il2cpp_TypeInfo_var));
		Object_t* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		Object_t * L_16 = ___jsonSerializerStrategy;
		Object_t* L_17 = V_3;
		NullCheck(L_17);
		Object_t* L_18 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Keys_m3924_MethodInfo_var, L_17);
		Object_t* L_19 = V_3;
		NullCheck(L_19);
		Object_t* L_20 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Values_m3925_MethodInfo_var, L_19);
		StringBuilder_t353 * L_21 = ___builder;
		bool L_22 = SimpleJson_SerializeObject_m3529(NULL /*static, unused*/, L_16, L_18, L_20, L_21, /*hidden argument*/&SimpleJson_SerializeObject_m3529_MethodInfo);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		Object_t * L_23 = ___value;
		V_4 = ((Object_t *)IsInst(L_23, InitializedTypeInfo(&IEnumerable_t457_il2cpp_TypeInfo)));
		Object_t * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		Object_t * L_25 = ___jsonSerializerStrategy;
		Object_t * L_26 = V_4;
		StringBuilder_t353 * L_27 = ___builder;
		bool L_28 = SimpleJson_SerializeArray_m3530(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/&SimpleJson_SerializeArray_m3530_MethodInfo);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		Object_t * L_29 = ___value;
		bool L_30 = SimpleJson_IsNumeric_m3533(NULL /*static, unused*/, L_29, /*hidden argument*/&SimpleJson_IsNumeric_m3533_MethodInfo);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		Object_t * L_31 = ___value;
		StringBuilder_t353 * L_32 = ___builder;
		bool L_33 = SimpleJson_SerializeNumber_m3532(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/&SimpleJson_SerializeNumber_m3532_MethodInfo);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		Object_t * L_34 = ___value;
		if (!((Object_t *)IsInst(L_34, InitializedTypeInfo(&Boolean_t83_il2cpp_TypeInfo))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t353 * L_35 = ___builder;
		Object_t * L_36 = ___value;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, InitializedTypeInfo(&Boolean_t83_il2cpp_TypeInfo))))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = (String_t*) &_stringLiteral295;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = (String_t*) &_stringLiteral296;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_m3917(G_B14_1, G_B14_0, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_0100;
	}

IL_00cf:
	{
		Object_t * L_37 = ___value;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t353 * L_38 = ___builder;
		NullCheck(L_38);
		StringBuilder_Append_m3917(L_38, (String_t*) &_stringLiteral297, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_0100;
	}

IL_00e6:
	{
		Object_t * L_39 = ___jsonSerializerStrategy;
		Object_t * L_40 = ___value;
		NullCheck(L_39);
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(&IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3926_MethodInfo, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		Object_t * L_43 = ___jsonSerializerStrategy;
		Object_t * L_44 = V_5;
		StringBuilder_t353 * L_45 = ___builder;
		SimpleJson_SerializeValue_m3528(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/&SimpleJson_SerializeValue_m3528_MethodInfo);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeObject_m3529 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t353 * ___builder, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		StringBuilder_t353 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3917(L_0, (String_t*) &_stringLiteral298, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		Object_t * L_1 = ___keys;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m3927_MethodInfo, L_1);
		V_0 = L_2;
		Object_t * L_3 = ___values;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m3927_MethodInfo, L_3);
		V_1 = L_4;
		V_2 = 1;
		goto IL_008d;
	}

IL_0021:
	{
		Object_t * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3928_MethodInfo, L_5);
		V_3 = L_6;
		Object_t * L_7 = V_1;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3928_MethodInfo, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t353 * L_10 = ___builder;
		NullCheck(L_10);
		StringBuilder_Append_m3917(L_10, (String_t*) &_stringLiteral299, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
	}

IL_0042:
	{
		Object_t * L_11 = V_3;
		V_5 = ((String_t*)IsInst(L_11, (&String_t_il2cpp_TypeInfo)));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t353 * L_14 = ___builder;
		SimpleJson_SerializeString_m3531(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/&SimpleJson_SerializeString_m3531_MethodInfo);
		goto IL_006f;
	}

IL_005f:
	{
		Object_t * L_15 = ___jsonSerializerStrategy;
		Object_t * L_16 = V_4;
		StringBuilder_t353 * L_17 = ___builder;
		bool L_18 = SimpleJson_SerializeValue_m3528(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/&SimpleJson_SerializeValue_m3528_MethodInfo);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		StringBuilder_t353 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m3917(L_19, (String_t*) &_stringLiteral300, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		Object_t * L_20 = ___jsonSerializerStrategy;
		Object_t * L_21 = V_4;
		StringBuilder_t353 * L_22 = ___builder;
		bool L_23 = SimpleJson_SerializeValue_m3528(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/&SimpleJson_SerializeValue_m3528_MethodInfo);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		V_2 = 0;
	}

IL_008d:
	{
		Object_t * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t353 * L_28 = ___builder;
		NullCheck(L_28);
		StringBuilder_Append_m3917(L_28, (String_t*) &_stringLiteral134, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeArray_m3530 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t353 * ___builder, MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Object_t * V_4 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t353 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3917(L_0, (String_t*) &_stringLiteral301, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m3927_MethodInfo, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3928_MethodInfo, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t353 * L_6 = ___builder;
			NullCheck(L_6);
			StringBuilder_Append_m3917(L_6, (String_t*) &_stringLiteral299, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		}

IL_0033:
		{
			Object_t * L_7 = ___jsonSerializerStrategy;
			Object_t * L_8 = V_1;
			StringBuilder_t353 * L_9 = ___builder;
			bool L_10 = SimpleJson_SerializeValue_m3528(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/&SimpleJson_SerializeValue_m3528_MethodInfo);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x7C, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = 0;
		}

IL_0049:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_4 = ((Object_t *)IsInst(L_13, InitializedTypeInfo(&IDisposable_t127_il2cpp_TypeInfo)));
			Object_t * L_14 = V_4;
			if (L_14)
			{
				goto IL_0066;
			}
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(89)
		}

IL_0066:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_15);
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_006e:
	{
		StringBuilder_t353 * L_16 = ___builder;
		NullCheck(L_16);
		StringBuilder_Append_m3917(L_16, (String_t*) &_stringLiteral14, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeString_m3531 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t353 * ___builder, MethodInfo* method)
{
	CharU5BU5D_t268* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		StringBuilder_t353 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3917(L_0, (String_t*) &_stringLiteral201, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		String_t* L_1 = ___aString;
		NullCheck(L_1);
		CharU5BU5D_t268* L_2 = String_ToCharArray_m3910(L_1, /*hidden argument*/&String_ToCharArray_m3910_MethodInfo);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t268* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t353 * L_7 = ___builder;
		NullCheck(L_7);
		StringBuilder_Append_m3917(L_7, (String_t*) &_stringLiteral302, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_00d4;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t353 * L_9 = ___builder;
		NullCheck(L_9);
		StringBuilder_Append_m3917(L_9, (String_t*) &_stringLiteral303, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_00d4;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t353 * L_11 = ___builder;
		NullCheck(L_11);
		StringBuilder_Append_m3917(L_11, (String_t*) &_stringLiteral304, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_00d4;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t353 * L_13 = ___builder;
		NullCheck(L_13);
		StringBuilder_Append_m3917(L_13, (String_t*) &_stringLiteral305, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_00d4;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t353 * L_15 = ___builder;
		NullCheck(L_15);
		StringBuilder_Append_m3917(L_15, (String_t*) &_stringLiteral306, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_00d4;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t353 * L_17 = ___builder;
		NullCheck(L_17);
		StringBuilder_Append_m3917(L_17, (String_t*) &_stringLiteral307, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_00d4;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t353 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m3917(L_19, (String_t*) &_stringLiteral308, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t353 * L_20 = ___builder;
		uint16_t L_21 = V_2;
		NullCheck(L_20);
		StringBuilder_Append_m2148(L_20, L_21, /*hidden argument*/&StringBuilder_Append_m2148_MethodInfo);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		CharU5BU5D_t268* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t353 * L_25 = ___builder;
		NullCheck(L_25);
		StringBuilder_Append_m3917(L_25, (String_t*) &_stringLiteral201, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeNumber_m3532 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t353 * ___builder, MethodInfo* method)
{
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t763  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		Object_t * L_0 = ___number;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo))))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t353 * L_1 = ___builder;
		Object_t * L_2 = ___number;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_3 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		String_t* L_4 = Int64_ToString_m3929((&V_0), L_3, /*hidden argument*/&Int64_ToString_m3929_MethodInfo);
		NullCheck(L_1);
		StringBuilder_Append_m3917(L_1, L_4, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_0123;
	}

IL_002a:
	{
		Object_t * L_5 = ___number;
		if (!((Object_t *)IsInst(L_5, InitializedTypeInfo(&UInt64_t762_il2cpp_TypeInfo))))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t353 * L_6 = ___builder;
		Object_t * L_7 = ___number;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, InitializedTypeInfo(&UInt64_t762_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_8 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		String_t* L_9 = UInt64_ToString_m3930((&V_1), L_8, /*hidden argument*/&UInt64_ToString_m3930_MethodInfo);
		NullCheck(L_6);
		StringBuilder_Append_m3917(L_6, L_9, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_0123;
	}

IL_0054:
	{
		Object_t * L_10 = ___number;
		if (!((Object_t *)IsInst(L_10, InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo))))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t353 * L_11 = ___builder;
		Object_t * L_12 = ___number;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_13 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		String_t* L_14 = Int32_ToString_m3931((&V_2), L_13, /*hidden argument*/&Int32_ToString_m3931_MethodInfo);
		NullCheck(L_11);
		StringBuilder_Append_m3917(L_11, L_14, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_0123;
	}

IL_007e:
	{
		Object_t * L_15 = ___number;
		if (!((Object_t *)IsInst(L_15, InitializedTypeInfo(&UInt32_t752_il2cpp_TypeInfo))))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t353 * L_16 = ___builder;
		Object_t * L_17 = ___number;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, InitializedTypeInfo(&UInt32_t752_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_18 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		String_t* L_19 = UInt32_ToString_m3932((&V_3), L_18, /*hidden argument*/&UInt32_ToString_m3932_MethodInfo);
		NullCheck(L_16);
		StringBuilder_Append_m3917(L_16, L_19, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_0123;
	}

IL_00a8:
	{
		Object_t * L_20 = ___number;
		if (!((Object_t *)IsInst(L_20, InitializedTypeInfo(&Decimal_t763_il2cpp_TypeInfo))))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t353 * L_21 = ___builder;
		Object_t * L_22 = ___number;
		V_4 = ((*(Decimal_t763 *)((Decimal_t763 *)UnBox (L_22, InitializedTypeInfo(&Decimal_t763_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_23 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		String_t* L_24 = Decimal_ToString_m3933((&V_4), L_23, /*hidden argument*/&Decimal_ToString_m3933_MethodInfo);
		NullCheck(L_21);
		StringBuilder_Append_m3917(L_21, L_24, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_0123;
	}

IL_00d3:
	{
		Object_t * L_25 = ___number;
		if (!((Object_t *)IsInst(L_25, InitializedTypeInfo(&Single_t85_il2cpp_TypeInfo))))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t353 * L_26 = ___builder;
		Object_t * L_27 = ___number;
		V_5 = ((*(float*)((float*)UnBox (L_27, InitializedTypeInfo(&Single_t85_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_28 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		String_t* L_29 = Single_ToString_m3934((&V_5), L_28, /*hidden argument*/&Single_ToString_m3934_MethodInfo);
		NullCheck(L_26);
		StringBuilder_Append_m3917(L_26, L_29, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t353 * L_30 = ___builder;
		Object_t * L_31 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_32 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		double L_33 = Convert_ToDouble_m3935(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/&Convert_ToDouble_m3935_MethodInfo);
		V_6 = L_33;
		CultureInfo_t757 * L_34 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		String_t* L_35 = Double_ToString_m3936((&V_6), (String_t*) &_stringLiteral309, L_34, /*hidden argument*/&Double_ToString_m3936_MethodInfo);
		NullCheck(L_30);
		StringBuilder_Append_m3917(L_30, L_35, /*hidden argument*/&StringBuilder_Append_m3917_MethodInfo);
	}

IL_0123:
	{
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C" bool SimpleJson_IsNumeric_m3533 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&SByte_t115_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		Object_t * L_1 = ___value;
		if (!((Object_t *)IsInst(L_1, InitializedTypeInfo(&Byte_t114_il2cpp_TypeInfo))))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		Object_t * L_2 = ___value;
		if (!((Object_t *)IsInst(L_2, InitializedTypeInfo(&Int16_t434_il2cpp_TypeInfo))))
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, InitializedTypeInfo(&UInt16_t750_il2cpp_TypeInfo))))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Object_t * L_4 = ___value;
		if (!((Object_t *)IsInst(L_4, InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo))))
		{
			goto IL_0041;
		}
	}
	{
		return 1;
	}

IL_0041:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, InitializedTypeInfo(&UInt32_t752_il2cpp_TypeInfo))))
		{
			goto IL_004e;
		}
	}
	{
		return 1;
	}

IL_004e:
	{
		Object_t * L_6 = ___value;
		if (!((Object_t *)IsInst(L_6, InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo))))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		Object_t * L_7 = ___value;
		if (!((Object_t *)IsInst(L_7, InitializedTypeInfo(&UInt64_t762_il2cpp_TypeInfo))))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		Object_t * L_8 = ___value;
		if (!((Object_t *)IsInst(L_8, InitializedTypeInfo(&Single_t85_il2cpp_TypeInfo))))
		{
			goto IL_0075;
		}
	}
	{
		return 1;
	}

IL_0075:
	{
		Object_t * L_9 = ___value;
		if (!((Object_t *)IsInst(L_9, InitializedTypeInfo(&Double_t89_il2cpp_TypeInfo))))
		{
			goto IL_0082;
		}
	}
	{
		return 1;
	}

IL_0082:
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, InitializedTypeInfo(&Decimal_t763_il2cpp_TypeInfo))))
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		return 0;
	}
}
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m3534 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		Object_t * L_0 = ((SimpleJson_t654_StaticFields*)InitializedTypeInfo(&SimpleJson_t654_il2cpp_TypeInfo)->static_fields)->____currentJsonSerializerStrategy_0;
		Object_t * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t653 * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m3535(NULL /*static, unused*/, /*hidden argument*/&SimpleJson_get_PocoJsonSerializerStrategy_m3535_MethodInfo);
		PocoJsonSerializerStrategy_t653 * L_3 = L_2;
		((SimpleJson_t654_StaticFields*)InitializedTypeInfo(&SimpleJson_t654_il2cpp_TypeInfo)->static_fields)->____currentJsonSerializerStrategy_0 = L_3;
		G_B2_0 = ((Object_t *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C" PocoJsonSerializerStrategy_t653 * SimpleJson_get_PocoJsonSerializerStrategy_m3535 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	PocoJsonSerializerStrategy_t653 * G_B2_0 = {0};
	PocoJsonSerializerStrategy_t653 * G_B1_0 = {0};
	{
		PocoJsonSerializerStrategy_t653 * L_0 = ((SimpleJson_t654_StaticFields*)InitializedTypeInfo(&SimpleJson_t654_il2cpp_TypeInfo)->static_fields)->____pocoJsonSerializerStrategy_1;
		PocoJsonSerializerStrategy_t653 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo));
		PocoJsonSerializerStrategy_t653 * L_2 = (PocoJsonSerializerStrategy_t653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo));
		PocoJsonSerializerStrategy__ctor_m3536(L_2, /*hidden argument*/&PocoJsonSerializerStrategy__ctor_m3536_MethodInfo);
		PocoJsonSerializerStrategy_t653 * L_3 = L_2;
		((SimpleJson_t654_StaticFields*)InitializedTypeInfo(&SimpleJson_t654_il2cpp_TypeInfo)->static_fields)->____pocoJsonSerializerStrategy_1 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegat.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegat.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
extern TypeInfo ConstructorDelegate_t659_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t764_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionary_2_t765_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t660_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t766_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionary_2_t767_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t661_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t768_il2cpp_TypeInfo;
extern TypeInfo ThreadSafeDictionary_2_t769_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t658_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t87_il2cpp_TypeInfo;
extern TypeInfo ReflectionUtils_t670_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t770_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t672_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t771_il2cpp_TypeInfo;
extern TypeInfo PropertyInfo_t_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t772_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo GetDelegate_t662_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t673_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t773_il2cpp_TypeInfo;
extern TypeInfo FieldInfo_t_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t774_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t775_il2cpp_TypeInfo;
extern TypeInfo DateTime_t524_il2cpp_TypeInfo;
extern TypeInfo DateTimeOffset_t776_il2cpp_TypeInfo;
extern TypeInfo Guid_t777_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t656_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t778_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t779_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t780_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtilsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegatMethodDeclarations.h"
extern Il2CppType ThreadSafeDictionaryValueFactory_2_t764_0_0_0;
extern Il2CppType ThreadSafeDictionary_2_t765_0_0_0;
extern Il2CppType ThreadSafeDictionaryValueFactory_2_t766_0_0_0;
extern Il2CppType ThreadSafeDictionary_2_t767_0_0_0;
extern Il2CppType ThreadSafeDictionaryValueFactory_2_t768_0_0_0;
extern Il2CppType ThreadSafeDictionary_2_t769_0_0_0;
extern Il2CppType TypeU5BU5D_t658_0_0_0;
extern Il2CppType Int32_t60_0_0_0;
extern Il2CppType StringU5BU5D_t87_0_0_0;
extern Il2CppType Dictionary_2_t770_0_0_0;
extern Il2CppType IEnumerable_1_t672_0_0_0;
extern Il2CppType IEnumerator_1_t771_0_0_0;
extern Il2CppType IDictionary_2_t660_0_0_0;
extern Il2CppType IEnumerable_1_t673_0_0_0;
extern Il2CppType IEnumerator_1_t773_0_0_0;
extern Il2CppType Dictionary_2_t774_0_0_0;
extern Il2CppType KeyValuePair_2_t775_0_0_0;
extern Il2CppType IDictionary_2_t661_0_0_0;
extern Il2CppType IDictionary_2_t656_0_0_0;
extern Il2CppType IEnumerable_1_t778_0_0_0;
extern Il2CppType IEnumerator_1_t779_0_0_0;
extern MethodInfo PocoJsonSerializerStrategy_ContructorDelegateFactory_m3539_MethodInfo;
extern MethodInfo ThreadSafeDictionaryValueFactory_2__ctor_m3939_MethodInfo;
extern MethodInfo ThreadSafeDictionary_2__ctor_m3940_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_GetterValueFactory_m3540_MethodInfo;
extern MethodInfo ThreadSafeDictionaryValueFactory_2__ctor_m3941_MethodInfo;
extern MethodInfo ThreadSafeDictionary_2__ctor_m3942_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_SetterValueFactory_m3541_MethodInfo;
extern MethodInfo ThreadSafeDictionaryValueFactory_2__ctor_m3943_MethodInfo;
extern MethodInfo ThreadSafeDictionary_2__ctor_m3944_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1995_MethodInfo;
extern MethodInfo Type_get_IsArray_m3945_MethodInfo;
extern MethodInfo ReflectionUtils_GetContructor_m3575_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3946_MethodInfo;
extern MethodInfo ReflectionUtils_GetProperties_m3571_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m3947_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m3948_MethodInfo;
extern MethodInfo PropertyInfo_get_CanRead_m3949_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetterMethodInfo_m3573_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m3950_MethodInfo;
extern MethodInfo MethodBase_get_IsPublic_m3951_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m3952_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3538_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethod_m3578_MethodInfo;
extern MethodInfo IDictionary_2_set_Item_m3953_MethodInfo;
extern MethodInfo ReflectionUtils_GetFields_m3572_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m3954_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m3955_MethodInfo;
extern MethodInfo FieldInfo_get_IsStatic_m3956_MethodInfo;
extern MethodInfo FieldInfo_get_IsPublic_m3957_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethod_m3579_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3958_MethodInfo;
extern MethodInfo PropertyInfo_get_CanWrite_m3959_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetterMethodInfo_m3574_MethodInfo;
extern MethodInfo PropertyInfo_get_PropertyType_m3960_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethod_m3582_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m3961_MethodInfo;
extern MethodInfo IDictionary_2_set_Item_m3962_MethodInfo;
extern MethodInfo FieldInfo_get_IsInitOnly_m3963_MethodInfo;
extern MethodInfo FieldInfo_get_FieldType_m3964_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethod_m3583_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3544_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3545_MethodInfo;
extern MethodInfo DateTime_ToUniversalTime_m3965_MethodInfo;
extern MethodInfo DateTime_ToString_m3966_MethodInfo;
extern MethodInfo DateTimeOffset_ToUniversalTime_m3967_MethodInfo;
extern MethodInfo DateTimeOffset_ToString_m3968_MethodInfo;
extern MethodInfo Guid_ToString_m3969_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy_SerializeEnum_m3543_MethodInfo;
extern MethodInfo Object_GetType_m1903_MethodInfo;
extern MethodInfo Type_get_FullName_m3970_MethodInfo;
extern MethodInfo IDictionary_2_get_Item_m3971_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m3972_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m3973_MethodInfo;
extern MethodInfo GetDelegate_Invoke_m3547_MethodInfo;
extern MethodInfo IDictionary_2_Add_m3974_MethodInfo;
extern Il2CppGenericMethod ThreadSafeDictionaryValueFactory_2__ctor_m3939_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionary_2__ctor_m3940_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionaryValueFactory_2__ctor_m3941_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionary_2__ctor_m3942_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionaryValueFactory_2__ctor_m3943_GenericMethod;
extern Il2CppGenericMethod ThreadSafeDictionary_2__ctor_m3944_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m3946_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m3947_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m3948_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_set_Item_m3953_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m3954_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m3955_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m3958_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m3961_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_set_Item_m3962_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Item_m3971_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m3972_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m3973_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m3975_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m3976_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_Add_m3974_GenericMethod;


// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t764_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t765_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t766_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t767_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t768_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t769_il2cpp_TypeInfo_var;
extern MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m3939_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionary_2__ctor_m3940_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m3941_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionary_2__ctor_m3942_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m3943_MethodInfo_var;
extern MethodInfo* ThreadSafeDictionary_2__ctor_m3944_MethodInfo_var;
extern "C" void PocoJsonSerializerStrategy__ctor_m3536 (PocoJsonSerializerStrategy_t653 * __this, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy__ctor_m3536_init;
	if (!PocoJsonSerializerStrategy__ctor_m3536_init)
	{
		ThreadSafeDictionaryValueFactory_2_t764_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionaryValueFactory_2_t764_0_0_0);
		ThreadSafeDictionary_2_t765_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionary_2_t765_0_0_0);
		ThreadSafeDictionaryValueFactory_2_t766_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionaryValueFactory_2_t766_0_0_0);
		ThreadSafeDictionary_2_t767_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionary_2_t767_0_0_0);
		ThreadSafeDictionaryValueFactory_2_t768_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionaryValueFactory_2_t768_0_0_0);
		ThreadSafeDictionary_2_t769_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ThreadSafeDictionary_2_t769_0_0_0);
		ThreadSafeDictionaryValueFactory_2__ctor_m3939_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionaryValueFactory_2__ctor_m3939_GenericMethod);
		ThreadSafeDictionary_2__ctor_m3940_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionary_2__ctor_m3940_GenericMethod);
		ThreadSafeDictionaryValueFactory_2__ctor_m3941_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionaryValueFactory_2__ctor_m3941_GenericMethod);
		ThreadSafeDictionary_2__ctor_m3942_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionary_2__ctor_m3942_GenericMethod);
		ThreadSafeDictionaryValueFactory_2__ctor_m3943_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionaryValueFactory_2__ctor_m3943_GenericMethod);
		ThreadSafeDictionary_2__ctor_m3944_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ThreadSafeDictionary_2__ctor_m3944_GenericMethod);
		PocoJsonSerializerStrategy__ctor_m3536_init = true;
	}
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		IntPtr_t L_0 = { GetVirtualMethodInfo(__this, &PocoJsonSerializerStrategy_ContructorDelegateFactory_m3539_MethodInfo) };
		ThreadSafeDictionaryValueFactory_2_t764 * L_1 = (ThreadSafeDictionaryValueFactory_2_t764 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t764_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m3939(L_1, __this, L_0, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m3939_MethodInfo_var);
		ThreadSafeDictionary_2_t765 * L_2 = (ThreadSafeDictionary_2_t765 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t765_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m3940(L_2, L_1, /*hidden argument*/ThreadSafeDictionary_2__ctor_m3940_MethodInfo_var);
		__this->___ConstructorCache_0 = L_2;
		IntPtr_t L_3 = { GetVirtualMethodInfo(__this, &PocoJsonSerializerStrategy_GetterValueFactory_m3540_MethodInfo) };
		ThreadSafeDictionaryValueFactory_2_t766 * L_4 = (ThreadSafeDictionaryValueFactory_2_t766 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t766_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m3941(L_4, __this, L_3, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m3941_MethodInfo_var);
		ThreadSafeDictionary_2_t767 * L_5 = (ThreadSafeDictionary_2_t767 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t767_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m3942(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m3942_MethodInfo_var);
		__this->___GetCache_1 = L_5;
		IntPtr_t L_6 = { GetVirtualMethodInfo(__this, &PocoJsonSerializerStrategy_SetterValueFactory_m3541_MethodInfo) };
		ThreadSafeDictionaryValueFactory_2_t768 * L_7 = (ThreadSafeDictionaryValueFactory_2_t768 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t768_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m3943(L_7, __this, L_6, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m3943_MethodInfo_var);
		ThreadSafeDictionary_2_t769 * L_8 = (ThreadSafeDictionary_2_t769 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t769_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m3944(L_8, L_7, /*hidden argument*/ThreadSafeDictionary_2__ctor_m3944_MethodInfo_var);
		__this->___SetCache_2 = L_8;
		return;
	}
}
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern MethodInfo PocoJsonSerializerStrategy__cctor_m3537_MethodInfo;
extern TypeInfo* TypeU5BU5D_t658_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern "C" void PocoJsonSerializerStrategy__cctor_m3537 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy__cctor_m3537_init;
	if (!PocoJsonSerializerStrategy__cctor_m3537_init)
	{
		TypeU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t658_0_0_0);
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		PocoJsonSerializerStrategy__cctor_m3537_init = true;
	}
	{
		((PocoJsonSerializerStrategy_t653_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3 = ((TypeU5BU5D_t658*)SZArrayNew(TypeU5BU5D_t658_il2cpp_TypeInfo_var, 0));
		TypeU5BU5D_t658* L_0 = ((TypeU5BU5D_t658*)SZArrayNew(TypeU5BU5D_t658_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Int32_t60_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		((PocoJsonSerializerStrategy_t653_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo)->static_fields)->___ArrayConstructorParameterTypes_4 = L_0;
		StringU5BU5D_t87* L_2 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, 3));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral310);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral310;
		StringU5BU5D_t87* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral311);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)(String_t*) &_stringLiteral311;
		StringU5BU5D_t87* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral312);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral312;
		((PocoJsonSerializerStrategy_t653_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo)->static_fields)->___Iso8601Format_5 = L_4;
		return;
	}
}
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3538 (PocoJsonSerializerStrategy_t653 * __this, String_t* ___clrPropertyName, MethodInfo* method)
{
	{
		String_t* L_0 = ___clrPropertyName;
		return L_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern "C" ConstructorDelegate_t659 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m3539 (PocoJsonSerializerStrategy_t653 * __this, Type_t * ___key, MethodInfo* method)
{
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	TypeU5BU5D_t658* G_B3_0 = {0};
	Type_t * G_B3_1 = {0};
	{
		Type_t * L_0 = ___key;
		Type_t * L_1 = ___key;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m3945_MethodInfo, L_1);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo));
		TypeU5BU5D_t658* L_3 = ((PocoJsonSerializerStrategy_t653_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo)->static_fields)->___ArrayConstructorParameterTypes_4;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo));
		TypeU5BU5D_t658* L_4 = ((PocoJsonSerializerStrategy_t653_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		ConstructorDelegate_t659 * L_5 = ReflectionUtils_GetContructor_m3575(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/&ReflectionUtils_GetContructor_m3575_MethodInfo);
		return L_5;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t770_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3946_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m3947_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3948_MethodInfo_var;
extern MethodInfo* IDictionary_2_set_Item_m3953_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m3954_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3955_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m3540 (PocoJsonSerializerStrategy_t653 * __this, Type_t * ___type, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy_GetterValueFactory_m3540_init;
	if (!PocoJsonSerializerStrategy_GetterValueFactory_m3540_init)
	{
		Dictionary_2_t770_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t770_0_0_0);
		Dictionary_2__ctor_m3946_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3946_GenericMethod);
		IEnumerable_1_GetEnumerator_m3947_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3947_GenericMethod);
		IEnumerator_1_get_Current_m3948_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3948_GenericMethod);
		IDictionary_2_set_Item_m3953_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_set_Item_m3953_GenericMethod);
		IEnumerable_1_GetEnumerator_m3954_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3954_GenericMethod);
		IEnumerator_1_get_Current_m3955_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3955_GenericMethod);
		PocoJsonSerializerStrategy_GetterValueFactory_m3540_init = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t770 * L_0 = (Dictionary_2_t770 *)il2cpp_codegen_object_new (Dictionary_2_t770_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3946(L_0, /*hidden argument*/Dictionary_2__ctor_m3946_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		Object_t* L_2 = ReflectionUtils_GetProperties_m3571(NULL /*static, unused*/, L_1, /*hidden argument*/&ReflectionUtils_GetProperties_m3571_MethodInfo);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3947_MethodInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(IEnumerator_1_get_Current_m3948_MethodInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&PropertyInfo_get_CanRead_m3949_MethodInfo, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m3573(NULL /*static, unused*/, L_8, /*hidden argument*/&ReflectionUtils_GetGetterMethodInfo_m3573_MethodInfo);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m3950_MethodInfo, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m3951_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3952_MethodInfo, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3538_MethodInfo, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
			GetDelegate_t662 * L_19 = ReflectionUtils_GetGetMethod_m3578(NULL /*static, unused*/, L_18, /*hidden argument*/&ReflectionUtils_GetGetMethod_m3578_MethodInfo);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t662 * >::Invoke(IDictionary_2_set_Item_m3953_MethodInfo_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			Object_t* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			Object_t* L_22 = V_2;
			if (L_22)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(115)
		}

IL_0077:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_23);
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_007e:
	{
		Type_t * L_24 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		Object_t* L_25 = ReflectionUtils_GetFields_m3572(NULL /*static, unused*/, L_24, /*hidden argument*/&ReflectionUtils_GetFields_m3572_MethodInfo);
		NullCheck(L_25);
		Object_t* L_26 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3954_MethodInfo_var, L_25);
		V_5 = L_26;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_0090:
		{
			Object_t* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(IEnumerator_1_get_Current_m3955_MethodInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m3956_MethodInfo, L_29);
			if (L_30)
			{
				goto IL_00b1;
			}
		}

IL_00a5:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsPublic_m3957_MethodInfo, L_31);
			if (L_32)
			{
				goto IL_00b6;
			}
		}

IL_00b1:
		{
			goto IL_00d0;
		}

IL_00b6:
		{
			Object_t* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3952_MethodInfo, L_34);
			String_t* L_36 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3538_MethodInfo, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
			GetDelegate_t662 * L_38 = ReflectionUtils_GetGetMethod_m3579(NULL /*static, unused*/, L_37, /*hidden argument*/&ReflectionUtils_GetGetMethod_m3579_MethodInfo);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t662 * >::Invoke(IDictionary_2_set_Item_m3953_MethodInfo_var, L_33, L_36, L_38);
		}

IL_00d0:
		{
			Object_t* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_39);
			if (L_40)
			{
				goto IL_0090;
			}
		}

IL_00dc:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		{
			Object_t* L_41 = V_5;
			if (L_41)
			{
				goto IL_00e6;
			}
		}

IL_00e5:
		{
			IL2CPP_END_FINALLY(225)
		}

IL_00e6:
		{
			Object_t* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_42);
			IL2CPP_END_FINALLY(225)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_00ee:
	{
		Object_t* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t774_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3958_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m3947_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3948_MethodInfo_var;
extern MethodInfo* KeyValuePair_2__ctor_m3961_MethodInfo_var;
extern MethodInfo* IDictionary_2_set_Item_m3962_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m3954_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3955_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m3541 (PocoJsonSerializerStrategy_t653 * __this, Type_t * ___type, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy_SetterValueFactory_m3541_init;
	if (!PocoJsonSerializerStrategy_SetterValueFactory_m3541_init)
	{
		Dictionary_2_t774_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t774_0_0_0);
		Dictionary_2__ctor_m3958_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3958_GenericMethod);
		IEnumerable_1_GetEnumerator_m3947_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3947_GenericMethod);
		IEnumerator_1_get_Current_m3948_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3948_GenericMethod);
		KeyValuePair_2__ctor_m3961_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2__ctor_m3961_GenericMethod);
		IDictionary_2_set_Item_m3962_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_set_Item_m3962_GenericMethod);
		IEnumerable_1_GetEnumerator_m3954_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3954_GenericMethod);
		IEnumerator_1_get_Current_m3955_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3955_GenericMethod);
		PocoJsonSerializerStrategy_SetterValueFactory_m3541_init = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t774 * L_0 = (Dictionary_2_t774 *)il2cpp_codegen_object_new (Dictionary_2_t774_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3958(L_0, /*hidden argument*/Dictionary_2__ctor_m3958_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		Object_t* L_2 = ReflectionUtils_GetProperties_m3571(NULL /*static, unused*/, L_1, /*hidden argument*/&ReflectionUtils_GetProperties_m3571_MethodInfo);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3947_MethodInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(IEnumerator_1_get_Current_m3948_MethodInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&PropertyInfo_get_CanWrite_m3959_MethodInfo, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_m3574(NULL /*static, unused*/, L_8, /*hidden argument*/&ReflectionUtils_GetSetterMethodInfo_m3574_MethodInfo);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m3950_MethodInfo, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m3951_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3952_MethodInfo, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3538_MethodInfo, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&PropertyInfo_get_PropertyType_m3960_MethodInfo, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
			SetDelegate_t663 * L_21 = ReflectionUtils_GetSetMethod_m3582(NULL /*static, unused*/, L_20, /*hidden argument*/&ReflectionUtils_GetSetMethod_m3582_MethodInfo);
			KeyValuePair_2_t775  L_22 = {0};
			KeyValuePair_2__ctor_m3961(&L_22, L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m3961_MethodInfo_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t775  >::Invoke(IDictionary_2_set_Item_m3962_MethodInfo_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			Object_t* L_25 = V_2;
			if (L_25)
			{
				goto IL_0082;
			}
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(126)
		}

IL_0082:
		{
			Object_t* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_26);
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0089:
	{
		Type_t * L_27 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		Object_t* L_28 = ReflectionUtils_GetFields_m3572(NULL /*static, unused*/, L_27, /*hidden argument*/&ReflectionUtils_GetFields_m3572_MethodInfo);
		NullCheck(L_28);
		Object_t* L_29 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3954_MethodInfo_var, L_28);
		V_5 = L_29;
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_009b:
		{
			Object_t* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(IEnumerator_1_get_Current_m3955_MethodInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsInitOnly_m3963_MethodInfo, L_32);
			if (L_33)
			{
				goto IL_00c8;
			}
		}

IL_00b0:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m3956_MethodInfo, L_34);
			if (L_35)
			{
				goto IL_00c8;
			}
		}

IL_00bc:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsPublic_m3957_MethodInfo, L_36);
			if (L_37)
			{
				goto IL_00cd;
			}
		}

IL_00c8:
		{
			goto IL_00f3;
		}

IL_00cd:
		{
			Object_t* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3952_MethodInfo, L_39);
			String_t* L_41 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3538_MethodInfo, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&FieldInfo_get_FieldType_m3964_MethodInfo, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
			SetDelegate_t663 * L_45 = ReflectionUtils_GetSetMethod_m3583(NULL /*static, unused*/, L_44, /*hidden argument*/&ReflectionUtils_GetSetMethod_m3583_MethodInfo);
			KeyValuePair_2_t775  L_46 = {0};
			KeyValuePair_2__ctor_m3961(&L_46, L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m3961_MethodInfo_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t775  >::Invoke(IDictionary_2_set_Item_m3962_MethodInfo_var, L_38, L_41, L_46);
		}

IL_00f3:
		{
			Object_t* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_47);
			if (L_48)
			{
				goto IL_009b;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		{
			Object_t* L_49 = V_5;
			if (L_49)
			{
				goto IL_0109;
			}
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(260)
		}

IL_0109:
		{
			Object_t* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_50);
			IL2CPP_END_FINALLY(260)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0111:
	{
		Object_t* L_51 = V_0;
		return L_51;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern MethodInfo PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3542_MethodInfo;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3542 (PocoJsonSerializerStrategy_t653 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t * L_0 = ___input;
		Object_t ** L_1 = ___output;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(&PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3544_MethodInfo, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_3 = ___input;
		Object_t ** L_4 = ___output;
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(&PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3545_MethodInfo, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern "C" Object_t * PocoJsonSerializerStrategy_SerializeEnum_m3543 (PocoJsonSerializerStrategy_t653 * __this, Enum_t125 * ___p, MethodInfo* method)
{
	{
		Enum_t125 * L_0 = ___p;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_1 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		double L_2 = Convert_ToDouble_m3935(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Convert_ToDouble_m3935_MethodInfo);
		double L_3 = L_2;
		Object_t * L_4 = Box(InitializedTypeInfo(&Double_t89_il2cpp_TypeInfo), &L_3);
		return L_4;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3544 (PocoJsonSerializerStrategy_t653 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method)
{
	bool V_0 = false;
	Enum_t125 * V_1 = {0};
	DateTime_t524  V_2 = {0};
	DateTime_t524  V_3 = {0};
	DateTimeOffset_t776  V_4 = {0};
	DateTimeOffset_t776  V_5 = {0};
	Guid_t777  V_6 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___input;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&DateTime_t524_il2cpp_TypeInfo))))
		{
			goto IL_0036;
		}
	}
	{
		Object_t ** L_1 = ___output;
		Object_t * L_2 = ___input;
		V_2 = ((*(DateTime_t524 *)((DateTime_t524 *)UnBox (L_2, InitializedTypeInfo(&DateTime_t524_il2cpp_TypeInfo)))));
		DateTime_t524  L_3 = DateTime_ToUniversalTime_m3965((&V_2), /*hidden argument*/&DateTime_ToUniversalTime_m3965_MethodInfo);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo));
		StringU5BU5D_t87* L_4 = ((PocoJsonSerializerStrategy_t653_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo)->static_fields)->___Iso8601Format_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_6 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		String_t* L_7 = DateTime_ToString_m3966((&V_3), (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), L_6, /*hidden argument*/&DateTime_ToString_m3966_MethodInfo);
		*((Object_t **)(L_1)) = (Object_t *)L_7;
		goto IL_00ca;
	}

IL_0036:
	{
		Object_t * L_8 = ___input;
		if (!((Object_t *)IsInst(L_8, InitializedTypeInfo(&DateTimeOffset_t776_il2cpp_TypeInfo))))
		{
			goto IL_006c;
		}
	}
	{
		Object_t ** L_9 = ___output;
		Object_t * L_10 = ___input;
		V_4 = ((*(DateTimeOffset_t776 *)((DateTimeOffset_t776 *)UnBox (L_10, InitializedTypeInfo(&DateTimeOffset_t776_il2cpp_TypeInfo)))));
		DateTimeOffset_t776  L_11 = DateTimeOffset_ToUniversalTime_m3967((&V_4), /*hidden argument*/&DateTimeOffset_ToUniversalTime_m3967_MethodInfo);
		V_5 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo));
		StringU5BU5D_t87* L_12 = ((PocoJsonSerializerStrategy_t653_StaticFields*)InitializedTypeInfo(&PocoJsonSerializerStrategy_t653_il2cpp_TypeInfo)->static_fields)->___Iso8601Format_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_14 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		String_t* L_15 = DateTimeOffset_ToString_m3968((&V_5), (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_13)), L_14, /*hidden argument*/&DateTimeOffset_ToString_m3968_MethodInfo);
		*((Object_t **)(L_9)) = (Object_t *)L_15;
		goto IL_00ca;
	}

IL_006c:
	{
		Object_t * L_16 = ___input;
		if (!((Object_t *)IsInst(L_16, InitializedTypeInfo(&Guid_t777_il2cpp_TypeInfo))))
		{
			goto IL_0092;
		}
	}
	{
		Object_t ** L_17 = ___output;
		Object_t * L_18 = ___input;
		V_6 = ((*(Guid_t777 *)((Guid_t777 *)UnBox (L_18, InitializedTypeInfo(&Guid_t777_il2cpp_TypeInfo)))));
		String_t* L_19 = Guid_ToString_m3969((&V_6), (String_t*) &_stringLiteral313, /*hidden argument*/&Guid_ToString_m3969_MethodInfo);
		*((Object_t **)(L_17)) = (Object_t *)L_19;
		goto IL_00ca;
	}

IL_0092:
	{
		Object_t * L_20 = ___input;
		if (!((Uri_t26 *)IsInst(L_20, InitializedTypeInfo(&Uri_t26_il2cpp_TypeInfo))))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t ** L_21 = ___output;
		Object_t * L_22 = ___input;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, L_22);
		*((Object_t **)(L_21)) = (Object_t *)L_23;
		goto IL_00ca;
	}

IL_00aa:
	{
		Object_t * L_24 = ___input;
		V_1 = ((Enum_t125 *)IsInst(L_24, InitializedTypeInfo(&Enum_t125_il2cpp_TypeInfo)));
		Enum_t125 * L_25 = V_1;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		Object_t ** L_26 = ___output;
		Enum_t125 * L_27 = V_1;
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Enum_t125 * >::Invoke(&PocoJsonSerializerStrategy_SerializeEnum_m3543_MethodInfo, __this, L_27);
		*((Object_t **)(L_26)) = (Object_t *)L_28;
		goto IL_00ca;
	}

IL_00c5:
	{
		V_0 = 0;
		Object_t ** L_29 = ___output;
		*((Object_t **)(L_29)) = (Object_t *)NULL;
	}

IL_00ca:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern MethodInfo* IDictionary_2_get_Item_m3971_MethodInfo_var;
extern MethodInfo* IEnumerable_1_GetEnumerator_m3972_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3973_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m3975_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Key_m3976_MethodInfo_var;
extern MethodInfo* IDictionary_2_Add_m3974_MethodInfo_var;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3545 (PocoJsonSerializerStrategy_t653 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method)
{
	static bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3545_init;
	if (!PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3545_init)
	{
		IDictionary_2_get_Item_m3971_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Item_m3971_GenericMethod);
		IEnumerable_1_GetEnumerator_m3972_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3972_GenericMethod);
		IEnumerator_1_get_Current_m3973_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3973_GenericMethod);
		KeyValuePair_2_get_Value_m3975_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m3975_GenericMethod);
		KeyValuePair_2_get_Key_m3976_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m3976_GenericMethod);
		IDictionary_2_Add_m3974_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_Add_m3974_GenericMethod);
		PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3545_init = true;
	}
	Type_t * V_0 = {0};
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	KeyValuePair_2_t780  V_3 = {0};
	Object_t* V_4 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral314, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t ** L_2 = ___output;
		*((Object_t **)(L_2)) = (Object_t *)NULL;
		Object_t * L_3 = ___input;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1903(L_3, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		JsonObject_t646 * L_7 = (JsonObject_t646 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JsonObject_t646_il2cpp_TypeInfo));
		JsonObject__ctor_m3497(L_7, /*hidden argument*/&JsonObject__ctor_m3497_MethodInfo);
		V_1 = L_7;
		Object_t* L_8 = (__this->___GetCache_1);
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		Object_t* L_10 = (Object_t*)InterfaceFuncInvoker1< Object_t*, Type_t * >::Invoke(IDictionary_2_get_Item_m3971_MethodInfo_var, L_8, L_9);
		V_2 = L_10;
		Object_t* L_11 = V_2;
		NullCheck(L_11);
		Object_t* L_12 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3972_MethodInfo_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			Object_t* L_13 = V_4;
			NullCheck(L_13);
			KeyValuePair_2_t780  L_14 = (KeyValuePair_2_t780 )InterfaceFuncInvoker0< KeyValuePair_2_t780  >::Invoke(IEnumerator_1_get_Current_m3973_MethodInfo_var, L_13);
			V_3 = L_14;
			GetDelegate_t662 * L_15 = KeyValuePair_2_get_Value_m3975((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3975_MethodInfo_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			Object_t* L_16 = V_1;
			String_t* L_17 = KeyValuePair_2_get_Key_m3976((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m3976_MethodInfo_var);
			String_t* L_18 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3538_MethodInfo, __this, L_17);
			GetDelegate_t662 * L_19 = KeyValuePair_2_get_Value_m3975((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3975_MethodInfo_var);
			Object_t * L_20 = ___input;
			NullCheck(L_19);
			Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&GetDelegate_Invoke_m3547_MethodInfo, L_19, L_20);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(IDictionary_2_Add_m3974_MethodInfo_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			Object_t* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_24 = V_4;
			if (L_24)
			{
				goto IL_0092;
			}
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0092:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_25);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_009a:
	{
		Object_t ** L_26 = ___output;
		Object_t* L_27 = V_1;
		*((Object_t **)(L_26)) = (Object_t *)L_27;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo GetDelegate__ctor_m3546_MethodInfo;
extern "C" void GetDelegate__ctor_m3546 (GetDelegate_t662 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" Object_t * GetDelegate_Invoke_m3547 (GetDelegate_t662 * __this, Object_t * ___source, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetDelegate_Invoke_m3547((GetDelegate_t662 *)__this->___prev_9,___source, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___source, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetDelegate_t662(Il2CppObject* delegate, Object_t * ___source)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern MethodInfo GetDelegate_BeginInvoke_m3548_MethodInfo;
extern "C" Object_t * GetDelegate_BeginInvoke_m3548 (GetDelegate_t662 * __this, Object_t * ___source, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo GetDelegate_EndInvoke_m3549_MethodInfo;
extern "C" Object_t * GetDelegate_EndInvoke_m3549 (GetDelegate_t662 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SetDelegate_t663_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegatMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo SetDelegate__ctor_m3550_MethodInfo;
extern "C" void SetDelegate__ctor_m3550 (SetDelegate_t663 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern MethodInfo SetDelegate_Invoke_m3551_MethodInfo;
extern "C" void SetDelegate_Invoke_m3551 (SetDelegate_t663 * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SetDelegate_Invoke_m3551((SetDelegate_t663 *)__this->___prev_9,___source, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t663(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern MethodInfo SetDelegate_BeginInvoke_m3552_MethodInfo;
extern "C" Object_t * SetDelegate_BeginInvoke_m3552 (SetDelegate_t663 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo SetDelegate_EndInvoke_m3553_MethodInfo;
extern "C" void SetDelegate_EndInvoke_m3553 (SetDelegate_t663 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ConstructoMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo ConstructorDelegate__ctor_m3554_MethodInfo;
extern "C" void ConstructorDelegate__ctor_m3554 (ConstructorDelegate_t659 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern MethodInfo ConstructorDelegate_Invoke_m3555_MethodInfo;
extern "C" Object_t * ConstructorDelegate_Invoke_m3555 (ConstructorDelegate_t659 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ConstructorDelegate_Invoke_m3555((ConstructorDelegate_t659 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_ConstructorDelegate_t659(Il2CppObject* delegate, ObjectU5BU5D_t76* ___args)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)(Object_t **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	Object_t ** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_array<Object_t *>((Il2CppCodeGenArray*)___args);

	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func(____args_marshaled);
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter '___args' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern MethodInfo ConstructorDelegate_BeginInvoke_m3556_MethodInfo;
extern "C" Object_t * ConstructorDelegate_BeginInvoke_m3556 (ConstructorDelegate_t659 * __this, ObjectU5BU5D_t76* ___args, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo ConstructorDelegate_EndInvoke_m3557_MethodInfo;
extern "C" Object_t * ConstructorDelegate_EndInvoke_m3557 (ConstructorDelegate_t659 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetCons.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_t665_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetConsMethodDeclarations.h"

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
extern MethodInfo ConstructorInfo_Invoke_m3977_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::.ctor()
extern MethodInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3558_MethodInfo;
extern "C" void U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3558 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t665 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::<>m__0(System.Object[])
extern MethodInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3559_MethodInfo;
extern "C" Object_t * U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3559 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t665 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method)
{
	{
		ConstructorInfo_t664 * L_0 = (__this->___constructorInfo_0);
		ObjectU5BU5D_t76* L_1 = ___args;
		NullCheck(L_0);
		Object_t * L_2 = ConstructorInfo_Invoke_m3977(L_0, L_1, /*hidden argument*/&ConstructorInfo_Invoke_m3977_MethodInfo);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t666_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetMMethodDeclarations.h"

// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils.h"
extern MethodInfo MethodBase_Invoke_m3978_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3560_MethodInfo;
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3560 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t666 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__1(System.Object)
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3561_MethodInfo;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3561 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t666 * __this, Object_t * ___source, MethodInfo* method)
{
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		ObjectU5BU5D_t76* L_2 = ((ReflectionUtils_t670_StaticFields*)InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo)->static_fields)->___EmptyObjects_0;
		NullCheck(L_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t76* >::Invoke(&MethodBase_Invoke_m3978_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t667_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0MethodDeclarations.h"

extern MethodInfo FieldInfo_GetValue_m3979_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::.ctor()
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3562_MethodInfo;
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3562 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t667 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::<>m__2(System.Object)
extern MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3563_MethodInfo;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3563 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t667 * __this, Object_t * ___source, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&FieldInfo_GetValue_m3979_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t668_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetMMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3564_MethodInfo;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3564 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t668 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__3(System.Object,System.Object)
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3565_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3565 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t668 * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method)
{
	static bool U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3565_init;
	if (!U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3565_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3565_init = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		ObjectU5BU5D_t76* L_2 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 1));
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		NullCheck(L_0);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t76* >::Invoke(&MethodBase_Invoke_m3978_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t669_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0MethodDeclarations.h"

extern MethodInfo FieldInfo_SetValue_m3980_MethodInfo;


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::.ctor()
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3566_MethodInfo;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3566 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t669 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::<>m__4(System.Object,System.Object)
extern MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3567_MethodInfo;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3567 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t669 * __this, Object_t * ___source, Object_t * ___value, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&FieldInfo_SetValue_m3980_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
extern TypeInfo ConstructorInfoU5BU5D_t781_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfo_t664_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t671_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t782_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t783_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t784_il2cpp_TypeInfo;
extern TypeInfo PropertyInfoU5BU5D_t785_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t786_il2cpp_TypeInfo;
extern TypeInfo FieldInfoU5BU5D_t787_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
extern Il2CppType IEnumerable_1_t671_0_0_0;
extern Il2CppType IEnumerator_1_t782_0_0_0;
extern MethodInfo Type_GetConstructors_m3981_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructors_m3569_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m3982_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m3983_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m3984_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m3985_MethodInfo;
extern MethodInfo Type_GetProperties_m3986_MethodInfo;
extern MethodInfo Type_GetFields_m3987_MethodInfo;
extern MethodInfo PropertyInfo_GetGetMethod_m3988_MethodInfo;
extern MethodInfo PropertyInfo_GetSetMethod_m3989_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructorByReflection_m3577_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructorInfo_m3570_MethodInfo;
extern MethodInfo ReflectionUtils_GetConstructorByReflection_m3576_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethodByReflection_m3580_MethodInfo;
extern MethodInfo ReflectionUtils_GetGetMethodByReflection_m3581_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethodByReflection_m3584_MethodInfo;
extern MethodInfo ReflectionUtils_GetSetMethodByReflection_m3585_MethodInfo;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m3982_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m3983_GenericMethod;


// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern MethodInfo ReflectionUtils__cctor_m3568_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void ReflectionUtils__cctor_m3568 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ReflectionUtils__cctor_m3568_init;
	if (!ReflectionUtils__cctor_m3568_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		ReflectionUtils__cctor_m3568_init = true;
	}
	{
		((ReflectionUtils_t670_StaticFields*)InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo)->static_fields)->___EmptyObjects_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m3569 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t781* L_1 = (ConstructorInfoU5BU5D_t781*)VirtFuncInvoker0< ConstructorInfoU5BU5D_t781* >::Invoke(&Type_GetConstructors_m3981_MethodInfo, L_0);
		return (Object_t*)L_1;
	}
}
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern MethodInfo* IEnumerable_1_GetEnumerator_m3982_MethodInfo_var;
extern MethodInfo* IEnumerator_1_get_Current_m3983_MethodInfo_var;
extern "C" ConstructorInfo_t664 * ReflectionUtils_GetConstructorInfo_m3570 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t658* ___argsType, MethodInfo* method)
{
	static bool ReflectionUtils_GetConstructorInfo_m3570_init;
	if (!ReflectionUtils_GetConstructorInfo_m3570_init)
	{
		IEnumerable_1_GetEnumerator_m3982_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerable_1_GetEnumerator_m3982_GenericMethod);
		IEnumerator_1_get_Current_m3983_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m3983_GenericMethod);
		ReflectionUtils_GetConstructorInfo_m3570_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t664 * V_3 = {0};
	Object_t* V_4 = {0};
	ParameterInfoU5BU5D_t783* V_5 = {0};
	ParameterInfo_t784 * V_6 = {0};
	ParameterInfoU5BU5D_t783* V_7 = {0};
	int32_t V_8 = 0;
	ConstructorInfo_t664 * V_9 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		Object_t* L_1 = ReflectionUtils_GetConstructors_m3569(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetConstructors_m3569_MethodInfo);
		V_0 = L_1;
		Object_t* L_2 = V_0;
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IEnumerable_1_GetEnumerator_m3982_MethodInfo_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			Object_t* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t664 * L_5 = (ConstructorInfo_t664 *)InterfaceFuncInvoker0< ConstructorInfo_t664 * >::Invoke(IEnumerator_1_get_Current_m3983_MethodInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t664 * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t783* L_7 = (ParameterInfoU5BU5D_t783*)VirtFuncInvoker0< ParameterInfoU5BU5D_t783* >::Invoke(&MethodBase_GetParameters_m3984_MethodInfo, L_6);
			V_5 = L_7;
			TypeU5BU5D_t658* L_8 = ___argsType;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t783* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = 1;
			ConstructorInfo_t664 * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t783* L_11 = (ParameterInfoU5BU5D_t783*)VirtFuncInvoker0< ParameterInfoU5BU5D_t783* >::Invoke(&MethodBase_GetParameters_m3984_MethodInfo, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			ParameterInfoU5BU5D_t783* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			V_6 = (*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_12, L_14));
			ParameterInfo_t784 * L_15 = V_6;
			NullCheck(L_15);
			Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3985_MethodInfo, L_15);
			TypeU5BU5D_t658* L_17 = ___argsType;
			int32_t L_18 = V_1;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
			int32_t L_19 = L_18;
			if ((((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_17, L_19)))))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = 0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_20 = V_8;
			V_8 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_006c:
		{
			int32_t L_21 = V_8;
			ParameterInfoU5BU5D_t783* L_22 = V_7;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			ConstructorInfo_t664 * L_24 = V_3;
			V_9 = L_24;
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}

IL_0085:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_25);
			if (L_26)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			Object_t* L_27 = V_4;
			if (L_27)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_009b:
		{
			Object_t* L_28 = V_4;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_28);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_00a3:
	{
		return (ConstructorInfo_t664 *)NULL;
	}

IL_00a5:
	{
		ConstructorInfo_t664 * L_29 = V_9;
		return L_29;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m3571 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t785* L_1 = (PropertyInfoU5BU5D_t785*)VirtFuncInvoker1< PropertyInfoU5BU5D_t785*, int32_t >::Invoke(&Type_GetProperties_m3986_MethodInfo, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m3572 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t787* L_1 = (FieldInfoU5BU5D_t787*)VirtFuncInvoker1< FieldInfoU5BU5D_t787*, int32_t >::Invoke(&Type_GetFields_m3987_MethodInfo, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m3573 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&PropertyInfo_GetGetMethod_m3988_MethodInfo, L_0, 1);
		return L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m3574 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&PropertyInfo_GetSetMethod_m3989_MethodInfo, L_0, 1);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C" ConstructorDelegate_t659 * ReflectionUtils_GetContructor_m3575 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t658* ___argsType, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t658* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		ConstructorDelegate_t659 * L_2 = ReflectionUtils_GetConstructorByReflection_m3577(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&ReflectionUtils_GetConstructorByReflection_m3577_MethodInfo);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C" ConstructorDelegate_t659 * ReflectionUtils_GetConstructorByReflection_m3576 (Object_t * __this /* static, unused */, ConstructorInfo_t664 * ___constructorInfo, MethodInfo* method)
{
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t665 * V_0 = {0};
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t665 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t665 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetConstructorByReflectionU3Ec__AnonStorey1_t665_il2cpp_TypeInfo));
		U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3558(L_0, /*hidden argument*/&U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m3558_MethodInfo);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t665 * L_1 = V_0;
		ConstructorInfo_t664 * L_2 = ___constructorInfo;
		NullCheck(L_1);
		L_1->___constructorInfo_0 = L_2;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t665 * L_3 = V_0;
		IntPtr_t L_4 = { &U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m3559_MethodInfo };
		ConstructorDelegate_t659 * L_5 = (ConstructorDelegate_t659 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructorDelegate_t659_il2cpp_TypeInfo));
		ConstructorDelegate__ctor_m3554(L_5, L_3, L_4, /*hidden argument*/&ConstructorDelegate__ctor_m3554_MethodInfo);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C" ConstructorDelegate_t659 * ReflectionUtils_GetConstructorByReflection_m3577 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t658* ___argsType, MethodInfo* method)
{
	ConstructorInfo_t664 * V_0 = {0};
	ConstructorDelegate_t659 * G_B3_0 = {0};
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t658* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		ConstructorInfo_t664 * L_2 = ReflectionUtils_GetConstructorInfo_m3570(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&ReflectionUtils_GetConstructorInfo_m3570_MethodInfo);
		V_0 = L_2;
		ConstructorInfo_t664 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t659 *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		ConstructorInfo_t664 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		ConstructorDelegate_t659 * L_5 = ReflectionUtils_GetConstructorByReflection_m3576(NULL /*static, unused*/, L_4, /*hidden argument*/&ReflectionUtils_GetConstructorByReflection_m3576_MethodInfo);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t662 * ReflectionUtils_GetGetMethod_m3578 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		GetDelegate_t662 * L_1 = ReflectionUtils_GetGetMethodByReflection_m3580(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetGetMethodByReflection_m3580_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C" GetDelegate_t662 * ReflectionUtils_GetGetMethod_m3579 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		GetDelegate_t662 * L_1 = ReflectionUtils_GetGetMethodByReflection_m3581(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetGetMethodByReflection_m3581_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t662 * ReflectionUtils_GetGetMethodByReflection_m3580 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t666 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t666 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t666 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t666_il2cpp_TypeInfo));
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3560(L_0, /*hidden argument*/&U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m3560_MethodInfo);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t666 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m3573(NULL /*static, unused*/, L_2, /*hidden argument*/&ReflectionUtils_GetGetterMethodInfo_m3573_MethodInfo);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t666 * L_4 = V_0;
		IntPtr_t L_5 = { &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m3561_MethodInfo };
		GetDelegate_t662 * L_6 = (GetDelegate_t662 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GetDelegate_t662_il2cpp_TypeInfo));
		GetDelegate__ctor_m3546(L_6, L_4, L_5, /*hidden argument*/&GetDelegate__ctor_m3546_MethodInfo);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C" GetDelegate_t662 * ReflectionUtils_GetGetMethodByReflection_m3581 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t667 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t667 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t667 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t667_il2cpp_TypeInfo));
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3562(L_0, /*hidden argument*/&U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m3562_MethodInfo);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t667 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t667 * L_3 = V_0;
		IntPtr_t L_4 = { &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m3563_MethodInfo };
		GetDelegate_t662 * L_5 = (GetDelegate_t662 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GetDelegate_t662_il2cpp_TypeInfo));
		GetDelegate__ctor_m3546(L_5, L_3, L_4, /*hidden argument*/&GetDelegate__ctor_m3546_MethodInfo);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t663 * ReflectionUtils_GetSetMethod_m3582 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		SetDelegate_t663 * L_1 = ReflectionUtils_GetSetMethodByReflection_m3584(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetSetMethodByReflection_m3584_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C" SetDelegate_t663 * ReflectionUtils_GetSetMethod_m3583 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		SetDelegate_t663 * L_1 = ReflectionUtils_GetSetMethodByReflection_m3585(NULL /*static, unused*/, L_0, /*hidden argument*/&ReflectionUtils_GetSetMethodByReflection_m3585_MethodInfo);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t663 * ReflectionUtils_GetSetMethodByReflection_m3584 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method)
{
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t668 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t668 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t668 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t668_il2cpp_TypeInfo));
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3564(L_0, /*hidden argument*/&U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3564_MethodInfo);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t668 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReflectionUtils_t670_il2cpp_TypeInfo));
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_m3574(NULL /*static, unused*/, L_2, /*hidden argument*/&ReflectionUtils_GetSetterMethodInfo_m3574_MethodInfo);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t668 * L_4 = V_0;
		IntPtr_t L_5 = { &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m3565_MethodInfo };
		SetDelegate_t663 * L_6 = (SetDelegate_t663 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SetDelegate_t663_il2cpp_TypeInfo));
		SetDelegate__ctor_m3550(L_6, L_4, L_5, /*hidden argument*/&SetDelegate__ctor_m3550_MethodInfo);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C" SetDelegate_t663 * ReflectionUtils_GetSetMethodByReflection_m3585 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method)
{
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t669 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t669 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t669 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t669_il2cpp_TypeInfo));
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3566(L_0, /*hidden argument*/&U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m3566_MethodInfo);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t669 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t669 * L_3 = V_0;
		IntPtr_t L_4 = { &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m3567_MethodInfo };
		SetDelegate_t663 * L_5 = (SetDelegate_t663 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SetDelegate_t663_il2cpp_TypeInfo));
		SetDelegate__ctor_m3550(L_5, L_3, L_4, /*hidden argument*/&SetDelegate__ctor_m3550_MethodInfo);
		return L_5;
	}
}
// AOT.MonoPInvokeCallbackAttribute
#include "UnityEngine_AOT_MonoPInvokeCallbackAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoPInvokeCallbackAttribute_t138_il2cpp_TypeInfo;
// AOT.MonoPInvokeCallbackAttribute
#include "UnityEngine_AOT_MonoPInvokeCallbackAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3822_MethodInfo;


// System.Void AOT.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern MethodInfo MonoPInvokeCallbackAttribute__ctor_m653_MethodInfo;
extern "C" void MonoPInvokeCallbackAttribute__ctor_m653 (MonoPInvokeCallbackAttribute_t138 * __this, Type_t * ___type, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
