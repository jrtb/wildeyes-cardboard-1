#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_131.h"
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
extern TypeInfo InternalEnumerator_1_t3121_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_131MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Array
#include "mscorlib_System_Array.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo KeyValuePair_2_t3120_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1189_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3121_0_0_0;
extern Il2CppType KeyValuePair_2_t3120_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m5227_MethodInfo;
extern MethodInfo Array_get_Length_m5231_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Int32)
extern "C" KeyValuePair_2_t3120  Array_InternalArray__get_Item_TisKeyValuePair_2_t3120_m24214_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3120_m24214(__this, p0, method) (( KeyValuePair_2_t3120  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3120_m24214_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18539_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3120_m24214_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18535_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18535_gshared (InternalEnumerator_1_t3121 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18536_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18536_gshared (InternalEnumerator_1_t3121 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3120  L_0 = (( KeyValuePair_2_t3120  (*) (InternalEnumerator_1_t3121 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3120  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18537_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18537_gshared (InternalEnumerator_1_t3121 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18538_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18538_gshared (InternalEnumerator_1_t3121 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Current()
extern "C" KeyValuePair_2_t3120  InternalEnumerator_1_get_Current_m18539_gshared (InternalEnumerator_1_t3121 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3120  L_8 = (( KeyValuePair_2_t3120  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4341_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3673_il2cpp_TypeInfo;

// System.Int64
#include "mscorlib_System_Int64.h"


// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int64>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int64>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int64>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.String,System.Int64>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int64>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.Int64>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,System.Int64>::get_Values()
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t3122_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_26MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_27.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_58.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern TypeInfo ICollection_t855_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t618_il2cpp_TypeInfo;
extern TypeInfo Int32_t60_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t754_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t84_il2cpp_TypeInfo;
extern TypeInfo Boolean_t83_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3123_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t87_il2cpp_TypeInfo;
extern TypeInfo Void_t75_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3125_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_58MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_27MethodDeclarations.h"
extern Il2CppType Dictionary_2_t618_0_0_0;
extern Il2CppType Enumerator_t3123_0_0_0;
extern Il2CppType StringU5BU5D_t87_0_0_0;
extern Il2CppType KeyCollection_t3122_0_0_0;
extern Il2CppType Transform_1_t3125_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m10970_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m3873_MethodInfo;
extern MethodInfo Object__ctor_m357_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3902_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m5248_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m18394_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m18551_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m18382_MethodInfo;
extern MethodInfo Transform_1__ctor_m18571_MethodInfo;
extern MethodInfo Enumerator__ctor_m18554_MethodInfo;
struct Dictionary_2_t618;
// System.Type
#include "mscorlib_System_Type.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
struct Dictionary_2_t3102;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24205_gshared (Dictionary_2_t3102 * __this, Array_t * p0, int32_t p1, Transform_1_t3111 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24205(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3102 *, Array_t *, int32_t, Transform_1_t3111 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24205_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisString_t_m24225(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t618 *, Array_t *, int32_t, Transform_1_t3125 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24205_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t618;
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m24226 (Dictionary_2_t618 * __this, StringU5BU5D_t87* p0, int32_t p1, Transform_1_t3125 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m3873_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m18394_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m18552_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m18551_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18378_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m18382_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18571_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisString_t_m24225_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m24226_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18554_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::get_Count()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
extern TypeInfo Enumerator_t3124_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15MethodDeclarations.h"
extern Il2CppType Enumerator_t3124_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m18566_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m18530_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m18416_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m18570_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m18564_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo Int64_t759_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1014_il2cpp_TypeInfo;
extern TypeInfo Link_t1502_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1375_il2cpp_TypeInfo;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo DictionaryEntry__ctor_m5228_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m18529_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m6420_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m18569_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m18532_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m18567_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m18568_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m18529_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::Dispose()
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t3126_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_27.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_59.h"
extern TypeInfo Enumerator_t3127_il2cpp_TypeInfo;
extern TypeInfo Int64U5BU5D_t1406_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3128_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_59MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_27MethodDeclarations.h"
extern Il2CppType Enumerator_t3127_0_0_0;
extern Il2CppType Int64U5BU5D_t1406_0_0_0;
extern Il2CppType ValueCollection_t3126_0_0_0;
extern Il2CppType Transform_1_t3128_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m18586_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m18384_MethodInfo;
extern MethodInfo Transform_1__ctor_m18594_MethodInfo;
extern MethodInfo Enumerator__ctor_m18589_MethodInfo;
struct Dictionary_2_t618;
struct Dictionary_2_t3102;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t759_m24207_gshared (Dictionary_2_t3102 * __this, Array_t * p0, int32_t p1, Transform_1_t3114 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t759_m24207(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3102 *, Array_t *, int32_t, Transform_1_t3114 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t759_m24207_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t759_m24228(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t618 *, Array_t *, int32_t, Transform_1_t3128 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t759_m24207_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t618;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t759_TisInt64_t759_m24229 (Dictionary_2_t618 * __this, Int64U5BU5D_t1406* p0, int32_t p1, Transform_1_t3128 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m18396_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m18587_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m18586_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m18384_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18594_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt64_t759_m24228_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt64_t759_TisInt64_t759_m24229_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18589_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_60.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3100_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_60MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_61.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3129_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_61MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_62.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3130_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_62MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m18603_GenericMethod;
extern "C" void Transform_1__ctor_m18603_gshared (Transform_1_t3130 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18605_GenericMethod;
extern "C" KeyValuePair_2_t3120  Transform_1_Invoke_m18605_gshared (Transform_1_t3130 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18605((Transform_1_t3130 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3120  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3120  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3120  (*FunctionPointerType) (Object_t * __this, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18607_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18607_gshared (Transform_1_t3130 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t759_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18609_GenericMethod;
extern "C" KeyValuePair_2_t3120  Transform_1_EndInvoke_m18609_gshared (Transform_1_t3130 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3120 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t3131_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12MethodDeclarations.h"

extern TypeInfo IDictionaryEnumerator_t1011_il2cpp_TypeInfo;
extern Il2CppType ShimEnumerator_t3131_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m10973_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m18612_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m18565_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m18612_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Current()
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t627_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"

// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_27.h"
// System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Predicate_1_gen_28.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_27.h"
// System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Comparison_1_gen_28.h"
extern TypeInfo MatchDirectConnectInfo_t626_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t395_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t732_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1898_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t758_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3682_il2cpp_TypeInfo;
extern TypeInfo MatchDirectConnectInfoU5BU5D_t3132_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3135_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3680_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3681_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t31_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t127_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3137_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3141_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3142_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_27MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Predicate_1_gen_28MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_27MethodDeclarations.h"
extern Il2CppType List_1_t627_0_0_0;
extern Il2CppType ICollection_1_t3682_0_0_0;
extern Il2CppType MatchDirectConnectInfoU5BU5D_t3132_0_0_0;
extern Il2CppType Enumerator_t3135_0_0_0;
extern Il2CppType IEnumerable_1_t3680_0_0_0;
extern Il2CppType IEnumerator_1_t3681_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3137_0_0_0;
extern Il2CppType Predicate_1_t3141_0_0_0;
extern Il2CppType Comparer_1_t3142_0_0_0;
extern MethodInfo List_1_get_Item_m18663_MethodInfo;
extern MethodInfo List_1_set_Item_m18664_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2307_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5412_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5235_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m26211_MethodInfo;
extern MethodInfo Array_Copy_m7220_MethodInfo;
extern MethodInfo List_1_Add_m18635_MethodInfo;
extern MethodInfo List_1_Contains_m18642_MethodInfo;
extern MethodInfo List_1_IndexOf_m18648_MethodInfo;
extern MethodInfo List_1_Insert_m18651_MethodInfo;
extern MethodInfo List_1_Remove_m18653_MethodInfo;
extern MethodInfo Math_Max_m6412_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m26212_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m26213_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m26214_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3904_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1901_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m18681_MethodInfo;
extern MethodInfo Array_Clear_m6403_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m18756_MethodInfo;
extern MethodInfo Enumerator__ctor_m18675_MethodInfo;
extern MethodInfo List_1_RemoveAt_m18655_MethodInfo;
extern MethodInfo Array_Reverse_m6444_MethodInfo;
extern MethodInfo Array_Copy_m5453_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m22178_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m22178(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22178_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[]&,System.Int32)
#define Array_Resize_TisMatchDirectConnectInfo_t626_m24259(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3132**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22178_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_36.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m10971_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10971(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10971_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisMatchDirectConnectInfo_t626_m24261(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3132*, MatchDirectConnectInfo_t626 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10971_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m22247_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m22247(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m22247_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisMatchDirectConnectInfo_t626_m24263(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3132*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m22247_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m22431_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, Comparison_1_t2496 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m22431(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, Comparison_1_t2496 *, MethodInfo*))Array_Sort_TisObject_t_m22431_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisMatchDirectConnectInfo_t626_m24271(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3132*, int32_t, Comparison_1_t3144 *, MethodInfo*))Array_Sort_TisObject_t_m22431_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m18663_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m18664_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisMatchDirectConnectInfo_t626_m24259_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m18650_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m18652_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m18638_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m26211_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m18637_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m18647_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m18635_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m18642_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m18648_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m18651_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m18653_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m18636_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m18661_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m18662_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m26212_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m26213_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m26214_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m18681_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisMatchDirectConnectInfo_t626_m24261_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m18645_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m18646_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m18756_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18675_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m18649_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m18655_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m18762_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMatchDirectConnectInfo_t626_m24263_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMatchDirectConnectInfo_t626_m24271_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_132.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3133_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_132MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3133_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m22110_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m22110(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisMatchDirectConnectInfo_t626_m24237(__this, p0, method) (( MatchDirectConnectInfo_t626 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18669_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMatchDirectConnectInfo_t626_m24237_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3136_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4342_il2cpp_TypeInfo;

// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4343_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.ResponseBase>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4344_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_133.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3134_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_133MethodDeclarations.h"

extern TypeInfo ResponseBase_t614_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3134_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.ResponseBase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.ResponseBase>(System.Int32)
#define Array_InternalArray__get_Item_TisResponseBase_t614_m24248(__this, p0, method) (( ResponseBase_t614 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18674_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisResponseBase_t614_m24248_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4345_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Type_t_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m5234_MethodInfo;
extern MethodInfo Object_GetType_m1903_MethodInfo;
extern MethodInfo Type_get_FullName_m3970_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m18678_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t457_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_27MethodDeclarations.h"
extern Il2CppType IList_1_t3136_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m18710_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m360_MethodInfo;
extern MethodInfo IList_1_get_Item_m26215_MethodInfo;
extern MethodInfo ICollection_CopyTo_m5223_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m3927_MethodInfo;
extern MethodInfo ICollection_1_Contains_m26216_MethodInfo;
extern MethodInfo IList_1_IndexOf_m26217_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m18710_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m26215_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m18742_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m26216_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m26217_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_27.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3138_il2cpp_TypeInfo;

extern TypeInfo IList_t856_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t3138_0_0_0;
extern Il2CppType MatchDirectConnectInfo_t626_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m26218_MethodInfo;
extern MethodInfo Collection_1_SetItem_m18741_MethodInfo;
extern MethodInfo List_1__ctor_m18616_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m18734_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m18732_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m18737_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m18728_MethodInfo;
extern MethodInfo ICollection_1_Clear_m26219_MethodInfo;
extern MethodInfo IList_1_Insert_m26220_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m26221_MethodInfo;
extern MethodInfo IList_1_set_Item_m26222_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1995_MethodInfo;
extern MethodInfo Type_get_IsValueType_m7271_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m11250_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m11251_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m26218_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m18745_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m18746_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m18743_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m18741_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m18616_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m18734_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m18744_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m18732_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m18737_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m18728_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m26219_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m26220_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m26221_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m26222_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3139_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_36MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_36.h"
extern TypeInfo TypeU5BU5D_t658_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3140_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_36MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3139_0_0_0;
extern Il2CppType IEquatable_1_t4346_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2313_0_0_0;
extern Il2CppType TypeU5BU5D_t658_0_0_0;
extern Il2CppType DefaultComparer_t3140_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m4037_MethodInfo;
extern MethodInfo Type_MakeGenericType_m4035_MethodInfo;
extern MethodInfo Activator_CreateInstance_m10116_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m18752_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m26223_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m24260_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18752_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m26223_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m24260_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4347_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4346_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m627_MethodInfo;
extern MethodInfo Object_Equals_m626_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m18747_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_27.h"
extern TypeInfo DefaultComparer_t3143_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_27MethodDeclarations.h"
extern Il2CppType IComparable_1_t3893_0_0_0;
extern Il2CppType GenericComparer_1_t2224_0_0_0;
extern Il2CppType DefaultComparer_t3143_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18763_MethodInfo;
extern MethodInfo Comparer_1_Compare_m26224_MethodInfo;
extern MethodInfo ArgumentException__ctor_m10140_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18763_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m26224_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3892_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3893_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t124_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m24269_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10941_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m18759_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m24269_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3144_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Comparison_1_gen_28MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_27.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t629_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_27MethodDeclarations.h"

// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_28.h"
// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Predicate_1_gen_29.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_28.h"
// System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Comparison_1_gen_29.h"
extern TypeInfo MatchDesc_t628_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3685_il2cpp_TypeInfo;
extern TypeInfo MatchDescU5BU5D_t3145_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3147_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3683_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3684_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3149_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3153_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3154_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_28MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Predicate_1_gen_29MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_28MethodDeclarations.h"
extern Il2CppType List_1_t629_0_0_0;
extern Il2CppType ICollection_1_t3685_0_0_0;
extern Il2CppType MatchDescU5BU5D_t3145_0_0_0;
extern Il2CppType Enumerator_t3147_0_0_0;
extern Il2CppType IEnumerable_1_t3683_0_0_0;
extern Il2CppType IEnumerator_1_t3684_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3149_0_0_0;
extern Il2CppType Predicate_1_t3153_0_0_0;
extern Il2CppType Comparer_1_t3154_0_0_0;
extern MethodInfo List_1_get_Item_m18816_MethodInfo;
extern MethodInfo List_1_set_Item_m18817_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m26225_MethodInfo;
extern MethodInfo List_1_Add_m18788_MethodInfo;
extern MethodInfo List_1_Contains_m18795_MethodInfo;
extern MethodInfo List_1_IndexOf_m18801_MethodInfo;
extern MethodInfo List_1_Insert_m18804_MethodInfo;
extern MethodInfo List_1_Remove_m18806_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m26226_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m26227_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m26228_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m18829_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m18904_MethodInfo;
extern MethodInfo Enumerator__ctor_m18823_MethodInfo;
extern MethodInfo List_1_RemoveAt_m18808_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.Networking.Match.MatchDesc>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Networking.Match.MatchDesc>(!!0[]&,System.Int32)
#define Array_Resize_TisMatchDesc_t628_m24286(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, MatchDescU5BU5D_t3145**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22178_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_37.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Networking.Match.MatchDesc>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Networking.Match.MatchDesc>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisMatchDesc_t628_m24288(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, MatchDescU5BU5D_t3145*, MatchDesc_t628 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10971_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDesc>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDesc>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisMatchDesc_t628_m24290(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, MatchDescU5BU5D_t3145*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m22247_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDesc>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDesc>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisMatchDesc_t628_m24298(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, MatchDescU5BU5D_t3145*, int32_t, Comparison_1_t3156 *, MethodInfo*))Array_Sort_TisObject_t_m22431_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m18816_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m18817_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisMatchDesc_t628_m24286_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m18803_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m18805_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m18791_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m26225_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m18790_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m18800_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m18788_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m18795_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m18801_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m18804_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m18806_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m18789_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m18814_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m18815_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m26226_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m26227_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m26228_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m18829_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisMatchDesc_t628_m24288_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m18798_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m18799_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m18904_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18823_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m18802_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m18808_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m18910_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMatchDesc_t628_m24290_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMatchDesc_t628_m24298_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDesc>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_134.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3146_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_134MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3146_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.MatchDesc>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.MatchDesc>(System.Int32)
#define Array_InternalArray__get_Item_TisMatchDesc_t628_m24275(__this, p0, method) (( MatchDesc_t628 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18822_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMatchDesc_t628_m24275_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDesc>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDesc>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDesc>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3148_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m18826_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_28MethodDeclarations.h"
extern Il2CppType IList_1_t3148_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m18858_MethodInfo;
extern MethodInfo IList_1_get_Item_m26229_MethodInfo;
extern MethodInfo ICollection_1_Contains_m26230_MethodInfo;
extern MethodInfo IList_1_IndexOf_m26231_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m18858_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m26229_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m18890_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m26230_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m26231_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_28.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3150_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t3150_0_0_0;
extern Il2CppType MatchDesc_t628_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m26232_MethodInfo;
extern MethodInfo Collection_1_SetItem_m18889_MethodInfo;
extern MethodInfo List_1__ctor_m18769_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m18882_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m18880_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m18885_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m18876_MethodInfo;
extern MethodInfo ICollection_1_Clear_m26233_MethodInfo;
extern MethodInfo IList_1_Insert_m26234_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m26235_MethodInfo;
extern MethodInfo IList_1_set_Item_m26236_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m26232_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m18893_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m18894_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m18891_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m18889_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m18769_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m18882_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m18892_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m18880_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m18885_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m18876_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m26233_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m26234_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m26235_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m26236_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDesc>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3151_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_37MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_37.h"
extern TypeInfo DefaultComparer_t3152_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_37MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3151_0_0_0;
extern Il2CppType IEquatable_1_t4348_0_0_0;
extern Il2CppType DefaultComparer_t3152_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18900_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m26237_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m24287_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18900_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m26237_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m24287_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4349_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Match.MatchDesc>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4348_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Networking.Match.MatchDesc>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m18895_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDesc>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDesc>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_28.h"
extern TypeInfo DefaultComparer_t3155_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_28MethodDeclarations.h"
extern Il2CppType IComparable_1_t3895_0_0_0;
extern Il2CppType DefaultComparer_t3155_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18911_MethodInfo;
extern MethodInfo Comparer_1_Compare_m26238_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18911_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m26238_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDesc>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDesc>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3894_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Networking.Match.MatchDesc>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3895_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Networking.Match.MatchDesc>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m24296_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m18907_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m24296_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDesc>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3156_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Comparison_1_gen_29MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t637_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_30.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_30.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_69.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_70.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_14.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_39.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_40.h"
extern TypeInfo NetworkID_t633_il2cpp_TypeInfo;
extern TypeInfo NetworkAccessToken_t635_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3159_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1503_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3185_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3189_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4350_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4351_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3690_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3181_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3689_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t3778_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3160_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3192_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3187_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3194_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3195_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t109_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2294_il2cpp_TypeInfo;
extern TypeInfo NetworkIDU5BU5D_t3157_il2cpp_TypeInfo;
extern TypeInfo NetworkAccessTokenU5BU5D_t3158_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t1007_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3197_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t4352_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_30MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_30MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_69MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_70MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_14MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_39MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_40MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType Dictionary_2_t637_0_0_0;
extern Il2CppType IEqualityComparer_1_t3159_0_0_0;
extern Il2CppType KeyCollection_t3185_0_0_0;
extern Il2CppType ValueCollection_t3189_0_0_0;
extern Il2CppType ICollection_1_t4350_0_0_0;
extern Il2CppType IEnumerable_1_t4351_0_0_0;
extern Il2CppType IEnumerator_1_t3690_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3689_0_0_0;
extern Il2CppType KeyValuePair_2_t3181_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t3778_0_0_0;
extern Il2CppType Transform_1_t3160_0_0_0;
extern Il2CppType Transform_1_t3192_0_0_0;
extern Il2CppType Enumerator_t3187_0_0_0;
extern Il2CppType ShimEnumerator_t3194_0_0_0;
extern Il2CppType EqualityComparer_1_t3195_0_0_0;
extern Il2CppType Int32U5BU5D_t109_0_0_0;
extern Il2CppType LinkU5BU5D_t2294_0_0_0;
extern Il2CppType NetworkIDU5BU5D_t3157_0_0_0;
extern Il2CppType NetworkAccessTokenU5BU5D_t3158_0_0_0;
extern Il2CppType EqualityComparer_1_t3197_0_0_0;
extern Il2CppType IEqualityComparer_1_t4352_0_0_0;
extern Il2CppType NetworkID_t633_0_0_0;
extern Il2CppType NetworkAccessToken_t635_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m18990_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m18966_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m18968_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m26239_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m26240_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m7837_MethodInfo;
extern MethodInfo KeyCollection__ctor_m19145_MethodInfo;
extern MethodInfo ValueCollection__ctor_m19180_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m26241_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m26242_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m26243_MethodInfo;
extern MethodInfo Dictionary_2_Add_m18986_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m18998_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m19013_MethodInfo;
extern MethodInfo Transform_1__ctor_m19203_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m18976_MethodInfo;
extern MethodInfo Transform_1__ctor_m19207_MethodInfo;
extern MethodInfo Enumerator__ctor_m19164_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m19215_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m18964_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m19124_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m8004_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m26244_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5244_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m5257_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m5256_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m5245_MethodInfo;
extern MethodInfo Type_ToString_m7302_MethodInfo;
extern MethodInfo String_Concat_m548_MethodInfo;
extern MethodInfo ArgumentException__ctor_m5233_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3882_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m26245_MethodInfo;
struct Dictionary_2_t637;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1014_TisDictionaryEntry_t1014_m24393 (Dictionary_2_t637 * __this, DictionaryEntryU5BU5D_t3778* p0, int32_t p1, Transform_1_t3160 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t637;
struct Dictionary_2_t3163;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_71.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3181_m24396_gshared (Dictionary_2_t3163 * __this, Array_t * p0, int32_t p1, Transform_1_t3193 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3181_m24396(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, Transform_1_t3193 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3181_m24396_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3181_m24395(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t637 *, Array_t *, int32_t, Transform_1_t3192 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3181_m24396_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t637;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3181_TisKeyValuePair_2_t3181_m24398 (Dictionary_2_t637 * __this, KeyValuePair_2U5BU5D_t3689* p0, int32_t p1, Transform_1_t3192 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m19001_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m19003_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m18990_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m19005_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m18966_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m19007_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m18968_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m26239_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m26240_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m18984_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m19145_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m19180_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m18970_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m18924_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m26241_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m26242_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m26243_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m19125_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m19127_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m18986_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m18998_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m19009_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m18982_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18974_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m19013_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m19203_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1014_TisDictionaryEntry_t1014_m24393_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m18976_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m19207_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3181_m24395_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m19164_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m19215_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m19225_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m18972_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m18964_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m19124_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3181_TisKeyValuePair_2_t3181_m24398_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m19233_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m26244_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3882_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m26245_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t3163_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_28.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_28.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_65.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_66.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_13.h"
// System.Collections.Generic.EqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_38.h"
extern TypeInfo UInt64_t762_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3161_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3169_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3173_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4353_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4354_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3694_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3164_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3693_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3162_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3176_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3171_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3177_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3178_il2cpp_TypeInfo;
extern TypeInfo UInt64U5BU5D_t1795_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t76_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2469_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2704_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_28MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_28MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_65MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_66MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_13MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_38MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
extern Il2CppType Dictionary_2_t3163_0_0_0;
extern Il2CppType IEqualityComparer_1_t3161_0_0_0;
extern Il2CppType KeyCollection_t3169_0_0_0;
extern Il2CppType ValueCollection_t3173_0_0_0;
extern Il2CppType ICollection_1_t4353_0_0_0;
extern Il2CppType IEnumerable_1_t4354_0_0_0;
extern Il2CppType IEnumerator_1_t3694_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3693_0_0_0;
extern Il2CppType KeyValuePair_2_t3164_0_0_0;
extern Il2CppType Transform_1_t3162_0_0_0;
extern Il2CppType Transform_1_t3176_0_0_0;
extern Il2CppType Enumerator_t3171_0_0_0;
extern Il2CppType ShimEnumerator_t3177_0_0_0;
extern Il2CppType EqualityComparer_1_t3178_0_0_0;
extern Il2CppType UInt64U5BU5D_t1795_0_0_0;
extern Il2CppType ObjectU5BU5D_t76_0_0_0;
extern Il2CppType EqualityComparer_1_t2469_0_0_0;
extern Il2CppType IEqualityComparer_1_t2704_0_0_0;
extern Il2CppType UInt64_t762_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m18991_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m18967_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m18969_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m26246_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m26247_MethodInfo;
extern MethodInfo KeyCollection__ctor_m19041_MethodInfo;
extern MethodInfo ValueCollection__ctor_m19076_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m26248_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m26249_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m26250_MethodInfo;
extern MethodInfo Dictionary_2_Add_m18987_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m18999_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m19014_MethodInfo;
extern MethodInfo Transform_1__ctor_m19099_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m18977_MethodInfo;
extern MethodInfo Transform_1__ctor_m19103_MethodInfo;
extern MethodInfo Enumerator__ctor_m19060_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m19107_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m18965_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m19015_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25908_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m19000_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22179_MethodInfo;
struct Dictionary_2_t3163;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1014_TisDictionaryEntry_t1014_m24350 (Dictionary_2_t3163 * __this, DictionaryEntryU5BU5D_t3778* p0, int32_t p1, Transform_1_t3162 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t3163;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3164_m24352_gshared (Dictionary_2_t3163 * __this, Array_t * p0, int32_t p1, Transform_1_t3176 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3164_m24352(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, Transform_1_t3176 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3164_m24352_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3163;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3164_TisKeyValuePair_2_t3164_m24353 (Dictionary_2_t3163 * __this, KeyValuePair_2U5BU5D_t3693* p0, int32_t p1, Transform_1_t3176 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m19002_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m19004_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m18991_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m19006_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m18967_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m19008_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m18969_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m26246_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m26247_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m18985_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m19041_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m19076_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m18971_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m18925_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m26248_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m26249_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m26250_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m19016_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m19018_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m18987_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m18999_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m19010_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m18983_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18975_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m19014_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m19099_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1014_TisDictionaryEntry_t1014_m24350_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m18977_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m19103_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3164_m24352_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m19060_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m19107_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m19117_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m18973_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m18965_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m19015_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3164_TisKeyValuePair_2_t3164_m24353_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m11938_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25908_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m19000_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22179_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m18917_GenericMethod;
extern "C" void Dictionary_2__ctor_m18917_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		(( void (*) (Dictionary_2_t3163 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m18919_GenericMethod;
extern "C" void Dictionary_2__ctor_m18919_gshared (Dictionary_2_t3163 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t3163 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2__ctor_m18921_GenericMethod;
extern "C" void Dictionary_2__ctor_m18921_gshared (Dictionary_2_t3163 * __this, Object_t* ___dictionary, MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		(( void (*) (Dictionary_2_t3163 *, Object_t*, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m18923_GenericMethod;
extern "C" void Dictionary_2__ctor_m18923_gshared (Dictionary_2_t3163 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t3163 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18925_gshared (Dictionary_2_t3163 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t3164  V_1 = {0};
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
		(( void (*) (Dictionary_2_t3163 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
			KeyValuePair_2_t3164  L_9 = (KeyValuePair_2_t3164 )InterfaceFuncInvoker0< KeyValuePair_2_t3164  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			uint64_t L_10 = (( uint64_t (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< uint64_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m18927_GenericMethod;
extern "C" void Dictionary_2__ctor_m18927_gshared (Dictionary_2_t3163 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		SerializationInfo_t708 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18929_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18929_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		KeyCollection_t3169 * L_0 = (( KeyCollection_t3169 * (*) (Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18931_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18931_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		ValueCollection_t3173 * L_0 = (( ValueCollection_t3173 * (*) (Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m18933_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18933_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, MethodInfo* method)
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
		bool L_2 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(uint64_t*)((uint64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		uint64_t L_4 = (( uint64_t (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		Object_t * L_6 = L_5;
		return ((Object_t *)L_6);
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m18935_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18935_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		uint64_t L_1 = (( uint64_t (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m18937_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18937_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		uint64_t L_1 = (( uint64_t (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Contains_m18939_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18939_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, MethodInfo* method)
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
		bool L_4 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(uint64_t*)((uint64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m18941_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18941_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, MethodInfo* method)
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
		VirtFuncInvoker1< bool, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, ((*(uint64_t*)((uint64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18943_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18943_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18945_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18945_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18947_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18947_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18949_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18949_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2_t3164  ___keyValuePair, MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18951_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18951_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2_t3164  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3164  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t3163 *, KeyValuePair_2_t3164 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18953_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18953_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2U5BU5D_t3693* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3693* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t3163 *, KeyValuePair_2U5BU5D_t3693*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18955_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18955_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2_t3164  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3164  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t3163 *, KeyValuePair_2_t3164 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m18957_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t3778_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18957_gshared (Dictionary_2_t3163 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m18957_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m18957_init)
	{
		DictionaryEntryU5BU5D_t3778_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t3778_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m18957_init = true;
	}
	KeyValuePair_2U5BU5D_t3693* V_0 = {0};
	DictionaryEntryU5BU5D_t3778* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3778* G_B5_1 = {0};
	Dictionary_2_t3163 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3778* G_B4_1 = {0};
	Dictionary_2_t3163 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t3693*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t3693* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3693* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t3163 *, KeyValuePair_2U5BU5D_t3693*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
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
		Transform_1_t3162 * L_10 = ((Dictionary_2_t3163_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t3163 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t3163 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t3162 * L_12 = (Transform_1_t3162 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t3162 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t3163_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t3163 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t3162 * L_13 = ((Dictionary_2_t3163_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t3163 *, DictionaryEntryU5BU5D_t3778*, int32_t, Transform_1_t3162 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3176 * L_17 = (Transform_1_t3176 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3176 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, Transform_1_t3176 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18959_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18959_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171  L_0 = {0};
		(( void (*) (Enumerator_t3171 *, Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3171  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18961_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18961_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171  L_0 = {0};
		(( void (*) (Enumerator_t3171 *, Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3171  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18963_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18963_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t3177 * L_0 = (ShimEnumerator_t3177 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t3177 *, Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18965_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m18967_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t109* L_7 = (__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t109* L_9 = (__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t2294* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_1;
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
		UInt64U5BU5D_t1795* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		uint64_t L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(uint64_t*)(uint64_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ObjectU5BU5D_t76* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t2294* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = L_26;
	}

IL_008f:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t1503 * L_28 = (KeyNotFoundException_t1503 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyNotFoundException_t1503_il2cpp_TypeInfo));
		KeyNotFoundException__ctor_m7837(L_28, /*hidden argument*/&KeyNotFoundException__ctor_m7837_MethodInfo);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18969_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t109* L_8 = (__this->___table_4);
		NullCheck(L_8);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t109* L_9 = (__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		V_3 = (-1);
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t2294* L_13 = (__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (__this->___hcp_12);
		UInt64U5BU5D_t1795* L_18 = (__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		uint64_t L_21 = ___key;
		NullCheck(L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_17, (*(uint64_t*)(uint64_t*)SZArrayLdElema(L_18, L_20)), L_21);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_23 = V_2;
		V_3 = L_23;
		LinkU5BU5D_t2294* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_29 = (__this->___count_10);
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)1));
		V_4 = L_30;
		__this->___count_10 = L_30;
		int32_t L_31 = V_4;
		int32_t L_32 = (__this->___threshold_11);
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_33 = V_0;
		Int32U5BU5D_t109* L_34 = (__this->___table_4);
		NullCheck(L_34);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_35 = (__this->___emptySlot_9);
		V_2 = L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = (__this->___touchedSlots_8);
		int32_t L_38 = L_37;
		V_4 = L_38;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_4;
		V_2 = L_39;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t2294* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
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
		LinkU5BU5D_t2294* L_51 = (__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		UInt64U5BU5D_t1795* L_54 = (__this->___keySlots_6);
		int32_t L_55 = V_2;
		uint64_t L_56 = ___key;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_54, L_55)) = (uint64_t)L_56;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t2294* L_58 = (__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t2294* L_60 = (__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t2294* L_63 = (__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t109* L_65 = (__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t109* L_68 = (__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		ObjectU5BU5D_t76* L_71 = (__this->___valueSlots_7);
		int32_t L_72 = V_2;
		Object_t * L_73 = ___value;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_71, L_72)) = (Object_t *)L_73;
		int32_t L_74 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t3178_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m18971_gshared (Dictionary_2_t3163 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m18971_init;
	if (!Dictionary_2_Init_m18971_init)
	{
		EqualityComparer_1_t3178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3178_0_0_0);
		Dictionary_2_Init_m18971_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t3163 * G_B4_0 = {0};
	Dictionary_2_t3163 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t3163 * G_B5_1 = {0};
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
		G_B3_0 = ((Dictionary_2_t3163 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t3163 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t3163 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3178_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3178 * L_5 = (( EqualityComparer_1_t3178 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t3163 *)(G_B4_0));
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
		(( void (*) (Dictionary_2_t3163 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2294_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m18973_gshared (Dictionary_2_t3163 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m18973_init;
	if (!Dictionary_2_InitArrays_m18973_init)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		LinkU5BU5D_t2294_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2294_0_0_0);
		Dictionary_2_InitArrays_m18973_init = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t109*)SZArrayNew(Int32U5BU5D_t109_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2294*)SZArrayNew(LinkU5BU5D_t2294_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((UInt64U5BU5D_t1795*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t76*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18975_gshared (Dictionary_2_t3163 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3164  Dictionary_2_make_pair_m18977_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t3164  L_2 = {0};
		(( void (*) (KeyValuePair_2_t3164 *, uint64_t, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m18979_GenericMethod;
extern "C" uint64_t Dictionary_2_pick_key_m18979_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m18981_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_value_m18981_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18983_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2U5BU5D_t3693* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3693* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t3693* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3176 * L_5 = (Transform_1_t3176 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3176 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t3163 *, KeyValuePair_2U5BU5D_t3693*, int32_t, Transform_1_t3176 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern TypeInfo* Int32U5BU5D_t109_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2294_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m18985_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m18985_init;
	if (!Dictionary_2_Resize_m18985_init)
	{
		Int32U5BU5D_t109_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t109_0_0_0);
		LinkU5BU5D_t2294_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2294_0_0_0);
		Dictionary_2_Resize_m18985_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t109* V_1 = {0};
	LinkU5BU5D_t2294* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt64U5BU5D_t1795* V_7 = {0};
	ObjectU5BU5D_t76* V_8 = {0};
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
		UInt64U5BU5D_t1795* L_10 = (__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck(L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_9, (*(uint64_t*)(uint64_t*)SZArrayLdElema(L_10, L_12)));
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
		V_7 = ((UInt64U5BU5D_t1795*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = ((ObjectU5BU5D_t76*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		UInt64U5BU5D_t1795* L_37 = (__this->___keySlots_6);
		UInt64U5BU5D_t1795* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m7220(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		ObjectU5BU5D_t76* L_40 = (__this->___valueSlots_7);
		ObjectU5BU5D_t76* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m7220(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		UInt64U5BU5D_t1795* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t76* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18987_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t109* L_8 = (__this->___table_4);
		NullCheck(L_8);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t109* L_9 = (__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t2294* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		UInt64U5BU5D_t1795* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		uint64_t L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(uint64_t*)(uint64_t*)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t395 * L_22 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_22, (String_t*) &_stringLiteral1346, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t2294* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_27 = (__this->___count_10);
		int32_t L_28 = ((int32_t)((int32_t)L_27+(int32_t)1));
		V_3 = L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_3;
		int32_t L_30 = (__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_31 = V_0;
		Int32U5BU5D_t109* L_32 = (__this->___table_4);
		NullCheck(L_32);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_33 = (__this->___emptySlot_9);
		V_2 = L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = (__this->___touchedSlots_8);
		int32_t L_36 = L_35;
		V_3 = L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_2 = L_37;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t2294* L_38 = (__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t2294* L_41 = (__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t2294* L_44 = (__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t109* L_46 = (__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t109* L_49 = (__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		UInt64U5BU5D_t1795* L_52 = (__this->___keySlots_6);
		int32_t L_53 = V_2;
		uint64_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_52, L_53)) = (uint64_t)L_54;
		ObjectU5BU5D_t76* L_55 = (__this->___valueSlots_7);
		int32_t L_56 = V_2;
		Object_t * L_57 = ___value;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, L_56)) = (Object_t *)L_57;
		int32_t L_58 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m18989_GenericMethod;
extern "C" void Dictionary_2_Clear_m18989_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t109* L_0 = (__this->___table_4);
		Int32U5BU5D_t109* L_1 = (__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m6403(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m6403_MethodInfo);
		UInt64U5BU5D_t1795* L_2 = (__this->___keySlots_6);
		UInt64U5BU5D_t1795* L_3 = (__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m6403(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/&Array_Clear_m6403_MethodInfo);
		ObjectU5BU5D_t76* L_4 = (__this->___valueSlots_7);
		ObjectU5BU5D_t76* L_5 = (__this->___valueSlots_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18991_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t109* L_7 = (__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t109* L_9 = (__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t2294* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		UInt64U5BU5D_t1795* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		uint64_t L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(uint64_t*)(uint64_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t2294* L_21 = (__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_21, L_22))->___Next_1);
		V_1 = L_23;
	}

IL_0084:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m18993_GenericMethod;
extern TypeInfo* EqualityComparer_1_t2469_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m18993_gshared (Dictionary_2_t3163 * __this, Object_t * ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m18993_init;
	if (!Dictionary_2_ContainsValue_m18993_init)
	{
		EqualityComparer_1_t2469_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2469_0_0_0);
		Dictionary_2_ContainsValue_m18993_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2469_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2469 * L_0 = (( EqualityComparer_1_t2469 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
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
		ObjectU5BU5D_t76* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_4, (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7)), L_8);
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m18995_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m18995_gshared (Dictionary_2_t3163 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t3693* V_0 = {0};
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
		V_0 = (KeyValuePair_2U5BU5D_t3693*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t3693*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		KeyValuePair_2U5BU5D_t3693* L_8 = V_0;
		(( void (*) (Dictionary_2_t3163 *, KeyValuePair_2U5BU5D_t3693*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t708 * L_9 = ___info;
		Int32U5BU5D_t109* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m5244(L_9, (String_t*) &_stringLiteral1347, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m5244_MethodInfo);
		SerializationInfo_t708 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t3693* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m5257(L_11, (String_t*) &_stringLiteral1348, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m5257_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m18997_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m18997_gshared (Dictionary_2_t3163 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t3693* V_1 = {0};
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
		V_1 = ((KeyValuePair_2U5BU5D_t3693*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		(( void (*) (Dictionary_2_t3163 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t3693* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t3693* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		uint64_t L_16 = (( uint64_t (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((KeyValuePair_2_t3164 *)(KeyValuePair_2_t3164 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t3693* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((KeyValuePair_2_t3164 *)(KeyValuePair_2_t3164 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t3693* L_22 = V_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18999_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	Object_t * V_5 = {0};
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t109* L_8 = (__this->___table_4);
		NullCheck(L_8);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t109* L_9 = (__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
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
		LinkU5BU5D_t2294* L_13 = (__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (__this->___hcp_12);
		UInt64U5BU5D_t1795* L_18 = (__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		uint64_t L_21 = ___key;
		NullCheck(L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_17, (*(uint64_t*)(uint64_t*)SZArrayLdElema(L_18, L_20)), L_21);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_23 = V_2;
		V_3 = L_23;
		LinkU5BU5D_t2294* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_29 = (__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_29-(int32_t)1));
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t109* L_31 = (__this->___table_4);
		int32_t L_32 = V_1;
		LinkU5BU5D_t2294* L_33 = (__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t2294* L_36 = (__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t2294* L_38 = (__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t2294* L_41 = (__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (__this->___emptySlot_9);
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t2294* L_45 = (__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		UInt64U5BU5D_t1795* L_47 = (__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (InitializedTypeInfo(&UInt64_t762_il2cpp_TypeInfo), (&V_4));
		uint64_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_47, L_48)) = (uint64_t)L_49;
		ObjectU5BU5D_t76* L_50 = (__this->___valueSlots_7);
		int32_t L_51 = V_2;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_5));
		Object_t * L_52 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51)) = (Object_t *)L_52;
		int32_t L_53 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19000_gshared (Dictionary_2_t3163 * __this, uint64_t ___key, Object_t ** ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral378, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t109* L_7 = (__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t109* L_9 = (__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t2294* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		UInt64U5BU5D_t1795* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		uint64_t L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(uint64_t*)(uint64_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		Object_t ** L_21 = ___value;
		ObjectU5BU5D_t76* L_22 = (__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t2294* L_25 = (__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (((Link_t1502 *)(Link_t1502 *)SZArrayLdElema(L_25, L_26))->___Next_1);
		V_1 = L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		Object_t ** L_29 = ___value;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_2));
		Object_t * L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3169 * Dictionary_2_get_Keys_m19002_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		KeyCollection_t3169 * L_0 = (KeyCollection_t3169 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t3169 *, Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3173 * Dictionary_2_get_Values_m19004_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		ValueCollection_t3173 * L_0 = (ValueCollection_t3173 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t3173 *, Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m19006_gshared (Dictionary_2_t3163 * __this, Object_t * ___key, MethodInfo* method)
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
		return ((*(uint64_t*)((uint64_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m19008_gshared (Dictionary_2_t3163 * __this, Object_t * ___value, MethodInfo* method)
{
	Object_t * V_0 = {0};
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
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_0));
		Object_t * L_3 = V_0;
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
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t2469_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19010_gshared (Dictionary_2_t3163 * __this, KeyValuePair_2_t3164  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m19010_init;
	if (!Dictionary_2_ContainsKeyValuePair_m19010_init)
	{
		EqualityComparer_1_t2469_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2469_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m19010_init = true;
	}
	Object_t * V_0 = {0};
	{
		uint64_t L_0 = (( uint64_t (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, uint64_t, Object_t ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2469_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2469 * L_2 = (( EqualityComparer_1_t2469 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m19012_GenericMethod;
extern "C" Enumerator_t3171  Dictionary_2_GetEnumerator_m19012_gshared (Dictionary_2_t3163 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171  L_0 = {0};
		(( void (*) (Enumerator_t3171 *, Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1014  Dictionary_2_U3CCopyToU3Em__0_m19014_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		Object_t * L_3 = ___value;
		Object_t * L_4 = L_3;
		DictionaryEntry_t1014  L_5 = {0};
		DictionaryEntry__ctor_m5228(&L_5, L_2, ((Object_t *)L_4), /*hidden argument*/&DictionaryEntry__ctor_m5228_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_ToString_m597_MethodInfo;
extern MethodInfo String_Concat_m3849_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m19017_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m19019_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m19015_gshared (KeyValuePair_2_t3164 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3164 *, uint64_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3164 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::get_Key()
extern "C" uint64_t KeyValuePair_2_get_Key_m19016_gshared (KeyValuePair_2_t3164 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m19017_gshared (KeyValuePair_2_t3164 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m19018_gshared (KeyValuePair_2_t3164 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m19019_gshared (KeyValuePair_2_t3164 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m19020_GenericMethod;
extern TypeInfo* StringU5BU5D_t87_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m19020_gshared (KeyValuePair_2_t3164 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m19020_init;
	if (!KeyValuePair_2_ToString_m19020_init)
	{
		StringU5BU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t87_0_0_0);
		KeyValuePair_2_ToString_m19020_init = true;
	}
	uint64_t V_0 = 0;
	Object_t * V_1 = {0};
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
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		uint64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		uint64_t L_5 = (( uint64_t (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_5;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B3_0 = L_7;
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
		StringU5BU5D_t87* L_8 = G_B3_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral363);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral363;
		StringU5BU5D_t87* L_9 = L_8;
		Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_11 = L_10;
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!((Object_t *)L_11))
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		Object_t * L_12 = (( Object_t * (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_12;
		NullCheck((*(&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m597_MethodInfo, (*(&V_1)));
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
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_135.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3165_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_135MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3165_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t3164  Array_InternalArray__get_Item_TisKeyValuePair_2_t3164_m24302_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3164_m24302(__this, p0, method) (( KeyValuePair_2_t3164  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3164_m24302_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19025_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3164_m24302_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19021_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m19021_gshared (InternalEnumerator_1_t3165 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19022_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19022_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3164  L_0 = (( KeyValuePair_2_t3164  (*) (InternalEnumerator_1_t3165 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3164  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19023_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m19023_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19024_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m19024_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t3164  InternalEnumerator_1_get_Current_m19025_gshared (InternalEnumerator_1_t3165 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3164  L_8 = (( KeyValuePair_2_t3164  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4355_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3692_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3691_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UInt64>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4356_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt64>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3695_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.UInt64>::get_Current()
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_136.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3166_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_136MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3166_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern "C" uint64_t Array_InternalArray__get_Item_TisUInt64_t762_m24313_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt64_t762_m24313(__this, p0, method) (( uint64_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisUInt64_t762_m24313_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19030_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisUInt64_t762_m24313_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.UInt64>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19026_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m19026_gshared (InternalEnumerator_1_t3166 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt64>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19027_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19027_gshared (InternalEnumerator_1_t3166 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (InternalEnumerator_1_t3166 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19028_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m19028_gshared (InternalEnumerator_1_t3166 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt64>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19029_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m19029_gshared (InternalEnumerator_1_t3166 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.UInt64>::get_Current()
extern "C" uint64_t InternalEnumerator_1_get_Current_m19030_gshared (InternalEnumerator_1_t3166 * __this, MethodInfo* method)
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
		uint64_t L_8 = (( uint64_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4357_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UInt64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4358_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4359_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4360_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t1995_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.UInt64>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_137.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3167_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_137MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3167_0_0_0;
extern Il2CppType IComparable_1_t1995_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t1995_m24324(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19035_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t1995_m24324_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4361_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4362_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4363_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4364_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t1996_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.UInt64>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_138.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3168_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_138MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3168_0_0_0;
extern Il2CppType IEquatable_1_t1996_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t1996_m24335(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19040_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t1996_m24335_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4365_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_29.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_63.h"
extern TypeInfo Enumerator_t3170_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3172_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_63MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_29MethodDeclarations.h"
extern Il2CppType Enumerator_t3170_0_0_0;
extern Il2CppType Transform_1_t3172_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m19052_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m18979_MethodInfo;
extern MethodInfo Transform_1__ctor_m19072_MethodInfo;
extern MethodInfo Enumerator__ctor_m19055_MethodInfo;
struct Dictionary_2_t3163;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t762_m24346_gshared (Dictionary_2_t3163 * __this, Array_t * p0, int32_t p1, Transform_1_t3172 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t762_m24346(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, Transform_1_t3172 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t762_m24346_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3163;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisUInt64_t762_TisUInt64_t762_m24347 (Dictionary_2_t3163 * __this, UInt64U5BU5D_t1795* p0, int32_t p1, Transform_1_t3172 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m19053_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m19052_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m19072_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t762_m24346_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisUInt64_t762_TisUInt64_t762_m24347_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m19055_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m19041_gshared (KeyCollection_t3169 * __this, Dictionary_2_t3163 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Dictionary_2_t3163 * L_0 = ___dictionary;
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
		Dictionary_2_t3163 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m19042_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m19042_gshared (KeyCollection_t3169 * __this, uint64_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m19043_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m19043_gshared (KeyCollection_t3169 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m19044_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m19044_gshared (KeyCollection_t3169 * __this, uint64_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = (__this->___dictionary_0);
		uint64_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m19045_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m19045_gshared (KeyCollection_t3169 * __this, uint64_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m19046_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m19046_gshared (KeyCollection_t3169 * __this, MethodInfo* method)
{
	{
		Enumerator_t3170  L_0 = (( Enumerator_t3170  (*) (KeyCollection_t3169 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3170  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m19047_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m19047_gshared (KeyCollection_t3169 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	UInt64U5BU5D_t1795* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((UInt64U5BU5D_t1795*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		UInt64U5BU5D_t1795* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		UInt64U5BU5D_t1795* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< UInt64U5BU5D_t1795*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3163 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3163 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3172 * L_11 = (Transform_1_t3172 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3172 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, Transform_1_t3172 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m19048_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m19048_gshared (KeyCollection_t3169 * __this, MethodInfo* method)
{
	{
		Enumerator_t3170  L_0 = (( Enumerator_t3170  (*) (KeyCollection_t3169 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3170  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m19049_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m19049_gshared (KeyCollection_t3169 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m19050_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m19050_gshared (KeyCollection_t3169 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m19051_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m19051_gshared (KeyCollection_t3169 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10970_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m19052_gshared (KeyCollection_t3169 * __this, UInt64U5BU5D_t1795* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = (__this->___dictionary_0);
		UInt64U5BU5D_t1795* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3163 * L_3 = (__this->___dictionary_0);
		UInt64U5BU5D_t1795* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3172 * L_7 = (Transform_1_t3172 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3172 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3163 *, UInt64U5BU5D_t1795*, int32_t, Transform_1_t3172 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3170  KeyCollection_GetEnumerator_m19053_gshared (KeyCollection_t3169 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = (__this->___dictionary_0);
		Enumerator_t3170  L_1 = {0};
		(( void (*) (Enumerator_t3170 *, Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m19054_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m19054_gshared (KeyCollection_t3169 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m19067_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m19071_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m19065_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19055_gshared (Enumerator_t3170 * __this, Dictionary_2_t3163 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3171  L_1 = (( Enumerator_t3171  (*) (Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m19056_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19056_gshared (Enumerator_t3170 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171 * L_0 = &(__this->___host_enumerator_0);
		uint64_t L_1 = (( uint64_t (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m19057_GenericMethod;
extern "C" void Enumerator_Dispose_m19057_gshared (Enumerator_t3170 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m19058_GenericMethod;
extern "C" bool Enumerator_MoveNext_m19058_gshared (Enumerator_t3170 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m19059_GenericMethod;
extern "C" uint64_t Enumerator_get_Current_m19059_gshared (Enumerator_t3170 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3164 * L_1 = &(L_0->___current_3);
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m19070_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m19068_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m19069_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19060_gshared (Enumerator_t3171 * __this, Dictionary_2_t3163 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3163 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m19061_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19061_gshared (Enumerator_t3171 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3164  L_0 = (__this->___current_3);
		KeyValuePair_2_t3164  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19062_GenericMethod;
extern "C" DictionaryEntry_t1014  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19062_gshared (Enumerator_t3171 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3164 * L_0 = &(__this->___current_3);
		uint64_t L_1 = (( uint64_t (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		KeyValuePair_2_t3164 * L_4 = &(__this->___current_3);
		Object_t * L_5 = (( Object_t * (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_6 = L_5;
		DictionaryEntry_t1014  L_7 = {0};
		DictionaryEntry__ctor_m5228(&L_7, L_3, ((Object_t *)L_6), /*hidden argument*/&DictionaryEntry__ctor_m5228_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19063_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19063_gshared (Enumerator_t3171 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19064_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19064_gshared (Enumerator_t3171 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19065_gshared (Enumerator_t3171 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t3163 * L_4 = (__this->___dictionary_0);
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
		Dictionary_2_t3163 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		UInt64U5BU5D_t1795* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3163 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t76* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3164  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3164 *, uint64_t, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(uint64_t*)(uint64_t*)SZArrayLdElema(L_9, L_11)), (*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t3163 * L_18 = (__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m19066_GenericMethod;
extern "C" KeyValuePair_2_t3164  Enumerator_get_Current_m19066_gshared (Enumerator_t3171 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3164  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m19067_gshared (Enumerator_t3171 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3164 * L_0 = &(__this->___current_3);
		uint64_t L_1 = (( uint64_t (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m19068_gshared (Enumerator_t3171 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3164 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m19069_gshared (Enumerator_t3171 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = (__this->___dictionary_0);
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
		Dictionary_2_t3163 * L_2 = (__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19070_gshared (Enumerator_t3171 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m19071_gshared (Enumerator_t3171 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3163 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19072_gshared (Transform_1_t3172 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m19073_GenericMethod;
extern "C" uint64_t Transform_1_Invoke_m19073_gshared (Transform_1_t3172 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19073((Transform_1_t3172 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint64_t (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef uint64_t (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m19074_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m19074_gshared (Transform_1_t3172 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UInt64_t762_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m19075_GenericMethod;
extern "C" uint64_t Transform_1_EndInvoke_m19075_gshared (Transform_1_t3172 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_29.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_64.h"
extern TypeInfo Enumerator_t3174_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3175_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_64MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_29MethodDeclarations.h"
extern Il2CppType Enumerator_t3174_0_0_0;
extern Il2CppType Transform_1_t3175_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m19087_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m18981_MethodInfo;
extern MethodInfo Transform_1__ctor_m19095_MethodInfo;
extern MethodInfo Enumerator__ctor_m19090_MethodInfo;
struct Dictionary_2_t3163;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24349_gshared (Dictionary_2_t3163 * __this, Array_t * p0, int32_t p1, Transform_1_t3175 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24349(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, Transform_1_t3175 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24349_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3163;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m24348 (Dictionary_2_t3163 * __this, ObjectU5BU5D_t76* p0, int32_t p1, Transform_1_t3175 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m19088_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m19087_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m19095_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24349_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m24348_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m19090_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m19076_gshared (ValueCollection_t3173 * __this, Dictionary_2_t3163 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Dictionary_2_t3163 * L_0 = ___dictionary;
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
		Dictionary_2_t3163 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m19077_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m19077_gshared (ValueCollection_t3173 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m19078_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m19078_gshared (ValueCollection_t3173 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m19079_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m19079_gshared (ValueCollection_t3173 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3163 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m19080_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m19080_gshared (ValueCollection_t3173 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral1352, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m19081_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m19081_gshared (ValueCollection_t3173 * __this, MethodInfo* method)
{
	{
		Enumerator_t3174  L_0 = (( Enumerator_t3174  (*) (ValueCollection_t3173 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3174  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m19082_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m19082_gshared (ValueCollection_t3173 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t3163 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3163 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3175 * L_11 = (Transform_1_t3175 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3175 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, Transform_1_t3175 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m19083_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m19083_gshared (ValueCollection_t3173 * __this, MethodInfo* method)
{
	{
		Enumerator_t3174  L_0 = (( Enumerator_t3174  (*) (ValueCollection_t3173 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3174  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m19084_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m19084_gshared (ValueCollection_t3173 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m19085_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m19085_gshared (ValueCollection_t3173 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m19086_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m19086_gshared (ValueCollection_t3173 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10970_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m19087_gshared (ValueCollection_t3173 * __this, ObjectU5BU5D_t76* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t76* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3163 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3163 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t76* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3175 * L_7 = (Transform_1_t3175 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3175 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3163 *, ObjectU5BU5D_t76*, int32_t, Transform_1_t3175 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3174  ValueCollection_GetEnumerator_m19088_gshared (ValueCollection_t3173 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = (__this->___dictionary_0);
		Enumerator_t3174  L_1 = {0};
		(( void (*) (Enumerator_t3174 *, Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m19089_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m19089_gshared (ValueCollection_t3173 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19090_gshared (Enumerator_t3174 * __this, Dictionary_2_t3163 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3163 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3171  L_1 = (( Enumerator_t3171  (*) (Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m19091_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19091_gshared (Enumerator_t3174 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m19092_GenericMethod;
extern "C" void Enumerator_Dispose_m19092_gshared (Enumerator_t3174 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m19093_GenericMethod;
extern "C" bool Enumerator_MoveNext_m19093_gshared (Enumerator_t3174 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m19094_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m19094_gshared (Enumerator_t3174 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3164 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19095_gshared (Transform_1_t3175 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m19096_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m19096_gshared (Transform_1_t3175 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19096((Transform_1_t3175 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m19097_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m19097_gshared (Transform_1_t3175 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UInt64_t762_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m19098_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m19098_gshared (Transform_1_t3175 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19099_gshared (Transform_1_t3162 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m19100_GenericMethod;
extern "C" DictionaryEntry_t1014  Transform_1_Invoke_m19100_gshared (Transform_1_t3162 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19100((Transform_1_t3162 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1014  (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef DictionaryEntry_t1014  (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m19101_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m19101_gshared (Transform_1_t3162 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UInt64_t762_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m19102_GenericMethod;
extern "C" DictionaryEntry_t1014  Transform_1_EndInvoke_m19102_gshared (Transform_1_t3162 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1014 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19103_gshared (Transform_1_t3176 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m19104_GenericMethod;
extern "C" KeyValuePair_2_t3164  Transform_1_Invoke_m19104_gshared (Transform_1_t3176 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m19104((Transform_1_t3176 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3164  (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t3164  (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m19105_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m19105_gshared (Transform_1_t3176 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UInt64_t762_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m19106_GenericMethod;
extern "C" KeyValuePair_2_t3164  Transform_1_EndInvoke_m19106_gshared (Transform_1_t3176 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3164 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m19109_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m19109_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19107_gshared (ShimEnumerator_t3177 * __this, Dictionary_2_t3163 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		Dictionary_2_t3163 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3171  L_1 = (( Enumerator_t3171  (*) (Dictionary_2_t3163 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m19108_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m19108_gshared (ShimEnumerator_t3177 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1014  ShimEnumerator_get_Entry_m19109_gshared (ShimEnumerator_t3177 * __this, MethodInfo* method)
{
	{
		Enumerator_t3171  L_0 = (__this->___host_enumerator_0);
		Enumerator_t3171  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t1014  L_3 = (DictionaryEntry_t1014 )InterfaceFuncInvoker0< DictionaryEntry_t1014  >::Invoke(&IDictionaryEnumerator_get_Entry_m10973_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m19110_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m19110_gshared (ShimEnumerator_t3177 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3164  V_0 = {0};
	{
		Enumerator_t3171 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3164  L_1 = (( KeyValuePair_2_t3164  (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m19111_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m19111_gshared (ShimEnumerator_t3177 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3164  V_0 = {0};
	{
		Enumerator_t3171 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3164  L_1 = (( KeyValuePair_2_t3164  (*) (Enumerator_t3171 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3164 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m19112_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m19112_gshared (ShimEnumerator_t3177 * __this, MethodInfo* method)
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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_38.h"
extern TypeInfo DefaultComparer_t3180_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_38MethodDeclarations.h"
extern Il2CppType DefaultComparer_t3180_0_0_0;
extern MethodInfo DefaultComparer__ctor_m19121_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m26251_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m26252_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m19121_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m26251_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m26252_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.UInt64>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m19113_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m19113_gshared (EqualityComparer_1_t3178 * __this, MethodInfo* method)
{
	{
		Object__ctor_m357(__this, /*hidden argument*/&Object__ctor_m357_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.UInt64>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m19114_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m19114_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3180 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3180 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3180 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t3178_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.UInt64>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19115_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19115_gshared (EqualityComparer_1_t3178 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(uint64_t*)((uint64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt64>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19116_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19116_gshared (EqualityComparer_1_t3178 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(uint64_t*)((uint64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(uint64_t*)((uint64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.UInt64>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt64>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.UInt64>::get_Default()
extern "C" EqualityComparer_1_t3178 * EqualityComparer_1_get_Default_m19117_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3178 * L_0 = ((EqualityComparer_1_t3178_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t3179_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__8MethodDeclarations.h"

extern MethodInfo IEquatable_1_Equals_m26253_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m26253_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m19118_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m19118_gshared (GenericEqualityComparer_1_t3179 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3178 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m19119_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m19119_gshared (GenericEqualityComparer_1_t3179 * __this, uint64_t ___obj, MethodInfo* method)
{
	{
		uint64_t L_0 = ___obj;
		uint64_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m19120_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m19120_gshared (GenericEqualityComparer_1_t3179 * __this, uint64_t ___x, uint64_t ___y, MethodInfo* method)
{
	{
		uint64_t L_0 = ___x;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint64_t L_3 = ___y;
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint64_t L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::.ctor()
extern "C" void DefaultComparer__ctor_m19121_gshared (DefaultComparer_t3180 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3178 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m19122_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m19122_gshared (DefaultComparer_t3180 * __this, uint64_t ___obj, MethodInfo* method)
{
	{
		uint64_t L_0 = ___obj;
		uint64_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m19123_GenericMethod;
extern "C" bool DefaultComparer_Equals_m19123_gshared (DefaultComparer_t3180 * __this, uint64_t ___x, uint64_t ___y, MethodInfo* method)
{
	{
		uint64_t L_0 = ___x;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint64_t L_3 = ___y;
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint64_t L_6 = ___y;
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::get_Current()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
