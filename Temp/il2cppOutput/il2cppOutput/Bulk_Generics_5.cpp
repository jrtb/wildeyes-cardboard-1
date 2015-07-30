#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0.h"
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
extern TypeInfo Transform_1_t2666_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m13902_GenericMethod;
extern "C" void Transform_1__ctor_m13902_gshared (Transform_1_t2666 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13903_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m13903_gshared (Transform_1_t2666 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13903((Transform_1_t2666 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13904_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13904_gshared (Transform_1_t2666 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13905_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m13905_gshared (Transform_1_t2666 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2655_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m13906_GenericMethod;
extern "C" void Transform_1__ctor_m13906_gshared (Transform_1_t2655 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13907_GenericMethod;
extern "C" DictionaryEntry_t1014  Transform_1_Invoke_m13907_gshared (Transform_1_t2655 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13907((Transform_1_t2655 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1014  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef DictionaryEntry_t1014  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13908_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13908_gshared (Transform_1_t2655 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13909_GenericMethod;
extern "C" DictionaryEntry_t1014  Transform_1_EndInvoke_m13909_gshared (Transform_1_t2655 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1014 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4082_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2667_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52MethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo DictionaryEntry_t1014_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1189_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2667_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m5227_MethodInfo;
extern MethodInfo Array_get_Length_m5231_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
extern "C" DictionaryEntry_t1014  Array_InternalArray__get_Item_TisDictionaryEntry_t1014_m22910_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDictionaryEntry_t1014_m22910(__this, p0, method) (( DictionaryEntry_t1014  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDictionaryEntry_t1014_m22910_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13914_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDictionaryEntry_t1014_m22910_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13910_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13910_gshared (InternalEnumerator_1_t2667 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13911_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13911_gshared (InternalEnumerator_1_t2667 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t1014  L_0 = (( DictionaryEntry_t1014  (*) (InternalEnumerator_1_t2667 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DictionaryEntry_t1014  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13912_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13912_gshared (InternalEnumerator_1_t2667 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13913_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13913_gshared (InternalEnumerator_1_t2667 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5231(L_1, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t1014  InternalEnumerator_1_get_Current_m13914_gshared (InternalEnumerator_1_t2667 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1189 * L_1 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_1, (String_t*) &_stringLiteral1215, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1189 * L_3 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_3, (String_t*) &_stringLiteral1216, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5231(L_5, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		DictionaryEntry_t1014  L_8 = (( DictionaryEntry_t1014  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4083_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4084_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4085_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2668_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_2MethodDeclarations.h"

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m13915_GenericMethod;
extern "C" void Transform_1__ctor_m13915_gshared (Transform_1_t2668 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13916_GenericMethod;
extern "C" KeyValuePair_2_t2657  Transform_1_Invoke_m13916_gshared (Transform_1_t2668 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13916((Transform_1_t2668 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2657  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t2657  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13917_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13917_gshared (Transform_1_t2668 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13918_GenericMethod;
extern "C" KeyValuePair_2_t2657  Transform_1_EndInvoke_m13918_gshared (Transform_1_t2668 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2657 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t2669_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumeraMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14.h"
extern TypeInfo Enumerator_t2662_il2cpp_TypeInfo;
extern TypeInfo IDictionaryEnumerator_t1011_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2657_il2cpp_TypeInfo;
extern TypeInfo Int32_t60_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t83_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"
extern Il2CppType Enumerator_t2662_0_0_0;
extern Il2CppType ShimEnumerator_t2669_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m10973_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m13921_MethodInfo;
extern MethodInfo Object__ctor_m357_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m13873_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m13833_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m13835_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m13921_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m13829_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m13872_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ShimEnumerator__ctor_m13919_GenericMethod;
extern "C" void ShimEnumerator__ctor_m13919_gshared (ShimEnumerator_t2669 * __this, Dictionary_2_t2656 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Dictionary_2_t2656 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2662  L_1 = (( Enumerator_t2662  (*) (Dictionary_2_t2656 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m13920_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m13920_gshared (ShimEnumerator_t2669 * __this, MethodInfo* method)
{
	{
		Enumerator_t2662 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2662 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1014  ShimEnumerator_get_Entry_m13921_gshared (ShimEnumerator_t2669 * __this, MethodInfo* method)
{
	{
		Enumerator_t2662  L_0 = (__this->___host_enumerator_0);
		Enumerator_t2662  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t1014  L_3 = (DictionaryEntry_t1014 )InterfaceFuncInvoker0< DictionaryEntry_t1014  >::Invoke(&IDictionaryEnumerator_get_Entry_m10973_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m13922_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m13922_gshared (ShimEnumerator_t2669 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2657  V_0 = {0};
	{
		Enumerator_t2662 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2657  L_1 = (( KeyValuePair_2_t2657  (*) (Enumerator_t2662 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2657 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m13923_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m13923_gshared (ShimEnumerator_t2669 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2657  V_0 = {0};
	{
		Enumerator_t2662 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2657  L_1 = (( KeyValuePair_2_t2657  (*) (Enumerator_t2662 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2657 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m13924_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m13924_gshared (ShimEnumerator_t2669 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t1014  L_0 = (DictionaryEntry_t1014 )VirtFuncInvoker0< DictionaryEntry_t1014  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t1014  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t1014_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2670_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_10MethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t658_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2672_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2670_0_0_0;
extern Il2CppType IEquatable_1_t1983_0_0_0;
extern Il2CppType Int32_t60_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2313_0_0_0;
extern Il2CppType TypeU5BU5D_t658_0_0_0;
extern Il2CppType DefaultComparer_t2672_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m1995_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m4037_MethodInfo;
extern MethodInfo Type_MakeGenericType_m4035_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10116_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m13933_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25909_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25910_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13933_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25909_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25910_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Int32>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m13925_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m13925_gshared (EqualityComparer_1_t2670 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Int32>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m13926_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m13926_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2672 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2672 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2672 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2670_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int32>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13927_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13927_gshared (EqualityComparer_1_t2670 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13928_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13928_gshared (EqualityComparer_1_t2670 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int32>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int32>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m13929_GenericMethod;
extern "C" EqualityComparer_1_t2670 * EqualityComparer_1_get_Default_m13929_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2670 * L_0 = ((EqualityComparer_1_t2670_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2671_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__5MethodDeclarations.h"

extern TypeInfo IEquatable_1_t1983_il2cpp_TypeInfo;
extern MethodInfo Object_GetHashCode_m627_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m25911_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m25911_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m13930_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m13930_gshared (GenericEqualityComparer_1_t2671 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2670 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m13931_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m13931_gshared (GenericEqualityComparer_1_t2671 * __this, int32_t ___obj, MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m627_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m13932_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m13932_gshared (GenericEqualityComparer_1_t2671 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_Equals_m626_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m13933_gshared (DefaultComparer_t2672 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2670 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m13934_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m13934_gshared (DefaultComparer_t2672 * __this, int32_t ___obj, MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m627_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m13935_GenericMethod;
extern "C" bool DefaultComparer_Equals_m13935_gshared (DefaultComparer_t2672 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_6 = ___y;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4072_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4073_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3579_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t358_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_genMethodDeclarations.h"

// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
extern TypeInfo StringU5BU5D_t87_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo PointerEventData_t52_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t87_0_0_0;
extern MethodInfo Object_ToString_m597_MethodInfo;
extern MethodInfo String_Concat_m3849_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m13937_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m13938_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m1914_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m1913_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2673_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2673_0_0_0;
extern Il2CppType KeyValuePair_2_t358_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>(System.Int32)
extern "C" KeyValuePair_2_t358  Array_InternalArray__get_Item_TisKeyValuePair_2_t358_m22925_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t358_m22925(__this, p0, method) (( KeyValuePair_2_t358  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t358_m22925_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13943_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t358_m22925_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13939_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13939_gshared (InternalEnumerator_1_t2673 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13940_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13940_gshared (InternalEnumerator_1_t2673 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t358  L_0 = (( KeyValuePair_2_t358  (*) (InternalEnumerator_1_t2673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t358  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13941_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13941_gshared (InternalEnumerator_1_t2673 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13942_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13942_gshared (InternalEnumerator_1_t2673 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5231(L_1, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::get_Current()
extern "C" KeyValuePair_2_t358  InternalEnumerator_1_get_Current_m13943_gshared (InternalEnumerator_1_t2673 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1189 * L_1 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_1, (String_t*) &_stringLiteral1215, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1189 * L_3 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_3, (String_t*) &_stringLiteral1216, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5231(L_5, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t358  L_8 = (( KeyValuePair_2_t358  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4086_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3577_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3576_il2cpp_TypeInfo;

#include "UnityEngine.UI_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4087_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3583_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerEventData>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2674_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2674_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m22110_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m22110(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.PointerEventData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.PointerEventData>(System.Int32)
#define Array_InternalArray__get_Item_TisPointerEventData_t52_m22936(__this, p0, method) (( PointerEventData_t52 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13948_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisPointerEventData_t52_m22936_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4088_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4089_il2cpp_TypeInfo;

// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4090_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseEventData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4091_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseEventData>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2675_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55MethodDeclarations.h"

extern TypeInfo BaseEventData_t90_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2675_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseEventData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseEventData>(System.Int32)
#define Array_InternalArray__get_Item_TisBaseEventData_t90_m22947(__this, p0, method) (( BaseEventData_t90 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13953_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBaseEventData_t90_m22947_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4092_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t2676_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_2MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3.h"
extern TypeInfo ICollection_t855_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t193_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t754_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t84_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2677_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t109_il2cpp_TypeInfo;
extern TypeInfo Void_t75_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2678_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3MethodDeclarations.h"
extern Il2CppType Dictionary_2_t193_0_0_0;
extern Il2CppType Enumerator_t2677_0_0_0;
extern Il2CppType Int32U5BU5D_t109_0_0_0;
extern Il2CppType KeyCollection_t2676_0_0_0;
extern Il2CppType Transform_1_t2678_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m10970_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m13786_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3902_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m5248_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m13810_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m13965_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m13800_MethodInfo;
extern MethodInfo Transform_1__ctor_m13983_MethodInfo;
extern MethodInfo Enumerator__ctor_m13968_MethodInfo;
struct Dictionary_2_t193;
// System.Exception
#include "mscorlib_System_Exception.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
struct Dictionary_2_t2656;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t60_m22905_gshared (Dictionary_2_t2656 * __this, Array_t * p0, int32_t p1, Transform_1_t2663 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t60_m22905(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2656 *, Array_t *, int32_t, Transform_1_t2663 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t60_m22905_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t60_m22958(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t193 *, Array_t *, int32_t, Transform_1_t2678 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t60_m22905_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t193;
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t60_TisInt32_t60_m22959 (Dictionary_2_t193 * __this, Int32U5BU5D_t109* p0, int32_t p1, Transform_1_t2678 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m13786_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m13810_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m13966_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m13965_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m13796_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m13800_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13983_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t60_m22958_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t60_TisInt32_t60_m22959_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13968_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Count()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
extern TypeInfo Enumerator_t357_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_MethodDeclarations.h"
extern Il2CppType Enumerator_t357_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m13978_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m1911_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m13982_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m1915_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo Link_t1502_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1375_il2cpp_TypeInfo;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo DictionaryEntry__ctor_m5228_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m13936_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m6420_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m13981_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m13979_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m13980_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m13936_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t359_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_0MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4.h"
extern TypeInfo Enumerator_t356_il2cpp_TypeInfo;
extern TypeInfo PointerEventDataU5BU5D_t2652_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2679_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollecMethodDeclarations.h"
extern Il2CppType Enumerator_t356_0_0_0;
extern Il2CppType PointerEventDataU5BU5D_t2652_0_0_0;
extern Il2CppType ValueCollection_t359_0_0_0;
extern Il2CppType Transform_1_t2679_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m13998_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m13802_MethodInfo;
extern MethodInfo Transform_1__ctor_m14003_MethodInfo;
extern MethodInfo Enumerator__ctor_m14000_MethodInfo;
struct Dictionary_2_t193;
struct Dictionary_2_t2656;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22908_gshared (Dictionary_2_t2656 * __this, Array_t * p0, int32_t p1, Transform_1_t2666 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22908(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2656 *, Array_t *, int32_t, Transform_1_t2666 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22908_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_ICollectionCopyTo<UnityEngine.EventSystems.PointerEventData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_ICollectionCopyTo<UnityEngine.EventSystems.PointerEventData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisPointerEventData_t52_m22961(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t193 *, Array_t *, int32_t, Transform_1_t2679 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22908_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t193;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_CopyTo<UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_CopyTo<UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisPointerEventData_t52_TisPointerEventData_t52_m22962 (Dictionary_2_t193 * __this, PointerEventDataU5BU5D_t2652* p0, int32_t p1, Transform_1_t2679 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m13812_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m1908_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m13998_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m13802_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m14003_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisPointerEventData_t52_m22961_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisPointerEventData_t52_TisPointerEventData_t52_m22962_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14000_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2654_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2680_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2681_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m14012_GenericMethod;
extern "C" void Transform_1__ctor_m14012_gshared (Transform_1_t2681 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m14014_GenericMethod;
extern "C" KeyValuePair_2_t358  Transform_1_Invoke_m14014_gshared (Transform_1_t2681 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m14014((Transform_1_t2681 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t358  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t358  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m14016_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m14016_gshared (Transform_1_t2681 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m14018_GenericMethod;
extern "C" KeyValuePair_2_t358  Transform_1_EndInvoke_m14018_gshared (Transform_1_t2681 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t358 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t2682_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0MethodDeclarations.h"

extern Il2CppType ShimEnumerator_t2682_0_0_0;
extern MethodInfo ShimEnumerator_get_Entry_m14021_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m1912_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m14021_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4074_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::GetHashCode(T)
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2683_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11.h"
extern TypeInfo DefaultComparer_t2684_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2683_0_0_0;
extern Il2CppType IEquatable_1_t4093_0_0_0;
extern Il2CppType PointerEventData_t52_0_0_0;
extern Il2CppType DefaultComparer_t2684_0_0_0;
extern MethodInfo DefaultComparer__ctor_m14030_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25912_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25904_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m14030_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25912_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25904_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4093_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.PointerEventData>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m14025_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>::Equals(T,T)
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_List_1_gen_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t191_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"

// UnityEngine.EventSystems.PointerInputModule/ButtonState
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInputModule_B.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_10.h"
// System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Predicate_1_gen_13.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_10.h"
// System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Comparison_1_gen_13.h"
extern TypeInfo ButtonState_t190_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t395_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t732_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1898_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t758_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3586_il2cpp_TypeInfo;
extern TypeInfo ButtonStateU5BU5D_t2685_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2687_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3584_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3585_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t31_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t127_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2689_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2693_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2694_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_10MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Predicate_1_gen_13MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_10MethodDeclarations.h"
extern Il2CppType List_1_t191_0_0_0;
extern Il2CppType ICollection_1_t3586_0_0_0;
extern Il2CppType ButtonStateU5BU5D_t2685_0_0_0;
extern Il2CppType Enumerator_t2687_0_0_0;
extern Il2CppType IEnumerable_1_t3584_0_0_0;
extern Il2CppType IEnumerator_1_t3585_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2689_0_0_0;
extern Il2CppType Predicate_1_t2693_0_0_0;
extern Il2CppType Comparer_1_t2694_0_0_0;
extern MethodInfo List_1_get_Item_m1887_MethodInfo;
extern MethodInfo List_1_set_Item_m14078_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2307_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5412_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5235_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25913_MethodInfo;
extern MethodInfo Array_Copy_m7220_MethodInfo;
extern MethodInfo List_1_Add_m1889_MethodInfo;
extern MethodInfo List_1_Contains_m14057_MethodInfo;
extern MethodInfo List_1_IndexOf_m14063_MethodInfo;
extern MethodInfo List_1_Insert_m14066_MethodInfo;
extern MethodInfo List_1_Remove_m14068_MethodInfo;
extern MethodInfo Math_Max_m6412_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25914_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25915_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25916_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3904_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1901_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m14090_MethodInfo;
extern MethodInfo Array_Clear_m6403_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m14165_MethodInfo;
extern MethodInfo Enumerator__ctor_m14084_MethodInfo;
extern MethodInfo List_1_RemoveAt_m14070_MethodInfo;
extern MethodInfo Array_Reverse_m6444_MethodInfo;
extern MethodInfo Array_Copy_m5453_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m22178_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m22178(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22178_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[]&,System.Int32)
#define Array_Resize_TisButtonState_t190_m22985(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ButtonStateU5BU5D_t2685**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22178_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_12.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m10971_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10971(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10971_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisButtonState_t190_m22987(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ButtonStateU5BU5D_t2685*, ButtonState_t190 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10971_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m22247_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m22247(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m22247_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisButtonState_t190_m22989(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ButtonStateU5BU5D_t2685*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m22247_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m22431_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, Comparison_1_t2496 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m22431(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, Comparison_1_t2496 *, MethodInfo*))Array_Sort_TisObject_t_m22431_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisButtonState_t190_m22997(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ButtonStateU5BU5D_t2685*, int32_t, Comparison_1_t2696 *, MethodInfo*))Array_Sort_TisObject_t_m22431_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m1887_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m14078_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisButtonState_t190_m22985_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m14065_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m14067_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m14053_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25913_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m14052_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m14062_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m1889_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m14057_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m14063_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m14066_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m14068_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m14051_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m14076_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m14077_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25914_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25915_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25916_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m14090_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisButtonState_t190_m22987_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m14060_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m14061_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m14165_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14084_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m14064_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m14070_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m14171_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisButtonState_t190_m22989_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisButtonState_t190_m22997_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2686_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2686_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.PointerInputModule/ButtonState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.PointerInputModule/ButtonState>(System.Int32)
#define Array_InternalArray__get_Item_TisButtonState_t190_m22974(__this, p0, method) (( ButtonState_t190 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14083_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisButtonState_t190_m22974_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2688_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo InvalidOperationException__ctor_m5234_MethodInfo;
extern MethodInfo Object_GetType_m1903_MethodInfo;
extern MethodInfo Type_get_FullName_m3970_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m14087_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t457_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_10MethodDeclarations.h"
extern Il2CppType IList_1_t2688_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m14119_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m360_MethodInfo;
extern MethodInfo IList_1_get_Item_m25917_MethodInfo;
extern MethodInfo ICollection_CopyTo_m5223_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m3927_MethodInfo;
extern MethodInfo ICollection_1_Contains_m25918_MethodInfo;
extern MethodInfo IList_1_IndexOf_m25919_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m14119_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m25917_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m14151_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m25918_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m25919_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2690_il2cpp_TypeInfo;

extern TypeInfo IList_t856_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2690_0_0_0;
extern Il2CppType ButtonState_t190_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m25920_MethodInfo;
extern MethodInfo Collection_1_SetItem_m14150_MethodInfo;
extern MethodInfo List_1__ctor_m1886_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m14143_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m14141_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m14146_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m14137_MethodInfo;
extern MethodInfo ICollection_1_Clear_m25921_MethodInfo;
extern MethodInfo IList_1_Insert_m25922_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m25923_MethodInfo;
extern MethodInfo IList_1_set_Item_m25924_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7271_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11250_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11251_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m25920_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m14154_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m14155_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m14152_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m14150_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m1886_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m14143_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m14153_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m14141_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m14146_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m14137_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m25921_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m25922_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m25923_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m25924_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2691_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_12MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_12.h"
extern TypeInfo DefaultComparer_t2692_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_12MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2691_0_0_0;
extern Il2CppType IEquatable_1_t4094_0_0_0;
extern Il2CppType DefaultComparer_t2692_0_0_0;
extern MethodInfo DefaultComparer__ctor_m14161_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25925_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22986_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m14161_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25925_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22986_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4095_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4094_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m14156_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_10.h"
extern TypeInfo DefaultComparer_t2695_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_10MethodDeclarations.h"
extern Il2CppType IComparable_1_t3859_0_0_0;
extern Il2CppType GenericComparer_1_t2224_0_0_0;
extern Il2CppType DefaultComparer_t2695_0_0_0;
extern MethodInfo DefaultComparer__ctor_m14172_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25926_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10140_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m14172_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25926_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3858_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3859_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t124_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m22995_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10941_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m14168_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m22995_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2696_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Comparison_1_gen_13MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4096_il2cpp_TypeInfo;

// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2697_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57MethodDeclarations.h"

extern TypeInfo RaycastHit2D_t363_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2697_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
extern "C" RaycastHit2D_t363  Array_InternalArray__get_Item_TisRaycastHit2D_t363_m23018_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit2D_t363_m23018(__this, p0, method) (( RaycastHit2D_t363  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit2D_t363_m23018_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14182_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRaycastHit2D_t363_m23018_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14178_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m14178_gshared (InternalEnumerator_1_t2697 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14179_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14179_gshared (InternalEnumerator_1_t2697 * __this, MethodInfo* method)
{
	{
		RaycastHit2D_t363  L_0 = (( RaycastHit2D_t363  (*) (InternalEnumerator_1_t2697 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit2D_t363  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14180_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m14180_gshared (InternalEnumerator_1_t2697 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14181_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m14181_gshared (InternalEnumerator_1_t2697 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5231(L_1, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
extern "C" RaycastHit2D_t363  InternalEnumerator_1_get_Current_m14182_gshared (InternalEnumerator_1_t2697 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1189 * L_1 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_1, (String_t*) &_stringLiteral1215, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1189 * L_3 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_3, (String_t*) &_stringLiteral1216, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5231(L_5, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		RaycastHit2D_t363  L_8 = (( RaycastHit2D_t363  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4097_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4098_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit2D>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4099_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::set_Item(System.Int32,T)
// UnityEngine.CastHelper`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2698_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_8MethodDeclarations.h"



// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t201_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0MethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"


// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m1950_GenericMethod;
extern "C" void Comparison_1__ctor_m1950_gshared (Comparison_1_t201 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m14183_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m14183_gshared (Comparison_1_t201 * __this, RaycastHit_t74  ___x, RaycastHit_t74  ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m14183((Comparison_1_t201 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastHit_t74  ___x, RaycastHit_t74  ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, RaycastHit_t74  ___x, RaycastHit_t74  ___y, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m14184_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m14184_gshared (Comparison_1_t201 * __this, RaycastHit_t74  ___x, RaycastHit_t74  ___y, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&RaycastHit_t74_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&RaycastHit_t74_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m14185_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m14185_gshared (Comparison_1_t201 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4100_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2699_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58MethodDeclarations.h"

extern TypeInfo RaycastHit_t74_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2699_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C" RaycastHit_t74  Array_InternalArray__get_Item_TisRaycastHit_t74_m23029_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit_t74_m23029(__this, p0, method) (( RaycastHit_t74  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit_t74_m23029_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14190_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRaycastHit_t74_m23029_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14186_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m14186_gshared (InternalEnumerator_1_t2699 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14187_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14187_gshared (InternalEnumerator_1_t2699 * __this, MethodInfo* method)
{
	{
		RaycastHit_t74  L_0 = (( RaycastHit_t74  (*) (InternalEnumerator_1_t2699 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit_t74  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14188_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m14188_gshared (InternalEnumerator_1_t2699 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14189_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m14189_gshared (InternalEnumerator_1_t2699 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5231(L_1, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
extern "C" RaycastHit_t74  InternalEnumerator_1_get_Current_m14190_gshared (InternalEnumerator_1_t2699 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1189 * L_1 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_1, (String_t*) &_stringLiteral1215, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1189 * L_3 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_3, (String_t*) &_stringLiteral1216, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5231(L_5, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		RaycastHit_t74  L_8 = (( RaycastHit_t74  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4101_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4102_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4103_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::set_Item(System.Int32,T)
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_1_t204_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_0MethodDeclarations.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern TypeInfo ObjectU5BU5D_t76_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2700_il2cpp_TypeInfo;
extern TypeInfo Color_t12_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1MethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t76_0_0_0;
extern Il2CppType Color_t12_0_0_0;
extern Il2CppType InvokableCall_1_t2700_0_0_0;
extern MethodInfo UnityEventBase__ctor_m3742_MethodInfo;
extern MethodInfo UnityEventBase_AddCall_m3747_MethodInfo;
extern MethodInfo Delegate_get_Target_m4027_MethodInfo;
extern MethodInfo Delegate_get_Method_m4026_MethodInfo;
extern MethodInfo UnityEventBase_RemoveListener_m3748_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m3750_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m14196_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m14197_MethodInfo;
extern MethodInfo UnityEventBase_Invoke_m3749_MethodInfo;
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m14192_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m14196_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m14197_GenericMethod;


// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern Il2CppGenericMethod UnityEvent_1__ctor_m1955_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m1955_gshared (UnityEvent_1_t204 * __this, MethodInfo* method)
{
	static bool UnityEvent_1__ctor_m1955_init;
	if (!UnityEvent_1__ctor_m1955_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		UnityEvent_1__ctor_m1955_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t76*)SZArrayNew(ObjectU5BU5D_t76_il2cpp_TypeInfo_var, 1));
		UnityEventBase__ctor_m3742(__this, /*hidden argument*/&UnityEventBase__ctor_m3742_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_AddListener_m1958_GenericMethod;
extern "C" void UnityEvent_1_AddListener_m1958_gshared (UnityEvent_1_t204 * __this, UnityAction_1_t206 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t206 * L_0 = ___call;
		BaseInvokableCall_t717 * L_1 = (( BaseInvokableCall_t717 * (*) (Object_t * /* static, unused */, UnityAction_1_t206 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UnityEventBase_AddCall_m3747(__this, L_1, /*hidden argument*/&UnityEventBase_AddCall_m3747_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_RemoveListener_m14191_GenericMethod;
extern "C" void UnityEvent_1_RemoveListener_m14191_gshared (UnityEvent_1_t204 * __this, UnityAction_1_t206 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t206 * L_0 = ___call;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m4027(L_0, /*hidden argument*/&Delegate_get_Target_m4027_MethodInfo);
		UnityAction_1_t206 * L_2 = ___call;
		NullCheck(L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m4026(L_2, /*hidden argument*/&Delegate_get_Method_m4026_MethodInfo);
		UnityEventBase_RemoveListener_m3748(__this, L_1, L_3, /*hidden argument*/&UnityEventBase_RemoveListener_m3748_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_1_FindMethod_Impl_m2419_GenericMethod;
extern TypeInfo* TypeU5BU5D_t658_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2419_gshared (UnityEvent_1_t204 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_1_FindMethod_Impl_m2419_init;
	if (!UnityEvent_1_FindMethod_Impl_m2419_init)
	{
		TypeU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t658_0_0_0);
		UnityEvent_1_FindMethod_Impl_m2419_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t658* L_2 = ((TypeU5BU5D_t658*)SZArrayNew(TypeU5BU5D_t658_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m3750(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3750_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m2420_GenericMethod;
extern "C" BaseInvokableCall_t717 * UnityEvent_1_GetDelegate_m2420_gshared (UnityEvent_1_t204 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t2700 * L_2 = (InvokableCall_1_t2700 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2700 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t717 * UnityEvent_1_GetDelegate_m14192_gshared (Object_t * __this /* static, unused */, UnityAction_1_t206 * ___action, MethodInfo* method)
{
	{
		UnityAction_1_t206 * L_0 = ___action;
		InvokableCall_1_t2700 * L_1 = (InvokableCall_1_t2700 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2700 *, UnityAction_1_t206 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern Il2CppGenericMethod UnityEvent_1_Invoke_m1957_GenericMethod;
extern "C" void UnityEvent_1_Invoke_m1957_gshared (UnityEvent_1_t204 * __this, Color_t12  ___arg0, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = (__this->___m_InvokeArray_4);
		Color_t12  L_1 = ___arg0;
		Color_t12  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t76* L_4 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m3749(__this, L_4, /*hidden argument*/&UnityEventBase_Invoke_m3749_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t206_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_1__ctor_m2025_GenericMethod;
extern "C" void UnityAction_1__ctor_m2025_gshared (UnityAction_1_t206 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern Il2CppGenericMethod UnityAction_1_Invoke_m14193_GenericMethod;
extern "C" void UnityAction_1_Invoke_m14193_gshared (UnityAction_1_t206 * __this, Color_t12  ___arg0, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m14193((UnityAction_1_t206 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Color_t12  ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, Color_t12  ___arg0, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m14194_GenericMethod;
extern "C" Object_t * UnityAction_1_BeginInvoke_m14194_gshared (UnityAction_1_t206 * __this, Color_t12  ___arg0, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Color_t12_il2cpp_TypeInfo), &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m14195_GenericMethod;
extern "C" void UnityAction_1_EndInvoke_m14195_gshared (UnityAction_1_t206 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
extern Il2CppType UnityAction_1_t206_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m3721_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m4028_MethodInfo;
extern MethodInfo Delegate_Combine_m304_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m3720_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m3722_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m14193_MethodInfo;
struct BaseInvokableCall_t717;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisColor_t12_m23042_gshared (Object_t * __this /* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisColor_t12_m23042(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisColor_t12_m23042_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisColor_t12_m23042_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m14196_gshared (InvokableCall_1_t2700 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3721(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3721_MethodInfo);
		UnityAction_1_t206 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t78 * L_6 = Delegate_CreateDelegate_m4028(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m4028_MethodInfo);
		Delegate_t78 * L_7 = Delegate_Combine_m304(NULL /*static, unused*/, L_2, ((UnityAction_1_t206 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m304_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t206 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m14197_gshared (InvokableCall_1_t2700 * __this, UnityAction_1_t206 * ___callback, MethodInfo* method)
{
	{
		BaseInvokableCall__ctor_m3720(__this, /*hidden argument*/&BaseInvokableCall__ctor_m3720_MethodInfo);
		UnityAction_1_t206 * L_0 = (__this->___Delegate_0);
		UnityAction_1_t206 * L_1 = ___callback;
		Delegate_t78 * L_2 = Delegate_Combine_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m304_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t206 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern Il2CppGenericMethod InvokableCall_1_Invoke_m14198_GenericMethod;
extern "C" void InvokableCall_1_Invoke_m14198_gshared (InvokableCall_1_t2700 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t395 * L_1 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_1, (String_t*) &_stringLiteral373, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t76* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t206 * L_4 = (__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3722(NULL /*static, unused*/, L_4, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3722_MethodInfo);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t206 * L_6 = (__this->___Delegate_0);
		ObjectU5BU5D_t76* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck(L_6);
		VirtActionInvoker1< Color_t12  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6, ((*(Color_t12 *)((Color_t12 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_1_Find_m14199_GenericMethod;
extern "C" bool InvokableCall_1_Find_m14199_gshared (InvokableCall_1_t2700 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t206 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m4027(L_0, /*hidden argument*/&Delegate_get_Target_m4027_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t206 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m4026(L_3, /*hidden argument*/&Delegate_get_Method_m4026_MethodInfo);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IndexedSet_1_t215_il2cpp_TypeInfo;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_genMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Predicate_1_gen.h"
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Comparison_1_gen_1.h"
extern TypeInfo List_1_t2701_il2cpp_TypeInfo;
extern TypeInfo ICanvasElement_t218_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t378_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3587_il2cpp_TypeInfo;
extern TypeInfo NotImplementedException_t1195_il2cpp_TypeInfo;
extern TypeInfo ICanvasElementU5BU5D_t2718_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t217_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Predicate_1_genMethodDeclarations.h"
extern Il2CppType List_1_t2701_0_0_0;
extern Il2CppType Dictionary_2_t378_0_0_0;
extern Il2CppType IndexedSet_1_t215_0_0_0;
extern Il2CppType Predicate_1_t217_0_0_0;
extern MethodInfo List_1_get_Count_m14411_MethodInfo;
extern MethodInfo List_1_get_Item_m14412_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m14547_MethodInfo;
extern MethodInfo List_1_set_Item_m14413_MethodInfo;
extern MethodInfo Dictionary_2_Add_m14541_MethodInfo;
extern MethodInfo List_1__ctor_m14364_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m14506_MethodInfo;
extern MethodInfo IndexedSet_1_GetEnumerator_m14205_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m14543_MethodInfo;
extern MethodInfo List_1_Add_m14383_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m14548_MethodInfo;
extern MethodInfo IndexedSet_1_RemoveAt_m14219_MethodInfo;
extern MethodInfo NotImplementedException__ctor_m10659_MethodInfo;
extern MethodInfo List_1_Clear_m14389_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m14542_MethodInfo;
extern MethodInfo List_1_CopyTo_m14391_MethodInfo;
extern MethodInfo List_1_RemoveAt_m14403_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m14532_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m14494_MethodInfo;
extern MethodInfo IndexedSet_1_Remove_m1976_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m14411_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m14412_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m14547_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m14413_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m14541_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m14364_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m14506_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_GetEnumerator_m14205_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m14543_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m14383_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m14548_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_RemoveAt_m14219_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m14389_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m14542_GenericMethod;
extern Il2CppGenericMethod List_1_CopyTo_m14391_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m14403_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m14532_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m14494_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_Remove_m1976_GenericMethod;
extern Il2CppGenericMethod List_1_Sort_m14406_GenericMethod;


// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Remove(T)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Count()
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IndexedSet_1_t2703_il2cpp_TypeInfo;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3.h"
extern TypeInfo List_1_t354_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t2702_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t126_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2477_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
extern Il2CppType List_1_t354_0_0_0;
extern Il2CppType Dictionary_2_t2702_0_0_0;
extern Il2CppType IndexedSet_1_t2703_0_0_0;
extern Il2CppType Predicate_1_t2477_0_0_0;
extern MethodInfo List_1_get_Count_m4106_MethodInfo;
extern MethodInfo List_1_get_Item_m4128_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m14267_MethodInfo;
extern MethodInfo List_1_set_Item_m4129_MethodInfo;
extern MethodInfo Dictionary_2_Add_m14261_MethodInfo;
extern MethodInfo List_1__ctor_m3892_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m14226_MethodInfo;
extern MethodInfo IndexedSet_1_GetEnumerator_m14206_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m14263_MethodInfo;
extern MethodInfo List_1_Add_m3913_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m14268_MethodInfo;
extern MethodInfo IndexedSet_1_RemoveAt_m14220_MethodInfo;
extern MethodInfo List_1_Clear_m4115_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m14262_MethodInfo;
extern MethodInfo List_1_CopyTo_m4123_MethodInfo;
extern MethodInfo List_1_RemoveAt_m4120_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m14252_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m11973_MethodInfo;
extern MethodInfo IndexedSet_1_Remove_m14204_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m4106_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m4128_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m14267_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m4129_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m14261_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3892_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m14226_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_GetEnumerator_m14206_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m14263_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3913_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m14268_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_RemoveAt_m14220_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m4115_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m14262_GenericMethod;
extern Il2CppGenericMethod List_1_CopyTo_m4123_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m4120_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m14252_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m11973_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_Remove_m14204_GenericMethod;
extern Il2CppGenericMethod List_1_Sort_m11853_GenericMethod;


// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern Il2CppGenericMethod IndexedSet_1__ctor_m14200_GenericMethod;
extern TypeInfo* List_1_t354_il2cpp_TypeInfo_var;
extern "C" void IndexedSet_1__ctor_m14200_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method)
{
	static bool IndexedSet_1__ctor_m14200_init;
	if (!IndexedSet_1__ctor_m14200_init)
	{
		List_1_t354_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t354_0_0_0);
		IndexedSet_1__ctor_m14200_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t354_il2cpp_TypeInfo_var);
		List_1_t354 * L_0 = (List_1_t354 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t354 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_List_0 = L_0;
		Dictionary_2_t2702 * L_1 = (Dictionary_2_t2702 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->___m_Dictionary_1 = L_1;
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14202_GenericMethod;
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14202_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this);
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern Il2CppGenericMethod IndexedSet_1_Add_m14203_GenericMethod;
extern "C" void IndexedSet_1_Add_m14203_gshared (IndexedSet_1_t2703 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		List_1_t354 * L_3 = (__this->___m_List_0);
		Object_t * L_4 = ___item;
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_3, L_4);
		Dictionary_2_t2702 * L_5 = (__this->___m_Dictionary_1);
		Object_t * L_6 = ___item;
		List_1_t354 * L_7 = (__this->___m_List_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_7);
		NullCheck(L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_5, L_6, ((int32_t)((int32_t)L_8-(int32_t)1)));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14204_gshared (IndexedSet_1_t2703 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		Dictionary_2_t2702 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, L_3);
		return 1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14206_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method)
{
	{
		NotImplementedException_t1195 * L_0 = (NotImplementedException_t1195 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotImplementedException_t1195_il2cpp_TypeInfo));
		NotImplementedException__ctor_m10659(L_0, /*hidden argument*/&NotImplementedException__ctor_m10659_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern Il2CppGenericMethod IndexedSet_1_Clear_m14207_GenericMethod;
extern "C" void IndexedSet_1_Clear_m14207_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method)
{
	{
		List_1_t354 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), L_0);
		Dictionary_2_t2702 * L_1 = (__this->___m_Dictionary_1);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_1);
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern Il2CppGenericMethod IndexedSet_1_Contains_m14209_GenericMethod;
extern "C" bool IndexedSet_1_Contains_m14209_gshared (IndexedSet_1_t2703 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod IndexedSet_1_CopyTo_m14211_GenericMethod;
extern "C" void IndexedSet_1_CopyTo_m14211_gshared (IndexedSet_1_t2703 * __this, ObjectU5BU5D_t76* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		List_1_t354 * L_0 = (__this->___m_List_0);
		ObjectU5BU5D_t76* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		NullCheck(L_0);
		VirtActionInvoker2< ObjectU5BU5D_t76*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), L_0, L_1, L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern Il2CppGenericMethod IndexedSet_1_get_Count_m14212_GenericMethod;
extern "C" int32_t IndexedSet_1_get_Count_m14212_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method)
{
	{
		List_1_t354 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern Il2CppGenericMethod IndexedSet_1_get_IsReadOnly_m14214_GenericMethod;
extern "C" bool IndexedSet_1_get_IsReadOnly_m14214_gshared (IndexedSet_1_t2703 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern Il2CppGenericMethod IndexedSet_1_IndexOf_m14216_GenericMethod;
extern "C" int32_t IndexedSet_1_IndexOf_m14216_gshared (IndexedSet_1_t2703 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		Dictionary_2_t2702 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1, (&V_0));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern Il2CppGenericMethod IndexedSet_1_Insert_m14218_GenericMethod;
extern "C" void IndexedSet_1_Insert_m14218_gshared (IndexedSet_1_t2703 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral103, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14220_gshared (IndexedSet_1_t2703 * __this, int32_t ___index, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		List_1_t354 * L_0 = (__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		V_0 = L_2;
		Dictionary_2_t2702 * L_3 = (__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), L_3, L_4);
		int32_t L_5 = ___index;
		List_1_t354 * L_6 = (__this->___m_List_0);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)((int32_t)L_7-(int32_t)1))))))
		{
			goto IL_003e;
		}
	}
	{
		List_1_t354 * L_8 = (__this->___m_List_0);
		int32_t L_9 = ___index;
		NullCheck(L_8);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_8, L_9);
		goto IL_007f;
	}

IL_003e:
	{
		List_1_t354 * L_10 = (__this->___m_List_0);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_10);
		V_1 = ((int32_t)((int32_t)L_11-(int32_t)1));
		List_1_t354 * L_12 = (__this->___m_List_0);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_12, L_13);
		V_2 = L_14;
		List_1_t354 * L_15 = (__this->___m_List_0);
		int32_t L_16 = ___index;
		Object_t * L_17 = V_2;
		NullCheck(L_15);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), L_15, L_16, L_17);
		Dictionary_2_t2702 * L_18 = (__this->___m_Dictionary_1);
		Object_t * L_19 = V_2;
		int32_t L_20 = ___index;
		NullCheck(L_18);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), L_18, L_19, L_20);
		List_1_t354 * L_21 = (__this->___m_List_0);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_21, L_22);
	}

IL_007f:
	{
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern Il2CppGenericMethod IndexedSet_1_get_Item_m14221_GenericMethod;
extern "C" Object_t * IndexedSet_1_get_Item_m14221_gshared (IndexedSet_1_t2703 * __this, int32_t ___index, MethodInfo* method)
{
	{
		List_1_t354 * L_0 = (__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern Il2CppGenericMethod IndexedSet_1_set_Item_m14223_GenericMethod;
extern "C" void IndexedSet_1_set_Item_m14223_gshared (IndexedSet_1_t2703 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		List_1_t354 * L_0 = (__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		V_0 = L_2;
		Dictionary_2_t2702 * L_3 = (__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), L_3, L_4);
		List_1_t354 * L_5 = (__this->___m_List_0);
		int32_t L_6 = ___index;
		Object_t * L_7 = ___value;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), L_5, L_6, L_7);
		Dictionary_2_t2702 * L_8 = (__this->___m_Dictionary_1);
		Object_t * L_9 = V_0;
		int32_t L_10 = ___index;
		NullCheck(L_8);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_8, L_9, L_10);
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod IndexedSet_1_RemoveAll_m14224_GenericMethod;
extern "C" void IndexedSet_1_RemoveAll_m14224_gshared (IndexedSet_1_t2703 * __this, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0007:
	{
		List_1_t354 * L_0 = (__this->___m_List_0);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		V_1 = L_2;
		Predicate_1_t2477 * L_3 = ___match;
		Object_t * L_4 = V_1;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_3, L_4);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_6 = V_1;
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), __this, L_6);
		goto IL_0031;
	}

IL_002d:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		List_1_t354 * L_9 = (__this->___m_List_0);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod IndexedSet_1_Sort_m14225_GenericMethod;
extern "C" void IndexedSet_1_Sort_m14225_gshared (IndexedSet_1_t2703 * __this, Comparison_1_t2496 * ___sortLayoutFunction, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		List_1_t354 * L_0 = (__this->___m_List_0);
		Comparison_1_t2496 * L_1 = ___sortLayoutFunction;
		NullCheck(L_0);
		(( void (*) (List_1_t354 *, Comparison_1_t2496 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		V_0 = 0;
		goto IL_0031;
	}

IL_0013:
	{
		List_1_t354 * L_2 = (__this->___m_List_0);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_2, L_3);
		V_1 = L_4;
		Dictionary_2_t2702 * L_5 = (__this->___m_Dictionary_1);
		Object_t * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), L_5, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		List_1_t354 * L_10 = (__this->___m_List_0);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1.h"
extern TypeInfo IEqualityComparer_1_t2704_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1503_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t2708_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t2712_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4104_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4105_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3590_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2706_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3589_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t3778_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2705_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2715_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2710_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t2716_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2469_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2294_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t1007_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2653_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern Il2CppType IEqualityComparer_1_t2704_0_0_0;
extern Il2CppType KeyCollection_t2708_0_0_0;
extern Il2CppType ValueCollection_t2712_0_0_0;
extern Il2CppType ICollection_1_t4104_0_0_0;
extern Il2CppType IEnumerable_1_t4105_0_0_0;
extern Il2CppType IEnumerator_1_t3590_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3589_0_0_0;
extern Il2CppType KeyValuePair_2_t2706_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t3778_0_0_0;
extern Il2CppType Transform_1_t2705_0_0_0;
extern Il2CppType Transform_1_t2715_0_0_0;
extern Il2CppType Enumerator_t2710_0_0_0;
extern Il2CppType ShimEnumerator_t2716_0_0_0;
extern Il2CppType EqualityComparer_1_t2469_0_0_0;
extern Il2CppType LinkU5BU5D_t2294_0_0_0;
extern Il2CppType IEqualityComparer_1_t2653_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Dictionary_2_get_Item_m14251_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m25927_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25908_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m7837_MethodInfo;
extern MethodInfo KeyCollection__ctor_m14287_MethodInfo;
extern MethodInfo ValueCollection__ctor_m14322_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25928_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25929_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25930_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m14275_MethodInfo;
extern MethodInfo Transform_1__ctor_m14345_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m14256_MethodInfo;
extern MethodInfo Transform_1__ctor_m14349_MethodInfo;
extern MethodInfo Enumerator__ctor_m14306_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m14353_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m14250_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m14276_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m8004_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25899_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5244_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5257_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m5256_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m5245_MethodInfo;
extern MethodInfo Type_ToString_m7302_MethodInfo;
extern MethodInfo String_Concat_m548_MethodInfo;
extern MethodInfo ArgumentException__ctor_m5233_MethodInfo;
struct Dictionary_2_t2702;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1014_TisDictionaryEntry_t1014_m23059 (Dictionary_2_t2702 * __this, DictionaryEntryU5BU5D_t3778* p0, int32_t p1, Transform_1_t2705 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t2702;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2706_m23061_gshared (Dictionary_2_t2702 * __this, Array_t * p0, int32_t p1, Transform_1_t2715 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2706_m23061(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, Transform_1_t2715 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2706_m23061_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2702;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2706_TisKeyValuePair_2_t2706_m23062 (Dictionary_2_t2702 * __this, KeyValuePair_2U5BU5D_t3589* p0, int32_t p1, Transform_1_t2715 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m14269_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m14270_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m14271_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m14251_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m14272_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m25927_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25908_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m14260_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m14287_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m14322_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m14253_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m14230_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25928_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25929_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25930_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m14277_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m14279_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m14273_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m14259_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m14255_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m14275_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m14345_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1014_TisDictionaryEntry_t1014_m23059_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m14256_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m14349_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2706_m23061_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14306_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m14353_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m11938_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m14254_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m14250_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m14276_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2706_TisKeyValuePair_2_t2706_m23062_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25899_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14226_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		(( void (*) (Dictionary_2_t2702 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m14227_GenericMethod;
extern "C" void Dictionary_2__ctor_m14227_gshared (Dictionary_2_t2702 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t2702 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2__ctor_m14228_GenericMethod;
extern "C" void Dictionary_2__ctor_m14228_gshared (Dictionary_2_t2702 * __this, Object_t* ___dictionary, MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		(( void (*) (Dictionary_2_t2702 *, Object_t*, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m14229_GenericMethod;
extern "C" void Dictionary_2__ctor_m14229_gshared (Dictionary_2_t2702 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t2702 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14230_gshared (Dictionary_2_t2702 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t2706  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1341, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		(( void (*) (Dictionary_2_t2702 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck(L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_6);
		V_2 = L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck(L_8);
			KeyValuePair_2_t2706  L_9 = (KeyValuePair_2_t2706 )InterfaceFuncInvoker0< KeyValuePair_2_t2706  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m14231_GenericMethod;
extern "C" void Dictionary_2__ctor_m14231_gshared (Dictionary_2_t2702 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		SerializationInfo_t708 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14232_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14232_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		KeyCollection_t2708 * L_0 = (( KeyCollection_t2708 * (*) (Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14233_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14233_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2712 * L_0 = (( ValueCollection_t2712 * (*) (Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m14234_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14234_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2702 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m14235_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14235_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2702 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t2702 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m14236_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14236_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2702 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t2702 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Contains_m14237_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14237_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m14238_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14238_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14239_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14239_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14240_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14240_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14241_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14241_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14242_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14242_gshared (Dictionary_2_t2702 * __this, KeyValuePair_2_t2706  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14243_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14243_gshared (Dictionary_2_t2702 * __this, KeyValuePair_2_t2706  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t2706  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t2702 *, KeyValuePair_2_t2706 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14244_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14244_gshared (Dictionary_2_t2702 * __this, KeyValuePair_2U5BU5D_t3589* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3589* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t2702 *, KeyValuePair_2U5BU5D_t3589*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14245_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14245_gshared (Dictionary_2_t2702 * __this, KeyValuePair_2_t2706  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t2706  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t2702 *, KeyValuePair_2_t2706 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m14246_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t3778_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14246_gshared (Dictionary_2_t2702 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m14246_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m14246_init)
	{
		DictionaryEntryU5BU5D_t3778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t3778_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m14246_init = true;
	}
	KeyValuePair_2U5BU5D_t3589* V_0 = {0};
	DictionaryEntryU5BU5D_t3778* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3778* G_B5_1 = {0};
	Dictionary_2_t2702 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3778* G_B4_1 = {0};
	Dictionary_2_t2702 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t3589*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t3589* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3589* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t2702 *, KeyValuePair_2U5BU5D_t3589*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = ((DictionaryEntryU5BU5D_t3778*)IsInst(L_6, DictionaryEntryU5BU5D_t3778_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t3778* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t3778* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2705 * L_10 = ((Dictionary_2_t2702_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2702 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2702 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2705 * L_12 = (Transform_1_t2705 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2705 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2702_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2702 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t2705 * L_13 = ((Dictionary_2_t2702_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t2702 *, DictionaryEntryU5BU5D_t3778*, int32_t, Transform_1_t2705 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2715 * L_17 = (Transform_1_t2715 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2715 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, Transform_1_t2715 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14247_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14247_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710  L_0 = {0};
		(( void (*) (Enumerator_t2710 *, Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2710  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14248_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14248_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710  L_0 = {0};
		(( void (*) (Enumerator_t2710 *, Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2710  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14249_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14249_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t2716 * L_0 = (ShimEnumerator_t2716 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2716 *, Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14250_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14251_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_2 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_2, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t109* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t109* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t2294* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t76* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		Int32U5BU5D_t109* L_20 = (__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t2294* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t1503 * L_27 = (KeyNotFoundException_t1503 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyNotFoundException_t1503_il2cpp_TypeInfo));
		KeyNotFoundException__ctor_m7837(L_27, /*hidden argument*/&KeyNotFoundException__ctor_m7837_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14252_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_2 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_2, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t109* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t109* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t2294* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t76* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2294* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (__this->___count_10);
		int32_t L_29 = ((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_32 = V_0;
		Int32U5BU5D_t109* L_33 = (__this->___table_4);
		NullCheck(L_33);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (__this->___emptySlot_9);
		V_2 = L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (__this->___touchedSlots_8);
		int32_t L_37 = L_36;
		V_4 = L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t2294* L_39 = (__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t2294* L_42 = (__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t109* L_44 = (__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t109* L_47 = (__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t2294* L_50 = (__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t76* L_53 = (__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t2294* L_57 = (__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t2294* L_59 = (__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t2294* L_62 = (__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t109* L_64 = (__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t109* L_67 = (__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		Int32U5BU5D_t109* L_70 = (__this->___valueSlots_7);
		int32_t L_71 = V_2;
		int32_t L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_70, L_71)) = (int32_t)L_72;
		int32_t L_73 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t2469_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m14253_gshared (Dictionary_2_t2702 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m14253_init;
	if (!Dictionary_2_Init_m14253_init)
	{
		EqualityComparer_1_t2469_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2469_0_0_0);
		Dictionary_2_Init_m14253_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2702 * G_B4_0 = {0};
	Dictionary_2_t2702 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2702 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_1 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5235(L_1, (String_t*) &_stringLiteral1342, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5235_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2702 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2702 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2702 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2469_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2469 * L_5 = (( EqualityComparer_1_t2469 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2702 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = ((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = ((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		(( void (*) (Dictionary_2_t2702 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2294_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m14254_gshared (Dictionary_2_t2702 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m14254_init;
	if (!Dictionary_2_InitArrays_m14254_init)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		LinkU5BU5D_t2294_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2294_0_0_0);
		Dictionary_2_InitArrays_m14254_init = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2294*)SZArrayNew(LinkU5BU5D_t2294_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t76*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((Int32U5BU5D_t109*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t109* L_4 = (__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t109* L_6 = (__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14255_gshared (Dictionary_2_t2702 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral287, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_3 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5235(L_3, (String_t*) &_stringLiteral381, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5235_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5231(L_5, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t395 * L_7 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_7, (String_t*) &_stringLiteral1343, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck(L_8);
		int32_t L_9 = Array_get_Length_m5231(L_8, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		int32_t L_10 = ___index;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), __this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t395 * L_12 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_12, (String_t*) &_stringLiteral1344, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2706  Dictionary_2_make_pair_m14256_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		KeyValuePair_2_t2706  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2706 *, Object_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m14257_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_key_m14257_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m14258_GenericMethod;
extern "C" int32_t Dictionary_2_pick_value_m14258_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14259_gshared (Dictionary_2_t2702 * __this, KeyValuePair_2U5BU5D_t3589* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3589* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t3589* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2715 * L_5 = (Transform_1_t2715 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2715 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t2702 *, KeyValuePair_2U5BU5D_t3589*, int32_t, Transform_1_t2715 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2294_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m14260_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m14260_init;
	if (!Dictionary_2_Resize_m14260_init)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		LinkU5BU5D_t2294_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2294_0_0_0);
		Dictionary_2_Resize_m14260_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t109* V_1 = {0};
	LinkU5BU5D_t2294* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t76* V_7 = {0};
	Int32U5BU5D_t109* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t109* L_0 = (__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t1007_il2cpp_TypeInfo));
		int32_t L_1 = Hashtable_ToPrime_m8004(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/&Hashtable_ToPrime_m8004_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = ((LinkU5BU5D_t2294*)SZArrayNew(LinkU5BU5D_t2294_il2cpp_TypeInfo_var, L_3));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t109* L_4 = (__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t2294* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t76* L_10 = (__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck(L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = ((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = L_14;
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2294* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t109* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t109* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2294* L_26 = (__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t109* L_32 = (__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t109* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2294* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = ((ObjectU5BU5D_t76*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = ((Int32U5BU5D_t109*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t76* L_37 = (__this->___keySlots_6);
		ObjectU5BU5D_t76* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m7220(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		Int32U5BU5D_t109* L_40 = (__this->___valueSlots_7);
		Int32U5BU5D_t109* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m7220(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		ObjectU5BU5D_t76* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int32U5BU5D_t109* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14261_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_2 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_2, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t109* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t109* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t2294* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		ObjectU5BU5D_t76* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t395 * L_21 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_21, (String_t*) &_stringLiteral1346, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t2294* L_22 = (__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (__this->___count_10);
		int32_t L_27 = ((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_30 = V_0;
		Int32U5BU5D_t109* L_31 = (__this->___table_4);
		NullCheck(L_31);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (__this->___emptySlot_9);
		V_2 = L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (__this->___touchedSlots_8);
		int32_t L_35 = L_34;
		V_3 = L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t2294* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t2294* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t2294* L_43 = (__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t109* L_45 = (__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t109* L_48 = (__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t76* L_51 = (__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		Int32U5BU5D_t109* L_54 = (__this->___valueSlots_7);
		int32_t L_55 = V_2;
		int32_t L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_54, L_55)) = (int32_t)L_56;
		int32_t L_57 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14262_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t109* L_0 = (__this->___table_4);
		Int32U5BU5D_t109* L_1 = (__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m6403(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m6403_MethodInfo);
		ObjectU5BU5D_t76* L_2 = (__this->___keySlots_6);
		ObjectU5BU5D_t76* L_3 = (__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m6403(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/&Array_Clear_m6403_MethodInfo);
		Int32U5BU5D_t109* L_4 = (__this->___valueSlots_7);
		Int32U5BU5D_t109* L_5 = (__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m6403(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&Array_Clear_m6403_MethodInfo);
		LinkU5BU5D_t2294* L_6 = (__this->___linkSlots_5);
		LinkU5BU5D_t2294* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m6403(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/&Array_Clear_m6403_MethodInfo);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14263_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_2 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_2, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t109* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t109* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t2294* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t76* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t2294* L_20 = (__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m14264_GenericMethod;
extern TypeInfo* EqualityComparer_1_t2670_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m14264_gshared (Dictionary_2_t2702 * __this, int32_t ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m14264_init;
	if (!Dictionary_2_ContainsValue_m14264_init)
	{
		EqualityComparer_1_t2670_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2670_0_0_0);
		Dictionary_2_ContainsValue_m14264_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2670_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2670 * L_0 = (( EqualityComparer_1_t2670 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t109* L_1 = (__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		Int32U5BU5D_t109* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int32_t L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_4, (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)), L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t2294* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t109* L_16 = (__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m14265_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m14265_gshared (Dictionary_2_t2702 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t3589* V_0 = {0};
	{
		SerializationInfo_t708 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral388, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t708 * L_2 = ___info;
		int32_t L_3 = (__this->___generation_14);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5244(L_2, (String_t*) &_stringLiteral390, L_3, /*hidden argument*/&SerializationInfo_AddValue_m5244_MethodInfo);
		SerializationInfo_t708 * L_4 = ___info;
		Object_t* L_5 = (__this->___hcp_12);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5257(L_4, (String_t*) &_stringLiteral392, L_5, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		V_0 = (KeyValuePair_2U5BU5D_t3589*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t3589*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		KeyValuePair_2U5BU5D_t3589* L_8 = V_0;
		(( void (*) (Dictionary_2_t2702 *, KeyValuePair_2U5BU5D_t3589*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t708 * L_9 = ___info;
		Int32U5BU5D_t109* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m5244(L_9, (String_t*) &_stringLiteral1347, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m5244_MethodInfo);
		SerializationInfo_t708 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t3589* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m5257(L_11, (String_t*) &_stringLiteral1348, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m14266_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m14266_gshared (Dictionary_2_t2702 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t3589* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t708 * L_0 = (__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t708 * L_1 = (__this->___serialization_info_13);
		NullCheck(L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m5256(L_1, (String_t*) &_stringLiteral390, /*hidden argument*/&SerializationInfo_GetInt32_m5256_MethodInfo);
		__this->___generation_14 = L_2;
		SerializationInfo_t708 * L_3 = (__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m5245(L_3, (String_t*) &_stringLiteral392, L_4, /*hidden argument*/&SerializationInfo_GetValue_m5245_MethodInfo);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)));
		SerializationInfo_t708 * L_6 = (__this->___serialization_info_13);
		NullCheck(L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m5256(L_6, (String_t*) &_stringLiteral1347, /*hidden argument*/&SerializationInfo_GetInt32_m5256_MethodInfo);
		V_0 = L_7;
		SerializationInfo_t708 * L_8 = (__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m5245(L_8, (String_t*) &_stringLiteral1348, L_9, /*hidden argument*/&SerializationInfo_GetValue_m5245_MethodInfo);
		V_1 = ((KeyValuePair_2U5BU5D_t3589*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		(( void (*) (Dictionary_2_t2702 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t3589* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t3589* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((KeyValuePair_2_t2706 *)(KeyValuePair_2_t2706 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t3589* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (( int32_t (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((KeyValuePair_2_t2706 *)(KeyValuePair_2_t2706 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t3589* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t708 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14267_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int32_t V_5 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_2 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_2, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t109* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t109* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		LinkU5BU5D_t2294* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t76* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2294* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t109* L_30 = (__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t2294* L_32 = (__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t2294* L_35 = (__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t2294* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t2294* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (__this->___emptySlot_9);
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t2294* L_44 = (__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t76* L_46 = (__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		Int32U5BU5D_t109* L_49 = (__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), (&V_5));
		int32_t L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)L_51;
		int32_t L_52 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14268_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, int32_t* ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_2 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_2, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t109* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t109* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t2294* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t76* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		int32_t* L_20 = ___value;
		Int32U5BU5D_t109* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t2294* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_28 = ___value;
		Initobj (InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), (&V_2));
		int32_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2708 * Dictionary_2_get_Keys_m14269_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		KeyCollection_t2708 * L_0 = (KeyCollection_t2708 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2708 *, Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2712 * Dictionary_2_get_Values_m14270_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2712 * L_0 = (ValueCollection_t2712 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2712 *, Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14271_gshared (Dictionary_2_t2702 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m7302_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral1349, L_4, /*hidden argument*/&String_Concat_m548_MethodInfo);
		ArgumentException_t395 * L_6 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m5233(L_6, L_5, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentException__ctor_m5233_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14272_gshared (Dictionary_2_t2702 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m7271_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), (&V_0));
		int32_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m7302_MethodInfo, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = String_Concat_m548(NULL /*static, unused*/, (String_t*) &_stringLiteral1349, L_6, /*hidden argument*/&String_Concat_m548_MethodInfo);
		ArgumentException_t395 * L_8 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m5233(L_8, L_7, (String_t*) &_stringLiteral580, /*hidden argument*/&ArgumentException__ctor_m5233_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t2670_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14273_gshared (Dictionary_2_t2702 * __this, KeyValuePair_2_t2706  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m14273_init;
	if (!Dictionary_2_ContainsKeyValuePair_m14273_init)
	{
		EqualityComparer_1_t2670_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2670_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m14273_init = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2670_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2670 * L_2 = (( EqualityComparer_1_t2670 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m14274_GenericMethod;
extern "C" Enumerator_t2710  Dictionary_2_GetEnumerator_m14274_gshared (Dictionary_2_t2702 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710  L_0 = {0};
		(( void (*) (Enumerator_t2710 *, Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1014  Dictionary_2_U3CCopyToU3Em__0_m14275_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		int32_t L_2 = ___value;
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		DictionaryEntry_t1014  L_5 = {0};
		DictionaryEntry__ctor_m5228(&L_5, ((Object_t *)L_1), L_4, /*hidden argument*/&DictionaryEntry__ctor_m5228_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m14278_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m14280_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m14276_gshared (KeyValuePair_2_t2706 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2706 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2706 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m14277_gshared (KeyValuePair_2_t2706 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m14278_gshared (KeyValuePair_2_t2706 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m14279_gshared (KeyValuePair_2_t2706 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m14280_gshared (KeyValuePair_2_t2706 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m14281_GenericMethod;
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m14281_gshared (KeyValuePair_2_t2706 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m14281_init;
	if (!KeyValuePair_2_ToString_m14281_init)
	{
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		KeyValuePair_2_ToString_m14281_init = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t87* G_B2_1 = {0};
	StringU5BU5D_t87* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t87* G_B1_1 = {0};
	StringU5BU5D_t87* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t87* G_B3_2 = {0};
	StringU5BU5D_t87* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t87* G_B5_1 = {0};
	StringU5BU5D_t87* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t87* G_B4_1 = {0};
	StringU5BU5D_t87* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t87* G_B6_2 = {0};
	StringU5BU5D_t87* G_B6_3 = {0};
	{
		StringU5BU5D_t87* L_0 = ((StringU5BU5D_t87*)SZArrayNew(StringU5BU5D_t87_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral301);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral301;
		StringU5BU5D_t87* L_1 = L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_4;
		NullCheck((*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t87* L_7 = G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral363);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral363;
		StringU5BU5D_t87* L_8 = L_7;
		int32_t L_9 = (( int32_t (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		int32_t L_12 = (( int32_t (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_12;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t87* L_15 = G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral14);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral14;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = String_Concat_m3849(NULL /*static, unused*/, L_15, /*hidden argument*/&String_Concat_m3849_MethodInfo);
		return L_16;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2707_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2707_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t2706  Array_InternalArray__get_Item_TisKeyValuePair_2_t2706_m23044_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2706_m23044(__this, p0, method) (( KeyValuePair_2_t2706  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2706_m23044_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14286_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2706_m23044_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14282_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m14282_gshared (InternalEnumerator_1_t2707 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14283_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14283_gshared (InternalEnumerator_1_t2707 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2706  L_0 = (( KeyValuePair_2_t2706  (*) (InternalEnumerator_1_t2707 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2706  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14284_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m14284_gshared (InternalEnumerator_1_t2707 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14285_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m14285_gshared (InternalEnumerator_1_t2707 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m5231(L_1, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2706  InternalEnumerator_1_get_Current_m14286_gshared (InternalEnumerator_1_t2707 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1189 * L_1 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_1, (String_t*) &_stringLiteral1215, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1189 * L_3 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_3, (String_t*) &_stringLiteral1216, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5231(L_5, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t2706  L_8 = (( KeyValuePair_2_t2706  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4106_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3588_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8.h"
extern TypeInfo Enumerator_t2709_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2711_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5MethodDeclarations.h"
extern Il2CppType Enumerator_t2709_0_0_0;
extern Il2CppType Transform_1_t2711_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m14298_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m14257_MethodInfo;
extern MethodInfo Transform_1__ctor_m14318_MethodInfo;
extern MethodInfo Enumerator__ctor_m14301_MethodInfo;
struct Dictionary_2_t2702;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23055_gshared (Dictionary_2_t2702 * __this, Array_t * p0, int32_t p1, Transform_1_t2711 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23055(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, Transform_1_t2711 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23055_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2702;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m23054 (Dictionary_2_t2702 * __this, ObjectU5BU5D_t76* p0, int32_t p1, Transform_1_t2711 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m14299_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m14298_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m14318_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23055_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m23054_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14301_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m14287_gshared (KeyCollection_t2708 * __this, Dictionary_2_t2702 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Dictionary_2_t2702 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1341, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t2702 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14288_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14288_gshared (KeyCollection_t2708 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14289_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14289_gshared (KeyCollection_t2708 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14290_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14290_gshared (KeyCollection_t2708 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14291_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14291_gshared (KeyCollection_t2708 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14292_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14292_gshared (KeyCollection_t2708 * __this, MethodInfo* method)
{
	{
		Enumerator_t2709  L_0 = (( Enumerator_t2709  (*) (KeyCollection_t2708 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2709  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m14293_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m14293_gshared (KeyCollection_t2708 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ObjectU5BU5D_t76* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((ObjectU5BU5D_t76*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t76* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t76* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< ObjectU5BU5D_t76*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t2702 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2702 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2711 * L_11 = (Transform_1_t2711 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2711 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, Transform_1_t2711 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14294_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14294_gshared (KeyCollection_t2708 * __this, MethodInfo* method)
{
	{
		Enumerator_t2709  L_0 = (( Enumerator_t2709  (*) (KeyCollection_t2708 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2709  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14295_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14295_gshared (KeyCollection_t2708 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14296_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14296_gshared (KeyCollection_t2708 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m14297_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m14297_gshared (KeyCollection_t2708 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10970_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m14298_gshared (KeyCollection_t2708 * __this, ObjectU5BU5D_t76* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t76* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2702 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t76* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2711 * L_7 = (Transform_1_t2711 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2711 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2702 *, ObjectU5BU5D_t76*, int32_t, Transform_1_t2711 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2709  KeyCollection_GetEnumerator_m14299_gshared (KeyCollection_t2708 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___dictionary_0);
		Enumerator_t2709  L_1 = {0};
		(( void (*) (Enumerator_t2709 *, Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m14300_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m14300_gshared (KeyCollection_t2708 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m14313_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m14317_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m14311_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14301_gshared (Enumerator_t2709 * __this, Dictionary_2_t2702 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2710  L_1 = (( Enumerator_t2710  (*) (Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m14302_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14302_gshared (Enumerator_t2709 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m14303_GenericMethod;
extern "C" void Enumerator_Dispose_m14303_gshared (Enumerator_t2709 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m14304_GenericMethod;
extern "C" bool Enumerator_MoveNext_m14304_gshared (Enumerator_t2709 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m14305_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m14305_gshared (Enumerator_t2709 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2706 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m14316_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m14314_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m14315_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14306_gshared (Enumerator_t2710 * __this, Dictionary_2_t2702 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2702 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m14307_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14307_gshared (Enumerator_t2710 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2706  L_0 = (__this->___current_3);
		KeyValuePair_2_t2706  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14308_GenericMethod;
extern "C" DictionaryEntry_t1014  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14308_gshared (Enumerator_t2710 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2706 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t2706 * L_3 = &(__this->___current_3);
		int32_t L_4 = (( int32_t (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t1014  L_7 = {0};
		DictionaryEntry__ctor_m5228(&L_7, ((Object_t *)L_2), L_6, /*hidden argument*/&DictionaryEntry__ctor_m5228_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14309_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14309_gshared (Enumerator_t2710 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14310_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14310_gshared (Enumerator_t2710 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14311_gshared (Enumerator_t2710 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->___next_1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = L_3;
		Dictionary_2_t2702 * L_4 = (__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2294* L_5 = (L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t2702 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t76* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2702 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		Int32U5BU5D_t109* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2706  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2706 *, Object_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t2702 * L_18 = (__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m14312_GenericMethod;
extern "C" KeyValuePair_2_t2706  Enumerator_get_Current_m14312_gshared (Enumerator_t2710 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2706  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14313_gshared (Enumerator_t2710 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2706 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14314_gshared (Enumerator_t2710 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2706 * L_0 = &(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m14315_gshared (Enumerator_t2710 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1375 * L_1 = (ObjectDisposedException_t1375 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1375_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m6420(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m6420_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t2702 * L_2 = (__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___generation_14);
		int32_t L_4 = (__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1189 * L_5 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_5, (String_t*) &_stringLiteral1350, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14316_gshared (Enumerator_t2710 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1189 * L_1 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_1, (String_t*) &_stringLiteral1351, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14317_gshared (Enumerator_t2710 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2702 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14318_gshared (Transform_1_t2711 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m14319_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m14319_gshared (Transform_1_t2711 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m14319((Transform_1_t2711 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m14320_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m14320_gshared (Transform_1_t2711 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m14321_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m14321_gshared (Transform_1_t2711 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9.h"
extern TypeInfo Enumerator_t2713_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2714_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7MethodDeclarations.h"
extern Il2CppType Enumerator_t2713_0_0_0;
extern Il2CppType Transform_1_t2714_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m14333_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m14258_MethodInfo;
extern MethodInfo Transform_1__ctor_m14341_MethodInfo;
extern MethodInfo Enumerator__ctor_m14336_MethodInfo;
struct Dictionary_2_t2702;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t60_m23057_gshared (Dictionary_2_t2702 * __this, Array_t * p0, int32_t p1, Transform_1_t2714 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t60_m23057(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, Transform_1_t2714 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t60_m23057_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2702;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t60_TisInt32_t60_m23058 (Dictionary_2_t2702 * __this, Int32U5BU5D_t109* p0, int32_t p1, Transform_1_t2714 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m14334_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m14333_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m14341_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t60_m23057_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t60_TisInt32_t60_m23058_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14336_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m14322_gshared (ValueCollection_t2712 * __this, Dictionary_2_t2702 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Dictionary_2_t2702 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1341, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t2702 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14323_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14323_gshared (ValueCollection_t2712 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14324_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14324_gshared (ValueCollection_t2712 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14325_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14325_gshared (ValueCollection_t2712 * __this, int32_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2702 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14326_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14326_gshared (ValueCollection_t2712 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14327_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14327_gshared (ValueCollection_t2712 * __this, MethodInfo* method)
{
	{
		Enumerator_t2713  L_0 = (( Enumerator_t2713  (*) (ValueCollection_t2712 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2713  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m14328_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m14328_gshared (ValueCollection_t2712 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	Int32U5BU5D_t109* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((Int32U5BU5D_t109*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t109* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int32U5BU5D_t109* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< Int32U5BU5D_t109*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t2702 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2702 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2714 * L_11 = (Transform_1_t2714 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2714 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, Transform_1_t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14329_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14329_gshared (ValueCollection_t2712 * __this, MethodInfo* method)
{
	{
		Enumerator_t2713  L_0 = (( Enumerator_t2713  (*) (ValueCollection_t2712 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2713  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14330_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14330_gshared (ValueCollection_t2712 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14331_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14331_gshared (ValueCollection_t2712 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m14332_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m14332_gshared (ValueCollection_t2712 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10970_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m14333_gshared (ValueCollection_t2712 * __this, Int32U5BU5D_t109* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___dictionary_0);
		Int32U5BU5D_t109* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2702 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2702 * L_3 = (__this->___dictionary_0);
		Int32U5BU5D_t109* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2714 * L_7 = (Transform_1_t2714 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2714 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2702 *, Int32U5BU5D_t109*, int32_t, Transform_1_t2714 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2713  ValueCollection_GetEnumerator_m14334_gshared (ValueCollection_t2712 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___dictionary_0);
		Enumerator_t2713  L_1 = {0};
		(( void (*) (Enumerator_t2713 *, Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m14335_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m14335_gshared (ValueCollection_t2712 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14336_gshared (Enumerator_t2713 * __this, Dictionary_2_t2702 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2702 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2710  L_1 = (( Enumerator_t2710  (*) (Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m14337_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14337_gshared (Enumerator_t2713 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710 * L_0 = &(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m14338_GenericMethod;
extern "C" void Enumerator_Dispose_m14338_gshared (Enumerator_t2713 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m14339_GenericMethod;
extern "C" bool Enumerator_MoveNext_m14339_gshared (Enumerator_t2713 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m14340_GenericMethod;
extern "C" int32_t Enumerator_get_Current_m14340_gshared (Enumerator_t2713 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2706 * L_1 = &(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14341_gshared (Transform_1_t2714 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m14342_GenericMethod;
extern "C" int32_t Transform_1_Invoke_m14342_gshared (Transform_1_t2714 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m14342((Transform_1_t2714 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m14343_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m14343_gshared (Transform_1_t2714 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m14344_GenericMethod;
extern "C" int32_t Transform_1_EndInvoke_m14344_gshared (Transform_1_t2714 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14345_gshared (Transform_1_t2705 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m14346_GenericMethod;
extern "C" DictionaryEntry_t1014  Transform_1_Invoke_m14346_gshared (Transform_1_t2705 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m14346((Transform_1_t2705 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1014  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1014  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1014  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m14347_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m14347_gshared (Transform_1_t2705 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m14348_GenericMethod;
extern "C" DictionaryEntry_t1014  Transform_1_EndInvoke_m14348_gshared (Transform_1_t2705 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1014 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14349_gshared (Transform_1_t2715 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m14350_GenericMethod;
extern "C" KeyValuePair_2_t2706  Transform_1_Invoke_m14350_gshared (Transform_1_t2715 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m14350((Transform_1_t2715 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2706  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2706  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2706  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m14351_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m14351_gshared (Transform_1_t2715 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t60_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m14352_GenericMethod;
extern "C" KeyValuePair_2_t2706  Transform_1_EndInvoke_m14352_gshared (Transform_1_t2715 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2706 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m14355_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m14355_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14353_gshared (ShimEnumerator_t2716 * __this, Dictionary_2_t2702 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Dictionary_2_t2702 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2710  L_1 = (( Enumerator_t2710  (*) (Dictionary_2_t2702 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m14354_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m14354_gshared (ShimEnumerator_t2716 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1014  ShimEnumerator_get_Entry_m14355_gshared (ShimEnumerator_t2716 * __this, MethodInfo* method)
{
	{
		Enumerator_t2710  L_0 = (__this->___host_enumerator_0);
		Enumerator_t2710  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t1014  L_3 = (DictionaryEntry_t1014 )InterfaceFuncInvoker0< DictionaryEntry_t1014  >::Invoke(&IDictionaryEnumerator_get_Entry_m10973_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m14356_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m14356_gshared (ShimEnumerator_t2716 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2706  V_0 = {0};
	{
		Enumerator_t2710 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2706  L_1 = (( KeyValuePair_2_t2706  (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m14357_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m14357_gshared (ShimEnumerator_t2716 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2706  V_0 = {0};
	{
		Enumerator_t2710 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2706  L_1 = (( KeyValuePair_2_t2706  (*) (Enumerator_t2710 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2706 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m14358_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m14358_gshared (ShimEnumerator_t2716 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t1014  L_0 = (DictionaryEntry_t1014 )VirtFuncInvoker0< DictionaryEntry_t1014  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t1014  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t1014_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2720_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3592_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
