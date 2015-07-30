#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"
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
extern TypeInfo StringFreezingAttribute_t1636_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttriMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3822_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Runtime.CompilerServices.StringFreezingAttribute::.ctor()
extern MethodInfo StringFreezingAttribute__ctor_m9017_MethodInfo;
extern "C" void StringFreezingAttribute__ctor_m9017 (StringFreezingAttribute_t1636 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		return;
	}
}
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Cer_t1637_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_CerMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Consistency_t1638_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_ConsistencyMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CriticalFinalizerObject_t1639_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t75_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Object__ctor_m357_MethodInfo;
extern MethodInfo Object_Finalize_m591_MethodInfo;


// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::.ctor()
extern MethodInfo CriticalFinalizerObject__ctor_m9018_MethodInfo;
extern "C" void CriticalFinalizerObject__ctor_m9018 (CriticalFinalizerObject_t1639 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::Finalize()
extern MethodInfo CriticalFinalizerObject_Finalize_m9019_MethodInfo;
extern "C" void CriticalFinalizerObject_Finalize_m9019 (CriticalFinalizerObject_t1639 * __this, MethodInfo* method)
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
		IL2CPP_LEAVE(0x9, FINALLY_0002);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0002;
	}

FINALLY_0002:
	{ // begin finally (depth: 1)
		Object_Finalize_m591(__this, /*hidden argument*/&Object_Finalize_m591_MethodInfo);
		IL2CPP_END_FINALLY(2)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(2)
	{
		IL2CPP_JUMP_TBL(0x9, IL_0009)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0009:
	{
		return;
	}
}
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReliabilityContractAttribute_t1640_il2cpp_TypeInfo;
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityContMethodDeclarations.h"



// System.Void System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::.ctor(System.Runtime.ConstrainedExecution.Consistency,System.Runtime.ConstrainedExecution.Cer)
extern MethodInfo ReliabilityContractAttribute__ctor_m9020_MethodInfo;
extern "C" void ReliabilityContractAttribute__ctor_m9020 (ReliabilityContractAttribute_t1640 * __this, int32_t ___consistencyGuarantee, int32_t ___cer, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		int32_t L_0 = ___consistencyGuarantee;
		__this->___consistency_0 = L_0;
		int32_t L_1 = ___cer;
		__this->___cer_1 = L_1;
		return;
	}
}
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArguments.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActivationArguments_t1641_il2cpp_TypeInfo;
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArgumentsMethodDeclarations.h"



// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CallingConvention_t1642_il2cpp_TypeInfo;
// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConventionMethodDeclarations.h"



// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CharSet_t1643_il2cpp_TypeInfo;
// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSetMethodDeclarations.h"



// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttrib.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ClassInterfaceAttribute_t1644_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttribMethodDeclarations.h"

// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"


// System.Void System.Runtime.InteropServices.ClassInterfaceAttribute::.ctor(System.Runtime.InteropServices.ClassInterfaceType)
extern MethodInfo ClassInterfaceAttribute__ctor_m9021_MethodInfo;
extern "C" void ClassInterfaceAttribute__ctor_m9021 (ClassInterfaceAttribute_t1644 * __this, int32_t ___classInterfaceType, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		int32_t L_0 = ___classInterfaceType;
		__this->___ciType_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ClassInterfaceType_t1645_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ComDefaultInterfaceAttribute_t1646_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceAMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"


// System.Void System.Runtime.InteropServices.ComDefaultInterfaceAttribute::.ctor(System.Type)
extern MethodInfo ComDefaultInterfaceAttribute__ctor_m9022_MethodInfo;
extern "C" void ComDefaultInterfaceAttribute__ctor_m9022 (ComDefaultInterfaceAttribute_t1646 * __this, Type_t * ___defaultInterface, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		Type_t * L_0 = ___defaultInterface;
		__this->____type_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ComInterfaceType_t1647_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DispIdAttribute_t1648_il2cpp_TypeInfo;
// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttributeMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"


// System.Void System.Runtime.InteropServices.DispIdAttribute::.ctor(System.Int32)
extern MethodInfo DispIdAttribute__ctor_m9023_MethodInfo;
extern "C" void DispIdAttribute__ctor_m9023 (DispIdAttribute_t1648 * __this, int32_t ___dispId, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		int32_t L_0 = ___dispId;
		__this->___id_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GCHandle_t1649_il2cpp_TypeInfo;
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
extern TypeInfo InvalidOperationException_t1189_il2cpp_TypeInfo;
extern TypeInfo Int32_t60_il2cpp_TypeInfo;
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern MethodInfo GCHandle_get_IsAllocated_m9025_MethodInfo;
extern MethodInfo Locale_GetText_m7347_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5227_MethodInfo;
extern MethodInfo GCHandle_GetTarget_m9029_MethodInfo;
extern MethodInfo GCHandle_GetTargetHandle_m9030_MethodInfo;
extern MethodInfo GCHandle__ctor_m9024_MethodInfo;
extern MethodInfo GCHandle_FreeHandle_m9031_MethodInfo;
extern MethodInfo Int32_GetHashCode_m3782_MethodInfo;


// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" void GCHandle__ctor_m9024 (GCHandle_t1649 * __this, Object_t * ___value, int32_t ___type, MethodInfo* method)
{
	{
		int32_t L_0 = ___type;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___type;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_000d;
		}
	}

IL_0008:
	{
		___type = 2;
	}

IL_000d:
	{
		Object_t * L_2 = ___value;
		int32_t L_3 = ___type;
		int32_t L_4 = GCHandle_GetTargetHandle_m9030(NULL /*static, unused*/, L_2, 0, L_3, /*hidden argument*/&GCHandle_GetTargetHandle_m9030_MethodInfo);
		__this->___handle_0 = L_4;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" bool GCHandle_get_IsAllocated_m9025 (GCHandle_t1649 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern MethodInfo GCHandle_get_Target_m9026_MethodInfo;
extern "C" Object_t * GCHandle_get_Target_m9026 (GCHandle_t1649 * __this, MethodInfo* method)
{
	{
		bool L_0 = GCHandle_get_IsAllocated_m9025(__this, /*hidden argument*/&GCHandle_get_IsAllocated_m9025_MethodInfo);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1750, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		InvalidOperationException_t1189 * L_2 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_2, L_1, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = (__this->___handle_0);
		Object_t * L_4 = GCHandle_GetTarget_m9029(NULL /*static, unused*/, L_3, /*hidden argument*/&GCHandle_GetTarget_m9029_MethodInfo);
		return L_4;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern MethodInfo GCHandle_Alloc_m9027_MethodInfo;
extern "C" GCHandle_t1649  GCHandle_Alloc_m9027 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___type, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = ___type;
		GCHandle_t1649  L_2 = {0};
		GCHandle__ctor_m9024(&L_2, L_0, L_1, /*hidden argument*/&GCHandle__ctor_m9024_MethodInfo);
		return L_2;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern MethodInfo GCHandle_Free_m9028_MethodInfo;
extern "C" void GCHandle_Free_m9028 (GCHandle_t1649 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		GCHandle_FreeHandle_m9031(NULL /*static, unused*/, L_0, /*hidden argument*/&GCHandle_FreeHandle_m9031_MethodInfo);
		__this->___handle_0 = 0;
		return;
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
extern "C" Object_t * GCHandle_GetTarget_m9029 (Object_t * __this /* static, unused */, int32_t ___handle, MethodInfo* method)
{
	typedef Object_t * (*GCHandle_GetTarget_m9029_ftn) (int32_t);
	static GCHandle_GetTarget_m9029_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_GetTarget_m9029_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)");
	return _il2cpp_icall_func(___handle);
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C" int32_t GCHandle_GetTargetHandle_m9030 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, MethodInfo* method)
{
	typedef int32_t (*GCHandle_GetTargetHandle_m9030_ftn) (Object_t *, int32_t, int32_t);
	static GCHandle_GetTargetHandle_m9030_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_GetTargetHandle_m9030_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)");
	return _il2cpp_icall_func(___obj, ___handle, ___type);
}
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C" void GCHandle_FreeHandle_m9031 (Object_t * __this /* static, unused */, int32_t ___handle, MethodInfo* method)
{
	typedef void (*GCHandle_FreeHandle_m9031_ftn) (int32_t);
	static GCHandle_FreeHandle_m9031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_FreeHandle_m9031_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)");
	_il2cpp_icall_func(___handle);
}
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern MethodInfo GCHandle_Equals_m9032_MethodInfo;
extern "C" bool GCHandle_Equals_m9032 (GCHandle_t1649 * __this, Object_t * ___o, MethodInfo* method)
{
	GCHandle_t1649  V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___o;
		if (((Object_t *)IsInst(L_1, InitializedTypeInfo(&GCHandle_t1649_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_2 = (__this->___handle_0);
		Object_t * L_3 = ___o;
		V_0 = ((*(GCHandle_t1649 *)((GCHandle_t1649 *)UnBox (L_3, InitializedTypeInfo(&GCHandle_t1649_il2cpp_TypeInfo)))));
		int32_t L_4 = ((&V_0)->___handle_0);
		return ((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
extern MethodInfo GCHandle_GetHashCode_m9033_MethodInfo;
extern "C" int32_t GCHandle_GetHashCode_m9033 (GCHandle_t1649 * __this, MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___handle_0);
		int32_t L_1 = Int32_GetHashCode_m3782(L_0, /*hidden argument*/&Int32_GetHashCode_m3782_MethodInfo);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GCHandleType_t1650_il2cpp_TypeInfo;
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleTypeMethodDeclarations.h"



// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InterfaceTypeAttribute_t1651_il2cpp_TypeInfo;
// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribuMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.InterfaceTypeAttribute::.ctor(System.Runtime.InteropServices.ComInterfaceType)
extern MethodInfo InterfaceTypeAttribute__ctor_m9034_MethodInfo;
extern "C" void InterfaceTypeAttribute__ctor_m9034 (InterfaceTypeAttribute_t1651 * __this, int32_t ___interfaceType, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		int32_t L_0 = ___interfaceType;
		__this->___intType_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_Marshal.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Marshal_t1652_il2cpp_TypeInfo;
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"

// System.OperatingSystem
#include "mscorlib_System_OperatingSystem.h"
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"
extern MethodInfo Environment_get_OSVersion_m10519_MethodInfo;
extern MethodInfo OperatingSystem_get_Platform_m10767_MethodInfo;
extern MethodInfo Marshal_copy_from_unmanaged_m9036_MethodInfo;


// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern MethodInfo Marshal__cctor_m9035_MethodInfo;
extern "C" void Marshal__cctor_m9035 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		((Marshal_t1652_StaticFields*)InitializedTypeInfo(&Marshal_t1652_il2cpp_TypeInfo)->static_fields)->___SystemMaxDBCSCharSize_0 = 2;
		OperatingSystem_t1892 * L_0 = Environment_get_OSVersion_m10519(NULL /*static, unused*/, /*hidden argument*/&Environment_get_OSVersion_m10519_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = OperatingSystem_get_Platform_m10767(L_0, /*hidden argument*/&OperatingSystem_get_Platform_m10767_MethodInfo);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		((Marshal_t1652_StaticFields*)InitializedTypeInfo(&Marshal_t1652_il2cpp_TypeInfo)->static_fields)->___SystemDefaultCharSize_1 = G_B3_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C" void Marshal_copy_from_unmanaged_m9036 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, MethodInfo* method)
{
	typedef void (*Marshal_copy_from_unmanaged_m9036_ftn) (IntPtr_t, int32_t, Array_t *, int32_t);
	static Marshal_copy_from_unmanaged_m9036_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Marshal_copy_from_unmanaged_m9036_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)");
	_il2cpp_icall_func(___source, ___startIndex, ___destination, ___length);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern MethodInfo Marshal_Copy_m9037_MethodInfo;
extern "C" void Marshal_Copy_m9037 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t268* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		CharU5BU5D_t268* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Marshal_t1652_il2cpp_TypeInfo));
		Marshal_copy_from_unmanaged_m9036(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Marshal_copy_from_unmanaged_m9036_MethodInfo);
		return;
	}
}
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExce.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MarshalDirectiveException_t1653_il2cpp_TypeInfo;
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExceMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo SystemException__ctor_m5414_MethodInfo;
extern MethodInfo Exception_set_HResult_m4020_MethodInfo;
extern MethodInfo SystemException__ctor_m10799_MethodInfo;


// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor()
extern MethodInfo MarshalDirectiveException__ctor_m9038_MethodInfo;
extern "C" void MarshalDirectiveException__ctor_m9038 (MarshalDirectiveException_t1653 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1751, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		SystemException__ctor_m5414(__this, L_0, /*hidden argument*/&SystemException__ctor_m5414_MethodInfo);
		Exception_set_HResult_m4020(__this, ((int32_t)-2146233035), /*hidden argument*/&Exception_set_HResult_m4020_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MarshalDirectiveException__ctor_m9039_MethodInfo;
extern "C" void MarshalDirectiveException__ctor_m9039 (MarshalDirectiveException_t1653 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t708 * L_0 = ___info;
		StreamingContext_t709  L_1 = ___context;
		SystemException__ctor_m10799(__this, L_0, L_1, /*hidden argument*/&SystemException__ctor_m10799_MethodInfo);
		return;
	}
}
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PreserveSigAttribute_t1654_il2cpp_TypeInfo;
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.PreserveSigAttribute::.ctor()
extern MethodInfo PreserveSigAttribute__ctor_m9040_MethodInfo;
extern "C" void PreserveSigAttribute__ctor_m9040 (PreserveSigAttribute_t1654 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		return;
	}
}
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SafeHandle_t1430_il2cpp_TypeInfo;
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1375_il2cpp_TypeInfo;
extern TypeInfo Boolean_t83_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
extern MethodInfo Object_GetType_m1903_MethodInfo;
extern MethodInfo Type_get_FullName_m3970_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m6420_MethodInfo;
extern MethodInfo Interlocked_CompareExchange_m10065_MethodInfo;
extern MethodInfo SafeHandle_get_IsInvalid_m11000_MethodInfo;
extern MethodInfo SafeHandle_ReleaseHandle_m11001_MethodInfo;
extern MethodInfo SafeHandle_Dispose_m9047_MethodInfo;
extern MethodInfo GC_SuppressFinalize_m6404_MethodInfo;
extern MethodInfo SafeHandle_Close_m9042_MethodInfo;


// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern MethodInfo SafeHandle__ctor_m9041_MethodInfo;
extern "C" void SafeHandle__ctor_m9041 (SafeHandle_t1430 * __this, IntPtr_t ___invalidHandleValue, bool ___ownsHandle, MethodInfo* method)
{
	{
		CriticalFinalizerObject__ctor_m9018(__this, /*hidden argument*/&CriticalFinalizerObject__ctor_m9018_MethodInfo);
		IntPtr_t L_0 = ___invalidHandleValue;
		__this->___invalid_handle_value_1 = L_0;
		bool L_1 = ___ownsHandle;
		__this->___owns_handle_3 = L_1;
		__this->___refcount_2 = 1;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern "C" void SafeHandle_Close_m9042 (SafeHandle_t1430 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1903(__this, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_1);
		ObjectDisposedException_t1375 * L_3 = (ObjectDisposedException_t1375 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1375_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m6420(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m6420_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m10065(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/&Interlocked_CompareExchange_m10065_MethodInfo);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&SafeHandle_get_IsInvalid_m11000_MethodInfo, __this);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&SafeHandle_ReleaseHandle_m11001_MethodInfo, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
		__this->___refcount_2 = (-1);
	}

IL_0061:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern MethodInfo SafeHandle_DangerousAddRef_m9043_MethodInfo;
extern "C" void SafeHandle_DangerousAddRef_m9043 (SafeHandle_t1430 * __this, bool* ___success, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1903(__this, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_1);
		ObjectDisposedException_t1375 * L_3 = (ObjectDisposedException_t1375 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1375_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m6420(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m6420_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Type_t * L_7 = Object_GetType_m1903(__this, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_7);
		ObjectDisposedException_t1375 * L_9 = (ObjectDisposedException_t1375 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1375_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m6420(L_9, L_8, /*hidden argument*/&ObjectDisposedException__ctor_m6420_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t* L_10 = &(__this->___refcount_2);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = Interlocked_CompareExchange_m10065(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/&Interlocked_CompareExchange_m10065_MethodInfo);
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_001a;
		}
	}
	{
		bool* L_15 = ___success;
		*((int8_t*)(L_15)) = (int8_t)1;
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern MethodInfo SafeHandle_DangerousGetHandle_m9044_MethodInfo;
extern "C" IntPtr_t SafeHandle_DangerousGetHandle_m9044 (SafeHandle_t1430 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1903(__this, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_1);
		ObjectDisposedException_t1375 * L_3 = (ObjectDisposedException_t1375 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1375_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m6420(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m6420_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		IntPtr_t L_4 = (__this->___handle_0);
		return L_4;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern MethodInfo SafeHandle_DangerousRelease_m9045_MethodInfo;
extern "C" void SafeHandle_DangerousRelease_m9045 (SafeHandle_t1430 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1903(__this, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_1);
		ObjectDisposedException_t1375 * L_3 = (ObjectDisposedException_t1375 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1375_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m6420(L_3, L_2, /*hidden argument*/&ObjectDisposedException__ctor_m6420_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m10065(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/&Interlocked_CompareExchange_m10065_MethodInfo);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&SafeHandle_get_IsInvalid_m11000_MethodInfo, __this);
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&SafeHandle_ReleaseHandle_m11001_MethodInfo, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
	}

IL_005b:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern MethodInfo SafeHandle_Dispose_m9046_MethodInfo;
extern "C" void SafeHandle_Dispose_m9046 (SafeHandle_t1430 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&SafeHandle_Dispose_m9047_MethodInfo, __this, 1);
		GC_SuppressFinalize_m6404(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m6404_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C" void SafeHandle_Dispose_m9047 (SafeHandle_t1430 * __this, bool ___disposing, MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		SafeHandle_Close_m9042(__this, /*hidden argument*/&SafeHandle_Close_m9042_MethodInfo);
		goto IL_000b;
	}

IL_000b:
	{
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle()
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern MethodInfo SafeHandle_SetHandle_m9048_MethodInfo;
extern "C" void SafeHandle_SetHandle_m9048 (SafeHandle_t1430 * __this, IntPtr_t ___handle, MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		__this->___handle_0 = L_0;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid()
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern MethodInfo SafeHandle_Finalize_m9049_MethodInfo;
extern "C" void SafeHandle_Finalize_m9049 (SafeHandle_t1430 * __this, MethodInfo* method)
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
		{
			bool L_0 = (__this->___owns_handle_3);
			if (!L_0)
			{
				goto IL_0023;
			}
		}

IL_0008:
		{
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&SafeHandle_get_IsInvalid_m11000_MethodInfo, __this);
			if (L_1)
			{
				goto IL_0023;
			}
		}

IL_0010:
		{
			VirtFuncInvoker0< bool >::Invoke(&SafeHandle_ReleaseHandle_m11001_MethodInfo, __this);
			IntPtr_t L_2 = (__this->___invalid_handle_value_1);
			__this->___handle_0 = L_2;
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		CriticalFinalizerObject_Finalize_m9019(__this, /*hidden argument*/&CriticalFinalizerObject_Finalize_m9019_MethodInfo);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeLibImportClassAttribute_t1655_il2cpp_TypeInfo;
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAtMethodDeclarations.h"

extern MethodInfo Type_ToString_m7302_MethodInfo;


// System.Void System.Runtime.InteropServices.TypeLibImportClassAttribute::.ctor(System.Type)
extern MethodInfo TypeLibImportClassAttribute__ctor_m9050_MethodInfo;
extern "C" void TypeLibImportClassAttribute__ctor_m9050 (TypeLibImportClassAttribute_t1655 * __this, Type_t * ___importClass, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		Type_t * L_0 = ___importClass;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m7302_MethodInfo, L_0);
		__this->____importClass_0 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttrib.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeLibVersionAttribute_t1656_il2cpp_TypeInfo;
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttribMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.TypeLibVersionAttribute::.ctor(System.Int32,System.Int32)
extern MethodInfo TypeLibVersionAttribute__ctor_m9051_MethodInfo;
extern "C" void TypeLibVersionAttribute__ctor_m9051 (TypeLibVersionAttribute_t1656 * __this, int32_t ___major, int32_t ___minor, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		int32_t L_0 = ___major;
		__this->___major_0 = L_0;
		int32_t L_1 = ___minor;
		__this->___minor_1 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnmanagedType_t1657_il2cpp_TypeInfo;
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedTypeMethodDeclarations.h"



// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServic.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActivationServices_t1659_il2cpp_TypeInfo;
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeve.h"
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingException.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAc.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActi.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
extern TypeInfo ConstructionLevelActivator_t1662_il2cpp_TypeInfo;
extern TypeInfo IContextAttribute_t1959_il2cpp_TypeInfo;
extern TypeInfo RemotingException_t1724_il2cpp_TypeInfo;
extern TypeInfo UrlAttribute_t1665_il2cpp_TypeInfo;
extern TypeInfo RemotingConfiguration_t1723_il2cpp_TypeInfo;
extern TypeInfo RemotingServices_t1726_il2cpp_TypeInfo;
extern TypeInfo ConstructionCall_t1660_il2cpp_TypeInfo;
extern TypeInfo AppDomainLevelActivator_t1661_il2cpp_TypeInfo;
extern TypeInfo IActivator_t1658_il2cpp_TypeInfo;
extern TypeInfo ContextLevelActivator_t1663_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t1020_il2cpp_TypeInfo;
extern TypeInfo ICollection_t855_il2cpp_TypeInfo;
extern TypeInfo ChannelServices_t1671_il2cpp_TypeInfo;
extern TypeInfo Thread_t1678_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t31_il2cpp_TypeInfo;
extern TypeInfo Context_t1668_il2cpp_TypeInfo;
extern TypeInfo IConstructionCallMessage_t1667_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t127_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t76_il2cpp_TypeInfo;
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// Replacements.RemotingServices
#include "replacements_Replacements_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
extern MethodInfo ConstructionLevelActivator__ctor_m9057_MethodInfo;
extern MethodInfo RemotingException__ctor_m9288_MethodInfo;
extern MethodInfo UrlAttribute_get_UrlValue_m9059_MethodInfo;
extern MethodInfo RemotingServices_CreateClientProxy_m5585_MethodInfo;
extern MethodInfo RemotingConfiguration_IsRemotelyActivatedClientType_m9286_MethodInfo;
extern MethodInfo RemotingServices_CreateClientProxy_m9300_MethodInfo;
extern MethodInfo Type_get_IsContextful_m7263_MethodInfo;
extern MethodInfo RemotingServices_CreateClientProxyForContextBound_m9301_MethodInfo;
extern MethodInfo ConstructionCall__ctor_m9120_MethodInfo;
extern MethodInfo ActivationServices_get_ConstructionActivator_m9052_MethodInfo;
extern MethodInfo AppDomainLevelActivator__ctor_m9056_MethodInfo;
extern MethodInfo ConstructionCall_set_Activator_m9127_MethodInfo;
extern MethodInfo ConstructionCall_set_IsContextOk_m9123_MethodInfo;
extern MethodInfo ContextLevelActivator__ctor_m9058_MethodInfo;
extern MethodInfo ArrayList__ctor_m5240_MethodInfo;
extern MethodInfo ArrayList_AddRange_m5362_MethodInfo;
extern MethodInfo String_op_Equality_m2110_MethodInfo;
extern MethodInfo Thread_get_CurrentContext_m10077_MethodInfo;
extern MethodInfo ArrayList_GetEnumerator_m5241_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m3928_MethodInfo;
extern MethodInfo IContextAttribute_IsContextOK_m11002_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3904_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1901_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m10985_MethodInfo;
extern MethodInfo ArrayList_Add_m5251_MethodInfo;
extern MethodInfo ArrayList_ToArray_m7922_MethodInfo;
extern MethodInfo ConstructionCall_SetActivationAttributes_m9129_MethodInfo;
extern MethodInfo IContextAttribute_GetPropertiesForNewContext_m11003_MethodInfo;
extern MethodInfo String_op_Inequality_m2127_MethodInfo;


// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m9052 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Object_t * L_0 = ((ActivationServices_t1659_StaticFields*)InitializedTypeInfo(&ActivationServices_t1659_il2cpp_TypeInfo)->static_fields)->____constructionActivator_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ConstructionLevelActivator_t1662 * L_1 = (ConstructionLevelActivator_t1662 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructionLevelActivator_t1662_il2cpp_TypeInfo));
		ConstructionLevelActivator__ctor_m9057(L_1, /*hidden argument*/&ConstructionLevelActivator__ctor_m9057_MethodInfo);
		((ActivationServices_t1659_StaticFields*)InitializedTypeInfo(&ActivationServices_t1659_il2cpp_TypeInfo)->static_fields)->____constructionActivator_0 = L_1;
	}

IL_0011:
	{
		Object_t * L_2 = ((ActivationServices_t1659_StaticFields*)InitializedTypeInfo(&ActivationServices_t1659_il2cpp_TypeInfo)->static_fields)->____constructionActivator_0;
		return L_2;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern MethodInfo ActivationServices_CreateProxyFromAttributes_m9053_MethodInfo;
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m9053 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t76* ___activationAttributes, MethodInfo* method)
{
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t76* V_2 = {0};
	int32_t V_3 = 0;
	ActivatedClientTypeEntry_t1715 * V_4 = {0};
	{
		V_0 = (String_t*)NULL;
		ObjectU5BU5D_t76* L_0 = ___activationAttributes;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0037;
	}

IL_0008:
	{
		ObjectU5BU5D_t76* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3));
		Object_t * L_4 = V_1;
		if (((Object_t *)IsInst(L_4, InitializedTypeInfo(&IContextAttribute_t1959_il2cpp_TypeInfo))))
		{
			goto IL_001f;
		}
	}
	{
		RemotingException_t1724 * L_5 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
		RemotingException__ctor_m9288(L_5, (String_t*) &_stringLiteral1752, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001f:
	{
		Object_t * L_6 = V_1;
		if (!((UrlAttribute_t1665 *)IsInst(L_6, InitializedTypeInfo(&UrlAttribute_t1665_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_7 = V_1;
		NullCheck(((UrlAttribute_t1665 *)Castclass(L_7, InitializedTypeInfo(&UrlAttribute_t1665_il2cpp_TypeInfo))));
		String_t* L_8 = UrlAttribute_get_UrlValue_m9059(((UrlAttribute_t1665 *)Castclass(L_7, InitializedTypeInfo(&UrlAttribute_t1665_il2cpp_TypeInfo))), /*hidden argument*/&UrlAttribute_get_UrlValue_m9059_MethodInfo);
		V_0 = L_8;
	}

IL_0033:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_10 = V_3;
		ObjectU5BU5D_t76* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		Type_t * L_13 = ___type;
		String_t* L_14 = V_0;
		ObjectU5BU5D_t76* L_15 = ___activationAttributes;
		Object_t * L_16 = RemotingServices_CreateClientProxy_m5585(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/&RemotingServices_CreateClientProxy_m5585_MethodInfo);
		return L_16;
	}

IL_0049:
	{
		Type_t * L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo));
		ActivatedClientTypeEntry_t1715 * L_18 = RemotingConfiguration_IsRemotelyActivatedClientType_m9286(NULL /*static, unused*/, L_17, /*hidden argument*/&RemotingConfiguration_IsRemotelyActivatedClientType_m9286_MethodInfo);
		V_4 = L_18;
		ActivatedClientTypeEntry_t1715 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		ActivatedClientTypeEntry_t1715 * L_20 = V_4;
		ObjectU5BU5D_t76* L_21 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Object_t * L_22 = RemotingServices_CreateClientProxy_m9300(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&RemotingServices_CreateClientProxy_m9300_MethodInfo);
		return L_22;
	}

IL_005e:
	{
		Type_t * L_23 = ___type;
		NullCheck(L_23);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsContextful_m7263_MethodInfo, L_23);
		if (!L_24)
		{
			goto IL_006e;
		}
	}
	{
		Type_t * L_25 = ___type;
		ObjectU5BU5D_t76* L_26 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Object_t * L_27 = RemotingServices_CreateClientProxyForContextBound_m9301(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/&RemotingServices_CreateClientProxyForContextBound_m9301_MethodInfo);
		return L_27;
	}

IL_006e:
	{
		return NULL;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern MethodInfo ActivationServices_CreateConstructionCall_m9054_MethodInfo;
extern "C" ConstructionCall_t1660 * ActivationServices_CreateConstructionCall_m9054 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t76* ___activationAttributes, MethodInfo* method)
{
	ConstructionCall_t1660 * V_0 = {0};
	Object_t * V_1 = {0};
	ArrayList_t1020 * V_2 = {0};
	bool V_3 = false;
	Context_t1668 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	ObjectU5BU5D_t76* V_7 = {0};
	Object_t * V_8 = {0};
	ObjectU5BU5D_t76* V_9 = {0};
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B19_0 = 0;
	{
		Type_t * L_0 = ___type;
		ConstructionCall_t1660 * L_1 = (ConstructionCall_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructionCall_t1660_il2cpp_TypeInfo));
		ConstructionCall__ctor_m9120(L_1, L_0, /*hidden argument*/&ConstructionCall__ctor_m9120_MethodInfo);
		V_0 = L_1;
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsContextful_m7263_MethodInfo, L_2);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ConstructionCall_t1660 * L_4 = V_0;
		String_t* L_5 = ___activationUrl;
		Object_t * L_6 = ActivationServices_get_ConstructionActivator_m9052(NULL /*static, unused*/, /*hidden argument*/&ActivationServices_get_ConstructionActivator_m9052_MethodInfo);
		AppDomainLevelActivator_t1661 * L_7 = (AppDomainLevelActivator_t1661 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AppDomainLevelActivator_t1661_il2cpp_TypeInfo));
		AppDomainLevelActivator__ctor_m9056(L_7, L_5, L_6, /*hidden argument*/&AppDomainLevelActivator__ctor_m9056_MethodInfo);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(&ConstructionCall_set_Activator_m9127_MethodInfo, L_4, L_7);
		ConstructionCall_t1660 * L_8 = V_0;
		NullCheck(L_8);
		ConstructionCall_set_IsContextOk_m9123(L_8, 0, /*hidden argument*/&ConstructionCall_set_IsContextOk_m9123_MethodInfo);
		ConstructionCall_t1660 * L_9 = V_0;
		return L_9;
	}

IL_0029:
	{
		Object_t * L_10 = ActivationServices_get_ConstructionActivator_m9052(NULL /*static, unused*/, /*hidden argument*/&ActivationServices_get_ConstructionActivator_m9052_MethodInfo);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ContextLevelActivator_t1663 * L_12 = (ContextLevelActivator_t1663 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ContextLevelActivator_t1663_il2cpp_TypeInfo));
		ContextLevelActivator__ctor_m9058(L_12, L_11, /*hidden argument*/&ContextLevelActivator__ctor_m9058_MethodInfo);
		V_1 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList_t1020 * L_13 = (ArrayList_t1020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList__ctor_m5240(L_13, /*hidden argument*/&ArrayList__ctor_m5240_MethodInfo);
		V_2 = L_13;
		ObjectU5BU5D_t76* L_14 = ___activationAttributes;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		ArrayList_t1020 * L_15 = V_2;
		ObjectU5BU5D_t76* L_16 = ___activationAttributes;
		NullCheck(L_15);
		VirtActionInvoker1< Object_t * >::Invoke(&ArrayList_AddRange_m5362_MethodInfo, L_15, (Object_t *)(Object_t *)L_16);
	}

IL_0046:
	{
		String_t* L_17 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
		String_t* L_18 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_19 = String_op_Equality_m2110(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1678_il2cpp_TypeInfo));
		Context_t1668 * L_20 = Thread_get_CurrentContext_m10077(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m10077_MethodInfo);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		ArrayList_t1020 * L_22 = V_2;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m5241_MethodInfo, L_22);
		V_6 = L_23;
	}

IL_0064:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0066:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3928_MethodInfo, L_24);
			V_5 = ((Object_t *)Castclass(L_25, InitializedTypeInfo(&IContextAttribute_t1959_il2cpp_TypeInfo)));
			Object_t * L_26 = V_5;
			Context_t1668 * L_27 = V_4;
			ConstructionCall_t1660 * L_28 = V_0;
			NullCheck(L_26);
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, Context_t1668 *, Object_t * >::Invoke(&IContextAttribute_IsContextOK_m11002_MethodInfo, L_26, L_27, L_28);
			if (L_29)
			{
				goto IL_0084;
			}
		}

IL_0080:
		{
			V_3 = 0;
			goto IL_008d;
		}

IL_0084:
		{
			Object_t * L_30 = V_6;
			NullCheck(L_30);
			bool L_31 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_30);
			if (L_31)
			{
				goto IL_0066;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_32 = V_6;
			V_13 = ((Object_t *)IsInst(L_32, InitializedTypeInfo(&IDisposable_t127_il2cpp_TypeInfo)));
			Object_t * L_33 = V_13;
			if (L_33)
			{
				goto IL_009d;
			}
		}

IL_009c:
		{
			IL2CPP_END_FINALLY(143)
		}

IL_009d:
		{
			Object_t * L_34 = V_13;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_34);
			IL2CPP_END_FINALLY(143)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_00a5:
	{
		Type_t * L_35 = ___type;
		NullCheck(L_35);
		ObjectU5BU5D_t76* L_36 = (ObjectU5BU5D_t76*)VirtFuncInvoker1< ObjectU5BU5D_t76*, bool >::Invoke(&MemberInfo_GetCustomAttributes_m10985_MethodInfo, L_35, 1);
		V_7 = L_36;
		ObjectU5BU5D_t76* L_37 = V_7;
		V_9 = L_37;
		V_10 = 0;
		goto IL_00ec;
	}

IL_00b7:
	{
		ObjectU5BU5D_t76* L_38 = V_9;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		V_8 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_38, L_40));
		Object_t * L_41 = V_8;
		if (!((Object_t *)IsInst(L_41, InitializedTypeInfo(&IContextAttribute_t1959_il2cpp_TypeInfo))))
		{
			goto IL_00e6;
		}
	}
	{
		bool L_42 = V_3;
		if (!L_42)
		{
			goto IL_00db;
		}
	}
	{
		Object_t * L_43 = V_8;
		Context_t1668 * L_44 = V_4;
		ConstructionCall_t1660 * L_45 = V_0;
		NullCheck(((Object_t *)Castclass(L_43, InitializedTypeInfo(&IContextAttribute_t1959_il2cpp_TypeInfo))));
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, Context_t1668 *, Object_t * >::Invoke(&IContextAttribute_IsContextOK_m11002_MethodInfo, ((Object_t *)Castclass(L_43, InitializedTypeInfo(&IContextAttribute_t1959_il2cpp_TypeInfo))), L_44, L_45);
		G_B19_0 = ((int32_t)(L_46));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B19_0 = 0;
	}

IL_00dc:
	{
		V_3 = G_B19_0;
		ArrayList_t1020 * L_47 = V_2;
		Object_t * L_48 = V_8;
		NullCheck(L_47);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_47, L_48);
	}

IL_00e6:
	{
		int32_t L_49 = V_10;
		V_10 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_00ec:
	{
		int32_t L_50 = V_10;
		ObjectU5BU5D_t76* L_51 = V_9;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)(((Array_t *)L_51)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0144;
		}
	}
	{
		ConstructionCall_t1660 * L_53 = V_0;
		ArrayList_t1020 * L_54 = V_2;
		NullCheck(L_54);
		ObjectU5BU5D_t76* L_55 = (ObjectU5BU5D_t76*)VirtFuncInvoker0< ObjectU5BU5D_t76* >::Invoke(&ArrayList_ToArray_m7922_MethodInfo, L_54);
		NullCheck(L_53);
		ConstructionCall_SetActivationAttributes_m9129(L_53, L_55, /*hidden argument*/&ConstructionCall_SetActivationAttributes_m9129_MethodInfo);
		ArrayList_t1020 * L_56 = V_2;
		NullCheck(L_56);
		Object_t * L_57 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m5241_MethodInfo, L_56);
		V_12 = L_57;
	}

IL_010b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0123;
		}

IL_010d:
		{
			Object_t * L_58 = V_12;
			NullCheck(L_58);
			Object_t * L_59 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3928_MethodInfo, L_58);
			V_11 = ((Object_t *)Castclass(L_59, InitializedTypeInfo(&IContextAttribute_t1959_il2cpp_TypeInfo)));
			Object_t * L_60 = V_11;
			ConstructionCall_t1660 * L_61 = V_0;
			NullCheck(L_60);
			InterfaceActionInvoker1< Object_t * >::Invoke(&IContextAttribute_GetPropertiesForNewContext_m11003_MethodInfo, L_60, L_61);
		}

IL_0123:
		{
			Object_t * L_62 = V_12;
			NullCheck(L_62);
			bool L_63 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_62);
			if (L_63)
			{
				goto IL_010d;
			}
		}

IL_012c:
		{
			IL2CPP_LEAVE(0x144, FINALLY_012e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_012e;
	}

FINALLY_012e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_64 = V_12;
			V_14 = ((Object_t *)IsInst(L_64, InitializedTypeInfo(&IDisposable_t127_il2cpp_TypeInfo)));
			Object_t * L_65 = V_14;
			if (L_65)
			{
				goto IL_013c;
			}
		}

IL_013b:
		{
			IL2CPP_END_FINALLY(302)
		}

IL_013c:
		{
			Object_t * L_66 = V_14;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_66);
			IL2CPP_END_FINALLY(302)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(302)
	{
		IL2CPP_JUMP_TBL(0x144, IL_0144)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0144:
	{
		String_t* L_67 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
		String_t* L_68 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_69 = String_op_Inequality_m2127(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/&String_op_Inequality_m2127_MethodInfo);
		if (!L_69)
		{
			goto IL_0159;
		}
	}
	{
		String_t* L_70 = ___activationUrl;
		Object_t * L_71 = V_1;
		AppDomainLevelActivator_t1661 * L_72 = (AppDomainLevelActivator_t1661 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AppDomainLevelActivator_t1661_il2cpp_TypeInfo));
		AppDomainLevelActivator__ctor_m9056(L_72, L_70, L_71, /*hidden argument*/&AppDomainLevelActivator__ctor_m9056_MethodInfo);
		V_1 = L_72;
	}

IL_0159:
	{
		ConstructionCall_t1660 * L_73 = V_0;
		Object_t * L_74 = V_1;
		NullCheck(L_73);
		VirtActionInvoker1< Object_t * >::Invoke(&ConstructionCall_set_Activator_m9127_MethodInfo, L_73, L_74);
		ConstructionCall_t1660 * L_75 = V_0;
		bool L_76 = V_3;
		NullCheck(L_75);
		ConstructionCall_set_IsContextOk_m9123(L_75, L_76, /*hidden argument*/&ConstructionCall_set_IsContextOk_m9123_MethodInfo);
		ConstructionCall_t1660 * L_77 = V_0;
		return L_77;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern MethodInfo ActivationServices_AllocateUninitializedClassInstance_m9055_MethodInfo;
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m9055 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	typedef Object_t * (*ActivationServices_AllocateUninitializedClassInstance_m9055_ftn) (Type_t *);
	static ActivationServices_AllocateUninitializedClassInstance_m9055_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ActivationServices_AllocateUninitializedClassInstance_m9055_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)");
	return _il2cpp_icall_func(___type);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.AppDomainLevelActivator::.ctor(System.String,System.Runtime.Remoting.Activation.IActivator)
extern "C" void AppDomainLevelActivator__ctor_m9056 (AppDomainLevelActivator_t1661 * __this, String_t* ___activationUrl, Object_t * ___next, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		String_t* L_0 = ___activationUrl;
		__this->____activationUrl_0 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ConstructionLevelActivator::.ctor()
extern "C" void ConstructionLevelActivator__ctor_m9057 (ConstructionLevelActivator_t1662 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ContextLevelActivator::.ctor(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ContextLevelActivator__ctor_m9058 (ContextLevelActivator_t1663 * __this, Object_t * ___next, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t * L_0 = ___next;
		__this->___m_NextActivator_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RemoteActivator_t1664_il2cpp_TypeInfo;
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivatorMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo String_GetHashCode_m3786_MethodInfo;


// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C" String_t* UrlAttribute_get_UrlValue_m9059 (UrlAttribute_t1665 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
extern MethodInfo UrlAttribute_Equals_m9060_MethodInfo;
extern "C" bool UrlAttribute_Equals_m9060 (UrlAttribute_t1665 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		if (((UrlAttribute_t1665 *)IsInst(L_0, InitializedTypeInfo(&UrlAttribute_t1665_il2cpp_TypeInfo))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		Object_t * L_1 = ___o;
		NullCheck(((UrlAttribute_t1665 *)Castclass(L_1, InitializedTypeInfo(&UrlAttribute_t1665_il2cpp_TypeInfo))));
		String_t* L_2 = UrlAttribute_get_UrlValue_m9059(((UrlAttribute_t1665 *)Castclass(L_1, InitializedTypeInfo(&UrlAttribute_t1665_il2cpp_TypeInfo))), /*hidden argument*/&UrlAttribute_get_UrlValue_m9059_MethodInfo);
		String_t* L_3 = (__this->___url_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_op_Equality_m2110(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		return L_4;
	}
}
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern MethodInfo UrlAttribute_GetHashCode_m9061_MethodInfo;
extern "C" int32_t UrlAttribute_GetHashCode_m9061 (UrlAttribute_t1665 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3786_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo UrlAttribute_GetPropertiesForNewContext_m9062_MethodInfo;
extern "C" void UrlAttribute_GetPropertiesForNewContext_m9062 (UrlAttribute_t1665 * __this, Object_t * ___ctorMsg, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo UrlAttribute_IsContextOK_m9063_MethodInfo;
extern "C" bool UrlAttribute_IsContextOK_m9063 (UrlAttribute_t1665 * __this, Context_t1668 * ___ctx, Object_t * ___msg, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ChannelInfo_t1669_il2cpp_TypeInfo;
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"

extern MethodInfo ChannelServices_GetCurrentChannelInfo_m9069_MethodInfo;


// System.Void System.Runtime.Remoting.ChannelInfo::.ctor()
extern MethodInfo ChannelInfo__ctor_m9064_MethodInfo;
extern "C" void ChannelInfo__ctor_m9064 (ChannelInfo_t1669 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
		ObjectU5BU5D_t76* L_0 = ChannelServices_GetCurrentChannelInfo_m9069(NULL /*static, unused*/, /*hidden argument*/&ChannelServices_GetCurrentChannelInfo_m9069_MethodInfo);
		__this->___channelData_0 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.ChannelInfo::get_ChannelData()
extern MethodInfo ChannelInfo_get_ChannelData_m9065_MethodInfo;
extern "C" ObjectU5BU5D_t76* ChannelInfo_get_ChannelData_m9065 (ChannelInfo_t1669 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = (__this->___channelData_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanne.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo CrossContextChannel_t1670_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t87_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t754_il2cpp_TypeInfo;
extern TypeInfo ISecurableChannel_t1960_il2cpp_TypeInfo;
extern TypeInfo IChannel_t1672_il2cpp_TypeInfo;
extern TypeInfo IChannelReceiver_t1961_il2cpp_TypeInfo;
extern TypeInfo IList_t856_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t87_0_0_0;
extern MethodInfo CrossContextChannel__ctor_m9092_MethodInfo;
extern MethodInfo ChannelServices_RegisterChannel_m9068_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3902_MethodInfo;
extern MethodInfo IChannel_get_ChannelName_m11004_MethodInfo;
extern MethodInfo String_Format_m1975_MethodInfo;
extern MethodInfo ISecurableChannel_set_IsSecured_m11005_MethodInfo;
extern MethodInfo ArrayList_get_SyncRoot_m5390_MethodInfo;
extern MethodInfo Monitor_Enter_m573_MethodInfo;
extern MethodInfo ArrayList_get_Item_m5238_MethodInfo;
extern MethodInfo String_Concat_m380_MethodInfo;
extern MethodInfo IChannel_get_ChannelPriority_m11006_MethodInfo;
extern MethodInfo ArrayList_get_Count_m5236_MethodInfo;
extern MethodInfo ArrayList_Insert_m5370_MethodInfo;
extern MethodInfo IList_Contains_m10938_MethodInfo;
extern MethodInfo IChannelReceiver_StartListening_m11007_MethodInfo;
extern MethodInfo Monitor_Exit_m575_MethodInfo;
extern MethodInfo IChannelReceiver_get_ChannelData_m11008_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern MethodInfo ChannelServices__cctor_m9066_MethodInfo;
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern "C" void ChannelServices__cctor_m9066 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ChannelServices__cctor_m9066_init;
	if (!ChannelServices__cctor_m9066_init)
	{
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		ChannelServices__cctor_m9066_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList_t1020 * L_0 = (ArrayList_t1020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList__ctor_m5240(L_0, /*hidden argument*/&ArrayList__ctor_m5240_MethodInfo);
		((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0 = L_0;
		ArrayList_t1020 * L_1 = (ArrayList_t1020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList__ctor_m5240(L_1, /*hidden argument*/&ArrayList__ctor_m5240_MethodInfo);
		((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___delayedClientChannels_1 = L_1;
		CrossContextChannel_t1670 * L_2 = (CrossContextChannel_t1670 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CrossContextChannel_t1670_il2cpp_TypeInfo));
		CrossContextChannel__ctor_m9092(L_2, /*hidden argument*/&CrossContextChannel__ctor_m9092_MethodInfo);
		((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->____crossContextSink_2 = L_2;
		((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3 = (String_t*) &_stringLiteral1753;
		StringU5BU5D_t87* L_3 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1754);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0)) = (String_t*)(String_t*) &_stringLiteral1754;
		StringU5BU5D_t87* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral1755);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1)) = (String_t*)(String_t*) &_stringLiteral1755;
		((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___oldStartModeTypes_4 = (Object_t *)L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern MethodInfo ChannelServices_RegisterChannel_m9067_MethodInfo;
extern "C" void ChannelServices_RegisterChannel_m9067 (Object_t * __this /* static, unused */, Object_t * ___chnl, MethodInfo* method)
{
	{
		Object_t * L_0 = ___chnl;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
		ChannelServices_RegisterChannel_m9068(NULL /*static, unused*/, L_0, 0, /*hidden argument*/&ChannelServices_RegisterChannel_m9068_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern "C" void ChannelServices_RegisterChannel_m9068 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___chnl;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1756, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = ___ensureSecurity;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Object_t * L_3 = ___chnl;
		V_1 = ((Object_t *)IsInst(L_3, InitializedTypeInfo(&ISecurableChannel_t1960_il2cpp_TypeInfo)));
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		Object_t * L_5 = ___chnl;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m11004_MethodInfo, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = String_Format_m1975(NULL /*static, unused*/, (String_t*) &_stringLiteral1757, L_6, /*hidden argument*/&String_Format_m1975_MethodInfo);
		RemotingException_t1724 * L_8 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
		RemotingException__ctor_m9288(L_8, L_7, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0031:
	{
		Object_t * L_9 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(&ISecurableChannel_set_IsSecured_m11005_MethodInfo, L_9, 1);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
		ArrayList_t1020 * L_10 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m5390_MethodInfo, L_10);
		V_0 = L_11;
		Object_t * L_12 = V_0;
		Monitor_Enter_m573(NULL /*static, unused*/, L_12, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00bc;
		}

IL_004f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
			ArrayList_t1020 * L_13 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
			int32_t L_14 = V_3;
			NullCheck(L_13);
			Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m5238_MethodInfo, L_13, L_14);
			V_4 = ((Object_t *)Castclass(L_15, InitializedTypeInfo(&IChannel_t1672_il2cpp_TypeInfo)));
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m11004_MethodInfo, L_16);
			Object_t * L_18 = ___chnl;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m11004_MethodInfo, L_18);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			bool L_20 = String_op_Equality_m2110(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
			if (!L_20)
			{
				goto IL_00a3;
			}
		}

IL_0075:
		{
			Object_t * L_21 = ___chnl;
			NullCheck(L_21);
			String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m11004_MethodInfo, L_21);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_23 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
			bool L_24 = String_op_Inequality_m2127(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/&String_op_Inequality_m2127_MethodInfo);
			if (!L_24)
			{
				goto IL_00a3;
			}
		}

IL_0087:
		{
			Object_t * L_25 = V_4;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IChannel_get_ChannelName_m11004_MethodInfo, L_25);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_27 = String_Concat_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral1758, L_26, (String_t*) &_stringLiteral1759, /*hidden argument*/&String_Concat_m380_MethodInfo);
			RemotingException_t1724 * L_28 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
			RemotingException__ctor_m9288(L_28, L_27, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
			il2cpp_codegen_raise_exception(L_28);
		}

IL_00a3:
		{
			Object_t * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&IChannel_get_ChannelPriority_m11006_MethodInfo, L_29);
			Object_t * L_31 = ___chnl;
			NullCheck(L_31);
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&IChannel_get_ChannelPriority_m11006_MethodInfo, L_31);
			if ((((int32_t)L_30) >= ((int32_t)L_32)))
			{
				goto IL_00b8;
			}
		}

IL_00b2:
		{
			int32_t L_33 = V_2;
			if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
			{
				goto IL_00b8;
			}
		}

IL_00b6:
		{
			int32_t L_34 = V_3;
			V_2 = L_34;
		}

IL_00b8:
		{
			int32_t L_35 = V_3;
			V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
		}

IL_00bc:
		{
			int32_t L_36 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
			ArrayList_t1020 * L_37 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
			NullCheck(L_37);
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m5236_MethodInfo, L_37);
			if ((((int32_t)L_36) < ((int32_t)L_38)))
			{
				goto IL_004f;
			}
		}

IL_00c9:
		{
			int32_t L_39 = V_2;
			if ((((int32_t)L_39) == ((int32_t)(-1))))
			{
				goto IL_00db;
			}
		}

IL_00cd:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
			ArrayList_t1020 * L_40 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
			int32_t L_41 = V_2;
			Object_t * L_42 = ___chnl;
			NullCheck(L_40);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(&ArrayList_Insert_m5370_MethodInfo, L_40, L_41, L_42);
			goto IL_00e7;
		}

IL_00db:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
			ArrayList_t1020 * L_43 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
			Object_t * L_44 = ___chnl;
			NullCheck(L_43);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_43, L_44);
		}

IL_00e7:
		{
			Object_t * L_45 = ___chnl;
			V_5 = ((Object_t *)IsInst(L_45, InitializedTypeInfo(&IChannelReceiver_t1961_il2cpp_TypeInfo)));
			Object_t * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0112;
			}
		}

IL_00f3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
			Object_t * L_47 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___oldStartModeTypes_4;
			Object_t * L_48 = ___chnl;
			NullCheck(L_48);
			Type_t * L_49 = Object_GetType_m1903(L_48, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
			NullCheck(L_49);
			String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m7302_MethodInfo, L_49);
			NullCheck(L_47);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(&IList_Contains_m10938_MethodInfo, L_47, L_50);
			if (!L_51)
			{
				goto IL_0112;
			}
		}

IL_010a:
		{
			Object_t * L_52 = V_5;
			NullCheck(L_52);
			InterfaceActionInvoker1< Object_t * >::Invoke(&IChannelReceiver_StartListening_m11007_MethodInfo, L_52, NULL);
		}

IL_0112:
		{
			IL2CPP_LEAVE(0x11B, FINALLY_0114);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0114;
	}

FINALLY_0114:
	{ // begin finally (depth: 1)
		Object_t * L_53 = V_0;
		Monitor_Exit_m575(NULL /*static, unused*/, L_53, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(276)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(276)
	{
		IL2CPP_JUMP_TBL(0x11B, IL_011b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_011b:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern "C" ObjectU5BU5D_t76* ChannelServices_GetCurrentChannelInfo_m9069 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	ArrayList_t1020 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList_t1020 * L_0 = (ArrayList_t1020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList__ctor_m5240(L_0, /*hidden argument*/&ArrayList__ctor_m5240_MethodInfo);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
		ArrayList_t1020 * L_1 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m5390_MethodInfo, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m573(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
			ArrayList_t1020 * L_4 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m5241_MethodInfo, L_4);
			V_3 = L_5;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_004d;
			}

IL_0024:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3928_MethodInfo, L_6);
				V_2 = L_7;
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, InitializedTypeInfo(&IChannelReceiver_t1961_il2cpp_TypeInfo)));
				Object_t * L_9 = V_4;
				if (!L_9)
				{
					goto IL_004d;
				}
			}

IL_0037:
			{
				Object_t * L_10 = V_4;
				NullCheck(L_10);
				Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IChannelReceiver_get_ChannelData_m11008_MethodInfo, L_10);
				V_5 = L_11;
				Object_t * L_12 = V_5;
				if (!L_12)
				{
					goto IL_004d;
				}
			}

IL_0044:
			{
				ArrayList_t1020 * L_13 = V_0;
				Object_t * L_14 = V_5;
				NullCheck(L_13);
				VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_13, L_14);
			}

IL_004d:
			{
				Object_t * L_15 = V_3;
				NullCheck(L_15);
				bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_15);
				if (L_16)
				{
					goto IL_0024;
				}
			}

IL_0055:
			{
				IL2CPP_LEAVE(0x6C, FINALLY_0057);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t110 *)e.ex;
			goto FINALLY_0057;
		}

FINALLY_0057:
		{ // begin finally (depth: 2)
			{
				Object_t * L_17 = V_3;
				V_6 = ((Object_t *)IsInst(L_17, InitializedTypeInfo(&IDisposable_t127_il2cpp_TypeInfo)));
				Object_t * L_18 = V_6;
				if (L_18)
				{
					goto IL_0064;
				}
			}

IL_0063:
			{
				IL2CPP_END_FINALLY(87)
			}

IL_0064:
			{
				Object_t * L_19 = V_6;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_19);
				IL2CPP_END_FINALLY(87)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(87)
		{
			IL2CPP_JUMP_TBL(0x6C, IL_006c)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x75, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m575(NULL /*static, unused*/, L_20, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0075:
	{
		ArrayList_t1020 * L_21 = V_0;
		NullCheck(L_21);
		ObjectU5BU5D_t76* L_22 = (ObjectU5BU5D_t76*)VirtFuncInvoker0< ObjectU5BU5D_t76* >::Invoke(&ArrayList_ToArray_m7922_MethodInfo, L_21);
		return L_22;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainData.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CrossAppDomainData_t1673_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"

extern MethodInfo RemotingConfiguration_get_ProcessId_m9285_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
extern MethodInfo CrossAppDomainData__ctor_m9070_MethodInfo;
extern "C" void CrossAppDomainData__ctor_m9070 (CrossAppDomainData_t1673 * __this, int32_t ___domainId, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		int32_t L_0 = 0;
		Object_t * L_1 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_0);
		__this->____ContextID_0 = L_1;
		int32_t L_2 = ___domainId;
		__this->____DomainID_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo));
		String_t* L_3 = RemotingConfiguration_get_ProcessId_m9285(NULL /*static, unused*/, /*hidden argument*/&RemotingConfiguration_get_ProcessId_m9285_MethodInfo);
		__this->____processGuid_2 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CrossAppDomainChannel_t1674_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"

extern MethodInfo Thread_GetDomainID_m10080_MethodInfo;
extern MethodInfo CrossAppDomainChannel__ctor_m9071_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
extern "C" void CrossAppDomainChannel__ctor_m9071 (CrossAppDomainChannel_t1674 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern MethodInfo CrossAppDomainChannel__cctor_m9072_MethodInfo;
extern "C" void CrossAppDomainChannel__cctor_m9072 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo));
		Object__ctor_m357(L_0, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		((CrossAppDomainChannel_t1674_StaticFields*)InitializedTypeInfo(&CrossAppDomainChannel_t1674_il2cpp_TypeInfo)->static_fields)->___s_lock_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
extern MethodInfo CrossAppDomainChannel_RegisterCrossAppDomainChannel_m9073_MethodInfo;
extern "C" void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m9073 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Object_t * V_0 = {0};
	CrossAppDomainChannel_t1674 * V_1 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossAppDomainChannel_t1674_il2cpp_TypeInfo));
		Object_t * L_0 = ((CrossAppDomainChannel_t1674_StaticFields*)InitializedTypeInfo(&CrossAppDomainChannel_t1674_il2cpp_TypeInfo)->static_fields)->___s_lock_0;
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m573(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossAppDomainChannel_t1674_il2cpp_TypeInfo));
		CrossAppDomainChannel_t1674 * L_2 = (CrossAppDomainChannel_t1674 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CrossAppDomainChannel_t1674_il2cpp_TypeInfo));
		CrossAppDomainChannel__ctor_m9071(L_2, /*hidden argument*/&CrossAppDomainChannel__ctor_m9071_MethodInfo);
		V_1 = L_2;
		CrossAppDomainChannel_t1674 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
		ChannelServices_RegisterChannel_m9067(NULL /*static, unused*/, L_3, /*hidden argument*/&ChannelServices_RegisterChannel_m9067_MethodInfo);
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_0;
		Monitor_Exit_m575(NULL /*static, unused*/, L_4, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0021:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern MethodInfo CrossAppDomainChannel_get_ChannelName_m9074_MethodInfo;
extern "C" String_t* CrossAppDomainChannel_get_ChannelName_m9074 (CrossAppDomainChannel_t1674 * __this, MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral1760;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern MethodInfo CrossAppDomainChannel_get_ChannelPriority_m9075_MethodInfo;
extern "C" int32_t CrossAppDomainChannel_get_ChannelPriority_m9075 (CrossAppDomainChannel_t1674 * __this, MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
extern MethodInfo CrossAppDomainChannel_get_ChannelData_m9076_MethodInfo;
extern "C" Object_t * CrossAppDomainChannel_get_ChannelData_m9076 (CrossAppDomainChannel_t1674 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1678_il2cpp_TypeInfo));
		int32_t L_0 = Thread_GetDomainID_m10080(NULL /*static, unused*/, /*hidden argument*/&Thread_GetDomainID_m10080_MethodInfo);
		CrossAppDomainData_t1673 * L_1 = (CrossAppDomainData_t1673 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CrossAppDomainData_t1673_il2cpp_TypeInfo));
		CrossAppDomainData__ctor_m9070(L_1, L_0, /*hidden argument*/&CrossAppDomainData__ctor_m9070_MethodInfo);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
extern MethodInfo CrossAppDomainChannel_StartListening_m9077_MethodInfo;
extern "C" void CrossAppDomainChannel_StartListening_m9077 (CrossAppDomainChannel_t1674 * __this, Object_t * ___data, MethodInfo* method)
{
	{
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CrossAppDomainSink_t1675_il2cpp_TypeInfo;
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
extern TypeInfo Hashtable_t1007_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t786_il2cpp_TypeInfo;
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern Il2CppType CrossAppDomainSink_t1675_0_0_0;
extern MethodInfo Hashtable__ctor_m5424_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1995_MethodInfo;
extern MethodInfo Type_GetMethod_m7290_MethodInfo;


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
extern MethodInfo CrossAppDomainSink__cctor_m9078_MethodInfo;
extern "C" void CrossAppDomainSink__cctor_m9078 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable_t1007 * L_0 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_0, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		((CrossAppDomainSink_t1675_StaticFields*)InitializedTypeInfo(&CrossAppDomainSink_t1675_il2cpp_TypeInfo)->static_fields)->___s_sinks_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&CrossAppDomainSink_t1675_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_1);
		MethodInfo_t * L_2 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(&Type_GetMethod_m7290_MethodInfo, L_1, (String_t*) &_stringLiteral1761, ((int32_t)40));
		((CrossAppDomainSink_t1675_StaticFields*)InitializedTypeInfo(&CrossAppDomainSink_t1675_il2cpp_TypeInfo)->static_fields)->___processMessageMethod_1 = L_2;
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern MethodInfo CrossAppDomainSink_get_TargetDomainId_m9079_MethodInfo;
extern "C" int32_t CrossAppDomainSink_get_TargetDomainId_m9079 (CrossAppDomainSink_t1675 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____domainID_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"

extern TypeInfo IContextProperty_t1676_il2cpp_TypeInfo;
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
extern MethodInfo AppDomain_InternalGetDefaultContext_m10130_MethodInfo;
extern MethodInfo IContextProperty_get_Name_m11009_MethodInfo;
extern MethodInfo String_Concat_m1810_MethodInfo;


// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern MethodInfo Context__cctor_m9080_MethodInfo;
extern "C" void Context__cctor_m9080 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable_t1007 * L_0 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_0, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		((Context_t1668_StaticFields*)InitializedTypeInfo(&Context_t1668_il2cpp_TypeInfo)->static_fields)->___namedSlots_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern MethodInfo Context_Finalize_m9081_MethodInfo;
extern "C" void Context_Finalize_m9081 (Context_t1668 * __this, MethodInfo* method)
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
		IL2CPP_LEAVE(0x9, FINALLY_0002);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0002;
	}

FINALLY_0002:
	{ // begin finally (depth: 1)
		Object_Finalize_m591(__this, /*hidden argument*/&Object_Finalize_m591_MethodInfo);
		IL2CPP_END_FINALLY(2)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(2)
	{
		IL2CPP_JUMP_TBL(0x9, IL_0009)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0009:
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern MethodInfo Context_get_DefaultContext_m9082_MethodInfo;
extern "C" Context_t1668 * Context_get_DefaultContext_m9082 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Context_t1668 * L_0 = AppDomain_InternalGetDefaultContext_m10130(NULL /*static, unused*/, /*hidden argument*/&AppDomain_InternalGetDefaultContext_m10130_MethodInfo);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern MethodInfo Context_get_IsDefaultContext_m9083_MethodInfo;
extern "C" bool Context_get_IsDefaultContext_m9083 (Context_t1668 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern MethodInfo Context_GetProperty_m9084_MethodInfo;
extern "C" Object_t * Context_GetProperty_m9084 (Context_t1668 * __this, String_t* ___name, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t1020 * L_0 = (__this->___context_properties_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_000a:
	{
		ArrayList_t1020 * L_1 = (__this->___context_properties_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m5241_MethodInfo, L_1);
		V_1 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0018:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3928_MethodInfo, L_3);
			V_0 = ((Object_t *)Castclass(L_4, InitializedTypeInfo(&IContextProperty_t1676_il2cpp_TypeInfo)));
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IContextProperty_get_Name_m11009_MethodInfo, L_5);
			String_t* L_7 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			bool L_8 = String_op_Equality_m2110(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
			if (!L_8)
			{
				goto IL_0036;
			}
		}

IL_0032:
		{
			Object_t * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x54, FINALLY_0040);
		}

IL_0036:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_10);
			if (L_11)
			{
				goto IL_0018;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_3 = ((Object_t *)IsInst(L_12, InitializedTypeInfo(&IDisposable_t127_il2cpp_TypeInfo)));
			Object_t * L_13 = V_3;
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_004b:
		{
			Object_t * L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_14);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0052:
	{
		return (Object_t *)NULL;
	}

IL_0054:
	{
		Object_t * L_15 = V_2;
		return L_15;
	}
}
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern MethodInfo Context_ToString_m9085_MethodInfo;
extern "C" String_t* Context_ToString_m9085 (Context_t1668 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_0);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1810(NULL /*static, unused*/, (String_t*) &_stringLiteral1762, L_2, /*hidden argument*/&String_Concat_m1810_MethodInfo);
		return L_3;
	}
}
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ContextAttribute_t1666_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"

extern MethodInfo IConstructionCallMessage_get_ContextProperties_m11010_MethodInfo;
extern MethodInfo IList_Add_m5456_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_ActivationType_m11011_MethodInfo;


// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
extern MethodInfo ContextAttribute__ctor_m9086_MethodInfo;
extern "C" void ContextAttribute__ctor_m9086 (ContextAttribute_t1666 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		String_t* L_0 = ___name;
		__this->___AttributeName_0 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern MethodInfo ContextAttribute_get_Name_m9087_MethodInfo;
extern "C" String_t* ContextAttribute_get_Name_m9087 (ContextAttribute_t1666 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
extern MethodInfo ContextAttribute_Equals_m9088_MethodInfo;
extern "C" bool ContextAttribute_Equals_m9088 (ContextAttribute_t1666 * __this, Object_t * ___o, MethodInfo* method)
{
	ContextAttribute_t1666 * V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		Object_t * L_1 = ___o;
		if (((ContextAttribute_t1666 *)IsInst(L_1, InitializedTypeInfo(&ContextAttribute_t1666_il2cpp_TypeInfo))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = ___o;
		V_0 = ((ContextAttribute_t1666 *)Castclass(L_2, InitializedTypeInfo(&ContextAttribute_t1666_il2cpp_TypeInfo)));
		ContextAttribute_t1666 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = (L_3->___AttributeName_0);
		String_t* L_5 = (__this->___AttributeName_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_6 = String_op_Inequality_m2127(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&String_op_Inequality_m2127_MethodInfo);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		return 1;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern MethodInfo ContextAttribute_GetHashCode_m9089_MethodInfo;
extern "C" int32_t ContextAttribute_GetHashCode_m9089 (ContextAttribute_t1666 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		String_t* L_1 = (__this->___AttributeName_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3786_MethodInfo, L_1);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo ContextAttribute_GetPropertiesForNewContext_m9090_MethodInfo;
extern "C" void ContextAttribute_GetPropertiesForNewContext_m9090 (ContextAttribute_t1666 * __this, Object_t * ___ctorMsg, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1763, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___ctorMsg;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_ContextProperties_m11010_MethodInfo, L_2);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IList_Add_m5456_MethodInfo, L_4, __this);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo ContextAttribute_IsContextOK_m9091_MethodInfo;
extern "C" bool ContextAttribute_IsContextOK_m9091 (ContextAttribute_t1666 * __this, Context_t1668 * ___ctx, Object_t * ___ctorMsg, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1763, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Context_t1668 * L_2 = ___ctx;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral1764, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Object_t * L_4 = ___ctorMsg;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(&IConstructionCallMessage_get_ActivationType_m11011_MethodInfo, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsContextful_m7263_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		Context_t1668 * L_7 = ___ctx;
		String_t* L_8 = (__this->___AttributeName_0);
		NullCheck(L_7);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m9084_MethodInfo, L_7, L_8);
		V_0 = L_9;
		Object_t * L_10 = V_0;
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		return 0;
	}

IL_003d:
	{
		Object_t * L_11 = V_0;
		if ((((Object_t*)(ContextAttribute_t1666 *)__this) == ((Object_t*)(Object_t *)L_11)))
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}

IL_0043:
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Contexts.CrossContextChannel::.ctor()
extern "C" void CrossContextChannel__ctor_m9092 (CrossContextChannel_t1670 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SynchronizationAttribute_t1679_il2cpp_TypeInfo;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"

// System.Threading.Mutex
#include "mscorlib_System_Threading_Mutex.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo WaitHandle_t1332_il2cpp_TypeInfo;
extern TypeInfo Mutex_t1677_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t395_il2cpp_TypeInfo;
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo WaitHandle_WaitOne_m6503_MethodInfo;
extern MethodInfo SynchronizationAttribute_ReleaseLock_m9096_MethodInfo;
extern MethodInfo Thread_get_CurrentThread_m10079_MethodInfo;
extern MethodInfo Mutex_ReleaseMutex_m10069_MethodInfo;
extern MethodInfo SynchronizationAttribute__ctor_m9094_MethodInfo;
extern MethodInfo Mutex__ctor_m10066_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2307_MethodInfo;
extern MethodInfo SynchronizationAttribute_set_Locked_m9095_MethodInfo;


// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern MethodInfo SynchronizationAttribute__ctor_m9093_MethodInfo;
extern "C" void SynchronizationAttribute__ctor_m9093 (SynchronizationAttribute_t1679 * __this, MethodInfo* method)
{
	{
		SynchronizationAttribute__ctor_m9094(__this, 8, 0, /*hidden argument*/&SynchronizationAttribute__ctor_m9094_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern "C" void SynchronizationAttribute__ctor_m9094 (SynchronizationAttribute_t1679 * __this, int32_t ___flag, bool ___reEntrant, MethodInfo* method)
{
	{
		Mutex_t1677 * L_0 = (Mutex_t1677 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Mutex_t1677_il2cpp_TypeInfo));
		Mutex__ctor_m10066(L_0, 0, /*hidden argument*/&Mutex__ctor_m10066_MethodInfo);
		__this->____mutex_4 = L_0;
		ContextAttribute__ctor_m9086(__this, (String_t*) &_stringLiteral1765, /*hidden argument*/&ContextAttribute__ctor_m9086_MethodInfo);
		int32_t L_1 = ___flag;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = ___flag;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = ___flag;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_4 = ___flag;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_t395 * L_5 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_5, (String_t*) &_stringLiteral533, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0032:
	{
		bool L_6 = ___reEntrant;
		__this->____bReEntrant_1 = L_6;
		int32_t L_7 = ___flag;
		__this->____flavor_2 = L_7;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern "C" void SynchronizationAttribute_set_Locked_m9095 (SynchronizationAttribute_t1679 * __this, bool ___value, MethodInfo* method)
{
	SynchronizationAttribute_t1679 * V_0 = {0};
	SynchronizationAttribute_t1679 * V_1 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		Mutex_t1677 * L_1 = (__this->____mutex_4);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(&WaitHandle_WaitOne_m6503_MethodInfo, L_1);
		V_0 = __this;
		SynchronizationAttribute_t1679 * L_2 = V_0;
		Monitor_Enter_m573(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
			int32_t L_4 = (__this->____lockCount_3);
			if ((((int32_t)L_4) <= ((int32_t)1)))
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			SynchronizationAttribute_ReleaseLock_m9096(__this, /*hidden argument*/&SynchronizationAttribute_ReleaseLock_m9096_MethodInfo);
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1678_il2cpp_TypeInfo));
			Thread_t1678 * L_5 = Thread_get_CurrentThread_m10079(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentThread_m10079_MethodInfo);
			__this->____ownerThread_5 = L_5;
			IL2CPP_LEAVE(0x48, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1679 * L_6 = V_0;
		Monitor_Exit_m575(NULL /*static, unused*/, L_6, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0048:
	{
		goto IL_0093;
	}

IL_004a:
	{
		V_1 = __this;
		SynchronizationAttribute_t1679 * L_7 = V_1;
		Monitor_Enter_m573(NULL /*static, unused*/, L_7, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_0054:
		{
			int32_t L_8 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_8-(int32_t)1));
			Mutex_t1677 * L_9 = (__this->____mutex_4);
			NullCheck(L_9);
			Mutex_ReleaseMutex_m10069(L_9, /*hidden argument*/&Mutex_ReleaseMutex_m10069_MethodInfo);
			__this->____ownerThread_5 = (Thread_t1678 *)NULL;
		}

IL_0074:
		{
			int32_t L_10 = (__this->____lockCount_3);
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_008a;
			}
		}

IL_007d:
		{
			Thread_t1678 * L_11 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1678_il2cpp_TypeInfo));
			Thread_t1678 * L_12 = Thread_get_CurrentThread_m10079(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentThread_m10079_MethodInfo);
			if ((((Object_t*)(Thread_t1678 *)L_11) == ((Object_t*)(Thread_t1678 *)L_12)))
			{
				goto IL_0054;
			}
		}

IL_008a:
		{
			IL2CPP_LEAVE(0x93, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1679 * L_13 = V_1;
		Monitor_Exit_m575(NULL /*static, unused*/, L_13, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(140)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0093:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern "C" void SynchronizationAttribute_ReleaseLock_m9096 (SynchronizationAttribute_t1679 * __this, MethodInfo* method)
{
	SynchronizationAttribute_t1679 * V_0 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizationAttribute_t1679 * L_0 = V_0;
		Monitor_Enter_m573(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->____lockCount_3);
			if ((((int32_t)L_1) <= ((int32_t)0)))
			{
				goto IL_003e;
			}
		}

IL_0011:
		{
			Thread_t1678 * L_2 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1678_il2cpp_TypeInfo));
			Thread_t1678 * L_3 = Thread_get_CurrentThread_m10079(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentThread_m10079_MethodInfo);
			if ((!(((Object_t*)(Thread_t1678 *)L_2) == ((Object_t*)(Thread_t1678 *)L_3))))
			{
				goto IL_003e;
			}
		}

IL_001e:
		{
			int32_t L_4 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			Mutex_t1677 * L_5 = (__this->____mutex_4);
			NullCheck(L_5);
			Mutex_ReleaseMutex_m10069(L_5, /*hidden argument*/&Mutex_ReleaseMutex_m10069_MethodInfo);
			__this->____ownerThread_5 = (Thread_t1678 *)NULL;
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1679 * L_6 = V_0;
		Monitor_Exit_m575(NULL /*static, unused*/, L_6, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0047:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo SynchronizationAttribute_GetPropertiesForNewContext_m9097_MethodInfo;
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m9097 (SynchronizationAttribute_t1679 * __this, Object_t * ___ctorMsg, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____flavor_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___ctorMsg;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_ContextProperties_m11010_MethodInfo, L_1);
		NullCheck(L_2);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IList_Add_m5456_MethodInfo, L_2, __this);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo SynchronizationAttribute_IsContextOK_m9098_MethodInfo;
extern "C" bool SynchronizationAttribute_IsContextOK_m9098 (SynchronizationAttribute_t1679 * __this, Context_t1668 * ___ctx, Object_t * ___msg, MethodInfo* method)
{
	SynchronizationAttribute_t1679 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Context_t1668 * L_0 = ___ctx;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m9084_MethodInfo, L_0, (String_t*) &_stringLiteral1765);
		V_0 = ((SynchronizationAttribute_t1679 *)IsInst(L_1, InitializedTypeInfo(&SynchronizationAttribute_t1679_il2cpp_TypeInfo)));
		int32_t L_2 = (__this->____flavor_2);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0042;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 6)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 7)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0053;
	}

IL_0042:
	{
		SynchronizationAttribute_t1679 * L_4 = V_0;
		return ((((Object_t*)(SynchronizationAttribute_t1679 *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0047:
	{
		SynchronizationAttribute_t1679 * L_5 = V_0;
		return ((((int32_t)((((Object_t*)(SynchronizationAttribute_t1679 *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004f:
	{
		return 0;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern MethodInfo SynchronizationAttribute_ExitContext_m9099_MethodInfo;
extern "C" void SynchronizationAttribute_ExitContext_m9099 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	SynchronizationAttribute_t1679 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1678_il2cpp_TypeInfo));
		Context_t1668 * L_0 = Thread_get_CurrentContext_m10077(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m10077_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m9083(L_0, /*hidden argument*/&Context_get_IsDefaultContext_m9083_MethodInfo);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1678_il2cpp_TypeInfo));
		Context_t1668 * L_2 = Thread_get_CurrentContext_m10077(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m10077_MethodInfo);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m9084_MethodInfo, L_2, (String_t*) &_stringLiteral1765);
		V_0 = ((SynchronizationAttribute_t1679 *)IsInst(L_3, InitializedTypeInfo(&SynchronizationAttribute_t1679_il2cpp_TypeInfo)));
		SynchronizationAttribute_t1679 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		SynchronizationAttribute_t1679 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(&SynchronizationAttribute_set_Locked_m9095_MethodInfo, L_5, 0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern MethodInfo SynchronizationAttribute_EnterContext_m9100_MethodInfo;
extern "C" void SynchronizationAttribute_EnterContext_m9100 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	SynchronizationAttribute_t1679 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1678_il2cpp_TypeInfo));
		Context_t1668 * L_0 = Thread_get_CurrentContext_m10077(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m10077_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m9083(L_0, /*hidden argument*/&Context_get_IsDefaultContext_m9083_MethodInfo);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t1678_il2cpp_TypeInfo));
		Context_t1668 * L_2 = Thread_get_CurrentContext_m10077(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentContext_m10077_MethodInfo);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&Context_GetProperty_m9084_MethodInfo, L_2, (String_t*) &_stringLiteral1765);
		V_0 = ((SynchronizationAttribute_t1679 *)IsInst(L_3, InitializedTypeInfo(&SynchronizationAttribute_t1679_il2cpp_TypeInfo)));
		SynchronizationAttribute_t1679 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		SynchronizationAttribute_t1679 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(&SynchronizationAttribute_set_Locked_m9095_MethodInfo, L_5, 1);
		return;
	}
}
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgInfoType_t1680_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoTypeMethodDeclarations.h"



// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgInfo_t1681_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
extern TypeInfo MethodBase_t772_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t783_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t784_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t109_il2cpp_TypeInfo;
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
extern Il2CppType Int32U5BU5D_t109_0_0_0;
extern Il2CppType ObjectU5BU5D_t76_0_0_0;
extern MethodInfo MethodBase_GetParameters_m3984_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m3985_MethodInfo;
extern MethodInfo Type_get_IsByRef_m7261_MethodInfo;
extern MethodInfo ParameterInfo_get_IsOut_m8989_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern MethodInfo ArgInfo__ctor_m9101_MethodInfo;
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern "C" void ArgInfo__ctor_m9101 (ArgInfo_t1681 * __this, MethodBase_t772 * ___method, uint8_t ___type, MethodInfo* method)
{
	static bool ArgInfo__ctor_m9101_init;
	if (!ArgInfo__ctor_m9101_init)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		ArgInfo__ctor_m9101_init = true;
	}
	ParameterInfoU5BU5D_t783* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		MethodBase_t772 * L_0 = ___method;
		__this->____method_2 = L_0;
		MethodBase_t772 * L_1 = (__this->____method_2);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t783* L_2 = (ParameterInfoU5BU5D_t783*)VirtFuncInvoker0< ParameterInfoU5BU5D_t783* >::Invoke(&MethodBase_GetParameters_m3984_MethodInfo, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t783* L_3 = V_0;
		NullCheck(L_3);
		__this->____paramMap_0 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		__this->____inoutArgCount_1 = 0;
		uint8_t L_4 = ___type;
		if (L_4)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = 0;
		goto IL_0061;
	}

IL_0035:
	{
		ParameterInfoU5BU5D_t783* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_5, L_7)));
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3985_MethodInfo, (*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_5, L_7)));
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m7261_MethodInfo, L_8);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		Int32U5BU5D_t109* L_10 = (__this->____paramMap_0);
		int32_t L_11 = (__this->____inoutArgCount_1);
		int32_t L_12 = L_11;
		V_3 = L_12;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_13);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_13)) = (int32_t)L_14;
	}

IL_005d:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		ParameterInfoU5BU5D_t783* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00a9;
	}

IL_0069:
	{
		V_2 = 0;
		goto IL_00a3;
	}

IL_006d:
	{
		ParameterInfoU5BU5D_t783* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_18, L_20)));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3985_MethodInfo, (*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_18, L_20)));
		NullCheck(L_21);
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m7261_MethodInfo, L_21);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		ParameterInfoU5BU5D_t783* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_23, L_25)));
		bool L_26 = ParameterInfo_get_IsOut_m8989((*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_23, L_25)), /*hidden argument*/&ParameterInfo_get_IsOut_m8989_MethodInfo);
		if (!L_26)
		{
			goto IL_009f;
		}
	}

IL_0086:
	{
		Int32U5BU5D_t109* L_27 = (__this->____paramMap_0);
		int32_t L_28 = (__this->____inoutArgCount_1);
		int32_t L_29 = L_28;
		V_3 = L_29;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, L_30)) = (int32_t)L_31;
	}

IL_009f:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_33 = V_2;
		ParameterInfoU5BU5D_t783* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_006d;
		}
	}

IL_00a9:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern MethodInfo ArgInfo_GetInOutArgs_m9102_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t76* ArgInfo_GetInOutArgs_m9102 (ArgInfo_t1681 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method)
{
	static bool ArgInfo_GetInOutArgs_m9102_init;
	if (!ArgInfo_GetInOutArgs_m9102_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		ArgInfo_GetInOutArgs_m9102_init = true;
	}
	ObjectU5BU5D_t76* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		V_0 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		ObjectU5BU5D_t76* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t76* L_3 = ___args;
		Int32U5BU5D_t109* L_4 = (__this->____paramMap_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, L_2)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (__this->____inoutArgCount_1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		ObjectU5BU5D_t76* L_11 = V_0;
		return L_11;
	}
}
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AsyncResult_t1686_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResultMethodDeclarations.h"

// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo ManualResetEvent_t1330_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t84_il2cpp_TypeInfo;
extern TypeInfo AsyncCallback_t7_il2cpp_TypeInfo;
extern TypeInfo IAsyncResult_t6_il2cpp_TypeInfo;
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
extern MethodInfo ManualResetEvent__ctor_m6492_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m360_MethodInfo;
extern MethodInfo AsyncResult_get_AsyncWaitHandle_m9105_MethodInfo;
extern MethodInfo EventWaitHandle_Set_m6493_MethodInfo;
extern MethodInfo AsyncCallback_Invoke_m7339_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern MethodInfo AsyncResult__ctor_m9103_MethodInfo;
extern "C" void AsyncResult__ctor_m9103 (AsyncResult_t1686 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern MethodInfo AsyncResult_get_AsyncState_m9104_MethodInfo;
extern "C" Object_t * AsyncResult_get_AsyncState_m9104 (AsyncResult_t1686 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1332 * AsyncResult_get_AsyncWaitHandle_m9105 (AsyncResult_t1686 * __this, MethodInfo* method)
{
	AsyncResult_t1686 * V_0 = {0};
	WaitHandle_t1332 * V_1 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1686 * L_0 = V_0;
		Monitor_Enter_m573(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			WaitHandle_t1332 * L_1 = (__this->___handle_1);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->___completed_6);
			ManualResetEvent_t1330 * L_3 = (ManualResetEvent_t1330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ManualResetEvent_t1330_il2cpp_TypeInfo));
			ManualResetEvent__ctor_m6492(L_3, L_2, /*hidden argument*/&ManualResetEvent__ctor_m6492_MethodInfo);
			__this->___handle_1 = L_3;
		}

IL_0021:
		{
			WaitHandle_t1332 * L_4 = (__this->___handle_1);
			V_1 = L_4;
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		AsyncResult_t1686 * L_5 = V_0;
		Monitor_Exit_m575(NULL /*static, unused*/, L_5, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0033:
	{
		WaitHandle_t1332 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern MethodInfo AsyncResult_get_CompletedSynchronously_m9106_MethodInfo;
extern "C" bool AsyncResult_get_CompletedSynchronously_m9106 (AsyncResult_t1686 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___sync_completed_5);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern MethodInfo AsyncResult_get_IsCompleted_m9107_MethodInfo;
extern "C" bool AsyncResult_get_IsCompleted_m9107 (AsyncResult_t1686 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_6);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern MethodInfo AsyncResult_get_EndInvokeCalled_m9108_MethodInfo;
extern "C" bool AsyncResult_get_EndInvokeCalled_m9108 (AsyncResult_t1686 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___endinvoke_called_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern MethodInfo AsyncResult_set_EndInvokeCalled_m9109_MethodInfo;
extern "C" void AsyncResult_set_EndInvokeCalled_m9109 (AsyncResult_t1686 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___endinvoke_called_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern MethodInfo AsyncResult_get_AsyncDelegate_m9110_MethodInfo;
extern "C" Object_t * AsyncResult_get_AsyncDelegate_m9110 (AsyncResult_t1686 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_delegate_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern MethodInfo AsyncResult_get_NextSink_m9111_MethodInfo;
extern "C" Object_t * AsyncResult_get_NextSink_m9111 (AsyncResult_t1686 * __this, MethodInfo* method)
{
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern MethodInfo AsyncResult_AsyncProcessMessage_m9112_MethodInfo;
extern "C" Object_t * AsyncResult_AsyncProcessMessage_m9112 (AsyncResult_t1686 * __this, Object_t * ___msg, Object_t * ___replySink, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern MethodInfo AsyncResult_GetReplyMessage_m9113_MethodInfo;
extern "C" Object_t * AsyncResult_GetReplyMessage_m9113 (AsyncResult_t1686 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___reply_message_14);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern MethodInfo AsyncResult_SetMessageCtrl_m9114_MethodInfo;
extern "C" void AsyncResult_SetMessageCtrl_m9114 (AsyncResult_t1686 * __this, Object_t * ___mc, MethodInfo* method)
{
	{
		Object_t * L_0 = ___mc;
		__this->___message_ctrl_13 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern MethodInfo AsyncResult_SetCompletedSynchronously_m9115_MethodInfo;
extern "C" void AsyncResult_SetCompletedSynchronously_m9115 (AsyncResult_t1686 * __this, bool ___completed, MethodInfo* method)
{
	{
		bool L_0 = ___completed;
		__this->___sync_completed_5 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern MethodInfo AsyncResult_EndInvoke_m9116_MethodInfo;
extern "C" Object_t * AsyncResult_EndInvoke_m9116 (AsyncResult_t1686 * __this, MethodInfo* method)
{
	AsyncResult_t1686 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1686 * L_0 = V_0;
		Monitor_Enter_m573(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = (__this->___completed_6);
			if (!L_1)
			{
				goto IL_0019;
			}
		}

IL_0010:
		{
			Object_t * L_2 = (__this->___reply_message_14);
			V_1 = L_2;
			IL2CPP_LEAVE(0x35, FINALLY_001b);
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		AsyncResult_t1686 * L_3 = V_0;
		Monitor_Exit_m575(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0022:
	{
		WaitHandle_t1332 * L_4 = (WaitHandle_t1332 *)VirtFuncInvoker0< WaitHandle_t1332 * >::Invoke(&AsyncResult_get_AsyncWaitHandle_m9105_MethodInfo, __this);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(&WaitHandle_WaitOne_m6503_MethodInfo, L_4);
		Object_t * L_5 = (__this->___reply_message_14);
		return L_5;
	}

IL_0035:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern MethodInfo AsyncResult_SyncProcessMessage_m9117_MethodInfo;
extern "C" Object_t * AsyncResult_SyncProcessMessage_m9117 (AsyncResult_t1686 * __this, Object_t * ___msg, MethodInfo* method)
{
	AsyncResult_t1686 * V_0 = {0};
	AsyncCallback_t7 * V_1 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___msg;
		__this->___reply_message_14 = L_0;
		V_0 = __this;
		AsyncResult_t1686 * L_1 = V_0;
		Monitor_Enter_m573(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->___completed_6 = 1;
			WaitHandle_t1332 * L_2 = (__this->___handle_1);
			if (!L_2)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			WaitHandle_t1332 * L_3 = (WaitHandle_t1332 *)VirtFuncInvoker0< WaitHandle_t1332 * >::Invoke(&AsyncResult_get_AsyncWaitHandle_m9105_MethodInfo, __this);
			NullCheck(((ManualResetEvent_t1330 *)Castclass(L_3, InitializedTypeInfo(&ManualResetEvent_t1330_il2cpp_TypeInfo))));
			EventWaitHandle_Set_m6493(((ManualResetEvent_t1330 *)Castclass(L_3, InitializedTypeInfo(&ManualResetEvent_t1330_il2cpp_TypeInfo))), /*hidden argument*/&EventWaitHandle_Set_m6493_MethodInfo);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		AsyncResult_t1686 * L_4 = V_0;
		Monitor_Exit_m575(NULL /*static, unused*/, L_4, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0038:
	{
		Object_t * L_5 = (__this->___async_callback_8);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_6 = (__this->___async_callback_8);
		V_1 = ((AsyncCallback_t7 *)Castclass(L_6, InitializedTypeInfo(&AsyncCallback_t7_il2cpp_TypeInfo)));
		AsyncCallback_t7 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker1< Object_t * >::Invoke(&AsyncCallback_Invoke_m7339_MethodInfo, L_7, __this);
	}

IL_0053:
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern MethodInfo AsyncResult_get_CallMessage_m9118_MethodInfo;
extern "C" MonoMethodMessage_t1683 * AsyncResult_get_CallMessage_m9118 (AsyncResult_t1686 * __this, MethodInfo* method)
{
	{
		MonoMethodMessage_t1683 * L_0 = (__this->___call_message_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern MethodInfo AsyncResult_set_CallMessage_m9119_MethodInfo;
extern "C" void AsyncResult_set_CallMessage_m9119 (AsyncResult_t1686 * __this, MonoMethodMessage_t1683 * ___value, MethodInfo* method)
{
	{
		MonoMethodMessage_t1683 * L_0 = ___value;
		__this->___call_message_12 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallD.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13.h"
extern TypeInfo MethodCall_t1687_il2cpp_TypeInfo;
extern TypeInfo IDictionary_t1010_il2cpp_TypeInfo;
extern TypeInfo ConstructionCallDictionary_t1688_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t545_il2cpp_TypeInfo;
extern TypeInfo SerializationInfo_t708_il2cpp_TypeInfo;
extern TypeInfo StreamingContext_t709_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern Il2CppType Dictionary_2_t545_0_0_0;
extern MethodInfo Type_GetType_m7280_MethodInfo;
extern MethodInfo MethodCall_get_Properties_m9159_MethodInfo;
extern MethodInfo MethodCall__ctor_m9150_MethodInfo;
extern MethodInfo Type_get_AssemblyQualifiedName_m4053_MethodInfo;
extern MethodInfo MethodCall__ctor_m9149_MethodInfo;
extern MethodInfo ConstructionCallDictionary__ctor_m9134_MethodInfo;
extern MethodInfo MethodDictionary_GetInternalProperties_m9181_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m5289_MethodInfo;
extern MethodInfo Dictionary_2_Add_m5290_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m5291_MethodInfo;
extern MethodInfo MethodCall_InitMethodProperty_m9152_MethodInfo;
extern MethodInfo MethodCall_GetObjectData_m9153_MethodInfo;
extern MethodInfo ICollection_get_Count_m5215_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5257_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m5289_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m5290_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m5291_GenericMethod;


// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C" void ConstructionCall__ctor_m9120 (ConstructionCall_t1660 * __this, Type_t * ___type, MethodInfo* method)
{
	{
		MethodCall__ctor_m9150(__this, /*hidden argument*/&MethodCall__ctor_m9150_MethodInfo);
		Type_t * L_0 = ___type;
		__this->____activationType_14 = L_0;
		Type_t * L_1 = ___type;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_1);
		__this->____activationTypeName_15 = L_2;
		__this->____isContextOk_16 = 1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo ConstructionCall__ctor_m9121_MethodInfo;
extern "C" void ConstructionCall__ctor_m9121 (ConstructionCall_t1660 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t708 * L_0 = ___info;
		StreamingContext_t709  L_1 = ___context;
		MethodCall__ctor_m9149(__this, L_0, L_1, /*hidden argument*/&MethodCall__ctor_m9149_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern MethodInfo ConstructionCall_InitDictionary_m9122_MethodInfo;
extern "C" void ConstructionCall_InitDictionary_m9122 (ConstructionCall_t1660 * __this, MethodInfo* method)
{
	ConstructionCallDictionary_t1688 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo));
		ConstructionCallDictionary_t1688 * L_0 = (ConstructionCallDictionary_t1688 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo));
		ConstructionCallDictionary__ctor_m9134(L_0, __this, /*hidden argument*/&ConstructionCallDictionary__ctor_m9134_MethodInfo);
		V_0 = L_0;
		ConstructionCallDictionary_t1688 * L_1 = V_0;
		__this->___ExternalProperties_8 = L_1;
		ConstructionCallDictionary_t1688 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m9181(L_2, /*hidden argument*/&MethodDictionary_GetInternalProperties_m9181_MethodInfo);
		__this->___InternalProperties_9 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C" void ConstructionCall_set_IsContextOk_m9123 (ConstructionCall_t1660 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____isContextOk_16 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern MethodInfo ConstructionCall_get_ActivationType_m9124_MethodInfo;
extern "C" Type_t * ConstructionCall_get_ActivationType_m9124 (ConstructionCall_t1660 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____activationType_14);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = (__this->____activationTypeName_15);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetType_m7280(NULL /*static, unused*/, L_1, /*hidden argument*/&Type_GetType_m7280_MethodInfo);
		__this->____activationType_14 = L_2;
	}

IL_0019:
	{
		Type_t * L_3 = (__this->____activationType_14);
		return L_3;
	}
}
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern MethodInfo ConstructionCall_get_ActivationTypeName_m9125_MethodInfo;
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m9125 (ConstructionCall_t1660 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____activationTypeName_15);
		return L_0;
	}
}
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern MethodInfo ConstructionCall_get_Activator_m9126_MethodInfo;
extern "C" Object_t * ConstructionCall_get_Activator_m9126 (ConstructionCall_t1660 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____activator_11);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m9127 (ConstructionCall_t1660 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____activator_11 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern MethodInfo ConstructionCall_get_CallSiteActivationAttributes_m9128_MethodInfo;
extern "C" ObjectU5BU5D_t76* ConstructionCall_get_CallSiteActivationAttributes_m9128 (ConstructionCall_t1660 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = (__this->____activationAttributes_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C" void ConstructionCall_SetActivationAttributes_m9129 (ConstructionCall_t1660 * __this, ObjectU5BU5D_t76* ___attributes, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___attributes;
		__this->____activationAttributes_12 = L_0;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern MethodInfo ConstructionCall_get_ContextProperties_m9130_MethodInfo;
extern "C" Object_t * ConstructionCall_get_ContextProperties_m9130 (ConstructionCall_t1660 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____contextProperties_13);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList_t1020 * L_1 = (ArrayList_t1020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList__ctor_m5240(L_1, /*hidden argument*/&ArrayList__ctor_m5240_MethodInfo);
		__this->____contextProperties_13 = L_1;
	}

IL_0013:
	{
		Object_t * L_2 = (__this->____contextProperties_13);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern MethodInfo ConstructionCall_InitMethodProperty_m9131_MethodInfo;
extern TypeInfo* Dictionary_2_t545_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m5289_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m5290_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m5291_MethodInfo_var;
extern "C" void ConstructionCall_InitMethodProperty_m9131 (ConstructionCall_t1660 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool ConstructionCall_InitMethodProperty_m9131_init;
	if (!ConstructionCall_InitMethodProperty_m9131_init)
	{
		Dictionary_2_t545_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t545_0_0_0);
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Dictionary_2__ctor_m5289_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m5289_GenericMethod);
		Dictionary_2_Add_m5290_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m5290_GenericMethod);
		Dictionary_2_TryGetValue_m5291_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m5291_GenericMethod);
		ConstructionCall_InitMethodProperty_m9131_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t545 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c4;
		}
	}
	{
		Dictionary_2_t545 * L_2 = ((ConstructionCall_t1660_StaticFields*)InitializedTypeInfo(&ConstructionCall_t1660_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map20_17;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t545 * L_3 = (Dictionary_2_t545 *)il2cpp_codegen_object_new (Dictionary_2_t545_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5289(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m5289_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t545 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_4, (String_t*) &_stringLiteral1766, 0);
		Dictionary_2_t545 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_5, (String_t*) &_stringLiteral1767, 1);
		Dictionary_2_t545 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_6, (String_t*) &_stringLiteral1768, 2);
		Dictionary_2_t545 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_7, (String_t*) &_stringLiteral1769, 3);
		Dictionary_2_t545 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_8, (String_t*) &_stringLiteral1770, 4);
		Dictionary_2_t545 * L_9 = V_1;
		((ConstructionCall_t1660_StaticFields*)InitializedTypeInfo(&ConstructionCall_t1660_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map20_17 = L_9;
	}

IL_0058:
	{
		Dictionary_2_t545 * L_10 = ((ConstructionCall_t1660_StaticFields*)InitializedTypeInfo(&ConstructionCall_t1660_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map20_17;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m5291_MethodInfo_var, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_0090;
		}
		if (L_13 == 2)
		{
			goto IL_009d;
		}
		if (L_13 == 3)
		{
			goto IL_00aa;
		}
		if (L_13 == 4)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00c4;
	}

IL_0083:
	{
		Object_t * L_14 = ___value;
		__this->____activator_11 = ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IActivator_t1658_il2cpp_TypeInfo)));
		return;
	}

IL_0090:
	{
		Object_t * L_15 = ___value;
		__this->____activationAttributes_12 = ((ObjectU5BU5D_t76*)Castclass(L_15, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		return;
	}

IL_009d:
	{
		Object_t * L_16 = ___value;
		__this->____activationType_14 = ((Type_t *)Castclass(L_16, InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)));
		return;
	}

IL_00aa:
	{
		Object_t * L_17 = ___value;
		__this->____contextProperties_13 = ((Object_t *)Castclass(L_17, InitializedTypeInfo(&IList_t856_il2cpp_TypeInfo)));
		return;
	}

IL_00b7:
	{
		Object_t * L_18 = ___value;
		__this->____activationTypeName_15 = ((String_t*)Castclass(L_18, (&String_t_il2cpp_TypeInfo)));
		return;
	}

IL_00c4:
	{
		String_t* L_19 = ___key;
		Object_t * L_20 = ___value;
		MethodCall_InitMethodProperty_m9152(__this, L_19, L_20, /*hidden argument*/&MethodCall_InitMethodProperty_m9152_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo ConstructionCall_GetObjectData_m9132_MethodInfo;
extern "C" void ConstructionCall_GetObjectData_m9132 (ConstructionCall_t1660 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		SerializationInfo_t708 * L_0 = ___info;
		StreamingContext_t709  L_1 = ___context;
		MethodCall_GetObjectData_m9153(__this, L_0, L_1, /*hidden argument*/&MethodCall_GetObjectData_m9153_MethodInfo);
		Object_t * L_2 = (__this->____contextProperties_13);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ICollection_get_Count_m5215_MethodInfo, L_4);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (Object_t *)NULL;
	}

IL_001c:
	{
		SerializationInfo_t708 * L_6 = ___info;
		Object_t * L_7 = (__this->____activator_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m5257(L_6, (String_t*) &_stringLiteral1766, L_7, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		SerializationInfo_t708 * L_8 = ___info;
		ObjectU5BU5D_t76* L_9 = (__this->____activationAttributes_12);
		NullCheck(L_8);
		SerializationInfo_AddValue_m5257(L_8, (String_t*) &_stringLiteral1767, (Object_t *)(Object_t *)L_9, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		SerializationInfo_t708 * L_10 = ___info;
		NullCheck(L_10);
		SerializationInfo_AddValue_m5257(L_10, (String_t*) &_stringLiteral1768, NULL, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		SerializationInfo_t708 * L_11 = ___info;
		Object_t * L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m5257(L_11, (String_t*) &_stringLiteral1769, L_12, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		SerializationInfo_t708 * L_13 = ___info;
		String_t* L_14 = (__this->____activationTypeName_15);
		NullCheck(L_13);
		SerializationInfo_AddValue_m5257(L_13, (String_t*) &_stringLiteral1770, L_14, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern MethodInfo ConstructionCall_get_Properties_m9133_MethodInfo;
extern "C" Object_t * ConstructionCall_get_Properties_m9133 (ConstructionCall_t1660 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = MethodCall_get_Properties_m9159(__this, /*hidden argument*/&MethodCall_get_Properties_m9159_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"
extern TypeInfo MethodDictionary_t1689_il2cpp_TypeInfo;
extern MethodInfo MethodDictionary__ctor_m9177_MethodInfo;
extern MethodInfo MethodDictionary_set_MethodKeys_m9179_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_Activator_m11012_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_CallSiteActivationAttributes_m11013_MethodInfo;
extern MethodInfo IConstructionCallMessage_get_ActivationTypeName_m11014_MethodInfo;
extern MethodInfo MethodDictionary_GetMethodProperty_m9185_MethodInfo;
extern MethodInfo IConstructionCallMessage_set_Activator_m11015_MethodInfo;
extern MethodInfo MethodDictionary_SetMethodProperty_m9186_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ConstructionCallDictionary__ctor_m9134 (ConstructionCallDictionary_t1688 * __this, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m9177(__this, L_0, /*hidden argument*/&MethodDictionary__ctor_m9177_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo));
		StringU5BU5D_t87* L_1 = ((ConstructionCallDictionary_t1688_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo)->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m9179(__this, L_1, /*hidden argument*/&MethodDictionary_set_MethodKeys_m9179_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern MethodInfo ConstructionCallDictionary__cctor_m9135_MethodInfo;
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__cctor_m9135 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ConstructionCallDictionary__cctor_m9135_init;
	if (!ConstructionCallDictionary__cctor_m9135_init)
	{
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		ConstructionCallDictionary__cctor_m9135_init = true;
	}
	{
		StringU5BU5D_t87* L_0 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, ((int32_t)11)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1771);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1771;
		StringU5BU5D_t87* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral1772);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral1772;
		StringU5BU5D_t87* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1773);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral1773;
		StringU5BU5D_t87* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1774);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral1774;
		StringU5BU5D_t87* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral1775);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral1775;
		StringU5BU5D_t87* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1776);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral1776;
		StringU5BU5D_t87* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1767);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral1767;
		StringU5BU5D_t87* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral1768);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7)) = (String_t*)(String_t*) &_stringLiteral1768;
		StringU5BU5D_t87* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral1769);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8)) = (String_t*)(String_t*) &_stringLiteral1769;
		StringU5BU5D_t87* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral1766);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9))) = (String_t*)(String_t*) &_stringLiteral1766;
		StringU5BU5D_t87* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral1770);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral1770;
		((ConstructionCallDictionary_t1688_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo)->static_fields)->___InternalKeys_6 = L_10;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
extern MethodInfo ConstructionCallDictionary_GetMethodProperty_m9136_MethodInfo;
extern TypeInfo* Dictionary_2_t545_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m5289_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m5290_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m5291_MethodInfo_var;
extern "C" Object_t * ConstructionCallDictionary_GetMethodProperty_m9136 (ConstructionCallDictionary_t1688 * __this, String_t* ___key, MethodInfo* method)
{
	static bool ConstructionCallDictionary_GetMethodProperty_m9136_init;
	if (!ConstructionCallDictionary_GetMethodProperty_m9136_init)
	{
		Dictionary_2_t545_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t545_0_0_0);
		Dictionary_2__ctor_m5289_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m5289_GenericMethod);
		Dictionary_2_Add_m5290_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m5290_GenericMethod);
		Dictionary_2_TryGetValue_m5291_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m5291_GenericMethod);
		ConstructionCallDictionary_GetMethodProperty_m9136_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t545 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo));
		Dictionary_2_t545 * L_2 = ((ConstructionCallDictionary_t1688_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map23_7;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t545 * L_3 = (Dictionary_2_t545 *)il2cpp_codegen_object_new (Dictionary_2_t545_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5289(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m5289_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t545 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_4, (String_t*) &_stringLiteral1766, 0);
		Dictionary_2_t545 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_5, (String_t*) &_stringLiteral1767, 1);
		Dictionary_2_t545 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_6, (String_t*) &_stringLiteral1768, 2);
		Dictionary_2_t545 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_7, (String_t*) &_stringLiteral1769, 3);
		Dictionary_2_t545 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_8, (String_t*) &_stringLiteral1770, 4);
		Dictionary_2_t545 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo));
		((ConstructionCallDictionary_t1688_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map23_7 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo));
		Dictionary_2_t545 * L_10 = ((ConstructionCallDictionary_t1688_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map23_7;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m5291_MethodInfo_var, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_0094;
		}
		if (L_13 == 2)
		{
			goto IL_00a5;
		}
		if (L_13 == 3)
		{
			goto IL_00b6;
		}
		if (L_13 == 4)
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d8;
	}

IL_0083:
	{
		Object_t * L_14 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))));
		Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_Activator_m11012_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))));
		return L_15;
	}

IL_0094:
	{
		Object_t * L_16 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_16, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))));
		ObjectU5BU5D_t76* L_17 = (ObjectU5BU5D_t76*)InterfaceFuncInvoker0< ObjectU5BU5D_t76* >::Invoke(&IConstructionCallMessage_get_CallSiteActivationAttributes_m11013_MethodInfo, ((Object_t *)Castclass(L_16, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))));
		return (Object_t *)L_17;
	}

IL_00a5:
	{
		Object_t * L_18 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_18, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))));
		Type_t * L_19 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(&IConstructionCallMessage_get_ActivationType_m11011_MethodInfo, ((Object_t *)Castclass(L_18, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))));
		return L_19;
	}

IL_00b6:
	{
		Object_t * L_20 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_20, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))));
		Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IConstructionCallMessage_get_ContextProperties_m11010_MethodInfo, ((Object_t *)Castclass(L_20, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))));
		return L_21;
	}

IL_00c7:
	{
		Object_t * L_22 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))));
		String_t* L_23 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IConstructionCallMessage_get_ActivationTypeName_m11014_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))));
		return L_23;
	}

IL_00d8:
	{
		String_t* L_24 = ___key;
		Object_t * L_25 = MethodDictionary_GetMethodProperty_m9185(__this, L_24, /*hidden argument*/&MethodDictionary_GetMethodProperty_m9185_MethodInfo);
		return L_25;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
extern MethodInfo ConstructionCallDictionary_SetMethodProperty_m9137_MethodInfo;
extern TypeInfo* Dictionary_2_t545_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m5289_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m5290_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m5291_MethodInfo_var;
extern "C" void ConstructionCallDictionary_SetMethodProperty_m9137 (ConstructionCallDictionary_t1688 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool ConstructionCallDictionary_SetMethodProperty_m9137_init;
	if (!ConstructionCallDictionary_SetMethodProperty_m9137_init)
	{
		Dictionary_2_t545_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t545_0_0_0);
		Dictionary_2__ctor_m5289_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m5289_GenericMethod);
		Dictionary_2_Add_m5290_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m5290_GenericMethod);
		Dictionary_2_TryGetValue_m5291_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m5291_GenericMethod);
		ConstructionCallDictionary_SetMethodProperty_m9137_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t545 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo));
		Dictionary_2_t545 * L_2 = ((ConstructionCallDictionary_t1688_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map24_8;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t545 * L_3 = (Dictionary_2_t545 *)il2cpp_codegen_object_new (Dictionary_2_t545_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5289(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m5289_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t545 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_4, (String_t*) &_stringLiteral1766, 0);
		Dictionary_2_t545 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_5, (String_t*) &_stringLiteral1767, 1);
		Dictionary_2_t545 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_6, (String_t*) &_stringLiteral1768, 1);
		Dictionary_2_t545 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_7, (String_t*) &_stringLiteral1769, 1);
		Dictionary_2_t545 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_8, (String_t*) &_stringLiteral1770, 1);
		Dictionary_2_t545 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo));
		((ConstructionCallDictionary_t1688_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map24_8 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo));
		Dictionary_2_t545 * L_10 = ((ConstructionCallDictionary_t1688_StaticFields*)InitializedTypeInfo(&ConstructionCallDictionary_t1688_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map24_8;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m5291_MethodInfo_var, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0093;
	}

IL_0070:
	{
		Object_t * L_15 = (__this->____message_1);
		Object_t * L_16 = ___value;
		NullCheck(((Object_t *)Castclass(L_15, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))));
		InterfaceActionInvoker1< Object_t * >::Invoke(&IConstructionCallMessage_set_Activator_m11015_MethodInfo, ((Object_t *)Castclass(L_15, InitializedTypeInfo(&IConstructionCallMessage_t1667_il2cpp_TypeInfo))), ((Object_t *)Castclass(L_16, InitializedTypeInfo(&IActivator_t1658_il2cpp_TypeInfo))));
		goto IL_009d;
	}

IL_0088:
	{
		ArgumentException_t395 * L_17 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_17, (String_t*) &_stringLiteral1777, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0093:
	{
		String_t* L_18 = ___key;
		Object_t * L_19 = ___value;
		MethodDictionary_SetMethodProperty_m9186(__this, L_18, L_19, /*hidden argument*/&MethodDictionary_SetMethodProperty_m9186_MethodInfo);
		goto IL_009d;
	}

IL_009d:
	{
		return;
	}
}
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSi.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EnvoyTerminatorSink_t1690_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"

extern MethodInfo EnvoyTerminatorSink__ctor_m9138_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.ctor()
extern "C" void EnvoyTerminatorSink__ctor_m9138 (EnvoyTerminatorSink_t1690 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.cctor()
extern MethodInfo EnvoyTerminatorSink__cctor_m9139_MethodInfo;
extern "C" void EnvoyTerminatorSink__cctor_m9139 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		EnvoyTerminatorSink_t1690 * L_0 = (EnvoyTerminatorSink_t1690 *)il2cpp_codegen_object_new (InitializedTypeInfo(&EnvoyTerminatorSink_t1690_il2cpp_TypeInfo));
		EnvoyTerminatorSink__ctor_m9138(L_0, /*hidden argument*/&EnvoyTerminatorSink__ctor_m9138_MethodInfo);
		((EnvoyTerminatorSink_t1690_StaticFields*)InitializedTypeInfo(&EnvoyTerminatorSink_t1690_il2cpp_TypeInfo)->static_fields)->___Instance_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Header_t1691_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"

extern MethodInfo Header__ctor_m9141_MethodInfo;
extern MethodInfo Header__ctor_m9142_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
extern MethodInfo Header__ctor_m9140_MethodInfo;
extern "C" void Header__ctor_m9140 (Header_t1691 * __this, String_t* ____Name, Object_t * ____Value, MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		Header__ctor_m9141(__this, L_0, L_1, 1, /*hidden argument*/&Header__ctor_m9141_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
extern "C" void Header__ctor_m9141 (Header_t1691 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		bool L_2 = ____MustUnderstand;
		Header__ctor_m9142(__this, L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/&Header__ctor_m9142_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
extern "C" void Header__ctor_m9142 (Header_t1691 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		String_t* L_0 = ____Name;
		__this->___Name_2 = L_0;
		Object_t * L_1 = ____Value;
		__this->___Value_3 = L_1;
		bool L_2 = ____MustUnderstand;
		__this->___MustUnderstand_1 = L_2;
		String_t* L_3 = ____HeaderNamespace;
		__this->___HeaderNamespace_0 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContex.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LogicalCallContext_t1693_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemoti.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnume.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
extern TypeInfo CallContextRemotingData_t1692_il2cpp_TypeInfo;
extern TypeInfo SerializationInfoEnumerator_t1765_il2cpp_TypeInfo;
extern TypeInfo IDictionaryEnumerator_t1011_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1014_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern MethodInfo CallContextRemotingData__ctor_m9147_MethodInfo;
extern MethodInfo SerializationInfo_GetEnumerator_m9434_MethodInfo;
extern MethodInfo SerializationInfoEnumerator_get_Current_m9442_MethodInfo;
extern MethodInfo SerializationEntry_get_Name_m9428_MethodInfo;
extern MethodInfo SerializationEntry_get_Value_m9429_MethodInfo;
extern MethodInfo LogicalCallContext_SetData_m9146_MethodInfo;
extern MethodInfo SerializationInfoEnumerator_MoveNext_m9445_MethodInfo;
extern MethodInfo Hashtable_GetEnumerator_m7990_MethodInfo;
extern MethodInfo DictionaryEntry_get_Key_m7952_MethodInfo;
extern MethodInfo DictionaryEntry_get_Value_m7953_MethodInfo;
extern MethodInfo Hashtable_set_Item_m5432_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern MethodInfo LogicalCallContext__ctor_m9143_MethodInfo;
extern "C" void LogicalCallContext__ctor_m9143 (LogicalCallContext_t1693 * __this, MethodInfo* method)
{
	{
		CallContextRemotingData_t1692 * L_0 = (CallContextRemotingData_t1692 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CallContextRemotingData_t1692_il2cpp_TypeInfo));
		CallContextRemotingData__ctor_m9147(L_0, /*hidden argument*/&CallContextRemotingData__ctor_m9147_MethodInfo);
		__this->____remotingData_1 = L_0;
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo LogicalCallContext__ctor_m9144_MethodInfo;
extern "C" void LogicalCallContext__ctor_m9144 (LogicalCallContext_t1693 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	SerializationEntry_t1763  V_0 = {0};
	SerializationInfoEnumerator_t1765 * V_1 = {0};
	{
		CallContextRemotingData_t1692 * L_0 = (CallContextRemotingData_t1692 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CallContextRemotingData_t1692_il2cpp_TypeInfo));
		CallContextRemotingData__ctor_m9147(L_0, /*hidden argument*/&CallContextRemotingData__ctor_m9147_MethodInfo);
		__this->____remotingData_1 = L_0;
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		SerializationInfo_t708 * L_1 = ___info;
		NullCheck(L_1);
		SerializationInfoEnumerator_t1765 * L_2 = SerializationInfo_GetEnumerator_m9434(L_1, /*hidden argument*/&SerializationInfo_GetEnumerator_m9434_MethodInfo);
		V_1 = L_2;
		goto IL_005c;
	}

IL_001a:
	{
		SerializationInfoEnumerator_t1765 * L_3 = V_1;
		NullCheck(L_3);
		SerializationEntry_t1763  L_4 = SerializationInfoEnumerator_get_Current_m9442(L_3, /*hidden argument*/&SerializationInfoEnumerator_get_Current_m9442_MethodInfo);
		V_0 = L_4;
		String_t* L_5 = SerializationEntry_get_Name_m9428((&V_0), /*hidden argument*/&SerializationEntry_get_Name_m9428_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_6 = String_op_Equality_m2110(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral1778, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		Object_t * L_7 = SerializationEntry_get_Value_m9429((&V_0), /*hidden argument*/&SerializationEntry_get_Value_m9429_MethodInfo);
		__this->____remotingData_1 = ((CallContextRemotingData_t1692 *)Castclass(L_7, InitializedTypeInfo(&CallContextRemotingData_t1692_il2cpp_TypeInfo)));
		goto IL_005c;
	}

IL_0048:
	{
		String_t* L_8 = SerializationEntry_get_Name_m9428((&V_0), /*hidden argument*/&SerializationEntry_get_Name_m9428_MethodInfo);
		Object_t * L_9 = SerializationEntry_get_Value_m9429((&V_0), /*hidden argument*/&SerializationEntry_get_Value_m9429_MethodInfo);
		LogicalCallContext_SetData_m9146(__this, L_8, L_9, /*hidden argument*/&LogicalCallContext_SetData_m9146_MethodInfo);
	}

IL_005c:
	{
		SerializationInfoEnumerator_t1765 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&SerializationInfoEnumerator_MoveNext_m9445_MethodInfo, L_10);
		if (L_11)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo LogicalCallContext_GetObjectData_m9145_MethodInfo;
extern "C" void LogicalCallContext_GetObjectData_m9145 (LogicalCallContext_t1693 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	DictionaryEntry_t1014  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t708 * L_0 = ___info;
		CallContextRemotingData_t1692 * L_1 = (__this->____remotingData_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5257(L_0, (String_t*) &_stringLiteral1778, L_1, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		Hashtable_t1007 * L_2 = (__this->____data_0);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		Hashtable_t1007 * L_3 = (__this->____data_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Hashtable_GetEnumerator_m7990_MethodInfo, L_3);
		V_1 = L_4;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_0027:
		{
			Object_t * L_5 = V_1;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3928_MethodInfo, L_5);
			V_0 = ((*(DictionaryEntry_t1014 *)((DictionaryEntry_t1014 *)UnBox (L_6, InitializedTypeInfo(&DictionaryEntry_t1014_il2cpp_TypeInfo)))));
			SerializationInfo_t708 * L_7 = ___info;
			Object_t * L_8 = DictionaryEntry_get_Key_m7952((&V_0), /*hidden argument*/&DictionaryEntry_get_Key_m7952_MethodInfo);
			Object_t * L_9 = DictionaryEntry_get_Value_m7953((&V_0), /*hidden argument*/&DictionaryEntry_get_Value_m7953_MethodInfo);
			NullCheck(L_7);
			SerializationInfo_AddValue_m5257(L_7, ((String_t*)Castclass(L_8, (&String_t_il2cpp_TypeInfo))), L_9, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		}

IL_004c:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_10);
			if (L_11)
			{
				goto IL_0027;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_2 = ((Object_t *)IsInst(L_12, InitializedTypeInfo(&IDisposable_t127_il2cpp_TypeInfo)));
			Object_t * L_13 = V_2;
			if (L_13)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(86)
		}

IL_0061:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_14);
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
extern "C" void LogicalCallContext_SetData_m9146 (LogicalCallContext_t1693 * __this, String_t* ___name, Object_t * ___data, MethodInfo* method)
{
	{
		Hashtable_t1007 * L_0 = (__this->____data_0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable_t1007 * L_1 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_1, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		__this->____data_0 = L_1;
	}

IL_0013:
	{
		Hashtable_t1007 * L_2 = (__this->____data_0);
		String_t* L_3 = ___name;
		Object_t * L_4 = ___data;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_set_Item_m5432_MethodInfo, L_2, L_3, L_4);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.CallContextRemotingData::.ctor()
extern "C" void CallContextRemotingData__ctor_m9147 (CallContextRemotingData_t1692 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDiction.h"
extern TypeInfo TypeU5BU5D_t658_il2cpp_TypeInfo;
extern TypeInfo MethodCallDictionary_t1695_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDictionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
extern Il2CppType TypeU5BU5D_t658_0_0_0;
extern MethodInfo MethodCall_set_Uri_m9163_MethodInfo;
extern MethodInfo MethodCall_ResolveMethod_m9165_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m3952_MethodInfo;
extern MethodInfo MethodCall_InitDictionary_m9160_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m4015_MethodInfo;
extern MethodInfo MethodCall_get_MethodBase_m9156_MethodInfo;
extern MethodInfo MethodBase_GetGenericArguments_m8838_MethodInfo;
extern MethodInfo MethodCall_Init_m9164_MethodInfo;
extern MethodInfo IDictionary_set_Item_m5217_MethodInfo;
extern MethodInfo IDictionary_GetEnumerator_m5224_MethodInfo;
extern MethodInfo MethodCallDictionary__ctor_m9169_MethodInfo;
extern MethodInfo RemotingServices_GetServerTypeForUri_m9293_MethodInfo;
extern MethodInfo String_Concat_m4006_MethodInfo;
extern MethodInfo MethodCall_CastTo_m9166_MethodInfo;
extern MethodInfo String_Concat_m3849_MethodInfo;
extern MethodInfo RemotingServices_GetMethodBaseFromName_m9298_MethodInfo;
extern MethodInfo String_Concat_m1872_MethodInfo;
extern MethodInfo Type_get_IsInterface_m7266_MethodInfo;
extern MethodInfo RemotingServices_GetVirtualMethod_m9291_MethodInfo;
extern MethodInfo RemotingServices_GetMethodBaseFromMethodMessage_m9297_MethodInfo;
extern MethodInfo MethodCall_get_TypeName_m9161_MethodInfo;
extern MethodInfo MethodBase_get_IsGenericMethod_m8841_MethodInfo;
extern MethodInfo MethodBase_get_ContainsGenericParameters_m8839_MethodInfo;
extern MethodInfo MethodCall_get_GenericArguments_m9168_MethodInfo;
extern MethodInfo MethodInfo_MakeGenericMethod_m8845_MethodInfo;
extern MethodInfo MethodCall_GetTypeNameFromAssemblyQualifiedName_m9167_MethodInfo;
extern MethodInfo Type_get_BaseType_m3991_MethodInfo;
extern MethodInfo Type_GetInterfaces_m10988_MethodInfo;
extern MethodInfo String_IndexOf_m3838_MethodInfo;
extern MethodInfo String_IndexOf_m3827_MethodInfo;
extern MethodInfo String_Substring_m2129_MethodInfo;
extern MethodInfo String_Trim_m3828_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
extern MethodInfo MethodCall__ctor_m9148_MethodInfo;
extern "C" void MethodCall__ctor_m9148 (MethodCall_t1687 * __this, HeaderU5BU5D_t1694* ___h1, MethodInfo* method)
{
	Header_t1691 * V_0 = {0};
	HeaderU5BU5D_t1694* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		VirtActionInvoker0::Invoke(&MethodCall_Init_m9164_MethodInfo, __this);
		HeaderU5BU5D_t1694* L_0 = ___h1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		HeaderU5BU5D_t1694* L_1 = ___h1;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0015;
		}
	}

IL_0014:
	{
		return;
	}

IL_0015:
	{
		HeaderU5BU5D_t1694* L_2 = ___h1;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		HeaderU5BU5D_t1694* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Header_t1691 **)(Header_t1691 **)SZArrayLdElema(L_3, L_5));
		Header_t1691 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___Name_2);
		Header_t1691 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___Value_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(&MethodCall_InitMethodProperty_m9152_MethodInfo, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		HeaderU5BU5D_t1694* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		MethodCall_ResolveMethod_m9165(__this, /*hidden argument*/&MethodCall_ResolveMethod_m9165_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodCall__ctor_m9149 (MethodCall_t1687 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	SerializationEntry_t1763  V_0 = {0};
	SerializationInfoEnumerator_t1765 * V_1 = {0};
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		VirtActionInvoker0::Invoke(&MethodCall_Init_m9164_MethodInfo, __this);
		SerializationInfo_t708 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1765 * L_1 = SerializationInfo_GetEnumerator_m9434(L_0, /*hidden argument*/&SerializationInfo_GetEnumerator_m9434_MethodInfo);
		V_1 = L_1;
		goto IL_0030;
	}

IL_0015:
	{
		SerializationInfoEnumerator_t1765 * L_2 = V_1;
		NullCheck(L_2);
		SerializationEntry_t1763  L_3 = SerializationInfoEnumerator_get_Current_m9442(L_2, /*hidden argument*/&SerializationInfoEnumerator_get_Current_m9442_MethodInfo);
		V_0 = L_3;
		String_t* L_4 = SerializationEntry_get_Name_m9428((&V_0), /*hidden argument*/&SerializationEntry_get_Name_m9428_MethodInfo);
		Object_t * L_5 = SerializationEntry_get_Value_m9429((&V_0), /*hidden argument*/&SerializationEntry_get_Value_m9429_MethodInfo);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(&MethodCall_InitMethodProperty_m9152_MethodInfo, __this, L_4, L_5);
	}

IL_0030:
	{
		SerializationInfoEnumerator_t1765 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&SerializationInfoEnumerator_MoveNext_m9445_MethodInfo, L_6);
		if (L_7)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C" void MethodCall__ctor_m9150 (MethodCall_t1687 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern MethodInfo MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9151_MethodInfo;
extern "C" void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9151 (MethodCall_t1687 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(&MethodCall_set_Uri_m9163_MethodInfo, __this, L_0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* Dictionary_2_t545_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t658_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m5289_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m5290_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m5291_MethodInfo_var;
extern "C" void MethodCall_InitMethodProperty_m9152 (MethodCall_t1687 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool MethodCall_InitMethodProperty_m9152_init;
	if (!MethodCall_InitMethodProperty_m9152_init)
	{
		Dictionary_2_t545_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t545_0_0_0);
		TypeU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t658_0_0_0);
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Dictionary_2__ctor_m5289_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m5289_GenericMethod);
		Dictionary_2_Add_m5290_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m5290_GenericMethod);
		Dictionary_2_TryGetValue_m5291_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m5291_GenericMethod);
		MethodCall_InitMethodProperty_m9152_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t545 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0101;
		}
	}
	{
		Dictionary_2_t545 * L_2 = ((MethodCall_t1687_StaticFields*)InitializedTypeInfo(&MethodCall_t1687_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map1F_10;
		if (L_2)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_t545 * L_3 = (Dictionary_2_t545 *)il2cpp_codegen_object_new (Dictionary_2_t545_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5289(L_3, 7, /*hidden argument*/Dictionary_2__ctor_m5289_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t545 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_4, (String_t*) &_stringLiteral1773, 0);
		Dictionary_2_t545 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_5, (String_t*) &_stringLiteral1772, 1);
		Dictionary_2_t545 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_6, (String_t*) &_stringLiteral1774, 2);
		Dictionary_2_t545 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_7, (String_t*) &_stringLiteral1775, 3);
		Dictionary_2_t545 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_8, (String_t*) &_stringLiteral1776, 4);
		Dictionary_2_t545 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_9, (String_t*) &_stringLiteral1771, 5);
		Dictionary_2_t545 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_10, (String_t*) &_stringLiteral1779, 6);
		Dictionary_2_t545 * L_11 = V_1;
		((MethodCall_t1687_StaticFields*)InitializedTypeInfo(&MethodCall_t1687_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map1F_10 = L_11;
	}

IL_0070:
	{
		Dictionary_2_t545 * L_12 = ((MethodCall_t1687_StaticFields*)InitializedTypeInfo(&MethodCall_t1687_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map1F_10;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m5291_MethodInfo_var, L_12, L_13, (&V_2));
		if (!L_14)
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_15 = V_2;
		if (L_15 == 0)
		{
			goto IL_00a6;
		}
		if (L_15 == 1)
		{
			goto IL_00b3;
		}
		if (L_15 == 2)
		{
			goto IL_00c0;
		}
		if (L_15 == 3)
		{
			goto IL_00cd;
		}
		if (L_15 == 4)
		{
			goto IL_00da;
		}
		if (L_15 == 5)
		{
			goto IL_00e7;
		}
		if (L_15 == 6)
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_0101;
	}

IL_00a6:
	{
		Object_t * L_16 = ___value;
		__this->____typeName_1 = ((String_t*)Castclass(L_16, (&String_t_il2cpp_TypeInfo)));
		return;
	}

IL_00b3:
	{
		Object_t * L_17 = ___value;
		__this->____methodName_2 = ((String_t*)Castclass(L_17, (&String_t_il2cpp_TypeInfo)));
		return;
	}

IL_00c0:
	{
		Object_t * L_18 = ___value;
		__this->____methodSignature_4 = ((TypeU5BU5D_t658*)Castclass(L_18, TypeU5BU5D_t658_il2cpp_TypeInfo_var));
		return;
	}

IL_00cd:
	{
		Object_t * L_19 = ___value;
		__this->____args_3 = ((ObjectU5BU5D_t76*)Castclass(L_19, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		return;
	}

IL_00da:
	{
		Object_t * L_20 = ___value;
		__this->____callContext_6 = ((LogicalCallContext_t1693 *)Castclass(L_20, InitializedTypeInfo(&LogicalCallContext_t1693_il2cpp_TypeInfo)));
		return;
	}

IL_00e7:
	{
		Object_t * L_21 = ___value;
		__this->____uri_0 = ((String_t*)Castclass(L_21, (&String_t_il2cpp_TypeInfo)));
		return;
	}

IL_00f4:
	{
		Object_t * L_22 = ___value;
		__this->____genericArguments_7 = ((TypeU5BU5D_t658*)Castclass(L_22, TypeU5BU5D_t658_il2cpp_TypeInfo_var));
		return;
	}

IL_0101:
	{
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&MethodCall_get_Properties_m9159_MethodInfo, __this);
		String_t* L_24 = ___key;
		Object_t * L_25 = ___value;
		NullCheck(L_23);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(&IDictionary_set_Item_m5217_MethodInfo, L_23, L_24, L_25);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodCall_GetObjectData_m9153 (MethodCall_t1687 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	DictionaryEntry_t1014  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t708 * L_0 = ___info;
		String_t* L_1 = (__this->____typeName_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5257(L_0, (String_t*) &_stringLiteral1773, L_1, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		SerializationInfo_t708 * L_2 = ___info;
		String_t* L_3 = (__this->____methodName_2);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5257(L_2, (String_t*) &_stringLiteral1772, L_3, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		SerializationInfo_t708 * L_4 = ___info;
		TypeU5BU5D_t658* L_5 = (__this->____methodSignature_4);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5257(L_4, (String_t*) &_stringLiteral1774, (Object_t *)(Object_t *)L_5, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		SerializationInfo_t708 * L_6 = ___info;
		ObjectU5BU5D_t76* L_7 = (__this->____args_3);
		NullCheck(L_6);
		SerializationInfo_AddValue_m5257(L_6, (String_t*) &_stringLiteral1775, (Object_t *)(Object_t *)L_7, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		SerializationInfo_t708 * L_8 = ___info;
		LogicalCallContext_t1693 * L_9 = (__this->____callContext_6);
		NullCheck(L_8);
		SerializationInfo_AddValue_m5257(L_8, (String_t*) &_stringLiteral1776, L_9, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		SerializationInfo_t708 * L_10 = ___info;
		String_t* L_11 = (__this->____uri_0);
		NullCheck(L_10);
		SerializationInfo_AddValue_m5257(L_10, (String_t*) &_stringLiteral1771, L_11, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		SerializationInfo_t708 * L_12 = ___info;
		TypeU5BU5D_t658* L_13 = (__this->____genericArguments_7);
		NullCheck(L_12);
		SerializationInfo_AddValue_m5257(L_12, (String_t*) &_stringLiteral1779, (Object_t *)(Object_t *)L_13, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		Object_t * L_14 = (__this->___InternalProperties_9);
		if (!L_14)
		{
			goto IL_00ce;
		}
	}
	{
		Object_t * L_15 = (__this->___InternalProperties_9);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IDictionary_GetEnumerator_m5224_MethodInfo, L_15);
		V_1 = L_16;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_008d:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3928_MethodInfo, L_17);
			V_0 = ((*(DictionaryEntry_t1014 *)((DictionaryEntry_t1014 *)UnBox (L_18, InitializedTypeInfo(&DictionaryEntry_t1014_il2cpp_TypeInfo)))));
			SerializationInfo_t708 * L_19 = ___info;
			Object_t * L_20 = DictionaryEntry_get_Key_m7952((&V_0), /*hidden argument*/&DictionaryEntry_get_Key_m7952_MethodInfo);
			Object_t * L_21 = DictionaryEntry_get_Value_m7953((&V_0), /*hidden argument*/&DictionaryEntry_get_Value_m7953_MethodInfo);
			NullCheck(L_19);
			SerializationInfo_AddValue_m5257(L_19, ((String_t*)Castclass(L_20, (&String_t_il2cpp_TypeInfo))), L_21, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		}

IL_00b2:
		{
			Object_t * L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_22);
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_00ba:
		{
			IL2CPP_LEAVE(0xCE, FINALLY_00bc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_00bc;
	}

FINALLY_00bc:
	{ // begin finally (depth: 1)
		{
			Object_t * L_24 = V_1;
			V_2 = ((Object_t *)IsInst(L_24, InitializedTypeInfo(&IDisposable_t127_il2cpp_TypeInfo)));
			Object_t * L_25 = V_2;
			if (L_25)
			{
				goto IL_00c7;
			}
		}

IL_00c6:
		{
			IL2CPP_END_FINALLY(188)
		}

IL_00c7:
		{
			Object_t * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_26);
			IL2CPP_END_FINALLY(188)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(188)
	{
		IL2CPP_JUMP_TBL(0xCE, IL_00ce)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_00ce:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern MethodInfo MethodCall_get_Args_m9154_MethodInfo;
extern "C" ObjectU5BU5D_t76* MethodCall_get_Args_m9154 (MethodCall_t1687 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = (__this->____args_3);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern MethodInfo MethodCall_get_LogicalCallContext_m9155_MethodInfo;
extern "C" LogicalCallContext_t1693 * MethodCall_get_LogicalCallContext_m9155 (MethodCall_t1687 * __this, MethodInfo* method)
{
	{
		LogicalCallContext_t1693 * L_0 = (__this->____callContext_6);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		LogicalCallContext_t1693 * L_1 = (LogicalCallContext_t1693 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LogicalCallContext_t1693_il2cpp_TypeInfo));
		LogicalCallContext__ctor_m9143(L_1, /*hidden argument*/&LogicalCallContext__ctor_m9143_MethodInfo);
		__this->____callContext_6 = L_1;
	}

IL_0013:
	{
		LogicalCallContext_t1693 * L_2 = (__this->____callContext_6);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C" MethodBase_t772 * MethodCall_get_MethodBase_m9156 (MethodCall_t1687 * __this, MethodInfo* method)
{
	{
		MethodBase_t772 * L_0 = (__this->____methodBase_5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MethodCall_ResolveMethod_m9165(__this, /*hidden argument*/&MethodCall_ResolveMethod_m9165_MethodInfo);
	}

IL_000e:
	{
		MethodBase_t772 * L_1 = (__this->____methodBase_5);
		return L_1;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern MethodInfo MethodCall_get_MethodName_m9157_MethodInfo;
extern "C" String_t* MethodCall_get_MethodName_m9157 (MethodCall_t1687 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____methodName_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		MethodBase_t772 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3952_MethodInfo, L_1);
		__this->____methodName_2 = L_2;
	}

IL_0019:
	{
		String_t* L_3 = (__this->____methodName_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern MethodInfo MethodCall_get_MethodSignature_m9158_MethodInfo;
extern TypeInfo* TypeU5BU5D_t658_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodCall_get_MethodSignature_m9158 (MethodCall_t1687 * __this, MethodInfo* method)
{
	static bool MethodCall_get_MethodSignature_m9158_init;
	if (!MethodCall_get_MethodSignature_m9158_init)
	{
		TypeU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t658_0_0_0);
		MethodCall_get_MethodSignature_m9158_init = true;
	}
	ParameterInfoU5BU5D_t783* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t658* L_0 = (__this->____methodSignature_4);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t772 * L_1 = (__this->____methodBase_5);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t772 * L_2 = (__this->____methodBase_5);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t783* L_3 = (ParameterInfoU5BU5D_t783*)VirtFuncInvoker0< ParameterInfoU5BU5D_t783* >::Invoke(&MethodBase_GetParameters_m3984_MethodInfo, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t783* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_4 = ((TypeU5BU5D_t658*)SZArrayNew(TypeU5BU5D_t658_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		TypeU5BU5D_t658* L_5 = (__this->____methodSignature_4);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t783* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3985_MethodInfo, (*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t783* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		TypeU5BU5D_t658* L_14 = (__this->____methodSignature_4);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C" Object_t * MethodCall_get_Properties_m9159 (MethodCall_t1687 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___ExternalProperties_8);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(&MethodCall_InitDictionary_m9160_MethodInfo, __this);
	}

IL_000e:
	{
		Object_t * L_1 = (__this->___ExternalProperties_8);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern "C" void MethodCall_InitDictionary_m9160 (MethodCall_t1687 * __this, MethodInfo* method)
{
	MethodCallDictionary_t1695 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MethodCallDictionary_t1695_il2cpp_TypeInfo));
		MethodCallDictionary_t1695 * L_0 = (MethodCallDictionary_t1695 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MethodCallDictionary_t1695_il2cpp_TypeInfo));
		MethodCallDictionary__ctor_m9169(L_0, __this, /*hidden argument*/&MethodCallDictionary__ctor_m9169_MethodInfo);
		V_0 = L_0;
		MethodCallDictionary_t1695 * L_1 = V_0;
		__this->___ExternalProperties_8 = L_1;
		MethodCallDictionary_t1695 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m9181(L_2, /*hidden argument*/&MethodDictionary_GetInternalProperties_m9181_MethodInfo);
		__this->___InternalProperties_9 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C" String_t* MethodCall_get_TypeName_m9161 (MethodCall_t1687 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____typeName_1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		MethodBase_t772 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m4015_MethodInfo, L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_2);
		__this->____typeName_1 = L_3;
	}

IL_001e:
	{
		String_t* L_4 = (__this->____typeName_1);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern MethodInfo MethodCall_get_Uri_m9162_MethodInfo;
extern "C" String_t* MethodCall_get_Uri_m9162 (MethodCall_t1687 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C" void MethodCall_set_Uri_m9163 (MethodCall_t1687 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C" void MethodCall_Init_m9164 (MethodCall_t1687 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void MethodCall_ResolveMethod_m9165 (MethodCall_t1687 * __this, MethodInfo* method)
{
	static bool MethodCall_ResolveMethod_m9165_init;
	if (!MethodCall_ResolveMethod_m9165_init)
	{
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		MethodCall_ResolveMethod_m9165_init = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	Type_t * V_2 = {0};
	String_t* G_B5_0 = {0};
	{
		String_t* L_0 = (__this->____uri_0);
		if (!L_0)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_1 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Type_t * L_2 = RemotingServices_GetServerTypeForUri_m9293(NULL /*static, unused*/, L_1, /*hidden argument*/&RemotingServices_GetServerTypeForUri_m9293_MethodInfo);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_4 = (__this->____typeName_1);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_5 = (__this->____typeName_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral95, L_5, (String_t*) &_stringLiteral96, /*hidden argument*/&String_Concat_m380_MethodInfo);
		G_B5_0 = L_6;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B5_0 = L_7;
	}

IL_003e:
	{
		V_1 = G_B5_0;
		String_t* L_8 = V_1;
		String_t* L_9 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = String_Concat_m4006(NULL /*static, unused*/, (String_t*) &_stringLiteral1780, L_8, (String_t*) &_stringLiteral1781, L_9, /*hidden argument*/&String_Concat_m4006_MethodInfo);
		RemotingException_t1724 * L_11 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
		RemotingException__ctor_m9288(L_11, L_10, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005b:
	{
		String_t* L_12 = (__this->____typeName_1);
		Type_t * L_13 = V_0;
		Type_t * L_14 = MethodCall_CastTo_m9166(__this, L_12, L_13, /*hidden argument*/&MethodCall_CastTo_m9166_MethodInfo);
		V_2 = L_14;
		Type_t * L_15 = V_2;
		if (L_15)
		{
			goto IL_00a7;
		}
	}
	{
		StringU5BU5D_t87* L_16 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, 5));
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral1782);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 0)) = (String_t*)(String_t*) &_stringLiteral1782;
		StringU5BU5D_t87* L_17 = L_16;
		String_t* L_18 = (__this->____typeName_1);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, 1)) = (String_t*)L_18;
		StringU5BU5D_t87* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral1783);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2)) = (String_t*)(String_t*) &_stringLiteral1783;
		StringU5BU5D_t87* L_20 = L_19;
		Type_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_21);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_22);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 3)) = (String_t*)L_22;
		StringU5BU5D_t87* L_23 = L_20;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 4);
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral89);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, 4)) = (String_t*)(String_t*) &_stringLiteral89;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_24 = String_Concat_m3849(NULL /*static, unused*/, L_23, /*hidden argument*/&String_Concat_m3849_MethodInfo);
		RemotingException_t1724 * L_25 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
		RemotingException__ctor_m9288(L_25, L_24, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00a7:
	{
		Type_t * L_26 = V_2;
		String_t* L_27 = (__this->____methodName_2);
		TypeU5BU5D_t658* L_28 = (__this->____methodSignature_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		MethodBase_t772 * L_29 = RemotingServices_GetMethodBaseFromName_m9298(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/&RemotingServices_GetMethodBaseFromName_m9298_MethodInfo);
		__this->____methodBase_5 = L_29;
		MethodBase_t772 * L_30 = (__this->____methodBase_5);
		if (L_30)
		{
			goto IL_00f5;
		}
	}
	{
		ObjectU5BU5D_t76* L_31 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 4));
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, (String_t*) &_stringLiteral1784);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)(String_t*) &_stringLiteral1784;
		ObjectU5BU5D_t76* L_32 = L_31;
		String_t* L_33 = (__this->____methodName_2);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		ArrayElementTypeCheck (L_32, L_33);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 1)) = (Object_t *)L_33;
		ObjectU5BU5D_t76* L_34 = L_32;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 2);
		ArrayElementTypeCheck (L_34, (String_t*) &_stringLiteral1785);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 2)) = (Object_t *)(String_t*) &_stringLiteral1785;
		ObjectU5BU5D_t76* L_35 = L_34;
		Type_t * L_36 = V_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3)) = (Object_t *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_37 = String_Concat_m1872(NULL /*static, unused*/, L_35, /*hidden argument*/&String_Concat_m1872_MethodInfo);
		RemotingException_t1724 * L_38 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
		RemotingException__ctor_m9288(L_38, L_37, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
		il2cpp_codegen_raise_exception(L_38);
	}

IL_00f5:
	{
		Type_t * L_39 = V_2;
		Type_t * L_40 = V_0;
		if ((((Object_t*)(Type_t *)L_39) == ((Object_t*)(Type_t *)L_40)))
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_41 = V_2;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m7266_MethodInfo, L_41);
		if (!L_42)
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m7266_MethodInfo, L_43);
		if (L_44)
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_45 = V_0;
		MethodBase_t772 * L_46 = (__this->____methodBase_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		MethodBase_t772 * L_47 = RemotingServices_GetVirtualMethod_m9291(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/&RemotingServices_GetVirtualMethod_m9291_MethodInfo);
		__this->____methodBase_5 = L_47;
		MethodBase_t772 * L_48 = (__this->____methodBase_5);
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		ObjectU5BU5D_t76* L_49 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 4));
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 0);
		ArrayElementTypeCheck (L_49, (String_t*) &_stringLiteral1784);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 0)) = (Object_t *)(String_t*) &_stringLiteral1784;
		ObjectU5BU5D_t76* L_50 = L_49;
		String_t* L_51 = (__this->____methodName_2);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		ArrayElementTypeCheck (L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 1)) = (Object_t *)L_51;
		ObjectU5BU5D_t76* L_52 = L_50;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 2);
		ArrayElementTypeCheck (L_52, (String_t*) &_stringLiteral1785);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 2)) = (Object_t *)(String_t*) &_stringLiteral1785;
		ObjectU5BU5D_t76* L_53 = L_52;
		Type_t * L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 3);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 3)) = (Object_t *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_55 = String_Concat_m1872(NULL /*static, unused*/, L_53, /*hidden argument*/&String_Concat_m1872_MethodInfo);
		RemotingException_t1724 * L_56 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
		RemotingException__ctor_m9288(L_56, L_55, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_0151:
	{
		goto IL_0188;
	}

IL_0153:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		MethodBase_t772 * L_57 = RemotingServices_GetMethodBaseFromMethodMessage_m9297(NULL /*static, unused*/, __this, /*hidden argument*/&RemotingServices_GetMethodBaseFromMethodMessage_m9297_MethodInfo);
		__this->____methodBase_5 = L_57;
		MethodBase_t772 * L_58 = (__this->____methodBase_5);
		if (L_58)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_59 = (__this->____methodName_2);
		String_t* L_60 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MethodCall_get_TypeName_m9161_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_61 = String_Concat_m4006(NULL /*static, unused*/, (String_t*) &_stringLiteral1784, L_59, (String_t*) &_stringLiteral1785, L_60, /*hidden argument*/&String_Concat_m4006_MethodInfo);
		RemotingException_t1724 * L_62 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
		RemotingException__ctor_m9288(L_62, L_61, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_0188:
	{
		MethodBase_t772 * L_63 = (__this->____methodBase_5);
		NullCheck(L_63);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethod_m8841_MethodInfo, L_63);
		if (!L_64)
		{
			goto IL_01d1;
		}
	}
	{
		MethodBase_t772 * L_65 = (__this->____methodBase_5);
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_ContainsGenericParameters_m8839_MethodInfo, L_65);
		if (!L_66)
		{
			goto IL_01d1;
		}
	}
	{
		TypeU5BU5D_t658* L_67 = MethodCall_get_GenericArguments_m9168(__this, /*hidden argument*/&MethodCall_get_GenericArguments_m9168_MethodInfo);
		if (L_67)
		{
			goto IL_01b5;
		}
	}
	{
		RemotingException_t1724 * L_68 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
		RemotingException__ctor_m9288(L_68, (String_t*) &_stringLiteral1786, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
		il2cpp_codegen_raise_exception(L_68);
	}

IL_01b5:
	{
		MethodBase_t772 * L_69 = (__this->____methodBase_5);
		TypeU5BU5D_t658* L_70 = MethodCall_get_GenericArguments_m9168(__this, /*hidden argument*/&MethodCall_get_GenericArguments_m9168_MethodInfo);
		NullCheck(((MethodInfo_t *)Castclass(L_69, InitializedTypeInfo(&MethodInfo_t_il2cpp_TypeInfo))));
		MethodInfo_t * L_71 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t658* >::Invoke(&MethodInfo_MakeGenericMethod_m8845_MethodInfo, ((MethodInfo_t *)Castclass(L_69, InitializedTypeInfo(&MethodInfo_t_il2cpp_TypeInfo))), L_70);
		__this->____methodBase_5 = L_71;
	}

IL_01d1:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern "C" Type_t * MethodCall_CastTo_m9166 (MethodCall_t1687 * __this, String_t* ___clientType, Type_t * ___serverType, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t658* V_1 = {0};
	Type_t * V_2 = {0};
	TypeU5BU5D_t658* V_3 = {0};
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___clientType;
		String_t* L_1 = MethodCall_GetTypeNameFromAssemblyQualifiedName_m9167(NULL /*static, unused*/, L_0, /*hidden argument*/&MethodCall_GetTypeNameFromAssemblyQualifiedName_m9167_MethodInfo);
		___clientType = L_1;
		String_t* L_2 = ___clientType;
		Type_t * L_3 = ___serverType;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m2110(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_6 = ___serverType;
		return L_6;
	}

IL_001a:
	{
		Type_t * L_7 = ___serverType;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3991_MethodInfo, L_7);
		V_0 = L_8;
		goto IL_003a;
	}

IL_0023:
	{
		String_t* L_9 = ___clientType;
		Type_t * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_10);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_12 = String_op_Equality_m2110(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_12)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_13 = V_0;
		return L_13;
	}

IL_0033:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3991_MethodInfo, L_14);
		V_0 = L_15;
	}

IL_003a:
	{
		Type_t * L_16 = V_0;
		if (L_16)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_17 = ___serverType;
		NullCheck(L_17);
		TypeU5BU5D_t658* L_18 = (TypeU5BU5D_t658*)VirtFuncInvoker0< TypeU5BU5D_t658* >::Invoke(&Type_GetInterfaces_m10988_MethodInfo, L_17);
		V_1 = L_18;
		TypeU5BU5D_t658* L_19 = V_1;
		V_3 = L_19;
		V_4 = 0;
		goto IL_0066;
	}

IL_004b:
	{
		TypeU5BU5D_t658* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_2 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_20, L_22));
		String_t* L_23 = ___clientType;
		Type_t * L_24 = V_2;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_24);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_26 = String_op_Equality_m2110(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_26)
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_27 = V_2;
		return L_27;
	}

IL_0060:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0066:
	{
		int32_t L_29 = V_4;
		TypeU5BU5D_t658* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((Array_t *)L_30)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern "C" String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m9167 (Object_t * __this /* static, unused */, String_t* ___aqname, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	String_t* G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = ___aqname;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m3838(L_0, (String_t*) &_stringLiteral1787, /*hidden argument*/&String_IndexOf_m3838_MethodInfo);
		V_0 = L_1;
		String_t* L_2 = ___aqname;
		int32_t L_3 = V_0;
		G_B1_0 = ((int32_t)44);
		G_B1_1 = L_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = ((int32_t)44);
			G_B2_1 = L_2;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		G_B3_0 = ((int32_t)((int32_t)L_4+(int32_t)2));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		NullCheck(G_B3_2);
		int32_t L_5 = String_IndexOf_m3827(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/&String_IndexOf_m3827_MethodInfo);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_7 = ___aqname;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m2129(L_7, 0, L_8, /*hidden argument*/&String_Substring_m2129_MethodInfo);
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m3828(L_9, /*hidden argument*/&String_Trim_m3828_MethodInfo);
		___aqname = L_10;
	}

IL_0034:
	{
		String_t* L_11 = ___aqname;
		return L_11;
	}
}
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C" TypeU5BU5D_t658* MethodCall_get_GenericArguments_m9168 (MethodCall_t1687 * __this, MethodInfo* method)
{
	TypeU5BU5D_t658* V_0 = {0};
	{
		TypeU5BU5D_t658* L_0 = (__this->____genericArguments_7);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		TypeU5BU5D_t658* L_1 = (__this->____genericArguments_7);
		return L_1;
	}

IL_000f:
	{
		MethodBase_t772 * L_2 = (MethodBase_t772 *)VirtFuncInvoker0< MethodBase_t772 * >::Invoke(&MethodCall_get_MethodBase_m9156_MethodInfo, __this);
		NullCheck(L_2);
		TypeU5BU5D_t658* L_3 = (TypeU5BU5D_t658*)VirtFuncInvoker0< TypeU5BU5D_t658* >::Invoke(&MethodBase_GetGenericArguments_m8838_MethodInfo, L_2);
		TypeU5BU5D_t658* L_4 = L_3;
		V_0 = L_4;
		__this->____genericArguments_7 = L_4;
		TypeU5BU5D_t658* L_5 = V_0;
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodCallDictionary__ctor_m9169 (MethodCallDictionary_t1695 * __this, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m9177(__this, L_0, /*hidden argument*/&MethodDictionary__ctor_m9177_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MethodCallDictionary_t1695_il2cpp_TypeInfo));
		StringU5BU5D_t87* L_1 = ((MethodCallDictionary_t1695_StaticFields*)InitializedTypeInfo(&MethodCallDictionary_t1695_il2cpp_TypeInfo)->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m9179(__this, L_1, /*hidden argument*/&MethodDictionary_set_MethodKeys_m9179_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.cctor()
extern MethodInfo MethodCallDictionary__cctor_m9170_MethodInfo;
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__cctor_m9170 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool MethodCallDictionary__cctor_m9170_init;
	if (!MethodCallDictionary__cctor_m9170_init)
	{
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		MethodCallDictionary__cctor_m9170_init = true;
	}
	{
		StringU5BU5D_t87* L_0 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, 6));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1771);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1771;
		StringU5BU5D_t87* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral1772);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral1772;
		StringU5BU5D_t87* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1773);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral1773;
		StringU5BU5D_t87* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1774);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral1774;
		StringU5BU5D_t87* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral1775);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral1775;
		StringU5BU5D_t87* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1776);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral1776;
		((MethodCallDictionary_t1695_StaticFields*)InitializedTypeInfo(&MethodCallDictionary_t1695_il2cpp_TypeInfo)->static_fields)->___InternalKeys_6 = L_5;
		return;
	}
}
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DictionaryEnumerator_t1697_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_MethodDeclarations.h"

extern MethodInfo DictionaryEnumerator_get_Entry_m9174_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m5228_MethodInfo;
extern MethodInfo IDictionaryEnumerator_get_Entry_m10973_MethodInfo;
extern MethodInfo IDictionaryEnumerator_get_Key_m5271_MethodInfo;
extern MethodInfo MethodDictionary_IsOverridenKey_m9182_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern MethodInfo DictionaryEnumerator__ctor_m9171_MethodInfo;
extern "C" void DictionaryEnumerator__ctor_m9171 (DictionaryEnumerator_t1697 * __this, MethodDictionary_t1689 * ___methodDictionary, MethodInfo* method)
{
	Object_t * V_0 = {0};
	DictionaryEnumerator_t1697 * G_B2_0 = {0};
	DictionaryEnumerator_t1697 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	DictionaryEnumerator_t1697 * G_B3_1 = {0};
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		MethodDictionary_t1689 * L_0 = ___methodDictionary;
		__this->____methodDictionary_0 = L_0;
		MethodDictionary_t1689 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		Object_t * L_2 = (L_1->____internalProperties_0);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		MethodDictionary_t1689 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->____internalProperties_0);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IDictionary_GetEnumerator_m5224_MethodInfo, L_4);
		V_0 = L_5;
		Object_t * L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		NullCheck(G_B3_1);
		G_B3_1->____hashtableEnum_1 = G_B3_0;
		__this->____posMethod_2 = (-1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern MethodInfo DictionaryEnumerator_get_Current_m9172_MethodInfo;
extern "C" Object_t * DictionaryEnumerator_get_Current_m9172 (DictionaryEnumerator_t1697 * __this, MethodInfo* method)
{
	DictionaryEntry_t1014  V_0 = {0};
	{
		DictionaryEntry_t1014  L_0 = (DictionaryEntry_t1014 )VirtFuncInvoker0< DictionaryEntry_t1014  >::Invoke(&DictionaryEnumerator_get_Entry_m9174_MethodInfo, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m7953((&V_0), /*hidden argument*/&DictionaryEntry_get_Value_m7953_MethodInfo);
		return L_1;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern MethodInfo DictionaryEnumerator_MoveNext_m9173_MethodInfo;
extern "C" bool DictionaryEnumerator_MoveNext_m9173 (DictionaryEnumerator_t1697 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = (__this->____posMethod_2);
		__this->____posMethod_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = (__this->____posMethod_2);
		MethodDictionary_t1689 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		StringU5BU5D_t87* L_4 = (L_3->____methodKeys_2);
		NullCheck(L_4);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return 1;
	}

IL_002f:
	{
		__this->____posMethod_2 = ((int32_t)-2);
	}

IL_0037:
	{
		Object_t * L_5 = (__this->____hashtableEnum_1);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		goto IL_0062;
	}

IL_0043:
	{
		MethodDictionary_t1689 * L_6 = (__this->____methodDictionary_0);
		Object_t * L_7 = (__this->____hashtableEnum_1);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IDictionaryEnumerator_get_Key_m5271_MethodInfo, L_7);
		NullCheck(L_6);
		bool L_9 = MethodDictionary_IsOverridenKey_m9182(L_6, ((String_t*)Castclass(L_8, (&String_t_il2cpp_TypeInfo))), /*hidden argument*/&MethodDictionary_IsOverridenKey_m9182_MethodInfo);
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		return 1;
	}

IL_0062:
	{
		Object_t * L_10 = (__this->____hashtableEnum_1);
		NullCheck(L_10);
		bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_10);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}
}
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern "C" DictionaryEntry_t1014  DictionaryEnumerator_get_Entry_m9174 (DictionaryEnumerator_t1697 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		MethodDictionary_t1689 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		StringU5BU5D_t87* L_2 = (L_1->____methodKeys_2);
		int32_t L_3 = (__this->____posMethod_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		MethodDictionary_t1689 * L_5 = (__this->____methodDictionary_0);
		MethodDictionary_t1689 * L_6 = (__this->____methodDictionary_0);
		NullCheck(L_6);
		StringU5BU5D_t87* L_7 = (L_6->____methodKeys_2);
		int32_t L_8 = (__this->____posMethod_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck(L_5);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&MethodDictionary_GetMethodProperty_m9185_MethodInfo, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)));
		DictionaryEntry_t1014  L_11 = {0};
		DictionaryEntry__ctor_m5228(&L_11, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)), L_10, /*hidden argument*/&DictionaryEntry__ctor_m5228_MethodInfo);
		return L_11;
	}

IL_003e:
	{
		int32_t L_12 = (__this->____posMethod_2);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		Object_t * L_13 = (__this->____hashtableEnum_1);
		if (L_13)
		{
			goto IL_005a;
		}
	}

IL_004f:
	{
		InvalidOperationException_t1189 * L_14 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_14, (String_t*) &_stringLiteral1790, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		Object_t * L_15 = (__this->____hashtableEnum_1);
		NullCheck(L_15);
		DictionaryEntry_t1014  L_16 = (DictionaryEntry_t1014 )InterfaceFuncInvoker0< DictionaryEntry_t1014  >::Invoke(&IDictionaryEnumerator_get_Entry_m10973_MethodInfo, L_15);
		return L_16;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern MethodInfo DictionaryEnumerator_get_Key_m9175_MethodInfo;
extern "C" Object_t * DictionaryEnumerator_get_Key_m9175 (DictionaryEnumerator_t1697 * __this, MethodInfo* method)
{
	DictionaryEntry_t1014  V_0 = {0};
	{
		DictionaryEntry_t1014  L_0 = (DictionaryEntry_t1014 )VirtFuncInvoker0< DictionaryEntry_t1014  >::Invoke(&DictionaryEnumerator_get_Entry_m9174_MethodInfo, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Key_m7952((&V_0), /*hidden argument*/&DictionaryEntry_get_Key_m7952_MethodInfo);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern MethodInfo DictionaryEnumerator_get_Value_m9176_MethodInfo;
extern "C" Object_t * DictionaryEnumerator_get_Value_m9176 (DictionaryEnumerator_t1697 * __this, MethodInfo* method)
{
	DictionaryEntry_t1014  V_0 = {0};
	{
		DictionaryEntry_t1014  L_0 = (DictionaryEntry_t1014 )VirtFuncInvoker0< DictionaryEntry_t1014  >::Invoke(&DictionaryEnumerator_get_Entry_m9174_MethodInfo, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m7953((&V_0), /*hidden argument*/&DictionaryEntry_get_Value_m7953_MethodInfo);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IMethodMessage_t1696_il2cpp_TypeInfo;
extern TypeInfo IMethodReturnMessage_t1699_il2cpp_TypeInfo;
extern TypeInfo IInternalMessage_t1962_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern MethodInfo IDictionary_get_Item_m5216_MethodInfo;
extern MethodInfo MethodDictionary_Add_m9188_MethodInfo;
extern MethodInfo MethodDictionary_AllocInternalProperties_m9180_MethodInfo;
extern MethodInfo IMethodMessage_get_Uri_m11016_MethodInfo;
extern MethodInfo IMethodMessage_get_MethodName_m11017_MethodInfo;
extern MethodInfo IMethodMessage_get_TypeName_m11018_MethodInfo;
extern MethodInfo IMethodMessage_get_MethodSignature_m11019_MethodInfo;
extern MethodInfo IMethodMessage_get_LogicalCallContext_m11020_MethodInfo;
extern MethodInfo IMethodMessage_get_Args_m11021_MethodInfo;
extern MethodInfo IMethodReturnMessage_get_OutArgs_m11022_MethodInfo;
extern MethodInfo IMethodReturnMessage_get_ReturnValue_m11023_MethodInfo;
extern MethodInfo IInternalMessage_set_Uri_m11024_MethodInfo;
extern MethodInfo IDictionary_Contains_m5222_MethodInfo;
extern MethodInfo IDictionary_Remove_m5225_MethodInfo;
extern MethodInfo MethodDictionary_get_Values_m9187_MethodInfo;
extern MethodInfo ICollection_CopyTo_m5223_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodDictionary__ctor_m9177 (MethodDictionary_t1689 * __this, Object_t * ___message, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t * L_0 = ___message;
		__this->____message_1 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m9178_MethodInfo;
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m9178 (MethodDictionary_t1689 * __this, MethodInfo* method)
{
	{
		DictionaryEnumerator_t1697 * L_0 = (DictionaryEnumerator_t1697 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DictionaryEnumerator_t1697_il2cpp_TypeInfo));
		DictionaryEnumerator__ctor_m9171(L_0, __this, /*hidden argument*/&DictionaryEnumerator__ctor_m9171_MethodInfo);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C" void MethodDictionary_set_MethodKeys_m9179 (MethodDictionary_t1689 * __this, StringU5BU5D_t87* ___value, MethodInfo* method)
{
	{
		StringU5BU5D_t87* L_0 = ___value;
		__this->____methodKeys_2 = L_0;
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m9180 (MethodDictionary_t1689 * __this, MethodInfo* method)
{
	{
		__this->____ownProperties_3 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable_t1007 * L_0 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_0, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m9181 (MethodDictionary_t1689 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&MethodDictionary_AllocInternalProperties_m9180_MethodInfo, __this);
		__this->____internalProperties_0 = L_1;
	}

IL_0014:
	{
		Object_t * L_2 = (__this->____internalProperties_0);
		return L_2;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern "C" bool MethodDictionary_IsOverridenKey_m9182 (MethodDictionary_t1689 * __this, String_t* ___key, MethodInfo* method)
{
	String_t* V_0 = {0};
	StringU5BU5D_t87* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->____ownProperties_3);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		StringU5BU5D_t87* L_1 = (__this->____methodKeys_2);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		StringU5BU5D_t87* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4));
		String_t* L_5 = ___key;
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_7 = String_op_Equality_m2110(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_2;
		StringU5BU5D_t87* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern MethodInfo MethodDictionary_get_Item_m9183_MethodInfo;
extern "C" Object_t * MethodDictionary_get_Item_m9183 (MethodDictionary_t1689 * __this, Object_t * ___key, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		V_1 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		StringU5BU5D_t87* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m2110(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&MethodDictionary_GetMethodProperty_m9185_MethodInfo, __this, L_6);
		return L_7;
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t87* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_12 = (__this->____internalProperties_0);
		Object_t * L_13 = ___key;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(&IDictionary_get_Item_m5216_MethodInfo, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern MethodInfo MethodDictionary_set_Item_m9184_MethodInfo;
extern "C" void MethodDictionary_set_Item_m9184 (MethodDictionary_t1689 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&MethodDictionary_Add_m9188_MethodInfo, __this, L_0, L_1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern TypeInfo* Dictionary_2_t545_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m5289_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m5290_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m5291_MethodInfo_var;
extern "C" Object_t * MethodDictionary_GetMethodProperty_m9185 (MethodDictionary_t1689 * __this, String_t* ___key, MethodInfo* method)
{
	static bool MethodDictionary_GetMethodProperty_m9185_init;
	if (!MethodDictionary_GetMethodProperty_m9185_init)
	{
		Dictionary_2_t545_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t545_0_0_0);
		Dictionary_2__ctor_m5289_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m5289_GenericMethod);
		Dictionary_2_Add_m5290_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m5290_GenericMethod);
		Dictionary_2_TryGetValue_m5291_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m5291_GenericMethod);
		MethodDictionary_GetMethodProperty_m9185_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t545 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0120;
		}
	}
	{
		Dictionary_2_t545 * L_2 = ((MethodDictionary_t1689_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1689_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map21_4;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		Dictionary_2_t545 * L_3 = (Dictionary_2_t545 *)il2cpp_codegen_object_new (Dictionary_2_t545_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5289(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m5289_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t545 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_4, (String_t*) &_stringLiteral1771, 0);
		Dictionary_2_t545 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_5, (String_t*) &_stringLiteral1772, 1);
		Dictionary_2_t545 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_6, (String_t*) &_stringLiteral1773, 2);
		Dictionary_2_t545 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_7, (String_t*) &_stringLiteral1774, 3);
		Dictionary_2_t545 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_8, (String_t*) &_stringLiteral1776, 4);
		Dictionary_2_t545 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_9, (String_t*) &_stringLiteral1775, 5);
		Dictionary_2_t545 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_10, (String_t*) &_stringLiteral1788, 6);
		Dictionary_2_t545 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_11, (String_t*) &_stringLiteral1789, 7);
		Dictionary_2_t545 * L_12 = V_1;
		((MethodDictionary_t1689_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1689_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map21_4 = L_12;
	}

IL_007c:
	{
		Dictionary_2_t545 * L_13 = ((MethodDictionary_t1689_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1689_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map21_4;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m5291_MethodInfo_var, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00b6;
		}
		if (L_16 == 1)
		{
			goto IL_00c2;
		}
		if (L_16 == 2)
		{
			goto IL_00ce;
		}
		if (L_16 == 3)
		{
			goto IL_00da;
		}
		if (L_16 == 4)
		{
			goto IL_00e6;
		}
		if (L_16 == 5)
		{
			goto IL_00f2;
		}
		if (L_16 == 6)
		{
			goto IL_00fe;
		}
		if (L_16 == 7)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0120;
	}

IL_00b6:
	{
		Object_t * L_17 = (__this->____message_1);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IMethodMessage_get_Uri_m11016_MethodInfo, L_17);
		return L_18;
	}

IL_00c2:
	{
		Object_t * L_19 = (__this->____message_1);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IMethodMessage_get_MethodName_m11017_MethodInfo, L_19);
		return L_20;
	}

IL_00ce:
	{
		Object_t * L_21 = (__this->____message_1);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IMethodMessage_get_TypeName_m11018_MethodInfo, L_21);
		return L_22;
	}

IL_00da:
	{
		Object_t * L_23 = (__this->____message_1);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IMethodMessage_get_MethodSignature_m11019_MethodInfo, L_23);
		return L_24;
	}

IL_00e6:
	{
		Object_t * L_25 = (__this->____message_1);
		NullCheck(L_25);
		LogicalCallContext_t1693 * L_26 = (LogicalCallContext_t1693 *)InterfaceFuncInvoker0< LogicalCallContext_t1693 * >::Invoke(&IMethodMessage_get_LogicalCallContext_m11020_MethodInfo, L_25);
		return L_26;
	}

IL_00f2:
	{
		Object_t * L_27 = (__this->____message_1);
		NullCheck(L_27);
		ObjectU5BU5D_t76* L_28 = (ObjectU5BU5D_t76*)InterfaceFuncInvoker0< ObjectU5BU5D_t76* >::Invoke(&IMethodMessage_get_Args_m11021_MethodInfo, L_27);
		return (Object_t *)L_28;
	}

IL_00fe:
	{
		Object_t * L_29 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_29, InitializedTypeInfo(&IMethodReturnMessage_t1699_il2cpp_TypeInfo))));
		ObjectU5BU5D_t76* L_30 = (ObjectU5BU5D_t76*)InterfaceFuncInvoker0< ObjectU5BU5D_t76* >::Invoke(&IMethodReturnMessage_get_OutArgs_m11022_MethodInfo, ((Object_t *)Castclass(L_29, InitializedTypeInfo(&IMethodReturnMessage_t1699_il2cpp_TypeInfo))));
		return (Object_t *)L_30;
	}

IL_010f:
	{
		Object_t * L_31 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_31, InitializedTypeInfo(&IMethodReturnMessage_t1699_il2cpp_TypeInfo))));
		Object_t * L_32 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IMethodReturnMessage_get_ReturnValue_m11023_MethodInfo, ((Object_t *)Castclass(L_31, InitializedTypeInfo(&IMethodReturnMessage_t1699_il2cpp_TypeInfo))));
		return L_32;
	}

IL_0120:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* Dictionary_2_t545_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m5289_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m5290_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m5291_MethodInfo_var;
extern "C" void MethodDictionary_SetMethodProperty_m9186 (MethodDictionary_t1689 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool MethodDictionary_SetMethodProperty_m9186_init;
	if (!MethodDictionary_SetMethodProperty_m9186_init)
	{
		Dictionary_2_t545_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t545_0_0_0);
		Dictionary_2__ctor_m5289_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m5289_GenericMethod);
		Dictionary_2_Add_m5290_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m5290_GenericMethod);
		Dictionary_2_TryGetValue_m5291_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m5291_GenericMethod);
		MethodDictionary_SetMethodProperty_m9186_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t545 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c2;
		}
	}
	{
		Dictionary_2_t545 * L_2 = ((MethodDictionary_t1689_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1689_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map22_5;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		Dictionary_2_t545 * L_3 = (Dictionary_2_t545 *)il2cpp_codegen_object_new (Dictionary_2_t545_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5289(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m5289_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t545 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_4, (String_t*) &_stringLiteral1776, 0);
		Dictionary_2_t545 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_5, (String_t*) &_stringLiteral1788, 0);
		Dictionary_2_t545 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_6, (String_t*) &_stringLiteral1789, 0);
		Dictionary_2_t545 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_7, (String_t*) &_stringLiteral1772, 1);
		Dictionary_2_t545 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_8, (String_t*) &_stringLiteral1773, 1);
		Dictionary_2_t545 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_9, (String_t*) &_stringLiteral1774, 1);
		Dictionary_2_t545 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_10, (String_t*) &_stringLiteral1775, 1);
		Dictionary_2_t545 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_11, (String_t*) &_stringLiteral1771, 2);
		Dictionary_2_t545 * L_12 = V_1;
		((MethodDictionary_t1689_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1689_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map22_5 = L_12;
	}

IL_007c:
	{
		Dictionary_2_t545 * L_13 = ((MethodDictionary_t1689_StaticFields*)InitializedTypeInfo(&MethodDictionary_t1689_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map22_5;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m5291_MethodInfo_var, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_009f;
		}
		if (L_16 == 1)
		{
			goto IL_00a0;
		}
		if (L_16 == 2)
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00c2;
	}

IL_009f:
	{
		return;
	}

IL_00a0:
	{
		ArgumentException_t395 * L_17 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_17, (String_t*) &_stringLiteral1777, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		Object_t * L_18 = (__this->____message_1);
		Object_t * L_19 = ___value;
		NullCheck(((Object_t *)Castclass(L_18, InitializedTypeInfo(&IInternalMessage_t1962_il2cpp_TypeInfo))));
		InterfaceActionInvoker1< String_t* >::Invoke(&IInternalMessage_set_Uri_m11024_MethodInfo, ((Object_t *)Castclass(L_18, InitializedTypeInfo(&IInternalMessage_t1962_il2cpp_TypeInfo))), ((String_t*)Castclass(L_19, (&String_t_il2cpp_TypeInfo))));
		return;
	}

IL_00c2:
	{
		return;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern "C" Object_t * MethodDictionary_get_Values_m9187 (MethodDictionary_t1689 * __this, MethodInfo* method)
{
	ArrayList_t1020 * V_0 = {0};
	int32_t V_1 = 0;
	DictionaryEntry_t1014  V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList_t1020 * L_0 = (ArrayList_t1020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList__ctor_m5240(L_0, /*hidden argument*/&ArrayList__ctor_m5240_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		ArrayList_t1020 * L_1 = V_0;
		StringU5BU5D_t87* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&MethodDictionary_GetMethodProperty_m9185_MethodInfo, __this, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)));
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_1, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t87* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IDictionary_GetEnumerator_m5224_MethodInfo, L_10);
		V_3 = L_11;
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0044:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m3928_MethodInfo, L_12);
			V_2 = ((*(DictionaryEntry_t1014 *)((DictionaryEntry_t1014 *)UnBox (L_13, InitializedTypeInfo(&DictionaryEntry_t1014_il2cpp_TypeInfo)))));
			Object_t * L_14 = DictionaryEntry_get_Key_m7952((&V_2), /*hidden argument*/&DictionaryEntry_get_Key_m7952_MethodInfo);
			bool L_15 = MethodDictionary_IsOverridenKey_m9182(__this, ((String_t*)Castclass(L_14, (&String_t_il2cpp_TypeInfo))), /*hidden argument*/&MethodDictionary_IsOverridenKey_m9182_MethodInfo);
			if (L_15)
			{
				goto IL_0072;
			}
		}

IL_0064:
		{
			ArrayList_t1020 * L_16 = V_0;
			Object_t * L_17 = DictionaryEntry_get_Value_m7953((&V_2), /*hidden argument*/&DictionaryEntry_get_Value_m7953_MethodInfo);
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_16, L_17);
		}

IL_0072:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_18);
			if (L_19)
			{
				goto IL_0044;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x91, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_3;
			V_4 = ((Object_t *)IsInst(L_20, InitializedTypeInfo(&IDisposable_t127_il2cpp_TypeInfo)));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_0089;
			}
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(124)
		}

IL_0089:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_22);
			IL2CPP_END_FINALLY(124)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0091:
	{
		ArrayList_t1020 * L_23 = V_0;
		return L_23;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern "C" void MethodDictionary_Add_m9188 (MethodDictionary_t1689 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		V_1 = 0;
		goto IL_0028;
	}

IL_000b:
	{
		StringU5BU5D_t87* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m2110(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = ___value;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(&MethodDictionary_SetMethodProperty_m9186_MethodInfo, __this, L_6, L_7);
		return;
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t87* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (L_11)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&MethodDictionary_AllocInternalProperties_m9180_MethodInfo, __this);
		__this->____internalProperties_0 = L_12;
	}

IL_0047:
	{
		Object_t * L_13 = (__this->____internalProperties_0);
		Object_t * L_14 = ___key;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(&IDictionary_set_Item_m5217_MethodInfo, L_13, L_14, L_15);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern MethodInfo MethodDictionary_Contains_m9189_MethodInfo;
extern "C" bool MethodDictionary_Contains_m9189 (MethodDictionary_t1689 * __this, Object_t * ___key, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		V_1 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		StringU5BU5D_t87* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m2110(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		return 1;
	}

IL_001d:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t87* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		Object_t * L_11 = ___key;
		NullCheck(L_10);
		bool L_12 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(&IDictionary_Contains_m5222_MethodInfo, L_10, L_11);
		return L_12;
	}

IL_0041:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern MethodInfo MethodDictionary_Remove_m9190_MethodInfo;
extern "C" void MethodDictionary_Remove_m9190 (MethodDictionary_t1689 * __this, Object_t * ___key, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		V_1 = 0;
		goto IL_002a;
	}

IL_000b:
	{
		StringU5BU5D_t87* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m2110(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t395 * L_6 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_6, (String_t*) &_stringLiteral1777, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		StringU5BU5D_t87* L_9 = (__this->____methodKeys_2);
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		Object_t * L_12 = ___key;
		NullCheck(L_11);
		InterfaceActionInvoker1< Object_t * >::Invoke(&IDictionary_Remove_m5225_MethodInfo, L_11, L_12);
	}

IL_0049:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern MethodInfo MethodDictionary_get_Count_m9191_MethodInfo;
extern "C" int32_t MethodDictionary_get_Count_m9191 (MethodDictionary_t1689 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Object_t * L_1 = (__this->____internalProperties_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ICollection_get_Count_m5215_MethodInfo, L_1);
		StringU5BU5D_t87* L_3 = (__this->____methodKeys_2);
		NullCheck(L_3);
		return ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
	}

IL_001d:
	{
		StringU5BU5D_t87* L_4 = (__this->____methodKeys_2);
		NullCheck(L_4);
		return (((int32_t)(((Array_t *)L_4)->max_length)));
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern MethodInfo MethodDictionary_get_IsSynchronized_m9192_MethodInfo;
extern "C" bool MethodDictionary_get_IsSynchronized_m9192 (MethodDictionary_t1689 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern MethodInfo MethodDictionary_get_SyncRoot_m9193_MethodInfo;
extern "C" Object_t * MethodDictionary_get_SyncRoot_m9193 (MethodDictionary_t1689 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern MethodInfo MethodDictionary_CopyTo_m9194_MethodInfo;
extern "C" void MethodDictionary_CopyTo_m9194 (MethodDictionary_t1689 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&MethodDictionary_get_Values_m9187_MethodInfo, __this);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m5223_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern MethodInfo MethodDictionary_GetEnumerator_m9195_MethodInfo;
extern "C" Object_t * MethodDictionary_GetEnumerator_m9195 (MethodDictionary_t1689 * __this, MethodInfo* method)
{
	{
		DictionaryEnumerator_t1697 * L_0 = (DictionaryEnumerator_t1697 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DictionaryEnumerator_t1697_il2cpp_TypeInfo));
		DictionaryEnumerator__ctor_m9171(L_0, __this, /*hidden argument*/&DictionaryEnumerator__ctor_m9171_MethodInfo);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDicti.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MethodReturnDictionary_t1698_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDictiMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_Exception.h"
extern TypeInfo Exception_t110_il2cpp_TypeInfo;
extern MethodInfo IMethodReturnMessage_get_Exception_m11025_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage)
extern MethodInfo MethodReturnDictionary__ctor_m9196_MethodInfo;
extern "C" void MethodReturnDictionary__ctor_m9196 (MethodReturnDictionary_t1698 * __this, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m9177(__this, L_0, /*hidden argument*/&MethodDictionary__ctor_m9177_MethodInfo);
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		Exception_t110 * L_2 = (Exception_t110 *)InterfaceFuncInvoker0< Exception_t110 * >::Invoke(&IMethodReturnMessage_get_Exception_m11025_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MethodReturnDictionary_t1698_il2cpp_TypeInfo));
		StringU5BU5D_t87* L_3 = ((MethodReturnDictionary_t1698_StaticFields*)InitializedTypeInfo(&MethodReturnDictionary_t1698_il2cpp_TypeInfo)->static_fields)->___InternalReturnKeys_6;
		MethodDictionary_set_MethodKeys_m9179(__this, L_3, /*hidden argument*/&MethodDictionary_set_MethodKeys_m9179_MethodInfo);
		goto IL_0027;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MethodReturnDictionary_t1698_il2cpp_TypeInfo));
		StringU5BU5D_t87* L_4 = ((MethodReturnDictionary_t1698_StaticFields*)InitializedTypeInfo(&MethodReturnDictionary_t1698_il2cpp_TypeInfo)->static_fields)->___InternalExceptionKeys_7;
		MethodDictionary_set_MethodKeys_m9179(__this, L_4, /*hidden argument*/&MethodDictionary_set_MethodKeys_m9179_MethodInfo);
	}

IL_0027:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.cctor()
extern MethodInfo MethodReturnDictionary__cctor_m9197_MethodInfo;
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__cctor_m9197 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool MethodReturnDictionary__cctor_m9197_init;
	if (!MethodReturnDictionary__cctor_m9197_init)
	{
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		MethodReturnDictionary__cctor_m9197_init = true;
	}
	{
		StringU5BU5D_t87* L_0 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, 7));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1771);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1771;
		StringU5BU5D_t87* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral1772);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral1772;
		StringU5BU5D_t87* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1773);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral1773;
		StringU5BU5D_t87* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1774);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral1774;
		StringU5BU5D_t87* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral1788);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral1788;
		StringU5BU5D_t87* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1789);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral1789;
		StringU5BU5D_t87* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1776);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral1776;
		((MethodReturnDictionary_t1698_StaticFields*)InitializedTypeInfo(&MethodReturnDictionary_t1698_il2cpp_TypeInfo)->static_fields)->___InternalReturnKeys_6 = L_6;
		StringU5BU5D_t87* L_7 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, 1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral1776);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 0)) = (String_t*)(String_t*) &_stringLiteral1776;
		((MethodReturnDictionary_t1698_StaticFields*)InitializedTypeInfo(&MethodReturnDictionary_t1698_il2cpp_TypeInfo)->static_fields)->___InternalExceptionKeys_7 = L_7;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoMethodMessage_t1683_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessageMethodDeclarations.h"

// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo MonoMethod_t_il2cpp_TypeInfo;
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"
extern MethodInfo MonoMethod_get_Name_m8921_MethodInfo;
extern MethodInfo MonoMethod_GetParameters_m8913_MethodInfo;
extern MethodInfo MonoMethod_get_DeclaringType_m8920_MethodInfo;
extern MethodInfo MonoMethodMessage_get_OutArgCount_m9207_MethodInfo;


// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern MethodInfo MonoMethodMessage_get_Args_m9198_MethodInfo;
extern "C" ObjectU5BU5D_t76* MonoMethodMessage_get_Args_m9198 (MonoMethodMessage_t1683 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = (__this->___args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern MethodInfo MonoMethodMessage_get_LogicalCallContext_m9199_MethodInfo;
extern "C" LogicalCallContext_t1693 * MonoMethodMessage_get_LogicalCallContext_m9199 (MonoMethodMessage_t1683 * __this, MethodInfo* method)
{
	{
		LogicalCallContext_t1693 * L_0 = (__this->___ctx_3);
		return L_0;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern MethodInfo MonoMethodMessage_get_MethodBase_m9200_MethodInfo;
extern "C" MethodBase_t772 * MonoMethodMessage_get_MethodBase_m9200 (MonoMethodMessage_t1683 * __this, MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern MethodInfo MonoMethodMessage_get_MethodName_m9201_MethodInfo;
extern "C" String_t* MonoMethodMessage_get_MethodName_m9201 (MonoMethodMessage_t1683 * __this, MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_get_Name_m8921_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern MethodInfo MonoMethodMessage_get_MethodSignature_m9202_MethodInfo;
extern TypeInfo* TypeU5BU5D_t658_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m9202 (MonoMethodMessage_t1683 * __this, MethodInfo* method)
{
	static bool MonoMethodMessage_get_MethodSignature_m9202_init;
	if (!MonoMethodMessage_get_MethodSignature_m9202_init)
	{
		TypeU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t658_0_0_0);
		MonoMethodMessage_get_MethodSignature_m9202_init = true;
	}
	ParameterInfoU5BU5D_t783* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t658* L_0 = (__this->___methodSignature_7);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t783* L_2 = (ParameterInfoU5BU5D_t783*)VirtFuncInvoker0< ParameterInfoU5BU5D_t783* >::Invoke(&MonoMethod_GetParameters_m8913_MethodInfo, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t783* L_3 = V_0;
		NullCheck(L_3);
		__this->___methodSignature_7 = ((TypeU5BU5D_t658*)SZArrayNew(TypeU5BU5D_t658_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_003a;
	}

IL_0026:
	{
		TypeU5BU5D_t658* L_4 = (__this->___methodSignature_7);
		int32_t L_5 = V_1;
		ParameterInfoU5BU5D_t783* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_6, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3985_MethodInfo, (*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_6, L_8)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, L_5)) = (Type_t *)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		ParameterInfoU5BU5D_t783* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0026;
		}
	}

IL_0040:
	{
		TypeU5BU5D_t658* L_13 = (__this->___methodSignature_7);
		return (Object_t *)L_13;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern MethodInfo MonoMethodMessage_get_TypeName_m9203_MethodInfo;
extern "C" String_t* MonoMethodMessage_get_TypeName_m9203 (MonoMethodMessage_t1683 * __this, MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_DeclaringType_m8920_MethodInfo, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_3);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern MethodInfo MonoMethodMessage_get_Uri_m9204_MethodInfo;
extern "C" String_t* MonoMethodMessage_get_Uri_m9204 (MonoMethodMessage_t1683 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_6);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern MethodInfo MonoMethodMessage_set_Uri_m9205_MethodInfo;
extern "C" void MonoMethodMessage_set_Uri_m9205 (MonoMethodMessage_t1683 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_6 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern MethodInfo MonoMethodMessage_get_Exception_m9206_MethodInfo;
extern "C" Exception_t110 * MonoMethodMessage_get_Exception_m9206 (MonoMethodMessage_t1683 * __this, MethodInfo* method)
{
	{
		Exception_t110 * L_0 = (__this->___exc_5);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m9207 (MonoMethodMessage_t1683 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t66* V_2 = {0};
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t76* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		ByteU5BU5D_t66* L_1 = (__this->___arg_types_2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		ByteU5BU5D_t66* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t L_5 = V_1;
		if (!((int32_t)((int32_t)L_5&(int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		ByteU5BU5D_t66* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern MethodInfo MonoMethodMessage_get_OutArgs_m9208_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t76* MonoMethodMessage_get_OutArgs_m9208 (MonoMethodMessage_t1683 * __this, MethodInfo* method)
{
	static bool MonoMethodMessage_get_OutArgs_m9208_init;
	if (!MonoMethodMessage_get_OutArgs_m9208_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		MonoMethodMessage_get_OutArgs_m9208_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ObjectU5BU5D_t76* V_3 = {0};
	uint8_t V_4 = 0x0;
	ByteU5BU5D_t66* V_5 = {0};
	int32_t V_6 = 0;
	{
		ObjectU5BU5D_t76* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ObjectU5BU5D_t76*)NULL;
	}

IL_000a:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MonoMethodMessage_get_OutArgCount_m9207_MethodInfo, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = 0;
		V_1 = L_3;
		V_0 = L_3;
		ByteU5BU5D_t66* L_4 = (__this->___arg_types_2);
		V_5 = L_4;
		V_6 = 0;
		goto IL_004f;
	}

IL_0029:
	{
		ByteU5BU5D_t66* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		uint8_t L_8 = V_4;
		if (!((int32_t)((int32_t)L_8&(int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t76* L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		ObjectU5BU5D_t76* L_12 = (__this->___args_1);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14));
	}

IL_0045:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
		int32_t L_16 = V_6;
		V_6 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_17 = V_6;
		ByteU5BU5D_t66* L_18 = V_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t76* L_19 = V_3;
		return L_19;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern MethodInfo MonoMethodMessage_get_ReturnValue_m9209_MethodInfo;
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m9209 (MonoMethodMessage_t1683 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___rval_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RemotingSurrogate_t1700_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern MethodInfo RemotingSurrogate__ctor_m9210_MethodInfo;
extern "C" void RemotingSurrogate__ctor_m9210 (RemotingSurrogate_t1700 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern MethodInfo RemotingSurrogate_SetObjectData_m9211_MethodInfo;
extern "C" Object_t * RemotingSurrogate_SetObjectData_m9211 (RemotingSurrogate_t1700 * __this, Object_t * ___obj, SerializationInfo_t708 * ___si, StreamingContext_t709  ___sc, Object_t * ___selector, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjRefSurrogate_t1702_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"

extern MethodInfo NotSupportedException__ctor_m5248_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern MethodInfo ObjRefSurrogate__ctor_m9212_MethodInfo;
extern "C" void ObjRefSurrogate__ctor_m9212 (ObjRefSurrogate_t1702 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern MethodInfo ObjRefSurrogate_SetObjectData_m9213_MethodInfo;
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m9213 (ObjRefSurrogate_t1702 * __this, Object_t * ___obj, SerializationInfo_t708 * ___si, StreamingContext_t709  ___sc, Object_t * ___selector, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1791, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RemotingSurrogateSelector_t1703_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0MethodDeclarations.h"

extern TypeInfo ISurrogateSelector_t1701_il2cpp_TypeInfo;
extern TypeInfo ISerializationSurrogate_t1704_il2cpp_TypeInfo;
extern Il2CppType ObjRef_t1709_0_0_0;
extern MethodInfo Type_get_IsMarshalByRef_m7267_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m4037_MethodInfo;
extern MethodInfo ISurrogateSelector_GetSurrogate_m11026_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern MethodInfo RemotingSurrogateSelector__ctor_m9214_MethodInfo;
extern "C" void RemotingSurrogateSelector__ctor_m9214 (RemotingSurrogateSelector_t1703 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern MethodInfo RemotingSurrogateSelector__cctor_m9215_MethodInfo;
extern "C" void RemotingSurrogateSelector__cctor_m9215 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&ObjRef_t1709_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		((RemotingSurrogateSelector_t1703_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1703_il2cpp_TypeInfo)->static_fields)->___s_cachedTypeObjRef_0 = L_0;
		ObjRefSurrogate_t1702 * L_1 = (ObjRefSurrogate_t1702 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjRefSurrogate_t1702_il2cpp_TypeInfo));
		ObjRefSurrogate__ctor_m9212(L_1, /*hidden argument*/&ObjRefSurrogate__ctor_m9212_MethodInfo);
		((RemotingSurrogateSelector_t1703_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1703_il2cpp_TypeInfo)->static_fields)->____objRefSurrogate_1 = L_1;
		RemotingSurrogate_t1700 * L_2 = (RemotingSurrogate_t1700 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingSurrogate_t1700_il2cpp_TypeInfo));
		RemotingSurrogate__ctor_m9210(L_2, /*hidden argument*/&RemotingSurrogate__ctor_m9210_MethodInfo);
		((RemotingSurrogateSelector_t1703_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1703_il2cpp_TypeInfo)->static_fields)->____objRemotingSurrogate_2 = L_2;
		return;
	}
}
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern MethodInfo RemotingSurrogateSelector_GetSurrogate_m9216_MethodInfo;
extern "C" Object_t * RemotingSurrogateSelector_GetSurrogate_m9216 (RemotingSurrogateSelector_t1703 * __this, Type_t * ___type, StreamingContext_t709  ___context, Object_t ** ___ssout, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsMarshalByRef_m7267_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Object_t ** L_2 = ___ssout;
		*((Object_t **)(L_2)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingSurrogateSelector_t1703_il2cpp_TypeInfo));
		RemotingSurrogate_t1700 * L_3 = ((RemotingSurrogateSelector_t1703_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1703_il2cpp_TypeInfo)->static_fields)->____objRemotingSurrogate_2;
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingSurrogateSelector_t1703_il2cpp_TypeInfo));
		Type_t * L_4 = ((RemotingSurrogateSelector_t1703_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1703_il2cpp_TypeInfo)->static_fields)->___s_cachedTypeObjRef_0;
		Type_t * L_5 = ___type;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m4037_MethodInfo, L_4, L_5);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		Object_t ** L_7 = ___ssout;
		*((Object_t **)(L_7)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingSurrogateSelector_t1703_il2cpp_TypeInfo));
		ObjRefSurrogate_t1702 * L_8 = ((RemotingSurrogateSelector_t1703_StaticFields*)InitializedTypeInfo(&RemotingSurrogateSelector_t1703_il2cpp_TypeInfo)->static_fields)->____objRefSurrogate_1;
		return L_8;
	}

IL_0027:
	{
		Object_t * L_9 = (__this->____next_3);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_10 = (__this->____next_3);
		Type_t * L_11 = ___type;
		StreamingContext_t709  L_12 = ___context;
		Object_t ** L_13 = ___ssout;
		NullCheck(L_10);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t709 , Object_t ** >::Invoke(&ISurrogateSelector_GetSurrogate_m11026_MethodInfo, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_003e:
	{
		Object_t ** L_15 = ___ssout;
		*((Object_t **)(L_15)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessage.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReturnMessage_t1705_il2cpp_TypeInfo;
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessageMethodDeclarations.h"

extern MethodInfo ReturnMessage_set_Uri_m9228_MethodInfo;
extern MethodInfo ReturnMessage_get_MethodBase_m9222_MethodInfo;
extern MethodInfo IMethodMessage_get_MethodBase_m11027_MethodInfo;


// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern MethodInfo ReturnMessage__ctor_m9217_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m9217 (ReturnMessage_t1705 * __this, Object_t * ___ret, ObjectU5BU5D_t76* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t1693 * ___callCtx, Object_t * ___mcm, MethodInfo* method)
{
	static bool ReturnMessage__ctor_m9217_init;
	if (!ReturnMessage__ctor_m9217_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		ReturnMessage__ctor_m9217_init = true;
	}
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t * L_0 = ___ret;
		__this->____returnValue_4 = L_0;
		ObjectU5BU5D_t76* L_1 = ___outArgs;
		__this->____args_1 = L_1;
		int32_t L_2 = ___outArgsCount;
		__this->____outArgsCount_2 = L_2;
		LogicalCallContext_t1693 * L_3 = ___callCtx;
		__this->____callCtx_3 = L_3;
		Object_t * L_4 = ___mcm;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_5 = ___mcm;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IMethodMessage_get_Uri_m11016_MethodInfo, L_5);
		__this->____uri_5 = L_6;
		Object_t * L_7 = ___mcm;
		NullCheck(L_7);
		MethodBase_t772 * L_8 = (MethodBase_t772 *)InterfaceFuncInvoker0< MethodBase_t772 * >::Invoke(&IMethodMessage_get_MethodBase_m11027_MethodInfo, L_7);
		__this->____methodBase_7 = L_8;
	}

IL_0041:
	{
		ObjectU5BU5D_t76* L_9 = (__this->____args_1);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_10 = ___outArgsCount;
		__this->____args_1 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, L_10));
	}

IL_0055:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern MethodInfo ReturnMessage__ctor_m9218_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m9218 (ReturnMessage_t1705 * __this, Exception_t110 * ___e, Object_t * ___mcm, MethodInfo* method)
{
	static bool ReturnMessage__ctor_m9218_init;
	if (!ReturnMessage__ctor_m9218_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		ReturnMessage__ctor_m9218_init = true;
	}
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Exception_t110 * L_0 = ___e;
		__this->____exception_6 = L_0;
		Object_t * L_1 = ___mcm;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_2 = ___mcm;
		NullCheck(L_2);
		MethodBase_t772 * L_3 = (MethodBase_t772 *)InterfaceFuncInvoker0< MethodBase_t772 * >::Invoke(&IMethodMessage_get_MethodBase_m11027_MethodInfo, L_2);
		__this->____methodBase_7 = L_3;
		Object_t * L_4 = ___mcm;
		NullCheck(L_4);
		LogicalCallContext_t1693 * L_5 = (LogicalCallContext_t1693 *)InterfaceFuncInvoker0< LogicalCallContext_t1693 * >::Invoke(&IMethodMessage_get_LogicalCallContext_m11020_MethodInfo, L_4);
		__this->____callCtx_3 = L_5;
	}

IL_0028:
	{
		__this->____args_1 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern MethodInfo ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9219_MethodInfo;
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9219 (ReturnMessage_t1705 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(&ReturnMessage_set_Uri_m9228_MethodInfo, __this, L_0);
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern MethodInfo ReturnMessage_get_Args_m9220_MethodInfo;
extern "C" ObjectU5BU5D_t76* ReturnMessage_get_Args_m9220 (ReturnMessage_t1705 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = (__this->____args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern MethodInfo ReturnMessage_get_LogicalCallContext_m9221_MethodInfo;
extern "C" LogicalCallContext_t1693 * ReturnMessage_get_LogicalCallContext_m9221 (ReturnMessage_t1705 * __this, MethodInfo* method)
{
	{
		LogicalCallContext_t1693 * L_0 = (__this->____callCtx_3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		LogicalCallContext_t1693 * L_1 = (LogicalCallContext_t1693 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LogicalCallContext_t1693_il2cpp_TypeInfo));
		LogicalCallContext__ctor_m9143(L_1, /*hidden argument*/&LogicalCallContext__ctor_m9143_MethodInfo);
		__this->____callCtx_3 = L_1;
	}

IL_0013:
	{
		LogicalCallContext_t1693 * L_2 = (__this->____callCtx_3);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t772 * ReturnMessage_get_MethodBase_m9222 (ReturnMessage_t1705 * __this, MethodInfo* method)
{
	{
		MethodBase_t772 * L_0 = (__this->____methodBase_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern MethodInfo ReturnMessage_get_MethodName_m9223_MethodInfo;
extern "C" String_t* ReturnMessage_get_MethodName_m9223 (ReturnMessage_t1705 * __this, MethodInfo* method)
{
	{
		MethodBase_t772 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_1 = (__this->____methodName_8);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		MethodBase_t772 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3952_MethodInfo, L_2);
		__this->____methodName_8 = L_3;
	}

IL_0021:
	{
		String_t* L_4 = (__this->____methodName_8);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern MethodInfo ReturnMessage_get_MethodSignature_m9224_MethodInfo;
extern TypeInfo* TypeU5BU5D_t658_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_MethodSignature_m9224 (ReturnMessage_t1705 * __this, MethodInfo* method)
{
	static bool ReturnMessage_get_MethodSignature_m9224_init;
	if (!ReturnMessage_get_MethodSignature_m9224_init)
	{
		TypeU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t658_0_0_0);
		ReturnMessage_get_MethodSignature_m9224_init = true;
	}
	ParameterInfoU5BU5D_t783* V_0 = {0};
	int32_t V_1 = 0;
	{
		MethodBase_t772 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		TypeU5BU5D_t658* L_1 = (__this->____methodSignature_9);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t772 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t783* L_3 = (ParameterInfoU5BU5D_t783*)VirtFuncInvoker0< ParameterInfoU5BU5D_t783* >::Invoke(&MethodBase_GetParameters_m3984_MethodInfo, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t783* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_9 = ((TypeU5BU5D_t658*)SZArrayNew(TypeU5BU5D_t658_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		TypeU5BU5D_t658* L_5 = (__this->____methodSignature_9);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t783* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3985_MethodInfo, (*(ParameterInfo_t784 **)(ParameterInfo_t784 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t783* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		TypeU5BU5D_t658* L_14 = (__this->____methodSignature_9);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern MethodInfo ReturnMessage_get_Properties_m9225_MethodInfo;
extern "C" Object_t * ReturnMessage_get_Properties_m9225 (ReturnMessage_t1705 * __this, MethodInfo* method)
{
	{
		MethodReturnDictionary_t1698 * L_0 = (__this->____properties_11);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MethodReturnDictionary_t1698_il2cpp_TypeInfo));
		MethodReturnDictionary_t1698 * L_1 = (MethodReturnDictionary_t1698 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MethodReturnDictionary_t1698_il2cpp_TypeInfo));
		MethodReturnDictionary__ctor_m9196(L_1, __this, /*hidden argument*/&MethodReturnDictionary__ctor_m9196_MethodInfo);
		__this->____properties_11 = L_1;
	}

IL_0014:
	{
		MethodReturnDictionary_t1698 * L_2 = (__this->____properties_11);
		return L_2;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern MethodInfo ReturnMessage_get_TypeName_m9226_MethodInfo;
extern "C" String_t* ReturnMessage_get_TypeName_m9226 (ReturnMessage_t1705 * __this, MethodInfo* method)
{
	{
		MethodBase_t772 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_1 = (__this->____typeName_10);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		MethodBase_t772 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m4015_MethodInfo, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_3);
		__this->____typeName_10 = L_4;
	}

IL_0026:
	{
		String_t* L_5 = (__this->____typeName_10);
		return L_5;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern MethodInfo ReturnMessage_get_Uri_m9227_MethodInfo;
extern "C" String_t* ReturnMessage_get_Uri_m9227 (ReturnMessage_t1705 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_5);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m9228 (ReturnMessage_t1705 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_5 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern MethodInfo ReturnMessage_get_Exception_m9229_MethodInfo;
extern "C" Exception_t110 * ReturnMessage_get_Exception_m9229 (ReturnMessage_t1705 * __this, MethodInfo* method)
{
	{
		Exception_t110 * L_0 = (__this->____exception_6);
		return L_0;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern MethodInfo ReturnMessage_get_OutArgs_m9230_MethodInfo;
extern "C" ObjectU5BU5D_t76* ReturnMessage_get_OutArgs_m9230 (ReturnMessage_t1705 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = (__this->____outArgs_0);
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		ObjectU5BU5D_t76* L_1 = (__this->____args_1);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		ArgInfo_t1681 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		MethodBase_t772 * L_3 = (MethodBase_t772 *)VirtFuncInvoker0< MethodBase_t772 * >::Invoke(&ReturnMessage_get_MethodBase_m9222_MethodInfo, __this);
		ArgInfo_t1681 * L_4 = (ArgInfo_t1681 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgInfo_t1681_il2cpp_TypeInfo));
		ArgInfo__ctor_m9101(L_4, L_3, 1, /*hidden argument*/&ArgInfo__ctor_m9101_MethodInfo);
		__this->____inArgInfo_12 = L_4;
	}

IL_002a:
	{
		ArgInfo_t1681 * L_5 = (__this->____inArgInfo_12);
		ObjectU5BU5D_t76* L_6 = (__this->____args_1);
		NullCheck(L_5);
		ObjectU5BU5D_t76* L_7 = ArgInfo_GetInOutArgs_m9102(L_5, L_6, /*hidden argument*/&ArgInfo_GetInOutArgs_m9102_MethodInfo);
		__this->____outArgs_0 = L_7;
	}

IL_0041:
	{
		ObjectU5BU5D_t76* L_8 = (__this->____outArgs_0);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern MethodInfo ReturnMessage_get_ReturnValue_m9231_MethodInfo;
extern "C" Object_t * ReturnMessage_get_ReturnValue_m9231 (ReturnMessage_t1705 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____returnValue_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ProxyAttribute_t1707_il2cpp_TypeInfo;
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttributeMethodDeclarations.h"

// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxy.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
extern TypeInfo RemotingProxy_t1713_il2cpp_TypeInfo;
extern TypeInfo RealProxy_t1708_il2cpp_TypeInfo;
extern TypeInfo MarshalByRefObject_t1058_il2cpp_TypeInfo;
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
extern MethodInfo RemotingProxy__ctor_m9245_MethodInfo;
extern MethodInfo RealProxy_GetTransparentProxy_m9242_MethodInfo;
extern MethodInfo RemotingServices_GetProxyForRemoteObject_m9307_MethodInfo;
extern MethodInfo RemotingServices_GetRealProxy_m9296_MethodInfo;


// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern MethodInfo ProxyAttribute_CreateInstance_m9232_MethodInfo;
extern "C" MarshalByRefObject_t1058 * ProxyAttribute_CreateInstance_m9232 (ProxyAttribute_t1707 * __this, Type_t * ___serverType, MethodInfo* method)
{
	RemotingProxy_t1713 * V_0 = {0};
	{
		Type_t * L_0 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
		String_t* L_1 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingProxy_t1713_il2cpp_TypeInfo));
		RemotingProxy_t1713 * L_2 = (RemotingProxy_t1713 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingProxy_t1713_il2cpp_TypeInfo));
		RemotingProxy__ctor_m9245(L_2, L_0, L_1, (ObjectU5BU5D_t76*)(ObjectU5BU5D_t76*)NULL, /*hidden argument*/&RemotingProxy__ctor_m9245_MethodInfo);
		V_0 = L_2;
		RemotingProxy_t1713 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&RealProxy_GetTransparentProxy_m9242_MethodInfo, L_3);
		return ((MarshalByRefObject_t1058 *)Castclass(L_4, InitializedTypeInfo(&MarshalByRefObject_t1058_il2cpp_TypeInfo)));
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern MethodInfo ProxyAttribute_CreateProxy_m9233_MethodInfo;
extern "C" RealProxy_t1708 * ProxyAttribute_CreateProxy_m9233 (ProxyAttribute_t1707 * __this, ObjRef_t1709 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t1668 * ___serverContext, MethodInfo* method)
{
	{
		ObjRef_t1709 * L_0 = ___objRef;
		Type_t * L_1 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Object_t * L_2 = RemotingServices_GetProxyForRemoteObject_m9307(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&RemotingServices_GetProxyForRemoteObject_m9307_MethodInfo);
		RealProxy_t1708 * L_3 = RemotingServices_GetRealProxy_m9296(NULL /*static, unused*/, L_2, /*hidden argument*/&RemotingServices_GetRealProxy_m9296_MethodInfo);
		return L_3;
	}
}
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo ProxyAttribute_GetPropertiesForNewContext_m9234_MethodInfo;
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m9234 (ProxyAttribute_t1707 * __this, Object_t * ___msg, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern MethodInfo ProxyAttribute_IsContextOK_m9235_MethodInfo;
extern "C" bool ProxyAttribute_IsContextOK_m9235 (ProxyAttribute_t1707 * __this, Context_t1668 * ___ctx, Object_t * ___msg, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxy.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TransparentProxy_t1710_il2cpp_TypeInfo;
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxyMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern TypeInfo IRemotingTypeInfo_t1721_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern Il2CppType MarshalByRefObject_t1058_0_0_0;
extern MethodInfo RealProxy__ctor_m9238_MethodInfo;
extern MethodInfo IntPtr_op_Inequality_m3860_MethodInfo;
extern MethodInfo RealProxy_InternalGetProxyType_m9239_MethodInfo;
extern MethodInfo IRemotingTypeInfo_get_TypeName_m11028_MethodInfo;
extern MethodInfo RealProxy_InternalGetTransparentProxy_m9241_MethodInfo;


// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern MethodInfo RealProxy__ctor_m9236_MethodInfo;
extern "C" void RealProxy__ctor_m9236 (RealProxy_t1708 * __this, Type_t * ___classToProxy, MethodInfo* method)
{
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		RealProxy__ctor_m9238(__this, L_0, L_1, NULL, /*hidden argument*/&RealProxy__ctor_m9238_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern MethodInfo RealProxy__ctor_m9237_MethodInfo;
extern "C" void RealProxy__ctor_m9237 (RealProxy_t1708 * __this, Type_t * ___classToProxy, ClientIdentity_t1712 * ___identity, MethodInfo* method)
{
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		RealProxy__ctor_m9238(__this, L_0, L_1, NULL, /*hidden argument*/&RealProxy__ctor_m9238_MethodInfo);
		ClientIdentity_t1712 * L_2 = ___identity;
		__this->____objectIdentity_3 = L_2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern "C" void RealProxy__ctor_m9238 (RealProxy_t1708 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, MethodInfo* method)
{
	{
		__this->____targetDomainId_1 = (-1);
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Type_t * L_0 = ___classToProxy;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsMarshalByRef_m7267_MethodInfo, L_0);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		Type_t * L_2 = ___classToProxy;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m7266_MethodInfo, L_2);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_t395 * L_4 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_4, (String_t*) &_stringLiteral1792, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	{
		Type_t * L_5 = ___classToProxy;
		__this->___class_to_proxy_0 = L_5;
		IntPtr_t L_6 = ___stub;
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Inequality_m3860(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&IntPtr_op_Inequality_m3860_MethodInfo);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		NotSupportedException_t84 * L_9 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_9, (String_t*) &_stringLiteral1793, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C" Type_t * RealProxy_InternalGetProxyType_m9239 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, MethodInfo* method)
{
	typedef Type_t * (*RealProxy_InternalGetProxyType_m9239_ftn) (Object_t *);
	static RealProxy_InternalGetProxyType_m9239_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RealProxy_InternalGetProxyType_m9239_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)");
	return _il2cpp_icall_func(___transparentProxy);
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern MethodInfo RealProxy_GetProxiedType_m9240_MethodInfo;
extern "C" Type_t * RealProxy_GetProxiedType_m9240 (RealProxy_t1708 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_1 = (__this->___class_to_proxy_0);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m7266_MethodInfo, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&MarshalByRefObject_t1058_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		return L_3;
	}

IL_0020:
	{
		Type_t * L_4 = (__this->___class_to_proxy_0);
		return L_4;
	}

IL_0027:
	{
		Object_t * L_5 = (__this->____objTP_4);
		Type_t * L_6 = RealProxy_InternalGetProxyType_m9239(NULL /*static, unused*/, L_5, /*hidden argument*/&RealProxy_InternalGetProxyType_m9239_MethodInfo);
		return L_6;
	}
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C" Object_t * RealProxy_InternalGetTransparentProxy_m9241 (RealProxy_t1708 * __this, String_t* ___className, MethodInfo* method)
{
	typedef Object_t * (*RealProxy_InternalGetTransparentProxy_m9241_ftn) (RealProxy_t1708 *, String_t*);
	static RealProxy_InternalGetTransparentProxy_m9241_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RealProxy_InternalGetTransparentProxy_m9241_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)");
	return _il2cpp_icall_func(__this, ___className);
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern "C" Object_t * RealProxy_GetTransparentProxy_m9242 (RealProxy_t1708 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_005a;
		}
	}
	{
		V_1 = ((Object_t *)IsInst(__this, InitializedTypeInfo(&IRemotingTypeInfo_t1721_il2cpp_TypeInfo)));
		Object_t * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IRemotingTypeInfo_get_TypeName_m11028_MethodInfo, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&MarshalByRefObject_t1058_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_8 = String_op_Equality_m2110(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_8)
		{
			goto IL_003f;
		}
	}

IL_0033:
	{
		Type_t * L_9 = (__this->___class_to_proxy_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_9);
		V_0 = L_10;
	}

IL_003f:
	{
		goto IL_004d;
	}

IL_0041:
	{
		Type_t * L_11 = (__this->___class_to_proxy_0);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_11);
		V_0 = L_12;
	}

IL_004d:
	{
		String_t* L_13 = V_0;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(&RealProxy_InternalGetTransparentProxy_m9241_MethodInfo, __this, L_13);
		__this->____objTP_4 = L_14;
	}

IL_005a:
	{
		Object_t * L_15 = (__this->____objTP_4);
		return L_15;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern MethodInfo RealProxy_SetTargetDomain_m9243_MethodInfo;
extern "C" void RealProxy_SetTargetDomain_m9243 (RealProxy_t1708 * __this, int32_t ___domainId, MethodInfo* method)
{
	{
		int32_t L_0 = ___domainId;
		__this->____targetDomainId_1 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentity.h"
extern TypeInfo ClientIdentity_t1712_il2cpp_TypeInfo;
extern TypeInfo Identity_t1711_il2cpp_TypeInfo;
extern TypeInfo ObjRef_t1709_il2cpp_TypeInfo;
extern TypeInfo ClientActivatedIdentity_t1727_il2cpp_TypeInfo;
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRefMethodDeclarations.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentityMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Identity_CreateObjRef_m11029_MethodInfo;
extern MethodInfo ObjRef_get_TypeInfo_m9275_MethodInfo;
extern MethodInfo Identity_get_ChannelSink_m9258_MethodInfo;
extern MethodInfo ClientIdentity_get_TargetUri_m9267_MethodInfo;
extern MethodInfo Type_GetMethod_m7289_MethodInfo;
extern MethodInfo RemotingServices_DisposeIdentity_m9310_MethodInfo;


// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern MethodInfo RemotingProxy__ctor_m9244_MethodInfo;
extern "C" void RemotingProxy__ctor_m9244 (RemotingProxy_t1713 * __this, Type_t * ___type, ClientIdentity_t1712 * ___identity, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ClientIdentity_t1712 * L_1 = ___identity;
		RealProxy__ctor_m9237(__this, L_0, L_1, /*hidden argument*/&RealProxy__ctor_m9237_MethodInfo);
		ClientIdentity_t1712 * L_2 = ___identity;
		NullCheck(L_2);
		Object_t * L_3 = Identity_get_ChannelSink_m9258(L_2, /*hidden argument*/&Identity_get_ChannelSink_m9258_MethodInfo);
		__this->____sink_7 = L_3;
		__this->____hasEnvoySink_8 = 0;
		ClientIdentity_t1712 * L_4 = ___identity;
		NullCheck(L_4);
		String_t* L_5 = ClientIdentity_get_TargetUri_m9267(L_4, /*hidden argument*/&ClientIdentity_get_TargetUri_m9267_MethodInfo);
		__this->____targetUri_2 = L_5;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C" void RemotingProxy__ctor_m9245 (RemotingProxy_t1713 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t76* ___activationAttributes, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		RealProxy__ctor_m9236(__this, L_0, /*hidden argument*/&RealProxy__ctor_m9236_MethodInfo);
		__this->____hasEnvoySink_8 = 0;
		Type_t * L_1 = ___type;
		String_t* L_2 = ___activationUrl;
		ObjectU5BU5D_t76* L_3 = ___activationAttributes;
		ConstructionCall_t1660 * L_4 = ActivationServices_CreateConstructionCall_m9054(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&ActivationServices_CreateConstructionCall_m9054_MethodInfo);
		__this->____ctorCall_9 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern MethodInfo RemotingProxy__cctor_m9246_MethodInfo;
extern "C" void RemotingProxy__cctor_m9246 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(&Type_GetMethod_m7289_MethodInfo, L_0, (String_t*) &_stringLiteral1794);
		((RemotingProxy_t1713_StaticFields*)InitializedTypeInfo(&RemotingProxy_t1713_il2cpp_TypeInfo)->static_fields)->____cache_GetTypeMethod_5 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_2);
		MethodInfo_t * L_3 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(&Type_GetMethod_m7289_MethodInfo, L_2, (String_t*) &_stringLiteral1795);
		((RemotingProxy_t1713_StaticFields*)InitializedTypeInfo(&RemotingProxy_t1713_il2cpp_TypeInfo)->static_fields)->____cache_GetHashCodeMethod_6 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern MethodInfo RemotingProxy_get_TypeName_m9247_MethodInfo;
extern "C" String_t* RemotingProxy_get_TypeName_m9247 (RemotingProxy_t1713 * __this, MethodInfo* method)
{
	ObjRef_t1709 * V_0 = {0};
	{
		Identity_t1711 * L_0 = (__this->____objectIdentity_3);
		if (!((ClientIdentity_t1712 *)IsInst(L_0, InitializedTypeInfo(&ClientIdentity_t1712_il2cpp_TypeInfo))))
		{
			goto IL_002e;
		}
	}
	{
		Identity_t1711 * L_1 = (__this->____objectIdentity_3);
		NullCheck(L_1);
		ObjRef_t1709 * L_2 = (ObjRef_t1709 *)VirtFuncInvoker1< ObjRef_t1709 *, Type_t * >::Invoke(&Identity_CreateObjRef_m11029_MethodInfo, L_1, (Type_t *)NULL);
		V_0 = L_2;
		ObjRef_t1709 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ObjRef_get_TypeInfo_m9275_MethodInfo, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		ObjRef_t1709 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ObjRef_get_TypeInfo_m9275_MethodInfo, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IRemotingTypeInfo_get_TypeName_m11028_MethodInfo, L_6);
		return L_7;
	}

IL_002e:
	{
		Type_t * L_8 = RealProxy_GetProxiedType_m9240(__this, /*hidden argument*/&RealProxy_GetProxiedType_m9240_MethodInfo);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_8);
		return L_9;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern MethodInfo RemotingProxy_Finalize_m9248_MethodInfo;
extern "C" void RemotingProxy_Finalize_m9248 (RemotingProxy_t1713 * __this, MethodInfo* method)
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
		{
			Identity_t1711 * L_0 = (__this->____objectIdentity_3);
			if (!L_0)
			{
				goto IL_0020;
			}
		}

IL_0008:
		{
			Identity_t1711 * L_1 = (__this->____objectIdentity_3);
			if (((ClientActivatedIdentity_t1727 *)IsInst(L_1, InitializedTypeInfo(&ClientActivatedIdentity_t1727_il2cpp_TypeInfo))))
			{
				goto IL_0020;
			}
		}

IL_0015:
		{
			Identity_t1711 * L_2 = (__this->____objectIdentity_3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
			RemotingServices_DisposeIdentity_m9310(NULL /*static, unused*/, L_2, /*hidden argument*/&RemotingServices_DisposeIdentity_m9310_MethodInfo);
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x29, FINALLY_0022);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		Object_Finalize_m591(__this, /*hidden argument*/&Object_Finalize_m591_MethodInfo);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x29, IL_0029)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0029:
	{
		return;
	}
}
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServices.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TrackingServices_t1714_il2cpp_TypeInfo;
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServicesMethodDeclarations.h"

extern TypeInfo ITrackingHandlerU5BU5D_t1963_il2cpp_TypeInfo;
extern TypeInfo ITrackingHandler_t1964_il2cpp_TypeInfo;
extern Il2CppType ITrackingHandler_t1964_0_0_0;
extern Il2CppType ITrackingHandlerU5BU5D_t1963_0_0_0;
extern MethodInfo ArrayList_ToArray_m5371_MethodInfo;
extern MethodInfo ITrackingHandler_UnmarshaledObject_m11030_MethodInfo;


// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern MethodInfo TrackingServices__cctor_m9249_MethodInfo;
extern "C" void TrackingServices__cctor_m9249 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList_t1020 * L_0 = (ArrayList_t1020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList__ctor_m5240(L_0, /*hidden argument*/&ArrayList__ctor_m5240_MethodInfo);
		((TrackingServices_t1714_StaticFields*)InitializedTypeInfo(&TrackingServices_t1714_il2cpp_TypeInfo)->static_fields)->____handlers_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern MethodInfo TrackingServices_NotifyUnmarshaledObject_m9250_MethodInfo;
extern TypeInfo* ITrackingHandlerU5BU5D_t1963_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyUnmarshaledObject_m9250 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t1709 * ___or, MethodInfo* method)
{
	static bool TrackingServices_NotifyUnmarshaledObject_m9250_init;
	if (!TrackingServices_NotifyUnmarshaledObject_m9250_init)
	{
		ITrackingHandlerU5BU5D_t1963_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ITrackingHandlerU5BU5D_t1963_0_0_0);
		TrackingServices_NotifyUnmarshaledObject_m9250_init = true;
	}
	ITrackingHandlerU5BU5D_t1963* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1714_il2cpp_TypeInfo));
		ArrayList_t1020 * L_0 = ((TrackingServices_t1714_StaticFields*)InitializedTypeInfo(&TrackingServices_t1714_il2cpp_TypeInfo)->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_get_SyncRoot_m5390_MethodInfo, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m573(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1714_il2cpp_TypeInfo));
			ArrayList_t1020 * L_3 = ((TrackingServices_t1714_StaticFields*)InitializedTypeInfo(&TrackingServices_t1714_il2cpp_TypeInfo)->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m5236_MethodInfo, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1714_il2cpp_TypeInfo));
			ArrayList_t1020 * L_5 = ((TrackingServices_t1714_StaticFields*)InitializedTypeInfo(&TrackingServices_t1714_il2cpp_TypeInfo)->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
			Type_t * L_6 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&ITrackingHandler_t1964_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m5371_MethodInfo, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t1963*)Castclass(L_7, ITrackingHandlerU5BU5D_t1963_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m575(NULL /*static, unused*/, L_8, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_0046:
	{
		ITrackingHandlerU5BU5D_t1963* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t1709 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker2< Object_t *, ObjRef_t1709 * >::Invoke(&ITrackingHandler_UnmarshaledObject_m11030_MethodInfo, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t1963* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActivatedClientTypeEntry_t1715_il2cpp_TypeInfo;
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"

// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"
extern MethodInfo TypeEntry_get_TypeName_m9319_MethodInfo;
extern MethodInfo TypeEntry_get_AssemblyName_m9318_MethodInfo;
extern MethodInfo ActivatedClientTypeEntry_get_ApplicationUrl_m9251_MethodInfo;


// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m9251 (ActivatedClientTypeEntry_t1715 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___applicationUrl_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern MethodInfo ActivatedClientTypeEntry_get_ContextAttributes_m9252_MethodInfo;
extern "C" IContextAttributeU5BU5D_t1717* ActivatedClientTypeEntry_get_ContextAttributes_m9252 (ActivatedClientTypeEntry_t1715 * __this, MethodInfo* method)
{
	{
		return (IContextAttributeU5BU5D_t1717*)NULL;
	}
}
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern MethodInfo ActivatedClientTypeEntry_get_ObjectType_m9253_MethodInfo;
extern "C" Type_t * ActivatedClientTypeEntry_get_ObjectType_m9253 (ActivatedClientTypeEntry_t1715 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
extern MethodInfo ActivatedClientTypeEntry_ToString_m9254_MethodInfo;
extern "C" String_t* ActivatedClientTypeEntry_ToString_m9254 (ActivatedClientTypeEntry_t1715 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = TypeEntry_get_TypeName_m9319(__this, /*hidden argument*/&TypeEntry_get_TypeName_m9319_MethodInfo);
		String_t* L_1 = TypeEntry_get_AssemblyName_m9318(__this, /*hidden argument*/&TypeEntry_get_AssemblyName_m9318_MethodInfo);
		String_t* L_2 = ActivatedClientTypeEntry_get_ApplicationUrl_m9251(__this, /*hidden argument*/&ActivatedClientTypeEntry_get_ApplicationUrl_m9251_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m380(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&String_Concat_m380_MethodInfo);
		return L_3;
	}
}
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EnvoyInfo_t1718_il2cpp_TypeInfo;
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfoMethodDeclarations.h"



// System.Void System.Runtime.Remoting.EnvoyInfo::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
extern MethodInfo EnvoyInfo__ctor_m9255_MethodInfo;
extern "C" void EnvoyInfo__ctor_m9255 (EnvoyInfo_t1718 * __this, Object_t * ___sinks, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t * L_0 = ___sinks;
		__this->___envoySinks_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::get_EnvoySinks()
extern MethodInfo EnvoyInfo_get_EnvoySinks_m9256_MethodInfo;
extern "C" Object_t * EnvoyInfo_get_EnvoySinks_m9256 (EnvoyInfo_t1718 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoySinks_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
extern MethodInfo Identity__ctor_m9257_MethodInfo;
extern "C" void Identity__ctor_m9257 (Identity_t1711 * __this, String_t* ___objectUri, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		String_t* L_0 = ___objectUri;
		__this->____objectUri_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type)
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
extern "C" Object_t * Identity_get_ChannelSink_m9258 (Identity_t1711 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____channelSink_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern MethodInfo Identity_set_ChannelSink_m9259_MethodInfo;
extern "C" void Identity_set_ChannelSink_m9259 (Identity_t1711 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____channelSink_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern MethodInfo Identity_get_ObjectUri_m9260_MethodInfo;
extern "C" String_t* Identity_get_ObjectUri_m9260 (Identity_t1711 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____objectUri_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern MethodInfo Identity_get_Disposed_m9261_MethodInfo;
extern "C" bool Identity_get_Disposed_m9261 (Identity_t1711 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->____disposed_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
extern MethodInfo Identity_set_Disposed_m9262_MethodInfo;
extern "C" void Identity_set_Disposed_m9262 (Identity_t1711 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____disposed_4 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.WeakReference
#include "mscorlib_System_WeakReference.h"
extern TypeInfo WeakReference_t1719_il2cpp_TypeInfo;
extern TypeInfo IEnvoyInfo_t1722_il2cpp_TypeInfo;
extern TypeInfo IMessageSink_t1249_il2cpp_TypeInfo;
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
extern MethodInfo WeakReference_get_Target_m10893_MethodInfo;
extern MethodInfo WeakReference__ctor_m10889_MethodInfo;
extern MethodInfo ObjRef_get_URI_m9277_MethodInfo;
extern MethodInfo ObjRef_get_EnvoyInfo_m9273_MethodInfo;
extern MethodInfo IEnvoyInfo_get_EnvoySinks_m11031_MethodInfo;


// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern MethodInfo ClientIdentity__ctor_m9263_MethodInfo;
extern "C" void ClientIdentity__ctor_m9263 (ClientIdentity_t1712 * __this, String_t* ___objectUri, ObjRef_t1709 * ___objRef, MethodInfo* method)
{
	Object_t * V_0 = {0};
	ClientIdentity_t1712 * G_B2_0 = {0};
	ClientIdentity_t1712 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	ClientIdentity_t1712 * G_B3_1 = {0};
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m9257(__this, L_0, /*hidden argument*/&Identity__ctor_m9257_MethodInfo);
		ObjRef_t1709 * L_1 = ___objRef;
		__this->____objRef_3 = L_1;
		ObjRef_t1709 * L_2 = (__this->____objRef_3);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ObjRef_get_EnvoyInfo_m9273_MethodInfo, L_2);
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0030;
		}
	}
	{
		ObjRef_t1709 * L_4 = (__this->____objRef_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ObjRef_get_EnvoyInfo_m9273_MethodInfo, L_4);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnvoyInfo_get_EnvoySinks_m11031_MethodInfo, L_5);
		V_0 = L_6;
		Object_t * L_7 = V_0;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->____envoySink_2 = G_B3_0;
		return;
	}
}
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern MethodInfo ClientIdentity_get_ClientProxy_m9264_MethodInfo;
extern "C" MarshalByRefObject_t1058 * ClientIdentity_get_ClientProxy_m9264 (ClientIdentity_t1712 * __this, MethodInfo* method)
{
	{
		WeakReference_t1719 * L_0 = (__this->____proxyReference_5);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&WeakReference_get_Target_m10893_MethodInfo, L_0);
		return ((MarshalByRefObject_t1058 *)Castclass(L_1, InitializedTypeInfo(&MarshalByRefObject_t1058_il2cpp_TypeInfo)));
	}
}
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern MethodInfo ClientIdentity_set_ClientProxy_m9265_MethodInfo;
extern "C" void ClientIdentity_set_ClientProxy_m9265 (ClientIdentity_t1712 * __this, MarshalByRefObject_t1058 * ___value, MethodInfo* method)
{
	{
		MarshalByRefObject_t1058 * L_0 = ___value;
		WeakReference_t1719 * L_1 = (WeakReference_t1719 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WeakReference_t1719_il2cpp_TypeInfo));
		WeakReference__ctor_m10889(L_1, L_0, /*hidden argument*/&WeakReference__ctor_m10889_MethodInfo);
		__this->____proxyReference_5 = L_1;
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern MethodInfo ClientIdentity_CreateObjRef_m9266_MethodInfo;
extern "C" ObjRef_t1709 * ClientIdentity_CreateObjRef_m9266 (ClientIdentity_t1712 * __this, Type_t * ___requestedType, MethodInfo* method)
{
	{
		ObjRef_t1709 * L_0 = (__this->____objRef_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m9267 (ClientIdentity_t1712 * __this, MethodInfo* method)
{
	{
		ObjRef_t1709 * L_0 = (__this->____objRef_3);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ObjRef_get_URI_m9277_MethodInfo, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IChannelInfo_t1720_il2cpp_TypeInfo;
extern TypeInfo IConvertible_t123_il2cpp_TypeInfo;
extern TypeInfo IFormatProvider_t761_il2cpp_TypeInfo;
extern TypeInfo Convert_t744_il2cpp_TypeInfo;
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
extern Il2CppType IRemotingTypeInfo_t1721_0_0_0;
extern Il2CppType IEnvoyInfo_t1722_0_0_0;
extern Il2CppType IChannelInfo_t1720_0_0_0;
extern MethodInfo ObjRef_UpdateChannelInfo_m9281_MethodInfo;
extern MethodInfo SerializationInfoEnumerator_get_Name_m9443_MethodInfo;
extern MethodInfo SerializationInfoEnumerator_get_Value_m9444_MethodInfo;
extern MethodInfo IConvertible_ToInt32_m10948_MethodInfo;
extern MethodInfo Convert_ToInt32_m3869_MethodInfo;
extern MethodInfo SerializationInfo_SetType_m9433_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5242_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5244_MethodInfo;
extern MethodInfo RemotingServices_Unmarshal_m9294_MethodInfo;


// System.Void System.Runtime.Remoting.ObjRef::.ctor()
extern MethodInfo ObjRef__ctor_m9268_MethodInfo;
extern "C" void ObjRef__ctor_m9268 (ObjRef_t1709 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		ObjRef_UpdateChannelInfo_m9281(__this, /*hidden argument*/&ObjRef_UpdateChannelInfo_m9281_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo ObjRef__ctor_m9269_MethodInfo;
extern TypeInfo* Dictionary_2_t545_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m5289_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m5290_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m5291_MethodInfo_var;
extern "C" void ObjRef__ctor_m9269 (ObjRef_t1709 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	static bool ObjRef__ctor_m9269_init;
	if (!ObjRef__ctor_m9269_init)
	{
		Dictionary_2_t545_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t545_0_0_0);
		Dictionary_2__ctor_m5289_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m5289_GenericMethod);
		Dictionary_2_Add_m5290_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m5290_GenericMethod);
		Dictionary_2_TryGetValue_m5291_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m5291_GenericMethod);
		ObjRef__ctor_m9269_init = true;
	}
	SerializationInfoEnumerator_t1765 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t545 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		SerializationInfo_t708 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1765 * L_1 = SerializationInfo_GetEnumerator_m9434(L_0, /*hidden argument*/&SerializationInfo_GetEnumerator_m9434_MethodInfo);
		V_0 = L_1;
		V_1 = 1;
		goto IL_0155;
	}

IL_0014:
	{
		SerializationInfoEnumerator_t1765 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfoEnumerator_get_Name_m9443(L_2, /*hidden argument*/&SerializationInfoEnumerator_get_Name_m9443_MethodInfo);
		V_4 = L_3;
		String_t* L_4 = V_4;
		if (!L_4)
		{
			goto IL_014f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo));
		Dictionary_2_t545 * L_5 = ((ObjRef_t1709_StaticFields*)InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map26_8;
		if (L_5)
		{
			goto IL_0087;
		}
	}
	{
		Dictionary_2_t545 * L_6 = (Dictionary_2_t545 *)il2cpp_codegen_object_new (Dictionary_2_t545_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5289(L_6, 6, /*hidden argument*/Dictionary_2__ctor_m5289_MethodInfo_var);
		V_5 = L_6;
		Dictionary_2_t545 * L_7 = V_5;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_7, (String_t*) &_stringLiteral408, 0);
		Dictionary_2_t545 * L_8 = V_5;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_8, (String_t*) &_stringLiteral1796, 1);
		Dictionary_2_t545 * L_9 = V_5;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_9, (String_t*) &_stringLiteral1797, 2);
		Dictionary_2_t545 * L_10 = V_5;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_10, (String_t*) &_stringLiteral1798, 3);
		Dictionary_2_t545 * L_11 = V_5;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_11, (String_t*) &_stringLiteral1799, 4);
		Dictionary_2_t545 * L_12 = V_5;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m5290_MethodInfo_var, L_12, (String_t*) &_stringLiteral1800, 5);
		Dictionary_2_t545 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo));
		((ObjRef_t1709_StaticFields*)InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map26_8 = L_13;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo));
		Dictionary_2_t545 * L_14 = ((ObjRef_t1709_StaticFields*)InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map26_8;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m5291_MethodInfo_var, L_14, L_15, (&V_6));
		if (!L_16)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_17 = V_6;
		if (L_17 == 0)
		{
			goto IL_00be;
		}
		if (L_17 == 1)
		{
			goto IL_00d4;
		}
		if (L_17 == 2)
		{
			goto IL_00ea;
		}
		if (L_17 == 3)
		{
			goto IL_00fd;
		}
		if (L_17 == 4)
		{
			goto IL_0110;
		}
		if (L_17 == 5)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_014f;
	}

IL_00be:
	{
		SerializationInfoEnumerator_t1765 * L_18 = V_0;
		NullCheck(L_18);
		Object_t * L_19 = SerializationInfoEnumerator_get_Value_m9444(L_18, /*hidden argument*/&SerializationInfoEnumerator_get_Value_m9444_MethodInfo);
		__this->___uri_1 = ((String_t*)Castclass(L_19, (&String_t_il2cpp_TypeInfo)));
		goto IL_0155;
	}

IL_00d4:
	{
		SerializationInfoEnumerator_t1765 * L_20 = V_0;
		NullCheck(L_20);
		Object_t * L_21 = SerializationInfoEnumerator_get_Value_m9444(L_20, /*hidden argument*/&SerializationInfoEnumerator_get_Value_m9444_MethodInfo);
		__this->___typeInfo_2 = ((Object_t *)Castclass(L_21, InitializedTypeInfo(&IRemotingTypeInfo_t1721_il2cpp_TypeInfo)));
		goto IL_0155;
	}

IL_00ea:
	{
		SerializationInfoEnumerator_t1765 * L_22 = V_0;
		NullCheck(L_22);
		Object_t * L_23 = SerializationInfoEnumerator_get_Value_m9444(L_22, /*hidden argument*/&SerializationInfoEnumerator_get_Value_m9444_MethodInfo);
		__this->___channel_info_0 = ((Object_t *)Castclass(L_23, InitializedTypeInfo(&IChannelInfo_t1720_il2cpp_TypeInfo)));
		goto IL_0155;
	}

IL_00fd:
	{
		SerializationInfoEnumerator_t1765 * L_24 = V_0;
		NullCheck(L_24);
		Object_t * L_25 = SerializationInfoEnumerator_get_Value_m9444(L_24, /*hidden argument*/&SerializationInfoEnumerator_get_Value_m9444_MethodInfo);
		__this->___envoyInfo_3 = ((Object_t *)Castclass(L_25, InitializedTypeInfo(&IEnvoyInfo_t1722_il2cpp_TypeInfo)));
		goto IL_0155;
	}

IL_0110:
	{
		SerializationInfoEnumerator_t1765 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = SerializationInfoEnumerator_get_Value_m9444(L_26, /*hidden argument*/&SerializationInfoEnumerator_get_Value_m9444_MethodInfo);
		V_3 = L_27;
		Object_t * L_28 = V_3;
		if (!((String_t*)IsInst(L_28, (&String_t_il2cpp_TypeInfo))))
		{
			goto IL_012e;
		}
	}
	{
		Object_t * L_29 = V_3;
		NullCheck(((Object_t *)Castclass(L_29, InitializedTypeInfo(&IConvertible_t123_il2cpp_TypeInfo))));
		int32_t L_30 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IConvertible_ToInt32_m10948_MethodInfo, ((Object_t *)Castclass(L_29, InitializedTypeInfo(&IConvertible_t123_il2cpp_TypeInfo))), (Object_t *)NULL);
		V_2 = L_30;
		goto IL_0135;
	}

IL_012e:
	{
		Object_t * L_31 = V_3;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_31, InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo)))));
	}

IL_0135:
	{
		int32_t L_32 = V_2;
		if (L_32)
		{
			goto IL_013a;
		}
	}
	{
		V_1 = 0;
	}

IL_013a:
	{
		goto IL_0155;
	}

IL_013c:
	{
		SerializationInfoEnumerator_t1765 * L_33 = V_0;
		NullCheck(L_33);
		Object_t * L_34 = SerializationInfoEnumerator_get_Value_m9444(L_33, /*hidden argument*/&SerializationInfoEnumerator_get_Value_m9444_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		int32_t L_35 = Convert_ToInt32_m3869(NULL /*static, unused*/, L_34, /*hidden argument*/&Convert_ToInt32_m3869_MethodInfo);
		__this->___flags_4 = L_35;
		goto IL_0155;
	}

IL_014f:
	{
		NotSupportedException_t84 * L_36 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_36, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_0155:
	{
		SerializationInfoEnumerator_t1765 * L_37 = V_0;
		NullCheck(L_37);
		bool L_38 = (bool)VirtFuncInvoker0< bool >::Invoke(&SerializationInfoEnumerator_MoveNext_m9445_MethodInfo, L_37);
		if (L_38)
		{
			goto IL_0014;
		}
	}
	{
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_0175;
		}
	}
	{
		int32_t L_40 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo));
		int32_t L_41 = ((ObjRef_t1709_StaticFields*)InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo)->static_fields)->___MarshalledObjectRef_6;
		__this->___flags_4 = ((int32_t)((int32_t)L_40|(int32_t)L_41));
	}

IL_0175:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern MethodInfo ObjRef__cctor_m9270_MethodInfo;
extern "C" void ObjRef__cctor_m9270 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((ObjRef_t1709_StaticFields*)InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo)->static_fields)->___MarshalledObjectRef_6 = 1;
		((ObjRef_t1709_StaticFields*)InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo)->static_fields)->___WellKnowObjectRef_7 = 2;
		return;
	}
}
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern MethodInfo ObjRef_get_IsReferenceToWellKnow_m9271_MethodInfo;
extern "C" bool ObjRef_get_IsReferenceToWellKnow_m9271 (ObjRef_t1709 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo));
		int32_t L_1 = ((ObjRef_t1709_StaticFields*)InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo)->static_fields)->___WellKnowObjectRef_7;
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern MethodInfo ObjRef_get_ChannelInfo_m9272_MethodInfo;
extern "C" Object_t * ObjRef_get_ChannelInfo_m9272 (ObjRef_t1709 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___channel_info_0);
		return L_0;
	}
}
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C" Object_t * ObjRef_get_EnvoyInfo_m9273 (ObjRef_t1709 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoyInfo_3);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern MethodInfo ObjRef_set_EnvoyInfo_m9274_MethodInfo;
extern "C" void ObjRef_set_EnvoyInfo_m9274 (ObjRef_t1709 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___envoyInfo_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C" Object_t * ObjRef_get_TypeInfo_m9275 (ObjRef_t1709 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___typeInfo_2);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern MethodInfo ObjRef_set_TypeInfo_m9276_MethodInfo;
extern "C" void ObjRef_set_TypeInfo_m9276 (ObjRef_t1709 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___typeInfo_2 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C" String_t* ObjRef_get_URI_m9277 (ObjRef_t1709 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
extern MethodInfo ObjRef_set_URI_m9278_MethodInfo;
extern "C" void ObjRef_set_URI_m9278 (ObjRef_t1709 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo ObjRef_GetObjectData_m9279_MethodInfo;
extern "C" void ObjRef_GetObjectData_m9279 (ObjRef_t1709 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t708 * L_0 = ___info;
		Type_t * L_1 = Object_GetType_m1903(__this, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_0);
		SerializationInfo_SetType_m9433(L_0, L_1, /*hidden argument*/&SerializationInfo_SetType_m9433_MethodInfo);
		SerializationInfo_t708 * L_2 = ___info;
		String_t* L_3 = (__this->___uri_1);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5257(L_2, (String_t*) &_stringLiteral408, L_3, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		SerializationInfo_t708 * L_4 = ___info;
		Object_t * L_5 = (__this->___typeInfo_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&IRemotingTypeInfo_t1721_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5242(L_4, (String_t*) &_stringLiteral1796, L_5, L_6, /*hidden argument*/&SerializationInfo_AddValue_m5242_MethodInfo);
		SerializationInfo_t708 * L_7 = ___info;
		Object_t * L_8 = (__this->___envoyInfo_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&IEnvoyInfo_t1722_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_7);
		SerializationInfo_AddValue_m5242(L_7, (String_t*) &_stringLiteral1798, L_8, L_9, /*hidden argument*/&SerializationInfo_AddValue_m5242_MethodInfo);
		SerializationInfo_t708 * L_10 = ___info;
		Object_t * L_11 = (__this->___channel_info_0);
		Type_t * L_12 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&IChannelInfo_t1720_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_10);
		SerializationInfo_AddValue_m5242(L_10, (String_t*) &_stringLiteral1797, L_11, L_12, /*hidden argument*/&SerializationInfo_AddValue_m5242_MethodInfo);
		SerializationInfo_t708 * L_13 = ___info;
		int32_t L_14 = (__this->___flags_4);
		NullCheck(L_13);
		SerializationInfo_AddValue_m5244(L_13, (String_t*) &_stringLiteral1800, L_14, /*hidden argument*/&SerializationInfo_AddValue_m5244_MethodInfo);
		return;
	}
}
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern MethodInfo ObjRef_GetRealObject_m9280_MethodInfo;
extern "C" Object_t * ObjRef_GetRealObject_m9280 (ObjRef_t1709 * __this, StreamingContext_t709  ___context, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo));
		int32_t L_1 = ((ObjRef_t1709_StaticFields*)InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo)->static_fields)->___MarshalledObjectRef_6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Object_t * L_2 = RemotingServices_Unmarshal_m9294(NULL /*static, unused*/, __this, /*hidden argument*/&RemotingServices_Unmarshal_m9294_MethodInfo);
		return L_2;
	}

IL_0016:
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
extern "C" void ObjRef_UpdateChannelInfo_m9281 (ObjRef_t1709 * __this, MethodInfo* method)
{
	{
		ChannelInfo_t1669 * L_0 = (ChannelInfo_t1669 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ChannelInfo_t1669_il2cpp_TypeInfo));
		ChannelInfo__ctor_m9064(L_0, /*hidden argument*/&ChannelInfo__ctor_m9064_MethodInfo);
		__this->___channel_info_0 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern MethodInfo ObjRef_get_ServerType_m9282_MethodInfo;
extern "C" Type_t * ObjRef_get_ServerType_m9282 (ObjRef_t1709 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____serverType_5);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = (__this->___typeInfo_2);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IRemotingTypeInfo_get_TypeName_m11028_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetType_m7280(NULL /*static, unused*/, L_2, /*hidden argument*/&Type_GetType_m7280_MethodInfo);
		__this->____serverType_5 = L_3;
	}

IL_001e:
	{
		Type_t * L_4 = (__this->____serverType_5);
		return L_4;
	}
}
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfiguration.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo AppDomain_GetProcessGuid_m10132_MethodInfo;
extern MethodInfo Hashtable_get_Item_m5249_MethodInfo;


// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern MethodInfo RemotingConfiguration__cctor_m9283_MethodInfo;
extern "C" void RemotingConfiguration__cctor_m9283 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___applicationID_0 = (String_t*)NULL;
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___applicationName_1 = (String_t*)NULL;
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___processGuid_2 = (String_t*)NULL;
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___defaultConfigRead_3 = 0;
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___defaultDelayedConfigRead_4 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable_t1007 * L_0 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_0, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___wellKnownClientEntries_5 = L_0;
		Hashtable_t1007 * L_1 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_1, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___activatedClientEntries_6 = L_1;
		Hashtable_t1007 * L_2 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_2, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___wellKnownServiceEntries_7 = L_2;
		Hashtable_t1007 * L_3 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_3, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___activatedServiceEntries_8 = L_3;
		Hashtable_t1007 * L_4 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_4, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___channelTemplates_9 = L_4;
		Hashtable_t1007 * L_5 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_5, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___clientProviderTemplates_10 = L_5;
		Hashtable_t1007 * L_6 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_6, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___serverProviderTemplates_11 = L_6;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern MethodInfo RemotingConfiguration_get_ApplicationName_m9284_MethodInfo;
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m9284 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo));
		String_t* L_0 = ((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___applicationName_1;
		return L_0;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern "C" String_t* RemotingConfiguration_get_ProcessId_m9285 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo));
		String_t* L_0 = ((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___processGuid_2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = AppDomain_GetProcessGuid_m10132(NULL /*static, unused*/, /*hidden argument*/&AppDomain_GetProcessGuid_m10132_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo));
		((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___processGuid_2 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo));
		String_t* L_2 = ((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___processGuid_2;
		return L_2;
	}
}
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern "C" ActivatedClientTypeEntry_t1715 * RemotingConfiguration_IsRemotelyActivatedClientType_m9286 (Object_t * __this /* static, unused */, Type_t * ___svrType, MethodInfo* method)
{
	Hashtable_t1007 * V_0 = {0};
	ActivatedClientTypeEntry_t1715 * V_1 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo));
		Hashtable_t1007 * L_0 = ((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___channelTemplates_9;
		V_0 = L_0;
		Hashtable_t1007 * L_1 = V_0;
		Monitor_Enter_m573(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo));
			Hashtable_t1007 * L_2 = ((RemotingConfiguration_t1723_StaticFields*)InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo)->static_fields)->___activatedClientEntries_6;
			Type_t * L_3 = ___svrType;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m5249_MethodInfo, L_2, L_3);
			V_1 = ((ActivatedClientTypeEntry_t1715 *)IsInst(L_4, InitializedTypeInfo(&ActivatedClientTypeEntry_t1715_il2cpp_TypeInfo)));
			IL2CPP_LEAVE(0x28, FINALLY_0021);
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x28, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		Hashtable_t1007 * L_5 = V_0;
		Monitor_Exit_m575(NULL /*static, unused*/, L_5, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0028:
	{
		ActivatedClientTypeEntry_t1715 * L_6 = V_1;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo SystemException__ctor_m10798_MethodInfo;


// System.Void System.Runtime.Remoting.RemotingException::.ctor()
extern MethodInfo RemotingException__ctor_m9287_MethodInfo;
extern "C" void RemotingException__ctor_m9287 (RemotingException_t1724 * __this, MethodInfo* method)
{
	{
		SystemException__ctor_m10798(__this, /*hidden argument*/&SystemException__ctor_m10798_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String)
extern "C" void RemotingException__ctor_m9288 (RemotingException_t1724 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m5414(__this, L_0, /*hidden argument*/&SystemException__ctor_m5414_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo RemotingException__ctor_m9289_MethodInfo;
extern "C" void RemotingException__ctor_m9289 (RemotingException_t1724 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t708 * L_0 = ___info;
		StreamingContext_t709  L_1 = ___context;
		SystemException__ctor_m10799(__this, L_0, L_1, /*hidden argument*/&SystemException__ctor_m10799_MethodInfo);
		return;
	}
}
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServices.h"
#ifndef _MSC_VER
#else
#endif

// System.Guid
#include "mscorlib_System_Guid.h"
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStates.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentity.h"
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentity.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentity.h"
extern TypeInfo BinaryFormatter_t1725_il2cpp_TypeInfo;
extern TypeInfo Guid_t777_il2cpp_TypeInfo;
extern TypeInfo ServerIdentity_t1424_il2cpp_TypeInfo;
extern TypeInfo Binder_t790_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t791_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t792_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfo_t664_il2cpp_TypeInfo;
extern TypeInfo SingleCallIdentity_t1729_il2cpp_TypeInfo;
extern TypeInfo SingletonIdentity_t1728_il2cpp_TypeInfo;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContextMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1MethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentityMethodDeclarations.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentityMethodDeclarations.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentityMethodDeclarations.h"
// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentityMethodDeclarations.h"
extern Il2CppType RemoteActivator_t1664_0_0_0;
extern Il2CppType ProxyAttribute_t1707_0_0_0;
extern MethodInfo StreamingContext__ctor_m9447_MethodInfo;
extern MethodInfo BinaryFormatter__ctor_m9327_MethodInfo;
extern MethodInfo BinaryFormatter_set_AssemblyFormat_m9329_MethodInfo;
extern MethodInfo RemotingServices_RegisterInternalChannels_m9309_MethodInfo;
extern MethodInfo Guid_NewGuid_m10547_MethodInfo;
extern MethodInfo Guid_ToString_m10552_MethodInfo;
extern MethodInfo String_Replace_m4011_MethodInfo;
extern MethodInfo String_Concat_m548_MethodInfo;
extern MethodInfo RemotingServices_CreateWellKnownServerIdentity_m9305_MethodInfo;
extern MethodInfo RemotingServices_GetIdentityForUri_m9302_MethodInfo;
extern MethodInfo ServerIdentity_get_ObjectType_m9313_MethodInfo;
extern MethodInfo RemotingServices_Unmarshal_m9295_MethodInfo;
extern MethodInfo RemotingServices_GetRemoteObject_m9308_MethodInfo;
extern MethodInfo Attribute_GetCustomAttribute_m6575_MethodInfo;
extern MethodInfo RemotingServices_IsTransparentProxy_m9292_MethodInfo;
extern MethodInfo RemotingServices_FindInterfaceMethod_m9299_MethodInfo;
extern MethodInfo Type_GetMethod_m4055_MethodInfo;
extern MethodInfo Type_GetConstructor_m7300_MethodInfo;
extern MethodInfo RemotingServices_GetNormalizedUri_m9311_MethodInfo;
extern MethodInfo RemotingServices_RemoveAppNameFromUri_m9303_MethodInfo;
extern MethodInfo String_StartsWith_m3836_MethodInfo;
extern MethodInfo String_get_Length_m2112_MethodInfo;
extern MethodInfo String_Substring_m2154_MethodInfo;
extern MethodInfo IChannelInfo_get_ChannelData_m11032_MethodInfo;
extern MethodInfo RemotingServices_GetClientChannelSinkChain_m5584_MethodInfo;
extern MethodInfo SingleCallIdentity__ctor_m9317_MethodInfo;
extern MethodInfo SingletonIdentity__ctor_m9316_MethodInfo;
extern MethodInfo RemotingServices_RegisterServerIdentity_m9306_MethodInfo;
extern MethodInfo Hashtable_ContainsKey_m5281_MethodInfo;
extern MethodInfo ClientActivatedIdentity_GetServerObject_m9315_MethodInfo;
extern MethodInfo RemotingServices_GetOrCreateClientIdentity_m9304_MethodInfo;
extern MethodInfo Hashtable_Remove_m5433_MethodInfo;


// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern MethodInfo RemotingServices__cctor_m9290_MethodInfo;
extern "C" void RemotingServices__cctor_m9290 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	RemotingSurrogateSelector_t1703 * V_0 = {0};
	StreamingContext_t709  V_1 = {0};
	Guid_t777  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable_t1007 * L_0 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_0, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0 = L_0;
		((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___next_id_4 = 1;
		((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___methodBindings_5 = ((int32_t)52);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingSurrogateSelector_t1703_il2cpp_TypeInfo));
		RemotingSurrogateSelector_t1703 * L_1 = (RemotingSurrogateSelector_t1703 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingSurrogateSelector_t1703_il2cpp_TypeInfo));
		RemotingSurrogateSelector__ctor_m9214(L_1, /*hidden argument*/&RemotingSurrogateSelector__ctor_m9214_MethodInfo);
		V_0 = L_1;
		StreamingContext__ctor_m9447((&V_1), ((int32_t)16), NULL, /*hidden argument*/&StreamingContext__ctor_m9447_MethodInfo);
		RemotingSurrogateSelector_t1703 * L_2 = V_0;
		StreamingContext_t709  L_3 = V_1;
		BinaryFormatter_t1725 * L_4 = (BinaryFormatter_t1725 *)il2cpp_codegen_object_new (InitializedTypeInfo(&BinaryFormatter_t1725_il2cpp_TypeInfo));
		BinaryFormatter__ctor_m9327(L_4, L_2, L_3, /*hidden argument*/&BinaryFormatter__ctor_m9327_MethodInfo);
		((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->____serializationFormatter_1 = L_4;
		StreamingContext_t709  L_5 = V_1;
		BinaryFormatter_t1725 * L_6 = (BinaryFormatter_t1725 *)il2cpp_codegen_object_new (InitializedTypeInfo(&BinaryFormatter_t1725_il2cpp_TypeInfo));
		BinaryFormatter__ctor_m9327(L_6, (Object_t *)NULL, L_5, /*hidden argument*/&BinaryFormatter__ctor_m9327_MethodInfo);
		((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->____deserializationFormatter_2 = L_6;
		BinaryFormatter_t1725 * L_7 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->____serializationFormatter_1;
		NullCheck(L_7);
		BinaryFormatter_set_AssemblyFormat_m9329(L_7, 1, /*hidden argument*/&BinaryFormatter_set_AssemblyFormat_m9329_MethodInfo);
		BinaryFormatter_t1725 * L_8 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->____deserializationFormatter_2;
		NullCheck(L_8);
		BinaryFormatter_set_AssemblyFormat_m9329(L_8, 1, /*hidden argument*/&BinaryFormatter_set_AssemblyFormat_m9329_MethodInfo);
		RemotingServices_RegisterInternalChannels_m9309(NULL /*static, unused*/, /*hidden argument*/&RemotingServices_RegisterInternalChannels_m9309_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Guid_t777_il2cpp_TypeInfo));
		Guid_t777  L_9 = Guid_NewGuid_m10547(NULL /*static, unused*/, /*hidden argument*/&Guid_NewGuid_m10547_MethodInfo);
		V_2 = L_9;
		String_t* L_10 = Guid_ToString_m10552((&V_2), /*hidden argument*/&Guid_ToString_m10552_MethodInfo);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m4011(L_10, ((int32_t)45), ((int32_t)95), /*hidden argument*/&String_Replace_m4011_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = String_Concat_m548(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral718, /*hidden argument*/&String_Concat_m548_MethodInfo);
		((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___app_id_3 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_13 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&RemoteActivator_t1664_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		RemotingServices_CreateWellKnownServerIdentity_m9305(NULL /*static, unused*/, L_13, (String_t*) &_stringLiteral1801, 1, /*hidden argument*/&RemotingServices_CreateWellKnownServerIdentity_m9305_MethodInfo);
		Type_t * L_14 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_14);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(&Type_GetMethod_m7290_MethodInfo, L_14, (String_t*) &_stringLiteral1802, ((int32_t)36));
		((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___FieldSetterMethod_6 = L_15;
		Type_t * L_16 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_16);
		MethodInfo_t * L_17 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(&Type_GetMethod_m7290_MethodInfo, L_16, (String_t*) &_stringLiteral1803, ((int32_t)36));
		((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___FieldGetterMethod_7 = L_17;
		return;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C" MethodBase_t772 * RemotingServices_GetVirtualMethod_m9291 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t772 * ___method, MethodInfo* method)
{
	typedef MethodBase_t772 * (*RemotingServices_GetVirtualMethod_m9291_ftn) (Type_t *, MethodBase_t772 *);
	static RemotingServices_GetVirtualMethod_m9291_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemotingServices_GetVirtualMethod_m9291_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)");
	return _il2cpp_icall_func(___type, ___method);
}
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C" bool RemotingServices_IsTransparentProxy_m9292 (Object_t * __this /* static, unused */, Object_t * ___proxy, MethodInfo* method)
{
	typedef bool (*RemotingServices_IsTransparentProxy_m9292_ftn) (Object_t *);
	static RemotingServices_IsTransparentProxy_m9292_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemotingServices_IsTransparentProxy_m9292_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)");
	return _il2cpp_icall_func(___proxy);
}
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern "C" Type_t * RemotingServices_GetServerTypeForUri_m9293 (Object_t * __this /* static, unused */, String_t* ___URI, MethodInfo* method)
{
	ServerIdentity_t1424 * V_0 = {0};
	{
		String_t* L_0 = ___URI;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Identity_t1711 * L_1 = RemotingServices_GetIdentityForUri_m9302(NULL /*static, unused*/, L_0, /*hidden argument*/&RemotingServices_GetIdentityForUri_m9302_MethodInfo);
		V_0 = ((ServerIdentity_t1424 *)IsInst(L_1, InitializedTypeInfo(&ServerIdentity_t1424_il2cpp_TypeInfo)));
		ServerIdentity_t1424 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0011:
	{
		ServerIdentity_t1424 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = ServerIdentity_get_ObjectType_m9313(L_3, /*hidden argument*/&ServerIdentity_get_ObjectType_m9313_MethodInfo);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern "C" Object_t * RemotingServices_Unmarshal_m9294 (Object_t * __this /* static, unused */, ObjRef_t1709 * ___objectRef, MethodInfo* method)
{
	{
		ObjRef_t1709 * L_0 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Object_t * L_1 = RemotingServices_Unmarshal_m9295(NULL /*static, unused*/, L_0, 1, /*hidden argument*/&RemotingServices_Unmarshal_m9295_MethodInfo);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern "C" Object_t * RemotingServices_Unmarshal_m9295 (Object_t * __this /* static, unused */, ObjRef_t1709 * ___objectRef, bool ___fRefine, MethodInfo* method)
{
	Type_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	ProxyAttribute_t1707 * V_3 = {0};
	Type_t * G_B3_0 = {0};
	{
		bool L_0 = ___fRefine;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjRef_t1709 * L_1 = ___objectRef;
		NullCheck(L_1);
		Type_t * L_2 = ObjRef_get_ServerType_m9282(L_1, /*hidden argument*/&ObjRef_get_ServerType_m9282_MethodInfo);
		G_B3_0 = L_2;
		goto IL_0015;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&MarshalByRefObject_t1058_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		G_B3_0 = L_3;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		Type_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&MarshalByRefObject_t1058_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		V_0 = L_5;
	}

IL_0024:
	{
		ObjRef_t1709 * L_6 = ___objectRef;
		NullCheck(L_6);
		bool L_7 = ObjRef_get_IsReferenceToWellKnow_m9271(L_6, /*hidden argument*/&ObjRef_get_IsReferenceToWellKnow_m9271_MethodInfo);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		ObjRef_t1709 * L_8 = ___objectRef;
		Type_t * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Object_t * L_10 = RemotingServices_GetRemoteObject_m9308(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&RemotingServices_GetRemoteObject_m9308_MethodInfo);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ObjRef_t1709 * L_12 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1714_il2cpp_TypeInfo));
		TrackingServices_NotifyUnmarshaledObject_m9250(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&TrackingServices_NotifyUnmarshaledObject_m9250_MethodInfo);
		Object_t * L_13 = V_1;
		return L_13;
	}

IL_003d:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsContextful_m7263_MethodInfo, L_14);
		if (!L_15)
		{
			goto IL_0078;
		}
	}
	{
		Type_t * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_17 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&ProxyAttribute_t1707_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		Attribute_t556 * L_18 = Attribute_GetCustomAttribute_m6575(NULL /*static, unused*/, L_16, L_17, 1, /*hidden argument*/&Attribute_GetCustomAttribute_m6575_MethodInfo);
		V_3 = ((ProxyAttribute_t1707 *)Castclass(L_18, InitializedTypeInfo(&ProxyAttribute_t1707_il2cpp_TypeInfo)));
		ProxyAttribute_t1707 * L_19 = V_3;
		if (!L_19)
		{
			goto IL_0078;
		}
	}
	{
		ProxyAttribute_t1707 * L_20 = V_3;
		ObjRef_t1709 * L_21 = ___objectRef;
		Type_t * L_22 = V_0;
		NullCheck(L_20);
		RealProxy_t1708 * L_23 = (RealProxy_t1708 *)VirtFuncInvoker4< RealProxy_t1708 *, ObjRef_t1709 *, Type_t *, Object_t *, Context_t1668 * >::Invoke(&ProxyAttribute_CreateProxy_m9233_MethodInfo, L_20, L_21, L_22, NULL, (Context_t1668 *)NULL);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&RealProxy_GetTransparentProxy_m9242_MethodInfo, L_23);
		V_2 = L_24;
		Object_t * L_25 = V_2;
		ObjRef_t1709 * L_26 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1714_il2cpp_TypeInfo));
		TrackingServices_NotifyUnmarshaledObject_m9250(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/&TrackingServices_NotifyUnmarshaledObject_m9250_MethodInfo);
		Object_t * L_27 = V_2;
		return L_27;
	}

IL_0078:
	{
		ObjRef_t1709 * L_28 = ___objectRef;
		Type_t * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Object_t * L_30 = RemotingServices_GetProxyForRemoteObject_m9307(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/&RemotingServices_GetProxyForRemoteObject_m9307_MethodInfo);
		V_2 = L_30;
		Object_t * L_31 = V_2;
		ObjRef_t1709 * L_32 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TrackingServices_t1714_il2cpp_TypeInfo));
		TrackingServices_NotifyUnmarshaledObject_m9250(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/&TrackingServices_NotifyUnmarshaledObject_m9250_MethodInfo);
		Object_t * L_33 = V_2;
		return L_33;
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern "C" RealProxy_t1708 * RemotingServices_GetRealProxy_m9296 (Object_t * __this /* static, unused */, Object_t * ___proxy, MethodInfo* method)
{
	{
		Object_t * L_0 = ___proxy;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		bool L_1 = RemotingServices_IsTransparentProxy_m9292(NULL /*static, unused*/, L_0, /*hidden argument*/&RemotingServices_IsTransparentProxy_m9292_MethodInfo);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		RemotingException_t1724 * L_2 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
		RemotingException__ctor_m9288(L_2, (String_t*) &_stringLiteral1804, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t * L_3 = ___proxy;
		NullCheck(((TransparentProxy_t1710 *)Castclass(L_3, InitializedTypeInfo(&TransparentProxy_t1710_il2cpp_TypeInfo))));
		RealProxy_t1708 * L_4 = (((TransparentProxy_t1710 *)Castclass(L_3, InitializedTypeInfo(&TransparentProxy_t1710_il2cpp_TypeInfo)))->____rp_0);
		return L_4;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* TypeU5BU5D_t658_il2cpp_TypeInfo_var;
extern "C" MethodBase_t772 * RemotingServices_GetMethodBaseFromMethodMessage_m9297 (Object_t * __this /* static, unused */, Object_t * ___msg, MethodInfo* method)
{
	static bool RemotingServices_GetMethodBaseFromMethodMessage_m9297_init;
	if (!RemotingServices_GetMethodBaseFromMethodMessage_m9297_init)
	{
		TypeU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t658_0_0_0);
		RemotingServices_GetMethodBaseFromMethodMessage_m9297_init = true;
	}
	Type_t * V_0 = {0};
	{
		Object_t * L_0 = ___msg;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IMethodMessage_get_TypeName_m11018_MethodInfo, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetType_m7280(NULL /*static, unused*/, L_1, /*hidden argument*/&Type_GetType_m7280_MethodInfo);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		Object_t * L_4 = ___msg;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IMethodMessage_get_TypeName_m11018_MethodInfo, L_4);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral1805, L_5, (String_t*) &_stringLiteral1553, /*hidden argument*/&String_Concat_m380_MethodInfo);
		RemotingException_t1724 * L_7 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
		RemotingException__ctor_m9288(L_7, L_6, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002a:
	{
		Type_t * L_8 = V_0;
		Object_t * L_9 = ___msg;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&IMethodMessage_get_MethodName_m11017_MethodInfo, L_9);
		Object_t * L_11 = ___msg;
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IMethodMessage_get_MethodSignature_m11019_MethodInfo, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		MethodBase_t772 * L_13 = RemotingServices_GetMethodBaseFromName_m9298(NULL /*static, unused*/, L_8, L_10, ((TypeU5BU5D_t658*)Castclass(L_12, TypeU5BU5D_t658_il2cpp_TypeInfo_var)), /*hidden argument*/&RemotingServices_GetMethodBaseFromName_m9298_MethodInfo);
		return L_13;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern "C" MethodBase_t772 * RemotingServices_GetMethodBaseFromName_m9298 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t658* ___signature, MethodInfo* method)
{
	MethodBase_t772 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m7266_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Type_t * L_2 = ___type;
		String_t* L_3 = ___methodName;
		TypeU5BU5D_t658* L_4 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		MethodBase_t772 * L_5 = RemotingServices_FindInterfaceMethod_m9299(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/&RemotingServices_FindInterfaceMethod_m9299_MethodInfo);
		return L_5;
	}

IL_0011:
	{
		V_0 = (MethodBase_t772 *)NULL;
		TypeU5BU5D_t658* L_6 = ___signature;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_7 = ___type;
		String_t* L_8 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		int32_t L_9 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___methodBindings_5;
		NullCheck(L_7);
		MethodInfo_t * L_10 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(&Type_GetMethod_m7290_MethodInfo, L_7, L_8, L_9);
		V_0 = L_10;
		goto IL_0035;
	}

IL_0025:
	{
		Type_t * L_11 = ___type;
		String_t* L_12 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		int32_t L_13 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___methodBindings_5;
		TypeU5BU5D_t658* L_14 = ___signature;
		NullCheck(L_11);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t790 *, TypeU5BU5D_t658*, ParameterModifierU5BU5D_t791* >::Invoke(&Type_GetMethod_m4055_MethodInfo, L_11, L_12, L_13, (Binder_t790 *)NULL, L_14, (ParameterModifierU5BU5D_t791*)(ParameterModifierU5BU5D_t791*)NULL);
		V_0 = L_15;
	}

IL_0035:
	{
		MethodBase_t772 * L_16 = V_0;
		if (!L_16)
		{
			goto IL_003a;
		}
	}
	{
		MethodBase_t772 * L_17 = V_0;
		return L_17;
	}

IL_003a:
	{
		String_t* L_18 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_19 = String_op_Equality_m2110(NULL /*static, unused*/, L_18, (String_t*) &_stringLiteral1802, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_19)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		MethodInfo_t * L_20 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___FieldSetterMethod_6;
		return L_20;
	}

IL_004d:
	{
		String_t* L_21 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_22 = String_op_Equality_m2110(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral1803, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_22)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		MethodInfo_t * L_23 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___FieldGetterMethod_7;
		return L_23;
	}

IL_0060:
	{
		TypeU5BU5D_t658* L_24 = ___signature;
		if (L_24)
		{
			goto IL_0076;
		}
	}
	{
		Type_t * L_25 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		int32_t L_26 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___methodBindings_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t658* L_27 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		NullCheck(L_25);
		ConstructorInfo_t664 * L_28 = (ConstructorInfo_t664 *)VirtFuncInvoker4< ConstructorInfo_t664 *, int32_t, Binder_t790 *, TypeU5BU5D_t658*, ParameterModifierU5BU5D_t791* >::Invoke(&Type_GetConstructor_m7300_MethodInfo, L_25, L_26, (Binder_t790 *)NULL, L_27, (ParameterModifierU5BU5D_t791*)(ParameterModifierU5BU5D_t791*)NULL);
		return L_28;
	}

IL_0076:
	{
		Type_t * L_29 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		int32_t L_30 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___methodBindings_5;
		TypeU5BU5D_t658* L_31 = ___signature;
		NullCheck(L_29);
		ConstructorInfo_t664 * L_32 = (ConstructorInfo_t664 *)VirtFuncInvoker4< ConstructorInfo_t664 *, int32_t, Binder_t790 *, TypeU5BU5D_t658*, ParameterModifierU5BU5D_t791* >::Invoke(&Type_GetConstructor_m7300_MethodInfo, L_29, L_30, (Binder_t790 *)NULL, L_31, (ParameterModifierU5BU5D_t791*)(ParameterModifierU5BU5D_t791*)NULL);
		return L_32;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern "C" MethodBase_t772 * RemotingServices_FindInterfaceMethod_m9299 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t658* ___signature, MethodInfo* method)
{
	MethodBase_t772 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t658* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = (MethodBase_t772 *)NULL;
		TypeU5BU5D_t658* L_0 = ___signature;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = ___type;
		String_t* L_2 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		int32_t L_3 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___methodBindings_5;
		NullCheck(L_1);
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(&Type_GetMethod_m7290_MethodInfo, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0014:
	{
		Type_t * L_5 = ___type;
		String_t* L_6 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		int32_t L_7 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___methodBindings_5;
		TypeU5BU5D_t658* L_8 = ___signature;
		NullCheck(L_5);
		MethodInfo_t * L_9 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t790 *, TypeU5BU5D_t658*, ParameterModifierU5BU5D_t791* >::Invoke(&Type_GetMethod_m4055_MethodInfo, L_5, L_6, L_7, (Binder_t790 *)NULL, L_8, (ParameterModifierU5BU5D_t791*)(ParameterModifierU5BU5D_t791*)NULL);
		V_0 = L_9;
	}

IL_0024:
	{
		MethodBase_t772 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0029;
		}
	}
	{
		MethodBase_t772 * L_11 = V_0;
		return L_11;
	}

IL_0029:
	{
		Type_t * L_12 = ___type;
		NullCheck(L_12);
		TypeU5BU5D_t658* L_13 = (TypeU5BU5D_t658*)VirtFuncInvoker0< TypeU5BU5D_t658* >::Invoke(&Type_GetInterfaces_m10988_MethodInfo, L_12);
		V_2 = L_13;
		V_3 = 0;
		goto IL_004a;
	}

IL_0034:
	{
		TypeU5BU5D_t658* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_14, L_16));
		Type_t * L_17 = V_1;
		String_t* L_18 = ___methodName;
		TypeU5BU5D_t658* L_19 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		MethodBase_t772 * L_20 = RemotingServices_FindInterfaceMethod_m9299(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/&RemotingServices_FindInterfaceMethod_m9299_MethodInfo);
		V_0 = L_20;
		MethodBase_t772 * L_21 = V_0;
		if (!L_21)
		{
			goto IL_0046;
		}
	}
	{
		MethodBase_t772 * L_22 = V_0;
		return L_22;
	}

IL_0046:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_004a:
	{
		int32_t L_24 = V_3;
		TypeU5BU5D_t658* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		return (MethodBase_t772 *)NULL;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern "C" Object_t * RemotingServices_CreateClientProxy_m9300 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1715 * ___entry, ObjectU5BU5D_t76* ___activationAttributes, MethodInfo* method)
{
	ArrayList_t1020 * V_0 = {0};
	{
		ActivatedClientTypeEntry_t1715 * L_0 = ___entry;
		NullCheck(L_0);
		IContextAttributeU5BU5D_t1717* L_1 = ActivatedClientTypeEntry_get_ContextAttributes_m9252(L_0, /*hidden argument*/&ActivatedClientTypeEntry_get_ContextAttributes_m9252_MethodInfo);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t76* L_2 = ___activationAttributes;
		if (!L_2)
		{
			goto IL_0047;
		}
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList_t1020 * L_3 = (ArrayList_t1020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList__ctor_m5240(L_3, /*hidden argument*/&ArrayList__ctor_m5240_MethodInfo);
		V_0 = L_3;
		ActivatedClientTypeEntry_t1715 * L_4 = ___entry;
		NullCheck(L_4);
		IContextAttributeU5BU5D_t1717* L_5 = ActivatedClientTypeEntry_get_ContextAttributes_m9252(L_4, /*hidden argument*/&ActivatedClientTypeEntry_get_ContextAttributes_m9252_MethodInfo);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		ArrayList_t1020 * L_6 = V_0;
		ActivatedClientTypeEntry_t1715 * L_7 = ___entry;
		NullCheck(L_7);
		IContextAttributeU5BU5D_t1717* L_8 = ActivatedClientTypeEntry_get_ContextAttributes_m9252(L_7, /*hidden argument*/&ActivatedClientTypeEntry_get_ContextAttributes_m9252_MethodInfo);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(&ArrayList_AddRange_m5362_MethodInfo, L_6, (Object_t *)(Object_t *)L_8);
	}

IL_0025:
	{
		ObjectU5BU5D_t76* L_9 = ___activationAttributes;
		if (!L_9)
		{
			goto IL_002f;
		}
	}
	{
		ArrayList_t1020 * L_10 = V_0;
		ObjectU5BU5D_t76* L_11 = ___activationAttributes;
		NullCheck(L_10);
		VirtActionInvoker1< Object_t * >::Invoke(&ArrayList_AddRange_m5362_MethodInfo, L_10, (Object_t *)(Object_t *)L_11);
	}

IL_002f:
	{
		ActivatedClientTypeEntry_t1715 * L_12 = ___entry;
		NullCheck(L_12);
		Type_t * L_13 = ActivatedClientTypeEntry_get_ObjectType_m9253(L_12, /*hidden argument*/&ActivatedClientTypeEntry_get_ObjectType_m9253_MethodInfo);
		ActivatedClientTypeEntry_t1715 * L_14 = ___entry;
		NullCheck(L_14);
		String_t* L_15 = ActivatedClientTypeEntry_get_ApplicationUrl_m9251(L_14, /*hidden argument*/&ActivatedClientTypeEntry_get_ApplicationUrl_m9251_MethodInfo);
		ArrayList_t1020 * L_16 = V_0;
		NullCheck(L_16);
		ObjectU5BU5D_t76* L_17 = (ObjectU5BU5D_t76*)VirtFuncInvoker0< ObjectU5BU5D_t76* >::Invoke(&ArrayList_ToArray_m7922_MethodInfo, L_16);
		Object_t * L_18 = RemotingServices_CreateClientProxy_m5585(NULL /*static, unused*/, L_13, L_15, L_17, /*hidden argument*/&RemotingServices_CreateClientProxy_m5585_MethodInfo);
		return L_18;
	}

IL_0047:
	{
		ActivatedClientTypeEntry_t1715 * L_19 = ___entry;
		NullCheck(L_19);
		Type_t * L_20 = ActivatedClientTypeEntry_get_ObjectType_m9253(L_19, /*hidden argument*/&ActivatedClientTypeEntry_get_ObjectType_m9253_MethodInfo);
		ActivatedClientTypeEntry_t1715 * L_21 = ___entry;
		NullCheck(L_21);
		String_t* L_22 = ActivatedClientTypeEntry_get_ApplicationUrl_m9251(L_21, /*hidden argument*/&ActivatedClientTypeEntry_get_ApplicationUrl_m9251_MethodInfo);
		Object_t * L_23 = RemotingServices_CreateClientProxy_m5585(NULL /*static, unused*/, L_20, L_22, (ObjectU5BU5D_t76*)(ObjectU5BU5D_t76*)NULL, /*hidden argument*/&RemotingServices_CreateClientProxy_m5585_MethodInfo);
		return L_23;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern "C" Object_t * RemotingServices_CreateClientProxyForContextBound_m9301 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t76* ___activationAttributes, MethodInfo* method)
{
	ProxyAttribute_t1707 * V_0 = {0};
	RemotingProxy_t1713 * V_1 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsContextful_m7263_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&ProxyAttribute_t1707_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		Attribute_t556 * L_4 = Attribute_GetCustomAttribute_m6575(NULL /*static, unused*/, L_2, L_3, 1, /*hidden argument*/&Attribute_GetCustomAttribute_m6575_MethodInfo);
		V_0 = ((ProxyAttribute_t1707 *)Castclass(L_4, InitializedTypeInfo(&ProxyAttribute_t1707_il2cpp_TypeInfo)));
		ProxyAttribute_t1707 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		ProxyAttribute_t1707 * L_6 = V_0;
		Type_t * L_7 = ___type;
		NullCheck(L_6);
		MarshalByRefObject_t1058 * L_8 = (MarshalByRefObject_t1058 *)VirtFuncInvoker1< MarshalByRefObject_t1058 *, Type_t * >::Invoke(&ProxyAttribute_CreateInstance_m9232_MethodInfo, L_6, L_7);
		return L_8;
	}

IL_002a:
	{
		Type_t * L_9 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo));
		String_t* L_10 = ((ChannelServices_t1671_StaticFields*)InitializedTypeInfo(&ChannelServices_t1671_il2cpp_TypeInfo)->static_fields)->___CrossContextUrl_3;
		ObjectU5BU5D_t76* L_11 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingProxy_t1713_il2cpp_TypeInfo));
		RemotingProxy_t1713 * L_12 = (RemotingProxy_t1713 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingProxy_t1713_il2cpp_TypeInfo));
		RemotingProxy__ctor_m9245(L_12, L_9, L_10, L_11, /*hidden argument*/&RemotingProxy__ctor_m9245_MethodInfo);
		V_1 = L_12;
		RemotingProxy_t1713 * L_13 = V_1;
		NullCheck(L_13);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&RealProxy_GetTransparentProxy_m9242_MethodInfo, L_13);
		return L_14;
	}
}
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern "C" Identity_t1711 * RemotingServices_GetIdentityForUri_m9302 (Object_t * __this /* static, unused */, String_t* ___uri, MethodInfo* method)
{
	String_t* V_0 = {0};
	Hashtable_t1007 * V_1 = {0};
	Identity_t1711 * V_2 = {0};
	Identity_t1711 * V_3 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		String_t* L_1 = RemotingServices_GetNormalizedUri_m9311(NULL /*static, unused*/, L_0, /*hidden argument*/&RemotingServices_GetNormalizedUri_m9311_MethodInfo);
		V_0 = L_1;
		Hashtable_t1007 * L_2 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
		V_1 = L_2;
		Hashtable_t1007 * L_3 = V_1;
		Monitor_Enter_m573(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
			Hashtable_t1007 * L_4 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
			String_t* L_5 = V_0;
			NullCheck(L_4);
			Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m5249_MethodInfo, L_4, L_5);
			V_2 = ((Identity_t1711 *)Castclass(L_6, InitializedTypeInfo(&Identity_t1711_il2cpp_TypeInfo)));
			Identity_t1711 * L_7 = V_2;
			if (L_7)
			{
				goto IL_0042;
			}
		}

IL_0027:
		{
			String_t* L_8 = ___uri;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
			String_t* L_9 = RemotingServices_RemoveAppNameFromUri_m9303(NULL /*static, unused*/, L_8, /*hidden argument*/&RemotingServices_RemoveAppNameFromUri_m9303_MethodInfo);
			V_0 = L_9;
			String_t* L_10 = V_0;
			if (!L_10)
			{
				goto IL_0042;
			}
		}

IL_0031:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
			Hashtable_t1007 * L_11 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
			String_t* L_12 = V_0;
			NullCheck(L_11);
			Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m5249_MethodInfo, L_11, L_12);
			V_2 = ((Identity_t1711 *)Castclass(L_13, InitializedTypeInfo(&Identity_t1711_il2cpp_TypeInfo)));
		}

IL_0042:
		{
			Identity_t1711 * L_14 = V_2;
			V_3 = L_14;
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Hashtable_t1007 * L_15 = V_1;
		Monitor_Exit_m575(NULL /*static, unused*/, L_15, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_004f:
	{
		Identity_t1711 * L_16 = V_3;
		return L_16;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern "C" String_t* RemotingServices_RemoveAppNameFromUri_m9303 (Object_t * __this /* static, unused */, String_t* ___uri, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingConfiguration_t1723_il2cpp_TypeInfo));
		String_t* L_0 = RemotingConfiguration_get_ApplicationName_m9284(NULL /*static, unused*/, /*hidden argument*/&RemotingConfiguration_get_ApplicationName_m9284_MethodInfo);
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral718, L_2, (String_t*) &_stringLiteral718, /*hidden argument*/&String_Concat_m380_MethodInfo);
		V_0 = L_3;
		String_t* L_4 = ___uri;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = String_StartsWith_m3836(L_4, L_5, /*hidden argument*/&String_StartsWith_m3836_MethodInfo);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_7 = ___uri;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m2112(L_8, /*hidden argument*/&String_get_Length_m2112_MethodInfo);
		NullCheck(L_7);
		String_t* L_10 = String_Substring_m2154(L_7, L_9, /*hidden argument*/&String_Substring_m2154_MethodInfo);
		return L_10;
	}

IL_0032:
	{
		return (String_t*)NULL;
	}
}
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern "C" ClientIdentity_t1712 * RemotingServices_GetOrCreateClientIdentity_m9304 (Object_t * __this /* static, unused */, ObjRef_t1709 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, MethodInfo* method)
{
	Object_t * V_0 = {0};
	String_t* V_1 = {0};
	Object_t * V_2 = {0};
	Hashtable_t1007 * V_3 = {0};
	String_t* V_4 = {0};
	ClientIdentity_t1712 * V_5 = {0};
	RemotingProxy_t1713 * V_6 = {0};
	CrossAppDomainSink_t1675 * V_7 = {0};
	ClientIdentity_t1712 * V_8 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ObjectU5BU5D_t76* G_B3_0 = {0};
	{
		ObjRef_t1709 * L_0 = ___objRef;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ObjRef_get_ChannelInfo_m9272_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ObjRef_t1709 * L_2 = ___objRef;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ObjRef_get_ChannelInfo_m9272_MethodInfo, L_2);
		NullCheck(L_3);
		ObjectU5BU5D_t76* L_4 = (ObjectU5BU5D_t76*)InterfaceFuncInvoker0< ObjectU5BU5D_t76* >::Invoke(&IChannelInfo_get_ChannelData_m11032_MethodInfo, L_3);
		G_B3_0 = L_4;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = ((ObjectU5BU5D_t76*)(NULL));
	}

IL_0016:
	{
		V_0 = (Object_t *)G_B3_0;
		ObjRef_t1709 * L_5 = ___objRef;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ObjRef_get_URI_m9277_MethodInfo, L_5);
		Object_t * L_7 = V_0;
		Object_t * L_8 = RemotingServices_GetClientChannelSinkChain_m5584(NULL /*static, unused*/, L_6, L_7, (&V_1), /*hidden argument*/&RemotingServices_GetClientChannelSinkChain_m5584_MethodInfo);
		V_2 = L_8;
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0030;
		}
	}
	{
		ObjRef_t1709 * L_10 = ___objRef;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ObjRef_get_URI_m9277_MethodInfo, L_10);
		V_1 = L_11;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Hashtable_t1007 * L_12 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
		V_3 = L_12;
		Hashtable_t1007 * L_13 = V_3;
		Monitor_Enter_m573(NULL /*static, unused*/, L_13, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			Object_t ** L_14 = ___clientProxy;
			*((Object_t **)(L_14)) = (Object_t *)NULL;
			ObjRef_t1709 * L_15 = ___objRef;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ObjRef_get_URI_m9277_MethodInfo, L_15);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
			String_t* L_17 = RemotingServices_GetNormalizedUri_m9311(NULL /*static, unused*/, L_16, /*hidden argument*/&RemotingServices_GetNormalizedUri_m9311_MethodInfo);
			V_4 = L_17;
			Hashtable_t1007 * L_18 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
			String_t* L_19 = V_4;
			NullCheck(L_18);
			Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m5249_MethodInfo, L_18, L_19);
			V_5 = ((ClientIdentity_t1712 *)IsInst(L_20, InitializedTypeInfo(&ClientIdentity_t1712_il2cpp_TypeInfo)));
			ClientIdentity_t1712 * L_21 = V_5;
			if (!L_21)
			{
				goto IL_007d;
			}
		}

IL_0063:
		{
			Object_t ** L_22 = ___clientProxy;
			ClientIdentity_t1712 * L_23 = V_5;
			NullCheck(L_23);
			MarshalByRefObject_t1058 * L_24 = ClientIdentity_get_ClientProxy_m9264(L_23, /*hidden argument*/&ClientIdentity_get_ClientProxy_m9264_MethodInfo);
			*((Object_t **)(L_22)) = (Object_t *)L_24;
			Object_t ** L_25 = ___clientProxy;
			if (!(*((Object_t **)L_25)))
			{
				goto IL_0076;
			}
		}

IL_0070:
		{
			ClientIdentity_t1712 * L_26 = V_5;
			V_8 = L_26;
			IL2CPP_LEAVE(0xE9, FINALLY_00e2);
		}

IL_0076:
		{
			ClientIdentity_t1712 * L_27 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
			RemotingServices_DisposeIdentity_m9310(NULL /*static, unused*/, L_27, /*hidden argument*/&RemotingServices_DisposeIdentity_m9310_MethodInfo);
		}

IL_007d:
		{
			String_t* L_28 = V_1;
			ObjRef_t1709 * L_29 = ___objRef;
			ClientIdentity_t1712 * L_30 = (ClientIdentity_t1712 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ClientIdentity_t1712_il2cpp_TypeInfo));
			ClientIdentity__ctor_m9263(L_30, L_28, L_29, /*hidden argument*/&ClientIdentity__ctor_m9263_MethodInfo);
			V_5 = L_30;
			ClientIdentity_t1712 * L_31 = V_5;
			Object_t * L_32 = V_2;
			NullCheck(L_31);
			Identity_set_ChannelSink_m9259(L_31, L_32, /*hidden argument*/&Identity_set_ChannelSink_m9259_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
			Hashtable_t1007 * L_33 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
			String_t* L_34 = V_4;
			ClientIdentity_t1712 * L_35 = V_5;
			NullCheck(L_33);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_set_Item_m5432_MethodInfo, L_33, L_34, L_35);
			Type_t * L_36 = ___proxyType;
			if (!L_36)
			{
				goto IL_00da;
			}
		}

IL_009f:
		{
			Type_t * L_37 = ___proxyType;
			ClientIdentity_t1712 * L_38 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingProxy_t1713_il2cpp_TypeInfo));
			RemotingProxy_t1713 * L_39 = (RemotingProxy_t1713 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingProxy_t1713_il2cpp_TypeInfo));
			RemotingProxy__ctor_m9244(L_39, L_37, L_38, /*hidden argument*/&RemotingProxy__ctor_m9244_MethodInfo);
			V_6 = L_39;
			Object_t * L_40 = V_2;
			V_7 = ((CrossAppDomainSink_t1675 *)IsInst(L_40, InitializedTypeInfo(&CrossAppDomainSink_t1675_il2cpp_TypeInfo)));
			CrossAppDomainSink_t1675 * L_41 = V_7;
			if (!L_41)
			{
				goto IL_00c3;
			}
		}

IL_00b5:
		{
			RemotingProxy_t1713 * L_42 = V_6;
			CrossAppDomainSink_t1675 * L_43 = V_7;
			NullCheck(L_43);
			int32_t L_44 = CrossAppDomainSink_get_TargetDomainId_m9079(L_43, /*hidden argument*/&CrossAppDomainSink_get_TargetDomainId_m9079_MethodInfo);
			NullCheck(L_42);
			RealProxy_SetTargetDomain_m9243(L_42, L_44, /*hidden argument*/&RealProxy_SetTargetDomain_m9243_MethodInfo);
		}

IL_00c3:
		{
			Object_t ** L_45 = ___clientProxy;
			RemotingProxy_t1713 * L_46 = V_6;
			NullCheck(L_46);
			Object_t * L_47 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&RealProxy_GetTransparentProxy_m9242_MethodInfo, L_46);
			*((Object_t **)(L_45)) = (Object_t *)L_47;
			ClientIdentity_t1712 * L_48 = V_5;
			Object_t ** L_49 = ___clientProxy;
			NullCheck(L_48);
			ClientIdentity_set_ClientProxy_m9265(L_48, ((MarshalByRefObject_t1058 *)Castclass((*((Object_t **)L_49)), InitializedTypeInfo(&MarshalByRefObject_t1058_il2cpp_TypeInfo))), /*hidden argument*/&ClientIdentity_set_ClientProxy_m9265_MethodInfo);
		}

IL_00da:
		{
			ClientIdentity_t1712 * L_50 = V_5;
			V_8 = L_50;
			IL2CPP_LEAVE(0xE9, FINALLY_00e2);
		}

IL_00e0:
		{
			IL2CPP_LEAVE(0xE9, FINALLY_00e2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_00e2;
	}

FINALLY_00e2:
	{ // begin finally (depth: 1)
		Hashtable_t1007 * L_51 = V_3;
		Monitor_Exit_m575(NULL /*static, unused*/, L_51, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(226)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(226)
	{
		IL2CPP_JUMP_TBL(0xE9, IL_00e9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_00e9:
	{
		ClientIdentity_t1712 * L_52 = V_8;
		return L_52;
	}
}
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C" ServerIdentity_t1424 * RemotingServices_CreateWellKnownServerIdentity_m9305 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, MethodInfo* method)
{
	ServerIdentity_t1424 * V_0 = {0};
	{
		int32_t L_0 = ___mode;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Context_t1668_il2cpp_TypeInfo));
		Context_t1668 * L_2 = Context_get_DefaultContext_m9082(NULL /*static, unused*/, /*hidden argument*/&Context_get_DefaultContext_m9082_MethodInfo);
		Type_t * L_3 = ___objectType;
		SingleCallIdentity_t1729 * L_4 = (SingleCallIdentity_t1729 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SingleCallIdentity_t1729_il2cpp_TypeInfo));
		SingleCallIdentity__ctor_m9317(L_4, L_1, L_2, L_3, /*hidden argument*/&SingleCallIdentity__ctor_m9317_MethodInfo);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0013:
	{
		String_t* L_5 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Context_t1668_il2cpp_TypeInfo));
		Context_t1668 * L_6 = Context_get_DefaultContext_m9082(NULL /*static, unused*/, /*hidden argument*/&Context_get_DefaultContext_m9082_MethodInfo);
		Type_t * L_7 = ___objectType;
		SingletonIdentity_t1728 * L_8 = (SingletonIdentity_t1728 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SingletonIdentity_t1728_il2cpp_TypeInfo));
		SingletonIdentity__ctor_m9316(L_8, L_5, L_6, L_7, /*hidden argument*/&SingletonIdentity__ctor_m9316_MethodInfo);
		V_0 = L_8;
	}

IL_0020:
	{
		ServerIdentity_t1424 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		RemotingServices_RegisterServerIdentity_m9306(NULL /*static, unused*/, L_9, /*hidden argument*/&RemotingServices_RegisterServerIdentity_m9306_MethodInfo);
		ServerIdentity_t1424 * L_10 = V_0;
		return L_10;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C" void RemotingServices_RegisterServerIdentity_m9306 (Object_t * __this /* static, unused */, ServerIdentity_t1424 * ___identity, MethodInfo* method)
{
	Hashtable_t1007 * V_0 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Hashtable_t1007 * L_0 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t1007 * L_1 = V_0;
		Monitor_Enter_m573(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
			Hashtable_t1007 * L_2 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
			ServerIdentity_t1424 * L_3 = ___identity;
			NullCheck(L_3);
			String_t* L_4 = Identity_get_ObjectUri_m9260(L_3, /*hidden argument*/&Identity_get_ObjectUri_m9260_MethodInfo);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Hashtable_ContainsKey_m5281_MethodInfo, L_2, L_4);
			if (!L_5)
			{
				goto IL_0039;
			}
		}

IL_001e:
		{
			ServerIdentity_t1424 * L_6 = ___identity;
			NullCheck(L_6);
			String_t* L_7 = Identity_get_ObjectUri_m9260(L_6, /*hidden argument*/&Identity_get_ObjectUri_m9260_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_8 = String_Concat_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral1806, L_7, (String_t*) &_stringLiteral88, /*hidden argument*/&String_Concat_m380_MethodInfo);
			RemotingException_t1724 * L_9 = (RemotingException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RemotingException_t1724_il2cpp_TypeInfo));
			RemotingException__ctor_m9288(L_9, L_8, /*hidden argument*/&RemotingException__ctor_m9288_MethodInfo);
			il2cpp_codegen_raise_exception(L_9);
		}

IL_0039:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
			Hashtable_t1007 * L_10 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
			ServerIdentity_t1424 * L_11 = ___identity;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m9260(L_11, /*hidden argument*/&Identity_get_ObjectUri_m9260_MethodInfo);
			ServerIdentity_t1424 * L_13 = ___identity;
			NullCheck(L_10);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_set_Item_m5432_MethodInfo, L_10, L_12, L_13);
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Hashtable_t1007 * L_14 = V_0;
		Monitor_Exit_m575(NULL /*static, unused*/, L_14, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0053:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C" Object_t * RemotingServices_GetProxyForRemoteObject_m9307 (Object_t * __this /* static, unused */, ObjRef_t1709 * ___objref, Type_t * ___classToProxy, MethodInfo* method)
{
	ClientActivatedIdentity_t1727 * V_0 = {0};
	{
		ObjRef_t1709 * L_0 = ___objref;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ObjRef_get_URI_m9277_MethodInfo, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Identity_t1711 * L_2 = RemotingServices_GetIdentityForUri_m9302(NULL /*static, unused*/, L_1, /*hidden argument*/&RemotingServices_GetIdentityForUri_m9302_MethodInfo);
		V_0 = ((ClientActivatedIdentity_t1727 *)IsInst(L_2, InitializedTypeInfo(&ClientActivatedIdentity_t1727_il2cpp_TypeInfo)));
		ClientActivatedIdentity_t1727 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		ClientActivatedIdentity_t1727 * L_4 = V_0;
		NullCheck(L_4);
		MarshalByRefObject_t1058 * L_5 = ClientActivatedIdentity_GetServerObject_m9315(L_4, /*hidden argument*/&ClientActivatedIdentity_GetServerObject_m9315_MethodInfo);
		return L_5;
	}

IL_001b:
	{
		ObjRef_t1709 * L_6 = ___objref;
		Type_t * L_7 = ___classToProxy;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Object_t * L_8 = RemotingServices_GetRemoteObject_m9308(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&RemotingServices_GetRemoteObject_m9308_MethodInfo);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C" Object_t * RemotingServices_GetRemoteObject_m9308 (Object_t * __this /* static, unused */, ObjRef_t1709 * ___objRef, Type_t * ___proxyType, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		ObjRef_t1709 * L_0 = ___objRef;
		Type_t * L_1 = ___proxyType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		RemotingServices_GetOrCreateClientIdentity_m9304(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/&RemotingServices_GetOrCreateClientIdentity_m9304_MethodInfo);
		Object_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern "C" void RemotingServices_RegisterInternalChannels_m9309 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CrossAppDomainChannel_t1674_il2cpp_TypeInfo));
		CrossAppDomainChannel_RegisterCrossAppDomainChannel_m9073(NULL /*static, unused*/, /*hidden argument*/&CrossAppDomainChannel_RegisterCrossAppDomainChannel_m9073_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern "C" void RemotingServices_DisposeIdentity_m9310 (Object_t * __this /* static, unused */, Identity_t1711 * ___ident, MethodInfo* method)
{
	Hashtable_t1007 * V_0 = {0};
	ClientIdentity_t1712 * V_1 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
		Hashtable_t1007 * L_0 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t1007 * L_1 = V_0;
		Monitor_Enter_m573(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m573_MethodInfo);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			Identity_t1711 * L_2 = ___ident;
			NullCheck(L_2);
			bool L_3 = Identity_get_Disposed_m9261(L_2, /*hidden argument*/&Identity_get_Disposed_m9261_MethodInfo);
			if (L_3)
			{
				goto IL_004c;
			}
		}

IL_0014:
		{
			Identity_t1711 * L_4 = ___ident;
			V_1 = ((ClientIdentity_t1712 *)IsInst(L_4, InitializedTypeInfo(&ClientIdentity_t1712_il2cpp_TypeInfo)));
			ClientIdentity_t1712 * L_5 = V_1;
			if (!L_5)
			{
				goto IL_0035;
			}
		}

IL_001e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
			Hashtable_t1007 * L_6 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
			ClientIdentity_t1712 * L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = ClientIdentity_get_TargetUri_m9267(L_7, /*hidden argument*/&ClientIdentity_get_TargetUri_m9267_MethodInfo);
			String_t* L_9 = RemotingServices_GetNormalizedUri_m9311(NULL /*static, unused*/, L_8, /*hidden argument*/&RemotingServices_GetNormalizedUri_m9311_MethodInfo);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(&Hashtable_Remove_m5433_MethodInfo, L_6, L_9);
			goto IL_0045;
		}

IL_0035:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo));
			Hashtable_t1007 * L_10 = ((RemotingServices_t1726_StaticFields*)InitializedTypeInfo(&RemotingServices_t1726_il2cpp_TypeInfo)->static_fields)->___uri_hash_0;
			Identity_t1711 * L_11 = ___ident;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m9260(L_11, /*hidden argument*/&Identity_get_ObjectUri_m9260_MethodInfo);
			NullCheck(L_10);
			VirtActionInvoker1< Object_t * >::Invoke(&Hashtable_Remove_m5433_MethodInfo, L_10, L_12);
		}

IL_0045:
		{
			Identity_t1711 * L_13 = ___ident;
			NullCheck(L_13);
			Identity_set_Disposed_m9262(L_13, 1, /*hidden argument*/&Identity_set_Disposed_m9262_MethodInfo);
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x55, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Hashtable_t1007 * L_14 = V_0;
		Monitor_Exit_m575(NULL /*static, unused*/, L_14, /*hidden argument*/&Monitor_Exit_m575_MethodInfo);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0055:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C" String_t* RemotingServices_GetNormalizedUri_m9311 (Object_t * __this /* static, unused */, String_t* ___uri, MethodInfo* method)
{
	{
		String_t* L_0 = ___uri;
		NullCheck(L_0);
		bool L_1 = String_StartsWith_m3836(L_0, (String_t*) &_stringLiteral718, /*hidden argument*/&String_StartsWith_m3836_MethodInfo);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = ___uri;
		NullCheck(L_2);
		String_t* L_3 = String_Substring_m2154(L_2, 1, /*hidden argument*/&String_Substring_m2154_MethodInfo);
		return L_3;
	}

IL_0015:
	{
		String_t* L_4 = ___uri;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfo.h"
extern TypeInfo TypeInfo_t1730_il2cpp_TypeInfo;
// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfoMethodDeclarations.h"
extern MethodInfo TypeInfo__ctor_m9320_MethodInfo;


// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern MethodInfo ServerIdentity__ctor_m9312_MethodInfo;
extern "C" void ServerIdentity__ctor_m9312 (ServerIdentity_t1424 * __this, String_t* ___objectUri, Context_t1668 * ___context, Type_t * ___objectType, MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m9257(__this, L_0, /*hidden argument*/&Identity__ctor_m9257_MethodInfo);
		Type_t * L_1 = ___objectType;
		__this->____objectType_5 = L_1;
		Context_t1668 * L_2 = ___context;
		__this->____context_7 = L_2;
		return;
	}
}
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m9313 (ServerIdentity_t1424 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____objectType_5);
		return L_0;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern MethodInfo ServerIdentity_CreateObjRef_m9314_MethodInfo;
extern "C" ObjRef_t1709 * ServerIdentity_CreateObjRef_m9314 (ServerIdentity_t1424 * __this, Type_t * ___requestedType, MethodInfo* method)
{
	{
		ObjRef_t1709 * L_0 = (__this->____objRef_3);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ObjRef_t1709 * L_1 = (__this->____objRef_3);
		NullCheck(L_1);
		ObjRef_UpdateChannelInfo_m9281(L_1, /*hidden argument*/&ObjRef_UpdateChannelInfo_m9281_MethodInfo);
		ObjRef_t1709 * L_2 = (__this->____objRef_3);
		return L_2;
	}

IL_001a:
	{
		Type_t * L_3 = ___requestedType;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_4 = (__this->____objectType_5);
		___requestedType = L_4;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo));
		ObjRef_t1709 * L_5 = (ObjRef_t1709 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjRef_t1709_il2cpp_TypeInfo));
		ObjRef__ctor_m9268(L_5, /*hidden argument*/&ObjRef__ctor_m9268_MethodInfo);
		__this->____objRef_3 = L_5;
		ObjRef_t1709 * L_6 = (__this->____objRef_3);
		Type_t * L_7 = ___requestedType;
		TypeInfo_t1730 * L_8 = (TypeInfo_t1730 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TypeInfo_t1730_il2cpp_TypeInfo));
		TypeInfo__ctor_m9320(L_8, L_7, /*hidden argument*/&TypeInfo__ctor_m9320_MethodInfo);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(&ObjRef_set_TypeInfo_m9276_MethodInfo, L_6, L_8);
		ObjRef_t1709 * L_9 = (__this->____objRef_3);
		String_t* L_10 = (__this->____objectUri_0);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(&ObjRef_set_URI_m9278_MethodInfo, L_9, L_10);
		Object_t * L_11 = (__this->____envoySink_2);
		if (!L_11)
		{
			goto IL_007f;
		}
	}
	{
		Object_t * L_12 = (__this->____envoySink_2);
		if (((EnvoyTerminatorSink_t1690 *)IsInst(L_12, InitializedTypeInfo(&EnvoyTerminatorSink_t1690_il2cpp_TypeInfo))))
		{
			goto IL_007f;
		}
	}
	{
		ObjRef_t1709 * L_13 = (__this->____objRef_3);
		Object_t * L_14 = (__this->____envoySink_2);
		EnvoyInfo_t1718 * L_15 = (EnvoyInfo_t1718 *)il2cpp_codegen_object_new (InitializedTypeInfo(&EnvoyInfo_t1718_il2cpp_TypeInfo));
		EnvoyInfo__ctor_m9255(L_15, L_14, /*hidden argument*/&EnvoyInfo__ctor_m9255_MethodInfo);
		NullCheck(L_13);
		VirtActionInvoker1< Object_t * >::Invoke(&ObjRef_set_EnvoyInfo_m9274_MethodInfo, L_13, L_15);
	}

IL_007f:
	{
		ObjRef_t1709 * L_16 = (__this->____objRef_3);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C" MarshalByRefObject_t1058 * ClientActivatedIdentity_GetServerObject_m9315 (ClientActivatedIdentity_t1727 * __this, MethodInfo* method)
{
	{
		MarshalByRefObject_t1058 * L_0 = (__this->____serverObject_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingletonIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingletonIdentity__ctor_m9316 (SingletonIdentity_t1728 * __this, String_t* ___objectUri, Context_t1668 * ___context, Type_t * ___objectType, MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t1668 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m9312(__this, L_0, L_1, L_2, /*hidden argument*/&ServerIdentity__ctor_m9312_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingleCallIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingleCallIdentity__ctor_m9317 (SingleCallIdentity_t1729 * __this, String_t* ___objectUri, Context_t1668 * ___context, Type_t * ___objectType, MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t1668 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m9312(__this, L_0, L_1, L_2, /*hidden argument*/&ServerIdentity__ctor_m9312_MethodInfo);
		return;
	}
}
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntry.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeEntry_t1716_il2cpp_TypeInfo;



// System.String System.Runtime.Remoting.TypeEntry::get_AssemblyName()
extern "C" String_t* TypeEntry_get_AssemblyName_m9318 (TypeEntry_t1716 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___assembly_name_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.TypeEntry::get_TypeName()
extern "C" String_t* TypeEntry_get_TypeName_m9319 (TypeEntry_t1716 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___type_name_1);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.TypeInfo::.ctor(System.Type)
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern "C" void TypeInfo__ctor_m9320 (TypeInfo_t1730 * __this, Type_t * ___type, MethodInfo* method)
{
	static bool TypeInfo__ctor_m9320_init;
	if (!TypeInfo__ctor_m9320_init)
	{
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		TypeInfo__ctor_m9320_init = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = {0};
	int32_t V_2 = 0;
	TypeU5BU5D_t658* V_3 = {0};
	int32_t V_4 = 0;
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m7266_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&MarshalByRefObject_t1058_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_2);
		__this->___serverType_0 = L_3;
		__this->___serverHierarchy_1 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, 0));
		StringU5BU5D_t87* L_4 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = ___type;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 0)) = (String_t*)L_6;
		__this->___interfacesImplemented_2 = L_4;
		goto IL_00f2;
	}

IL_0049:
	{
		Type_t * L_7 = ___type;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_7);
		__this->___serverType_0 = L_8;
		V_0 = 0;
		Type_t * L_9 = ___type;
		NullCheck(L_9);
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3991_MethodInfo, L_9);
		V_1 = L_10;
		goto IL_006b;
	}

IL_0060:
	{
		Type_t * L_11 = V_1;
		NullCheck(L_11);
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3991_MethodInfo, L_11);
		V_1 = L_12;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_006b:
	{
		Type_t * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_15 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&MarshalByRefObject_t1058_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		if ((((Object_t*)(Type_t *)L_14) == ((Object_t*)(Type_t *)L_15)))
		{
			goto IL_0085;
		}
	}
	{
		Type_t * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_17 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)L_17))))
		{
			goto IL_0060;
		}
	}

IL_0085:
	{
		int32_t L_18 = V_0;
		__this->___serverHierarchy_1 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, L_18));
		Type_t * L_19 = ___type;
		NullCheck(L_19);
		Type_t * L_20 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3991_MethodInfo, L_19);
		V_1 = L_20;
		V_2 = 0;
		goto IL_00b5;
	}

IL_009c:
	{
		StringU5BU5D_t87* L_21 = (__this->___serverHierarchy_1);
		int32_t L_22 = V_2;
		Type_t * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		ArrayElementTypeCheck (L_21, L_24);
		*((String_t**)(String_t**)SZArrayLdElema(L_21, L_22)) = (String_t*)L_24;
		Type_t * L_25 = V_1;
		NullCheck(L_25);
		Type_t * L_26 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3991_MethodInfo, L_25);
		V_1 = L_26;
		int32_t L_27 = V_2;
		V_2 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_00b5:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_009c;
		}
	}
	{
		Type_t * L_30 = ___type;
		NullCheck(L_30);
		TypeU5BU5D_t658* L_31 = (TypeU5BU5D_t658*)VirtFuncInvoker0< TypeU5BU5D_t658* >::Invoke(&Type_GetInterfaces_m10988_MethodInfo, L_30);
		V_3 = L_31;
		TypeU5BU5D_t658* L_32 = V_3;
		NullCheck(L_32);
		__this->___interfacesImplemented_2 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_32)->max_length)))));
		V_4 = 0;
		goto IL_00eb;
	}

IL_00d3:
	{
		StringU5BU5D_t87* L_33 = (__this->___interfacesImplemented_2);
		int32_t L_34 = V_4;
		TypeU5BU5D_t658* L_35 = V_3;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		int32_t L_37 = L_36;
		NullCheck((*(Type_t **)(Type_t **)SZArrayLdElema(L_35, L_37)));
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m4053_MethodInfo, (*(Type_t **)(Type_t **)SZArrayLdElema(L_35, L_37)));
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		ArrayElementTypeCheck (L_33, L_38);
		*((String_t**)(String_t**)SZArrayLdElema(L_33, L_34)) = (String_t*)L_38;
		int32_t L_39 = V_4;
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)1));
	}

IL_00eb:
	{
		int32_t L_40 = V_4;
		TypeU5BU5D_t658* L_41 = V_3;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)(((Array_t *)L_41)->max_length))))))
		{
			goto IL_00d3;
		}
	}

IL_00f2:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.TypeInfo::get_TypeName()
extern MethodInfo TypeInfo_get_TypeName_m9321_MethodInfo;
extern "C" String_t* TypeInfo_get_TypeName_m9321 (TypeInfo_t1730 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___serverType_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WellKnownObjectMode_t1731_il2cpp_TypeInfo;
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectModeMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BinaryCommon_t1732_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaMethodDeclarations.h"

// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$20.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
extern TypeInfo ByteU5BU5D_t66_il2cpp_TypeInfo;
extern TypeInfo Byte_t114_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1953_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
extern Il2CppType ByteU5BU5D_t66_0_0_0;
extern Il2CppType Boolean_t83_0_0_0;
extern Il2CppType Byte_t114_0_0_0;
extern Il2CppType Char_t262_0_0_0;
extern Il2CppType TimeSpan_t1092_0_0_0;
extern Il2CppType DateTime_t524_0_0_0;
extern Il2CppType Decimal_t763_0_0_0;
extern Il2CppType Double_t89_0_0_0;
extern Il2CppType Int16_t434_0_0_0;
extern Il2CppType Int32_t60_0_0_0;
extern Il2CppType Int64_t759_0_0_0;
extern Il2CppType SByte_t115_0_0_0;
extern Il2CppType Single_t85_0_0_0;
extern Il2CppType UInt16_t750_0_0_0;
extern Il2CppType UInt32_t752_0_0_0;
extern Il2CppType UInt64_t762_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
extern MethodInfo RuntimeHelpers_InitializeArray_m483_MethodInfo;
extern MethodInfo Environment_GetEnvironmentVariable_m6486_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m4056_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t1953____$$fieldU2D32_21_FieldInfo;


// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::.cctor()
extern MethodInfo BinaryCommon__cctor_m9322_MethodInfo;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t658_il2cpp_TypeInfo_var;
extern "C" void BinaryCommon__cctor_m9322 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool BinaryCommon__cctor_m9322_init;
	if (!BinaryCommon__cctor_m9322_init)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t66_0_0_0);
		TypeU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t658_0_0_0);
		BinaryCommon__cctor_m9322_init = true;
	}
	String_t* V_0 = {0};
	{
		ByteU5BU5D_t66* L_0 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)17)));
		RuntimeHelpers_InitializeArray_m483(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t1953____$$fieldU2D32_21_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m483_MethodInfo);
		((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->___BinaryHeader_0 = L_0;
		((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->___UseReflectionSerialization_3 = 0;
		((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1 = ((TypeU5BU5D_t658*)SZArrayNew(TypeU5BU5D_t658_il2cpp_TypeInfo_var, ((int32_t)19)));
		TypeU5BU5D_t658* L_1 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Boolean_t83_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_1, 1)) = (Type_t *)L_2;
		TypeU5BU5D_t658* L_3 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_4 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Byte_t114_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_3, 2)) = (Type_t *)L_4;
		TypeU5BU5D_t658* L_5 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_6 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Char_t262_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, 3)) = (Type_t *)L_6;
		TypeU5BU5D_t658* L_7 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_8 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&TimeSpan_t1092_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)12));
		ArrayElementTypeCheck (L_7, L_8);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_7, ((int32_t)12))) = (Type_t *)L_8;
		TypeU5BU5D_t658* L_9 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_10 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&DateTime_t524_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)13));
		ArrayElementTypeCheck (L_9, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_9, ((int32_t)13))) = (Type_t *)L_10;
		TypeU5BU5D_t658* L_11 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_12 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Decimal_t763_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 5)) = (Type_t *)L_12;
		TypeU5BU5D_t658* L_13 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_14 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Double_t89_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_14);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_13, 6)) = (Type_t *)L_14;
		TypeU5BU5D_t658* L_15 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_16 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Int16_t434_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 7);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 7)) = (Type_t *)L_16;
		TypeU5BU5D_t658* L_17 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_18 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Int32_t60_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 8)) = (Type_t *)L_18;
		TypeU5BU5D_t658* L_19 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_20 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Int64_t759_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)9));
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, ((int32_t)9))) = (Type_t *)L_20;
		TypeU5BU5D_t658* L_21 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_22 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&SByte_t115_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)10));
		ArrayElementTypeCheck (L_21, L_22);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_21, ((int32_t)10))) = (Type_t *)L_22;
		TypeU5BU5D_t658* L_23 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_24 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Single_t85_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)11));
		ArrayElementTypeCheck (L_23, L_24);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_23, ((int32_t)11))) = (Type_t *)L_24;
		TypeU5BU5D_t658* L_25 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_26 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&UInt16_t750_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)14));
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, ((int32_t)14))) = (Type_t *)L_26;
		TypeU5BU5D_t658* L_27 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_28 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&UInt32_t752_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)15));
		ArrayElementTypeCheck (L_27, L_28);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_27, ((int32_t)15))) = (Type_t *)L_28;
		TypeU5BU5D_t658* L_29 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_30 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&UInt64_t762_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)16));
		ArrayElementTypeCheck (L_29, L_30);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_29, ((int32_t)16))) = (Type_t *)L_30;
		TypeU5BU5D_t658* L_31 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)17));
		ArrayElementTypeCheck (L_31, NULL);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_31, ((int32_t)17))) = (Type_t *)NULL;
		TypeU5BU5D_t658* L_32 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		Type_t * L_33 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)18));
		ArrayElementTypeCheck (L_32, L_33);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_32, ((int32_t)18))) = (Type_t *)L_33;
		((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)30)));
		ByteU5BU5D_t66* L_34 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_34, 3)) = (uint8_t)1;
		ByteU5BU5D_t66* L_35 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, 6)) = (uint8_t)2;
		ByteU5BU5D_t66* L_36 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_36, 4)) = (uint8_t)3;
		ByteU5BU5D_t66* L_37 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, ((int32_t)16));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_37, ((int32_t)16))) = (uint8_t)((int32_t)13);
		ByteU5BU5D_t66* L_38 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)15));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, ((int32_t)15))) = (uint8_t)5;
		ByteU5BU5D_t66* L_39 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)14));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_39, ((int32_t)14))) = (uint8_t)6;
		ByteU5BU5D_t66* L_40 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_40, 7)) = (uint8_t)7;
		ByteU5BU5D_t66* L_41 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)9));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_41, ((int32_t)9))) = (uint8_t)8;
		ByteU5BU5D_t66* L_42 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)11));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_42, ((int32_t)11))) = (uint8_t)((int32_t)9);
		ByteU5BU5D_t66* L_43 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, 5)) = (uint8_t)((int32_t)10);
		ByteU5BU5D_t66* L_44 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)13));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_44, ((int32_t)13))) = (uint8_t)((int32_t)11);
		ByteU5BU5D_t66* L_45 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_45, 8)) = (uint8_t)((int32_t)14);
		ByteU5BU5D_t66* L_46 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, ((int32_t)10));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_46, ((int32_t)10))) = (uint8_t)((int32_t)15);
		ByteU5BU5D_t66* L_47 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, ((int32_t)12));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_47, ((int32_t)12))) = (uint8_t)((int32_t)16);
		ByteU5BU5D_t66* L_48 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodeMap_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)18));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_48, ((int32_t)18))) = (uint8_t)((int32_t)18);
		String_t* L_49 = Environment_GetEnvironmentVariable_m6486(NULL /*static, unused*/, (String_t*) &_stringLiteral1807, /*hidden argument*/&Environment_GetEnvironmentVariable_m6486_MethodInfo);
		V_0 = L_49;
		String_t* L_50 = V_0;
		if (L_50)
		{
			goto IL_01f4;
		}
	}
	{
		V_0 = (String_t*) &_stringLiteral1808;
	}

IL_01f4:
	{
		String_t* L_51 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_52 = String_op_Inequality_m2127(NULL /*static, unused*/, L_51, (String_t*) &_stringLiteral1808, /*hidden argument*/&String_op_Inequality_m2127_MethodInfo);
		((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->___UseReflectionSerialization_3 = L_52;
		return;
	}
}
// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::IsPrimitive(System.Type)
extern MethodInfo BinaryCommon_IsPrimitive_m9323_MethodInfo;
extern "C" bool BinaryCommon_IsPrimitive_m9323 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m4056_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&IntPtr_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_003e;
		}
	}

IL_0015:
	{
		Type_t * L_4 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&DateTime_t524_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_7 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&TimeSpan_t1092_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		if ((((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7)))
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_8 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Decimal_t763_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		G_B6_0 = ((((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 1;
	}

IL_003f:
	{
		return G_B6_0;
	}
}
// System.Type System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeFromCode(System.Int32)
extern MethodInfo BinaryCommon_GetTypeFromCode_m9324_MethodInfo;
extern "C" Type_t * BinaryCommon_GetTypeFromCode_m9324 (Object_t * __this /* static, unused */, int32_t ___code, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo));
		TypeU5BU5D_t658* L_0 = ((BinaryCommon_t1732_StaticFields*)InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo)->static_fields)->____typeCodesToType_1;
		int32_t L_1 = ___code;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Type_t **)(Type_t **)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::SwapBytes(System.Byte[],System.Int32,System.Int32)
extern MethodInfo BinaryCommon_SwapBytes_m9325_MethodInfo;
extern "C" void BinaryCommon_SwapBytes_m9325 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___byteArray, int32_t ___size, int32_t ___dataSize, MethodInfo* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___dataSize;
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 0;
		goto IL_0060;
	}

IL_0008:
	{
		ByteU5BU5D_t66* L_1 = ___byteArray;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		ByteU5BU5D_t66* L_4 = ___byteArray;
		int32_t L_5 = V_1;
		ByteU5BU5D_t66* L_6 = ___byteArray;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)7)));
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)7));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8));
		ByteU5BU5D_t66* L_9 = ___byteArray;
		int32_t L_10 = V_1;
		uint8_t L_11 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)7)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10+(int32_t)7)))) = (uint8_t)L_11;
		ByteU5BU5D_t66* L_12 = ___byteArray;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, ((int32_t)((int32_t)L_13+(int32_t)1)));
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_14));
		ByteU5BU5D_t66* L_15 = ___byteArray;
		int32_t L_16 = V_1;
		ByteU5BU5D_t66* L_17 = ___byteArray;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)((int32_t)L_18+(int32_t)6)));
		int32_t L_19 = ((int32_t)((int32_t)L_18+(int32_t)6));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_19));
		ByteU5BU5D_t66* L_20 = ___byteArray;
		int32_t L_21 = V_1;
		uint8_t L_22 = V_0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)((int32_t)L_21+(int32_t)6)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, ((int32_t)((int32_t)L_21+(int32_t)6)))) = (uint8_t)L_22;
		ByteU5BU5D_t66* L_23 = ___byteArray;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)((int32_t)L_24+(int32_t)2)));
		int32_t L_25 = ((int32_t)((int32_t)L_24+(int32_t)2));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_25));
		ByteU5BU5D_t66* L_26 = ___byteArray;
		int32_t L_27 = V_1;
		ByteU5BU5D_t66* L_28 = ___byteArray;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29+(int32_t)5)));
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)5));
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)((int32_t)L_27+(int32_t)2)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, ((int32_t)((int32_t)L_27+(int32_t)2)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_30));
		ByteU5BU5D_t66* L_31 = ___byteArray;
		int32_t L_32 = V_1;
		uint8_t L_33 = V_0;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)((int32_t)L_32+(int32_t)5)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_31, ((int32_t)((int32_t)L_32+(int32_t)5)))) = (uint8_t)L_33;
		ByteU5BU5D_t66* L_34 = ___byteArray;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)3)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)3));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_36));
		ByteU5BU5D_t66* L_37 = ___byteArray;
		int32_t L_38 = V_1;
		ByteU5BU5D_t66* L_39 = ___byteArray;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)L_40+(int32_t)4)));
		int32_t L_41 = ((int32_t)((int32_t)L_40+(int32_t)4));
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, ((int32_t)((int32_t)L_38+(int32_t)3)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_37, ((int32_t)((int32_t)L_38+(int32_t)3)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_39, L_41));
		ByteU5BU5D_t66* L_42 = ___byteArray;
		int32_t L_43 = V_1;
		uint8_t L_44 = V_0;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)L_43+(int32_t)4)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_42, ((int32_t)((int32_t)L_43+(int32_t)4)))) = (uint8_t)L_44;
		int32_t L_45 = V_1;
		V_1 = ((int32_t)((int32_t)L_45+(int32_t)8));
	}

IL_0060:
	{
		int32_t L_46 = V_1;
		int32_t L_47 = ___size;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0008;
		}
	}
	{
		goto IL_00c2;
	}

IL_0066:
	{
		int32_t L_48 = ___dataSize;
		if ((!(((uint32_t)L_48) == ((uint32_t)4))))
		{
			goto IL_00a0;
		}
	}
	{
		V_2 = 0;
		goto IL_009a;
	}

IL_006e:
	{
		ByteU5BU5D_t66* L_49 = ___byteArray;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = L_50;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_49, L_51));
		ByteU5BU5D_t66* L_52 = ___byteArray;
		int32_t L_53 = V_2;
		ByteU5BU5D_t66* L_54 = ___byteArray;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)L_55+(int32_t)3)));
		int32_t L_56 = ((int32_t)((int32_t)L_55+(int32_t)3));
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_52, L_53)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_56));
		ByteU5BU5D_t66* L_57 = ___byteArray;
		int32_t L_58 = V_2;
		uint8_t L_59 = V_0;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)L_58+(int32_t)3)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_57, ((int32_t)((int32_t)L_58+(int32_t)3)))) = (uint8_t)L_59;
		ByteU5BU5D_t66* L_60 = ___byteArray;
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)L_61+(int32_t)1)));
		int32_t L_62 = ((int32_t)((int32_t)L_61+(int32_t)1));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_60, L_62));
		ByteU5BU5D_t66* L_63 = ___byteArray;
		int32_t L_64 = V_2;
		ByteU5BU5D_t66* L_65 = ___byteArray;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, ((int32_t)((int32_t)L_66+(int32_t)2)));
		int32_t L_67 = ((int32_t)((int32_t)L_66+(int32_t)2));
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, ((int32_t)((int32_t)L_64+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_63, ((int32_t)((int32_t)L_64+(int32_t)1)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_65, L_67));
		ByteU5BU5D_t66* L_68 = ___byteArray;
		int32_t L_69 = V_2;
		uint8_t L_70 = V_0;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, ((int32_t)((int32_t)L_69+(int32_t)2)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_68, ((int32_t)((int32_t)L_69+(int32_t)2)))) = (uint8_t)L_70;
		int32_t L_71 = V_2;
		V_2 = ((int32_t)((int32_t)L_71+(int32_t)4));
	}

IL_009a:
	{
		int32_t L_72 = V_2;
		int32_t L_73 = ___size;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_006e;
		}
	}
	{
		goto IL_00c2;
	}

IL_00a0:
	{
		int32_t L_74 = ___dataSize;
		if ((!(((uint32_t)L_74) == ((uint32_t)2))))
		{
			goto IL_00c2;
		}
	}
	{
		V_3 = 0;
		goto IL_00be;
	}

IL_00a8:
	{
		ByteU5BU5D_t66* L_75 = ___byteArray;
		int32_t L_76 = V_3;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, L_76);
		int32_t L_77 = L_76;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_75, L_77));
		ByteU5BU5D_t66* L_78 = ___byteArray;
		int32_t L_79 = V_3;
		ByteU5BU5D_t66* L_80 = ___byteArray;
		int32_t L_81 = V_3;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, ((int32_t)((int32_t)L_81+(int32_t)1)));
		int32_t L_82 = ((int32_t)((int32_t)L_81+(int32_t)1));
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, L_79);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_78, L_79)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_80, L_82));
		ByteU5BU5D_t66* L_83 = ___byteArray;
		int32_t L_84 = V_3;
		uint8_t L_85 = V_0;
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, ((int32_t)((int32_t)L_84+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_83, ((int32_t)((int32_t)L_84+(int32_t)1)))) = (uint8_t)L_85;
		int32_t L_86 = V_3;
		V_3 = ((int32_t)((int32_t)L_86+(int32_t)2));
	}

IL_00be:
	{
		int32_t L_87 = V_3;
		int32_t L_88 = ___size;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_00a8;
		}
	}

IL_00c2:
	{
		return;
	}
}
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BinaryElement_t1733_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0MethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeTag_t1734_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_TypeMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.MethodFlags
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Meth.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MethodFlags_t1735_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.Binary.MethodFlags
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_MethMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Retu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReturnTypeTag_t1736_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_RetuMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.SerializationBinder
#include "mscorlib_System_Runtime_Serialization_SerializationBinder.h"
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReader.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_1.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
extern TypeInfo Stream_t1315_il2cpp_TypeInfo;
extern TypeInfo Int64_t759_il2cpp_TypeInfo;
extern TypeInfo SerializationException_t1190_il2cpp_TypeInfo;
extern TypeInfo BinaryReader_t1546_il2cpp_TypeInfo;
extern TypeInfo ObjectReader_t1744_il2cpp_TypeInfo;
extern TypeInfo HeaderHandler_t1738_il2cpp_TypeInfo;
extern TypeInfo HeaderU5BU5D_t1694_il2cpp_TypeInfo;
// System.IO.Stream
#include "mscorlib_System_IO_StreamMethodDeclarations.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReaderMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_MessMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_1MethodDeclarations.h"
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"
extern MethodInfo BinaryFormatter_get_DefaultSurrogateSelector_m9328_MethodInfo;
extern MethodInfo StreamingContext__ctor_m9446_MethodInfo;
extern MethodInfo BinaryFormatter_NoCheckDeserialize_m9335_MethodInfo;
extern MethodInfo Stream_get_CanSeek_m6500_MethodInfo;
extern MethodInfo Stream_get_Length_m6506_MethodInfo;
extern MethodInfo SerializationException__ctor_m5246_MethodInfo;
extern MethodInfo BinaryReader__ctor_m8240_MethodInfo;
extern MethodInfo BinaryFormatter_ReadBinaryHeader_m9336_MethodInfo;
extern MethodInfo BinaryReader_Read_m8245_MethodInfo;
extern MethodInfo MessageFormatter_ReadMethodCall_m9337_MethodInfo;
extern MethodInfo MessageFormatter_ReadMethodResponse_m9338_MethodInfo;
extern MethodInfo ObjectReader__ctor_m9341_MethodInfo;
extern MethodInfo ObjectReader_ReadObjectGraph_m9343_MethodInfo;
extern MethodInfo HeaderHandler_Invoke_m10910_MethodInfo;
extern MethodInfo BinaryReader_ReadByte_m8251_MethodInfo;
extern MethodInfo BinaryReader_ReadInt32_m8256_MethodInfo;


// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern MethodInfo BinaryFormatter__ctor_m9326_MethodInfo;
extern "C" void BinaryFormatter__ctor_m9326 (BinaryFormatter_t1725 * __this, MethodInfo* method)
{
	{
		__this->___type_format_4 = 1;
		__this->___filter_level_5 = 3;
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t * L_0 = BinaryFormatter_get_DefaultSurrogateSelector_m9328(NULL /*static, unused*/, /*hidden argument*/&BinaryFormatter_get_DefaultSurrogateSelector_m9328_MethodInfo);
		__this->___surrogate_selector_3 = L_0;
		StreamingContext_t709  L_1 = {0};
		StreamingContext__ctor_m9446(&L_1, ((int32_t)255), /*hidden argument*/&StreamingContext__ctor_m9446_MethodInfo);
		__this->___context_2 = L_1;
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" void BinaryFormatter__ctor_m9327 (BinaryFormatter_t1725 * __this, Object_t * ___selector, StreamingContext_t709  ___context, MethodInfo* method)
{
	{
		__this->___type_format_4 = 1;
		__this->___filter_level_5 = 3;
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t * L_0 = ___selector;
		__this->___surrogate_selector_3 = L_0;
		StreamingContext_t709  L_1 = ___context;
		__this->___context_2 = L_1;
		return;
	}
}
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern "C" Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m9328 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Object_t * L_0 = ((BinaryFormatter_t1725_StaticFields*)InitializedTypeInfo(&BinaryFormatter_t1725_il2cpp_TypeInfo)->static_fields)->___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C" void BinaryFormatter_set_AssemblyFormat_m9329 (BinaryFormatter_t1725 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___assembly_format_0 = L_0;
		return;
	}
}
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern MethodInfo BinaryFormatter_get_Binder_m9330_MethodInfo;
extern "C" SerializationBinder_t1737 * BinaryFormatter_get_Binder_m9330 (BinaryFormatter_t1725 * __this, MethodInfo* method)
{
	{
		SerializationBinder_t1737 * L_0 = (__this->___binder_1);
		return L_0;
	}
}
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern MethodInfo BinaryFormatter_get_Context_m9331_MethodInfo;
extern "C" StreamingContext_t709  BinaryFormatter_get_Context_m9331 (BinaryFormatter_t1725 * __this, MethodInfo* method)
{
	{
		StreamingContext_t709  L_0 = (__this->___context_2);
		return L_0;
	}
}
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern MethodInfo BinaryFormatter_get_SurrogateSelector_m9332_MethodInfo;
extern "C" Object_t * BinaryFormatter_get_SurrogateSelector_m9332 (BinaryFormatter_t1725 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___surrogate_selector_3);
		return L_0;
	}
}
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern MethodInfo BinaryFormatter_get_FilterLevel_m9333_MethodInfo;
extern "C" int32_t BinaryFormatter_get_FilterLevel_m9333 (BinaryFormatter_t1725 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___filter_level_5);
		return L_0;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern MethodInfo BinaryFormatter_Deserialize_m9334_MethodInfo;
extern "C" Object_t * BinaryFormatter_Deserialize_m9334 (BinaryFormatter_t1725 * __this, Stream_t1315 * ___serializationStream, MethodInfo* method)
{
	{
		Stream_t1315 * L_0 = ___serializationStream;
		Object_t * L_1 = BinaryFormatter_NoCheckDeserialize_m9335(__this, L_0, (HeaderHandler_t1738 *)NULL, /*hidden argument*/&BinaryFormatter_NoCheckDeserialize_m9335_MethodInfo);
		return L_1;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern "C" Object_t * BinaryFormatter_NoCheckDeserialize_m9335 (BinaryFormatter_t1725 * __this, Stream_t1315 * ___serializationStream, HeaderHandler_t1738 * ___handler, MethodInfo* method)
{
	BinaryReader_t1546 * V_0 = {0};
	bool V_1 = false;
	uint8_t V_2 = {0};
	ObjectReader_t1744 * V_3 = {0};
	Object_t * V_4 = {0};
	HeaderU5BU5D_t1694* V_5 = {0};
	{
		Stream_t1315 * L_0 = ___serializationStream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1809, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Stream_t1315 * L_2 = ___serializationStream;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanSeek_m6500_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		Stream_t1315 * L_4 = ___serializationStream;
		NullCheck(L_4);
		int64_t L_5 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&Stream_get_Length_m6506_MethodInfo, L_4);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		SerializationException_t1190 * L_6 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_6, (String_t*) &_stringLiteral1810, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		Stream_t1315 * L_7 = ___serializationStream;
		BinaryReader_t1546 * L_8 = (BinaryReader_t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&BinaryReader_t1546_il2cpp_TypeInfo));
		BinaryReader__ctor_m8240(L_8, L_7, /*hidden argument*/&BinaryReader__ctor_m8240_MethodInfo);
		V_0 = L_8;
		BinaryReader_t1546 * L_9 = V_0;
		BinaryFormatter_ReadBinaryHeader_m9336(__this, L_9, (&V_1), /*hidden argument*/&BinaryFormatter_ReadBinaryHeader_m9336_MethodInfo);
		BinaryReader_t1546 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_Read_m8245_MethodInfo, L_10);
		V_2 = (((uint8_t)L_11));
		uint8_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0051;
		}
	}
	{
		uint8_t L_13 = V_2;
		BinaryReader_t1546 * L_14 = V_0;
		bool L_15 = V_1;
		HeaderHandler_t1738 * L_16 = ___handler;
		Object_t * L_17 = MessageFormatter_ReadMethodCall_m9337(NULL /*static, unused*/, L_13, L_14, L_15, L_16, __this, /*hidden argument*/&MessageFormatter_ReadMethodCall_m9337_MethodInfo);
		return L_17;
	}

IL_0051:
	{
		uint8_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)22)))))
		{
			goto IL_0062;
		}
	}
	{
		uint8_t L_19 = V_2;
		BinaryReader_t1546 * L_20 = V_0;
		bool L_21 = V_1;
		HeaderHandler_t1738 * L_22 = ___handler;
		Object_t * L_23 = MessageFormatter_ReadMethodResponse_m9338(NULL /*static, unused*/, L_19, L_20, L_21, L_22, (Object_t *)NULL, __this, /*hidden argument*/&MessageFormatter_ReadMethodResponse_m9338_MethodInfo);
		return L_23;
	}

IL_0062:
	{
		ObjectReader_t1744 * L_24 = (ObjectReader_t1744 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectReader_t1744_il2cpp_TypeInfo));
		ObjectReader__ctor_m9341(L_24, __this, /*hidden argument*/&ObjectReader__ctor_m9341_MethodInfo);
		V_3 = L_24;
		ObjectReader_t1744 * L_25 = V_3;
		uint8_t L_26 = V_2;
		BinaryReader_t1546 * L_27 = V_0;
		bool L_28 = V_1;
		NullCheck(L_25);
		ObjectReader_ReadObjectGraph_m9343(L_25, L_26, L_27, L_28, (&V_4), (&V_5), /*hidden argument*/&ObjectReader_ReadObjectGraph_m9343_MethodInfo);
		HeaderHandler_t1738 * L_29 = ___handler;
		if (!L_29)
		{
			goto IL_0082;
		}
	}
	{
		HeaderHandler_t1738 * L_30 = ___handler;
		HeaderU5BU5D_t1694* L_31 = V_5;
		NullCheck(L_30);
		VirtFuncInvoker1< Object_t *, HeaderU5BU5D_t1694* >::Invoke(&HeaderHandler_Invoke_m10910_MethodInfo, L_30, L_31);
	}

IL_0082:
	{
		Object_t * L_32 = V_4;
		return L_32;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern "C" void BinaryFormatter_ReadBinaryHeader_m9336 (BinaryFormatter_t1725 * __this, BinaryReader_t1546 * ___reader, bool* ___hasHeaders, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		BinaryReader_t1546 * L_0 = ___reader;
		NullCheck(L_0);
		VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_0);
		BinaryReader_t1546 * L_1 = ___reader;
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_1);
		BinaryReader_t1546 * L_2 = ___reader;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_2);
		V_0 = L_3;
		bool* L_4 = ___hasHeaders;
		int32_t L_5 = V_0;
		*((int8_t*)(L_4)) = (int8_t)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		BinaryReader_t1546 * L_6 = ___reader;
		NullCheck(L_6);
		VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_6);
		BinaryReader_t1546 * L_7 = ___reader;
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_7);
		return;
	}
}
// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Mess.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MessageFormatter_t1739_il2cpp_TypeInfo;

// System.UInt32
#include "mscorlib_System_UInt32.h"
extern TypeInfo UInt32_t752_il2cpp_TypeInfo;
extern Il2CppType HeaderU5BU5D_t1694_0_0_0;
extern MethodInfo BinaryReader_ReadString_m8259_MethodInfo;
extern MethodInfo BinaryReader_ReadUInt32_m8262_MethodInfo;
extern MethodInfo ObjectReader_ReadPrimitiveTypeValue_m9367_MethodInfo;
extern MethodInfo ObjectReader_ReadObjectGraph_m9342_MethodInfo;


// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t658_il2cpp_TypeInfo_var;
extern TypeInfo* HeaderU5BU5D_t1694_il2cpp_TypeInfo_var;
extern "C" Object_t * MessageFormatter_ReadMethodCall_m9337 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1546 * ___reader, bool ___hasHeaders, HeaderHandler_t1738 * ___headerHandler, BinaryFormatter_t1725 * ___formatter, MethodInfo* method)
{
	static bool MessageFormatter_ReadMethodCall_m9337_init;
	if (!MessageFormatter_ReadMethodCall_m9337_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		TypeU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t658_0_0_0);
		HeaderU5BU5D_t1694_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&HeaderU5BU5D_t1694_0_0_0);
		MessageFormatter_ReadMethodCall_m9337_init = true;
	}
	int32_t V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	ObjectU5BU5D_t76* V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	ObjectU5BU5D_t76* V_6 = {0};
	HeaderU5BU5D_t1694* V_7 = {0};
	TypeU5BU5D_t658* V_8 = {0};
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	Type_t * V_11 = {0};
	ObjectReader_t1744 * V_12 = {0};
	Object_t * V_13 = {0};
	ObjectU5BU5D_t76* V_14 = {0};
	int32_t V_15 = 0;
	String_t* V_16 = {0};
	HeaderU5BU5D_t1694* V_17 = {0};
	MethodCall_t1687 * V_18 = {0};
	DictionaryEntry_t1014  V_19 = {0};
	ObjectU5BU5D_t76* V_20 = {0};
	int32_t V_21 = 0;
	{
		uint8_t L_0 = ___elem;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)21))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_1 = ___elem;
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&BinaryElement_t1733_il2cpp_TypeInfo), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m1810(NULL /*static, unused*/, (String_t*) &_stringLiteral1811, L_3, /*hidden argument*/&String_Concat_m1810_MethodInfo);
		SerializationException_t1190 * L_5 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_5, L_4, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001b:
	{
		BinaryReader_t1546 * L_6 = ___reader;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_6);
		V_0 = L_7;
		BinaryReader_t1546 * L_8 = ___reader;
		NullCheck(L_8);
		uint8_t L_9 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_8);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)18))))
		{
			goto IL_0037;
		}
	}
	{
		SerializationException_t1190 * L_10 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_10, (String_t*) &_stringLiteral1812, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0037:
	{
		BinaryReader_t1546 * L_11 = ___reader;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&BinaryReader_ReadString_m8259_MethodInfo, L_11);
		V_1 = L_12;
		BinaryReader_t1546 * L_13 = ___reader;
		NullCheck(L_13);
		uint8_t L_14 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_13);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)18))))
		{
			goto IL_0053;
		}
	}
	{
		SerializationException_t1190 * L_15 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_15, (String_t*) &_stringLiteral1812, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0053:
	{
		BinaryReader_t1546 * L_16 = ___reader;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&BinaryReader_ReadString_m8259_MethodInfo, L_16);
		V_2 = L_17;
		V_3 = (ObjectU5BU5D_t76*)NULL;
		V_4 = NULL;
		V_5 = NULL;
		V_6 = (ObjectU5BU5D_t76*)NULL;
		V_7 = (HeaderU5BU5D_t1694*)NULL;
		V_8 = (TypeU5BU5D_t658*)NULL;
		int32_t L_18 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_18&(int32_t)2))) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		BinaryReader_t1546 * L_19 = ___reader;
		NullCheck(L_19);
		uint32_t L_20 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_19);
		V_9 = L_20;
		uint32_t L_21 = V_9;
		V_3 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, (((uintptr_t)L_21))));
		V_10 = 0;
		goto IL_00a6;
	}

IL_0087:
	{
		BinaryReader_t1546 * L_22 = ___reader;
		NullCheck(L_22);
		uint8_t L_23 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_22);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo));
		Type_t * L_24 = BinaryCommon_GetTypeFromCode_m9324(NULL /*static, unused*/, L_23, /*hidden argument*/&BinaryCommon_GetTypeFromCode_m9324_MethodInfo);
		V_11 = L_24;
		ObjectU5BU5D_t76* L_25 = V_3;
		int32_t L_26 = V_10;
		BinaryReader_t1546 * L_27 = ___reader;
		Type_t * L_28 = V_11;
		Object_t * L_29 = ObjectReader_ReadPrimitiveTypeValue_m9367(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/&ObjectReader_ReadPrimitiveTypeValue_m9367_MethodInfo);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		ArrayElementTypeCheck (L_25, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, L_26)) = (Object_t *)L_29;
		int32_t L_30 = V_10;
		V_10 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00a6:
	{
		int32_t L_31 = V_10;
		uint32_t L_32 = V_9;
		if ((((int64_t)(((int64_t)L_31))) < ((int64_t)(((uint64_t)L_32)))))
		{
			goto IL_0087;
		}
	}

IL_00ae:
	{
		int32_t L_33 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)32972)))) <= ((int32_t)0)))
		{
			goto IL_016b;
		}
	}
	{
		BinaryFormatter_t1725 * L_34 = ___formatter;
		ObjectReader_t1744 * L_35 = (ObjectReader_t1744 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectReader_t1744_il2cpp_TypeInfo));
		ObjectReader__ctor_m9341(L_35, L_34, /*hidden argument*/&ObjectReader__ctor_m9341_MethodInfo);
		V_12 = L_35;
		ObjectReader_t1744 * L_36 = V_12;
		BinaryReader_t1546 * L_37 = ___reader;
		bool L_38 = ___hasHeaders;
		NullCheck(L_36);
		ObjectReader_ReadObjectGraph_m9342(L_36, L_37, L_38, (&V_13), (&V_7), /*hidden argument*/&ObjectReader_ReadObjectGraph_m9342_MethodInfo);
		Object_t * L_39 = V_13;
		V_14 = ((ObjectU5BU5D_t76*)Castclass(L_39, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		int32_t L_40 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_40&(int32_t)4))) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		ObjectU5BU5D_t76* L_41 = V_14;
		V_3 = L_41;
		goto IL_0169;
	}

IL_00e8:
	{
		V_15 = 0;
		int32_t L_42 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_42&(int32_t)8))) <= ((int32_t)0)))
		{
			goto IL_0111;
		}
	}
	{
		ObjectU5BU5D_t76* L_43 = V_14;
		NullCheck(L_43);
		if ((((int32_t)(((int32_t)(((Array_t *)L_43)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_010a;
		}
	}
	{
		ObjectU5BU5D_t76* L_44 = V_14;
		int32_t L_45 = V_15;
		int32_t L_46 = L_45;
		V_15 = ((int32_t)((int32_t)L_46+(int32_t)1));
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_46);
		int32_t L_47 = L_46;
		V_3 = ((ObjectU5BU5D_t76*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_44, L_47)), ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		goto IL_0111;
	}

IL_010a:
	{
		V_3 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 0));
	}

IL_0111:
	{
		int32_t L_48 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_48&(int32_t)((int32_t)32768)))) <= ((int32_t)0)))
		{
			goto IL_012c;
		}
	}
	{
		ObjectU5BU5D_t76* L_49 = V_14;
		int32_t L_50 = V_15;
		int32_t L_51 = L_50;
		V_15 = ((int32_t)((int32_t)L_51+(int32_t)1));
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_51);
		int32_t L_52 = L_51;
		V_8 = ((TypeU5BU5D_t658*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_49, L_52)), TypeU5BU5D_t658_il2cpp_TypeInfo_var));
	}

IL_012c:
	{
		int32_t L_53 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)128)))) <= ((int32_t)0)))
		{
			goto IL_0142;
		}
	}
	{
		ObjectU5BU5D_t76* L_54 = V_14;
		int32_t L_55 = V_15;
		int32_t L_56 = L_55;
		V_15 = ((int32_t)((int32_t)L_56+(int32_t)1));
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_56);
		int32_t L_57 = L_56;
		V_4 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_54, L_57));
	}

IL_0142:
	{
		int32_t L_58 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_58&(int32_t)((int32_t)64)))) <= ((int32_t)0)))
		{
			goto IL_0155;
		}
	}
	{
		ObjectU5BU5D_t76* L_59 = V_14;
		int32_t L_60 = V_15;
		int32_t L_61 = L_60;
		V_15 = ((int32_t)((int32_t)L_61+(int32_t)1));
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_61);
		int32_t L_62 = L_61;
		V_5 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_59, L_62));
	}

IL_0155:
	{
		int32_t L_63 = V_15;
		ObjectU5BU5D_t76* L_64 = V_14;
		NullCheck(L_64);
		if ((((int32_t)L_63) >= ((int32_t)(((int32_t)(((Array_t *)L_64)->max_length))))))
		{
			goto IL_0169;
		}
	}
	{
		ObjectU5BU5D_t76* L_65 = V_14;
		int32_t L_66 = V_15;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		V_6 = ((ObjectU5BU5D_t76*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_65, L_67)), ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
	}

IL_0169:
	{
		goto IL_0172;
	}

IL_016b:
	{
		BinaryReader_t1546 * L_68 = ___reader;
		NullCheck(L_68);
		VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_68);
	}

IL_0172:
	{
		ObjectU5BU5D_t76* L_69 = V_3;
		if (L_69)
		{
			goto IL_017c;
		}
	}
	{
		V_3 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 0));
	}

IL_017c:
	{
		V_16 = (String_t*)NULL;
		HeaderHandler_t1738 * L_70 = ___headerHandler;
		if (!L_70)
		{
			goto IL_0191;
		}
	}
	{
		HeaderHandler_t1738 * L_71 = ___headerHandler;
		HeaderU5BU5D_t1694* L_72 = V_7;
		NullCheck(L_71);
		Object_t * L_73 = (Object_t *)VirtFuncInvoker1< Object_t *, HeaderU5BU5D_t1694* >::Invoke(&HeaderHandler_Invoke_m10910_MethodInfo, L_71, L_72);
		V_16 = ((String_t*)IsInst(L_73, (&String_t_il2cpp_TypeInfo)));
	}

IL_0191:
	{
		V_17 = ((HeaderU5BU5D_t1694*)SZArrayNew(HeaderU5BU5D_t1694_il2cpp_TypeInfo_var, 7));
		HeaderU5BU5D_t1694* L_74 = V_17;
		String_t* L_75 = V_1;
		Header_t1691 * L_76 = (Header_t1691 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Header_t1691_il2cpp_TypeInfo));
		Header__ctor_m9140(L_76, (String_t*) &_stringLiteral1772, L_75, /*hidden argument*/&Header__ctor_m9140_MethodInfo);
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, 0);
		ArrayElementTypeCheck (L_74, L_76);
		*((Header_t1691 **)(Header_t1691 **)SZArrayLdElema(L_74, 0)) = (Header_t1691 *)L_76;
		HeaderU5BU5D_t1694* L_77 = V_17;
		Object_t * L_78 = V_4;
		Header_t1691 * L_79 = (Header_t1691 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Header_t1691_il2cpp_TypeInfo));
		Header__ctor_m9140(L_79, (String_t*) &_stringLiteral1774, L_78, /*hidden argument*/&Header__ctor_m9140_MethodInfo);
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		ArrayElementTypeCheck (L_77, L_79);
		*((Header_t1691 **)(Header_t1691 **)SZArrayLdElema(L_77, 1)) = (Header_t1691 *)L_79;
		HeaderU5BU5D_t1694* L_80 = V_17;
		String_t* L_81 = V_2;
		Header_t1691 * L_82 = (Header_t1691 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Header_t1691_il2cpp_TypeInfo));
		Header__ctor_m9140(L_82, (String_t*) &_stringLiteral1773, L_81, /*hidden argument*/&Header__ctor_m9140_MethodInfo);
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, 2);
		ArrayElementTypeCheck (L_80, L_82);
		*((Header_t1691 **)(Header_t1691 **)SZArrayLdElema(L_80, 2)) = (Header_t1691 *)L_82;
		HeaderU5BU5D_t1694* L_83 = V_17;
		ObjectU5BU5D_t76* L_84 = V_3;
		Header_t1691 * L_85 = (Header_t1691 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Header_t1691_il2cpp_TypeInfo));
		Header__ctor_m9140(L_85, (String_t*) &_stringLiteral1775, (Object_t *)(Object_t *)L_84, /*hidden argument*/&Header__ctor_m9140_MethodInfo);
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, 3);
		ArrayElementTypeCheck (L_83, L_85);
		*((Header_t1691 **)(Header_t1691 **)SZArrayLdElema(L_83, 3)) = (Header_t1691 *)L_85;
		HeaderU5BU5D_t1694* L_86 = V_17;
		Object_t * L_87 = V_5;
		Header_t1691 * L_88 = (Header_t1691 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Header_t1691_il2cpp_TypeInfo));
		Header__ctor_m9140(L_88, (String_t*) &_stringLiteral1776, L_87, /*hidden argument*/&Header__ctor_m9140_MethodInfo);
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 4);
		ArrayElementTypeCheck (L_86, L_88);
		*((Header_t1691 **)(Header_t1691 **)SZArrayLdElema(L_86, 4)) = (Header_t1691 *)L_88;
		HeaderU5BU5D_t1694* L_89 = V_17;
		String_t* L_90 = V_16;
		Header_t1691 * L_91 = (Header_t1691 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Header_t1691_il2cpp_TypeInfo));
		Header__ctor_m9140(L_91, (String_t*) &_stringLiteral1771, L_90, /*hidden argument*/&Header__ctor_m9140_MethodInfo);
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 5);
		ArrayElementTypeCheck (L_89, L_91);
		*((Header_t1691 **)(Header_t1691 **)SZArrayLdElema(L_89, 5)) = (Header_t1691 *)L_91;
		HeaderU5BU5D_t1694* L_92 = V_17;
		TypeU5BU5D_t658* L_93 = V_8;
		Header_t1691 * L_94 = (Header_t1691 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Header_t1691_il2cpp_TypeInfo));
		Header__ctor_m9140(L_94, (String_t*) &_stringLiteral1779, (Object_t *)(Object_t *)L_93, /*hidden argument*/&Header__ctor_m9140_MethodInfo);
		NullCheck(L_92);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_92, 6);
		ArrayElementTypeCheck (L_92, L_94);
		*((Header_t1691 **)(Header_t1691 **)SZArrayLdElema(L_92, 6)) = (Header_t1691 *)L_94;
		HeaderU5BU5D_t1694* L_95 = V_17;
		MethodCall_t1687 * L_96 = (MethodCall_t1687 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MethodCall_t1687_il2cpp_TypeInfo));
		MethodCall__ctor_m9148(L_96, L_95, /*hidden argument*/&MethodCall__ctor_m9148_MethodInfo);
		V_18 = L_96;
		ObjectU5BU5D_t76* L_97 = V_6;
		if (!L_97)
		{
			goto IL_0255;
		}
	}
	{
		ObjectU5BU5D_t76* L_98 = V_6;
		V_20 = L_98;
		V_21 = 0;
		goto IL_024d;
	}

IL_021c:
	{
		ObjectU5BU5D_t76* L_99 = V_20;
		int32_t L_100 = V_21;
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, L_100);
		int32_t L_101 = L_100;
		V_19 = ((*(DictionaryEntry_t1014 *)((DictionaryEntry_t1014 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_99, L_101)), InitializedTypeInfo(&DictionaryEntry_t1014_il2cpp_TypeInfo)))));
		MethodCall_t1687 * L_102 = V_18;
		NullCheck(L_102);
		Object_t * L_103 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&MethodCall_get_Properties_m9159_MethodInfo, L_102);
		Object_t * L_104 = DictionaryEntry_get_Key_m7952((&V_19), /*hidden argument*/&DictionaryEntry_get_Key_m7952_MethodInfo);
		Object_t * L_105 = DictionaryEntry_get_Value_m7953((&V_19), /*hidden argument*/&DictionaryEntry_get_Value_m7953_MethodInfo);
		NullCheck(L_103);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(&IDictionary_set_Item_m5217_MethodInfo, L_103, ((String_t*)Castclass(L_104, (&String_t_il2cpp_TypeInfo))), L_105);
		int32_t L_106 = V_21;
		V_21 = ((int32_t)((int32_t)L_106+(int32_t)1));
	}

IL_024d:
	{
		int32_t L_107 = V_21;
		ObjectU5BU5D_t76* L_108 = V_20;
		NullCheck(L_108);
		if ((((int32_t)L_107) < ((int32_t)(((int32_t)(((Array_t *)L_108)->max_length))))))
		{
			goto IL_021c;
		}
	}

IL_0255:
	{
		MethodCall_t1687 * L_109 = V_18;
		return L_109;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" Object_t * MessageFormatter_ReadMethodResponse_m9338 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1546 * ___reader, bool ___hasHeaders, HeaderHandler_t1738 * ___headerHandler, Object_t * ___methodCallMessage, BinaryFormatter_t1725 * ___formatter, MethodInfo* method)
{
	static bool MessageFormatter_ReadMethodResponse_m9338_init;
	if (!MessageFormatter_ReadMethodResponse_m9338_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		MessageFormatter_ReadMethodResponse_m9338_init = true;
	}
	int32_t V_0 = {0};
	uint8_t V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	ObjectU5BU5D_t76* V_4 = {0};
	LogicalCallContext_t1693 * V_5 = {0};
	Exception_t110 * V_6 = {0};
	ObjectU5BU5D_t76* V_7 = {0};
	HeaderU5BU5D_t1694* V_8 = {0};
	Type_t * V_9 = {0};
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	Type_t * V_12 = {0};
	ObjectReader_t1744 * V_13 = {0};
	Object_t * V_14 = {0};
	ObjectU5BU5D_t76* V_15 = {0};
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	ReturnMessage_t1705 * V_19 = {0};
	DictionaryEntry_t1014  V_20 = {0};
	ObjectU5BU5D_t76* V_21 = {0};
	int32_t V_22 = 0;
	int32_t G_B43_0 = 0;
	{
		uint8_t L_0 = ___elem;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)22))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_1 = ___elem;
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&BinaryElement_t1733_il2cpp_TypeInfo), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m1810(NULL /*static, unused*/, (String_t*) &_stringLiteral1813, L_3, /*hidden argument*/&String_Concat_m1810_MethodInfo);
		SerializationException_t1190 * L_5 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_5, L_4, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001b:
	{
		BinaryReader_t1546 * L_6 = ___reader;
		NullCheck(L_6);
		uint8_t L_7 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_6);
		V_0 = L_7;
		BinaryReader_t1546 * L_8 = ___reader;
		NullCheck(L_8);
		uint8_t L_9 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_8);
		V_1 = L_9;
		int32_t L_10 = V_0;
		V_2 = ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)64)))) > ((int32_t)0))? 1 : 0);
		BinaryReader_t1546 * L_11 = ___reader;
		NullCheck(L_11);
		VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_11);
		BinaryReader_t1546 * L_12 = ___reader;
		NullCheck(L_12);
		VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_12);
		V_3 = NULL;
		V_4 = (ObjectU5BU5D_t76*)NULL;
		V_5 = (LogicalCallContext_t1693 *)NULL;
		V_6 = (Exception_t110 *)NULL;
		V_7 = (ObjectU5BU5D_t76*)NULL;
		V_8 = (HeaderU5BU5D_t1694*)NULL;
		uint8_t L_13 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_13&(int32_t)8))))) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		BinaryReader_t1546 * L_14 = ___reader;
		NullCheck(L_14);
		uint8_t L_15 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo));
		Type_t * L_16 = BinaryCommon_GetTypeFromCode_m9324(NULL /*static, unused*/, L_15, /*hidden argument*/&BinaryCommon_GetTypeFromCode_m9324_MethodInfo);
		V_9 = L_16;
		BinaryReader_t1546 * L_17 = ___reader;
		Type_t * L_18 = V_9;
		Object_t * L_19 = ObjectReader_ReadPrimitiveTypeValue_m9367(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/&ObjectReader_ReadPrimitiveTypeValue_m9367_MethodInfo);
		V_3 = L_19;
	}

IL_006d:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_20&(int32_t)2))) <= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		BinaryReader_t1546 * L_21 = ___reader;
		NullCheck(L_21);
		uint32_t L_22 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_21);
		V_10 = L_22;
		uint32_t L_23 = V_10;
		V_4 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, (((uintptr_t)L_23))));
		V_11 = 0;
		goto IL_00aa;
	}

IL_008a:
	{
		BinaryReader_t1546 * L_24 = ___reader;
		NullCheck(L_24);
		uint8_t L_25 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo));
		Type_t * L_26 = BinaryCommon_GetTypeFromCode_m9324(NULL /*static, unused*/, L_25, /*hidden argument*/&BinaryCommon_GetTypeFromCode_m9324_MethodInfo);
		V_12 = L_26;
		ObjectU5BU5D_t76* L_27 = V_4;
		int32_t L_28 = V_11;
		BinaryReader_t1546 * L_29 = ___reader;
		Type_t * L_30 = V_12;
		Object_t * L_31 = ObjectReader_ReadPrimitiveTypeValue_m9367(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/&ObjectReader_ReadPrimitiveTypeValue_m9367_MethodInfo);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		ArrayElementTypeCheck (L_27, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, L_28)) = (Object_t *)L_31;
		int32_t L_32 = V_11;
		V_11 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00aa:
	{
		int32_t L_33 = V_11;
		uint32_t L_34 = V_10;
		if ((((int64_t)(((int64_t)L_33))) < ((int64_t)(((uint64_t)L_34)))))
		{
			goto IL_008a;
		}
	}

IL_00b2:
	{
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_00d4;
		}
	}
	{
		uint8_t L_36 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_36&(int32_t)((int32_t)16)))))) > ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		uint8_t L_37 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)32)))))) > ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_38 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_38&(int32_t)4))) > ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_39 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_39&(int32_t)8))) <= ((int32_t)0)))
		{
			goto IL_01c2;
		}
	}

IL_00d4:
	{
		BinaryFormatter_t1725 * L_40 = ___formatter;
		ObjectReader_t1744 * L_41 = (ObjectReader_t1744 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectReader_t1744_il2cpp_TypeInfo));
		ObjectReader__ctor_m9341(L_41, L_40, /*hidden argument*/&ObjectReader__ctor_m9341_MethodInfo);
		V_13 = L_41;
		ObjectReader_t1744 * L_42 = V_13;
		BinaryReader_t1546 * L_43 = ___reader;
		bool L_44 = ___hasHeaders;
		NullCheck(L_42);
		ObjectReader_ReadObjectGraph_m9342(L_42, L_43, L_44, (&V_14), (&V_8), /*hidden argument*/&ObjectReader_ReadObjectGraph_m9342_MethodInfo);
		Object_t * L_45 = V_14;
		V_15 = ((ObjectU5BU5D_t76*)Castclass(L_45, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		uint8_t L_46 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_46&(int32_t)((int32_t)32)))))) <= ((int32_t)0)))
		{
			goto IL_0119;
		}
	}
	{
		ObjectU5BU5D_t76* L_47 = V_15;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 0);
		int32_t L_48 = 0;
		V_6 = ((Exception_t110 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_47, L_48)), InitializedTypeInfo(&Exception_t110_il2cpp_TypeInfo)));
		bool L_49 = V_2;
		if (!L_49)
		{
			goto IL_0114;
		}
	}
	{
		ObjectU5BU5D_t76* L_50 = V_15;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		int32_t L_51 = 1;
		V_5 = ((LogicalCallContext_t1693 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51)), InitializedTypeInfo(&LogicalCallContext_t1693_il2cpp_TypeInfo)));
	}

IL_0114:
	{
		goto IL_01c0;
	}

IL_0119:
	{
		int32_t L_52 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_52&(int32_t)1))) > ((int32_t)0)))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_53 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_53&(int32_t)2))) <= ((int32_t)0)))
		{
			goto IL_0165;
		}
	}

IL_0125:
	{
		V_16 = 0;
		uint8_t L_54 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_54&(int32_t)((int32_t)16)))))) <= ((int32_t)0)))
		{
			goto IL_013b;
		}
	}
	{
		ObjectU5BU5D_t76* L_55 = V_15;
		int32_t L_56 = V_16;
		int32_t L_57 = L_56;
		V_16 = ((int32_t)((int32_t)L_57+(int32_t)1));
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_57);
		int32_t L_58 = L_57;
		V_3 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_55, L_58));
	}

IL_013b:
	{
		bool L_59 = V_2;
		if (!L_59)
		{
			goto IL_014f;
		}
	}
	{
		ObjectU5BU5D_t76* L_60 = V_15;
		int32_t L_61 = V_16;
		int32_t L_62 = L_61;
		V_16 = ((int32_t)((int32_t)L_62+(int32_t)1));
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_62);
		int32_t L_63 = L_62;
		V_5 = ((LogicalCallContext_t1693 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_60, L_63)), InitializedTypeInfo(&LogicalCallContext_t1693_il2cpp_TypeInfo)));
	}

IL_014f:
	{
		int32_t L_64 = V_16;
		ObjectU5BU5D_t76* L_65 = V_15;
		NullCheck(L_65);
		if ((((int32_t)L_64) >= ((int32_t)(((int32_t)(((Array_t *)L_65)->max_length))))))
		{
			goto IL_0163;
		}
	}
	{
		ObjectU5BU5D_t76* L_66 = V_15;
		int32_t L_67 = V_16;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		int32_t L_68 = L_67;
		V_7 = ((ObjectU5BU5D_t76*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_66, L_68)), ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
	}

IL_0163:
	{
		goto IL_01c0;
	}

IL_0165:
	{
		int32_t L_69 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_69&(int32_t)4))) <= ((int32_t)0)))
		{
			goto IL_0171;
		}
	}
	{
		ObjectU5BU5D_t76* L_70 = V_15;
		V_4 = L_70;
		goto IL_01c0;
	}

IL_0171:
	{
		V_17 = 0;
		ObjectU5BU5D_t76* L_71 = V_15;
		int32_t L_72 = V_17;
		int32_t L_73 = L_72;
		V_17 = ((int32_t)((int32_t)L_73+(int32_t)1));
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_73);
		int32_t L_74 = L_73;
		V_4 = ((ObjectU5BU5D_t76*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_71, L_74)), ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		uint8_t L_75 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_75&(int32_t)((int32_t)16)))))) <= ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		ObjectU5BU5D_t76* L_76 = V_15;
		int32_t L_77 = V_17;
		int32_t L_78 = L_77;
		V_17 = ((int32_t)((int32_t)L_78+(int32_t)1));
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, L_78);
		int32_t L_79 = L_78;
		V_3 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_76, L_79));
	}

IL_0198:
	{
		bool L_80 = V_2;
		if (!L_80)
		{
			goto IL_01ac;
		}
	}
	{
		ObjectU5BU5D_t76* L_81 = V_15;
		int32_t L_82 = V_17;
		int32_t L_83 = L_82;
		V_17 = ((int32_t)((int32_t)L_83+(int32_t)1));
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, L_83);
		int32_t L_84 = L_83;
		V_5 = ((LogicalCallContext_t1693 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_81, L_84)), InitializedTypeInfo(&LogicalCallContext_t1693_il2cpp_TypeInfo)));
	}

IL_01ac:
	{
		int32_t L_85 = V_17;
		ObjectU5BU5D_t76* L_86 = V_15;
		NullCheck(L_86);
		if ((((int32_t)L_85) >= ((int32_t)(((int32_t)(((Array_t *)L_86)->max_length))))))
		{
			goto IL_01c0;
		}
	}
	{
		ObjectU5BU5D_t76* L_87 = V_15;
		int32_t L_88 = V_17;
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, L_88);
		int32_t L_89 = L_88;
		V_7 = ((ObjectU5BU5D_t76*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_87, L_89)), ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
	}

IL_01c0:
	{
		goto IL_01c9;
	}

IL_01c2:
	{
		BinaryReader_t1546 * L_90 = ___reader;
		NullCheck(L_90);
		VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_90);
	}

IL_01c9:
	{
		HeaderHandler_t1738 * L_91 = ___headerHandler;
		if (!L_91)
		{
			goto IL_01d5;
		}
	}
	{
		HeaderHandler_t1738 * L_92 = ___headerHandler;
		HeaderU5BU5D_t1694* L_93 = V_8;
		NullCheck(L_92);
		VirtFuncInvoker1< Object_t *, HeaderU5BU5D_t1694* >::Invoke(&HeaderHandler_Invoke_m10910_MethodInfo, L_92, L_93);
	}

IL_01d5:
	{
		Exception_t110 * L_94 = V_6;
		if (!L_94)
		{
			goto IL_01e3;
		}
	}
	{
		Exception_t110 * L_95 = V_6;
		Object_t * L_96 = ___methodCallMessage;
		ReturnMessage_t1705 * L_97 = (ReturnMessage_t1705 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ReturnMessage_t1705_il2cpp_TypeInfo));
		ReturnMessage__ctor_m9218(L_97, L_95, L_96, /*hidden argument*/&ReturnMessage__ctor_m9218_MethodInfo);
		return L_97;
	}

IL_01e3:
	{
		ObjectU5BU5D_t76* L_98 = V_4;
		if (!L_98)
		{
			goto IL_01ed;
		}
	}
	{
		ObjectU5BU5D_t76* L_99 = V_4;
		NullCheck(L_99);
		G_B43_0 = (((int32_t)(((Array_t *)L_99)->max_length)));
		goto IL_01ee;
	}

IL_01ed:
	{
		G_B43_0 = 0;
	}

IL_01ee:
	{
		V_18 = G_B43_0;
		Object_t * L_100 = V_3;
		ObjectU5BU5D_t76* L_101 = V_4;
		int32_t L_102 = V_18;
		LogicalCallContext_t1693 * L_103 = V_5;
		Object_t * L_104 = ___methodCallMessage;
		ReturnMessage_t1705 * L_105 = (ReturnMessage_t1705 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ReturnMessage_t1705_il2cpp_TypeInfo));
		ReturnMessage__ctor_m9217(L_105, L_100, L_101, L_102, L_103, L_104, /*hidden argument*/&ReturnMessage__ctor_m9217_MethodInfo);
		V_19 = L_105;
		ObjectU5BU5D_t76* L_106 = V_7;
		if (!L_106)
		{
			goto IL_0246;
		}
	}
	{
		ObjectU5BU5D_t76* L_107 = V_7;
		V_21 = L_107;
		V_22 = 0;
		goto IL_023e;
	}

IL_020d:
	{
		ObjectU5BU5D_t76* L_108 = V_21;
		int32_t L_109 = V_22;
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, L_109);
		int32_t L_110 = L_109;
		V_20 = ((*(DictionaryEntry_t1014 *)((DictionaryEntry_t1014 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_108, L_110)), InitializedTypeInfo(&DictionaryEntry_t1014_il2cpp_TypeInfo)))));
		ReturnMessage_t1705 * L_111 = V_19;
		NullCheck(L_111);
		Object_t * L_112 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ReturnMessage_get_Properties_m9225_MethodInfo, L_111);
		Object_t * L_113 = DictionaryEntry_get_Key_m7952((&V_20), /*hidden argument*/&DictionaryEntry_get_Key_m7952_MethodInfo);
		Object_t * L_114 = DictionaryEntry_get_Value_m7953((&V_20), /*hidden argument*/&DictionaryEntry_get_Value_m7953_MethodInfo);
		NullCheck(L_112);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(&IDictionary_set_Item_m5217_MethodInfo, L_112, ((String_t*)Castclass(L_113, (&String_t_il2cpp_TypeInfo))), L_114);
		int32_t L_115 = V_22;
		V_22 = ((int32_t)((int32_t)L_115+(int32_t)1));
	}

IL_023e:
	{
		int32_t L_116 = V_22;
		ObjectU5BU5D_t76* L_117 = V_21;
		NullCheck(L_117);
		if ((((int32_t)L_116) < ((int32_t)(((int32_t)(((Array_t *)L_117)->max_length))))))
		{
			goto IL_020d;
		}
	}

IL_0246:
	{
		ReturnMessage_t1705 * L_118 = V_19;
		return L_118;
	}
}
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeMetadata_t1741_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_ObjeMethodDeclarations.h"



// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::.ctor()
extern MethodInfo TypeMetadata__ctor_m9339_MethodInfo;
extern "C" void TypeMetadata__ctor_m9339 (TypeMetadata_t1741 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArrayNullFiller_t1742_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_0MethodDeclarations.h"



// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller::.ctor(System.Int32)
extern MethodInfo ArrayNullFiller__ctor_m9340_MethodInfo;
extern "C" void ArrayNullFiller__ctor_m9340 (ArrayNullFiller_t1742 * __this, int32_t ___count, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		int32_t L_0 = ___count;
		__this->___NullCount_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.ObjectManager
#include "mscorlib_System_Runtime_Serialization_ObjectManager.h"
// System.Runtime.Serialization.FormatterConverter
#include "mscorlib_System_Runtime_Serialization_FormatterConverter.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.BitConverter
#include "mscorlib_System_BitConverter.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo SerializationBinder_t1737_il2cpp_TypeInfo;
extern TypeInfo ObjectManager_t1743_il2cpp_TypeInfo;
extern TypeInfo FormatterConverter_t1748_il2cpp_TypeInfo;
extern TypeInfo BooleanU5BU5D_t1055_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t268_il2cpp_TypeInfo;
extern TypeInfo Char_t262_il2cpp_TypeInfo;
extern TypeInfo DateTimeU5BU5D_t1965_il2cpp_TypeInfo;
extern TypeInfo DateTime_t524_il2cpp_TypeInfo;
extern TypeInfo DecimalU5BU5D_t1966_il2cpp_TypeInfo;
extern TypeInfo Decimal_t763_il2cpp_TypeInfo;
extern TypeInfo DoubleU5BU5D_t48_il2cpp_TypeInfo;
extern TypeInfo Double_t89_il2cpp_TypeInfo;
extern TypeInfo Int16U5BU5D_t1955_il2cpp_TypeInfo;
extern TypeInfo Int16_t434_il2cpp_TypeInfo;
extern TypeInfo Int64U5BU5D_t1406_il2cpp_TypeInfo;
extern TypeInfo SByteU5BU5D_t1838_il2cpp_TypeInfo;
extern TypeInfo SByte_t115_il2cpp_TypeInfo;
extern TypeInfo SingleU5BU5D_t47_il2cpp_TypeInfo;
extern TypeInfo Single_t85_il2cpp_TypeInfo;
extern TypeInfo UInt16U5BU5D_t1047_il2cpp_TypeInfo;
extern TypeInfo UInt16_t750_il2cpp_TypeInfo;
extern TypeInfo UInt32U5BU5D_t1257_il2cpp_TypeInfo;
extern TypeInfo UInt64U5BU5D_t1795_il2cpp_TypeInfo;
extern TypeInfo UInt64_t762_il2cpp_TypeInfo;
extern TypeInfo TimeSpanU5BU5D_t1967_il2cpp_TypeInfo;
extern TypeInfo TimeSpan_t1092_il2cpp_TypeInfo;
extern TypeInfo BitConverter_t1192_il2cpp_TypeInfo;
extern TypeInfo TypeTagU5BU5D_t1968_il2cpp_TypeInfo;
extern TypeInfo MemberInfoU5BU5D_t1740_il2cpp_TypeInfo;
extern TypeInfo FieldInfo_t_il2cpp_TypeInfo;
extern TypeInfo IObjectReference_t1969_il2cpp_TypeInfo;
extern TypeInfo PropertyInfo_t_il2cpp_TypeInfo;
extern TypeInfo Assembly_t1194_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t757_il2cpp_TypeInfo;
// System.Runtime.Serialization.ObjectManager
#include "mscorlib_System_Runtime_Serialization_ObjectManagerMethodDeclarations.h"
// System.Runtime.Serialization.FormatterServices
#include "mscorlib_System_Runtime_Serialization_FormatterServicesMethodDeclarations.h"
// System.Runtime.Serialization.FormatterConverter
#include "mscorlib_System_Runtime_Serialization_FormatterConverterMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// System.BitConverter
#include "mscorlib_System_BitConverterMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationBinder
#include "mscorlib_System_Runtime_Serialization_SerializationBinderMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
extern Il2CppType BooleanU5BU5D_t1055_0_0_0;
extern Il2CppType CharU5BU5D_t268_0_0_0;
extern Il2CppType DateTimeU5BU5D_t1965_0_0_0;
extern Il2CppType DecimalU5BU5D_t1966_0_0_0;
extern Il2CppType DoubleU5BU5D_t48_0_0_0;
extern Il2CppType Int16U5BU5D_t1955_0_0_0;
extern Il2CppType Int64U5BU5D_t1406_0_0_0;
extern Il2CppType SByteU5BU5D_t1838_0_0_0;
extern Il2CppType SingleU5BU5D_t47_0_0_0;
extern Il2CppType UInt16U5BU5D_t1047_0_0_0;
extern Il2CppType UInt32U5BU5D_t1257_0_0_0;
extern Il2CppType UInt64U5BU5D_t1795_0_0_0;
extern Il2CppType TimeSpanU5BU5D_t1967_0_0_0;
extern Il2CppType TypeTagU5BU5D_t1968_0_0_0;
extern Il2CppType ISerializable_t118_0_0_0;
extern Il2CppType MemberInfoU5BU5D_t1740_0_0_0;
extern Il2CppType MonoType_t_0_0_0;
extern Il2CppType MonoTypeU5BU5D_t1970_0_0_0;
extern MethodInfo ObjectManager__ctor_m9377_MethodInfo;
extern MethodInfo ObjectReader_ReadNextObject_m9344_MethodInfo;
extern MethodInfo ObjectReader_get_CurrentObject_m9346_MethodInfo;
extern MethodInfo ObjectReader_ReadNextObject_m9345_MethodInfo;
extern MethodInfo ObjectManager_GetObject_m9380_MethodInfo;
extern MethodInfo ObjectManager_DoFixups_m9378_MethodInfo;
extern MethodInfo ObjectManager_RaiseDeserializationEvent_m9381_MethodInfo;
extern MethodInfo ObjectReader_ReadObject_m9347_MethodInfo;
extern MethodInfo ObjectReader_RegisterObject_m9352_MethodInfo;
extern MethodInfo ObjectReader_ReadRefTypeObjectInstance_m9350_MethodInfo;
extern MethodInfo ObjectReader_ReadObjectInstance_m9349_MethodInfo;
extern MethodInfo ObjectReader_ReadStringIntance_m9353_MethodInfo;
extern MethodInfo ObjectReader_ReadGenericArray_m9354_MethodInfo;
extern MethodInfo ObjectReader_ReadBoxedPrimitiveTypeValue_m9355_MethodInfo;
extern MethodInfo ObjectReader_ReadAssembly_m9348_MethodInfo;
extern MethodInfo ObjectReader_ReadArrayOfPrimitiveType_m9356_MethodInfo;
extern MethodInfo ObjectReader_ReadArrayOfObject_m9358_MethodInfo;
extern MethodInfo ObjectReader_ReadArrayOfString_m9359_MethodInfo;
extern MethodInfo ObjectReader_ReadTypeMetadata_m9361_MethodInfo;
extern MethodInfo ObjectReader_ReadObjectContent_m9351_MethodInfo;
extern MethodInfo FormatterServices_GetSafeUninitializedObject_m9376_MethodInfo;
extern MethodInfo FormatterServices_GetUninitializedObject_m9375_MethodInfo;
extern MethodInfo ObjectManager_RaiseOnDeserializingEvent_m9382_MethodInfo;
extern MethodInfo FormatterConverter__ctor_m9368_MethodInfo;
extern MethodInfo SerializationInfo__ctor_m9432_MethodInfo;
extern MethodInfo ObjectReader_ReadValue_m9362_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7271_MethodInfo;
extern MethodInfo ObjectManager_RegisterObject_m9390_MethodInfo;
extern MethodInfo Array_Clone_m5260_MethodInfo;
extern MethodInfo ObjectReader_ReadType_m9366_MethodInfo;
extern MethodInfo Array_CreateInstance_m7208_MethodInfo;
extern MethodInfo Array_GetLowerBound_m7182_MethodInfo;
extern MethodInfo Array_get_Rank_m5237_MethodInfo;
extern MethodInfo Array_GetUpperBound_m7193_MethodInfo;
extern MethodInfo Type_GetTypeCode_m7282_MethodInfo;
extern MethodInfo BinaryReader_ReadBoolean_m8250_MethodInfo;
extern MethodInfo BinaryReader_Read_m8246_MethodInfo;
extern MethodInfo BinaryReader_Read_m8247_MethodInfo;
extern MethodInfo BinaryReader_ReadInt64_m8257_MethodInfo;
extern MethodInfo DateTime_FromBinary_m10435_MethodInfo;
extern MethodInfo BinaryReader_ReadDecimal_m8253_MethodInfo;
extern MethodInfo ObjectReader_BlockRead_m9357_MethodInfo;
extern MethodInfo BinaryReader_ReadDouble_m8254_MethodInfo;
extern MethodInfo BinaryReader_ReadInt16_m8255_MethodInfo;
extern MethodInfo BinaryReader_ReadSByte_m8258_MethodInfo;
extern MethodInfo BinaryReader_ReadSingle_m8260_MethodInfo;
extern MethodInfo BinaryReader_ReadUInt16_m8261_MethodInfo;
extern MethodInfo BinaryReader_ReadUInt64_m8263_MethodInfo;
extern MethodInfo TimeSpan__ctor_m10802_MethodInfo;
extern MethodInfo Buffer_ByteLength_m10166_MethodInfo;
extern MethodInfo Buffer_BlockCopy_m5306_MethodInfo;
extern MethodInfo ObjectReader_ReadSimpleArray_m9360_MethodInfo;
extern MethodInfo Array_CreateInstance_m7205_MethodInfo;
extern MethodInfo ObjectReader_GetDeserializationType_m9365_MethodInfo;
extern MethodInfo Type_GetType_m4034_MethodInfo;
extern MethodInfo Type_get_IsSerializable_m7270_MethodInfo;
extern MethodInfo String_IndexOf_m2187_MethodInfo;
extern MethodInfo Type_GetField_m10987_MethodInfo;
extern MethodInfo FieldInfo_get_FieldType_m3964_MethodInfo;
extern MethodInfo ObjectReader_SetObjectValue_m9363_MethodInfo;
extern MethodInfo ObjectReader_RecordFixup_m9364_MethodInfo;
extern MethodInfo IObjectReference_GetRealObject_m11033_MethodInfo;
extern MethodInfo Array_SetValue_m7184_MethodInfo;
extern MethodInfo FieldInfo_SetValue_m3980_MethodInfo;
extern MethodInfo PropertyInfo_SetValue_m9002_MethodInfo;
extern MethodInfo ObjectManager_RecordDelayedFixup_m9387_MethodInfo;
extern MethodInfo ObjectManager_RecordArrayElementFixup_m9385_MethodInfo;
extern MethodInfo ObjectManager_RecordArrayElementFixup_m9386_MethodInfo;
extern MethodInfo ObjectManager_RecordFixup_m9388_MethodInfo;
extern MethodInfo SerializationBinder_BindToType_m11034_MethodInfo;
extern MethodInfo Assembly_Load_m8765_MethodInfo;
extern MethodInfo Assembly_GetType_m8759_MethodInfo;
extern MethodInfo StreamingContext_get_State_m9448_MethodInfo;
extern MethodInfo BinaryReader_ReadChar_m8252_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m3915_MethodInfo;
extern MethodInfo Decimal_Parse_m7008_MethodInfo;


// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::.ctor(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" void ObjectReader__ctor_m9341 (ObjectReader_t1744 * __this, BinaryFormatter_t1725 * ___formatter, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable_t1007 * L_0 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_0, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		__this->____registeredAssemblies_5 = L_0;
		Hashtable_t1007 * L_1 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_1, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		__this->____typeMetadataCache_6 = L_1;
		__this->___ArrayBufferLength_11 = ((int32_t)4096);
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		BinaryFormatter_t1725 * L_2 = ___formatter;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&BinaryFormatter_get_SurrogateSelector_m9332_MethodInfo, L_2);
		__this->____surrogateSelector_0 = L_3;
		BinaryFormatter_t1725 * L_4 = ___formatter;
		NullCheck(L_4);
		StreamingContext_t709  L_5 = (StreamingContext_t709 )VirtFuncInvoker0< StreamingContext_t709  >::Invoke(&BinaryFormatter_get_Context_m9331_MethodInfo, L_4);
		__this->____context_1 = L_5;
		BinaryFormatter_t1725 * L_6 = ___formatter;
		NullCheck(L_6);
		SerializationBinder_t1737 * L_7 = (SerializationBinder_t1737 *)VirtFuncInvoker0< SerializationBinder_t1737 * >::Invoke(&BinaryFormatter_get_Binder_m9330_MethodInfo, L_6);
		__this->____binder_2 = L_7;
		Object_t * L_8 = (__this->____surrogateSelector_0);
		StreamingContext_t709  L_9 = (__this->____context_1);
		ObjectManager_t1743 * L_10 = (ObjectManager_t1743 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectManager_t1743_il2cpp_TypeInfo));
		ObjectManager__ctor_m9377(L_10, L_8, L_9, /*hidden argument*/&ObjectManager__ctor_m9377_MethodInfo);
		__this->____manager_4 = L_10;
		BinaryFormatter_t1725 * L_11 = ___formatter;
		NullCheck(L_11);
		int32_t L_12 = BinaryFormatter_get_FilterLevel_m9333(L_11, /*hidden argument*/&BinaryFormatter_get_FilterLevel_m9333_MethodInfo);
		__this->____filterLevel_3 = L_12;
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern "C" void ObjectReader_ReadObjectGraph_m9342 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t1694** ___headers, MethodInfo* method)
{
	uint8_t V_0 = {0};
	{
		BinaryReader_t1546 * L_0 = ___reader;
		NullCheck(L_0);
		uint8_t L_1 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_0);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		BinaryReader_t1546 * L_3 = ___reader;
		bool L_4 = ___readHeaders;
		Object_t ** L_5 = ___result;
		HeaderU5BU5D_t1694** L_6 = ___headers;
		ObjectReader_ReadObjectGraph_m9343(__this, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/&ObjectReader_ReadObjectGraph_m9343_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern TypeInfo* HeaderU5BU5D_t1694_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadObjectGraph_m9343 (ObjectReader_t1744 * __this, uint8_t ___elem, BinaryReader_t1546 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t1694** ___headers, MethodInfo* method)
{
	static bool ObjectReader_ReadObjectGraph_m9343_init;
	if (!ObjectReader_ReadObjectGraph_m9343_init)
	{
		HeaderU5BU5D_t1694_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&HeaderU5BU5D_t1694_0_0_0);
		ObjectReader_ReadObjectGraph_m9343_init = true;
	}
	bool V_0 = false;
	{
		HeaderU5BU5D_t1694** L_0 = ___headers;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		uint8_t L_1 = ___elem;
		BinaryReader_t1546 * L_2 = ___reader;
		bool L_3 = ObjectReader_ReadNextObject_m9344(__this, L_1, L_2, /*hidden argument*/&ObjectReader_ReadNextObject_m9344_MethodInfo);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0045;
		}
	}

IL_0010:
	{
		bool L_5 = ___readHeaders;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		HeaderU5BU5D_t1694** L_6 = ___headers;
		if ((*((HeaderU5BU5D_t1694**)L_6)))
		{
			goto IL_0028;
		}
	}
	{
		HeaderU5BU5D_t1694** L_7 = ___headers;
		Object_t * L_8 = ObjectReader_get_CurrentObject_m9346(__this, /*hidden argument*/&ObjectReader_get_CurrentObject_m9346_MethodInfo);
		*((Object_t **)(L_7)) = (Object_t *)((HeaderU5BU5D_t1694*)Castclass(L_8, HeaderU5BU5D_t1694_il2cpp_TypeInfo_var));
		goto IL_003c;
	}

IL_0028:
	{
		int64_t L_9 = (__this->____rootObjectID_9);
		if (L_9)
		{
			goto IL_003c;
		}
	}
	{
		int64_t L_10 = (__this->____lastObjectID_8);
		__this->____rootObjectID_9 = L_10;
	}

IL_003c:
	{
		BinaryReader_t1546 * L_11 = ___reader;
		bool L_12 = ObjectReader_ReadNextObject_m9345(__this, L_11, /*hidden argument*/&ObjectReader_ReadNextObject_m9345_MethodInfo);
		if (L_12)
		{
			goto IL_0010;
		}
	}

IL_0045:
	{
		Object_t ** L_13 = ___result;
		ObjectManager_t1743 * L_14 = (__this->____manager_4);
		int64_t L_15 = (__this->____rootObjectID_9);
		NullCheck(L_14);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, int64_t >::Invoke(&ObjectManager_GetObject_m9380_MethodInfo, L_14, L_15);
		*((Object_t **)(L_13)) = (Object_t *)L_16;
		return;
	}
}
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader)
extern "C" bool ObjectReader_ReadNextObject_m9344 (ObjectReader_t1744 * __this, uint8_t ___element, BinaryReader_t1546 * ___reader, MethodInfo* method)
{
	SerializationInfo_t708 * V_0 = {0};
	int64_t V_1 = 0;
	{
		uint8_t L_0 = ___element;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_001d;
		}
	}
	{
		ObjectManager_t1743 * L_1 = (__this->____manager_4);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&ObjectManager_DoFixups_m9378_MethodInfo, L_1);
		ObjectManager_t1743 * L_2 = (__this->____manager_4);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&ObjectManager_RaiseDeserializationEvent_m9381_MethodInfo, L_2);
		return 0;
	}

IL_001d:
	{
		uint8_t L_3 = ___element;
		BinaryReader_t1546 * L_4 = ___reader;
		Object_t ** L_5 = &(__this->____lastObject_7);
		ObjectReader_ReadObject_m9347(__this, L_3, L_4, (&V_1), L_5, (&V_0), /*hidden argument*/&ObjectReader_ReadObject_m9347_MethodInfo);
		int64_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		int64_t L_7 = V_1;
		Object_t * L_8 = (__this->____lastObject_7);
		SerializationInfo_t708 * L_9 = V_0;
		ObjectReader_RegisterObject_m9352(__this, L_7, L_8, L_9, (((int64_t)0)), (MemberInfo_t *)NULL, (Int32U5BU5D_t109*)(Int32U5BU5D_t109*)NULL, /*hidden argument*/&ObjectReader_RegisterObject_m9352_MethodInfo);
		int64_t L_10 = V_1;
		__this->____lastObjectID_8 = L_10;
	}

IL_004b:
	{
		return 1;
	}
}
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.IO.BinaryReader)
extern "C" bool ObjectReader_ReadNextObject_m9345 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, MethodInfo* method)
{
	uint8_t V_0 = {0};
	SerializationInfo_t708 * V_1 = {0};
	int64_t V_2 = 0;
	{
		BinaryReader_t1546 * L_0 = ___reader;
		NullCheck(L_0);
		uint8_t L_1 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_0);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0024;
		}
	}
	{
		ObjectManager_t1743 * L_3 = (__this->____manager_4);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(&ObjectManager_DoFixups_m9378_MethodInfo, L_3);
		ObjectManager_t1743 * L_4 = (__this->____manager_4);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(&ObjectManager_RaiseDeserializationEvent_m9381_MethodInfo, L_4);
		return 0;
	}

IL_0024:
	{
		uint8_t L_5 = V_0;
		BinaryReader_t1546 * L_6 = ___reader;
		Object_t ** L_7 = &(__this->____lastObject_7);
		ObjectReader_ReadObject_m9347(__this, L_5, L_6, (&V_2), L_7, (&V_1), /*hidden argument*/&ObjectReader_ReadObject_m9347_MethodInfo);
		int64_t L_8 = V_2;
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		int64_t L_9 = V_2;
		Object_t * L_10 = (__this->____lastObject_7);
		SerializationInfo_t708 * L_11 = V_1;
		ObjectReader_RegisterObject_m9352(__this, L_9, L_10, L_11, (((int64_t)0)), (MemberInfo_t *)NULL, (Int32U5BU5D_t109*)(Int32U5BU5D_t109*)NULL, /*hidden argument*/&ObjectReader_RegisterObject_m9352_MethodInfo);
		int64_t L_12 = V_2;
		__this->____lastObjectID_8 = L_12;
	}

IL_0052:
	{
		return 1;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::get_CurrentObject()
extern "C" Object_t * ObjectReader_get_CurrentObject_m9346 (ObjectReader_t1744 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____lastObject_7);
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C" void ObjectReader_ReadObject_m9347 (ObjectReader_t1744 * __this, uint8_t ___element, BinaryReader_t1546 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t708 ** ___info, MethodInfo* method)
{
	uint8_t V_0 = {0};
	{
		uint8_t L_0 = ___element;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0077;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_009d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_00c3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_00d6;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 8)
		{
			goto IL_017c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 9)
		{
			goto IL_00ed;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 10)
		{
			goto IL_017c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 11)
		{
			goto IL_00fe;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 12)
		{
			goto IL_011c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 13)
		{
			goto IL_0134;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 14)
		{
			goto IL_014c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 15)
		{
			goto IL_015c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 16)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_017c;
	}

IL_0053:
	{
		BinaryReader_t1546 * L_2 = ___reader;
		int64_t* L_3 = ___objectId;
		Object_t ** L_4 = ___value;
		SerializationInfo_t708 ** L_5 = ___info;
		ObjectReader_ReadRefTypeObjectInstance_m9350(__this, L_2, L_3, L_4, L_5, /*hidden argument*/&ObjectReader_ReadRefTypeObjectInstance_m9350_MethodInfo);
		goto IL_0192;
	}

IL_0064:
	{
		BinaryReader_t1546 * L_6 = ___reader;
		int64_t* L_7 = ___objectId;
		Object_t ** L_8 = ___value;
		SerializationInfo_t708 ** L_9 = ___info;
		ObjectReader_ReadObjectInstance_m9349(__this, L_6, 1, 0, L_7, L_8, L_9, /*hidden argument*/&ObjectReader_ReadObjectInstance_m9349_MethodInfo);
		goto IL_0192;
	}

IL_0077:
	{
		BinaryReader_t1546 * L_10 = ___reader;
		int64_t* L_11 = ___objectId;
		Object_t ** L_12 = ___value;
		SerializationInfo_t708 ** L_13 = ___info;
		ObjectReader_ReadObjectInstance_m9349(__this, L_10, 0, 0, L_11, L_12, L_13, /*hidden argument*/&ObjectReader_ReadObjectInstance_m9349_MethodInfo);
		goto IL_0192;
	}

IL_008a:
	{
		BinaryReader_t1546 * L_14 = ___reader;
		int64_t* L_15 = ___objectId;
		Object_t ** L_16 = ___value;
		SerializationInfo_t708 ** L_17 = ___info;
		ObjectReader_ReadObjectInstance_m9349(__this, L_14, 1, 1, L_15, L_16, L_17, /*hidden argument*/&ObjectReader_ReadObjectInstance_m9349_MethodInfo);
		goto IL_0192;
	}

IL_009d:
	{
		BinaryReader_t1546 * L_18 = ___reader;
		int64_t* L_19 = ___objectId;
		Object_t ** L_20 = ___value;
		SerializationInfo_t708 ** L_21 = ___info;
		ObjectReader_ReadObjectInstance_m9349(__this, L_18, 0, 1, L_19, L_20, L_21, /*hidden argument*/&ObjectReader_ReadObjectInstance_m9349_MethodInfo);
		goto IL_0192;
	}

IL_00b0:
	{
		SerializationInfo_t708 ** L_22 = ___info;
		*((Object_t **)(L_22)) = (Object_t *)NULL;
		BinaryReader_t1546 * L_23 = ___reader;
		int64_t* L_24 = ___objectId;
		Object_t ** L_25 = ___value;
		ObjectReader_ReadStringIntance_m9353(__this, L_23, L_24, L_25, /*hidden argument*/&ObjectReader_ReadStringIntance_m9353_MethodInfo);
		goto IL_0192;
	}

IL_00c3:
	{
		SerializationInfo_t708 ** L_26 = ___info;
		*((Object_t **)(L_26)) = (Object_t *)NULL;
		BinaryReader_t1546 * L_27 = ___reader;
		int64_t* L_28 = ___objectId;
		Object_t ** L_29 = ___value;
		ObjectReader_ReadGenericArray_m9354(__this, L_27, L_28, L_29, /*hidden argument*/&ObjectReader_ReadGenericArray_m9354_MethodInfo);
		goto IL_0192;
	}

IL_00d6:
	{
		Object_t ** L_30 = ___value;
		BinaryReader_t1546 * L_31 = ___reader;
		Object_t * L_32 = ObjectReader_ReadBoxedPrimitiveTypeValue_m9355(__this, L_31, /*hidden argument*/&ObjectReader_ReadBoxedPrimitiveTypeValue_m9355_MethodInfo);
		*((Object_t **)(L_30)) = (Object_t *)L_32;
		int64_t* L_33 = ___objectId;
		*((int64_t*)(L_33)) = (int64_t)(((int64_t)0));
		SerializationInfo_t708 ** L_34 = ___info;
		*((Object_t **)(L_34)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_00ed:
	{
		Object_t ** L_35 = ___value;
		*((Object_t **)(L_35)) = (Object_t *)NULL;
		int64_t* L_36 = ___objectId;
		*((int64_t*)(L_36)) = (int64_t)(((int64_t)0));
		SerializationInfo_t708 ** L_37 = ___info;
		*((Object_t **)(L_37)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_00fe:
	{
		BinaryReader_t1546 * L_38 = ___reader;
		ObjectReader_ReadAssembly_m9348(__this, L_38, /*hidden argument*/&ObjectReader_ReadAssembly_m9348_MethodInfo);
		BinaryReader_t1546 * L_39 = ___reader;
		NullCheck(L_39);
		uint8_t L_40 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_39);
		BinaryReader_t1546 * L_41 = ___reader;
		int64_t* L_42 = ___objectId;
		Object_t ** L_43 = ___value;
		SerializationInfo_t708 ** L_44 = ___info;
		ObjectReader_ReadObject_m9347(__this, L_40, L_41, L_42, L_43, L_44, /*hidden argument*/&ObjectReader_ReadObject_m9347_MethodInfo);
		goto IL_0192;
	}

IL_011c:
	{
		Object_t ** L_45 = ___value;
		BinaryReader_t1546 * L_46 = ___reader;
		NullCheck(L_46);
		uint8_t L_47 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_46);
		ArrayNullFiller_t1742 * L_48 = (ArrayNullFiller_t1742 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayNullFiller_t1742_il2cpp_TypeInfo));
		ArrayNullFiller__ctor_m9340(L_48, L_47, /*hidden argument*/&ArrayNullFiller__ctor_m9340_MethodInfo);
		*((Object_t **)(L_45)) = (Object_t *)L_48;
		int64_t* L_49 = ___objectId;
		*((int64_t*)(L_49)) = (int64_t)(((int64_t)0));
		SerializationInfo_t708 ** L_50 = ___info;
		*((Object_t **)(L_50)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_0134:
	{
		Object_t ** L_51 = ___value;
		BinaryReader_t1546 * L_52 = ___reader;
		NullCheck(L_52);
		int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_52);
		ArrayNullFiller_t1742 * L_54 = (ArrayNullFiller_t1742 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayNullFiller_t1742_il2cpp_TypeInfo));
		ArrayNullFiller__ctor_m9340(L_54, L_53, /*hidden argument*/&ArrayNullFiller__ctor_m9340_MethodInfo);
		*((Object_t **)(L_51)) = (Object_t *)L_54;
		int64_t* L_55 = ___objectId;
		*((int64_t*)(L_55)) = (int64_t)(((int64_t)0));
		SerializationInfo_t708 ** L_56 = ___info;
		*((Object_t **)(L_56)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_014c:
	{
		BinaryReader_t1546 * L_57 = ___reader;
		int64_t* L_58 = ___objectId;
		Object_t ** L_59 = ___value;
		ObjectReader_ReadArrayOfPrimitiveType_m9356(__this, L_57, L_58, L_59, /*hidden argument*/&ObjectReader_ReadArrayOfPrimitiveType_m9356_MethodInfo);
		SerializationInfo_t708 ** L_60 = ___info;
		*((Object_t **)(L_60)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_015c:
	{
		BinaryReader_t1546 * L_61 = ___reader;
		int64_t* L_62 = ___objectId;
		Object_t ** L_63 = ___value;
		ObjectReader_ReadArrayOfObject_m9358(__this, L_61, L_62, L_63, /*hidden argument*/&ObjectReader_ReadArrayOfObject_m9358_MethodInfo);
		SerializationInfo_t708 ** L_64 = ___info;
		*((Object_t **)(L_64)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_016c:
	{
		BinaryReader_t1546 * L_65 = ___reader;
		int64_t* L_66 = ___objectId;
		Object_t ** L_67 = ___value;
		ObjectReader_ReadArrayOfString_m9359(__this, L_65, L_66, L_67, /*hidden argument*/&ObjectReader_ReadArrayOfString_m9359_MethodInfo);
		SerializationInfo_t708 ** L_68 = ___info;
		*((Object_t **)(L_68)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_017c:
	{
		uint8_t L_69 = ___element;
		int32_t L_70 = L_69;
		Object_t * L_71 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_70);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_72 = String_Concat_m1810(NULL /*static, unused*/, (String_t*) &_stringLiteral1814, L_71, /*hidden argument*/&String_Concat_m1810_MethodInfo);
		SerializationException_t1190 * L_73 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_73, L_72, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_73);
	}

IL_0192:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadAssembly(System.IO.BinaryReader)
extern "C" void ObjectReader_ReadAssembly_m9348 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, MethodInfo* method)
{
	int64_t V_0 = 0;
	String_t* V_1 = {0};
	{
		BinaryReader_t1546 * L_0 = ___reader;
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_0);
		V_0 = (((uint64_t)L_1));
		BinaryReader_t1546 * L_2 = ___reader;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&BinaryReader_ReadString_m8259_MethodInfo, L_2);
		V_1 = L_3;
		Hashtable_t1007 * L_4 = (__this->____registeredAssemblies_5);
		int64_t L_5 = V_0;
		int64_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_6);
		String_t* L_8 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_set_Item_m5432_MethodInfo, L_4, L_7, L_8);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectInstance(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C" void ObjectReader_ReadObjectInstance_m9349 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t708 ** ___info, MethodInfo* method)
{
	TypeMetadata_t1741 * V_0 = {0};
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t1546 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		BinaryReader_t1546 * L_3 = ___reader;
		bool L_4 = ___isRuntimeObject;
		bool L_5 = ___hasTypeInfo;
		TypeMetadata_t1741 * L_6 = ObjectReader_ReadTypeMetadata_m9361(__this, L_3, L_4, L_5, /*hidden argument*/&ObjectReader_ReadTypeMetadata_m9361_MethodInfo);
		V_0 = L_6;
		BinaryReader_t1546 * L_7 = ___reader;
		TypeMetadata_t1741 * L_8 = V_0;
		int64_t* L_9 = ___objectId;
		Object_t ** L_10 = ___value;
		SerializationInfo_t708 ** L_11 = ___info;
		ObjectReader_ReadObjectContent_m9351(__this, L_7, L_8, (*((int64_t*)L_9)), L_10, L_11, /*hidden argument*/&ObjectReader_ReadObjectContent_m9351_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadRefTypeObjectInstance(System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C" void ObjectReader_ReadRefTypeObjectInstance_m9350 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t708 ** ___info, MethodInfo* method)
{
	int64_t V_0 = 0;
	Object_t * V_1 = {0};
	TypeMetadata_t1741 * V_2 = {0};
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t1546 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		BinaryReader_t1546 * L_3 = ___reader;
		NullCheck(L_3);
		uint32_t L_4 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_3);
		V_0 = (((uint64_t)L_4));
		ObjectManager_t1743 * L_5 = (__this->____manager_4);
		int64_t L_6 = V_0;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, int64_t >::Invoke(&ObjectManager_GetObject_m9380_MethodInfo, L_5, L_6);
		V_1 = L_7;
		Object_t * L_8 = V_1;
		if (L_8)
		{
			goto IL_002c;
		}
	}
	{
		SerializationException_t1190 * L_9 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_9, (String_t*) &_stringLiteral1815, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_002c:
	{
		Hashtable_t1007 * L_10 = (__this->____typeMetadataCache_6);
		Object_t * L_11 = V_1;
		NullCheck(L_11);
		Type_t * L_12 = Object_GetType_m1903(L_11, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_10);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m5249_MethodInfo, L_10, L_12);
		V_2 = ((TypeMetadata_t1741 *)Castclass(L_13, InitializedTypeInfo(&TypeMetadata_t1741_il2cpp_TypeInfo)));
		BinaryReader_t1546 * L_14 = ___reader;
		TypeMetadata_t1741 * L_15 = V_2;
		int64_t* L_16 = ___objectId;
		Object_t ** L_17 = ___value;
		SerializationInfo_t708 ** L_18 = ___info;
		ObjectReader_ReadObjectContent_m9351(__this, L_14, L_15, (*((int64_t*)L_16)), L_17, L_18, /*hidden argument*/&ObjectReader_ReadObjectContent_m9351_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectContent(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata,System.Int64,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C" void ObjectReader_ReadObjectContent_m9351 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, TypeMetadata_t1741 * ___metadata, int64_t ___objectId, Object_t ** ___objectInstance, SerializationInfo_t708 ** ___info, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializationInfo_t708 ** G_B5_0 = {0};
	SerializationInfo_t708 ** G_B4_0 = {0};
	SerializationInfo_t708 * G_B6_0 = {0};
	SerializationInfo_t708 ** G_B6_1 = {0};
	{
		int32_t L_0 = (__this->____filterLevel_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0019;
		}
	}
	{
		Object_t ** L_1 = ___objectInstance;
		TypeMetadata_t1741 * L_2 = ___metadata;
		NullCheck(L_2);
		Type_t * L_3 = (L_2->___Type_0);
		Object_t * L_4 = FormatterServices_GetSafeUninitializedObject_m9376(NULL /*static, unused*/, L_3, /*hidden argument*/&FormatterServices_GetSafeUninitializedObject_m9376_MethodInfo);
		*((Object_t **)(L_1)) = (Object_t *)L_4;
		goto IL_0027;
	}

IL_0019:
	{
		Object_t ** L_5 = ___objectInstance;
		TypeMetadata_t1741 * L_6 = ___metadata;
		NullCheck(L_6);
		Type_t * L_7 = (L_6->___Type_0);
		Object_t * L_8 = FormatterServices_GetUninitializedObject_m9375(NULL /*static, unused*/, L_7, /*hidden argument*/&FormatterServices_GetUninitializedObject_m9375_MethodInfo);
		*((Object_t **)(L_5)) = (Object_t *)L_8;
	}

IL_0027:
	{
		ObjectManager_t1743 * L_9 = (__this->____manager_4);
		Object_t ** L_10 = ___objectInstance;
		NullCheck(L_9);
		ObjectManager_RaiseOnDeserializingEvent_m9382(L_9, (*((Object_t **)L_10)), /*hidden argument*/&ObjectManager_RaiseOnDeserializingEvent_m9382_MethodInfo);
		SerializationInfo_t708 ** L_11 = ___info;
		TypeMetadata_t1741 * L_12 = ___metadata;
		NullCheck(L_12);
		bool L_13 = (L_12->___NeedsSerializationInfo_5);
		G_B4_0 = L_11;
		if (!L_13)
		{
			G_B5_0 = L_11;
			goto IL_0051;
		}
	}
	{
		TypeMetadata_t1741 * L_14 = ___metadata;
		NullCheck(L_14);
		Type_t * L_15 = (L_14->___Type_0);
		FormatterConverter_t1748 * L_16 = (FormatterConverter_t1748 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatterConverter_t1748_il2cpp_TypeInfo));
		FormatterConverter__ctor_m9368(L_16, /*hidden argument*/&FormatterConverter__ctor_m9368_MethodInfo);
		SerializationInfo_t708 * L_17 = (SerializationInfo_t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationInfo_t708_il2cpp_TypeInfo));
		SerializationInfo__ctor_m9432(L_17, L_15, L_16, /*hidden argument*/&SerializationInfo__ctor_m9432_MethodInfo);
		G_B6_0 = L_17;
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0051:
	{
		G_B6_0 = ((SerializationInfo_t708 *)(NULL));
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		*((Object_t **)(G_B6_1)) = (Object_t *)G_B6_0;
		TypeMetadata_t1741 * L_18 = ___metadata;
		NullCheck(L_18);
		StringU5BU5D_t87* L_19 = (L_18->___MemberNames_2);
		if (!L_19)
		{
			goto IL_008e;
		}
	}
	{
		V_0 = 0;
		goto IL_0083;
	}

IL_005f:
	{
		BinaryReader_t1546 * L_20 = ___reader;
		Object_t ** L_21 = ___objectInstance;
		int64_t L_22 = ___objectId;
		SerializationInfo_t708 ** L_23 = ___info;
		TypeMetadata_t1741 * L_24 = ___metadata;
		NullCheck(L_24);
		TypeU5BU5D_t658* L_25 = (L_24->___MemberTypes_1);
		int32_t L_26 = V_0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = L_26;
		TypeMetadata_t1741 * L_28 = ___metadata;
		NullCheck(L_28);
		StringU5BU5D_t87* L_29 = (L_28->___MemberNames_2);
		int32_t L_30 = V_0;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		ObjectReader_ReadValue_m9362(__this, L_20, (*((Object_t **)L_21)), L_22, (*((SerializationInfo_t708 **)L_23)), (*(Type_t **)(Type_t **)SZArrayLdElema(L_25, L_27)), (*(String_t**)(String_t**)SZArrayLdElema(L_29, L_31)), (MemberInfo_t *)NULL, (Int32U5BU5D_t109*)(Int32U5BU5D_t109*)NULL, /*hidden argument*/&ObjectReader_ReadValue_m9362_MethodInfo);
		int32_t L_32 = V_0;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_33 = V_0;
		TypeMetadata_t1741 * L_34 = ___metadata;
		NullCheck(L_34);
		int32_t L_35 = (L_34->___FieldCount_4);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_005f;
		}
	}
	{
		goto IL_00cb;
	}

IL_008e:
	{
		V_1 = 0;
		goto IL_00c2;
	}

IL_0092:
	{
		BinaryReader_t1546 * L_36 = ___reader;
		Object_t ** L_37 = ___objectInstance;
		int64_t L_38 = ___objectId;
		SerializationInfo_t708 ** L_39 = ___info;
		TypeMetadata_t1741 * L_40 = ___metadata;
		NullCheck(L_40);
		TypeU5BU5D_t658* L_41 = (L_40->___MemberTypes_1);
		int32_t L_42 = V_1;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = L_42;
		TypeMetadata_t1741 * L_44 = ___metadata;
		NullCheck(L_44);
		MemberInfoU5BU5D_t1740* L_45 = (L_44->___MemberInfos_3);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		NullCheck((*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_45, L_47)));
		String_t* L_48 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3952_MethodInfo, (*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_45, L_47)));
		TypeMetadata_t1741 * L_49 = ___metadata;
		NullCheck(L_49);
		MemberInfoU5BU5D_t1740* L_50 = (L_49->___MemberInfos_3);
		int32_t L_51 = V_1;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = L_51;
		ObjectReader_ReadValue_m9362(__this, L_36, (*((Object_t **)L_37)), L_38, (*((SerializationInfo_t708 **)L_39)), (*(Type_t **)(Type_t **)SZArrayLdElema(L_41, L_43)), L_48, (*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_50, L_52)), (Int32U5BU5D_t109*)(Int32U5BU5D_t109*)NULL, /*hidden argument*/&ObjectReader_ReadValue_m9362_MethodInfo);
		int32_t L_53 = V_1;
		V_1 = ((int32_t)((int32_t)L_53+(int32_t)1));
	}

IL_00c2:
	{
		int32_t L_54 = V_1;
		TypeMetadata_t1741 * L_55 = ___metadata;
		NullCheck(L_55);
		int32_t L_56 = (L_55->___FieldCount_4);
		if ((((int32_t)L_54) < ((int32_t)L_56)))
		{
			goto IL_0092;
		}
	}

IL_00cb:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RegisterObject(System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_RegisterObject_m9352 (ObjectReader_t1744 * __this, int64_t ___objectId, Object_t * ___objectInstance, SerializationInfo_t708 * ___info, int64_t ___parentObjectId, MemberInfo_t * ___parentObjectMemeber, Int32U5BU5D_t109* ___indices, MethodInfo* method)
{
	static bool ObjectReader_RegisterObject_m9352_init;
	if (!ObjectReader_RegisterObject_m9352_init)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		ObjectReader_RegisterObject_m9352_init = true;
	}
	{
		int64_t L_0 = ___parentObjectId;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		___indices = (Int32U5BU5D_t109*)NULL;
	}

IL_0009:
	{
		Object_t * L_1 = ___objectInstance;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m1903(L_1, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m7271_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		int64_t L_4 = ___parentObjectId;
		if (L_4)
		{
			goto IL_002e;
		}
	}

IL_001a:
	{
		ObjectManager_t1743 * L_5 = (__this->____manager_4);
		Object_t * L_6 = ___objectInstance;
		int64_t L_7 = ___objectId;
		SerializationInfo_t708 * L_8 = ___info;
		NullCheck(L_5);
		ObjectManager_RegisterObject_m9390(L_5, L_6, L_7, L_8, (((int64_t)0)), (MemberInfo_t *)NULL, (Int32U5BU5D_t109*)(Int32U5BU5D_t109*)NULL, /*hidden argument*/&ObjectManager_RegisterObject_m9390_MethodInfo);
		goto IL_0056;
	}

IL_002e:
	{
		Int32U5BU5D_t109* L_9 = ___indices;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		Int32U5BU5D_t109* L_10 = ___indices;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Array_Clone_m5260_MethodInfo, L_10);
		___indices = ((Int32U5BU5D_t109*)Castclass(L_11, Int32U5BU5D_t109_il2cpp_TypeInfo_var));
	}

IL_0042:
	{
		ObjectManager_t1743 * L_12 = (__this->____manager_4);
		Object_t * L_13 = ___objectInstance;
		int64_t L_14 = ___objectId;
		SerializationInfo_t708 * L_15 = ___info;
		int64_t L_16 = ___parentObjectId;
		MemberInfo_t * L_17 = ___parentObjectMemeber;
		Int32U5BU5D_t109* L_18 = ___indices;
		NullCheck(L_12);
		ObjectManager_RegisterObject_m9390(L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/&ObjectManager_RegisterObject_m9390_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadStringIntance(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C" void ObjectReader_ReadStringIntance_m9353 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, int64_t* ___objectId, Object_t ** ___value, MethodInfo* method)
{
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t1546 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		Object_t ** L_3 = ___value;
		BinaryReader_t1546 * L_4 = ___reader;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&BinaryReader_ReadString_m8259_MethodInfo, L_4);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadGenericArray(System.IO.BinaryReader,System.Int64&,System.Object&)
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadGenericArray_m9354 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method)
{
	static bool ObjectReader_ReadGenericArray_m9354_init;
	if (!ObjectReader_ReadGenericArray_m9354_init)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		ObjectReader_ReadGenericArray_m9354_init = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Int32U5BU5D_t109* V_2 = {0};
	int32_t V_3 = 0;
	uint8_t V_4 = {0};
	Type_t * V_5 = {0};
	Array_t * V_6 = {0};
	Int32U5BU5D_t109* V_7 = {0};
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t1546 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		BinaryReader_t1546 * L_3 = ___reader;
		NullCheck(L_3);
		VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_3);
		BinaryReader_t1546 * L_4 = ___reader;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_4);
		V_0 = L_5;
		V_1 = 0;
		int32_t L_6 = V_0;
		V_2 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, L_6));
		V_3 = 0;
		goto IL_0038;
	}

IL_0024:
	{
		Int32U5BU5D_t109* L_7 = V_2;
		int32_t L_8 = V_3;
		BinaryReader_t1546 * L_9 = ___reader;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)) = (int32_t)L_10;
		Int32U5BU5D_t109* L_11 = V_2;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_13)))
		{
			goto IL_0034;
		}
	}
	{
		V_1 = 1;
	}

IL_0034:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0038:
	{
		int32_t L_15 = V_3;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0024;
		}
	}
	{
		BinaryReader_t1546 * L_17 = ___reader;
		NullCheck(L_17);
		uint8_t L_18 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_17);
		V_4 = L_18;
		BinaryReader_t1546 * L_19 = ___reader;
		uint8_t L_20 = V_4;
		Type_t * L_21 = ObjectReader_ReadType_m9366(__this, L_19, L_20, /*hidden argument*/&ObjectReader_ReadType_m9366_MethodInfo);
		V_5 = L_21;
		Type_t * L_22 = V_5;
		Int32U5BU5D_t109* L_23 = V_2;
		Array_t * L_24 = Array_CreateInstance_m7208(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/&Array_CreateInstance_m7208_MethodInfo);
		V_6 = L_24;
		bool L_25 = V_1;
		if (!L_25)
		{
			goto IL_0061;
		}
	}
	{
		Object_t ** L_26 = ___val;
		Array_t * L_27 = V_6;
		*((Object_t **)(L_26)) = (Object_t *)L_27;
		return;
	}

IL_0061:
	{
		int32_t L_28 = V_0;
		V_7 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, L_28));
		int32_t L_29 = V_0;
		V_8 = ((int32_t)((int32_t)L_29-(int32_t)1));
		goto IL_0084;
	}

IL_0070:
	{
		Int32U5BU5D_t109* L_30 = V_7;
		int32_t L_31 = V_8;
		Array_t * L_32 = V_6;
		int32_t L_33 = V_8;
		NullCheck(L_32);
		int32_t L_34 = Array_GetLowerBound_m7182(L_32, L_33, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)L_34;
		int32_t L_35 = V_8;
		V_8 = ((int32_t)((int32_t)L_35-(int32_t)1));
	}

IL_0084:
	{
		int32_t L_36 = V_8;
		if ((((int32_t)L_36) >= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		V_9 = 0;
		goto IL_00f0;
	}

IL_008e:
	{
		BinaryReader_t1546 * L_37 = ___reader;
		Array_t * L_38 = V_6;
		int64_t* L_39 = ___objectId;
		Type_t * L_40 = V_5;
		Int32U5BU5D_t109* L_41 = V_7;
		ObjectReader_ReadValue_m9362(__this, L_37, L_38, (*((int64_t*)L_39)), (SerializationInfo_t708 *)NULL, L_40, (String_t*)NULL, (MemberInfo_t *)NULL, L_41, /*hidden argument*/&ObjectReader_ReadValue_m9362_MethodInfo);
		Array_t * L_42 = V_6;
		NullCheck(L_42);
		int32_t L_43 = Array_get_Rank_m5237(L_42, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		V_10 = ((int32_t)((int32_t)L_43-(int32_t)1));
		goto IL_00eb;
	}

IL_00ad:
	{
		Int32U5BU5D_t109* L_44 = V_7;
		int32_t L_45 = V_10;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t* L_46 = ((int32_t*)(int32_t*)SZArrayLdElema(L_44, L_45));
		*((int32_t*)(L_46)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)1));
		Int32U5BU5D_t109* L_47 = V_7;
		int32_t L_48 = V_10;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		int32_t L_49 = L_48;
		Array_t * L_50 = V_6;
		int32_t L_51 = V_10;
		NullCheck(L_50);
		int32_t L_52 = Array_GetUpperBound_m7193(L_50, L_51, /*hidden argument*/&Array_GetUpperBound_m7193_MethodInfo);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_47, L_49))) <= ((int32_t)L_52)))
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_53 = V_10;
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_00e0;
		}
	}
	{
		Int32U5BU5D_t109* L_54 = V_7;
		int32_t L_55 = V_10;
		Array_t * L_56 = V_6;
		int32_t L_57 = V_10;
		NullCheck(L_56);
		int32_t L_58 = Array_GetLowerBound_m7182(L_56, L_57, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_54, L_55)) = (int32_t)L_58;
		goto IL_00e5;
	}

IL_00e0:
	{
		V_9 = 1;
	}

IL_00e3:
	{
		goto IL_00f0;
	}

IL_00e5:
	{
		int32_t L_59 = V_10;
		V_10 = ((int32_t)((int32_t)L_59-(int32_t)1));
	}

IL_00eb:
	{
		int32_t L_60 = V_10;
		if ((((int32_t)L_60) >= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}

IL_00f0:
	{
		bool L_61 = V_9;
		if (!L_61)
		{
			goto IL_008e;
		}
	}
	{
		Object_t ** L_62 = ___val;
		Array_t * L_63 = V_6;
		*((Object_t **)(L_62)) = (Object_t *)L_63;
		return;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadBoxedPrimitiveTypeValue(System.IO.BinaryReader)
extern "C" Object_t * ObjectReader_ReadBoxedPrimitiveTypeValue_m9355 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, MethodInfo* method)
{
	Type_t * V_0 = {0};
	{
		BinaryReader_t1546 * L_0 = ___reader;
		Type_t * L_1 = ObjectReader_ReadType_m9366(__this, L_0, 0, /*hidden argument*/&ObjectReader_ReadType_m9366_MethodInfo);
		V_0 = L_1;
		BinaryReader_t1546 * L_2 = ___reader;
		Type_t * L_3 = V_0;
		Object_t * L_4 = ObjectReader_ReadPrimitiveTypeValue_m9367(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&ObjectReader_ReadPrimitiveTypeValue_m9367_MethodInfo);
		return L_4;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfPrimitiveType(System.IO.BinaryReader,System.Int64&,System.Object&)
extern TypeInfo* BooleanU5BU5D_t1055_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t268_il2cpp_TypeInfo_var;
extern TypeInfo* DateTimeU5BU5D_t1965_il2cpp_TypeInfo_var;
extern TypeInfo* DecimalU5BU5D_t1966_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Int16U5BU5D_t1955_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern TypeInfo* Int64U5BU5D_t1406_il2cpp_TypeInfo_var;
extern TypeInfo* SByteU5BU5D_t1838_il2cpp_TypeInfo_var;
extern TypeInfo* SingleU5BU5D_t47_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16U5BU5D_t1047_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32U5BU5D_t1257_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64U5BU5D_t1795_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpanU5BU5D_t1967_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadArrayOfPrimitiveType_m9356 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method)
{
	static bool ObjectReader_ReadArrayOfPrimitiveType_m9356_init;
	if (!ObjectReader_ReadArrayOfPrimitiveType_m9356_init)
	{
		BooleanU5BU5D_t1055_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&BooleanU5BU5D_t1055_0_0_0);
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t66_0_0_0);
		CharU5BU5D_t268_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t268_0_0_0);
		DateTimeU5BU5D_t1965_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DateTimeU5BU5D_t1965_0_0_0);
		DecimalU5BU5D_t1966_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DecimalU5BU5D_t1966_0_0_0);
		DoubleU5BU5D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DoubleU5BU5D_t48_0_0_0);
		Int16U5BU5D_t1955_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int16U5BU5D_t1955_0_0_0);
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		Int64U5BU5D_t1406_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int64U5BU5D_t1406_0_0_0);
		SByteU5BU5D_t1838_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&SByteU5BU5D_t1838_0_0_0);
		SingleU5BU5D_t47_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&SingleU5BU5D_t47_0_0_0);
		UInt16U5BU5D_t1047_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UInt16U5BU5D_t1047_0_0_0);
		UInt32U5BU5D_t1257_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UInt32U5BU5D_t1257_0_0_0);
		UInt64U5BU5D_t1795_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UInt64U5BU5D_t1795_0_0_0);
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		TimeSpanU5BU5D_t1967_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TimeSpanU5BU5D_t1967_0_0_0);
		ObjectReader_ReadArrayOfPrimitiveType_m9356_init = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = {0};
	BooleanU5BU5D_t1055* V_2 = {0};
	int32_t V_3 = 0;
	ByteU5BU5D_t66* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	CharU5BU5D_t268* V_7 = {0};
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	DateTimeU5BU5D_t1965* V_10 = {0};
	int32_t V_11 = 0;
	DecimalU5BU5D_t1966* V_12 = {0};
	int32_t V_13 = 0;
	DoubleU5BU5D_t48* V_14 = {0};
	int32_t V_15 = 0;
	Int16U5BU5D_t1955* V_16 = {0};
	int32_t V_17 = 0;
	Int32U5BU5D_t109* V_18 = {0};
	int32_t V_19 = 0;
	Int64U5BU5D_t1406* V_20 = {0};
	int32_t V_21 = 0;
	SByteU5BU5D_t1838* V_22 = {0};
	int32_t V_23 = 0;
	SingleU5BU5D_t47* V_24 = {0};
	int32_t V_25 = 0;
	UInt16U5BU5D_t1047* V_26 = {0};
	int32_t V_27 = 0;
	UInt32U5BU5D_t1257* V_28 = {0};
	int32_t V_29 = 0;
	UInt64U5BU5D_t1795* V_30 = {0};
	int32_t V_31 = 0;
	StringU5BU5D_t87* V_32 = {0};
	int32_t V_33 = 0;
	TimeSpanU5BU5D_t1967* V_34 = {0};
	int32_t V_35 = 0;
	int32_t V_36 = {0};
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t1546 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		BinaryReader_t1546 * L_3 = ___reader;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_3);
		V_0 = L_4;
		BinaryReader_t1546 * L_5 = ___reader;
		Type_t * L_6 = ObjectReader_ReadType_m9366(__this, L_5, 0, /*hidden argument*/&ObjectReader_ReadType_m9366_MethodInfo);
		V_1 = L_6;
		Type_t * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_8 = Type_GetTypeCode_m7282(NULL /*static, unused*/, L_7, /*hidden argument*/&Type_GetTypeCode_m7282_MethodInfo);
		V_36 = L_8;
		int32_t L_9 = V_36;
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 0)
		{
			goto IL_006f;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 1)
		{
			goto IL_00cb;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 2)
		{
			goto IL_0262;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 3)
		{
			goto IL_0093;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 4)
		{
			goto IL_01ae;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 5)
		{
			goto IL_02da;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 6)
		{
			goto IL_01ea;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 7)
		{
			goto IL_0316;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 8)
		{
			goto IL_0226;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 9)
		{
			goto IL_0352;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 10)
		{
			goto IL_029e;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 11)
		{
			goto IL_0172;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 12)
		{
			goto IL_013d;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 13)
		{
			goto IL_0103;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 14)
		{
			goto IL_03b7;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 15)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03b7;
	}

IL_006f:
	{
		int32_t L_10 = V_0;
		V_2 = ((BooleanU5BU5D_t1055*)SZArrayNew(BooleanU5BU5D_t1055_il2cpp_TypeInfo_var, L_10));
		V_3 = 0;
		goto IL_0087;
	}

IL_007a:
	{
		BooleanU5BU5D_t1055* L_11 = V_2;
		int32_t L_12 = V_3;
		BinaryReader_t1546 * L_13 = ___reader;
		NullCheck(L_13);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&BinaryReader_ReadBoolean_m8250_MethodInfo, L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		*((bool*)(bool*)SZArrayLdElema(L_11, L_12)) = (bool)L_14;
		int32_t L_15 = V_3;
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0087:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_007a;
		}
	}
	{
		Object_t ** L_18 = ___val;
		BooleanU5BU5D_t1055* L_19 = V_2;
		*((Object_t **)(L_18)) = (Object_t *)L_19;
		goto IL_0413;
	}

IL_0093:
	{
		int32_t L_20 = V_0;
		V_4 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, L_20));
		V_5 = 0;
		goto IL_00bd;
	}

IL_00a0:
	{
		BinaryReader_t1546 * L_21 = ___reader;
		ByteU5BU5D_t66* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = V_0;
		int32_t L_25 = V_5;
		NullCheck(L_21);
		int32_t L_26 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t66*, int32_t, int32_t >::Invoke(&BinaryReader_Read_m8246_MethodInfo, L_21, L_22, L_23, ((int32_t)((int32_t)L_24-(int32_t)L_25)));
		V_6 = L_26;
		int32_t L_27 = V_6;
		if (L_27)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00c2;
	}

IL_00b6:
	{
		int32_t L_28 = V_5;
		int32_t L_29 = V_6;
		V_5 = ((int32_t)((int32_t)L_28+(int32_t)L_29));
	}

IL_00bd:
	{
		int32_t L_30 = V_5;
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_00a0;
		}
	}

IL_00c2:
	{
		Object_t ** L_32 = ___val;
		ByteU5BU5D_t66* L_33 = V_4;
		*((Object_t **)(L_32)) = (Object_t *)L_33;
		goto IL_0413;
	}

IL_00cb:
	{
		int32_t L_34 = V_0;
		V_7 = ((CharU5BU5D_t268*)SZArrayNew(CharU5BU5D_t268_il2cpp_TypeInfo_var, L_34));
		V_8 = 0;
		goto IL_00f5;
	}

IL_00d8:
	{
		BinaryReader_t1546 * L_35 = ___reader;
		CharU5BU5D_t268* L_36 = V_7;
		int32_t L_37 = V_8;
		int32_t L_38 = V_0;
		int32_t L_39 = V_8;
		NullCheck(L_35);
		int32_t L_40 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t268*, int32_t, int32_t >::Invoke(&BinaryReader_Read_m8247_MethodInfo, L_35, L_36, L_37, ((int32_t)((int32_t)L_38-(int32_t)L_39)));
		V_9 = L_40;
		int32_t L_41 = V_9;
		if (L_41)
		{
			goto IL_00ee;
		}
	}
	{
		goto IL_00fa;
	}

IL_00ee:
	{
		int32_t L_42 = V_8;
		int32_t L_43 = V_9;
		V_8 = ((int32_t)((int32_t)L_42+(int32_t)L_43));
	}

IL_00f5:
	{
		int32_t L_44 = V_8;
		int32_t L_45 = V_0;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_00d8;
		}
	}

IL_00fa:
	{
		Object_t ** L_46 = ___val;
		CharU5BU5D_t268* L_47 = V_7;
		*((Object_t **)(L_46)) = (Object_t *)L_47;
		goto IL_0413;
	}

IL_0103:
	{
		int32_t L_48 = V_0;
		V_10 = ((DateTimeU5BU5D_t1965*)SZArrayNew(DateTimeU5BU5D_t1965_il2cpp_TypeInfo_var, L_48));
		V_11 = 0;
		goto IL_012f;
	}

IL_0110:
	{
		DateTimeU5BU5D_t1965* L_49 = V_10;
		int32_t L_50 = V_11;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		BinaryReader_t1546 * L_51 = ___reader;
		NullCheck(L_51);
		int64_t L_52 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&BinaryReader_ReadInt64_m8257_MethodInfo, L_51);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t524_il2cpp_TypeInfo));
		DateTime_t524  L_53 = DateTime_FromBinary_m10435(NULL /*static, unused*/, L_52, /*hidden argument*/&DateTime_FromBinary_m10435_MethodInfo);
		*((DateTime_t524 *)(DateTime_t524 *)SZArrayLdElema(L_49, L_50)) = L_53;
		int32_t L_54 = V_11;
		V_11 = ((int32_t)((int32_t)L_54+(int32_t)1));
	}

IL_012f:
	{
		int32_t L_55 = V_11;
		int32_t L_56 = V_0;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0110;
		}
	}
	{
		Object_t ** L_57 = ___val;
		DateTimeU5BU5D_t1965* L_58 = V_10;
		*((Object_t **)(L_57)) = (Object_t *)L_58;
		goto IL_0413;
	}

IL_013d:
	{
		int32_t L_59 = V_0;
		V_12 = ((DecimalU5BU5D_t1966*)SZArrayNew(DecimalU5BU5D_t1966_il2cpp_TypeInfo_var, L_59));
		V_13 = 0;
		goto IL_0164;
	}

IL_014a:
	{
		DecimalU5BU5D_t1966* L_60 = V_12;
		int32_t L_61 = V_13;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		BinaryReader_t1546 * L_62 = ___reader;
		NullCheck(L_62);
		Decimal_t763  L_63 = (Decimal_t763 )VirtFuncInvoker0< Decimal_t763  >::Invoke(&BinaryReader_ReadDecimal_m8253_MethodInfo, L_62);
		*((Decimal_t763 *)(Decimal_t763 *)SZArrayLdElema(L_60, L_61)) = L_63;
		int32_t L_64 = V_13;
		V_13 = ((int32_t)((int32_t)L_64+(int32_t)1));
	}

IL_0164:
	{
		int32_t L_65 = V_13;
		int32_t L_66 = V_0;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_014a;
		}
	}
	{
		Object_t ** L_67 = ___val;
		DecimalU5BU5D_t1966* L_68 = V_12;
		*((Object_t **)(L_67)) = (Object_t *)L_68;
		goto IL_0413;
	}

IL_0172:
	{
		int32_t L_69 = V_0;
		V_14 = ((DoubleU5BU5D_t48*)SZArrayNew(DoubleU5BU5D_t48_il2cpp_TypeInfo_var, L_69));
		int32_t L_70 = V_0;
		if ((((int32_t)L_70) <= ((int32_t)2)))
		{
			goto IL_018a;
		}
	}
	{
		BinaryReader_t1546 * L_71 = ___reader;
		DoubleU5BU5D_t48* L_72 = V_14;
		ObjectReader_BlockRead_m9357(__this, L_71, (Array_t *)(Array_t *)L_72, 8, /*hidden argument*/&ObjectReader_BlockRead_m9357_MethodInfo);
		goto IL_01a5;
	}

IL_018a:
	{
		V_15 = 0;
		goto IL_01a0;
	}

IL_018f:
	{
		DoubleU5BU5D_t48* L_73 = V_14;
		int32_t L_74 = V_15;
		BinaryReader_t1546 * L_75 = ___reader;
		NullCheck(L_75);
		double L_76 = (double)VirtFuncInvoker0< double >::Invoke(&BinaryReader_ReadDouble_m8254_MethodInfo, L_75);
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, L_74);
		*((double*)(double*)SZArrayLdElema(L_73, L_74)) = (double)L_76;
		int32_t L_77 = V_15;
		V_15 = ((int32_t)((int32_t)L_77+(int32_t)1));
	}

IL_01a0:
	{
		int32_t L_78 = V_15;
		int32_t L_79 = V_0;
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_018f;
		}
	}

IL_01a5:
	{
		Object_t ** L_80 = ___val;
		DoubleU5BU5D_t48* L_81 = V_14;
		*((Object_t **)(L_80)) = (Object_t *)L_81;
		goto IL_0413;
	}

IL_01ae:
	{
		int32_t L_82 = V_0;
		V_16 = ((Int16U5BU5D_t1955*)SZArrayNew(Int16U5BU5D_t1955_il2cpp_TypeInfo_var, L_82));
		int32_t L_83 = V_0;
		if ((((int32_t)L_83) <= ((int32_t)2)))
		{
			goto IL_01c6;
		}
	}
	{
		BinaryReader_t1546 * L_84 = ___reader;
		Int16U5BU5D_t1955* L_85 = V_16;
		ObjectReader_BlockRead_m9357(__this, L_84, (Array_t *)(Array_t *)L_85, 2, /*hidden argument*/&ObjectReader_BlockRead_m9357_MethodInfo);
		goto IL_01e1;
	}

IL_01c6:
	{
		V_17 = 0;
		goto IL_01dc;
	}

IL_01cb:
	{
		Int16U5BU5D_t1955* L_86 = V_16;
		int32_t L_87 = V_17;
		BinaryReader_t1546 * L_88 = ___reader;
		NullCheck(L_88);
		int16_t L_89 = (int16_t)VirtFuncInvoker0< int16_t >::Invoke(&BinaryReader_ReadInt16_m8255_MethodInfo, L_88);
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, L_87);
		*((int16_t*)(int16_t*)SZArrayLdElema(L_86, L_87)) = (int16_t)L_89;
		int32_t L_90 = V_17;
		V_17 = ((int32_t)((int32_t)L_90+(int32_t)1));
	}

IL_01dc:
	{
		int32_t L_91 = V_17;
		int32_t L_92 = V_0;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_01cb;
		}
	}

IL_01e1:
	{
		Object_t ** L_93 = ___val;
		Int16U5BU5D_t1955* L_94 = V_16;
		*((Object_t **)(L_93)) = (Object_t *)L_94;
		goto IL_0413;
	}

IL_01ea:
	{
		int32_t L_95 = V_0;
		V_18 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, L_95));
		int32_t L_96 = V_0;
		if ((((int32_t)L_96) <= ((int32_t)2)))
		{
			goto IL_0202;
		}
	}
	{
		BinaryReader_t1546 * L_97 = ___reader;
		Int32U5BU5D_t109* L_98 = V_18;
		ObjectReader_BlockRead_m9357(__this, L_97, (Array_t *)(Array_t *)L_98, 4, /*hidden argument*/&ObjectReader_BlockRead_m9357_MethodInfo);
		goto IL_021d;
	}

IL_0202:
	{
		V_19 = 0;
		goto IL_0218;
	}

IL_0207:
	{
		Int32U5BU5D_t109* L_99 = V_18;
		int32_t L_100 = V_19;
		BinaryReader_t1546 * L_101 = ___reader;
		NullCheck(L_101);
		int32_t L_102 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_101);
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, L_100);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_99, L_100)) = (int32_t)L_102;
		int32_t L_103 = V_19;
		V_19 = ((int32_t)((int32_t)L_103+(int32_t)1));
	}

IL_0218:
	{
		int32_t L_104 = V_19;
		int32_t L_105 = V_0;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_0207;
		}
	}

IL_021d:
	{
		Object_t ** L_106 = ___val;
		Int32U5BU5D_t109* L_107 = V_18;
		*((Object_t **)(L_106)) = (Object_t *)L_107;
		goto IL_0413;
	}

IL_0226:
	{
		int32_t L_108 = V_0;
		V_20 = ((Int64U5BU5D_t1406*)SZArrayNew(Int64U5BU5D_t1406_il2cpp_TypeInfo_var, L_108));
		int32_t L_109 = V_0;
		if ((((int32_t)L_109) <= ((int32_t)2)))
		{
			goto IL_023e;
		}
	}
	{
		BinaryReader_t1546 * L_110 = ___reader;
		Int64U5BU5D_t1406* L_111 = V_20;
		ObjectReader_BlockRead_m9357(__this, L_110, (Array_t *)(Array_t *)L_111, 8, /*hidden argument*/&ObjectReader_BlockRead_m9357_MethodInfo);
		goto IL_0259;
	}

IL_023e:
	{
		V_21 = 0;
		goto IL_0254;
	}

IL_0243:
	{
		Int64U5BU5D_t1406* L_112 = V_20;
		int32_t L_113 = V_21;
		BinaryReader_t1546 * L_114 = ___reader;
		NullCheck(L_114);
		int64_t L_115 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&BinaryReader_ReadInt64_m8257_MethodInfo, L_114);
		NullCheck(L_112);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_112, L_113);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_112, L_113)) = (int64_t)L_115;
		int32_t L_116 = V_21;
		V_21 = ((int32_t)((int32_t)L_116+(int32_t)1));
	}

IL_0254:
	{
		int32_t L_117 = V_21;
		int32_t L_118 = V_0;
		if ((((int32_t)L_117) < ((int32_t)L_118)))
		{
			goto IL_0243;
		}
	}

IL_0259:
	{
		Object_t ** L_119 = ___val;
		Int64U5BU5D_t1406* L_120 = V_20;
		*((Object_t **)(L_119)) = (Object_t *)L_120;
		goto IL_0413;
	}

IL_0262:
	{
		int32_t L_121 = V_0;
		V_22 = ((SByteU5BU5D_t1838*)SZArrayNew(SByteU5BU5D_t1838_il2cpp_TypeInfo_var, L_121));
		int32_t L_122 = V_0;
		if ((((int32_t)L_122) <= ((int32_t)2)))
		{
			goto IL_027a;
		}
	}
	{
		BinaryReader_t1546 * L_123 = ___reader;
		SByteU5BU5D_t1838* L_124 = V_22;
		ObjectReader_BlockRead_m9357(__this, L_123, (Array_t *)(Array_t *)L_124, 1, /*hidden argument*/&ObjectReader_BlockRead_m9357_MethodInfo);
		goto IL_0295;
	}

IL_027a:
	{
		V_23 = 0;
		goto IL_0290;
	}

IL_027f:
	{
		SByteU5BU5D_t1838* L_125 = V_22;
		int32_t L_126 = V_23;
		BinaryReader_t1546 * L_127 = ___reader;
		NullCheck(L_127);
		int8_t L_128 = (int8_t)VirtFuncInvoker0< int8_t >::Invoke(&BinaryReader_ReadSByte_m8258_MethodInfo, L_127);
		NullCheck(L_125);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_125, L_126);
		*((int8_t*)(int8_t*)SZArrayLdElema(L_125, L_126)) = (int8_t)L_128;
		int32_t L_129 = V_23;
		V_23 = ((int32_t)((int32_t)L_129+(int32_t)1));
	}

IL_0290:
	{
		int32_t L_130 = V_23;
		int32_t L_131 = V_0;
		if ((((int32_t)L_130) < ((int32_t)L_131)))
		{
			goto IL_027f;
		}
	}

IL_0295:
	{
		Object_t ** L_132 = ___val;
		SByteU5BU5D_t1838* L_133 = V_22;
		*((Object_t **)(L_132)) = (Object_t *)L_133;
		goto IL_0413;
	}

IL_029e:
	{
		int32_t L_134 = V_0;
		V_24 = ((SingleU5BU5D_t47*)SZArrayNew(SingleU5BU5D_t47_il2cpp_TypeInfo_var, L_134));
		int32_t L_135 = V_0;
		if ((((int32_t)L_135) <= ((int32_t)2)))
		{
			goto IL_02b6;
		}
	}
	{
		BinaryReader_t1546 * L_136 = ___reader;
		SingleU5BU5D_t47* L_137 = V_24;
		ObjectReader_BlockRead_m9357(__this, L_136, (Array_t *)(Array_t *)L_137, 4, /*hidden argument*/&ObjectReader_BlockRead_m9357_MethodInfo);
		goto IL_02d1;
	}

IL_02b6:
	{
		V_25 = 0;
		goto IL_02cc;
	}

IL_02bb:
	{
		SingleU5BU5D_t47* L_138 = V_24;
		int32_t L_139 = V_25;
		BinaryReader_t1546 * L_140 = ___reader;
		NullCheck(L_140);
		float L_141 = (float)VirtFuncInvoker0< float >::Invoke(&BinaryReader_ReadSingle_m8260_MethodInfo, L_140);
		NullCheck(L_138);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_138, L_139);
		*((float*)(float*)SZArrayLdElema(L_138, L_139)) = (float)L_141;
		int32_t L_142 = V_25;
		V_25 = ((int32_t)((int32_t)L_142+(int32_t)1));
	}

IL_02cc:
	{
		int32_t L_143 = V_25;
		int32_t L_144 = V_0;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_02bb;
		}
	}

IL_02d1:
	{
		Object_t ** L_145 = ___val;
		SingleU5BU5D_t47* L_146 = V_24;
		*((Object_t **)(L_145)) = (Object_t *)L_146;
		goto IL_0413;
	}

IL_02da:
	{
		int32_t L_147 = V_0;
		V_26 = ((UInt16U5BU5D_t1047*)SZArrayNew(UInt16U5BU5D_t1047_il2cpp_TypeInfo_var, L_147));
		int32_t L_148 = V_0;
		if ((((int32_t)L_148) <= ((int32_t)2)))
		{
			goto IL_02f2;
		}
	}
	{
		BinaryReader_t1546 * L_149 = ___reader;
		UInt16U5BU5D_t1047* L_150 = V_26;
		ObjectReader_BlockRead_m9357(__this, L_149, (Array_t *)(Array_t *)L_150, 2, /*hidden argument*/&ObjectReader_BlockRead_m9357_MethodInfo);
		goto IL_030d;
	}

IL_02f2:
	{
		V_27 = 0;
		goto IL_0308;
	}

IL_02f7:
	{
		UInt16U5BU5D_t1047* L_151 = V_26;
		int32_t L_152 = V_27;
		BinaryReader_t1546 * L_153 = ___reader;
		NullCheck(L_153);
		uint16_t L_154 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(&BinaryReader_ReadUInt16_m8261_MethodInfo, L_153);
		NullCheck(L_151);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_151, L_152);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_151, L_152)) = (uint16_t)L_154;
		int32_t L_155 = V_27;
		V_27 = ((int32_t)((int32_t)L_155+(int32_t)1));
	}

IL_0308:
	{
		int32_t L_156 = V_27;
		int32_t L_157 = V_0;
		if ((((int32_t)L_156) < ((int32_t)L_157)))
		{
			goto IL_02f7;
		}
	}

IL_030d:
	{
		Object_t ** L_158 = ___val;
		UInt16U5BU5D_t1047* L_159 = V_26;
		*((Object_t **)(L_158)) = (Object_t *)L_159;
		goto IL_0413;
	}

IL_0316:
	{
		int32_t L_160 = V_0;
		V_28 = ((UInt32U5BU5D_t1257*)SZArrayNew(UInt32U5BU5D_t1257_il2cpp_TypeInfo_var, L_160));
		int32_t L_161 = V_0;
		if ((((int32_t)L_161) <= ((int32_t)2)))
		{
			goto IL_032e;
		}
	}
	{
		BinaryReader_t1546 * L_162 = ___reader;
		UInt32U5BU5D_t1257* L_163 = V_28;
		ObjectReader_BlockRead_m9357(__this, L_162, (Array_t *)(Array_t *)L_163, 4, /*hidden argument*/&ObjectReader_BlockRead_m9357_MethodInfo);
		goto IL_0349;
	}

IL_032e:
	{
		V_29 = 0;
		goto IL_0344;
	}

IL_0333:
	{
		UInt32U5BU5D_t1257* L_164 = V_28;
		int32_t L_165 = V_29;
		BinaryReader_t1546 * L_166 = ___reader;
		NullCheck(L_166);
		uint32_t L_167 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_166);
		NullCheck(L_164);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_164, L_165);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_164, L_165)) = (uint32_t)L_167;
		int32_t L_168 = V_29;
		V_29 = ((int32_t)((int32_t)L_168+(int32_t)1));
	}

IL_0344:
	{
		int32_t L_169 = V_29;
		int32_t L_170 = V_0;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0333;
		}
	}

IL_0349:
	{
		Object_t ** L_171 = ___val;
		UInt32U5BU5D_t1257* L_172 = V_28;
		*((Object_t **)(L_171)) = (Object_t *)L_172;
		goto IL_0413;
	}

IL_0352:
	{
		int32_t L_173 = V_0;
		V_30 = ((UInt64U5BU5D_t1795*)SZArrayNew(UInt64U5BU5D_t1795_il2cpp_TypeInfo_var, L_173));
		int32_t L_174 = V_0;
		if ((((int32_t)L_174) <= ((int32_t)2)))
		{
			goto IL_036a;
		}
	}
	{
		BinaryReader_t1546 * L_175 = ___reader;
		UInt64U5BU5D_t1795* L_176 = V_30;
		ObjectReader_BlockRead_m9357(__this, L_175, (Array_t *)(Array_t *)L_176, 8, /*hidden argument*/&ObjectReader_BlockRead_m9357_MethodInfo);
		goto IL_0385;
	}

IL_036a:
	{
		V_31 = 0;
		goto IL_0380;
	}

IL_036f:
	{
		UInt64U5BU5D_t1795* L_177 = V_30;
		int32_t L_178 = V_31;
		BinaryReader_t1546 * L_179 = ___reader;
		NullCheck(L_179);
		uint64_t L_180 = (uint64_t)VirtFuncInvoker0< uint64_t >::Invoke(&BinaryReader_ReadUInt64_m8263_MethodInfo, L_179);
		NullCheck(L_177);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_177, L_178);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_177, L_178)) = (uint64_t)L_180;
		int32_t L_181 = V_31;
		V_31 = ((int32_t)((int32_t)L_181+(int32_t)1));
	}

IL_0380:
	{
		int32_t L_182 = V_31;
		int32_t L_183 = V_0;
		if ((((int32_t)L_182) < ((int32_t)L_183)))
		{
			goto IL_036f;
		}
	}

IL_0385:
	{
		Object_t ** L_184 = ___val;
		UInt64U5BU5D_t1795* L_185 = V_30;
		*((Object_t **)(L_184)) = (Object_t *)L_185;
		goto IL_0413;
	}

IL_038e:
	{
		int32_t L_186 = V_0;
		V_32 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, L_186));
		V_33 = 0;
		goto IL_03ac;
	}

IL_039b:
	{
		StringU5BU5D_t87* L_187 = V_32;
		int32_t L_188 = V_33;
		BinaryReader_t1546 * L_189 = ___reader;
		NullCheck(L_189);
		String_t* L_190 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&BinaryReader_ReadString_m8259_MethodInfo, L_189);
		NullCheck(L_187);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_187, L_188);
		ArrayElementTypeCheck (L_187, L_190);
		*((String_t**)(String_t**)SZArrayLdElema(L_187, L_188)) = (String_t*)L_190;
		int32_t L_191 = V_33;
		V_33 = ((int32_t)((int32_t)L_191+(int32_t)1));
	}

IL_03ac:
	{
		int32_t L_192 = V_33;
		int32_t L_193 = V_0;
		if ((((int32_t)L_192) < ((int32_t)L_193)))
		{
			goto IL_039b;
		}
	}
	{
		Object_t ** L_194 = ___val;
		StringU5BU5D_t87* L_195 = V_32;
		*((Object_t **)(L_194)) = (Object_t *)L_195;
		goto IL_0413;
	}

IL_03b7:
	{
		Type_t * L_196 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_197 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&TimeSpan_t1092_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_196) == ((Object_t*)(Type_t *)L_197))))
		{
			goto IL_03fb;
		}
	}
	{
		int32_t L_198 = V_0;
		V_34 = ((TimeSpanU5BU5D_t1967*)SZArrayNew(TimeSpanU5BU5D_t1967_il2cpp_TypeInfo_var, L_198));
		V_35 = 0;
		goto IL_03f0;
	}

IL_03d1:
	{
		TimeSpanU5BU5D_t1967* L_199 = V_34;
		int32_t L_200 = V_35;
		NullCheck(L_199);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_199, L_200);
		BinaryReader_t1546 * L_201 = ___reader;
		NullCheck(L_201);
		int64_t L_202 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&BinaryReader_ReadInt64_m8257_MethodInfo, L_201);
		TimeSpan_t1092  L_203 = {0};
		TimeSpan__ctor_m10802(&L_203, L_202, /*hidden argument*/&TimeSpan__ctor_m10802_MethodInfo);
		*((TimeSpan_t1092 *)(TimeSpan_t1092 *)SZArrayLdElema(L_199, L_200)) = L_203;
		int32_t L_204 = V_35;
		V_35 = ((int32_t)((int32_t)L_204+(int32_t)1));
	}

IL_03f0:
	{
		int32_t L_205 = V_35;
		int32_t L_206 = V_0;
		if ((((int32_t)L_205) < ((int32_t)L_206)))
		{
			goto IL_03d1;
		}
	}
	{
		Object_t ** L_207 = ___val;
		TimeSpanU5BU5D_t1967* L_208 = V_34;
		*((Object_t **)(L_207)) = (Object_t *)L_208;
		goto IL_0411;
	}

IL_03fb:
	{
		Type_t * L_209 = V_1;
		NullCheck(L_209);
		String_t* L_210 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_209);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_211 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral1816, L_210, /*hidden argument*/&String_Concat_m548_MethodInfo);
		NotSupportedException_t84 * L_212 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_212, L_211, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_212);
	}

IL_0411:
	{
		goto IL_0413;
	}

IL_0413:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::BlockRead(System.IO.BinaryReader,System.Array,System.Int32)
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_BlockRead_m9357 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, Array_t * ___array, int32_t ___dataSize, MethodInfo* method)
{
	static bool ObjectReader_BlockRead_m9357_init;
	if (!ObjectReader_BlockRead_m9357_init)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t66_0_0_0);
		ObjectReader_BlockRead_m9357_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ObjectReader_t1744 * G_B5_0 = {0};
	ObjectReader_t1744 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	ObjectReader_t1744 * G_B6_1 = {0};
	int32_t G_B11_0 = 0;
	{
		Array_t * L_0 = ___array;
		int32_t L_1 = Buffer_ByteLength_m10166(NULL /*static, unused*/, L_0, /*hidden argument*/&Buffer_ByteLength_m10166_MethodInfo);
		V_0 = L_1;
		ByteU5BU5D_t66* L_2 = (__this->___arrayBuffer_10);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = V_0;
		ByteU5BU5D_t66* L_4 = (__this->___arrayBuffer_10);
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0047;
		}
	}
	{
		ByteU5BU5D_t66* L_5 = (__this->___arrayBuffer_10);
		NullCheck(L_5);
		int32_t L_6 = (__this->___ArrayBufferLength_11);
		if ((((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))) == ((int32_t)L_6)))
		{
			goto IL_0047;
		}
	}

IL_002a:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->___ArrayBufferLength_11);
		G_B4_0 = __this;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			G_B5_0 = __this;
			goto IL_0037;
		}
	}
	{
		int32_t L_9 = V_0;
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		goto IL_003d;
	}

IL_0037:
	{
		int32_t L_10 = (__this->___ArrayBufferLength_11);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_0;
	}

IL_003d:
	{
		NullCheck(G_B6_1);
		G_B6_1->___arrayBuffer_10 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, G_B6_0));
	}

IL_0047:
	{
		V_1 = 0;
		goto IL_00b4;
	}

IL_004b:
	{
		int32_t L_11 = V_0;
		ByteU5BU5D_t66* L_12 = (__this->___arrayBuffer_10);
		NullCheck(L_12);
		if ((((int32_t)L_11) >= ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B11_0 = L_13;
		goto IL_0061;
	}

IL_0059:
	{
		ByteU5BU5D_t66* L_14 = (__this->___arrayBuffer_10);
		NullCheck(L_14);
		G_B11_0 = (((int32_t)(((Array_t *)L_14)->max_length)));
	}

IL_0061:
	{
		V_2 = G_B11_0;
		V_3 = 0;
	}

IL_0064:
	{
		BinaryReader_t1546 * L_15 = ___reader;
		ByteU5BU5D_t66* L_16 = (__this->___arrayBuffer_10);
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		NullCheck(L_15);
		int32_t L_20 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t66*, int32_t, int32_t >::Invoke(&BinaryReader_Read_m8246_MethodInfo, L_15, L_16, L_17, ((int32_t)((int32_t)L_18-(int32_t)L_19)));
		V_4 = L_20;
		int32_t L_21 = V_4;
		if (L_21)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0085;
	}

IL_007c:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		V_3 = ((int32_t)((int32_t)L_22+(int32_t)L_23));
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0064;
		}
	}

IL_0085:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BitConverter_t1192_il2cpp_TypeInfo));
		bool L_26 = ((BitConverter_t1192_StaticFields*)InitializedTypeInfo(&BitConverter_t1192_il2cpp_TypeInfo)->static_fields)->___IsLittleEndian_1;
		if (L_26)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_27 = ___dataSize;
		if ((((int32_t)L_27) <= ((int32_t)1)))
		{
			goto IL_009d;
		}
	}
	{
		ByteU5BU5D_t66* L_28 = (__this->___arrayBuffer_10);
		int32_t L_29 = V_2;
		int32_t L_30 = ___dataSize;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo));
		BinaryCommon_SwapBytes_m9325(NULL /*static, unused*/, L_28, L_29, L_30, /*hidden argument*/&BinaryCommon_SwapBytes_m9325_MethodInfo);
	}

IL_009d:
	{
		ByteU5BU5D_t66* L_31 = (__this->___arrayBuffer_10);
		Array_t * L_32 = ___array;
		int32_t L_33 = V_1;
		int32_t L_34 = V_2;
		Buffer_BlockCopy_m5306(NULL /*static, unused*/, (Array_t *)(Array_t *)L_31, 0, L_32, L_33, L_34, /*hidden argument*/&Buffer_BlockCopy_m5306_MethodInfo);
		int32_t L_35 = V_0;
		int32_t L_36 = V_2;
		V_0 = ((int32_t)((int32_t)L_35-(int32_t)L_36));
		int32_t L_37 = V_1;
		int32_t L_38 = V_2;
		V_1 = ((int32_t)((int32_t)L_37+(int32_t)L_38));
	}

IL_00b4:
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) > ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfObject(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C" void ObjectReader_ReadArrayOfObject_m9358 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, int64_t* ___objectId, Object_t ** ___array, MethodInfo* method)
{
	{
		BinaryReader_t1546 * L_0 = ___reader;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		int64_t* L_2 = ___objectId;
		Object_t ** L_3 = ___array;
		ObjectReader_ReadSimpleArray_m9360(__this, L_0, L_1, L_2, L_3, /*hidden argument*/&ObjectReader_ReadSimpleArray_m9360_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfString(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C" void ObjectReader_ReadArrayOfString_m9359 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, int64_t* ___objectId, Object_t ** ___array, MethodInfo* method)
{
	{
		BinaryReader_t1546 * L_0 = ___reader;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		int64_t* L_2 = ___objectId;
		Object_t ** L_3 = ___array;
		ObjectReader_ReadSimpleArray_m9360(__this, L_0, L_1, L_2, L_3, /*hidden argument*/&ObjectReader_ReadSimpleArray_m9360_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadSimpleArray(System.IO.BinaryReader,System.Type,System.Int64&,System.Object&)
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadSimpleArray_m9360 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, Type_t * ___elementType, int64_t* ___objectId, Object_t ** ___val, MethodInfo* method)
{
	static bool ObjectReader_ReadSimpleArray_m9360_init;
	if (!ObjectReader_ReadSimpleArray_m9360_init)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		ObjectReader_ReadSimpleArray_m9360_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t109* V_1 = {0};
	Array_t * V_2 = {0};
	int32_t V_3 = 0;
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t1546 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		BinaryReader_t1546 * L_3 = ___reader;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_3);
		V_0 = L_4;
		V_1 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = ___elementType;
		int32_t L_6 = V_0;
		Array_t * L_7 = Array_CreateInstance_m7205(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Array_CreateInstance_m7205_MethodInfo);
		V_2 = L_7;
		V_3 = 0;
		goto IL_003e;
	}

IL_0023:
	{
		Int32U5BU5D_t109* L_8 = V_1;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, 0)) = (int32_t)L_9;
		BinaryReader_t1546 * L_10 = ___reader;
		Array_t * L_11 = V_2;
		int64_t* L_12 = ___objectId;
		Type_t * L_13 = ___elementType;
		Int32U5BU5D_t109* L_14 = V_1;
		ObjectReader_ReadValue_m9362(__this, L_10, L_11, (*((int64_t*)L_12)), (SerializationInfo_t708 *)NULL, L_13, (String_t*)NULL, (MemberInfo_t *)NULL, L_14, /*hidden argument*/&ObjectReader_ReadValue_m9362_MethodInfo);
		Int32U5BU5D_t109* L_15 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		int32_t L_16 = 0;
		V_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_15, L_16));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0023;
		}
	}
	{
		Object_t ** L_20 = ___val;
		Array_t * L_21 = V_2;
		*((Object_t **)(L_20)) = (Object_t *)L_21;
		return;
	}
}
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadTypeMetadata(System.IO.BinaryReader,System.Boolean,System.Boolean)
extern TypeInfo* TypeU5BU5D_t658_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern TypeInfo* TypeTagU5BU5D_t1968_il2cpp_TypeInfo_var;
extern TypeInfo* MemberInfoU5BU5D_t1740_il2cpp_TypeInfo_var;
extern "C" TypeMetadata_t1741 * ObjectReader_ReadTypeMetadata_m9361 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, MethodInfo* method)
{
	static bool ObjectReader_ReadTypeMetadata_m9361_init;
	if (!ObjectReader_ReadTypeMetadata_m9361_init)
	{
		TypeU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t658_0_0_0);
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		TypeTagU5BU5D_t1968_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeTagU5BU5D_t1968_0_0_0);
		MemberInfoU5BU5D_t1740_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MemberInfoU5BU5D_t1740_0_0_0);
		ObjectReader_ReadTypeMetadata_m9361_init = true;
	}
	TypeMetadata_t1741 * V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	TypeU5BU5D_t658* V_3 = {0};
	StringU5BU5D_t87* V_4 = {0};
	int32_t V_5 = 0;
	TypeTagU5BU5D_t1968* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int64_t V_9 = 0;
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	int32_t V_12 = 0;
	FieldInfo_t * V_13 = {0};
	String_t* V_14 = {0};
	int32_t V_15 = 0;
	String_t* V_16 = {0};
	Type_t * V_17 = {0};
	{
		TypeMetadata_t1741 * L_0 = (TypeMetadata_t1741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TypeMetadata_t1741_il2cpp_TypeInfo));
		TypeMetadata__ctor_m9339(L_0, /*hidden argument*/&TypeMetadata__ctor_m9339_MethodInfo);
		V_0 = L_0;
		BinaryReader_t1546 * L_1 = ___reader;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&BinaryReader_ReadString_m8259_MethodInfo, L_1);
		V_1 = L_2;
		BinaryReader_t1546 * L_3 = ___reader;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_3);
		V_2 = L_4;
		int32_t L_5 = V_2;
		V_3 = ((TypeU5BU5D_t658*)SZArrayNew(TypeU5BU5D_t658_il2cpp_TypeInfo_var, L_5));
		int32_t L_6 = V_2;
		V_4 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, L_6));
		V_5 = 0;
		goto IL_0039;
	}

IL_0028:
	{
		StringU5BU5D_t87* L_7 = V_4;
		int32_t L_8 = V_5;
		BinaryReader_t1546 * L_9 = ___reader;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&BinaryReader_ReadString_m8259_MethodInfo, L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		ArrayElementTypeCheck (L_7, L_10);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, L_8)) = (String_t*)L_10;
		int32_t L_11 = V_5;
		V_5 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_5;
		int32_t L_13 = V_2;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0028;
		}
	}
	{
		bool L_14 = ___hasTypeInfo;
		if (!L_14)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_15 = V_2;
		V_6 = ((TypeTagU5BU5D_t1968*)SZArrayNew(TypeTagU5BU5D_t1968_il2cpp_TypeInfo_var, L_15));
		V_7 = 0;
		goto IL_005f;
	}

IL_004e:
	{
		TypeTagU5BU5D_t1968* L_16 = V_6;
		int32_t L_17 = V_7;
		BinaryReader_t1546 * L_18 = ___reader;
		NullCheck(L_18);
		uint8_t L_19 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_17)) = (uint8_t)L_19;
		int32_t L_20 = V_7;
		V_7 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_21 = V_7;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_004e;
		}
	}
	{
		V_8 = 0;
		goto IL_007f;
	}

IL_0069:
	{
		TypeU5BU5D_t658* L_23 = V_3;
		int32_t L_24 = V_8;
		BinaryReader_t1546 * L_25 = ___reader;
		TypeTagU5BU5D_t1968* L_26 = V_6;
		int32_t L_27 = V_8;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		Type_t * L_29 = ObjectReader_ReadType_m9366(__this, L_25, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_28)), /*hidden argument*/&ObjectReader_ReadType_m9366_MethodInfo);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		ArrayElementTypeCheck (L_23, L_29);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_23, L_24)) = (Type_t *)L_29;
		int32_t L_30 = V_8;
		V_8 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_007f:
	{
		int32_t L_31 = V_8;
		int32_t L_32 = V_2;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0069;
		}
	}

IL_0084:
	{
		bool L_33 = ___isRuntimeObject;
		if (L_33)
		{
			goto IL_00a1;
		}
	}
	{
		BinaryReader_t1546 * L_34 = ___reader;
		NullCheck(L_34);
		uint32_t L_35 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_34);
		V_9 = (((uint64_t)L_35));
		TypeMetadata_t1741 * L_36 = V_0;
		int64_t L_37 = V_9;
		String_t* L_38 = V_1;
		Type_t * L_39 = ObjectReader_GetDeserializationType_m9365(__this, L_37, L_38, /*hidden argument*/&ObjectReader_GetDeserializationType_m9365_MethodInfo);
		NullCheck(L_36);
		L_36->___Type_0 = L_39;
		goto IL_00ae;
	}

IL_00a1:
	{
		TypeMetadata_t1741 * L_40 = V_0;
		String_t* L_41 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_42 = Type_GetType_m4034(NULL /*static, unused*/, L_41, 1, /*hidden argument*/&Type_GetType_m4034_MethodInfo);
		NullCheck(L_40);
		L_40->___Type_0 = L_42;
	}

IL_00ae:
	{
		TypeMetadata_t1741 * L_43 = V_0;
		TypeU5BU5D_t658* L_44 = V_3;
		NullCheck(L_43);
		L_43->___MemberTypes_1 = L_44;
		TypeMetadata_t1741 * L_45 = V_0;
		StringU5BU5D_t87* L_46 = V_4;
		NullCheck(L_45);
		L_45->___MemberNames_2 = L_46;
		TypeMetadata_t1741 * L_47 = V_0;
		StringU5BU5D_t87* L_48 = V_4;
		NullCheck(L_48);
		NullCheck(L_47);
		L_47->___FieldCount_4 = (((int32_t)(((Array_t *)L_48)->max_length)));
		Object_t * L_49 = (__this->____surrogateSelector_0);
		if (!L_49)
		{
			goto IL_00f8;
		}
	}
	{
		Object_t * L_50 = (__this->____surrogateSelector_0);
		TypeMetadata_t1741 * L_51 = V_0;
		NullCheck(L_51);
		Type_t * L_52 = (L_51->___Type_0);
		StreamingContext_t709  L_53 = (__this->____context_1);
		NullCheck(L_50);
		Object_t * L_54 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t709 , Object_t ** >::Invoke(&ISurrogateSelector_GetSurrogate_m11026_MethodInfo, L_50, L_52, L_53, (&V_10));
		V_11 = L_54;
		TypeMetadata_t1741 * L_55 = V_0;
		Object_t * L_56 = V_11;
		NullCheck(L_55);
		L_55->___NeedsSerializationInfo_5 = ((((int32_t)((((Object_t*)(Object_t *)L_56) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00f8:
	{
		TypeMetadata_t1741 * L_57 = V_0;
		NullCheck(L_57);
		bool L_58 = (L_57->___NeedsSerializationInfo_5);
		if (L_58)
		{
			goto IL_0233;
		}
	}
	{
		TypeMetadata_t1741 * L_59 = V_0;
		NullCheck(L_59);
		Type_t * L_60 = (L_59->___Type_0);
		NullCheck(L_60);
		bool L_61 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsSerializable_m7270_MethodInfo, L_60);
		if (L_61)
		{
			goto IL_011b;
		}
	}
	{
		SerializationException_t1190 * L_62 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_62, (String_t*) &_stringLiteral1817, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_011b:
	{
		TypeMetadata_t1741 * L_63 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_64 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&ISerializable_t118_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		TypeMetadata_t1741 * L_65 = V_0;
		NullCheck(L_65);
		Type_t * L_66 = (L_65->___Type_0);
		NullCheck(L_64);
		bool L_67 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m4037_MethodInfo, L_64, L_66);
		NullCheck(L_63);
		L_63->___NeedsSerializationInfo_5 = L_67;
		TypeMetadata_t1741 * L_68 = V_0;
		NullCheck(L_68);
		bool L_69 = (L_68->___NeedsSerializationInfo_5);
		if (L_69)
		{
			goto IL_0233;
		}
	}
	{
		TypeMetadata_t1741 * L_70 = V_0;
		int32_t L_71 = V_2;
		NullCheck(L_70);
		L_70->___MemberInfos_3 = ((MemberInfoU5BU5D_t1740*)SZArrayNew(MemberInfoU5BU5D_t1740_il2cpp_TypeInfo_var, L_71));
		V_12 = 0;
		goto IL_0224;
	}

IL_0155:
	{
		V_13 = (FieldInfo_t *)NULL;
		StringU5BU5D_t87* L_72 = V_4;
		int32_t L_73 = V_12;
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, L_73);
		int32_t L_74 = L_73;
		V_14 = (*(String_t**)(String_t**)SZArrayLdElema(L_72, L_74));
		String_t* L_75 = V_14;
		NullCheck(L_75);
		int32_t L_76 = String_IndexOf_m2187(L_75, ((int32_t)43), /*hidden argument*/&String_IndexOf_m2187_MethodInfo);
		V_15 = L_76;
		int32_t L_77 = V_15;
		if ((((int32_t)L_77) == ((int32_t)(-1))))
		{
			goto IL_01cb;
		}
	}
	{
		StringU5BU5D_t87* L_78 = V_4;
		int32_t L_79 = V_12;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, L_79);
		int32_t L_80 = L_79;
		int32_t L_81 = V_15;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_78, L_80)));
		String_t* L_82 = String_Substring_m2129((*(String_t**)(String_t**)SZArrayLdElema(L_78, L_80)), 0, L_81, /*hidden argument*/&String_Substring_m2129_MethodInfo);
		V_16 = L_82;
		StringU5BU5D_t87* L_83 = V_4;
		int32_t L_84 = V_12;
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, L_84);
		int32_t L_85 = L_84;
		int32_t L_86 = V_15;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_83, L_85)));
		String_t* L_87 = String_Substring_m2154((*(String_t**)(String_t**)SZArrayLdElema(L_83, L_85)), ((int32_t)((int32_t)L_86+(int32_t)1)), /*hidden argument*/&String_Substring_m2154_MethodInfo);
		V_14 = L_87;
		TypeMetadata_t1741 * L_88 = V_0;
		NullCheck(L_88);
		Type_t * L_89 = (L_88->___Type_0);
		NullCheck(L_89);
		Type_t * L_90 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3991_MethodInfo, L_89);
		V_17 = L_90;
		goto IL_01c5;
	}

IL_019d:
	{
		Type_t * L_91 = V_17;
		NullCheck(L_91);
		String_t* L_92 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3952_MethodInfo, L_91);
		String_t* L_93 = V_16;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_94 = String_op_Equality_m2110(NULL /*static, unused*/, L_92, L_93, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_94)
		{
			goto IL_01bc;
		}
	}
	{
		Type_t * L_95 = V_17;
		String_t* L_96 = V_14;
		NullCheck(L_95);
		FieldInfo_t * L_97 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(&Type_GetField_m10987_MethodInfo, L_95, L_96, ((int32_t)52));
		V_13 = L_97;
		goto IL_01c9;
	}

IL_01bc:
	{
		Type_t * L_98 = V_17;
		NullCheck(L_98);
		Type_t * L_99 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3991_MethodInfo, L_98);
		V_17 = L_99;
	}

IL_01c5:
	{
		Type_t * L_100 = V_17;
		if (L_100)
		{
			goto IL_019d;
		}
	}

IL_01c9:
	{
		goto IL_01dc;
	}

IL_01cb:
	{
		TypeMetadata_t1741 * L_101 = V_0;
		NullCheck(L_101);
		Type_t * L_102 = (L_101->___Type_0);
		String_t* L_103 = V_14;
		NullCheck(L_102);
		FieldInfo_t * L_104 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(&Type_GetField_m10987_MethodInfo, L_102, L_103, ((int32_t)52));
		V_13 = L_104;
	}

IL_01dc:
	{
		FieldInfo_t * L_105 = V_13;
		if (L_105)
		{
			goto IL_0205;
		}
	}
	{
		StringU5BU5D_t87* L_106 = V_4;
		int32_t L_107 = V_12;
		NullCheck(L_106);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_106, L_107);
		int32_t L_108 = L_107;
		TypeMetadata_t1741 * L_109 = V_0;
		NullCheck(L_109);
		Type_t * L_110 = (L_109->___Type_0);
		NullCheck(L_110);
		String_t* L_111 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_110);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_112 = String_Concat_m4006(NULL /*static, unused*/, (String_t*) &_stringLiteral1818, (*(String_t**)(String_t**)SZArrayLdElema(L_106, L_108)), (String_t*) &_stringLiteral1819, L_111, /*hidden argument*/&String_Concat_m4006_MethodInfo);
		SerializationException_t1190 * L_113 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_113, L_112, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_113);
	}

IL_0205:
	{
		TypeMetadata_t1741 * L_114 = V_0;
		NullCheck(L_114);
		MemberInfoU5BU5D_t1740* L_115 = (L_114->___MemberInfos_3);
		int32_t L_116 = V_12;
		FieldInfo_t * L_117 = V_13;
		NullCheck(L_115);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_115, L_116);
		ArrayElementTypeCheck (L_115, L_117);
		*((MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_115, L_116)) = (MemberInfo_t *)L_117;
		bool L_118 = ___hasTypeInfo;
		if (L_118)
		{
			goto IL_021e;
		}
	}
	{
		TypeU5BU5D_t658* L_119 = V_3;
		int32_t L_120 = V_12;
		FieldInfo_t * L_121 = V_13;
		NullCheck(L_121);
		Type_t * L_122 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&FieldInfo_get_FieldType_m3964_MethodInfo, L_121);
		NullCheck(L_119);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_119, L_120);
		ArrayElementTypeCheck (L_119, L_122);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_119, L_120)) = (Type_t *)L_122;
	}

IL_021e:
	{
		int32_t L_123 = V_12;
		V_12 = ((int32_t)((int32_t)L_123+(int32_t)1));
	}

IL_0224:
	{
		int32_t L_124 = V_12;
		int32_t L_125 = V_2;
		if ((((int32_t)L_124) < ((int32_t)L_125)))
		{
			goto IL_0155;
		}
	}
	{
		TypeMetadata_t1741 * L_126 = V_0;
		NullCheck(L_126);
		L_126->___MemberNames_2 = (StringU5BU5D_t87*)NULL;
	}

IL_0233:
	{
		Hashtable_t1007 * L_127 = (__this->____typeMetadataCache_6);
		TypeMetadata_t1741 * L_128 = V_0;
		NullCheck(L_128);
		Type_t * L_129 = (L_128->___Type_0);
		NullCheck(L_127);
		bool L_130 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Hashtable_ContainsKey_m5281_MethodInfo, L_127, L_129);
		if (L_130)
		{
			goto IL_0258;
		}
	}
	{
		Hashtable_t1007 * L_131 = (__this->____typeMetadataCache_6);
		TypeMetadata_t1741 * L_132 = V_0;
		NullCheck(L_132);
		Type_t * L_133 = (L_132->___Type_0);
		TypeMetadata_t1741 * L_134 = V_0;
		NullCheck(L_131);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_set_Item_m5432_MethodInfo, L_131, L_133, L_134);
	}

IL_0258:
	{
		TypeMetadata_t1741 * L_135 = V_0;
		return L_135;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadValue(System.IO.BinaryReader,System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Type,System.String,System.Reflection.MemberInfo,System.Int32[])
extern "C" void ObjectReader_ReadValue_m9362 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, Object_t * ___parentObject, int64_t ___parentObjectId, SerializationInfo_t708 * ___info, Type_t * ___valueType, String_t* ___fieldName, MemberInfo_t * ___memberInfo, Int32U5BU5D_t109* ___indices, MethodInfo* method)
{
	Object_t * V_0 = {0};
	uint8_t V_1 = {0};
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	SerializationInfo_t708 * V_4 = {0};
	bool V_5 = false;
	{
		Type_t * L_0 = ___valueType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo));
		bool L_1 = BinaryCommon_IsPrimitive_m9323(NULL /*static, unused*/, L_0, /*hidden argument*/&BinaryCommon_IsPrimitive_m9323_MethodInfo);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		BinaryReader_t1546 * L_2 = ___reader;
		Type_t * L_3 = ___valueType;
		Object_t * L_4 = ObjectReader_ReadPrimitiveTypeValue_m9367(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&ObjectReader_ReadPrimitiveTypeValue_m9367_MethodInfo);
		V_0 = L_4;
		Object_t * L_5 = ___parentObject;
		String_t* L_6 = ___fieldName;
		MemberInfo_t * L_7 = ___memberInfo;
		SerializationInfo_t708 * L_8 = ___info;
		Object_t * L_9 = V_0;
		Type_t * L_10 = ___valueType;
		Int32U5BU5D_t109* L_11 = ___indices;
		ObjectReader_SetObjectValue_m9363(__this, L_5, L_6, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/&ObjectReader_SetObjectValue_m9363_MethodInfo);
		return;
	}

IL_0025:
	{
		BinaryReader_t1546 * L_12 = ___reader;
		NullCheck(L_12);
		uint8_t L_13 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_12);
		V_1 = L_13;
		uint8_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_004b;
		}
	}
	{
		BinaryReader_t1546 * L_15 = ___reader;
		NullCheck(L_15);
		uint32_t L_16 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_15);
		V_2 = (((uint64_t)L_16));
		int64_t L_17 = ___parentObjectId;
		int64_t L_18 = V_2;
		Object_t * L_19 = ___parentObject;
		SerializationInfo_t708 * L_20 = ___info;
		String_t* L_21 = ___fieldName;
		MemberInfo_t * L_22 = ___memberInfo;
		Int32U5BU5D_t109* L_23 = ___indices;
		ObjectReader_RecordFixup_m9364(__this, L_17, L_18, L_19, L_20, L_21, L_22, L_23, /*hidden argument*/&ObjectReader_RecordFixup_m9364_MethodInfo);
		return;
	}

IL_004b:
	{
		uint8_t L_24 = V_1;
		BinaryReader_t1546 * L_25 = ___reader;
		ObjectReader_ReadObject_m9347(__this, L_24, L_25, (&V_3), (&V_0), (&V_4), /*hidden argument*/&ObjectReader_ReadObject_m9347_MethodInfo);
		V_5 = 0;
		int64_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_00aa;
		}
	}
	{
		Object_t * L_27 = V_0;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m1903(L_27, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_28);
		bool L_29 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m7271_MethodInfo, L_28);
		if (!L_29)
		{
			goto IL_0080;
		}
	}
	{
		int64_t L_30 = ___parentObjectId;
		int64_t L_31 = V_3;
		Object_t * L_32 = ___parentObject;
		SerializationInfo_t708 * L_33 = ___info;
		String_t* L_34 = ___fieldName;
		MemberInfo_t * L_35 = ___memberInfo;
		Int32U5BU5D_t109* L_36 = ___indices;
		ObjectReader_RecordFixup_m9364(__this, L_30, L_31, L_32, L_33, L_34, L_35, L_36, /*hidden argument*/&ObjectReader_RecordFixup_m9364_MethodInfo);
		V_5 = 1;
	}

IL_0080:
	{
		SerializationInfo_t708 * L_37 = ___info;
		if (L_37)
		{
			goto IL_009c;
		}
	}
	{
		Object_t * L_38 = ___parentObject;
		if (((Array_t *)IsInst(L_38, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo))))
		{
			goto IL_009c;
		}
	}
	{
		int64_t L_39 = V_3;
		Object_t * L_40 = V_0;
		SerializationInfo_t708 * L_41 = V_4;
		int64_t L_42 = ___parentObjectId;
		MemberInfo_t * L_43 = ___memberInfo;
		ObjectReader_RegisterObject_m9352(__this, L_39, L_40, L_41, L_42, L_43, (Int32U5BU5D_t109*)(Int32U5BU5D_t109*)NULL, /*hidden argument*/&ObjectReader_RegisterObject_m9352_MethodInfo);
		goto IL_00aa;
	}

IL_009c:
	{
		int64_t L_44 = V_3;
		Object_t * L_45 = V_0;
		SerializationInfo_t708 * L_46 = V_4;
		int64_t L_47 = ___parentObjectId;
		Int32U5BU5D_t109* L_48 = ___indices;
		ObjectReader_RegisterObject_m9352(__this, L_44, L_45, L_46, L_47, (MemberInfo_t *)NULL, L_48, /*hidden argument*/&ObjectReader_RegisterObject_m9352_MethodInfo);
	}

IL_00aa:
	{
		bool L_49 = V_5;
		if (L_49)
		{
			goto IL_00c0;
		}
	}
	{
		Object_t * L_50 = ___parentObject;
		String_t* L_51 = ___fieldName;
		MemberInfo_t * L_52 = ___memberInfo;
		SerializationInfo_t708 * L_53 = ___info;
		Object_t * L_54 = V_0;
		Type_t * L_55 = ___valueType;
		Int32U5BU5D_t109* L_56 = ___indices;
		ObjectReader_SetObjectValue_m9363(__this, L_50, L_51, L_52, L_53, L_54, L_55, L_56, /*hidden argument*/&ObjectReader_SetObjectValue_m9363_MethodInfo);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::SetObjectValue(System.Object,System.String,System.Reflection.MemberInfo,System.Runtime.Serialization.SerializationInfo,System.Object,System.Type,System.Int32[])
extern "C" void ObjectReader_SetObjectValue_m9363 (ObjectReader_t1744 * __this, Object_t * ___parentObject, String_t* ___fieldName, MemberInfo_t * ___memberInfo, SerializationInfo_t708 * ___info, Object_t * ___value, Type_t * ___valueType, Int32U5BU5D_t109* ___indices, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&IObjectReference_t1969_il2cpp_TypeInfo))))
		{
			goto IL_001f;
		}
	}
	{
		Object_t * L_1 = ___value;
		StreamingContext_t709  L_2 = (__this->____context_1);
		NullCheck(((Object_t *)Castclass(L_1, InitializedTypeInfo(&IObjectReference_t1969_il2cpp_TypeInfo))));
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, StreamingContext_t709  >::Invoke(&IObjectReference_GetRealObject_m11033_MethodInfo, ((Object_t *)Castclass(L_1, InitializedTypeInfo(&IObjectReference_t1969_il2cpp_TypeInfo))), L_2);
		___value = L_3;
	}

IL_001f:
	{
		Object_t * L_4 = ___parentObject;
		if (!((Array_t *)IsInst(L_4, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo))))
		{
			goto IL_005f;
		}
	}
	{
		Object_t * L_5 = ___value;
		if (!((ArrayNullFiller_t1742 *)IsInst(L_5, InitializedTypeInfo(&ArrayNullFiller_t1742_il2cpp_TypeInfo))))
		{
			goto IL_004e;
		}
	}
	{
		Object_t * L_6 = ___value;
		NullCheck(((ArrayNullFiller_t1742 *)Castclass(L_6, InitializedTypeInfo(&ArrayNullFiller_t1742_il2cpp_TypeInfo))));
		int32_t L_7 = (((ArrayNullFiller_t1742 *)Castclass(L_6, InitializedTypeInfo(&ArrayNullFiller_t1742_il2cpp_TypeInfo)))->___NullCount_0);
		V_0 = L_7;
		Int32U5BU5D_t109* L_8 = ___indices;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t* L_9 = ((int32_t*)(int32_t*)SZArrayLdElema(L_8, 0));
		int32_t L_10 = V_0;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_9))+(int32_t)((int32_t)((int32_t)L_10-(int32_t)1))));
		goto IL_005d;
	}

IL_004e:
	{
		Object_t * L_11 = ___parentObject;
		Object_t * L_12 = ___value;
		Int32U5BU5D_t109* L_13 = ___indices;
		NullCheck(((Array_t *)Castclass(L_11, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo))));
		Array_SetValue_m7184(((Array_t *)Castclass(L_11, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo))), L_12, L_13, /*hidden argument*/&Array_SetValue_m7184_MethodInfo);
	}

IL_005d:
	{
		goto IL_0098;
	}

IL_005f:
	{
		SerializationInfo_t708 * L_14 = ___info;
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		SerializationInfo_t708 * L_15 = ___info;
		String_t* L_16 = ___fieldName;
		Object_t * L_17 = ___value;
		Type_t * L_18 = ___valueType;
		NullCheck(L_15);
		SerializationInfo_AddValue_m5242(L_15, L_16, L_17, L_18, /*hidden argument*/&SerializationInfo_AddValue_m5242_MethodInfo);
		goto IL_0098;
	}

IL_0071:
	{
		MemberInfo_t * L_19 = ___memberInfo;
		if (!((FieldInfo_t *)IsInst(L_19, InitializedTypeInfo(&FieldInfo_t_il2cpp_TypeInfo))))
		{
			goto IL_0089;
		}
	}
	{
		MemberInfo_t * L_20 = ___memberInfo;
		Object_t * L_21 = ___parentObject;
		Object_t * L_22 = ___value;
		NullCheck(((FieldInfo_t *)Castclass(L_20, InitializedTypeInfo(&FieldInfo_t_il2cpp_TypeInfo))));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&FieldInfo_SetValue_m3980_MethodInfo, ((FieldInfo_t *)Castclass(L_20, InitializedTypeInfo(&FieldInfo_t_il2cpp_TypeInfo))), L_21, L_22);
		goto IL_0098;
	}

IL_0089:
	{
		MemberInfo_t * L_23 = ___memberInfo;
		Object_t * L_24 = ___parentObject;
		Object_t * L_25 = ___value;
		NullCheck(((PropertyInfo_t *)Castclass(L_23, InitializedTypeInfo(&PropertyInfo_t_il2cpp_TypeInfo))));
		VirtActionInvoker3< Object_t *, Object_t *, ObjectU5BU5D_t76* >::Invoke(&PropertyInfo_SetValue_m9002_MethodInfo, ((PropertyInfo_t *)Castclass(L_23, InitializedTypeInfo(&PropertyInfo_t_il2cpp_TypeInfo))), L_24, L_25, (ObjectU5BU5D_t76*)(ObjectU5BU5D_t76*)NULL);
	}

IL_0098:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RecordFixup(System.Int64,System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.String,System.Reflection.MemberInfo,System.Int32[])
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_RecordFixup_m9364 (ObjectReader_t1744 * __this, int64_t ___parentObjectId, int64_t ___childObjectId, Object_t * ___parentObject, SerializationInfo_t708 * ___info, String_t* ___fieldName, MemberInfo_t * ___memberInfo, Int32U5BU5D_t109* ___indices, MethodInfo* method)
{
	static bool ObjectReader_RecordFixup_m9364_init;
	if (!ObjectReader_RecordFixup_m9364_init)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		ObjectReader_RecordFixup_m9364_init = true;
	}
	{
		SerializationInfo_t708 * L_0 = ___info;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ObjectManager_t1743 * L_1 = (__this->____manager_4);
		int64_t L_2 = ___parentObjectId;
		String_t* L_3 = ___fieldName;
		int64_t L_4 = ___childObjectId;
		NullCheck(L_1);
		VirtActionInvoker3< int64_t, String_t*, int64_t >::Invoke(&ObjectManager_RecordDelayedFixup_m9387_MethodInfo, L_1, L_2, L_3, L_4);
		goto IL_0061;
	}

IL_0015:
	{
		Object_t * L_5 = ___parentObject;
		if (!((Array_t *)IsInst(L_5, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo))))
		{
			goto IL_0052;
		}
	}
	{
		Int32U5BU5D_t109* L_6 = ___indices;
		NullCheck(L_6);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		ObjectManager_t1743 * L_7 = (__this->____manager_4);
		int64_t L_8 = ___parentObjectId;
		Int32U5BU5D_t109* L_9 = ___indices;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		int64_t L_11 = ___childObjectId;
		NullCheck(L_7);
		VirtActionInvoker3< int64_t, int32_t, int64_t >::Invoke(&ObjectManager_RecordArrayElementFixup_m9385_MethodInfo, L_7, L_8, (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_10)), L_11);
		goto IL_0050;
	}

IL_0037:
	{
		ObjectManager_t1743 * L_12 = (__this->____manager_4);
		int64_t L_13 = ___parentObjectId;
		Int32U5BU5D_t109* L_14 = ___indices;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Array_Clone_m5260_MethodInfo, L_14);
		int64_t L_16 = ___childObjectId;
		NullCheck(L_12);
		VirtActionInvoker3< int64_t, Int32U5BU5D_t109*, int64_t >::Invoke(&ObjectManager_RecordArrayElementFixup_m9386_MethodInfo, L_12, L_13, ((Int32U5BU5D_t109*)Castclass(L_15, Int32U5BU5D_t109_il2cpp_TypeInfo_var)), L_16);
	}

IL_0050:
	{
		goto IL_0061;
	}

IL_0052:
	{
		ObjectManager_t1743 * L_17 = (__this->____manager_4);
		int64_t L_18 = ___parentObjectId;
		MemberInfo_t * L_19 = ___memberInfo;
		int64_t L_20 = ___childObjectId;
		NullCheck(L_17);
		VirtActionInvoker3< int64_t, MemberInfo_t *, int64_t >::Invoke(&ObjectManager_RecordFixup_m9388_MethodInfo, L_17, L_18, L_19, L_20);
	}

IL_0061:
	{
		return;
	}
}
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::GetDeserializationType(System.Int64,System.String)
extern "C" Type_t * ObjectReader_GetDeserializationType_m9365 (ObjectReader_t1744 * __this, int64_t ___assemblyId, String_t* ___className, MethodInfo* method)
{
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	Assembly_t1194 * V_2 = {0};
	{
		Hashtable_t1007 * L_0 = (__this->____registeredAssemblies_5);
		int64_t L_1 = ___assemblyId;
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m5249_MethodInfo, L_0, L_3);
		V_1 = ((String_t*)Castclass(L_4, (&String_t_il2cpp_TypeInfo)));
		SerializationBinder_t1737 * L_5 = (__this->____binder_2);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		SerializationBinder_t1737 * L_6 = (__this->____binder_2);
		String_t* L_7 = V_1;
		String_t* L_8 = ___className;
		NullCheck(L_6);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker2< Type_t *, String_t*, String_t* >::Invoke(&SerializationBinder_BindToType_m11034_MethodInfo, L_6, L_7, L_8);
		V_0 = L_9;
		Type_t * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0032;
		}
	}
	{
		Type_t * L_11 = V_0;
		return L_11;
	}

IL_0032:
	{
		String_t* L_12 = V_1;
		Assembly_t1194 * L_13 = Assembly_Load_m8765(NULL /*static, unused*/, L_12, /*hidden argument*/&Assembly_Load_m8765_MethodInfo);
		V_2 = L_13;
		Assembly_t1194 * L_14 = V_2;
		String_t* L_15 = ___className;
		NullCheck(L_14);
		Type_t * L_16 = (Type_t *)VirtFuncInvoker2< Type_t *, String_t*, bool >::Invoke(&Assembly_GetType_m8759_MethodInfo, L_14, L_15, 1);
		V_0 = L_16;
		Type_t * L_17 = V_0;
		if (!L_17)
		{
			goto IL_0047;
		}
	}
	{
		Type_t * L_18 = V_0;
		return L_18;
	}

IL_0047:
	{
		String_t* L_19 = ___className;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_20 = String_Concat_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral1820, L_19, (String_t*) &_stringLiteral682, /*hidden argument*/&String_Concat_m380_MethodInfo);
		SerializationException_t1190 * L_21 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_21, L_20, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}
}
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadType(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.TypeTag)
extern "C" Type_t * ObjectReader_ReadType_m9366 (ObjectReader_t1744 * __this, BinaryReader_t1546 * ___reader, uint8_t ___code, MethodInfo* method)
{
	String_t* V_0 = {0};
	Type_t * V_1 = {0};
	String_t* V_2 = {0};
	int64_t V_3 = 0;
	Type_t * V_4 = {0};
	uint8_t V_5 = {0};
	{
		uint8_t L_0 = ___code;
		V_5 = L_0;
		uint8_t L_1 = V_5;
		if (L_1 == 0)
		{
			goto IL_002f;
		}
		if (L_1 == 1)
		{
			goto IL_003b;
		}
		if (L_1 == 2)
		{
			goto IL_0046;
		}
		if (L_1 == 3)
		{
			goto IL_0051;
		}
		if (L_1 == 4)
		{
			goto IL_00b4;
		}
		if (L_1 == 5)
		{
			goto IL_00cc;
		}
		if (L_1 == 6)
		{
			goto IL_00d7;
		}
		if (L_1 == 7)
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_0106;
	}

IL_002f:
	{
		BinaryReader_t1546 * L_2 = ___reader;
		NullCheck(L_2);
		uint8_t L_3 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo));
		Type_t * L_4 = BinaryCommon_GetTypeFromCode_m9324(NULL /*static, unused*/, L_3, /*hidden argument*/&BinaryCommon_GetTypeFromCode_m9324_MethodInfo);
		return L_4;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		return L_5;
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		return L_6;
	}

IL_0051:
	{
		BinaryReader_t1546 * L_7 = ___reader;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&BinaryReader_ReadString_m8259_MethodInfo, L_7);
		V_0 = L_8;
		StreamingContext_t709 * L_9 = &(__this->____context_1);
		int32_t L_10 = StreamingContext_get_State_m9448(L_9, /*hidden argument*/&StreamingContext_get_State_m9448_MethodInfo);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_12 = String_op_Equality_m2110(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral1821, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_13 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&MonoType_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		return L_13;
	}

IL_007f:
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_15 = String_op_Equality_m2110(NULL /*static, unused*/, L_14, (String_t*) &_stringLiteral1822, /*hidden argument*/&String_op_Equality_m2110_MethodInfo);
		if (!L_15)
		{
			goto IL_0097;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_16 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&MonoTypeU5BU5D_t1970_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		return L_16;
	}

IL_0097:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_18 = Type_GetType_m7280(NULL /*static, unused*/, L_17, /*hidden argument*/&Type_GetType_m7280_MethodInfo);
		V_1 = L_18;
		Type_t * L_19 = V_1;
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		Type_t * L_20 = V_1;
		return L_20;
	}

IL_00a3:
	{
		String_t* L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Format_m1975(NULL /*static, unused*/, (String_t*) &_stringLiteral1823, L_21, /*hidden argument*/&String_Format_m1975_MethodInfo);
		SerializationException_t1190 * L_23 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_23, L_22, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_00b4:
	{
		BinaryReader_t1546 * L_24 = ___reader;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&BinaryReader_ReadString_m8259_MethodInfo, L_24);
		V_2 = L_25;
		BinaryReader_t1546 * L_26 = ___reader;
		NullCheck(L_26);
		uint32_t L_27 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_26);
		V_3 = (((uint64_t)L_27));
		int64_t L_28 = V_3;
		String_t* L_29 = V_2;
		Type_t * L_30 = ObjectReader_GetDeserializationType_m9365(__this, L_28, L_29, /*hidden argument*/&ObjectReader_GetDeserializationType_m9365_MethodInfo);
		return L_30;
	}

IL_00cc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_31 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&ObjectU5BU5D_t76_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		return L_31;
	}

IL_00d7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_32 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&StringU5BU5D_t87_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		return L_32;
	}

IL_00e2:
	{
		BinaryReader_t1546 * L_33 = ___reader;
		NullCheck(L_33);
		uint8_t L_34 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_33);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BinaryCommon_t1732_il2cpp_TypeInfo));
		Type_t * L_35 = BinaryCommon_GetTypeFromCode_m9324(NULL /*static, unused*/, L_34, /*hidden argument*/&BinaryCommon_GetTypeFromCode_m9324_MethodInfo);
		V_4 = L_35;
		Type_t * L_36 = V_4;
		NullCheck(L_36);
		String_t* L_37 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_36);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_38 = String_Concat_m548(NULL /*static, unused*/, L_37, (String_t*) &_stringLiteral1824, /*hidden argument*/&String_Concat_m548_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_39 = Type_GetType_m7280(NULL /*static, unused*/, L_38, /*hidden argument*/&Type_GetType_m7280_MethodInfo);
		return L_39;
	}

IL_0106:
	{
		NotSupportedException_t84 * L_40 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_40, (String_t*) &_stringLiteral1825, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_40);
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadPrimitiveTypeValue(System.IO.BinaryReader,System.Type)
extern "C" Object_t * ObjectReader_ReadPrimitiveTypeValue_m9367 (Object_t * __this /* static, unused */, BinaryReader_t1546 * ___reader, Type_t * ___type, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_2 = Type_GetTypeCode_m7282(NULL /*static, unused*/, L_1, /*hidden argument*/&Type_GetTypeCode_m7282_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 0)
		{
			goto IL_0059;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 1)
		{
			goto IL_0071;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 2)
		{
			goto IL_00d4;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 3)
		{
			goto IL_0065;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 4)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 5)
		{
			goto IL_00ec;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 6)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 7)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 8)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 9)
		{
			goto IL_0104;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 10)
		{
			goto IL_00e0;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 11)
		{
			goto IL_00a4;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 12)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 13)
		{
			goto IL_007d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 14)
		{
			goto IL_0117;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 15)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0117;
	}

IL_0059:
	{
		BinaryReader_t1546 * L_4 = ___reader;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&BinaryReader_ReadBoolean_m8250_MethodInfo, L_4);
		bool L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Boolean_t83_il2cpp_TypeInfo), &L_6);
		return L_7;
	}

IL_0065:
	{
		BinaryReader_t1546 * L_8 = ___reader;
		NullCheck(L_8);
		uint8_t L_9 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&BinaryReader_ReadByte_m8251_MethodInfo, L_8);
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Byte_t114_il2cpp_TypeInfo), &L_10);
		return L_11;
	}

IL_0071:
	{
		BinaryReader_t1546 * L_12 = ___reader;
		NullCheck(L_12);
		uint16_t L_13 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(&BinaryReader_ReadChar_m8252_MethodInfo, L_12);
		uint16_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Char_t262_il2cpp_TypeInfo), &L_14);
		return L_15;
	}

IL_007d:
	{
		BinaryReader_t1546 * L_16 = ___reader;
		NullCheck(L_16);
		int64_t L_17 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&BinaryReader_ReadInt64_m8257_MethodInfo, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t524_il2cpp_TypeInfo));
		DateTime_t524  L_18 = DateTime_FromBinary_m10435(NULL /*static, unused*/, L_17, /*hidden argument*/&DateTime_FromBinary_m10435_MethodInfo);
		DateTime_t524  L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&DateTime_t524_il2cpp_TypeInfo), &L_19);
		return L_20;
	}

IL_008e:
	{
		BinaryReader_t1546 * L_21 = ___reader;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&BinaryReader_ReadString_m8259_MethodInfo, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t757_il2cpp_TypeInfo));
		CultureInfo_t757 * L_23 = CultureInfo_get_InvariantCulture_m3915(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3915_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Decimal_t763_il2cpp_TypeInfo));
		Decimal_t763  L_24 = Decimal_Parse_m7008(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/&Decimal_Parse_m7008_MethodInfo);
		Decimal_t763  L_25 = L_24;
		Object_t * L_26 = Box(InitializedTypeInfo(&Decimal_t763_il2cpp_TypeInfo), &L_25);
		return L_26;
	}

IL_00a4:
	{
		BinaryReader_t1546 * L_27 = ___reader;
		NullCheck(L_27);
		double L_28 = (double)VirtFuncInvoker0< double >::Invoke(&BinaryReader_ReadDouble_m8254_MethodInfo, L_27);
		double L_29 = L_28;
		Object_t * L_30 = Box(InitializedTypeInfo(&Double_t89_il2cpp_TypeInfo), &L_29);
		return L_30;
	}

IL_00b0:
	{
		BinaryReader_t1546 * L_31 = ___reader;
		NullCheck(L_31);
		int16_t L_32 = (int16_t)VirtFuncInvoker0< int16_t >::Invoke(&BinaryReader_ReadInt16_m8255_MethodInfo, L_31);
		int16_t L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&Int16_t434_il2cpp_TypeInfo), &L_33);
		return L_34;
	}

IL_00bc:
	{
		BinaryReader_t1546 * L_35 = ___reader;
		NullCheck(L_35);
		int32_t L_36 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&BinaryReader_ReadInt32_m8256_MethodInfo, L_35);
		int32_t L_37 = L_36;
		Object_t * L_38 = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &L_37);
		return L_38;
	}

IL_00c8:
	{
		BinaryReader_t1546 * L_39 = ___reader;
		NullCheck(L_39);
		int64_t L_40 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&BinaryReader_ReadInt64_m8257_MethodInfo, L_39);
		int64_t L_41 = L_40;
		Object_t * L_42 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_41);
		return L_42;
	}

IL_00d4:
	{
		BinaryReader_t1546 * L_43 = ___reader;
		NullCheck(L_43);
		int8_t L_44 = (int8_t)VirtFuncInvoker0< int8_t >::Invoke(&BinaryReader_ReadSByte_m8258_MethodInfo, L_43);
		int8_t L_45 = L_44;
		Object_t * L_46 = Box(InitializedTypeInfo(&SByte_t115_il2cpp_TypeInfo), &L_45);
		return L_46;
	}

IL_00e0:
	{
		BinaryReader_t1546 * L_47 = ___reader;
		NullCheck(L_47);
		float L_48 = (float)VirtFuncInvoker0< float >::Invoke(&BinaryReader_ReadSingle_m8260_MethodInfo, L_47);
		float L_49 = L_48;
		Object_t * L_50 = Box(InitializedTypeInfo(&Single_t85_il2cpp_TypeInfo), &L_49);
		return L_50;
	}

IL_00ec:
	{
		BinaryReader_t1546 * L_51 = ___reader;
		NullCheck(L_51);
		uint16_t L_52 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(&BinaryReader_ReadUInt16_m8261_MethodInfo, L_51);
		uint16_t L_53 = L_52;
		Object_t * L_54 = Box(InitializedTypeInfo(&UInt16_t750_il2cpp_TypeInfo), &L_53);
		return L_54;
	}

IL_00f8:
	{
		BinaryReader_t1546 * L_55 = ___reader;
		NullCheck(L_55);
		uint32_t L_56 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(&BinaryReader_ReadUInt32_m8262_MethodInfo, L_55);
		uint32_t L_57 = L_56;
		Object_t * L_58 = Box(InitializedTypeInfo(&UInt32_t752_il2cpp_TypeInfo), &L_57);
		return L_58;
	}

IL_0104:
	{
		BinaryReader_t1546 * L_59 = ___reader;
		NullCheck(L_59);
		uint64_t L_60 = (uint64_t)VirtFuncInvoker0< uint64_t >::Invoke(&BinaryReader_ReadUInt64_m8263_MethodInfo, L_59);
		uint64_t L_61 = L_60;
		Object_t * L_62 = Box(InitializedTypeInfo(&UInt64_t762_il2cpp_TypeInfo), &L_61);
		return L_62;
	}

IL_0110:
	{
		BinaryReader_t1546 * L_63 = ___reader;
		NullCheck(L_63);
		String_t* L_64 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&BinaryReader_ReadString_m8259_MethodInfo, L_63);
		return L_64;
	}

IL_0117:
	{
		Type_t * L_65 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_66 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&TimeSpan_t1092_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_65) == ((Object_t*)(Type_t *)L_66))))
		{
			goto IL_0135;
		}
	}
	{
		BinaryReader_t1546 * L_67 = ___reader;
		NullCheck(L_67);
		int64_t L_68 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&BinaryReader_ReadInt64_m8257_MethodInfo, L_67);
		TimeSpan_t1092  L_69 = {0};
		TimeSpan__ctor_m10802(&L_69, L_68, /*hidden argument*/&TimeSpan__ctor_m10802_MethodInfo);
		TimeSpan_t1092  L_70 = L_69;
		Object_t * L_71 = Box(InitializedTypeInfo(&TimeSpan_t1092_il2cpp_TypeInfo), &L_70);
		return L_71;
	}

IL_0135:
	{
		Type_t * L_72 = ___type;
		NullCheck(L_72);
		String_t* L_73 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_72);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_74 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral1816, L_73, /*hidden argument*/&String_Concat_m548_MethodInfo);
		NotSupportedException_t84 * L_75 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_75, L_74, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_75);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FormatterAssemblyStyle_t1745_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo FormatterTypeStyle_t1746_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTyMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeFilterLevel_t1747_il2cpp_TypeInfo;
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterLMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo Convert_ChangeType_m10374_MethodInfo;
extern MethodInfo Convert_ToBoolean_m3872_MethodInfo;
extern MethodInfo Convert_ToInt16_m10271_MethodInfo;
extern MethodInfo Convert_ToInt64_m10301_MethodInfo;
extern MethodInfo Convert_ToString_m10331_MethodInfo;


// System.Void System.Runtime.Serialization.FormatterConverter::.ctor()
extern "C" void FormatterConverter__ctor_m9368 (FormatterConverter_t1748 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Object System.Runtime.Serialization.FormatterConverter::Convert(System.Object,System.Type)
extern MethodInfo FormatterConverter_Convert_m9369_MethodInfo;
extern "C" Object_t * FormatterConverter_Convert_m9369 (FormatterConverter_t1748 * __this, Object_t * ___value, Type_t * ___type, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		Object_t * L_2 = Convert_ChangeType_m10374(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Convert_ChangeType_m10374_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Runtime.Serialization.FormatterConverter::ToBoolean(System.Object)
extern MethodInfo FormatterConverter_ToBoolean_m9370_MethodInfo;
extern "C" bool FormatterConverter_ToBoolean_m9370 (FormatterConverter_t1748 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1826, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		bool L_3 = Convert_ToBoolean_m3872(NULL /*static, unused*/, L_2, /*hidden argument*/&Convert_ToBoolean_m3872_MethodInfo);
		return L_3;
	}
}
// System.Int16 System.Runtime.Serialization.FormatterConverter::ToInt16(System.Object)
extern MethodInfo FormatterConverter_ToInt16_m9371_MethodInfo;
extern "C" int16_t FormatterConverter_ToInt16_m9371 (FormatterConverter_t1748 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1826, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		int16_t L_3 = Convert_ToInt16_m10271(NULL /*static, unused*/, L_2, /*hidden argument*/&Convert_ToInt16_m10271_MethodInfo);
		return L_3;
	}
}
// System.Int32 System.Runtime.Serialization.FormatterConverter::ToInt32(System.Object)
extern MethodInfo FormatterConverter_ToInt32_m9372_MethodInfo;
extern "C" int32_t FormatterConverter_ToInt32_m9372 (FormatterConverter_t1748 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1826, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		int32_t L_3 = Convert_ToInt32_m3869(NULL /*static, unused*/, L_2, /*hidden argument*/&Convert_ToInt32_m3869_MethodInfo);
		return L_3;
	}
}
// System.Int64 System.Runtime.Serialization.FormatterConverter::ToInt64(System.Object)
extern MethodInfo FormatterConverter_ToInt64_m9373_MethodInfo;
extern "C" int64_t FormatterConverter_ToInt64_m9373 (FormatterConverter_t1748 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1826, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		int64_t L_3 = Convert_ToInt64_m10301(NULL /*static, unused*/, L_2, /*hidden argument*/&Convert_ToInt64_m10301_MethodInfo);
		return L_3;
	}
}
// System.String System.Runtime.Serialization.FormatterConverter::ToString(System.Object)
extern MethodInfo FormatterConverter_ToString_m9374_MethodInfo;
extern "C" String_t* FormatterConverter_ToString_m9374 (FormatterConverter_t1748 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1826, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t744_il2cpp_TypeInfo));
		String_t* L_3 = Convert_ToString_m10331(NULL /*static, unused*/, L_2, /*hidden argument*/&Convert_ToString_m10331_MethodInfo);
		return L_3;
	}
}
// System.Runtime.Serialization.FormatterServices
#include "mscorlib_System_Runtime_Serialization_FormatterServices.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FormatterServices_t1749_il2cpp_TypeInfo;



// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
extern "C" Object_t * FormatterServices_GetUninitializedObject_m9375 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1075, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t395 * L_4 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_4, (String_t*) &_stringLiteral1827, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		Type_t * L_5 = ___type;
		Object_t * L_6 = ActivationServices_AllocateUninitializedClassInstance_m9055(NULL /*static, unused*/, L_5, /*hidden argument*/&ActivationServices_AllocateUninitializedClassInstance_m9055_MethodInfo);
		return L_6;
	}
}
// System.Object System.Runtime.Serialization.FormatterServices::GetSafeUninitializedObject(System.Type)
extern "C" Object_t * FormatterServices_GetSafeUninitializedObject_m9376 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		Object_t * L_1 = FormatterServices_GetUninitializedObject_m9375(NULL /*static, unused*/, L_0, /*hidden argument*/&FormatterServices_GetUninitializedObject_m9375_MethodInfo);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.ObjectRecord
#include "mscorlib_System_Runtime_Serialization_ObjectRecord.h"
// System.Runtime.Serialization.SerializationCallbacks
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacks_0.h"
// System.Runtime.Serialization.ObjectRecordStatus
#include "mscorlib_System_Runtime_Serialization_ObjectRecordStatus.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Runtime.Serialization.BaseFixupRecord
#include "mscorlib_System_Runtime_Serialization_BaseFixupRecord.h"
// System.Runtime.Serialization.ArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_ArrayFixupRecord.h"
// System.Runtime.Serialization.MultiArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_MultiArrayFixupRecord.h"
// System.Runtime.Serialization.DelayedFixupRecord
#include "mscorlib_System_Runtime_Serialization_DelayedFixupRecord.h"
// System.Runtime.Serialization.FixupRecord
#include "mscorlib_System_Runtime_Serialization_FixupRecord.h"
extern TypeInfo ObjectRecord_t1750_il2cpp_TypeInfo;
extern TypeInfo IDeserializationCallback_t1237_il2cpp_TypeInfo;
extern TypeInfo SerializationCallbacks_t1762_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t758_il2cpp_TypeInfo;
extern TypeInfo BaseFixupRecord_t1751_il2cpp_TypeInfo;
extern TypeInfo ArrayFixupRecord_t1752_il2cpp_TypeInfo;
extern TypeInfo MultiArrayFixupRecord_t1753_il2cpp_TypeInfo;
extern TypeInfo DelayedFixupRecord_t1755_il2cpp_TypeInfo;
extern TypeInfo FixupRecord_t1754_il2cpp_TypeInfo;
// System.Runtime.Serialization.ObjectRecord
#include "mscorlib_System_Runtime_Serialization_ObjectRecordMethodDeclarations.h"
// System.Runtime.Serialization.SerializationCallbacks
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacks_0MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Runtime.Serialization.ArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_ArrayFixupRecordMethodDeclarations.h"
// System.Runtime.Serialization.MultiArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_MultiArrayFixupRecordMethodDeclarations.h"
// System.Runtime.Serialization.DelayedFixupRecord
#include "mscorlib_System_Runtime_Serialization_DelayedFixupRecordMethodDeclarations.h"
// System.Runtime.Serialization.FixupRecord
#include "mscorlib_System_Runtime_Serialization_FixupRecordMethodDeclarations.h"
extern MethodInfo Hashtable_get_Count_m5434_MethodInfo;
extern MethodInfo ObjectRecord_get_IsUnsolvedObjectReference_m9406_MethodInfo;
extern MethodInfo ObjectRecord_DoFixups_m9408_MethodInfo;
extern MethodInfo ObjectRecord_LoadData_m9412_MethodInfo;
extern MethodInfo SerializationCallbacks_GetSerializationCallbacks_m9426_MethodInfo;
extern MethodInfo SerializationCallbacks_get_HasDeserializedCallbacks_m9421_MethodInfo;
extern MethodInfo String_Concat_m1800_MethodInfo;
extern MethodInfo ObjectRecord__ctor_m9401_MethodInfo;
extern MethodInfo ObjectRecord_get_IsRegistered_m9407_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m3918_MethodInfo;
extern MethodInfo ObjectManager_RaiseOnDeserializedEvent_m9383_MethodInfo;
extern MethodInfo IDeserializationCallback_OnDeserialization_m11035_MethodInfo;
extern MethodInfo SerializationCallbacks_RaiseOnDeserializing_m9424_MethodInfo;
extern MethodInfo SerializationCallbacks_RaiseOnDeserialized_m9425_MethodInfo;
extern MethodInfo ObjectRecord_ChainFixup_m9411_MethodInfo;
extern MethodInfo ObjectManager_GetObjectRecord_m9379_MethodInfo;
extern MethodInfo ArrayFixupRecord__ctor_m9393_MethodInfo;
extern MethodInfo ObjectManager_AddFixup_m9384_MethodInfo;
extern MethodInfo MultiArrayFixupRecord__ctor_m9395_MethodInfo;
extern MethodInfo DelayedFixupRecord__ctor_m9399_MethodInfo;
extern MethodInfo FixupRecord__ctor_m9397_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m5229_MethodInfo;
extern MethodInfo ObjectManager_RegisterObjectInternal_m9389_MethodInfo;


// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjectManager__ctor_m9377 (ObjectManager_t1743 * __this, Object_t * ___selector, StreamingContext_t709  ___context, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList_t1020 * L_0 = (ArrayList_t1020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList__ctor_m5240(L_0, /*hidden argument*/&ArrayList__ctor_m5240_MethodInfo);
		__this->____deserializedRecords_2 = L_0;
		ArrayList_t1020 * L_1 = (ArrayList_t1020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1020_il2cpp_TypeInfo));
		ArrayList__ctor_m5240(L_1, /*hidden argument*/&ArrayList__ctor_m5240_MethodInfo);
		__this->____onDeserializedCallbackRecords_3 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable_t1007 * L_2 = (Hashtable_t1007 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		Hashtable__ctor_m5424(L_2, /*hidden argument*/&Hashtable__ctor_m5424_MethodInfo);
		__this->____objectRecords_4 = L_2;
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t * L_3 = ___selector;
		__this->____selector_6 = L_3;
		StreamingContext_t709  L_4 = ___context;
		__this->____context_7 = L_4;
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
extern "C" void ObjectManager_DoFixups_m9378 (ObjectManager_t1743 * __this, MethodInfo* method)
{
	ObjectRecord_t1750 * V_0 = {0};
	bool V_1 = false;
	ObjectRecord_t1750 * V_2 = {0};
	bool V_3 = false;
	ObjectRecord_t1750 * V_4 = {0};
	SerializationCallbacks_t1762 * V_5 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B7_0 = 0;
	{
		__this->____finalFixup_5 = 1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (__this->____registeredObjectsCount_8);
			Hashtable_t1007 * L_1 = (__this->____objectRecords_4);
			NullCheck(L_1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Hashtable_get_Count_m5434_MethodInfo, L_1);
			if ((((int32_t)L_0) >= ((int32_t)L_2)))
			{
				goto IL_0025;
			}
		}

IL_001a:
		{
			SerializationException_t1190 * L_3 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
			SerializationException__ctor_m5246(L_3, (String_t*) &_stringLiteral1828, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
			il2cpp_codegen_raise_exception(L_3);
		}

IL_0025:
		{
			ObjectRecord_t1750 * L_4 = (__this->____lastObjectRecord_1);
			V_0 = L_4;
			V_1 = 1;
			ObjectRecord_t1750 * L_5 = (__this->____objectRecordChain_0);
			V_2 = L_5;
			goto IL_0136;
		}

IL_003a:
		{
			ObjectRecord_t1750 * L_6 = V_2;
			NullCheck(L_6);
			bool L_7 = ObjectRecord_get_IsUnsolvedObjectReference_m9406(L_6, /*hidden argument*/&ObjectRecord_get_IsUnsolvedObjectReference_m9406_MethodInfo);
			if (!L_7)
			{
				goto IL_0045;
			}
		}

IL_0042:
		{
			bool L_8 = V_1;
			G_B7_0 = ((int32_t)(L_8));
			goto IL_0046;
		}

IL_0045:
		{
			G_B7_0 = 0;
		}

IL_0046:
		{
			V_3 = ((((int32_t)G_B7_0) == ((int32_t)0))? 1 : 0);
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0057;
			}
		}

IL_004d:
		{
			ObjectRecord_t1750 * L_10 = V_2;
			NullCheck(L_10);
			bool L_11 = ObjectRecord_DoFixups_m9408(L_10, 1, __this, 1, /*hidden argument*/&ObjectRecord_DoFixups_m9408_MethodInfo);
			V_3 = L_11;
		}

IL_0057:
		{
			bool L_12 = V_3;
			if (!L_12)
			{
				goto IL_006e;
			}
		}

IL_005a:
		{
			ObjectRecord_t1750 * L_13 = V_2;
			Object_t * L_14 = (__this->____selector_6);
			StreamingContext_t709  L_15 = (__this->____context_7);
			NullCheck(L_13);
			bool L_16 = ObjectRecord_LoadData_m9412(L_13, __this, L_14, L_15, /*hidden argument*/&ObjectRecord_LoadData_m9412_MethodInfo);
			V_3 = L_16;
		}

IL_006e:
		{
			bool L_17 = V_3;
			if (!L_17)
			{
				goto IL_00bd;
			}
		}

IL_0071:
		{
			ObjectRecord_t1750 * L_18 = V_2;
			NullCheck(L_18);
			Object_t * L_19 = (L_18->___OriginalObject_1);
			if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IDeserializationCallback_t1237_il2cpp_TypeInfo))))
			{
				goto IL_008b;
			}
		}

IL_007e:
		{
			ArrayList_t1020 * L_20 = (__this->____deserializedRecords_2);
			ObjectRecord_t1750 * L_21 = V_2;
			NullCheck(L_20);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_20, L_21);
		}

IL_008b:
		{
			ObjectRecord_t1750 * L_22 = V_2;
			NullCheck(L_22);
			Object_t * L_23 = (L_22->___OriginalObject_1);
			NullCheck(L_23);
			Type_t * L_24 = Object_GetType_m1903(L_23, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SerializationCallbacks_t1762_il2cpp_TypeInfo));
			SerializationCallbacks_t1762 * L_25 = SerializationCallbacks_GetSerializationCallbacks_m9426(NULL /*static, unused*/, L_24, /*hidden argument*/&SerializationCallbacks_GetSerializationCallbacks_m9426_MethodInfo);
			V_5 = L_25;
			SerializationCallbacks_t1762 * L_26 = V_5;
			NullCheck(L_26);
			bool L_27 = SerializationCallbacks_get_HasDeserializedCallbacks_m9421(L_26, /*hidden argument*/&SerializationCallbacks_get_HasDeserializedCallbacks_m9421_MethodInfo);
			if (!L_27)
			{
				goto IL_00b3;
			}
		}

IL_00a6:
		{
			ArrayList_t1020 * L_28 = (__this->____onDeserializedCallbackRecords_3);
			ObjectRecord_t1750 * L_29 = V_2;
			NullCheck(L_28);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m5251_MethodInfo, L_28, L_29);
		}

IL_00b3:
		{
			ObjectRecord_t1750 * L_30 = V_2;
			NullCheck(L_30);
			ObjectRecord_t1750 * L_31 = (L_30->___Next_12);
			V_4 = L_31;
			goto IL_012d;
		}

IL_00bd:
		{
			ObjectRecord_t1750 * L_32 = V_2;
			NullCheck(L_32);
			Object_t * L_33 = (L_32->___ObjectInstance_2);
			if (!((Object_t *)IsInst(L_33, InitializedTypeInfo(&IObjectReference_t1969_il2cpp_TypeInfo))))
			{
				goto IL_00fd;
			}
		}

IL_00ca:
		{
			bool L_34 = V_1;
			if (L_34)
			{
				goto IL_00fd;
			}
		}

IL_00cd:
		{
			ObjectRecord_t1750 * L_35 = V_2;
			NullCheck(L_35);
			uint8_t L_36 = (L_35->___Status_0);
			if ((!(((uint32_t)L_36) == ((uint32_t)2))))
			{
				goto IL_00f6;
			}
		}

IL_00d6:
		{
			ObjectRecord_t1750 * L_37 = V_2;
			NullCheck(L_37);
			int64_t L_38 = (L_37->___ObjectID_3);
			int64_t L_39 = L_38;
			Object_t * L_40 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_39);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_41 = String_Concat_m1800(NULL /*static, unused*/, (String_t*) &_stringLiteral1829, L_40, (String_t*) &_stringLiteral1830, /*hidden argument*/&String_Concat_m1800_MethodInfo);
			SerializationException_t1190 * L_42 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
			SerializationException__ctor_m5246(L_42, L_41, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
			il2cpp_codegen_raise_exception(L_42);
		}

IL_00f6:
		{
			ObjectRecord_t1750 * L_43 = V_2;
			NullCheck(L_43);
			L_43->___Status_0 = 2;
		}

IL_00fd:
		{
			ObjectRecord_t1750 * L_44 = V_2;
			ObjectRecord_t1750 * L_45 = (__this->____lastObjectRecord_1);
			if ((((Object_t*)(ObjectRecord_t1750 *)L_44) == ((Object_t*)(ObjectRecord_t1750 *)L_45)))
			{
				goto IL_012a;
			}
		}

IL_0106:
		{
			ObjectRecord_t1750 * L_46 = V_2;
			NullCheck(L_46);
			ObjectRecord_t1750 * L_47 = (L_46->___Next_12);
			V_4 = L_47;
			ObjectRecord_t1750 * L_48 = V_2;
			NullCheck(L_48);
			L_48->___Next_12 = (ObjectRecord_t1750 *)NULL;
			ObjectRecord_t1750 * L_49 = (__this->____lastObjectRecord_1);
			ObjectRecord_t1750 * L_50 = V_2;
			NullCheck(L_49);
			L_49->___Next_12 = L_50;
			ObjectRecord_t1750 * L_51 = V_2;
			__this->____lastObjectRecord_1 = L_51;
			goto IL_012d;
		}

IL_012a:
		{
			ObjectRecord_t1750 * L_52 = V_2;
			V_4 = L_52;
		}

IL_012d:
		{
			ObjectRecord_t1750 * L_53 = V_2;
			ObjectRecord_t1750 * L_54 = V_0;
			if ((!(((Object_t*)(ObjectRecord_t1750 *)L_53) == ((Object_t*)(ObjectRecord_t1750 *)L_54))))
			{
				goto IL_0133;
			}
		}

IL_0131:
		{
			V_1 = 0;
		}

IL_0133:
		{
			ObjectRecord_t1750 * L_55 = V_4;
			V_2 = L_55;
		}

IL_0136:
		{
			ObjectRecord_t1750 * L_56 = V_2;
			if (L_56)
			{
				goto IL_003a;
			}
		}

IL_013c:
		{
			IL2CPP_LEAVE(0x146, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		__this->____finalFixup_5 = 0;
		IL2CPP_END_FINALLY(318)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_JUMP_TBL(0x146, IL_0146)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_0146:
	{
		return;
	}
}
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
extern "C" ObjectRecord_t1750 * ObjectManager_GetObjectRecord_m9379 (ObjectManager_t1743 * __this, int64_t ___objectID, MethodInfo* method)
{
	ObjectRecord_t1750 * V_0 = {0};
	{
		Hashtable_t1007 * L_0 = (__this->____objectRecords_4);
		int64_t L_1 = ___objectID;
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m5249_MethodInfo, L_0, L_3);
		V_0 = ((ObjectRecord_t1750 *)Castclass(L_4, InitializedTypeInfo(&ObjectRecord_t1750_il2cpp_TypeInfo)));
		ObjectRecord_t1750 * L_5 = V_0;
		if (L_5)
		{
			goto IL_005c;
		}
	}
	{
		bool L_6 = (__this->____finalFixup_5);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		int64_t L_7 = ___objectID;
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = String_Concat_m1800(NULL /*static, unused*/, (String_t*) &_stringLiteral1831, L_9, (String_t*) &_stringLiteral1832, /*hidden argument*/&String_Concat_m1800_MethodInfo);
		SerializationException_t1190 * L_11 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_11, L_10, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_003d:
	{
		ObjectRecord_t1750 * L_12 = (ObjectRecord_t1750 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectRecord_t1750_il2cpp_TypeInfo));
		ObjectRecord__ctor_m9401(L_12, /*hidden argument*/&ObjectRecord__ctor_m9401_MethodInfo);
		V_0 = L_12;
		ObjectRecord_t1750 * L_13 = V_0;
		int64_t L_14 = ___objectID;
		NullCheck(L_13);
		L_13->___ObjectID_3 = L_14;
		Hashtable_t1007 * L_15 = (__this->____objectRecords_4);
		int64_t L_16 = ___objectID;
		int64_t L_17 = L_16;
		Object_t * L_18 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_17);
		ObjectRecord_t1750 * L_19 = V_0;
		NullCheck(L_15);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_set_Item_m5432_MethodInfo, L_15, L_18, L_19);
	}

IL_005c:
	{
		ObjectRecord_t1750 * L_20 = V_0;
		NullCheck(L_20);
		bool L_21 = ObjectRecord_get_IsRegistered_m9407(L_20, /*hidden argument*/&ObjectRecord_get_IsRegistered_m9407_MethodInfo);
		if (L_21)
		{
			goto IL_0087;
		}
	}
	{
		bool L_22 = (__this->____finalFixup_5);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		int64_t L_23 = ___objectID;
		int64_t L_24 = L_23;
		Object_t * L_25 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_24);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_26 = String_Concat_m1800(NULL /*static, unused*/, (String_t*) &_stringLiteral1831, L_25, (String_t*) &_stringLiteral1832, /*hidden argument*/&String_Concat_m1800_MethodInfo);
		SerializationException_t1190 * L_27 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_27, L_26, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_0087:
	{
		ObjectRecord_t1750 * L_28 = V_0;
		return L_28;
	}
}
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
extern "C" Object_t * ObjectManager_GetObject_m9380 (ObjectManager_t1743 * __this, int64_t ___objectID, MethodInfo* method)
{
	ObjectRecord_t1750 * V_0 = {0};
	{
		int64_t L_0 = ___objectID;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_1 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_1, (String_t*) &_stringLiteral1833, (String_t*) &_stringLiteral1834, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		Hashtable_t1007 * L_2 = (__this->____objectRecords_4);
		int64_t L_3 = ___objectID;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m5249_MethodInfo, L_2, L_5);
		V_0 = ((ObjectRecord_t1750 *)Castclass(L_6, InitializedTypeInfo(&ObjectRecord_t1750_il2cpp_TypeInfo)));
		ObjectRecord_t1750 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ObjectRecord_t1750 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = ObjectRecord_get_IsRegistered_m9407(L_8, /*hidden argument*/&ObjectRecord_get_IsRegistered_m9407_MethodInfo);
		if (L_9)
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		return NULL;
	}

IL_0039:
	{
		ObjectRecord_t1750 * L_10 = V_0;
		NullCheck(L_10);
		Object_t * L_11 = (L_10->___ObjectInstance_2);
		return L_11;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
extern "C" void ObjectManager_RaiseDeserializationEvent_m9381 (ObjectManager_t1743 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	ObjectRecord_t1750 * V_1 = {0};
	int32_t V_2 = 0;
	ObjectRecord_t1750 * V_3 = {0};
	Object_t * V_4 = {0};
	{
		ArrayList_t1020 * L_0 = (__this->____onDeserializedCallbackRecords_3);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m5236_MethodInfo, L_0);
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_0032;
	}

IL_0010:
	{
		ArrayList_t1020 * L_2 = (__this->____onDeserializedCallbackRecords_3);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m5238_MethodInfo, L_2, L_3);
		V_1 = ((ObjectRecord_t1750 *)Castclass(L_4, InitializedTypeInfo(&ObjectRecord_t1750_il2cpp_TypeInfo)));
		ObjectRecord_t1750 * L_5 = V_1;
		NullCheck(L_5);
		Object_t * L_6 = (L_5->___OriginalObject_1);
		ObjectManager_RaiseOnDeserializedEvent_m9383(__this, L_6, /*hidden argument*/&ObjectManager_RaiseOnDeserializedEvent_m9383_MethodInfo);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0032:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		ArrayList_t1020 * L_9 = (__this->____deserializedRecords_2);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m5236_MethodInfo, L_9);
		V_2 = ((int32_t)((int32_t)L_10-(int32_t)1));
		goto IL_0075;
	}

IL_0046:
	{
		ArrayList_t1020 * L_11 = (__this->____deserializedRecords_2);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m5238_MethodInfo, L_11, L_12);
		V_3 = ((ObjectRecord_t1750 *)Castclass(L_13, InitializedTypeInfo(&ObjectRecord_t1750_il2cpp_TypeInfo)));
		ObjectRecord_t1750 * L_14 = V_3;
		NullCheck(L_14);
		Object_t * L_15 = (L_14->___OriginalObject_1);
		V_4 = ((Object_t *)IsInst(L_15, InitializedTypeInfo(&IDeserializationCallback_t1237_il2cpp_TypeInfo)));
		Object_t * L_16 = V_4;
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		Object_t * L_17 = V_4;
		NullCheck(L_17);
		InterfaceActionInvoker1< Object_t * >::Invoke(&IDeserializationCallback_OnDeserialization_m11035_MethodInfo, L_17, __this);
	}

IL_0071:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18-(int32_t)1));
	}

IL_0075:
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
extern "C" void ObjectManager_RaiseOnDeserializingEvent_m9382 (ObjectManager_t1743 * __this, Object_t * ___obj, MethodInfo* method)
{
	SerializationCallbacks_t1762 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1903(L_0, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SerializationCallbacks_t1762_il2cpp_TypeInfo));
		SerializationCallbacks_t1762 * L_2 = SerializationCallbacks_GetSerializationCallbacks_m9426(NULL /*static, unused*/, L_1, /*hidden argument*/&SerializationCallbacks_GetSerializationCallbacks_m9426_MethodInfo);
		V_0 = L_2;
		SerializationCallbacks_t1762 * L_3 = V_0;
		Object_t * L_4 = ___obj;
		StreamingContext_t709  L_5 = (__this->____context_7);
		NullCheck(L_3);
		SerializationCallbacks_RaiseOnDeserializing_m9424(L_3, L_4, L_5, /*hidden argument*/&SerializationCallbacks_RaiseOnDeserializing_m9424_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
extern "C" void ObjectManager_RaiseOnDeserializedEvent_m9383 (ObjectManager_t1743 * __this, Object_t * ___obj, MethodInfo* method)
{
	SerializationCallbacks_t1762 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1903(L_0, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SerializationCallbacks_t1762_il2cpp_TypeInfo));
		SerializationCallbacks_t1762 * L_2 = SerializationCallbacks_GetSerializationCallbacks_m9426(NULL /*static, unused*/, L_1, /*hidden argument*/&SerializationCallbacks_GetSerializationCallbacks_m9426_MethodInfo);
		V_0 = L_2;
		SerializationCallbacks_t1762 * L_3 = V_0;
		Object_t * L_4 = ___obj;
		StreamingContext_t709  L_5 = (__this->____context_7);
		NullCheck(L_3);
		SerializationCallbacks_RaiseOnDeserialized_m9425(L_3, L_4, L_5, /*hidden argument*/&SerializationCallbacks_RaiseOnDeserialized_m9425_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
extern "C" void ObjectManager_AddFixup_m9384 (ObjectManager_t1743 * __this, BaseFixupRecord_t1751 * ___record, MethodInfo* method)
{
	{
		BaseFixupRecord_t1751 * L_0 = ___record;
		NullCheck(L_0);
		ObjectRecord_t1750 * L_1 = (L_0->___ObjectToBeFixed_0);
		BaseFixupRecord_t1751 * L_2 = ___record;
		NullCheck(L_1);
		ObjectRecord_ChainFixup_m9411(L_1, L_2, 1, /*hidden argument*/&ObjectRecord_ChainFixup_m9411_MethodInfo);
		BaseFixupRecord_t1751 * L_3 = ___record;
		NullCheck(L_3);
		ObjectRecord_t1750 * L_4 = (L_3->___ObjectRequired_1);
		BaseFixupRecord_t1751 * L_5 = ___record;
		NullCheck(L_4);
		ObjectRecord_ChainFixup_m9411(L_4, L_5, 0, /*hidden argument*/&ObjectRecord_ChainFixup_m9411_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
extern "C" void ObjectManager_RecordArrayElementFixup_m9385 (ObjectManager_t1743 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, MethodInfo* method)
{
	ArrayFixupRecord_t1752 * V_0 = {0};
	{
		int64_t L_0 = ___arrayToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_1 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_1, (String_t*) &_stringLiteral1835, (String_t*) &_stringLiteral1836, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_3 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_3, (String_t*) &_stringLiteral1837, (String_t*) &_stringLiteral1838, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		int64_t L_4 = ___arrayToBeFixed;
		ObjectRecord_t1750 * L_5 = ObjectManager_GetObjectRecord_m9379(__this, L_4, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		int32_t L_6 = ___index;
		int64_t L_7 = ___objectRequired;
		ObjectRecord_t1750 * L_8 = ObjectManager_GetObjectRecord_m9379(__this, L_7, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		ArrayFixupRecord_t1752 * L_9 = (ArrayFixupRecord_t1752 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayFixupRecord_t1752_il2cpp_TypeInfo));
		ArrayFixupRecord__ctor_m9393(L_9, L_5, L_6, L_8, /*hidden argument*/&ArrayFixupRecord__ctor_m9393_MethodInfo);
		V_0 = L_9;
		ArrayFixupRecord_t1752 * L_10 = V_0;
		ObjectManager_AddFixup_m9384(__this, L_10, /*hidden argument*/&ObjectManager_AddFixup_m9384_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
extern "C" void ObjectManager_RecordArrayElementFixup_m9386 (ObjectManager_t1743 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t109* ___indices, int64_t ___objectRequired, MethodInfo* method)
{
	MultiArrayFixupRecord_t1753 * V_0 = {0};
	{
		int64_t L_0 = ___arrayToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_1 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_1, (String_t*) &_stringLiteral1835, (String_t*) &_stringLiteral1836, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_3 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_3, (String_t*) &_stringLiteral1837, (String_t*) &_stringLiteral1838, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		Int32U5BU5D_t109* L_4 = ___indices;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentNullException_t754 * L_5 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_5, (String_t*) &_stringLiteral1192, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0038:
	{
		int64_t L_6 = ___arrayToBeFixed;
		ObjectRecord_t1750 * L_7 = ObjectManager_GetObjectRecord_m9379(__this, L_6, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		Int32U5BU5D_t109* L_8 = ___indices;
		int64_t L_9 = ___objectRequired;
		ObjectRecord_t1750 * L_10 = ObjectManager_GetObjectRecord_m9379(__this, L_9, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		MultiArrayFixupRecord_t1753 * L_11 = (MultiArrayFixupRecord_t1753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MultiArrayFixupRecord_t1753_il2cpp_TypeInfo));
		MultiArrayFixupRecord__ctor_m9395(L_11, L_7, L_8, L_10, /*hidden argument*/&MultiArrayFixupRecord__ctor_m9395_MethodInfo);
		V_0 = L_11;
		MultiArrayFixupRecord_t1753 * L_12 = V_0;
		ObjectManager_AddFixup_m9384(__this, L_12, /*hidden argument*/&ObjectManager_AddFixup_m9384_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
extern "C" void ObjectManager_RecordDelayedFixup_m9387 (ObjectManager_t1743 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, MethodInfo* method)
{
	DelayedFixupRecord_t1755 * V_0 = {0};
	{
		int64_t L_0 = ___objectToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_1 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_1, (String_t*) &_stringLiteral1839, (String_t*) &_stringLiteral1840, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_3 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_3, (String_t*) &_stringLiteral1837, (String_t*) &_stringLiteral1838, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		String_t* L_4 = ___memberName;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentNullException_t754 * L_5 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_5, (String_t*) &_stringLiteral1841, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0038:
	{
		int64_t L_6 = ___objectToBeFixed;
		ObjectRecord_t1750 * L_7 = ObjectManager_GetObjectRecord_m9379(__this, L_6, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		String_t* L_8 = ___memberName;
		int64_t L_9 = ___objectRequired;
		ObjectRecord_t1750 * L_10 = ObjectManager_GetObjectRecord_m9379(__this, L_9, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		DelayedFixupRecord_t1755 * L_11 = (DelayedFixupRecord_t1755 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DelayedFixupRecord_t1755_il2cpp_TypeInfo));
		DelayedFixupRecord__ctor_m9399(L_11, L_7, L_8, L_10, /*hidden argument*/&DelayedFixupRecord__ctor_m9399_MethodInfo);
		V_0 = L_11;
		DelayedFixupRecord_t1755 * L_12 = V_0;
		ObjectManager_AddFixup_m9384(__this, L_12, /*hidden argument*/&ObjectManager_AddFixup_m9384_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
extern "C" void ObjectManager_RecordFixup_m9388 (ObjectManager_t1743 * __this, int64_t ___objectToBeFixed, MemberInfo_t * ___member, int64_t ___objectRequired, MethodInfo* method)
{
	FixupRecord_t1754 * V_0 = {0};
	{
		int64_t L_0 = ___objectToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_1 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_1, (String_t*) &_stringLiteral1839, (String_t*) &_stringLiteral1840, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_3 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_3, (String_t*) &_stringLiteral1837, (String_t*) &_stringLiteral1838, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		MemberInfo_t * L_4 = ___member;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentNullException_t754 * L_5 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_5, (String_t*) &_stringLiteral1842, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0038:
	{
		int64_t L_6 = ___objectToBeFixed;
		ObjectRecord_t1750 * L_7 = ObjectManager_GetObjectRecord_m9379(__this, L_6, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		MemberInfo_t * L_8 = ___member;
		int64_t L_9 = ___objectRequired;
		ObjectRecord_t1750 * L_10 = ObjectManager_GetObjectRecord_m9379(__this, L_9, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		FixupRecord_t1754 * L_11 = (FixupRecord_t1754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FixupRecord_t1754_il2cpp_TypeInfo));
		FixupRecord__ctor_m9397(L_11, L_7, L_8, L_10, /*hidden argument*/&FixupRecord__ctor_m9397_MethodInfo);
		V_0 = L_11;
		FixupRecord_t1754 * L_12 = V_0;
		ObjectManager_AddFixup_m9384(__this, L_12, /*hidden argument*/&ObjectManager_AddFixup_m9384_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
extern "C" void ObjectManager_RegisterObjectInternal_m9389 (ObjectManager_t1743 * __this, Object_t * ___obj, ObjectRecord_t1750 * ___record, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1377, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectRecord_t1750 * L_2 = ___record;
		NullCheck(L_2);
		bool L_3 = ObjectRecord_get_IsRegistered_m9407(L_2, /*hidden argument*/&ObjectRecord_get_IsRegistered_m9407_MethodInfo);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		ObjectRecord_t1750 * L_4 = ___record;
		NullCheck(L_4);
		Object_t * L_5 = (L_4->___OriginalObject_1);
		Object_t * L_6 = ___obj;
		if ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6)))
		{
			goto IL_003f;
		}
	}
	{
		ObjectRecord_t1750 * L_7 = ___record;
		NullCheck(L_7);
		int64_t L_8 = (L_7->___ObjectID_3);
		int64_t L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_11 = String_Concat_m1800(NULL /*static, unused*/, (String_t*) &_stringLiteral1843, L_10, (String_t*) &_stringLiteral1844, /*hidden argument*/&String_Concat_m1800_MethodInfo);
		SerializationException_t1190 * L_12 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_12, L_11, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		ObjectRecord_t1750 * L_13 = ___record;
		Object_t * L_14 = ___obj;
		NullCheck(L_13);
		L_13->___ObjectInstance_2 = L_14;
		ObjectRecord_t1750 * L_15 = ___record;
		Object_t * L_16 = ___obj;
		NullCheck(L_15);
		L_15->___OriginalObject_1 = L_16;
		Object_t * L_17 = ___obj;
		if (!((Object_t *)IsInst(L_17, InitializedTypeInfo(&IObjectReference_t1969_il2cpp_TypeInfo))))
		{
			goto IL_005f;
		}
	}
	{
		ObjectRecord_t1750 * L_18 = ___record;
		NullCheck(L_18);
		L_18->___Status_0 = 1;
		goto IL_0066;
	}

IL_005f:
	{
		ObjectRecord_t1750 * L_19 = ___record;
		NullCheck(L_19);
		L_19->___Status_0 = 3;
	}

IL_0066:
	{
		Object_t * L_20 = (__this->____selector_6);
		if (!L_20)
		{
			goto IL_00a0;
		}
	}
	{
		ObjectRecord_t1750 * L_21 = ___record;
		Object_t * L_22 = (__this->____selector_6);
		Object_t * L_23 = ___obj;
		NullCheck(L_23);
		Type_t * L_24 = Object_GetType_m1903(L_23, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		StreamingContext_t709  L_25 = (__this->____context_7);
		ObjectRecord_t1750 * L_26 = ___record;
		NullCheck(L_26);
		Object_t ** L_27 = &(L_26->___SurrogateSelector_7);
		NullCheck(L_22);
		Object_t * L_28 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t709 , Object_t ** >::Invoke(&ISurrogateSelector_GetSurrogate_m11026_MethodInfo, L_22, L_24, L_25, L_27);
		NullCheck(L_21);
		L_21->___Surrogate_6 = L_28;
		ObjectRecord_t1750 * L_29 = ___record;
		NullCheck(L_29);
		Object_t * L_30 = (L_29->___Surrogate_6);
		if (!L_30)
		{
			goto IL_00a0;
		}
	}
	{
		ObjectRecord_t1750 * L_31 = ___record;
		NullCheck(L_31);
		L_31->___Status_0 = 1;
	}

IL_00a0:
	{
		ObjectRecord_t1750 * L_32 = ___record;
		NullCheck(L_32);
		ObjectRecord_DoFixups_m9408(L_32, 1, __this, 0, /*hidden argument*/&ObjectRecord_DoFixups_m9408_MethodInfo);
		ObjectRecord_t1750 * L_33 = ___record;
		NullCheck(L_33);
		ObjectRecord_DoFixups_m9408(L_33, 0, __this, 0, /*hidden argument*/&ObjectRecord_DoFixups_m9408_MethodInfo);
		int32_t L_34 = (__this->____registeredObjectsCount_8);
		__this->____registeredObjectsCount_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		ObjectRecord_t1750 * L_35 = (__this->____objectRecordChain_0);
		if (L_35)
		{
			goto IL_00da;
		}
	}
	{
		ObjectRecord_t1750 * L_36 = ___record;
		__this->____objectRecordChain_0 = L_36;
		ObjectRecord_t1750 * L_37 = ___record;
		__this->____lastObjectRecord_1 = L_37;
		goto IL_00ed;
	}

IL_00da:
	{
		ObjectRecord_t1750 * L_38 = (__this->____lastObjectRecord_1);
		ObjectRecord_t1750 * L_39 = ___record;
		NullCheck(L_38);
		L_38->___Next_12 = L_39;
		ObjectRecord_t1750 * L_40 = ___record;
		__this->____lastObjectRecord_1 = L_40;
	}

IL_00ed:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C" void ObjectManager_RegisterObject_m9390 (ObjectManager_t1743 * __this, Object_t * ___obj, int64_t ___objectID, SerializationInfo_t708 * ___info, int64_t ___idOfContainingObj, MemberInfo_t * ___member, Int32U5BU5D_t109* ___arrayIndex, MethodInfo* method)
{
	ObjectRecord_t1750 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m5229(L_1, (String_t*) &_stringLiteral1377, (String_t*) &_stringLiteral1845, /*hidden argument*/&ArgumentNullException__ctor_m5229_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int64_t L_2 = ___objectID;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_3 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_3, (String_t*) &_stringLiteral1833, (String_t*) &_stringLiteral1834, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		int64_t L_4 = ___objectID;
		ObjectRecord_t1750 * L_5 = ObjectManager_GetObjectRecord_m9379(__this, L_4, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		V_0 = L_5;
		ObjectRecord_t1750 * L_6 = V_0;
		SerializationInfo_t708 * L_7 = ___info;
		NullCheck(L_6);
		L_6->___Info_4 = L_7;
		ObjectRecord_t1750 * L_8 = V_0;
		int64_t L_9 = ___idOfContainingObj;
		NullCheck(L_8);
		L_8->___IdOfContainingObj_5 = L_9;
		ObjectRecord_t1750 * L_10 = V_0;
		MemberInfo_t * L_11 = ___member;
		NullCheck(L_10);
		L_10->___Member_8 = L_11;
		ObjectRecord_t1750 * L_12 = V_0;
		Int32U5BU5D_t109* L_13 = ___arrayIndex;
		NullCheck(L_12);
		L_12->___ArrayIndex_9 = L_13;
		Object_t * L_14 = ___obj;
		ObjectRecord_t1750 * L_15 = V_0;
		ObjectManager_RegisterObjectInternal_m9389(__this, L_14, L_15, /*hidden argument*/&ObjectManager_RegisterObjectInternal_m9389_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.BaseFixupRecord
#include "mscorlib_System_Runtime_Serialization_BaseFixupRecordMethodDeclarations.h"

extern MethodInfo ObjectRecord_get_IsInstanceReady_m9405_MethodInfo;
extern MethodInfo BaseFixupRecord_FixupImpl_m11036_MethodInfo;


// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern MethodInfo BaseFixupRecord__ctor_m9391_MethodInfo;
extern "C" void BaseFixupRecord__ctor_m9391 (BaseFixupRecord_t1751 * __this, ObjectRecord_t1750 * ___objectToBeFixed, ObjectRecord_t1750 * ___objectRequired, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		ObjectRecord_t1750 * L_0 = ___objectToBeFixed;
		__this->___ObjectToBeFixed_0 = L_0;
		ObjectRecord_t1750 * L_1 = ___objectRequired;
		__this->___ObjectRequired_1 = L_1;
		return;
	}
}
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern MethodInfo BaseFixupRecord_DoFixup_m9392_MethodInfo;
extern "C" bool BaseFixupRecord_DoFixup_m9392 (BaseFixupRecord_t1751 * __this, ObjectManager_t1743 * ___manager, bool ___strict, MethodInfo* method)
{
	{
		ObjectRecord_t1750 * L_0 = (__this->___ObjectToBeFixed_0);
		NullCheck(L_0);
		bool L_1 = ObjectRecord_get_IsRegistered_m9407(L_0, /*hidden argument*/&ObjectRecord_get_IsRegistered_m9407_MethodInfo);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		ObjectRecord_t1750 * L_2 = (__this->___ObjectRequired_1);
		NullCheck(L_2);
		bool L_3 = ObjectRecord_get_IsInstanceReady_m9405(L_2, /*hidden argument*/&ObjectRecord_get_IsInstanceReady_m9405_MethodInfo);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		ObjectManager_t1743 * L_4 = ___manager;
		VirtActionInvoker1< ObjectManager_t1743 * >::Invoke(&BaseFixupRecord_FixupImpl_m11036_MethodInfo, __this, L_4);
		return 1;
	}

IL_0023:
	{
		bool L_5 = ___strict;
		if (!L_5)
		{
			goto IL_008c;
		}
	}
	{
		ObjectRecord_t1750 * L_6 = (__this->___ObjectToBeFixed_0);
		NullCheck(L_6);
		bool L_7 = ObjectRecord_get_IsRegistered_m9407(L_6, /*hidden argument*/&ObjectRecord_get_IsRegistered_m9407_MethodInfo);
		if (L_7)
		{
			goto IL_0058;
		}
	}
	{
		ObjectRecord_t1750 * L_8 = (__this->___ObjectToBeFixed_0);
		NullCheck(L_8);
		int64_t L_9 = (L_8->___ObjectID_3);
		int64_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_10);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = String_Concat_m1800(NULL /*static, unused*/, (String_t*) &_stringLiteral1846, L_11, (String_t*) &_stringLiteral1847, /*hidden argument*/&String_Concat_m1800_MethodInfo);
		SerializationException_t1190 * L_13 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_13, L_12, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0058:
	{
		ObjectRecord_t1750 * L_14 = (__this->___ObjectRequired_1);
		NullCheck(L_14);
		bool L_15 = ObjectRecord_get_IsRegistered_m9407(L_14, /*hidden argument*/&ObjectRecord_get_IsRegistered_m9407_MethodInfo);
		if (L_15)
		{
			goto IL_008a;
		}
	}
	{
		ObjectRecord_t1750 * L_16 = (__this->___ObjectRequired_1);
		NullCheck(L_16);
		int64_t L_17 = (L_16->___ObjectID_3);
		int64_t L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_20 = String_Concat_m1800(NULL /*static, unused*/, (String_t*) &_stringLiteral1846, L_19, (String_t*) &_stringLiteral1847, /*hidden argument*/&String_Concat_m1800_MethodInfo);
		SerializationException_t1190 * L_21 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_21, L_20, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_008a:
	{
		return 0;
	}

IL_008c:
	{
		return 0;
	}
}
// System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Array_SetValue_m5232_MethodInfo;


// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m9393 (ArrayFixupRecord_t1752 * __this, ObjectRecord_t1750 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t1750 * ___objectRequired, MethodInfo* method)
{
	{
		ObjectRecord_t1750 * L_0 = ___objectToBeFixed;
		ObjectRecord_t1750 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m9391(__this, L_0, L_1, /*hidden argument*/&BaseFixupRecord__ctor_m9391_MethodInfo);
		int32_t L_2 = ___index;
		__this->____index_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern MethodInfo ArrayFixupRecord_FixupImpl_m9394_MethodInfo;
extern "C" void ArrayFixupRecord_FixupImpl_m9394 (ArrayFixupRecord_t1752 * __this, ObjectManager_t1743 * ___manager, MethodInfo* method)
{
	Array_t * V_0 = {0};
	{
		ObjectRecord_t1750 * L_0 = (__this->___ObjectToBeFixed_0);
		NullCheck(L_0);
		Object_t * L_1 = (L_0->___ObjectInstance_2);
		V_0 = ((Array_t *)Castclass(L_1, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo)));
		Array_t * L_2 = V_0;
		ObjectRecord_t1750 * L_3 = (__this->___ObjectRequired_1);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___ObjectInstance_2);
		int32_t L_5 = (__this->____index_4);
		NullCheck(L_2);
		Array_SetValue_m5232(L_2, L_4, L_5, /*hidden argument*/&Array_SetValue_m5232_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ObjectRecord_SetArrayValue_m9403_MethodInfo;


// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m9395 (MultiArrayFixupRecord_t1753 * __this, ObjectRecord_t1750 * ___objectToBeFixed, Int32U5BU5D_t109* ___indices, ObjectRecord_t1750 * ___objectRequired, MethodInfo* method)
{
	{
		ObjectRecord_t1750 * L_0 = ___objectToBeFixed;
		ObjectRecord_t1750 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m9391(__this, L_0, L_1, /*hidden argument*/&BaseFixupRecord__ctor_m9391_MethodInfo);
		Int32U5BU5D_t109* L_2 = ___indices;
		__this->____indices_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern MethodInfo MultiArrayFixupRecord_FixupImpl_m9396_MethodInfo;
extern "C" void MultiArrayFixupRecord_FixupImpl_m9396 (MultiArrayFixupRecord_t1753 * __this, ObjectManager_t1743 * ___manager, MethodInfo* method)
{
	{
		ObjectRecord_t1750 * L_0 = (__this->___ObjectToBeFixed_0);
		ObjectManager_t1743 * L_1 = ___manager;
		ObjectRecord_t1750 * L_2 = (__this->___ObjectRequired_1);
		NullCheck(L_2);
		Object_t * L_3 = (L_2->___ObjectInstance_2);
		Int32U5BU5D_t109* L_4 = (__this->____indices_4);
		NullCheck(L_0);
		ObjectRecord_SetArrayValue_m9403(L_0, L_1, L_3, L_4, /*hidden argument*/&ObjectRecord_SetArrayValue_m9403_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ObjectRecord_SetMemberValue_m9402_MethodInfo;


// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m9397 (FixupRecord_t1754 * __this, ObjectRecord_t1750 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t1750 * ___objectRequired, MethodInfo* method)
{
	{
		ObjectRecord_t1750 * L_0 = ___objectToBeFixed;
		ObjectRecord_t1750 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m9391(__this, L_0, L_1, /*hidden argument*/&BaseFixupRecord__ctor_m9391_MethodInfo);
		MemberInfo_t * L_2 = ___member;
		__this->____member_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern MethodInfo FixupRecord_FixupImpl_m9398_MethodInfo;
extern "C" void FixupRecord_FixupImpl_m9398 (FixupRecord_t1754 * __this, ObjectManager_t1743 * ___manager, MethodInfo* method)
{
	{
		ObjectRecord_t1750 * L_0 = (__this->___ObjectToBeFixed_0);
		ObjectManager_t1743 * L_1 = ___manager;
		MemberInfo_t * L_2 = (__this->____member_4);
		ObjectRecord_t1750 * L_3 = (__this->___ObjectRequired_1);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___ObjectInstance_2);
		NullCheck(L_0);
		ObjectRecord_SetMemberValue_m9402(L_0, L_1, L_2, L_4, /*hidden argument*/&ObjectRecord_SetMemberValue_m9402_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ObjectRecord_SetMemberValue_m9404_MethodInfo;


// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C" void DelayedFixupRecord__ctor_m9399 (DelayedFixupRecord_t1755 * __this, ObjectRecord_t1750 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t1750 * ___objectRequired, MethodInfo* method)
{
	{
		ObjectRecord_t1750 * L_0 = ___objectToBeFixed;
		ObjectRecord_t1750 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m9391(__this, L_0, L_1, /*hidden argument*/&BaseFixupRecord__ctor_m9391_MethodInfo);
		String_t* L_2 = ___memberName;
		__this->____memberName_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern MethodInfo DelayedFixupRecord_FixupImpl_m9400_MethodInfo;
extern "C" void DelayedFixupRecord_FixupImpl_m9400 (DelayedFixupRecord_t1755 * __this, ObjectManager_t1743 * ___manager, MethodInfo* method)
{
	{
		ObjectRecord_t1750 * L_0 = (__this->___ObjectToBeFixed_0);
		ObjectManager_t1743 * L_1 = ___manager;
		String_t* L_2 = (__this->____memberName_4);
		ObjectRecord_t1750 * L_3 = (__this->___ObjectRequired_1);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___ObjectInstance_2);
		NullCheck(L_0);
		ObjectRecord_SetMemberValue_m9404(L_0, L_1, L_2, L_4, /*hidden argument*/&ObjectRecord_SetMemberValue_m9404_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjectRecordStatus_t1756_il2cpp_TypeInfo;
// System.Runtime.Serialization.ObjectRecordStatus
#include "mscorlib_System_Runtime_Serialization_ObjectRecordStatusMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern TypeInfo ISerializable_t118_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t732_il2cpp_TypeInfo;
extern Il2CppType SerializationInfo_t708_0_0_0;
extern Il2CppType StreamingContext_t709_0_0_0;
extern MethodInfo ObjectRecord_get_HasPendingFixups_m9413_MethodInfo;
extern MethodInfo ObjectRecord_UnchainFixup_m9410_MethodInfo;
extern MethodInfo ObjectRecord_RemoveFixup_m9409_MethodInfo;
extern MethodInfo ISerializationSurrogate_SetObjectData_m11037_MethodInfo;
extern MethodInfo MethodBase_Invoke_m3978_MethodInfo;


// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
extern "C" void ObjectRecord__ctor_m9401 (ObjectRecord_t1750 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
extern "C" void ObjectRecord_SetMemberValue_m9402 (ObjectRecord_t1750 * __this, ObjectManager_t1743 * ___manager, MemberInfo_t * ___member, Object_t * ___value, MethodInfo* method)
{
	ObjectRecord_t1750 * V_0 = {0};
	ObjectRecord_t1750 * V_1 = {0};
	{
		MemberInfo_t * L_0 = ___member;
		if (!((FieldInfo_t *)IsInst(L_0, InitializedTypeInfo(&FieldInfo_t_il2cpp_TypeInfo))))
		{
			goto IL_001c;
		}
	}
	{
		MemberInfo_t * L_1 = ___member;
		Object_t * L_2 = (__this->___ObjectInstance_2);
		Object_t * L_3 = ___value;
		NullCheck(((FieldInfo_t *)Castclass(L_1, InitializedTypeInfo(&FieldInfo_t_il2cpp_TypeInfo))));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&FieldInfo_SetValue_m3980_MethodInfo, ((FieldInfo_t *)Castclass(L_1, InitializedTypeInfo(&FieldInfo_t_il2cpp_TypeInfo))), L_2, L_3);
		goto IL_0044;
	}

IL_001c:
	{
		MemberInfo_t * L_4 = ___member;
		if (!((PropertyInfo_t *)IsInst(L_4, InitializedTypeInfo(&PropertyInfo_t_il2cpp_TypeInfo))))
		{
			goto IL_0039;
		}
	}
	{
		MemberInfo_t * L_5 = ___member;
		Object_t * L_6 = (__this->___ObjectInstance_2);
		Object_t * L_7 = ___value;
		NullCheck(((PropertyInfo_t *)Castclass(L_5, InitializedTypeInfo(&PropertyInfo_t_il2cpp_TypeInfo))));
		VirtActionInvoker3< Object_t *, Object_t *, ObjectU5BU5D_t76* >::Invoke(&PropertyInfo_SetValue_m9002_MethodInfo, ((PropertyInfo_t *)Castclass(L_5, InitializedTypeInfo(&PropertyInfo_t_il2cpp_TypeInfo))), L_6, L_7, (ObjectU5BU5D_t76*)(ObjectU5BU5D_t76*)NULL);
		goto IL_0044;
	}

IL_0039:
	{
		SerializationException_t1190 * L_8 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_8, (String_t*) &_stringLiteral1848, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		MemberInfo_t * L_9 = (__this->___Member_8);
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		ObjectManager_t1743 * L_10 = ___manager;
		int64_t L_11 = (__this->___IdOfContainingObj_5);
		NullCheck(L_10);
		ObjectRecord_t1750 * L_12 = ObjectManager_GetObjectRecord_m9379(L_10, L_11, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		V_0 = L_12;
		ObjectRecord_t1750 * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = ObjectRecord_get_IsRegistered_m9407(L_13, /*hidden argument*/&ObjectRecord_get_IsRegistered_m9407_MethodInfo);
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		ObjectRecord_t1750 * L_15 = V_0;
		ObjectManager_t1743 * L_16 = ___manager;
		MemberInfo_t * L_17 = (__this->___Member_8);
		Object_t * L_18 = (__this->___ObjectInstance_2);
		NullCheck(L_15);
		ObjectRecord_SetMemberValue_m9402(L_15, L_16, L_17, L_18, /*hidden argument*/&ObjectRecord_SetMemberValue_m9402_MethodInfo);
	}

IL_0074:
	{
		goto IL_00a6;
	}

IL_0076:
	{
		Int32U5BU5D_t109* L_19 = (__this->___ArrayIndex_9);
		if (!L_19)
		{
			goto IL_00a6;
		}
	}
	{
		ObjectManager_t1743 * L_20 = ___manager;
		int64_t L_21 = (__this->___IdOfContainingObj_5);
		NullCheck(L_20);
		ObjectRecord_t1750 * L_22 = ObjectManager_GetObjectRecord_m9379(L_20, L_21, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		V_1 = L_22;
		ObjectRecord_t1750 * L_23 = V_1;
		NullCheck(L_23);
		bool L_24 = ObjectRecord_get_IsRegistered_m9407(L_23, /*hidden argument*/&ObjectRecord_get_IsRegistered_m9407_MethodInfo);
		if (!L_24)
		{
			goto IL_00a6;
		}
	}
	{
		ObjectRecord_t1750 * L_25 = V_1;
		ObjectManager_t1743 * L_26 = ___manager;
		Object_t * L_27 = (__this->___ObjectInstance_2);
		Int32U5BU5D_t109* L_28 = (__this->___ArrayIndex_9);
		NullCheck(L_25);
		ObjectRecord_SetArrayValue_m9403(L_25, L_26, L_27, L_28, /*hidden argument*/&ObjectRecord_SetArrayValue_m9403_MethodInfo);
	}

IL_00a6:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
extern "C" void ObjectRecord_SetArrayValue_m9403 (ObjectRecord_t1750 * __this, ObjectManager_t1743 * ___manager, Object_t * ___value, Int32U5BU5D_t109* ___indices, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___ObjectInstance_2);
		Object_t * L_1 = ___value;
		Int32U5BU5D_t109* L_2 = ___indices;
		NullCheck(((Array_t *)Castclass(L_0, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo))));
		Array_SetValue_m7184(((Array_t *)Castclass(L_0, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo))), L_1, L_2, /*hidden argument*/&Array_SetValue_m7184_MethodInfo);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
extern "C" void ObjectRecord_SetMemberValue_m9404 (ObjectRecord_t1750 * __this, ObjectManager_t1743 * ___manager, String_t* ___memberName, Object_t * ___value, MethodInfo* method)
{
	{
		SerializationInfo_t708 * L_0 = (__this->___Info_4);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		SerializationException_t1190 * L_1 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_1, (String_t*) &_stringLiteral1848, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		SerializationInfo_t708 * L_2 = (__this->___Info_4);
		String_t* L_3 = ___memberName;
		Object_t * L_4 = ___value;
		Object_t * L_5 = ___value;
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m1903(L_5, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5242(L_2, L_3, L_4, L_6, /*hidden argument*/&SerializationInfo_AddValue_m5242_MethodInfo);
		return;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
extern "C" bool ObjectRecord_get_IsInstanceReady_m9405 (ObjectRecord_t1750 * __this, MethodInfo* method)
{
	{
		bool L_0 = ObjectRecord_get_IsRegistered_m9407(__this, /*hidden argument*/&ObjectRecord_get_IsRegistered_m9407_MethodInfo);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		bool L_1 = ObjectRecord_get_IsUnsolvedObjectReference_m9406(__this, /*hidden argument*/&ObjectRecord_get_IsUnsolvedObjectReference_m9406_MethodInfo);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		Object_t * L_2 = (__this->___ObjectInstance_2);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m1903(L_2, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m7271_MethodInfo, L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		bool L_5 = ObjectRecord_get_HasPendingFixups_m9413(__this, /*hidden argument*/&ObjectRecord_get_HasPendingFixups_m9413_MethodInfo);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		SerializationInfo_t708 * L_6 = (__this->___Info_4);
		if (!L_6)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		return 0;
	}

IL_0038:
	{
		return 1;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
extern "C" bool ObjectRecord_get_IsUnsolvedObjectReference_m9406 (ObjectRecord_t1750 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___Status_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
extern "C" bool ObjectRecord_get_IsRegistered_m9407 (ObjectRecord_t1750 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___Status_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C" bool ObjectRecord_DoFixups_m9408 (ObjectRecord_t1750 * __this, bool ___asContainer, ObjectManager_t1743 * ___manager, bool ___strict, MethodInfo* method)
{
	BaseFixupRecord_t1751 * V_0 = {0};
	BaseFixupRecord_t1751 * V_1 = {0};
	bool V_2 = false;
	BaseFixupRecord_t1751 * G_B3_0 = {0};
	BaseFixupRecord_t1751 * G_B13_0 = {0};
	{
		V_0 = (BaseFixupRecord_t1751 *)NULL;
		bool L_0 = ___asContainer;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		BaseFixupRecord_t1751 * L_1 = (__this->___FixupChainAsContainer_10);
		G_B3_0 = L_1;
		goto IL_0013;
	}

IL_000d:
	{
		BaseFixupRecord_t1751 * L_2 = (__this->___FixupChainAsRequired_11);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_1 = G_B3_0;
		V_2 = 1;
		goto IL_0062;
	}

IL_0018:
	{
		BaseFixupRecord_t1751 * L_3 = V_1;
		ObjectManager_t1743 * L_4 = ___manager;
		bool L_5 = ___strict;
		NullCheck(L_3);
		bool L_6 = BaseFixupRecord_DoFixup_m9392(L_3, L_4, L_5, /*hidden argument*/&BaseFixupRecord_DoFixup_m9392_MethodInfo);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		BaseFixupRecord_t1751 * L_7 = V_1;
		BaseFixupRecord_t1751 * L_8 = V_0;
		bool L_9 = ___asContainer;
		ObjectRecord_UnchainFixup_m9410(__this, L_7, L_8, L_9, /*hidden argument*/&ObjectRecord_UnchainFixup_m9410_MethodInfo);
		bool L_10 = ___asContainer;
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		BaseFixupRecord_t1751 * L_11 = V_1;
		NullCheck(L_11);
		ObjectRecord_t1750 * L_12 = (L_11->___ObjectRequired_1);
		BaseFixupRecord_t1751 * L_13 = V_1;
		NullCheck(L_12);
		ObjectRecord_RemoveFixup_m9409(L_12, L_13, 0, /*hidden argument*/&ObjectRecord_RemoveFixup_m9409_MethodInfo);
		goto IL_004a;
	}

IL_003d:
	{
		BaseFixupRecord_t1751 * L_14 = V_1;
		NullCheck(L_14);
		ObjectRecord_t1750 * L_15 = (L_14->___ObjectToBeFixed_0);
		BaseFixupRecord_t1751 * L_16 = V_1;
		NullCheck(L_15);
		ObjectRecord_RemoveFixup_m9409(L_15, L_16, 1, /*hidden argument*/&ObjectRecord_RemoveFixup_m9409_MethodInfo);
	}

IL_004a:
	{
		goto IL_0050;
	}

IL_004c:
	{
		BaseFixupRecord_t1751 * L_17 = V_1;
		V_0 = L_17;
		V_2 = 0;
	}

IL_0050:
	{
		bool L_18 = ___asContainer;
		if (!L_18)
		{
			goto IL_005b;
		}
	}
	{
		BaseFixupRecord_t1751 * L_19 = V_1;
		NullCheck(L_19);
		BaseFixupRecord_t1751 * L_20 = (L_19->___NextSameContainer_2);
		G_B13_0 = L_20;
		goto IL_0061;
	}

IL_005b:
	{
		BaseFixupRecord_t1751 * L_21 = V_1;
		NullCheck(L_21);
		BaseFixupRecord_t1751 * L_22 = (L_21->___NextSameRequired_3);
		G_B13_0 = L_22;
	}

IL_0061:
	{
		V_1 = G_B13_0;
	}

IL_0062:
	{
		BaseFixupRecord_t1751 * L_23 = V_1;
		if (L_23)
		{
			goto IL_0018;
		}
	}
	{
		bool L_24 = V_2;
		return L_24;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_RemoveFixup_m9409 (ObjectRecord_t1750 * __this, BaseFixupRecord_t1751 * ___fixupToRemove, bool ___asContainer, MethodInfo* method)
{
	BaseFixupRecord_t1751 * V_0 = {0};
	BaseFixupRecord_t1751 * V_1 = {0};
	BaseFixupRecord_t1751 * G_B3_0 = {0};
	BaseFixupRecord_t1751 * G_B9_0 = {0};
	{
		V_0 = (BaseFixupRecord_t1751 *)NULL;
		bool L_0 = ___asContainer;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		BaseFixupRecord_t1751 * L_1 = (__this->___FixupChainAsContainer_10);
		G_B3_0 = L_1;
		goto IL_0013;
	}

IL_000d:
	{
		BaseFixupRecord_t1751 * L_2 = (__this->___FixupChainAsRequired_11);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_1 = G_B3_0;
		goto IL_0038;
	}

IL_0016:
	{
		BaseFixupRecord_t1751 * L_3 = V_1;
		BaseFixupRecord_t1751 * L_4 = ___fixupToRemove;
		if ((!(((Object_t*)(BaseFixupRecord_t1751 *)L_3) == ((Object_t*)(BaseFixupRecord_t1751 *)L_4))))
		{
			goto IL_0024;
		}
	}
	{
		BaseFixupRecord_t1751 * L_5 = V_1;
		BaseFixupRecord_t1751 * L_6 = V_0;
		bool L_7 = ___asContainer;
		ObjectRecord_UnchainFixup_m9410(__this, L_5, L_6, L_7, /*hidden argument*/&ObjectRecord_UnchainFixup_m9410_MethodInfo);
		return;
	}

IL_0024:
	{
		BaseFixupRecord_t1751 * L_8 = V_1;
		V_0 = L_8;
		bool L_9 = ___asContainer;
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		BaseFixupRecord_t1751 * L_10 = V_1;
		NullCheck(L_10);
		BaseFixupRecord_t1751 * L_11 = (L_10->___NextSameContainer_2);
		G_B9_0 = L_11;
		goto IL_0037;
	}

IL_0031:
	{
		BaseFixupRecord_t1751 * L_12 = V_1;
		NullCheck(L_12);
		BaseFixupRecord_t1751 * L_13 = (L_12->___NextSameRequired_3);
		G_B9_0 = L_13;
	}

IL_0037:
	{
		V_1 = G_B9_0;
	}

IL_0038:
	{
		BaseFixupRecord_t1751 * L_14 = V_1;
		if (L_14)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_UnchainFixup_m9410 (ObjectRecord_t1750 * __this, BaseFixupRecord_t1751 * ___fixup, BaseFixupRecord_t1751 * ___prevFixup, bool ___asContainer, MethodInfo* method)
{
	{
		BaseFixupRecord_t1751 * L_0 = ___prevFixup;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = ___asContainer;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		BaseFixupRecord_t1751 * L_2 = ___fixup;
		NullCheck(L_2);
		BaseFixupRecord_t1751 * L_3 = (L_2->___NextSameContainer_2);
		__this->___FixupChainAsContainer_10 = L_3;
		goto IL_0020;
	}

IL_0014:
	{
		BaseFixupRecord_t1751 * L_4 = ___fixup;
		NullCheck(L_4);
		BaseFixupRecord_t1751 * L_5 = (L_4->___NextSameRequired_3);
		__this->___FixupChainAsRequired_11 = L_5;
	}

IL_0020:
	{
		goto IL_003f;
	}

IL_0022:
	{
		bool L_6 = ___asContainer;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		BaseFixupRecord_t1751 * L_7 = ___prevFixup;
		BaseFixupRecord_t1751 * L_8 = ___fixup;
		NullCheck(L_8);
		BaseFixupRecord_t1751 * L_9 = (L_8->___NextSameContainer_2);
		NullCheck(L_7);
		L_7->___NextSameContainer_2 = L_9;
		goto IL_003f;
	}

IL_0033:
	{
		BaseFixupRecord_t1751 * L_10 = ___prevFixup;
		BaseFixupRecord_t1751 * L_11 = ___fixup;
		NullCheck(L_11);
		BaseFixupRecord_t1751 * L_12 = (L_11->___NextSameRequired_3);
		NullCheck(L_10);
		L_10->___NextSameRequired_3 = L_12;
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_ChainFixup_m9411 (ObjectRecord_t1750 * __this, BaseFixupRecord_t1751 * ___fixup, bool ___asContainer, MethodInfo* method)
{
	{
		bool L_0 = ___asContainer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		BaseFixupRecord_t1751 * L_1 = ___fixup;
		BaseFixupRecord_t1751 * L_2 = (__this->___FixupChainAsContainer_10);
		NullCheck(L_1);
		L_1->___NextSameContainer_2 = L_2;
		BaseFixupRecord_t1751 * L_3 = ___fixup;
		__this->___FixupChainAsContainer_10 = L_3;
		goto IL_002b;
	}

IL_0018:
	{
		BaseFixupRecord_t1751 * L_4 = ___fixup;
		BaseFixupRecord_t1751 * L_5 = (__this->___FixupChainAsRequired_11);
		NullCheck(L_4);
		L_4->___NextSameRequired_3 = L_5;
		BaseFixupRecord_t1751 * L_6 = ___fixup;
		__this->___FixupChainAsRequired_11 = L_6;
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t658_il2cpp_TypeInfo_var;
extern "C" bool ObjectRecord_LoadData_m9412 (ObjectRecord_t1750 * __this, ObjectManager_t1743 * ___manager, Object_t * ___selector, StreamingContext_t709  ___context, MethodInfo* method)
{
	static bool ObjectRecord_LoadData_m9412_init;
	if (!ObjectRecord_LoadData_m9412_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		TypeU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t658_0_0_0);
		ObjectRecord_LoadData_m9412_init = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t76* V_1 = {0};
	ConstructorInfo_t664 * V_2 = {0};
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	ObjectRecord_t1750 * V_5 = {0};
	ObjectRecord_t1750 * V_6 = {0};
	bool V_7 = false;
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t708 * L_0 = (__this->___Info_4);
		if (!L_0)
		{
			goto IL_0105;
		}
	}
	{
		Object_t * L_1 = (__this->___Surrogate_6);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		Object_t * L_2 = (__this->___Surrogate_6);
		Object_t * L_3 = (__this->___ObjectInstance_2);
		SerializationInfo_t708 * L_4 = (__this->___Info_4);
		StreamingContext_t709  L_5 = ___context;
		Object_t * L_6 = (__this->___SurrogateSelector_7);
		NullCheck(L_2);
		Object_t * L_7 = (Object_t *)InterfaceFuncInvoker4< Object_t *, Object_t *, SerializationInfo_t708 *, StreamingContext_t709 , Object_t * >::Invoke(&ISerializationSurrogate_SetObjectData_m11037_MethodInfo, L_2, L_3, L_4, L_5, L_6);
		V_0 = L_7;
		Object_t * L_8 = V_0;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		Object_t * L_9 = V_0;
		__this->___ObjectInstance_2 = L_9;
	}

IL_003c:
	{
		__this->___Status_0 = 3;
		goto IL_00fe;
	}

IL_0048:
	{
		Object_t * L_10 = (__this->___ObjectInstance_2);
		if (!((Object_t *)IsInst(L_10, InitializedTypeInfo(&ISerializable_t118_il2cpp_TypeInfo))))
		{
			goto IL_00de;
		}
	}
	{
		ObjectU5BU5D_t76* L_11 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 2));
		SerializationInfo_t708 * L_12 = (__this->___Info_4);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 0)) = (Object_t *)L_12;
		ObjectU5BU5D_t76* L_13 = L_11;
		StreamingContext_t709  L_14 = ___context;
		StreamingContext_t709  L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&StreamingContext_t709_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_16;
		V_1 = L_13;
		Object_t * L_17 = (__this->___ObjectInstance_2);
		NullCheck(L_17);
		Type_t * L_18 = Object_GetType_m1903(L_17, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		TypeU5BU5D_t658* L_19 = ((TypeU5BU5D_t658*)SZArrayNew(TypeU5BU5D_t658_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_20 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&SerializationInfo_t708_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 0)) = (Type_t *)L_20;
		TypeU5BU5D_t658* L_21 = L_19;
		Type_t * L_22 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(&StreamingContext_t709_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
		ArrayElementTypeCheck (L_21, L_22);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_21, 1)) = (Type_t *)L_22;
		NullCheck(L_18);
		ConstructorInfo_t664 * L_23 = (ConstructorInfo_t664 *)VirtFuncInvoker4< ConstructorInfo_t664 *, int32_t, Binder_t790 *, TypeU5BU5D_t658*, ParameterModifierU5BU5D_t791* >::Invoke(&Type_GetConstructor_m7300_MethodInfo, L_18, ((int32_t)52), (Binder_t790 *)NULL, L_21, (ParameterModifierU5BU5D_t791*)(ParameterModifierU5BU5D_t791*)NULL);
		V_2 = L_23;
		ConstructorInfo_t664 * L_24 = V_2;
		if (L_24)
		{
			goto IL_00ce;
		}
	}
	{
		Object_t * L_25 = (__this->___ObjectInstance_2);
		NullCheck(L_25);
		Type_t * L_26 = Object_GetType_m1903(L_25, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_26);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_28 = String_Concat_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral1849, L_27, (String_t*) &_stringLiteral1850, /*hidden argument*/&String_Concat_m380_MethodInfo);
		SerializationException_t1190 * L_29 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_29, L_28, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_00ce:
	{
		ConstructorInfo_t664 * L_30 = V_2;
		Object_t * L_31 = (__this->___ObjectInstance_2);
		ObjectU5BU5D_t76* L_32 = V_1;
		NullCheck(L_30);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t76* >::Invoke(&MethodBase_Invoke_m3978_MethodInfo, L_30, L_31, L_32);
		goto IL_00fe;
	}

IL_00de:
	{
		Object_t * L_33 = (__this->___ObjectInstance_2);
		NullCheck(L_33);
		Type_t * L_34 = Object_GetType_m1903(L_33, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_34);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_36 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral1851, L_35, /*hidden argument*/&String_Concat_m548_MethodInfo);
		SerializationException_t1190 * L_37 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
		SerializationException__ctor_m5246(L_37, L_36, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
		il2cpp_codegen_raise_exception(L_37);
	}

IL_00fe:
	{
		__this->___Info_4 = (SerializationInfo_t708 *)NULL;
	}

IL_0105:
	{
		Object_t * L_38 = (__this->___ObjectInstance_2);
		if (!((Object_t *)IsInst(L_38, InitializedTypeInfo(&IObjectReference_t1969_il2cpp_TypeInfo))))
		{
			goto IL_0198;
		}
	}
	{
		uint8_t L_39 = (__this->___Status_0);
		if ((((int32_t)L_39) == ((int32_t)3)))
		{
			goto IL_0198;
		}
	}

IL_0121:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_40 = (__this->___ObjectInstance_2);
			StreamingContext_t709  L_41 = ___context;
			NullCheck(((Object_t *)Castclass(L_40, InitializedTypeInfo(&IObjectReference_t1969_il2cpp_TypeInfo))));
			Object_t * L_42 = (Object_t *)InterfaceFuncInvoker1< Object_t *, StreamingContext_t709  >::Invoke(&IObjectReference_GetRealObject_m11033_MethodInfo, ((Object_t *)Castclass(L_40, InitializedTypeInfo(&IObjectReference_t1969_il2cpp_TypeInfo))), L_41);
			__this->___ObjectInstance_2 = L_42;
			V_3 = ((int32_t)100);
			goto IL_0168;
		}

IL_013d:
		{
			Object_t * L_43 = (__this->___ObjectInstance_2);
			StreamingContext_t709  L_44 = ___context;
			NullCheck(((Object_t *)Castclass(L_43, InitializedTypeInfo(&IObjectReference_t1969_il2cpp_TypeInfo))));
			Object_t * L_45 = (Object_t *)InterfaceFuncInvoker1< Object_t *, StreamingContext_t709  >::Invoke(&IObjectReference_GetRealObject_m11033_MethodInfo, ((Object_t *)Castclass(L_43, InitializedTypeInfo(&IObjectReference_t1969_il2cpp_TypeInfo))), L_44);
			V_4 = L_45;
			Object_t * L_46 = V_4;
			Object_t * L_47 = (__this->___ObjectInstance_2);
			if ((!(((Object_t*)(Object_t *)L_46) == ((Object_t*)(Object_t *)L_47))))
			{
				goto IL_015c;
			}
		}

IL_015a:
		{
			goto IL_0179;
		}

IL_015c:
		{
			Object_t * L_48 = V_4;
			__this->___ObjectInstance_2 = L_48;
			int32_t L_49 = V_3;
			V_3 = ((int32_t)((int32_t)L_49-(int32_t)1));
		}

IL_0168:
		{
			Object_t * L_50 = (__this->___ObjectInstance_2);
			if (!((Object_t *)IsInst(L_50, InitializedTypeInfo(&IObjectReference_t1969_il2cpp_TypeInfo))))
			{
				goto IL_0179;
			}
		}

IL_0175:
		{
			int32_t L_51 = V_3;
			if ((((int32_t)L_51) > ((int32_t)0)))
			{
				goto IL_013d;
			}
		}

IL_0179:
		{
			int32_t L_52 = V_3;
			if (L_52)
			{
				goto IL_0187;
			}
		}

IL_017c:
		{
			SerializationException_t1190 * L_53 = (SerializationException_t1190 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1190_il2cpp_TypeInfo));
			SerializationException__ctor_m5246(L_53, (String_t*) &_stringLiteral1852, /*hidden argument*/&SerializationException__ctor_m5246_MethodInfo);
			il2cpp_codegen_raise_exception(L_53);
		}

IL_0187:
		{
			__this->___Status_0 = 3;
			goto IL_0198;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t110 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t732_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0190;
		throw e;
	}

CATCH_0190:
	{ // begin catch(System.NullReferenceException)
		{
			V_7 = 0;
			goto IL_01f0;
		}

IL_0196:
		{
			goto IL_0198;
		}
	} // end catch (depth: 1)

IL_0198:
	{
		MemberInfo_t * L_54 = (__this->___Member_8);
		if (!L_54)
		{
			goto IL_01c4;
		}
	}
	{
		ObjectManager_t1743 * L_55 = ___manager;
		int64_t L_56 = (__this->___IdOfContainingObj_5);
		NullCheck(L_55);
		ObjectRecord_t1750 * L_57 = ObjectManager_GetObjectRecord_m9379(L_55, L_56, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		V_5 = L_57;
		ObjectRecord_t1750 * L_58 = V_5;
		ObjectManager_t1743 * L_59 = ___manager;
		MemberInfo_t * L_60 = (__this->___Member_8);
		Object_t * L_61 = (__this->___ObjectInstance_2);
		NullCheck(L_58);
		ObjectRecord_SetMemberValue_m9402(L_58, L_59, L_60, L_61, /*hidden argument*/&ObjectRecord_SetMemberValue_m9402_MethodInfo);
		goto IL_01ee;
	}

IL_01c4:
	{
		Int32U5BU5D_t109* L_62 = (__this->___ArrayIndex_9);
		if (!L_62)
		{
			goto IL_01ee;
		}
	}
	{
		ObjectManager_t1743 * L_63 = ___manager;
		int64_t L_64 = (__this->___IdOfContainingObj_5);
		NullCheck(L_63);
		ObjectRecord_t1750 * L_65 = ObjectManager_GetObjectRecord_m9379(L_63, L_64, /*hidden argument*/&ObjectManager_GetObjectRecord_m9379_MethodInfo);
		V_6 = L_65;
		ObjectRecord_t1750 * L_66 = V_6;
		ObjectManager_t1743 * L_67 = ___manager;
		Object_t * L_68 = (__this->___ObjectInstance_2);
		Int32U5BU5D_t109* L_69 = (__this->___ArrayIndex_9);
		NullCheck(L_66);
		ObjectRecord_SetArrayValue_m9403(L_66, L_67, L_68, L_69, /*hidden argument*/&ObjectRecord_SetArrayValue_m9403_MethodInfo);
	}

IL_01ee:
	{
		return 1;
	}

IL_01f0:
	{
		bool L_70 = V_7;
		return L_70;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
extern "C" bool ObjectRecord_get_HasPendingFixups_m9413 (ObjectRecord_t1750 * __this, MethodInfo* method)
{
	{
		BaseFixupRecord_t1751 * L_0 = (__this->___FixupChainAsContainer_10);
		return ((((int32_t)((((Object_t*)(BaseFixupRecord_t1751 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
