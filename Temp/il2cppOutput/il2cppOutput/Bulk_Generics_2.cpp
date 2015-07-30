#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3.h"
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
extern TypeInfo GenericEqualityComparer_1_t2507_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t60_il2cpp_TypeInfo;
extern TypeInfo IEquatable_1_t2020_il2cpp_TypeInfo;
extern TypeInfo Boolean_t83_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern Il2CppType IEquatable_1_t2020_0_0_0;
extern MethodInfo Object_GetHashCode_m627_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m25772_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m12163_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m25772_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.String>::.ctor()
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.String>::GetHashCode(T)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.String>::Equals(T,T)
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2508_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__4MethodDeclarations.h"

extern TypeInfo IEquatable_1_t3920_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
extern Il2CppType IEquatable_1_t3920_0_0_0;
extern MethodInfo IEquatable_1_Equals_m25773_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m11934_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m25773_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m12169_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m12169_gshared (GenericEqualityComparer_1_t2508 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2469 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m12171_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12171_gshared (GenericEqualityComparer_1_t2508 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((*(&___obj)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m627_MethodInfo, (*(&___obj)));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m12173_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m12173_gshared (GenericEqualityComparer_1_t2508 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		return ((((Object_t*)(Object_t *)((Object_t *)L_3)) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Object_t * L_4 = ___y;
		NullCheck((*(&___x)));
		bool L_5 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (*(&___x)), L_4);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t2438_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.String>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.String>::GetHashCode(T)
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultComparer_t2509_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_0MethodDeclarations.h"

extern MethodInfo Object_Equals_m626_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.String>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.String>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.String>::Equals(T,T)
// System.Predicate`1<System.String>
#include "mscorlib_System_Predicate_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Predicate_1_t2510_il2cpp_TypeInfo;
// System.Predicate`1<System.String>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Predicate`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<System.String>::Invoke(T)
// System.IAsyncResult System.Predicate`1<System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<System.String>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Comparer`1<System.String>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t2511_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.String>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0MethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.String>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t658_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2512_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t395_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.String>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType Comparer_1_t2511_0_0_0;
extern Il2CppType IComparable_1_t2019_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType GenericComparer_1_t2224_0_0_0;
extern Il2CppType TypeU5BU5D_t658_0_0_0;
extern Il2CppType DefaultComparer_t2512_0_0_0;
extern MethodInfo Object__ctor_m357_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1995_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m4037_MethodInfo;
extern MethodInfo Type_MakeGenericType_m4035_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10116_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m12185_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25774_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10140_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m12185_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25774_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.String>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<System.String>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<System.String>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<System.String>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.String>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t2437_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.String>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_1_t2019_il2cpp_TypeInfo;
extern TypeInfo IComparable_t124_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m22499_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10941_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2307_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m12181_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m22499_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.String>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.String>::Compare(T,T)
// System.Comparison`1<System.String>
#include "mscorlib_System_Comparison_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2513_il2cpp_TypeInfo;
// System.Comparison`1<System.String>
#include "mscorlib_System_Comparison_1_gen_4MethodDeclarations.h"



// System.Void System.Comparison`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<System.String>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<System.String>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<System.String>::EndInvoke(System.IAsyncResult)
// UnityEngine.CastHelper`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2514_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_5MethodDeclarations.h"



// UnityEngine.CastHelper`1<RadialUndistortionEffect>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2515_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<RadialUndistortionEffect>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4017_il2cpp_TypeInfo;

// System.Single
#include "mscorlib_System_Single.h"


// T System.Collections.Generic.IEnumerator`1<System.Single>::get_Current()
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_32.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2516_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_32MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo Single_t85_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1189_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2516_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m5227_MethodInfo;
extern MethodInfo Array_get_Length_m5231_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
extern "C" float Array_InternalArray__get_Item_TisSingle_t85_m22504_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisSingle_t85_m22504(__this, p0, method) (( float (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisSingle_t85_m22504_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12195_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSingle_t85_m22504_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12191_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12191_gshared (InternalEnumerator_1_t2516 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12192_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12192_gshared (InternalEnumerator_1_t2516 * __this, MethodInfo* method)
{
	{
		float L_0 = (( float (*) (InternalEnumerator_1_t2516 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12193_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12193_gshared (InternalEnumerator_1_t2516 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12194_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12194_gshared (InternalEnumerator_1_t2516 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
extern "C" float InternalEnumerator_1_get_Current_m12195_gshared (InternalEnumerator_1_t2516 * __this, MethodInfo* method)
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
		float L_8 = (( float (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4018_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4019_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4020_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Single>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Single>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Single>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Single>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4021_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4022_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Single>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4023_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2025_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Single>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2517_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2517_0_0_0;
extern Il2CppType IComparable_1_t2025_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m22110_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m22110(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Single>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Single>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2025_m22515(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12200_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2025_m22515_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4024_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4025_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4026_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Single>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4027_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2026_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Single>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_34.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2518_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_34MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2518_0_0_0;
extern Il2CppType IEquatable_1_t2026_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Single>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Single>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2026_m22526(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12205_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2026_m22526_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4028_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t91_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"

// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
#include "UnityEngine.UI_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1.h"
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_5.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1.h"
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Comparison_1_gen.h"
extern TypeInfo RaycastResult_t93_il2cpp_TypeInfo;
extern TypeInfo Void_t75_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t732_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1898_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t758_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3550_il2cpp_TypeInfo;
extern TypeInfo RaycastResultU5BU5D_t2519_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2521_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3548_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3549_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t31_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t127_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2523_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t754_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2527_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2528_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_5MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1MethodDeclarations.h"
extern Il2CppType List_1_t91_0_0_0;
extern Il2CppType ICollection_1_t3550_0_0_0;
extern Il2CppType RaycastResultU5BU5D_t2519_0_0_0;
extern Il2CppType Enumerator_t2521_0_0_0;
extern Il2CppType IEnumerable_1_t3548_0_0_0;
extern Il2CppType IEnumerator_1_t3549_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2523_0_0_0;
extern Il2CppType Predicate_1_t2527_0_0_0;
extern Il2CppType Comparer_1_t2528_0_0_0;
extern MethodInfo List_1_get_Item_m1876_MethodInfo;
extern MethodInfo List_1_set_Item_m12249_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5412_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5235_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25775_MethodInfo;
extern MethodInfo Array_Copy_m7220_MethodInfo;
extern MethodInfo List_1_Add_m1946_MethodInfo;
extern MethodInfo List_1_Contains_m12229_MethodInfo;
extern MethodInfo List_1_IndexOf_m12235_MethodInfo;
extern MethodInfo List_1_Insert_m12238_MethodInfo;
extern MethodInfo List_1_Remove_m12240_MethodInfo;
extern MethodInfo Math_Max_m6412_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25776_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25777_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25778_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3904_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1901_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m12261_MethodInfo;
extern MethodInfo Array_Clear_m6403_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3902_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m12336_MethodInfo;
extern MethodInfo Enumerator__ctor_m12255_MethodInfo;
extern MethodInfo List_1_RemoveAt_m12242_MethodInfo;
extern MethodInfo Array_Reverse_m6444_MethodInfo;
extern MethodInfo Array_Copy_m5453_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisRaycastResult_t93_m22548_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2519** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisRaycastResult_t93_m22548(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2519**, int32_t, MethodInfo*))Array_Resize_TisRaycastResult_t93_m22548_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisRaycastResult_t93_m22550_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2519* p0, RaycastResult_t93  p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisRaycastResult_t93_m22550(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2519*, RaycastResult_t93 , int32_t, int32_t, MethodInfo*))Array_IndexOf_TisRaycastResult_t93_m22550_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t93_m22552_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2519* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisRaycastResult_t93_m22552(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2519*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisRaycastResult_t93_m22552_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t93_m22560_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t2519* p0, int32_t p1, Comparison_1_t143 * p2, MethodInfo* method);
#define Array_Sort_TisRaycastResult_t93_m22560(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2519*, int32_t, Comparison_1_t143 *, MethodInfo*))Array_Sort_TisRaycastResult_t93_m22560_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m1876_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m12249_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisRaycastResult_t93_m22548_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m12237_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m12239_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m12226_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25775_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m12225_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m12234_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m1946_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m12229_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m12235_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m12238_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m12240_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m12224_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m12247_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m12248_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25776_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25777_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25778_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m12261_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisRaycastResult_t93_m22550_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m12232_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m12233_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m12336_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12255_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m12236_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m12242_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m12342_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRaycastResult_t93_m22552_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRaycastResult_t93_m22560_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod List_1__ctor_m1875_GenericMethod;
extern "C" void List_1__ctor_m1875_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResultU5BU5D_t2519* L_0 = ((List_1_t91_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1__ctor_m12206_GenericMethod;
extern "C" void List_1__ctor_m12206_gshared (List_1_t91 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t91 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResultU5BU5D_t2519* L_3 = ((List_1_t91_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t91 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_5);
		__this->____items_1 = ((RaycastResultU5BU5D_t2519*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_6));
		Object_t* L_7 = V_0;
		(( void (*) (List_1_t91 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern Il2CppGenericMethod List_1__ctor_m12207_GenericMethod;
extern "C" void List_1__ctor_m12207_gshared (List_1_t91 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_1 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5235(L_1, (String_t*) &_stringLiteral1342, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5235_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((RaycastResultU5BU5D_t2519*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod List_1__cctor_m12208_GenericMethod;
extern "C" void List_1__cctor_m12208_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((List_1_t91_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((RaycastResultU5BU5D_t2519*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12209_GenericMethod;
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12209_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		Enumerator_t2521  L_0 = (( Enumerator_t2521  (*) (List_1_t91 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t2521  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_ICollection_CopyTo_m12210_GenericMethod;
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12210_gshared (List_1_t91 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2519* L_0 = (__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m7220(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_IEnumerable_GetEnumerator_m12211_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12211_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		Enumerator_t2521  L_0 = (( Enumerator_t2521  (*) (List_1_t91 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t2521  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Add_m12212_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_Add_m12212_gshared (List_1_t91 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			VirtActionInvoker1< RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			int32_t L_1 = (__this->____size_2);
			V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t110 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t732_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1898_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t395 * L_2 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_2, (String_t*) &_stringLiteral1354, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Contains_m12213_GenericMethod;
extern "C" bool List_1_System_Collections_IList_Contains_m12213_gshared (List_1_t91 * __this, Object_t * ___item, MethodInfo* method)
{
	bool V_0 = false;
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
			Object_t * L_0 = ___item;
			bool L_1 = (bool)VirtFuncInvoker1< bool, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t110 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t732_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1898_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_IndexOf_m12214_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12214_gshared (List_1_t91 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t110 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t732_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1898_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Insert_m12215_GenericMethod;
extern "C" void List_1_System_Collections_IList_Insert_m12215_gshared (List_1_t91 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t91 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			VirtActionInvoker2< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), __this, L_1, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t110 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t732_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1898_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t395 * L_3 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_3, (String_t*) &_stringLiteral1354, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Remove_m12216_GenericMethod;
extern "C" void List_1_System_Collections_IList_Remove_m12216_gshared (List_1_t91 * __this, Object_t * ___item, MethodInfo* method)
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
			Object_t * L_0 = ___item;
			VirtFuncInvoker1< bool, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), __this, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t110 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t732_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1898_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12217_GenericMethod;
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12217_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_IsSynchronized_m12218_GenericMethod;
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12218_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_SyncRoot_m12219_GenericMethod;
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12219_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsFixedSize_m12220_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12220_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsReadOnly_m12221_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12221_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_IList_get_Item_m12222_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12222_gshared (List_1_t91 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t93  L_1 = (RaycastResult_t93 )VirtFuncInvoker1< RaycastResult_t93 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_0);
		RaycastResult_t93  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_set_Item_m12223_GenericMethod;
extern "C" void List_1_System_Collections_IList_set_Item_m12223_gshared (List_1_t91 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
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
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			VirtActionInvoker2< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t110 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t732_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1898_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t395 * L_2 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_2, (String_t*) &_stringLiteral580, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m1946_gshared (List_1_t91 * __this, RaycastResult_t93  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		RaycastResultU5BU5D_t2519* L_1 = (__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		(( void (*) (List_1_t91 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_0017:
	{
		RaycastResultU5BU5D_t2519* L_2 = (__this->____items_1);
		int32_t L_3 = (__this->____size_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		RaycastResult_t93  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((RaycastResult_t93 *)(RaycastResult_t93 *)SZArrayLdElema(L_2, L_5)) = (RaycastResult_t93 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12224_gshared (List_1_t91 * __this, int32_t ___newCount, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		RaycastResultU5BU5D_t2519* L_3 = (__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = (( int32_t (*) (List_1_t91 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		int32_t L_5 = Math_Max_m6412(NULL /*static, unused*/, ((int32_t)((int32_t)L_4*(int32_t)2)), 4, /*hidden argument*/&Math_Max_m6412_MethodInfo);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m6412(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Math_Max_m6412_MethodInfo);
		(( void (*) (List_1_t91 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12225_gshared (List_1_t91 * __this, Object_t* ___collection, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		(( void (*) (List_1_t91 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		Object_t* L_4 = ___collection;
		RaycastResultU5BU5D_t2519* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		NullCheck(L_4);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2519*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_4, L_5, L_6);
		int32_t L_7 = (__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12226_gshared (List_1_t91 * __this, Object_t* ___enumerable, MethodInfo* method)
{
	RaycastResult_t93  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck(L_2);
			RaycastResult_t93  L_3 = (RaycastResult_t93 )InterfaceFuncInvoker0< RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_2);
			V_0 = L_3;
			RaycastResult_t93  L_4 = V_0;
			VirtActionInvoker1< RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3904_MethodInfo, L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t110 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1901_MethodInfo, L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t110 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1_AddRange_m12227_GenericMethod;
extern "C" void List_1_AddRange_m12227_gshared (List_1_t91 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t91 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_3 = V_0;
		(( void (*) (List_1_t91 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t91 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern Il2CppGenericMethod List_1_AsReadOnly_m12228_GenericMethod;
extern "C" ReadOnlyCollection_1_t2523 * List_1_AsReadOnly_m12228_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2523 * L_0 = (ReadOnlyCollection_1_t2523 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (ReadOnlyCollection_1_t2523 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern Il2CppGenericMethod List_1_Clear_m506_GenericMethod;
extern "C" void List_1_Clear_m506_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2519* L_0 = (__this->____items_1);
		RaycastResultU5BU5D_t2519* L_1 = (__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m6403(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m6403_MethodInfo);
		__this->____size_2 = 0;
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m12229_gshared (List_1_t91 * __this, RaycastResult_t93  ___item, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2519* L_0 = (__this->____items_1);
		RaycastResult_t93  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2519*, RaycastResult_t93 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod List_1_CopyTo_m12230_GenericMethod;
extern "C" void List_1_CopyTo_m12230_gshared (List_1_t91 * __this, RaycastResultU5BU5D_t2519* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2519* L_0 = (__this->____items_1);
		RaycastResultU5BU5D_t2519* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m7220(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (Array_t *)(Array_t *)L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_Find_m12231_GenericMethod;
extern TypeInfo* List_1_t91_il2cpp_TypeInfo_var;
extern "C" RaycastResult_t93  List_1_Find_m12231_gshared (List_1_t91 * __this, Predicate_1_t2527 * ___match, MethodInfo* method)
{
	static bool List_1_Find_m12231_init;
	if (!List_1_Find_m12231_init)
	{
		List_1_t91_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t91_0_0_0);
		List_1_Find_m12231_init = true;
	}
	int32_t V_0 = 0;
	RaycastResult_t93  V_1 = {0};
	RaycastResult_t93  G_B3_0 = {0};
	{
		Predicate_1_t2527 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t91_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_1 = (__this->____size_2);
		Predicate_1_t2527 * L_2 = ___match;
		int32_t L_3 = (( int32_t (*) (List_1_t91 *, int32_t, int32_t, Predicate_1_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(__this, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		RaycastResultU5BU5D_t2519* L_5 = (__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(RaycastResult_t93 *)(RaycastResult_t93 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (InitializedTypeInfo(&RaycastResult_t93_il2cpp_TypeInfo), (&V_1));
		RaycastResult_t93  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12232_gshared (Object_t * __this /* static, unused */, Predicate_1_t2527 * ___match, MethodInfo* method)
{
	{
		Predicate_1_t2527 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1212, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12233_gshared (List_1_t91 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2527 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = L_2;
		goto IL_0022;
	}

IL_0008:
	{
		Predicate_1_t2527 * L_3 = ___match;
		RaycastResultU5BU5D_t2519* L_4 = (__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, (*(RaycastResult_t93 *)(RaycastResult_t93 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t2521  List_1_GetEnumerator_m12234_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		Enumerator_t2521  L_0 = {0};
		(( void (*) (Enumerator_t2521 *, List_1_t91 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12235_gshared (List_1_t91 * __this, RaycastResult_t93  ___item, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2519* L_0 = (__this->____items_1);
		RaycastResult_t93  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2519*, RaycastResult_t93 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12236_gshared (List_1_t91 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = ((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		RaycastResultU5BU5D_t2519* L_5 = (__this->____items_1);
		int32_t L_6 = ___start;
		RaycastResultU5BU5D_t2519* L_7 = (__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m7220(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, (Array_t *)(Array_t *)L_7, ((int32_t)((int32_t)L_8+(int32_t)L_9)), ((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/&Array_Copy_m7220_MethodInfo);
	}

IL_0031:
	{
		int32_t L_12 = (__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		RaycastResultU5BU5D_t2519* L_15 = (__this->____items_1);
		int32_t L_16 = (__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m6403(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, ((-L_17)), /*hidden argument*/&Array_Clear_m6403_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12237_gshared (List_1_t91 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t758 * L_3 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5235(L_3, (String_t*) &_stringLiteral381, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5235_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12238_gshared (List_1_t91 * __this, int32_t ___index, RaycastResult_t93  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t91 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = (__this->____size_2);
		RaycastResultU5BU5D_t2519* L_2 = (__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		(( void (*) (List_1_t91 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		(( void (*) (List_1_t91 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_3, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		RaycastResultU5BU5D_t2519* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t93  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t93 *)(RaycastResult_t93 *)SZArrayLdElema(L_4, L_5)) = (RaycastResult_t93 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12239_gshared (List_1_t91 * __this, Object_t* ___collection, MethodInfo* method)
{
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1355, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m12240_gshared (List_1_t91 * __this, RaycastResult_t93  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t93  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32), __this, L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_RemoveAll_m12241_GenericMethod;
extern TypeInfo* List_1_t91_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m12241_gshared (List_1_t91 * __this, Predicate_1_t2527 * ___match, MethodInfo* method)
{
	static bool List_1_RemoveAll_m12241_init;
	if (!List_1_RemoveAll_m12241_init)
	{
		List_1_t91_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t91_0_0_0);
		List_1_RemoveAll_m12241_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2527 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t91_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t2527 * L_1 = ___match;
		RaycastResultU5BU5D_t2519* L_2 = (__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_1, (*(RaycastResult_t93 *)(RaycastResult_t93 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		Predicate_1_t2527 * L_13 = ___match;
		RaycastResultU5BU5D_t2519* L_14 = (__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_13, (*(RaycastResult_t93 *)(RaycastResult_t93 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		RaycastResultU5BU5D_t2519* L_18 = (__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		RaycastResultU5BU5D_t2519* L_21 = (__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((RaycastResult_t93 *)(RaycastResult_t93 *)SZArrayLdElema(L_18, L_20)) = (RaycastResult_t93 )(*(RaycastResult_t93 *)(RaycastResult_t93 *)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		RaycastResultU5BU5D_t2519* L_29 = (__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m6403(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, L_30, ((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/&Array_Clear_m6403_MethodInfo);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12242_gshared (List_1_t91 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t758 * L_3 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5235(L_3, (String_t*) &_stringLiteral381, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5235_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		(( void (*) (List_1_t91 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_4, (-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		RaycastResultU5BU5D_t2519* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		Array_Clear_m6403(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, 1, /*hidden argument*/&Array_Clear_m6403_MethodInfo);
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern Il2CppGenericMethod List_1_Reverse_m12243_GenericMethod;
extern "C" void List_1_Reverse_m12243_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2519* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Array_Reverse_m6444(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, /*hidden argument*/&Array_Reverse_m6444_MethodInfo);
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern Il2CppGenericMethod List_1_Sort_m12244_GenericMethod;
extern TypeInfo* Comparer_1_t2528_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m12244_gshared (List_1_t91 * __this, MethodInfo* method)
{
	static bool List_1_Sort_m12244_init;
	if (!List_1_Sort_m12244_init)
	{
		Comparer_1_t2528_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t2528_0_0_0);
		List_1_Sort_m12244_init = true;
	}
	{
		RaycastResultU5BU5D_t2519* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2528_il2cpp_TypeInfo_var);
		Comparer_1_t2528 * L_2 = (( Comparer_1_t2528 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2519*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, L_0, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod List_1_Sort_m1818_GenericMethod;
extern "C" void List_1_Sort_m1818_gshared (List_1_t91 * __this, Comparison_1_t143 * ___comparison, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2519* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Comparison_1_t143 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2519*, int32_t, Comparison_1_t143 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern Il2CppGenericMethod List_1_ToArray_m12245_GenericMethod;
extern "C" RaycastResultU5BU5D_t2519* List_1_ToArray_m12245_gshared (List_1_t91 * __this, MethodInfo* method)
{
	RaycastResultU5BU5D_t2519* V_0 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		V_0 = ((RaycastResultU5BU5D_t2519*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0));
		RaycastResultU5BU5D_t2519* L_1 = (__this->____items_1);
		RaycastResultU5BU5D_t2519* L_2 = V_0;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m5453(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Array_Copy_m5453_MethodInfo);
		RaycastResultU5BU5D_t2519* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern Il2CppGenericMethod List_1_TrimExcess_m12246_GenericMethod;
extern "C" void List_1_TrimExcess_m12246_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		(( void (*) (List_1_t91 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12247_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t2519* L_0 = (__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12248_gshared (List_1_t91 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_2 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5412(L_2, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5412_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		RaycastResultU5BU5D_t2519** L_3 = &(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t2519**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern Il2CppGenericMethod List_1_get_Count_m1877_GenericMethod;
extern "C" int32_t List_1_get_Count_m1877_gshared (List_1_t91 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t93  List_1_get_Item_m1876_gshared (List_1_t91 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_2 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5235(L_2, (String_t*) &_stringLiteral381, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5235_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		RaycastResultU5BU5D_t2519* L_3 = (__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(RaycastResult_t93 *)(RaycastResult_t93 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12249_gshared (List_1_t91 * __this, int32_t ___index, RaycastResult_t93  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t91 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t758 * L_3 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5235(L_3, (String_t*) &_stringLiteral381, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5235_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		RaycastResultU5BU5D_t2519* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t93  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t93 *)(RaycastResult_t93 *)SZArrayLdElema(L_4, L_5)) = (RaycastResult_t93 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2520_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2520_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
extern "C" RaycastResult_t93  Array_InternalArray__get_Item_TisRaycastResult_t93_m22537_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastResult_t93_m22537(__this, p0, method) (( RaycastResult_t93  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisRaycastResult_t93_m22537_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12254_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRaycastResult_t93_m22537_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12250_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12250_gshared (InternalEnumerator_1_t2520 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12251_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12251_gshared (InternalEnumerator_1_t2520 * __this, MethodInfo* method)
{
	{
		RaycastResult_t93  L_0 = (( RaycastResult_t93  (*) (InternalEnumerator_1_t2520 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResult_t93  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12252_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12252_gshared (InternalEnumerator_1_t2520 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12253_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12253_gshared (InternalEnumerator_1_t2520 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern "C" RaycastResult_t93  InternalEnumerator_1_get_Current_m12254_gshared (InternalEnumerator_1_t2520 * __this, MethodInfo* method)
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
		RaycastResult_t93  L_8 = (( RaycastResult_t93  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2522_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo ObjectDisposedException_t1375_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m5234_MethodInfo;
extern MethodInfo Object_GetType_m1903_MethodInfo;
extern MethodInfo Type_get_FullName_m3970_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m6420_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m12258_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m12255_gshared (Enumerator_t2521 * __this, List_1_t91 * ___l, MethodInfo* method)
{
	{
		List_1_t91 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t91 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m12256_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12256_gshared (Enumerator_t2521 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2521 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1189 * L_1 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5234(L_1, /*hidden argument*/&InvalidOperationException__ctor_m5234_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		RaycastResult_t93  L_2 = (__this->___current_3);
		RaycastResult_t93  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m12257_GenericMethod;
extern "C" void Enumerator_Dispose_m12257_gshared (Enumerator_t2521 * __this, MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t91 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::VerifyState()
extern "C" void Enumerator_VerifyState_m12258_gshared (Enumerator_t2521 * __this, MethodInfo* method)
{
	{
		List_1_t91 * L_0 = (__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t2521  L_1 = (*(Enumerator_t2521 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m1903(L_2, /*hidden argument*/&Object_GetType_m1903_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3970_MethodInfo, L_3);
		ObjectDisposedException_t1375 * L_5 = (ObjectDisposedException_t1375 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1375_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m6420(L_5, L_4, /*hidden argument*/&ObjectDisposedException__ctor_m6420_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->___ver_2);
		List_1_t91 * L_7 = (__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1189 * L_9 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5227(L_9, (String_t*) &_stringLiteral1356, /*hidden argument*/&InvalidOperationException__ctor_m5227_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m12259_GenericMethod;
extern "C" bool Enumerator_MoveNext_m12259_gshared (Enumerator_t2521 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2521 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		int32_t L_1 = (__this->___next_1);
		List_1_t91 * L_2 = (__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t91 * L_4 = (__this->___l_0);
		NullCheck(L_4);
		RaycastResultU5BU5D_t2519* L_5 = (L_4->____items_1);
		int32_t L_6 = (__this->___next_1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(RaycastResult_t93 *)(RaycastResult_t93 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m12260_GenericMethod;
extern "C" RaycastResult_t93  Enumerator_get_Current_m12260_gshared (Enumerator_t2521 * __this, MethodInfo* method)
{
	{
		RaycastResult_t93  L_0 = (__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo NotSupportedException_t84_il2cpp_TypeInfo;
extern TypeInfo ICollection_t855_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t457_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1MethodDeclarations.h"
extern Il2CppType IList_1_t2522_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m12290_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m360_MethodInfo;
extern MethodInfo IList_1_get_Item_m25779_MethodInfo;
extern MethodInfo ICollection_CopyTo_m5223_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m3927_MethodInfo;
extern MethodInfo ICollection_1_Contains_m25780_MethodInfo;
extern MethodInfo IList_1_IndexOf_m25781_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m12290_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m25779_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m12322_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m25780_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m25781_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m12261_gshared (ReadOnlyCollection_1_t2523 * __this, Object_t* ___list, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1357, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Add(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12262_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12262_gshared (ReadOnlyCollection_1_t2523 * __this, RaycastResult_t93  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12263_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12263_gshared (ReadOnlyCollection_1_t2523 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12264_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12264_gshared (ReadOnlyCollection_1_t2523 * __this, int32_t ___index, RaycastResult_t93  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Remove(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12265_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12265_gshared (ReadOnlyCollection_1_t2523 * __this, RaycastResult_t93  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12266_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12266_gshared (ReadOnlyCollection_1_t2523 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12267_GenericMethod;
extern "C" RaycastResult_t93  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12267_gshared (ReadOnlyCollection_1_t2523 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t93  L_1 = (RaycastResult_t93 )VirtFuncInvoker1< RaycastResult_t93 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12268_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12268_gshared (ReadOnlyCollection_1_t2523 * __this, int32_t ___index, RaycastResult_t93  ___value, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12269_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12269_gshared (ReadOnlyCollection_1_t2523 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12270_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12270_gshared (ReadOnlyCollection_1_t2523 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t855_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m5223_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t855_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12271_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12271_gshared (ReadOnlyCollection_1_t2523 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m3927_MethodInfo, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Add_m12272_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m12272_gshared (ReadOnlyCollection_1_t2523 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Clear_m12273_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m12273_gshared (ReadOnlyCollection_1_t2523 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Contains_m12274_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m12274_gshared (ReadOnlyCollection_1_t2523 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_2, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12275_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12275_gshared (ReadOnlyCollection_1_t2523 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Insert_m12276_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m12276_gshared (ReadOnlyCollection_1_t2523 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Remove_m12277_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m12277_gshared (ReadOnlyCollection_1_t2523 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12278_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12278_gshared (ReadOnlyCollection_1_t2523 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12279_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12279_gshared (ReadOnlyCollection_1_t2523 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12280_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12280_gshared (ReadOnlyCollection_1_t2523 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12281_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12281_gshared (ReadOnlyCollection_1_t2523 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12282_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12282_gshared (ReadOnlyCollection_1_t2523 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_Item_m12283_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m12283_gshared (ReadOnlyCollection_1_t2523 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t93  L_2 = (RaycastResult_t93 )InterfaceFuncInvoker1< RaycastResult_t93 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		RaycastResult_t93  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_set_Item_m12284_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m12284_gshared (ReadOnlyCollection_1_t2523 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_0, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_Contains_m12285_GenericMethod;
extern "C" bool ReadOnlyCollection_1_Contains_m12285_gshared (ReadOnlyCollection_1_t2523 * __this, RaycastResult_t93  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t93  L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_CopyTo_m12286_GenericMethod;
extern "C" void ReadOnlyCollection_1_CopyTo_m12286_gshared (ReadOnlyCollection_1_t2523 * __this, RaycastResultU5BU5D_t2519* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResultU5BU5D_t2519* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2519*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_GetEnumerator_m12287_GenericMethod;
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m12287_gshared (ReadOnlyCollection_1_t2523 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_IndexOf_m12288_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m12288_gshared (ReadOnlyCollection_1_t2523 * __this, RaycastResult_t93  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t93  L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Count_m12289_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_get_Count_m12289_gshared (ReadOnlyCollection_1_t2523 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t93  ReadOnlyCollection_1_get_Item_m12290_gshared (ReadOnlyCollection_1_t2523 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t93  L_2 = (RaycastResult_t93 )InterfaceFuncInvoker1< RaycastResult_t93 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2524_il2cpp_TypeInfo;

extern TypeInfo IList_t856_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2524_0_0_0;
extern Il2CppType RaycastResult_t93_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m25782_MethodInfo;
extern MethodInfo Collection_1_SetItem_m12321_MethodInfo;
extern MethodInfo List_1__ctor_m1875_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m10970_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m12314_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m12312_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m12317_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m12308_MethodInfo;
extern MethodInfo ICollection_1_Clear_m25783_MethodInfo;
extern MethodInfo IList_1_Insert_m25784_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m25785_MethodInfo;
extern MethodInfo IList_1_set_Item_m25786_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7271_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11250_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11251_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m25782_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m12325_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m12326_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m12323_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m12321_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m12314_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m12324_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m12312_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m12317_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m12308_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m25783_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m25784_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m25785_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m25786_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod Collection_1__ctor_m12291_GenericMethod;
extern TypeInfo* List_1_t91_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m12291_gshared (Collection_1_t2524 * __this, MethodInfo* method)
{
	static bool Collection_1__ctor_m12291_init;
	if (!Collection_1__ctor_m12291_init)
	{
		List_1_t91_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t91_0_0_0);
		Collection_1__ctor_m12291_init = true;
	}
	List_1_t91 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t91_il2cpp_TypeInfo_var);
		List_1_t91 * L_0 = (List_1_t91 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t91 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = L_0;
		List_1_t91 * L_1 = V_0;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10970_MethodInfo, L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t91 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12292_GenericMethod;
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12292_gshared (Collection_1_t2524 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_CopyTo_m12293_GenericMethod;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12293_gshared (Collection_1_t2524 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t855_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m5223_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t855_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Collection_1_System_Collections_IEnumerable_GetEnumerator_m12294_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12294_gshared (Collection_1_t2524 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Add_m12295_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12295_gshared (Collection_1_t2524 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		RaycastResult_t93  L_4 = (( RaycastResult_t93  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Contains_m12296_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_Contains_m12296_gshared (Collection_1_t2524 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_2, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_IndexOf_m12297_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12297_gshared (Collection_1_t2524 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_2, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Insert_m12298_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Insert_m12298_gshared (Collection_1_t2524 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t93  L_2 = (( RaycastResult_t93  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Remove_m12299_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Remove_m12299_gshared (Collection_1_t2524 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_1 = ___value;
		RaycastResult_t93  L_2 = (( RaycastResult_t93  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_IsSynchronized_m12300_GenericMethod;
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m12300_gshared (Collection_1_t2524 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_SyncRoot_m12301_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12301_gshared (Collection_1_t2524 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsFixedSize_m12302_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m12302_gshared (Collection_1_t2524 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsReadOnly_m12303_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m12303_gshared (Collection_1_t2524 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_Item_m12304_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12304_gshared (Collection_1_t2524 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t93  L_2 = (RaycastResult_t93 )InterfaceFuncInvoker1< RaycastResult_t93 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		RaycastResult_t93  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_set_Item_m12305_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_set_Item_m12305_gshared (Collection_1_t2524 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t93  L_2 = (( RaycastResult_t93  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern Il2CppGenericMethod Collection_1_Add_m12306_GenericMethod;
extern "C" void Collection_1_Add_m12306_gshared (Collection_1_t2524 * __this, RaycastResult_t93  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		RaycastResult_t93  L_3 = ___item;
		VirtActionInvoker2< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern Il2CppGenericMethod Collection_1_Clear_m12307_GenericMethod;
extern "C" void Collection_1_Clear_m12307_gshared (Collection_1_t2524 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), __this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ClearItems()
extern "C" void Collection_1_ClearItems_m12308_gshared (Collection_1_t2524 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern Il2CppGenericMethod Collection_1_Contains_m12309_GenericMethod;
extern "C" bool Collection_1_Contains_m12309_gshared (Collection_1_t2524 * __this, RaycastResult_t93  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t93  L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod Collection_1_CopyTo_m12310_GenericMethod;
extern "C" void Collection_1_CopyTo_m12310_gshared (Collection_1_t2524 * __this, RaycastResultU5BU5D_t2519* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResultU5BU5D_t2519* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t2519*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern Il2CppGenericMethod Collection_1_GetEnumerator_m12311_GenericMethod;
extern "C" Object_t* Collection_1_GetEnumerator_m12311_gshared (Collection_1_t2524 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12312_gshared (Collection_1_t2524 * __this, RaycastResult_t93  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		RaycastResult_t93  L_1 = ___item;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern Il2CppGenericMethod Collection_1_Insert_m12313_GenericMethod;
extern "C" void Collection_1_Insert_m12313_gshared (Collection_1_t2524 * __this, int32_t ___index, RaycastResult_t93  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t93  L_1 = ___item;
		VirtActionInvoker2< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12314_gshared (Collection_1_t2524 * __this, int32_t ___index, RaycastResult_t93  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t93  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern Il2CppGenericMethod Collection_1_Remove_m12315_GenericMethod;
extern "C" bool Collection_1_Remove_m12315_gshared (Collection_1_t2524 * __this, RaycastResult_t93  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t93  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern Il2CppGenericMethod Collection_1_RemoveAt_m12316_GenericMethod;
extern "C" void Collection_1_RemoveAt_m12316_gshared (Collection_1_t2524 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12317_gshared (Collection_1_t2524 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0, L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern Il2CppGenericMethod Collection_1_get_Count_m12318_GenericMethod;
extern "C" int32_t Collection_1_get_Count_m12318_gshared (Collection_1_t2524 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_get_Item_m12319_GenericMethod;
extern "C" RaycastResult_t93  Collection_1_get_Item_m12319_gshared (Collection_1_t2524 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		RaycastResult_t93  L_2 = (RaycastResult_t93 )InterfaceFuncInvoker1< RaycastResult_t93 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern Il2CppGenericMethod Collection_1_set_Item_m12320_GenericMethod;
extern "C" void Collection_1_set_Item_m12320_gshared (Collection_1_t2524 * __this, int32_t ___index, RaycastResult_t93  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t93  L_1 = ___value;
		VirtActionInvoker2< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12321_gshared (Collection_1_t2524 * __this, int32_t ___index, RaycastResult_t93  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t93  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12322_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m1995(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)), /*hidden argument*/&Type_GetTypeFromHandle_m1995_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m7271_MethodInfo, L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ConvertItem(System.Object)
extern "C" RaycastResult_t93  Collection_1_ConvertItem_m12323_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_000f:
	{
		ArgumentException_t395 * L_3 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_3, (String_t*) &_stringLiteral1354, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12324_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	{
		Object_t* L_0 = ___list;
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t84 * L_2 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m360(L_2, /*hidden argument*/&NotSupportedException__ctor_m360_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m12325_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&ICollection_t855_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&ICollection_get_IsSynchronized_m11250_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m12326_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&IList_t856_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IList_get_IsFixedSize_m11251_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2525_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1.h"
extern TypeInfo DefaultComparer_t2526_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2525_0_0_0;
extern Il2CppType IEquatable_1_t4029_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2313_0_0_0;
extern Il2CppType DefaultComparer_t2526_0_0_0;
extern MethodInfo DefaultComparer__ctor_m12332_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25787_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22549_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m12332_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25787_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22549_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m12327_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m12327_gshared (EqualityComparer_1_t2525 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m12328_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m12328_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2526 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2526 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2526 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2525_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12329_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12329_gshared (EqualityComparer_1_t2525 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12330_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12330_gshared (EqualityComparer_1_t2525 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, RaycastResult_t93 , RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m12331_GenericMethod;
extern "C" EqualityComparer_1_t2525 * EqualityComparer_1_get_Default_m12331_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2525 * L_0 = ((EqualityComparer_1_t2525_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4030_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4029_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.RaycastResult>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m12332_gshared (DefaultComparer_t2526 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2525 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m12333_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m12333_gshared (DefaultComparer_t2526 * __this, RaycastResult_t93  ___obj, MethodInfo* method)
{
	{
		RaycastResult_t93  L_0 = ___obj;
		RaycastResult_t93  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m12334_GenericMethod;
extern "C" bool DefaultComparer_Equals_m12334_gshared (DefaultComparer_t2526 * __this, RaycastResult_t93  ___x, RaycastResult_t93  ___y, MethodInfo* method)
{
	{
		RaycastResult_t93  L_0 = ___x;
		RaycastResult_t93  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		RaycastResult_t93  L_3 = ___y;
		RaycastResult_t93  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		RaycastResult_t93  L_6 = ___y;
		RaycastResult_t93  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m12335_GenericMethod;
extern "C" void Predicate_1__ctor_m12335_gshared (Predicate_1_t2527 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12336_gshared (Predicate_1_t2527 * __this, RaycastResult_t93  ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m12336((Predicate_1_t2527 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastResult_t93  ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef bool (*FunctionPointerType) (Object_t * __this, RaycastResult_t93  ___obj, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m12337_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m12337_gshared (Predicate_1_t2527 * __this, RaycastResult_t93  ___obj, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&RaycastResult_t93_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m12338_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m12338_gshared (Predicate_1_t2527 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1.h"
extern TypeInfo DefaultComparer_t2529_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1MethodDeclarations.h"
extern Il2CppType IComparable_1_t3840_0_0_0;
extern Il2CppType DefaultComparer_t2529_0_0_0;
extern MethodInfo DefaultComparer__ctor_m12343_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25788_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m12343_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25788_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m12339_GenericMethod;
extern "C" void Comparer_1__ctor_m12339_gshared (Comparer_1_t2528 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m12340_GenericMethod;
extern "C" void Comparer_1__cctor_m12340_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2529 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2529 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2529 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t2528_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m12341_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m12341_gshared (Comparer_1_t2528 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, RaycastResult_t93 , RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(RaycastResult_t93 *)((RaycastResult_t93 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t395 * L_8 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m10140(L_8, /*hidden argument*/&ArgumentException__ctor_m10140_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern "C" Comparer_1_t2528 * Comparer_1_get_Default_m12342_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2528 * L_0 = ((Comparer_1_t2528_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3839_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3840_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.RaycastResult>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m22558_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m22558_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m12343_gshared (DefaultComparer_t2529 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t2528 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m12344_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m12344_gshared (DefaultComparer_t2529 * __this, RaycastResult_t93  ___x, RaycastResult_t93  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		RaycastResult_t93  L_0 = ___x;
		RaycastResult_t93  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		RaycastResult_t93  L_3 = ___y;
		RaycastResult_t93  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		RaycastResult_t93  L_6 = ___y;
		RaycastResult_t93  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		RaycastResult_t93  L_9 = ___x;
		RaycastResult_t93  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		RaycastResult_t93  L_12 = ___x;
		RaycastResult_t93  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		RaycastResult_t93  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t93  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		RaycastResult_t93  L_17 = ___x;
		RaycastResult_t93  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t124_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		RaycastResult_t93  L_20 = ___x;
		RaycastResult_t93  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		RaycastResult_t93  L_23 = ___y;
		RaycastResult_t93  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t124_il2cpp_TypeInfo))));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m10941_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t124_il2cpp_TypeInfo))), L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t395 * L_27 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_27, (String_t*) &_stringLiteral1340, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t143_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Comparison_1_genMethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m1796_GenericMethod;
extern "C" void Comparison_1__ctor_m1796_gshared (Comparison_1_t143 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m12345_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m12345_gshared (Comparison_1_t143 * __this, RaycastResult_t93  ___x, RaycastResult_t93  ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m12345((Comparison_1_t143 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastResult_t93  ___x, RaycastResult_t93  ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, RaycastResult_t93  ___x, RaycastResult_t93  ___y, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m12346_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m12346_gshared (Comparison_1_t143 * __this, RaycastResult_t93  ___x, RaycastResult_t93  ___y, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&RaycastResult_t93_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&RaycastResult_t93_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m12347_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m12347_gshared (Comparison_1_t143 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t181_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_2.h"
// System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Predicate_1_gen_6.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_2.h"
// System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Comparison_1_gen_5.h"
extern TypeInfo IEventSystemHandler_t405_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3553_il2cpp_TypeInfo;
extern TypeInfo IEventSystemHandlerU5BU5D_t2530_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2532_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3551_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3552_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2533_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2537_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2538_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_2MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_2MethodDeclarations.h"
extern Il2CppType List_1_t181_0_0_0;
extern Il2CppType ICollection_1_t3553_0_0_0;
extern Il2CppType IEventSystemHandlerU5BU5D_t2530_0_0_0;
extern Il2CppType Enumerator_t2532_0_0_0;
extern Il2CppType IEnumerable_1_t3551_0_0_0;
extern Il2CppType IEnumerator_1_t3552_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2533_0_0_0;
extern Il2CppType Predicate_1_t2537_0_0_0;
extern Il2CppType Comparer_1_t2538_0_0_0;
extern MethodInfo List_1_get_Item_m12395_MethodInfo;
extern MethodInfo List_1_set_Item_m12396_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25789_MethodInfo;
extern MethodInfo List_1_Add_m12367_MethodInfo;
extern MethodInfo List_1_Contains_m12373_MethodInfo;
extern MethodInfo List_1_IndexOf_m12379_MethodInfo;
extern MethodInfo List_1_Insert_m12382_MethodInfo;
extern MethodInfo List_1_Remove_m12384_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25790_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25791_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25792_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m12408_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m12483_MethodInfo;
extern MethodInfo Enumerator__ctor_m12402_MethodInfo;
extern MethodInfo List_1_RemoveAt_m12386_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m22178_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m22178(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22178_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.IEventSystemHandler>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.IEventSystemHandler>(!!0[]&,System.Int32)
#define Array_Resize_TisIEventSystemHandler_t405_m22577(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, IEventSystemHandlerU5BU5D_t2530**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22178_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m10971_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10971(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10971_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisIEventSystemHandler_t405_m22579(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, IEventSystemHandlerU5BU5D_t2530*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10971_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m22247_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m22247(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m22247_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisIEventSystemHandler_t405_m22581(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, IEventSystemHandlerU5BU5D_t2530*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m22247_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m22431_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, Comparison_1_t2496 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m22431(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, Comparison_1_t2496 *, MethodInfo*))Array_Sort_TisObject_t_m22431_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.IEventSystemHandler>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisIEventSystemHandler_t405_m22589(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, IEventSystemHandlerU5BU5D_t2530*, int32_t, Comparison_1_t2540 *, MethodInfo*))Array_Sort_TisObject_t_m22431_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m12395_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m12396_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisIEventSystemHandler_t405_m22577_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m12381_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m12383_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m12370_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25789_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m12369_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m12378_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m12367_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m12373_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m12379_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m12382_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m12384_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m12368_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m12392_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m12393_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25790_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25791_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25792_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m12408_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisIEventSystemHandler_t405_m22579_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m12376_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m12377_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m12483_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12402_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m12380_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m12386_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m12489_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisIEventSystemHandler_t405_m22581_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisIEventSystemHandler_t405_m22589_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2531_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2531_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IEventSystemHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IEventSystemHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisIEventSystemHandler_t405_m22566(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12401_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEventSystemHandler_t405_m22566_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t417_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m12405_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_2MethodDeclarations.h"
extern Il2CppType IList_1_t417_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m12437_MethodInfo;
extern MethodInfo IList_1_get_Item_m25793_MethodInfo;
extern MethodInfo ICollection_1_Contains_m25794_MethodInfo;
extern MethodInfo IList_1_IndexOf_m25795_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m12437_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m25793_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m12469_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m25794_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m25795_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2534_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2534_0_0_0;
extern Il2CppType IEventSystemHandler_t405_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m25796_MethodInfo;
extern MethodInfo Collection_1_SetItem_m12468_MethodInfo;
extern MethodInfo List_1__ctor_m12348_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m12461_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m12459_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m12464_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m12455_MethodInfo;
extern MethodInfo ICollection_1_Clear_m25797_MethodInfo;
extern MethodInfo IList_1_Insert_m25798_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m25799_MethodInfo;
extern MethodInfo IList_1_set_Item_m25800_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m25796_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m12472_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m12473_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m12470_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m12468_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m12348_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m12461_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m12471_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m12459_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m12464_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m12455_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m25797_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m25798_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m25799_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m25800_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2535_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2.h"
extern TypeInfo DefaultComparer_t2536_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2535_0_0_0;
extern Il2CppType IEquatable_1_t4031_0_0_0;
extern Il2CppType DefaultComparer_t2536_0_0_0;
extern MethodInfo DefaultComparer__ctor_m12479_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25801_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22578_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m12479_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25801_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22578_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4032_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4031_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.IEventSystemHandler>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m12474_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_2.h"
extern TypeInfo DefaultComparer_t2539_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_2MethodDeclarations.h"
extern Il2CppType IComparable_1_t3842_0_0_0;
extern Il2CppType DefaultComparer_t2539_0_0_0;
extern MethodInfo DefaultComparer__ctor_m12490_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25802_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m12490_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25802_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3841_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.IEventSystemHandler>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3842_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.IEventSystemHandler>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m22587_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m12486_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m22587_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.IEventSystemHandler>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2540_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Comparison_1_gen_5MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>::EndInvoke(System.IAsyncResult)
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjectPool_1_t165_il2cpp_TypeInfo;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_genMethodDeclarations.h"

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_gen_1.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen.h"
extern TypeInfo Stack_1_t2541_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t167_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_genMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppType Stack_1_t2541_0_0_0;
extern Il2CppType UnityAction_1_t167_0_0_0;
extern MethodInfo Stack_1_get_Count_m12538_MethodInfo;
extern MethodInfo Stack_1__ctor_m12529_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m12560_MethodInfo;
extern MethodInfo Object_ReferenceEquals_m3808_MethodInfo;
extern MethodInfo Debug_LogError_m373_MethodInfo;
struct Activator_t1857;
// System.Activator
#include "mscorlib_System_Activator.h"
struct Activator_t1857;
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m22591_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m22591(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m22591_gshared)(__this /* static, unused */, method)
// Declaration !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>()
// !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>()
#define Activator_CreateInstance_TisList_1_t181_m22627(__this /* static, unused */, method) (( List_1_t181 * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m22591_gshared)(__this /* static, unused */, method)
extern Il2CppGenericMethod ObjectPool_1_get_countAll_m12497_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_get_countInactive_m12503_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m12538_GenericMethod;
extern Il2CppGenericMethod Stack_1__ctor_m12529_GenericMethod;
extern Il2CppGenericMethod Activator_CreateInstance_TisList_1_t181_m22627_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_set_countAll_m12499_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m12536_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m12560_GenericMethod;
extern Il2CppGenericMethod Stack_1_Peek_m12535_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m12537_GenericMethod;


// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjectPool_1_t2544_il2cpp_TypeInfo;
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"

// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_0.h"
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6.h"
extern TypeInfo Stack_1_t2542_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t2543_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
extern Il2CppType Stack_1_t2542_0_0_0;
extern Il2CppType UnityAction_1_t2543_0_0_0;
extern MethodInfo Stack_1_get_Count_m12518_MethodInfo;
extern MethodInfo Stack_1__ctor_m12509_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m12526_MethodInfo;
extern Il2CppGenericMethod ObjectPool_1_get_countAll_m12498_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_get_countInactive_m12504_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m12518_GenericMethod;
extern Il2CppGenericMethod Stack_1__ctor_m12509_GenericMethod;
extern Il2CppGenericMethod Activator_CreateInstance_TisObject_t_m22591_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_set_countAll_m12500_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m12516_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m12526_GenericMethod;
extern Il2CppGenericMethod Stack_1_Peek_m12515_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m12517_GenericMethod;


// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern Il2CppGenericMethod ObjectPool_1__ctor_m12496_GenericMethod;
extern "C" void ObjectPool_1__ctor_m12496_gshared (ObjectPool_1_t2544 * __this, UnityAction_1_t2543 * ___actionOnGet, UnityAction_1_t2543 * ___actionOnRelease, MethodInfo* method)
{
	{
		Stack_1_t2542 * L_0 = (Stack_1_t2542 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Stack_1_t2542 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_Stack_0 = L_0;
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		UnityAction_1_t2543 * L_1 = ___actionOnGet;
		__this->___m_ActionOnGet_1 = L_1;
		UnityAction_1_t2543 * L_2 = ___actionOnRelease;
		__this->___m_ActionOnRelease_2 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m12498_gshared (ObjectPool_1_t2544 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcountAllU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m12500_gshared (ObjectPool_1_t2544 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcountAllU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern Il2CppGenericMethod ObjectPool_1_get_countActive_m12502_GenericMethod;
extern "C" int32_t ObjectPool_1_get_countActive_m12502_gshared (ObjectPool_1_t2544 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (ObjectPool_1_t2544 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_1 = (( int32_t (*) (ObjectPool_1_t2544 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return ((int32_t)((int32_t)L_0-(int32_t)L_1));
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m12504_gshared (ObjectPool_1_t2544 * __this, MethodInfo* method)
{
	{
		Stack_1_t2542 * L_0 = (__this->___m_Stack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern Il2CppGenericMethod ObjectPool_1_Get_m12506_GenericMethod;
extern "C" Object_t * ObjectPool_1_Get_m12506_gshared (ObjectPool_1_t2544 * __this, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * G_B4_0 = {0};
	{
		Stack_1_t2542 * L_0 = (__this->___m_Stack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_1));
		Object_t * L_2 = V_1;
		Object_t * L_3 = L_2;
		if (!((Object_t *)L_3))
		{
			goto IL_002e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_1));
		Object_t * L_4 = V_1;
		G_B4_0 = L_4;
		goto IL_0033;
	}

IL_002e:
	{
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		G_B4_0 = L_5;
	}

IL_0033:
	{
		V_0 = G_B4_0;
		int32_t L_6 = (( int32_t (*) (ObjectPool_1_t2544 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (ObjectPool_1_t2544 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, ((int32_t)((int32_t)L_6+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		goto IL_0053;
	}

IL_0047:
	{
		Stack_1_t2542 * L_7 = (__this->___m_Stack_0);
		NullCheck(L_7);
		Object_t * L_8 = (( Object_t * (*) (Stack_1_t2542 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		V_0 = L_8;
	}

IL_0053:
	{
		UnityAction_1_t2543 * L_9 = (__this->___m_ActionOnGet_1);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		UnityAction_1_t2543 * L_10 = (__this->___m_ActionOnGet_1);
		Object_t * L_11 = V_0;
		NullCheck(L_10);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_10, L_11);
	}

IL_006a:
	{
		Object_t * L_12 = V_0;
		return L_12;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern Il2CppGenericMethod ObjectPool_1_Release_m12508_GenericMethod;
extern "C" void ObjectPool_1_Release_m12508_gshared (ObjectPool_1_t2544 * __this, Object_t * ___element, MethodInfo* method)
{
	{
		Stack_1_t2542 * L_0 = (__this->___m_Stack_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		Stack_1_t2542 * L_2 = (__this->___m_Stack_0);
		NullCheck(L_2);
		Object_t * L_3 = (( Object_t * (*) (Stack_1_t2542 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_4 = L_3;
		Object_t * L_5 = ___element;
		Object_t * L_6 = L_5;
		bool L_7 = Object_ReferenceEquals_m3808(NULL /*static, unused*/, ((Object_t *)L_4), ((Object_t *)L_6), /*hidden argument*/&Object_ReferenceEquals_m3808_MethodInfo);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Debug_LogError_m373(NULL /*static, unused*/, (String_t*) &_stringLiteral104, /*hidden argument*/&Debug_LogError_m373_MethodInfo);
	}

IL_003b:
	{
		UnityAction_1_t2543 * L_8 = (__this->___m_ActionOnRelease_2);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		UnityAction_1_t2543 * L_9 = (__this->___m_ActionOnRelease_2);
		Object_t * L_10 = ___element;
		NullCheck(L_9);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_9, L_10);
	}

IL_0052:
	{
		Stack_1_t2542 * L_11 = (__this->___m_Stack_0);
		Object_t * L_12 = ___element;
		NullCheck(L_11);
		(( void (*) (Stack_1_t2542 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(L_11, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"
extern TypeInfo ArrayTypeMismatchException_t1868_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2545_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_genMethodDeclarations.h"
extern Il2CppType Enumerator_t2545_0_0_0;
extern MethodInfo Array_CopyTo_m5415_MethodInfo;
extern MethodInfo Enumerator__ctor_m12520_MethodInfo;
extern Il2CppGenericMethod Stack_1_GetEnumerator_m12519_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisObject_t_m22178_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12520_GenericMethod;


// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m12509_gshared (Stack_1_t2542 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Stack_1_System_Collections_ICollection_get_IsSynchronized_m12510_GenericMethod;
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m12510_gshared (Stack_1_t2542 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Stack_1_System_Collections_ICollection_get_SyncRoot_m12511_GenericMethod;
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m12511_gshared (Stack_1_t2542 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Stack_1_System_Collections_ICollection_CopyTo_m12512_GenericMethod;
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m12512_gshared (Stack_1_t2542 * __this, Array_t * ___dest, int32_t ___idx, MethodInfo* method)
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
			ObjectU5BU5D_t76* L_0 = (__this->____array_1);
			if (!L_0)
			{
				goto IL_0025;
			}
		}

IL_000b:
		{
			ObjectU5BU5D_t76* L_1 = (__this->____array_1);
			Array_t * L_2 = ___dest;
			int32_t L_3 = ___idx;
			NullCheck(L_1);
			VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m5415_MethodInfo, L_1, L_2, L_3);
			Array_t * L_4 = ___dest;
			int32_t L_5 = ___idx;
			int32_t L_6 = (__this->____size_2);
			Array_Reverse_m6444(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/&Array_Reverse_m6444_MethodInfo);
		}

IL_0025:
		{
			goto IL_0036;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t110 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&ArrayTypeMismatchException_t1868_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t395 * L_7 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m10140(L_7, /*hidden argument*/&ArgumentException__ctor_m10140_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12513_GenericMethod;
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12513_gshared (Stack_1_t2542 * __this, MethodInfo* method)
{
	{
		Enumerator_t2545  L_0 = (( Enumerator_t2545  (*) (Stack_1_t2542 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2545  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Stack_1_System_Collections_IEnumerable_GetEnumerator_m12514_GenericMethod;
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m12514_gshared (Stack_1_t2542 * __this, MethodInfo* method)
{
	{
		Enumerator_t2545  L_0 = (( Enumerator_t2545  (*) (Stack_1_t2542 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t2545  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Object_t *)L_2;
	}
}
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m12515_gshared (Stack_1_t2542 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t1189 * L_1 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5234(L_1, /*hidden argument*/&InvalidOperationException__ctor_m5234_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ObjectU5BU5D_t76* L_2 = (__this->____array_1);
		int32_t L_3 = (__this->____size_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)((int32_t)L_3-(int32_t)1)));
		int32_t L_4 = ((int32_t)((int32_t)L_3-(int32_t)1));
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4));
	}
}
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m12516_gshared (Stack_1_t2542 * __this, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t1189 * L_1 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5234(L_1, /*hidden argument*/&InvalidOperationException__ctor_m5234_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		ObjectU5BU5D_t76* L_3 = (__this->____array_1);
		int32_t L_4 = (__this->____size_2);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_1 = L_5;
		__this->____size_2 = L_5;
		int32_t L_6 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7));
		ObjectU5BU5D_t76* L_8 = (__this->____array_1);
		int32_t L_9 = (__this->____size_2);
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_2));
		Object_t * L_10 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9)) = (Object_t *)L_10;
		Object_t * L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m12517_gshared (Stack_1_t2542 * __this, Object_t * ___t, MethodInfo* method)
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t76** G_B4_0 = {0};
	ObjectU5BU5D_t76** G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t76** G_B5_1 = {0};
	{
		ObjectU5BU5D_t76* L_0 = (__this->____array_1);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->____size_2);
		ObjectU5BU5D_t76* L_2 = (__this->____array_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0043;
		}
	}

IL_001e:
	{
		ObjectU5BU5D_t76** L_3 = &(__this->____array_1);
		int32_t L_4 = (__this->____size_2);
		G_B3_0 = L_3;
		if (L_4)
		{
			G_B4_0 = L_3;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((int32_t)16);
		G_B5_1 = G_B3_0;
		goto IL_003e;
	}

IL_0036:
	{
		int32_t L_5 = (__this->____size_2);
		G_B5_0 = ((int32_t)((int32_t)2*(int32_t)L_5));
		G_B5_1 = G_B4_0;
	}

IL_003e:
	{
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, G_B5_1, G_B5_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}

IL_0043:
	{
		int32_t L_6 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_6+(int32_t)1));
		ObjectU5BU5D_t76* L_7 = (__this->____array_1);
		int32_t L_8 = (__this->____size_2);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->____size_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_0;
		Object_t * L_11 = ___t;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, L_10)) = (Object_t *)L_11;
		return;
	}
}
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m12518_gshared (Stack_1_t2542 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2545  Stack_1_GetEnumerator_m12519_gshared (Stack_1_t2542 * __this, MethodInfo* method)
{
	{
		Enumerator_t2545  L_0 = {0};
		(( void (*) (Enumerator_t2545 *, Stack_1_t2542 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m12524_GenericMethod;


// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Stack`1<T>)
extern "C" void Enumerator__ctor_m12520_gshared (Enumerator_t2545 * __this, Stack_1_t2542 * ___t, MethodInfo* method)
{
	{
		Stack_1_t2542 * L_0 = ___t;
		__this->___parent_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		Stack_1_t2542 * L_1 = ___t;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->____version_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m12521_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12521_gshared (Enumerator_t2545 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2545 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m12522_GenericMethod;
extern "C" void Enumerator_Dispose_m12522_gshared (Enumerator_t2545 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m12523_GenericMethod;
extern "C" bool Enumerator_MoveNext_m12523_gshared (Enumerator_t2545 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (__this->____version_2);
		Stack_1_t2542 * L_1 = (__this->___parent_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1189 * L_3 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5234(L_3, /*hidden argument*/&InvalidOperationException__ctor_m5234_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->___idx_1);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_003a;
		}
	}
	{
		Stack_1_t2542 * L_5 = (__this->___parent_0);
		NullCheck(L_5);
		int32_t L_6 = (L_5->____size_2);
		__this->___idx_1 = L_6;
	}

IL_003a:
	{
		int32_t L_7 = (__this->___idx_1);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = (__this->___idx_1);
		int32_t L_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
		V_0 = L_9;
		__this->___idx_1 = L_9;
		int32_t L_10 = V_0;
		G_B7_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 0;
	}

IL_0060:
	{
		return G_B7_0;
	}
}
// T System.Collections.Generic.Stack`1/Enumerator<System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m12524_gshared (Enumerator_t2545 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1189 * L_1 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5234(L_1, /*hidden argument*/&InvalidOperationException__ctor_m5234_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Stack_1_t2542 * L_2 = (__this->___parent_0);
		NullCheck(L_2);
		ObjectU5BU5D_t76* L_3 = (L_2->____array_1);
		int32_t L_4 = (__this->___idx_1);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_1__ctor_m12525_GenericMethod;
extern "C" void UnityAction_1__ctor_m12525_gshared (UnityAction_1_t2543 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m12526_gshared (UnityAction_1_t2543 * __this, Object_t * ___arg0, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m12526((UnityAction_1_t2543 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m12527_GenericMethod;
extern "C" Object_t * UnityAction_1_BeginInvoke_m12527_gshared (UnityAction_1_t2543 * __this, Object_t * ___arg0, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg0;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m12528_GenericMethod;
extern "C" void UnityAction_1_EndInvoke_m12528_gshared (UnityAction_1_t2543 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0.h"
extern TypeInfo Enumerator_t2550_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0MethodDeclarations.h"
extern Il2CppType Enumerator_t2550_0_0_0;
extern MethodInfo Enumerator__ctor_m12555_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(!!0[]&,System.Int32)
#define Array_Resize_TisList_1_t181_m22626(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, List_1U5BU5D_t2546**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22178_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Stack_1_GetEnumerator_m12539_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisList_1_t181_m22626_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12555_GenericMethod;


// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor()
// System.Boolean System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.IEnumerable.GetEnumerator()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Peek()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Pop()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Push(T)
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Count()
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4033_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3554_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_37.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2547_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_37MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2547_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>(System.Int32)
#define Array_InternalArray__get_Item_TisList_1_t181_m22593(__this, p0, method) (( List_1_t181 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12544_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisList_1_t181_m22593_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4034_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4035_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4036_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.ICollection>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.ICollection>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.ICollection>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.ICollection>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4037_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.ICollection>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4038_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.ICollection>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.ICollection>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_38.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2548_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.ICollection>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_38MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2548_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.ICollection>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.ICollection>(System.Int32)
#define Array_InternalArray__get_Item_TisICollection_t855_m22604(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12549_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisICollection_t855_m22604_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.ICollection>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.ICollection>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.ICollection>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.ICollection>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.ICollection>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4039_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.ICollection>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.ICollection>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.ICollection>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4040_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.IList>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.IList>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.IList>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.IList>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.IList>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.IList>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.IList>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4041_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.IList>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4042_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.IList>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.IList>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_39.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2549_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.IList>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_39MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2549_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.IList>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.IList>(System.Int32)
#define Array_InternalArray__get_Item_TisIList_t856_m22615(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12554_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIList_t856_m22615_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.IList>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.IList>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.IList>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.IList>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.IList>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4043_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.IList>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.IList>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.IList>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m12559_GenericMethod;


// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Collections.Generic.Stack`1<T>)
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Dispose()
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::MoveNext()
// T System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t335_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_11MethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_3.h"
// System.Predicate`1<UnityEngine.Component>
#include "mscorlib_System_Predicate_1_gen_1.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3.h"
// System.Comparison`1<UnityEngine.Component>
#include "mscorlib_System_Comparison_1_gen_6.h"
extern TypeInfo Component_t71_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3557_il2cpp_TypeInfo;
extern TypeInfo ComponentU5BU5D_t2551_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2552_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3555_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3556_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2554_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t333_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2558_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_3MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Component>
#include "mscorlib_System_Predicate_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3MethodDeclarations.h"
extern Il2CppType List_1_t335_0_0_0;
extern Il2CppType ICollection_1_t3557_0_0_0;
extern Il2CppType ComponentU5BU5D_t2551_0_0_0;
extern Il2CppType Enumerator_t2552_0_0_0;
extern Il2CppType IEnumerable_1_t3555_0_0_0;
extern Il2CppType IEnumerator_1_t3556_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2554_0_0_0;
extern Il2CppType Predicate_1_t333_0_0_0;
extern Il2CppType Comparer_1_t2558_0_0_0;
extern MethodInfo List_1_get_Item_m1997_MethodInfo;
extern MethodInfo List_1_set_Item_m12608_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25803_MethodInfo;
extern MethodInfo List_1_Add_m12582_MethodInfo;
extern MethodInfo List_1_Contains_m12588_MethodInfo;
extern MethodInfo List_1_IndexOf_m12594_MethodInfo;
extern MethodInfo List_1_Insert_m12597_MethodInfo;
extern MethodInfo List_1_Remove_m12599_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25804_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25805_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25806_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m12615_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m12689_MethodInfo;
extern MethodInfo Enumerator__ctor_m12609_MethodInfo;
extern MethodInfo List_1_RemoveAt_m12600_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.Component>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Component>(!!0[]&,System.Int32)
#define Array_Resize_TisComponent_t71_m22633(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2551**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22178_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Component>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Component>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisComponent_t71_m22635(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2551*, Component_t71 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10971_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisComponent_t71_m22637(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2551*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m22247_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Component>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisComponent_t71_m22645(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ComponentU5BU5D_t2551*, int32_t, Comparison_1_t2560 *, MethodInfo*))Array_Sort_TisObject_t_m22431_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m1997_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m12608_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisComponent_t71_m22633_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m12596_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m12598_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m12585_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25803_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m12584_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m12593_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m12582_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m12588_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m12594_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m12597_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m12599_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m12583_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m12606_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m12607_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25804_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25805_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25806_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m12615_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisComponent_t71_m22635_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m12591_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m12592_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m12689_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12609_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m12595_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m12600_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m12695_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisComponent_t71_m22637_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisComponent_t71_m22645_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Component>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Component>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m12612_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IList_1_t2553_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_3MethodDeclarations.h"
extern Il2CppType IList_1_t2553_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m12644_MethodInfo;
extern MethodInfo IList_1_get_Item_m25807_MethodInfo;
extern MethodInfo ICollection_1_Contains_m25808_MethodInfo;
extern MethodInfo IList_1_IndexOf_m25809_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m12644_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m25807_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m12676_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m25808_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m25809_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Component>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2555_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2555_0_0_0;
extern Il2CppType Component_t71_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m25810_MethodInfo;
extern MethodInfo Collection_1_SetItem_m12675_MethodInfo;
extern MethodInfo List_1__ctor_m12563_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m12668_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m12666_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m12671_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m12662_MethodInfo;
extern MethodInfo ICollection_1_Clear_m25811_MethodInfo;
extern MethodInfo IList_1_Insert_m25812_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m25813_MethodInfo;
extern MethodInfo IList_1_set_Item_m25814_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m25810_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m12679_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m12680_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m12677_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m12675_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m12563_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m12668_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m12678_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m12666_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m12671_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m12662_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m25811_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m25812_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m25813_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m25814_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2556_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3.h"
extern TypeInfo DefaultComparer_t2557_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2556_0_0_0;
extern Il2CppType IEquatable_1_t4044_0_0_0;
extern Il2CppType DefaultComparer_t2557_0_0_0;
extern MethodInfo DefaultComparer__ctor_m12686_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25815_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22634_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m12686_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25815_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22634_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Component>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4045_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4044_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Component>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m12681_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Component>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Component>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Component>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3.h"
extern TypeInfo DefaultComparer_t2559_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3MethodDeclarations.h"
extern Il2CppType IComparable_1_t3844_0_0_0;
extern Il2CppType DefaultComparer_t2559_0_0_0;
extern MethodInfo DefaultComparer__ctor_m12696_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25816_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m12696_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25816_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Component>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Component>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Component>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Component>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Component>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3843_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Component>::Compare(T,T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
