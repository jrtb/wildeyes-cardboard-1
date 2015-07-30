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
#include "System_Core_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t941_il2cpp_TypeInfo;
// <Module>
#include "System_Core_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExtensionAttribute_t940_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3822_MethodInfo;


// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
extern MethodInfo ExtensionAttribute__ctor_m4252_MethodInfo;
extern "C" void ExtensionAttribute__ctor_m4252 (ExtensionAttribute_t940 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3822(__this, /*hidden argument*/&Attribute__ctor_m3822_MethodInfo);
		return;
	}
}
// System.Linq.Check
#include "System_Core_System_Linq_Check.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Check_t942_il2cpp_TypeInfo;
// System.Linq.Check
#include "System_Core_System_Linq_CheckMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo ArgumentNullException_t754_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern MethodInfo ArgumentNullException__ctor_m3902_MethodInfo;


// System.Void System.Linq.Check::Source(System.Object)
extern MethodInfo Check_Source_m4253_MethodInfo;
extern "C" void Check_Source_m4253 (Object_t * __this /* static, unused */, Object_t * ___source, MethodInfo* method)
{
	{
		Object_t * L_0 = ___source;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral374, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndSelector(System.Object,System.Object)
extern MethodInfo Check_SourceAndSelector_m4254_MethodInfo;
extern "C" void Check_SourceAndSelector_m4254 (Object_t * __this /* static, unused */, Object_t * ___source, Object_t * ___selector, MethodInfo* method)
{
	{
		Object_t * L_0 = ___source;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral374, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___selector;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral375, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndPredicate(System.Object,System.Object)
extern MethodInfo Check_SourceAndPredicate_m4255_MethodInfo;
extern "C" void Check_SourceAndPredicate_m4255 (Object_t * __this /* static, unused */, Object_t * ___source, Object_t * ___predicate, MethodInfo* method)
{
	{
		Object_t * L_0 = ___source;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral374, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___predicate;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral376, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Linq.Enumerable/Fallback
#include "System_Core_System_Linq_Enumerable_Fallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Fallback_t943_il2cpp_TypeInfo;
// System.Linq.Enumerable/Fallback
#include "System_Core_System_Linq_Enumerable_FallbackMethodDeclarations.h"



// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerable_t106_il2cpp_TypeInfo;
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"



// System.Action
#include "System_Core_System_Action.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_t28_il2cpp_TypeInfo;
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern MethodInfo Action__ctor_m4256_MethodInfo;
extern "C" void Action__ctor_m4256 (Action_t28 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action::Invoke()
extern MethodInfo Action_Invoke_m389_MethodInfo;
extern "C" void Action_Invoke_m389 (Action_t28 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_Invoke_m389((Action_t28 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_Action_t28(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo Action_BeginInvoke_m4257_MethodInfo;
extern "C" Object_t * Action_BeginInvoke_m4257 (Action_t28 * __this, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action::EndInvoke(System.IAsyncResult)
extern MethodInfo Action_EndInvoke_m4258_MethodInfo;
extern "C" void Action_EndInvoke_m4258 (Action_t28 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
