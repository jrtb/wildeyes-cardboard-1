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
#include "stringLiterals.h"
#include "codegen/il2cpp-codegen.h"

// System.Array
#include "mscorlib_System_Array.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
// System.Void System.Array::GetGenericValueImpl<System.Uri/UriScheme>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisUriScheme_t1177_m25088_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Uri/UriScheme>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo NotSupportedException_t84_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo NotSupportedException__ctor_m5248_MethodInfo;
// System.Void System.Array::InternalArray__ICollection_Add<System.Uri/UriScheme>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisUriScheme_t1177_m25090_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Uri/UriScheme>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Uri/UriScheme>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisUriScheme_t1177_m25090_gshared (Array_t * __this, UriScheme_t1177  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisUriScheme_t1177_m25090(__this, ___item, method) (( void (*) (Array_t *, UriScheme_t1177 , MethodInfo*))Array_InternalArray__ICollection_Add_TisUriScheme_t1177_m25090_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Uri/UriScheme>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Add_TisUriScheme_t1177_m25090_GenericMethod;
extern "C" void Array_InternalArray__ICollection_Add_TisUriScheme_t1177_m25090_gshared (Array_t * __this, UriScheme_t1177  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.RankException
#include "mscorlib_System_RankException.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo RankException_t1918_il2cpp_TypeInfo;
extern TypeInfo UriScheme_t1177_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t83_il2cpp_TypeInfo;
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Array_get_Rank_m5237_MethodInfo;
extern MethodInfo Locale_GetText_m7347_MethodInfo;
extern MethodInfo RankException__ctor_m10777_MethodInfo;
extern MethodInfo Array_get_Length_m5231_MethodInfo;
extern MethodInfo Object_Equals_m626_MethodInfo;
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisUriScheme_t1177_m25088_GenericMethod;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Uri/UriScheme>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisUriScheme_t1177_m25091_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Uri/UriScheme>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Uri/UriScheme>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisUriScheme_t1177_m25091_gshared (Array_t * __this, UriScheme_t1177  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisUriScheme_t1177_m25091(__this, ___item, method) (( bool (*) (Array_t *, UriScheme_t1177 , MethodInfo*))Array_InternalArray__ICollection_Contains_TisUriScheme_t1177_m25091_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Uri/UriScheme>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Contains_TisUriScheme_t1177_m25091_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Contains_TisUriScheme_t1177_m25091_gshared (Array_t * __this, UriScheme_t1177  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UriScheme_t1177  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		UriScheme_t1177  L_5 = ___item;
		UriScheme_t1177  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		UriScheme_t1177  L_8 = V_2;
		UriScheme_t1177  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		UriScheme_t1177  L_11 = V_2;
		UriScheme_t1177  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "System_ArrayTypes.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
extern TypeInfo ArgumentNullException_t754_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t395_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t758_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern MethodInfo ArgumentNullException__ctor_m3902_MethodInfo;
extern MethodInfo Array_GetLength_m478_MethodInfo;
extern MethodInfo Array_GetLowerBound_m7182_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2307_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m3918_MethodInfo;
extern MethodInfo Array_Copy_m7220_MethodInfo;
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Uri/UriScheme>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisUriScheme_t1177_m25092_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Uri/UriScheme>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Uri/UriScheme>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisUriScheme_t1177_m25092_gshared (Array_t * __this, UriSchemeU5BU5D_t1178* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisUriScheme_t1177_m25092(__this, ___array, ___index, method) (( void (*) (Array_t *, UriSchemeU5BU5D_t1178*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisUriScheme_t1177_m25092_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Uri/UriScheme>(T[],System.Int32)
extern Il2CppGenericMethod Array_InternalArray__ICollection_CopyTo_TisUriScheme_t1177_m25092_GenericMethod;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisUriScheme_t1177_m25092_gshared (Array_t * __this, UriSchemeU5BU5D_t1178* ___array, int32_t ___index, MethodInfo* method)
{
	{
		UriSchemeU5BU5D_t1178* L_0 = ___array;
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
		int32_t L_2 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_4 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_4, L_3, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		int32_t L_6 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		UriSchemeU5BU5D_t1178* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = Array_GetLowerBound_m7182(L_7, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		UriSchemeU5BU5D_t1178* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_GetLength_m478(L_9, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t395 * L_11 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_11, (String_t*) &_stringLiteral1172, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		UriSchemeU5BU5D_t1178* L_12 = ___array;
		NullCheck(L_12);
		int32_t L_13 = Array_get_Rank_m5237(L_12, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_15 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_15, L_14, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_18 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_18, (String_t*) &_stringLiteral381, L_17, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		UriSchemeU5BU5D_t1178* L_20 = ___array;
		int32_t L_21 = ___index;
		int32_t L_22 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		Array_Copy_m7220(NULL /*static, unused*/, __this, L_19, (Array_t *)(Array_t *)L_20, L_21, L_22, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Uri/UriScheme>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisUriScheme_t1177_m25093_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Uri/UriScheme>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Uri/UriScheme>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisUriScheme_t1177_m25093_gshared (Array_t * __this, UriScheme_t1177  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisUriScheme_t1177_m25093(__this, ___item, method) (( bool (*) (Array_t *, UriScheme_t1177 , MethodInfo*))Array_InternalArray__ICollection_Remove_TisUriScheme_t1177_m25093_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Uri/UriScheme>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Remove_TisUriScheme_t1177_m25093_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Remove_TisUriScheme_t1177_m25093_gshared (Array_t * __this, UriScheme_t1177  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Uri/UriScheme>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisUriScheme_t1177_m25094_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Uri/UriScheme>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Uri/UriScheme>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisUriScheme_t1177_m25094_gshared (Array_t * __this, UriScheme_t1177  ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisUriScheme_t1177_m25094(__this, ___item, method) (( int32_t (*) (Array_t *, UriScheme_t1177 , MethodInfo*))Array_InternalArray__IndexOf_TisUriScheme_t1177_m25094_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Uri/UriScheme>(T)
extern Il2CppGenericMethod Array_InternalArray__IndexOf_TisUriScheme_t1177_m25094_GenericMethod;
extern "C" int32_t Array_InternalArray__IndexOf_TisUriScheme_t1177_m25094_gshared (Array_t * __this, UriScheme_t1177  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UriScheme_t1177  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		UriScheme_t1177  L_5 = ___item;
		UriScheme_t1177  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		UriScheme_t1177  L_8 = V_2;
		UriScheme_t1177  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		UriScheme_t1177  L_14 = ___item;
		UriScheme_t1177  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisUriScheme_t1177_m25095_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisUriScheme_t1177_m25095_gshared (Array_t * __this, int32_t ___index, UriScheme_t1177  ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisUriScheme_t1177_m25095(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, UriScheme_t1177 , MethodInfo*))Array_InternalArray__Insert_TisUriScheme_t1177_m25095_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__Insert_TisUriScheme_t1177_m25095_GenericMethod;
extern "C" void Array_InternalArray__Insert_TisUriScheme_t1177_m25095_gshared (Array_t * __this, int32_t ___index, UriScheme_t1177  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "mscorlib_ArrayTypes.h"
extern TypeInfo ObjectU5BU5D_t76_il2cpp_TypeInfo;
extern Il2CppType ObjectU5BU5D_t76_0_0_0;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5235_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Uri/UriScheme>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisUriScheme_t1177_m25096_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisUriScheme_t1177_m25097_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisUriScheme_t1177_m25097_gshared (Array_t * __this, int32_t ___index, UriScheme_t1177  ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisUriScheme_t1177_m25097(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, UriScheme_t1177 , MethodInfo*))Array_InternalArray__set_Item_TisUriScheme_t1177_m25097_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__set_Item_TisUriScheme_t1177_m25097_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisUriScheme_t1177_m25097_gshared (Array_t * __this, int32_t ___index, UriScheme_t1177  ___item, MethodInfo* method)
{
	static bool Array_InternalArray__set_Item_TisUriScheme_t1177_m25097_init;
	if (!Array_InternalArray__set_Item_TisUriScheme_t1177_m25097_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Array_InternalArray__set_Item_TisUriScheme_t1177_m25097_init = true;
	}
	ObjectU5BU5D_t76* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		V_0 = ((ObjectU5BU5D_t76*)IsInst(__this, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t76* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t76* L_4 = V_0;
		int32_t L_5 = ___index;
		UriScheme_t1177  L_6 = ___item;
		UriScheme_t1177  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		ArraySetGenericValueImpl (__this, L_9, (&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Uri/UriScheme>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisUriScheme_t1177_m25096_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_189.h"
extern TypeInfo InternalEnumerator_1_t3456_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_189MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3456_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21579_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21579_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t1177_m25098_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t1177_m25098_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t1177_m25098(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t1177_m25098_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
extern Il2CppGenericMethod Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t1177_m25098_GenericMethod;
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t1177_m25098_gshared (Array_t * __this, MethodInfo* method)
{
	{
		InternalEnumerator_1_t3456  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t3456 *, Array_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t3456  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.UInt32>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisUInt32_t752_m25099_GenericMethod;
// T System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisUInt32_t752_m25100_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
// T System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern "C" uint32_t Array_InternalArray__get_Item_TisUInt32_t752_m25100_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt32_t752_m25100(__this, ___index, method) (( uint32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisUInt32_t752_m25100_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisUInt32_t752_m25100_GenericMethod;
extern "C" uint32_t Array_InternalArray__get_Item_TisUInt32_t752_m25100_gshared (Array_t * __this, int32_t ___index, MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		int32_t L_3 = ___index;
		ArrayGetGenericValueImpl (__this, L_3, (&V_0));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.UInt32>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisUInt32_t752_m25099_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.UInt32>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisUInt32_t752_m25101_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.UInt32>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.UInt32>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisUInt32_t752_m25101_gshared (Array_t * __this, uint32_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisUInt32_t752_m25101(__this, ___item, method) (( void (*) (Array_t *, uint32_t, MethodInfo*))Array_InternalArray__ICollection_Add_TisUInt32_t752_m25101_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.UInt32>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Add_TisUInt32_t752_m25101_GenericMethod;
extern "C" void Array_InternalArray__ICollection_Add_TisUInt32_t752_m25101_gshared (Array_t * __this, uint32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo UInt32_t752_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.UInt32>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisUInt32_t752_m25102_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.UInt32>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.UInt32>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisUInt32_t752_m25102_gshared (Array_t * __this, uint32_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisUInt32_t752_m25102(__this, ___item, method) (( bool (*) (Array_t *, uint32_t, MethodInfo*))Array_InternalArray__ICollection_Contains_TisUInt32_t752_m25102_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.UInt32>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Contains_TisUInt32_t752_m25102_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Contains_TisUInt32_t752_m25102_gshared (Array_t * __this, uint32_t ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		uint32_t L_5 = ___item;
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_8 = V_2;
		uint32_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		uint32_t L_11 = V_2;
		uint32_t L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.UInt32>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisUInt32_t752_m25103_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.UInt32>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.UInt32>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisUInt32_t752_m25103_gshared (Array_t * __this, UInt32U5BU5D_t1257* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisUInt32_t752_m25103(__this, ___array, ___index, method) (( void (*) (Array_t *, UInt32U5BU5D_t1257*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisUInt32_t752_m25103_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.UInt32>(T[],System.Int32)
extern Il2CppGenericMethod Array_InternalArray__ICollection_CopyTo_TisUInt32_t752_m25103_GenericMethod;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisUInt32_t752_m25103_gshared (Array_t * __this, UInt32U5BU5D_t1257* ___array, int32_t ___index, MethodInfo* method)
{
	{
		UInt32U5BU5D_t1257* L_0 = ___array;
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
		int32_t L_2 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_4 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_4, L_3, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		int32_t L_6 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		UInt32U5BU5D_t1257* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = Array_GetLowerBound_m7182(L_7, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		UInt32U5BU5D_t1257* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_GetLength_m478(L_9, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t395 * L_11 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_11, (String_t*) &_stringLiteral1172, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		UInt32U5BU5D_t1257* L_12 = ___array;
		NullCheck(L_12);
		int32_t L_13 = Array_get_Rank_m5237(L_12, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_15 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_15, L_14, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_18 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_18, (String_t*) &_stringLiteral381, L_17, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		UInt32U5BU5D_t1257* L_20 = ___array;
		int32_t L_21 = ___index;
		int32_t L_22 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		Array_Copy_m7220(NULL /*static, unused*/, __this, L_19, (Array_t *)(Array_t *)L_20, L_21, L_22, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.UInt32>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisUInt32_t752_m25104_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.UInt32>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.UInt32>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisUInt32_t752_m25104_gshared (Array_t * __this, uint32_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisUInt32_t752_m25104(__this, ___item, method) (( bool (*) (Array_t *, uint32_t, MethodInfo*))Array_InternalArray__ICollection_Remove_TisUInt32_t752_m25104_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.UInt32>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Remove_TisUInt32_t752_m25104_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Remove_TisUInt32_t752_m25104_gshared (Array_t * __this, uint32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.UInt32>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisUInt32_t752_m25105_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.UInt32>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.UInt32>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisUInt32_t752_m25105_gshared (Array_t * __this, uint32_t ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisUInt32_t752_m25105(__this, ___item, method) (( int32_t (*) (Array_t *, uint32_t, MethodInfo*))Array_InternalArray__IndexOf_TisUInt32_t752_m25105_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.UInt32>(T)
extern Il2CppGenericMethod Array_InternalArray__IndexOf_TisUInt32_t752_m25105_GenericMethod;
extern "C" int32_t Array_InternalArray__IndexOf_TisUInt32_t752_m25105_gshared (Array_t * __this, uint32_t ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		uint32_t L_5 = ___item;
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		uint32_t L_8 = V_2;
		uint32_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		uint32_t L_14 = ___item;
		uint32_t L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.UInt32>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisUInt32_t752_m25106_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.UInt32>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.UInt32>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisUInt32_t752_m25106_gshared (Array_t * __this, int32_t ___index, uint32_t ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisUInt32_t752_m25106(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, uint32_t, MethodInfo*))Array_InternalArray__Insert_TisUInt32_t752_m25106_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.UInt32>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__Insert_TisUInt32_t752_m25106_GenericMethod;
extern "C" void Array_InternalArray__Insert_TisUInt32_t752_m25106_gshared (Array_t * __this, int32_t ___index, uint32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.UInt32>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisUInt32_t752_m25107_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.UInt32>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisUInt32_t752_m25108_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.UInt32>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.UInt32>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisUInt32_t752_m25108_gshared (Array_t * __this, int32_t ___index, uint32_t ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisUInt32_t752_m25108(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, uint32_t, MethodInfo*))Array_InternalArray__set_Item_TisUInt32_t752_m25108_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.UInt32>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__set_Item_TisUInt32_t752_m25108_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisUInt32_t752_m25108_gshared (Array_t * __this, int32_t ___index, uint32_t ___item, MethodInfo* method)
{
	static bool Array_InternalArray__set_Item_TisUInt32_t752_m25108_init;
	if (!Array_InternalArray__set_Item_TisUInt32_t752_m25108_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Array_InternalArray__set_Item_TisUInt32_t752_m25108_init = true;
	}
	ObjectU5BU5D_t76* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		V_0 = ((ObjectU5BU5D_t76*)IsInst(__this, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t76* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t76* L_4 = V_0;
		int32_t L_5 = ___index;
		uint32_t L_6 = ___item;
		uint32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		ArraySetGenericValueImpl (__this, L_9, (&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.UInt32>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisUInt32_t752_m25107_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_190.h"
extern TypeInfo InternalEnumerator_1_t3457_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_190MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3457_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21584_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21584_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.UInt32>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisUInt32_t752_m25109_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.UInt32>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.UInt32>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisUInt32_t752_m25109_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisUInt32_t752_m25109(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisUInt32_t752_m25109_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.UInt32>()
extern Il2CppGenericMethod Array_InternalArray__IEnumerable_GetEnumerator_TisUInt32_t752_m25109_GenericMethod;
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisUInt32_t752_m25109_gshared (Array_t * __this, MethodInfo* method)
{
	{
		InternalEnumerator_1_t3457  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t3457 *, Array_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t3457  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Object>(System.Int32,!!0&)
// Declaration System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.UInt32>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIComparable_1_t1992_m25110_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt32>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t1992_m25111_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m22110_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m22110(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// Declaration T System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt32>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt32>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t1992_m25111(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt32>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.UInt32>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIComparable_1_t1992_m25110_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.UInt32>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIComparable_1_t1992_m25112_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Object>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Object>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared (Array_t * __this, Object_t * ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisObject_t_m22114(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.UInt32>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.UInt32>>(T)
#define Array_InternalArray__ICollection_Add_TisIComparable_1_t1992_m25112(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.UInt32>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_1_t1992_il2cpp_TypeInfo;
extern Il2CppType IComparable_1_t1992_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.UInt32>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIComparable_1_t1992_m25113_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Object>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Object>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared (Array_t * __this, Object_t * ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisObject_t_m22116(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.UInt32>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.UInt32>>(T)
#define Array_InternalArray__ICollection_Contains_TisIComparable_1_t1992_m25113(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.UInt32>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.UInt32>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t1992_m25114_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Object>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Object>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared (Array_t * __this, ObjectU5BU5D_t76* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118(__this, ___array, ___index, method) (( void (*) (Array_t *, ObjectU5BU5D_t76*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.UInt32>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.UInt32>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t1992_m25114(__this, ___array, ___index, method) (( void (*) (Array_t *, IComparable_1U5BU5D_t3796*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.UInt32>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.UInt32>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIComparable_1_t1992_m25115_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Object>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Object>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared (Array_t * __this, Object_t * ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisObject_t_m22119(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.UInt32>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.UInt32>>(T)
#define Array_InternalArray__ICollection_Remove_TisIComparable_1_t1992_m25115(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.UInt32>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.UInt32>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIComparable_1_t1992_m25116_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Object>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Object>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisObject_t_m22120_gshared (Array_t * __this, Object_t * ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisObject_t_m22120(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.UInt32>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.UInt32>>(T)
#define Array_InternalArray__IndexOf_TisIComparable_1_t1992_m25116(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.UInt32>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.UInt32>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIComparable_1_t1992_m25117_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Object>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Object>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisObject_t_m22121_gshared (Array_t * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisObject_t_m22121(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// Declaration System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.UInt32>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.UInt32>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIComparable_1_t1992_m25117(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.UInt32>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Object>(System.Int32,!!0&)
// Declaration System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.UInt32>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIComparable_1_t1992_m25118_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.UInt32>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIComparable_1_t1992_m25119_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Object>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Object>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisObject_t_m22123_gshared (Array_t * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisObject_t_m22123(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// Declaration System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.UInt32>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.UInt32>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIComparable_1_t1992_m25119(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.UInt32>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.UInt32>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIComparable_1_t1992_m25118_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_191.h"
extern TypeInfo InternalEnumerator_1_t3458_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_191MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3458_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21589_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21589_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.UInt32>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t1992_m25120_MethodInfo;
struct Array_t;
struct Array_t;
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_0.h"
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Object>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Object>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.UInt32>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.UInt32>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t1992_m25120(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.UInt32>>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.UInt32>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIEquatable_1_t1993_m25121_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt32>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t1993_m25122_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt32>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt32>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t1993_m25122(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt32>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.UInt32>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIEquatable_1_t1993_m25121_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.UInt32>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIEquatable_1_t1993_m25123_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.UInt32>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.UInt32>>(T)
#define Array_InternalArray__ICollection_Add_TisIEquatable_1_t1993_m25123(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.UInt32>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IEquatable_1_t1993_il2cpp_TypeInfo;
extern Il2CppType IEquatable_1_t1993_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.UInt32>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIEquatable_1_t1993_m25124_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.UInt32>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.UInt32>>(T)
#define Array_InternalArray__ICollection_Contains_TisIEquatable_1_t1993_m25124(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.UInt32>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.UInt32>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t1993_m25125_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.UInt32>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.UInt32>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t1993_m25125(__this, ___array, ___index, method) (( void (*) (Array_t *, IEquatable_1U5BU5D_t3797*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.UInt32>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.UInt32>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIEquatable_1_t1993_m25126_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.UInt32>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.UInt32>>(T)
#define Array_InternalArray__ICollection_Remove_TisIEquatable_1_t1993_m25126(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.UInt32>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.UInt32>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIEquatable_1_t1993_m25127_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.UInt32>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.UInt32>>(T)
#define Array_InternalArray__IndexOf_TisIEquatable_1_t1993_m25127(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.UInt32>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.UInt32>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIEquatable_1_t1993_m25128_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.UInt32>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.UInt32>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIEquatable_1_t1993_m25128(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.UInt32>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.UInt32>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIEquatable_1_t1993_m25129_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.UInt32>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIEquatable_1_t1993_m25130_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.UInt32>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.UInt32>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIEquatable_1_t1993_m25130(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.UInt32>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.UInt32>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIEquatable_1_t1993_m25129_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_192.h"
extern TypeInfo InternalEnumerator_1_t3459_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_192MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3459_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21594_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21594_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.UInt32>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t1993_m25131_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.UInt32>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.UInt32>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t1993_m25131(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.UInt32>>()
#ifndef _MSC_VER
#else
#endif

// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<Mono.Math.BigInteger>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisBigInteger_t1253_m25132_GenericMethod;
// T System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisBigInteger_t1253_m25133_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
// T System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#define Array_InternalArray__get_Item_TisBigInteger_t1253_m25133(__this, ___index, method) (( BigInteger_t1253 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<Mono.Math.BigInteger>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisBigInteger_t1253_m25132_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<Mono.Math.BigInteger>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisBigInteger_t1253_m25134_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<Mono.Math.BigInteger>(T)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Math.BigInteger>(T)
#define Array_InternalArray__ICollection_Add_TisBigInteger_t1253_m25134(__this, ___item, method) (( void (*) (Array_t *, BigInteger_t1253 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Math.BigInteger>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo BigInteger_t1253_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Math.BigInteger>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisBigInteger_t1253_m25135_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Math.BigInteger>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Math.BigInteger>(T)
#define Array_InternalArray__ICollection_Contains_TisBigInteger_t1253_m25135(__this, ___item, method) (( bool (*) (Array_t *, BigInteger_t1253 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Math.BigInteger>(T)
#ifndef _MSC_VER
#else
#endif

#include "Mono.Security_ArrayTypes.h"
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Math.BigInteger>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisBigInteger_t1253_m25136_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Math.BigInteger>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Math.BigInteger>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisBigInteger_t1253_m25136(__this, ___array, ___index, method) (( void (*) (Array_t *, BigIntegerU5BU5D_t1256*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Math.BigInteger>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Math.BigInteger>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisBigInteger_t1253_m25137_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Math.BigInteger>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Math.BigInteger>(T)
#define Array_InternalArray__ICollection_Remove_TisBigInteger_t1253_m25137(__this, ___item, method) (( bool (*) (Array_t *, BigInteger_t1253 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Math.BigInteger>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<Mono.Math.BigInteger>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisBigInteger_t1253_m25138_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<Mono.Math.BigInteger>(T)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Math.BigInteger>(T)
#define Array_InternalArray__IndexOf_TisBigInteger_t1253_m25138(__this, ___item, method) (( int32_t (*) (Array_t *, BigInteger_t1253 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Math.BigInteger>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<Mono.Math.BigInteger>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisBigInteger_t1253_m25139_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<Mono.Math.BigInteger>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<Mono.Math.BigInteger>(System.Int32,T)
#define Array_InternalArray__Insert_TisBigInteger_t1253_m25139(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, BigInteger_t1253 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<Mono.Math.BigInteger>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<Mono.Math.BigInteger>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisBigInteger_t1253_m25140_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<Mono.Math.BigInteger>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisBigInteger_t1253_m25141_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<Mono.Math.BigInteger>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<Mono.Math.BigInteger>(System.Int32,T)
#define Array_InternalArray__set_Item_TisBigInteger_t1253_m25141(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, BigInteger_t1253 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<Mono.Math.BigInteger>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<Mono.Math.BigInteger>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisBigInteger_t1253_m25140_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_193.h"
extern TypeInfo InternalEnumerator_1_t3460_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_193MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3460_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21599_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21599_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Math.BigInteger>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisBigInteger_t1253_m25142_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Math.BigInteger>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Math.BigInteger>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisBigInteger_t1253_m25142(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Math.BigInteger>()
#ifndef _MSC_VER
#else
#endif

// System.Security.Cryptography.KeySizes
#include "mscorlib_System_Security_Cryptography_KeySizes.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Security.Cryptography.KeySizes>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisKeySizes_t1374_m25143_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Security.Cryptography.KeySizes>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisKeySizes_t1374_m25144_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Security.Cryptography.KeySizes>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Security.Cryptography.KeySizes>(System.Int32)
#define Array_InternalArray__get_Item_TisKeySizes_t1374_m25144(__this, ___index, method) (( KeySizes_t1374 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Security.Cryptography.KeySizes>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Security.Cryptography.KeySizes>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisKeySizes_t1374_m25143_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.KeySizes>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisKeySizes_t1374_m25145_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.KeySizes>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.KeySizes>(T)
#define Array_InternalArray__ICollection_Add_TisKeySizes_t1374_m25145(__this, ___item, method) (( void (*) (Array_t *, KeySizes_t1374 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.KeySizes>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo KeySizes_t1374_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.KeySizes>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisKeySizes_t1374_m25146_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.KeySizes>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.KeySizes>(T)
#define Array_InternalArray__ICollection_Contains_TisKeySizes_t1374_m25146(__this, ___item, method) (( bool (*) (Array_t *, KeySizes_t1374 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.KeySizes>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.KeySizes>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisKeySizes_t1374_m25147_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.KeySizes>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.KeySizes>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisKeySizes_t1374_m25147(__this, ___array, ___index, method) (( void (*) (Array_t *, KeySizesU5BU5D_t1281*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.KeySizes>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.KeySizes>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisKeySizes_t1374_m25148_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.KeySizes>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.KeySizes>(T)
#define Array_InternalArray__ICollection_Remove_TisKeySizes_t1374_m25148(__this, ___item, method) (( bool (*) (Array_t *, KeySizes_t1374 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.KeySizes>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.KeySizes>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisKeySizes_t1374_m25149_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.KeySizes>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.KeySizes>(T)
#define Array_InternalArray__IndexOf_TisKeySizes_t1374_m25149(__this, ___item, method) (( int32_t (*) (Array_t *, KeySizes_t1374 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.KeySizes>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.KeySizes>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisKeySizes_t1374_m25150_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.KeySizes>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.KeySizes>(System.Int32,T)
#define Array_InternalArray__Insert_TisKeySizes_t1374_m25150(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeySizes_t1374 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.KeySizes>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Security.Cryptography.KeySizes>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisKeySizes_t1374_m25151_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.KeySizes>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisKeySizes_t1374_m25152_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.KeySizes>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.KeySizes>(System.Int32,T)
#define Array_InternalArray__set_Item_TisKeySizes_t1374_m25152(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeySizes_t1374 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.KeySizes>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Security.Cryptography.KeySizes>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisKeySizes_t1374_m25151_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_194.h"
extern TypeInfo InternalEnumerator_1_t3461_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_194MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3461_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21604_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21604_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.KeySizes>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisKeySizes_t1374_m25153_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.KeySizes>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.KeySizes>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisKeySizes_t1374_m25153(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.KeySizes>()
#ifndef _MSC_VER
#else
#endif

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Int32>(System.Int32,!!0&)
// Declaration System.Void System.Array::GetGenericValueImpl<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisClientCertificateType_t1349_m25154_GenericMethod;
// T System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisClientCertificateType_t1349_m25155_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisInt32_t60_m22251_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt32_t60_m22251(__this, ___index, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t60_m22251_gshared)(__this, ___index, method)
// Declaration T System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
// T System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
#define Array_InternalArray__get_Item_TisClientCertificateType_t1349_m25155(__this, ___index, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t60_m22251_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisClientCertificateType_t1349_m25154_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisClientCertificateType_t1349_m25156_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Int32>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Int32>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisInt32_t60_m22252_gshared (Array_t * __this, int32_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisInt32_t60_m22252(__this, ___item, method) (( void (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__ICollection_Add_TisInt32_t60_m22252_gshared)(__this, ___item, method)
// Declaration System.Void System.Array::InternalArray__ICollection_Add<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
#define Array_InternalArray__ICollection_Add_TisClientCertificateType_t1349_m25156(__this, ___item, method) (( void (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__ICollection_Add_TisInt32_t60_m22252_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo ClientCertificateType_t1349_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisClientCertificateType_t1349_m25157_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Int32>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Int32>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisInt32_t60_m22253_gshared (Array_t * __this, int32_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisInt32_t60_m22253(__this, ___item, method) (( bool (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__ICollection_Contains_TisInt32_t60_m22253_gshared)(__this, ___item, method)
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
#define Array_InternalArray__ICollection_Contains_TisClientCertificateType_t1349_m25157(__this, ___item, method) (( bool (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__ICollection_Contains_TisInt32_t60_m22253_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisClientCertificateType_t1349_m25158_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Int32>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Int32>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisInt32_t60_m22254_gshared (Array_t * __this, Int32U5BU5D_t109* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisInt32_t60_m22254(__this, ___array, ___index, method) (( void (*) (Array_t *, Int32U5BU5D_t109*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisInt32_t60_m22254_gshared)(__this, ___array, ___index, method)
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisClientCertificateType_t1349_m25158(__this, ___array, ___index, method) (( void (*) (Array_t *, ClientCertificateTypeU5BU5D_t1348*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisInt32_t60_m22254_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisClientCertificateType_t1349_m25159_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Int32>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Int32>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisInt32_t60_m22255_gshared (Array_t * __this, int32_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisInt32_t60_m22255(__this, ___item, method) (( bool (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__ICollection_Remove_TisInt32_t60_m22255_gshared)(__this, ___item, method)
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
#define Array_InternalArray__ICollection_Remove_TisClientCertificateType_t1349_m25159(__this, ___item, method) (( bool (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__ICollection_Remove_TisInt32_t60_m22255_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisClientCertificateType_t1349_m25160_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Int32>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Int32>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisInt32_t60_m22256_gshared (Array_t * __this, int32_t ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisInt32_t60_m22256(__this, ___item, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__IndexOf_TisInt32_t60_m22256_gshared)(__this, ___item, method)
// Declaration System.Int32 System.Array::InternalArray__IndexOf<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
#define Array_InternalArray__IndexOf_TisClientCertificateType_t1349_m25160(__this, ___item, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__IndexOf_TisInt32_t60_m22256_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisClientCertificateType_t1349_m25161_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Int32>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Int32>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisInt32_t60_m22257_gshared (Array_t * __this, int32_t ___index, int32_t ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisInt32_t60_m22257(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int32_t, MethodInfo*))Array_InternalArray__Insert_TisInt32_t60_m22257_gshared)(__this, ___index, ___item, method)
// Declaration System.Void System.Array::InternalArray__Insert<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,T)
#define Array_InternalArray__Insert_TisClientCertificateType_t1349_m25161(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int32_t, MethodInfo*))Array_InternalArray__Insert_TisInt32_t60_m22257_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Int32>(System.Int32,!!0&)
// Declaration System.Void System.Array::SetGenericValueImpl<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisClientCertificateType_t1349_m25162_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisClientCertificateType_t1349_m25163_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Int32>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Int32>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisInt32_t60_m22259_gshared (Array_t * __this, int32_t ___index, int32_t ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisInt32_t60_m22259(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int32_t, MethodInfo*))Array_InternalArray__set_Item_TisInt32_t60_m22259_gshared)(__this, ___index, ___item, method)
// Declaration System.Void System.Array::InternalArray__set_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,T)
#define Array_InternalArray__set_Item_TisClientCertificateType_t1349_m25163(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int32_t, MethodInfo*))Array_InternalArray__set_Item_TisInt32_t60_m22259_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisClientCertificateType_t1349_m25162_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_195.h"
extern TypeInfo InternalEnumerator_1_t3462_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_195MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3462_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21609_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21609_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisClientCertificateType_t1349_m25164_MethodInfo;
struct Array_t;
struct Array_t;
// System.Array/InternalEnumerator`1<System.Int32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_11.h"
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Int32>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Int32>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisInt32_t60_m22260_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisInt32_t60_m22260(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisInt32_t60_m22260_gshared)(__this, method)
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisClientCertificateType_t1349_m25164(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisInt32_t60_m22260_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>()
#ifndef _MSC_VER
#else
#endif

// System.Int16
#include "mscorlib_System_Int16.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Int16>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisInt16_t434_m25165_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisInt16_t434_m25166_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern "C" int16_t Array_InternalArray__get_Item_TisInt16_t434_m25166_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt16_t434_m25166(__this, ___index, method) (( int16_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt16_t434_m25166_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisInt16_t434_m25166_GenericMethod;
extern "C" int16_t Array_InternalArray__get_Item_TisInt16_t434_m25166_gshared (Array_t * __this, int32_t ___index, MethodInfo* method)
{
	int16_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		int32_t L_3 = ___index;
		ArrayGetGenericValueImpl (__this, L_3, (&V_0));
		int16_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Int16>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisInt16_t434_m25165_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Int16>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisInt16_t434_m25167_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Int16>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Int16>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisInt16_t434_m25167_gshared (Array_t * __this, int16_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisInt16_t434_m25167(__this, ___item, method) (( void (*) (Array_t *, int16_t, MethodInfo*))Array_InternalArray__ICollection_Add_TisInt16_t434_m25167_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Int16>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Add_TisInt16_t434_m25167_GenericMethod;
extern "C" void Array_InternalArray__ICollection_Add_TisInt16_t434_m25167_gshared (Array_t * __this, int16_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Int16_t434_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Int16>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisInt16_t434_m25168_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Int16>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Int16>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisInt16_t434_m25168_gshared (Array_t * __this, int16_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisInt16_t434_m25168(__this, ___item, method) (( bool (*) (Array_t *, int16_t, MethodInfo*))Array_InternalArray__ICollection_Contains_TisInt16_t434_m25168_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Int16>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Contains_TisInt16_t434_m25168_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Contains_TisInt16_t434_m25168_gshared (Array_t * __this, int16_t ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		int16_t L_5 = ___item;
		int16_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		int16_t L_8 = V_2;
		int16_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int16_t L_11 = V_2;
		int16_t L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Int16>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisInt16_t434_m25169_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Int16>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Int16>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisInt16_t434_m25169_gshared (Array_t * __this, Int16U5BU5D_t1955* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisInt16_t434_m25169(__this, ___array, ___index, method) (( void (*) (Array_t *, Int16U5BU5D_t1955*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisInt16_t434_m25169_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Int16>(T[],System.Int32)
extern Il2CppGenericMethod Array_InternalArray__ICollection_CopyTo_TisInt16_t434_m25169_GenericMethod;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisInt16_t434_m25169_gshared (Array_t * __this, Int16U5BU5D_t1955* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Int16U5BU5D_t1955* L_0 = ___array;
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
		int32_t L_2 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_4 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_4, L_3, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		int32_t L_6 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		Int16U5BU5D_t1955* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = Array_GetLowerBound_m7182(L_7, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		Int16U5BU5D_t1955* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_GetLength_m478(L_9, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t395 * L_11 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_11, (String_t*) &_stringLiteral1172, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		Int16U5BU5D_t1955* L_12 = ___array;
		NullCheck(L_12);
		int32_t L_13 = Array_get_Rank_m5237(L_12, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_15 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_15, L_14, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_18 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_18, (String_t*) &_stringLiteral381, L_17, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		Int16U5BU5D_t1955* L_20 = ___array;
		int32_t L_21 = ___index;
		int32_t L_22 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		Array_Copy_m7220(NULL /*static, unused*/, __this, L_19, (Array_t *)(Array_t *)L_20, L_21, L_22, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Int16>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisInt16_t434_m25170_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Int16>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Int16>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisInt16_t434_m25170_gshared (Array_t * __this, int16_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisInt16_t434_m25170(__this, ___item, method) (( bool (*) (Array_t *, int16_t, MethodInfo*))Array_InternalArray__ICollection_Remove_TisInt16_t434_m25170_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Int16>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Remove_TisInt16_t434_m25170_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Remove_TisInt16_t434_m25170_gshared (Array_t * __this, int16_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Int16>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisInt16_t434_m25171_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Int16>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Int16>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisInt16_t434_m25171_gshared (Array_t * __this, int16_t ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisInt16_t434_m25171(__this, ___item, method) (( int32_t (*) (Array_t *, int16_t, MethodInfo*))Array_InternalArray__IndexOf_TisInt16_t434_m25171_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Int16>(T)
extern Il2CppGenericMethod Array_InternalArray__IndexOf_TisInt16_t434_m25171_GenericMethod;
extern "C" int32_t Array_InternalArray__IndexOf_TisInt16_t434_m25171_gshared (Array_t * __this, int16_t ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		int16_t L_5 = ___item;
		int16_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		int16_t L_8 = V_2;
		int16_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		int16_t L_14 = ___item;
		int16_t L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Int16>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisInt16_t434_m25172_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Int16>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Int16>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisInt16_t434_m25172_gshared (Array_t * __this, int32_t ___index, int16_t ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisInt16_t434_m25172(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int16_t, MethodInfo*))Array_InternalArray__Insert_TisInt16_t434_m25172_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Int16>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__Insert_TisInt16_t434_m25172_GenericMethod;
extern "C" void Array_InternalArray__Insert_TisInt16_t434_m25172_gshared (Array_t * __this, int32_t ___index, int16_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Int16>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisInt16_t434_m25173_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Int16>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisInt16_t434_m25174_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Int16>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Int16>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisInt16_t434_m25174_gshared (Array_t * __this, int32_t ___index, int16_t ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisInt16_t434_m25174(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int16_t, MethodInfo*))Array_InternalArray__set_Item_TisInt16_t434_m25174_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Int16>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__set_Item_TisInt16_t434_m25174_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisInt16_t434_m25174_gshared (Array_t * __this, int32_t ___index, int16_t ___item, MethodInfo* method)
{
	static bool Array_InternalArray__set_Item_TisInt16_t434_m25174_init;
	if (!Array_InternalArray__set_Item_TisInt16_t434_m25174_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Array_InternalArray__set_Item_TisInt16_t434_m25174_init = true;
	}
	ObjectU5BU5D_t76* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		V_0 = ((ObjectU5BU5D_t76*)IsInst(__this, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t76* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t76* L_4 = V_0;
		int32_t L_5 = ___index;
		int16_t L_6 = ___item;
		int16_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		ArraySetGenericValueImpl (__this, L_9, (&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Int16>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisInt16_t434_m25173_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_196.h"
extern TypeInfo InternalEnumerator_1_t3463_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_196MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3463_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21614_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21614_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Int16>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisInt16_t434_m25175_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Int16>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Int16>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisInt16_t434_m25175_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisInt16_t434_m25175(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisInt16_t434_m25175_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Int16>()
extern Il2CppGenericMethod Array_InternalArray__IEnumerable_GetEnumerator_TisInt16_t434_m25175_GenericMethod;
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisInt16_t434_m25175_gshared (Array_t * __this, MethodInfo* method)
{
	{
		InternalEnumerator_1_t3463  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t3463 *, Array_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t3463  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.Int16>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIComparable_1_t2003_m25176_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.Int16>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2003_m25177_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.IComparable`1<System.Int16>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.Int16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2003_m25177(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.Int16>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.Int16>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIComparable_1_t2003_m25176_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Int16>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIComparable_1_t2003_m25178_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Int16>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Int16>>(T)
#define Array_InternalArray__ICollection_Add_TisIComparable_1_t2003_m25178(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Int16>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_1_t2003_il2cpp_TypeInfo;
extern Il2CppType IComparable_1_t2003_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Int16>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIComparable_1_t2003_m25179_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Int16>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Int16>>(T)
#define Array_InternalArray__ICollection_Contains_TisIComparable_1_t2003_m25179(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Int16>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Int16>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t2003_m25180_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Int16>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Int16>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t2003_m25180(__this, ___array, ___index, method) (( void (*) (Array_t *, IComparable_1U5BU5D_t3799*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Int16>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Int16>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIComparable_1_t2003_m25181_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Int16>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Int16>>(T)
#define Array_InternalArray__ICollection_Remove_TisIComparable_1_t2003_m25181(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Int16>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Int16>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIComparable_1_t2003_m25182_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Int16>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Int16>>(T)
#define Array_InternalArray__IndexOf_TisIComparable_1_t2003_m25182(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Int16>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Int16>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIComparable_1_t2003_m25183_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Int16>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Int16>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIComparable_1_t2003_m25183(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Int16>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.Int16>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIComparable_1_t2003_m25184_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Int16>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIComparable_1_t2003_m25185_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Int16>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Int16>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIComparable_1_t2003_m25185(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Int16>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.Int16>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIComparable_1_t2003_m25184_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_197.h"
extern TypeInfo InternalEnumerator_1_t3464_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_197MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3464_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21619_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21619_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Int16>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t2003_m25186_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Int16>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Int16>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t2003_m25186(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Int16>>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.Int16>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIEquatable_1_t2004_m25187_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int16>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2004_m25188_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int16>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2004_m25188(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int16>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.Int16>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIEquatable_1_t2004_m25187_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Int16>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIEquatable_1_t2004_m25189_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Int16>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Int16>>(T)
#define Array_InternalArray__ICollection_Add_TisIEquatable_1_t2004_m25189(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Int16>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IEquatable_1_t2004_il2cpp_TypeInfo;
extern Il2CppType IEquatable_1_t2004_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Int16>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIEquatable_1_t2004_m25190_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Int16>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Int16>>(T)
#define Array_InternalArray__ICollection_Contains_TisIEquatable_1_t2004_m25190(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Int16>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Int16>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t2004_m25191_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Int16>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Int16>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t2004_m25191(__this, ___array, ___index, method) (( void (*) (Array_t *, IEquatable_1U5BU5D_t3800*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Int16>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Int16>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIEquatable_1_t2004_m25192_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Int16>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Int16>>(T)
#define Array_InternalArray__ICollection_Remove_TisIEquatable_1_t2004_m25192(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Int16>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Int16>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIEquatable_1_t2004_m25193_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Int16>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Int16>>(T)
#define Array_InternalArray__IndexOf_TisIEquatable_1_t2004_m25193(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Int16>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Int16>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIEquatable_1_t2004_m25194_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Int16>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Int16>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIEquatable_1_t2004_m25194(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Int16>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.Int16>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIEquatable_1_t2004_m25195_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Int16>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIEquatable_1_t2004_m25196_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Int16>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Int16>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIEquatable_1_t2004_m25196(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Int16>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.Int16>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIEquatable_1_t2004_m25195_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_198.h"
extern TypeInfo InternalEnumerator_1_t3465_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_198MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3465_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21624_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21624_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Int16>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t2004_m25197_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Int16>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Int16>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t2004_m25197(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Int16>>()
#ifndef _MSC_VER
#else
#endif

// System.SByte
#include "mscorlib_System_SByte.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.SByte>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisSByte_t115_m25198_GenericMethod;
// T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisSByte_t115_m25199_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
// T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern "C" int8_t Array_InternalArray__get_Item_TisSByte_t115_m25199_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisSByte_t115_m25199(__this, ___index, method) (( int8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisSByte_t115_m25199_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSByte_t115_m25199_GenericMethod;
extern "C" int8_t Array_InternalArray__get_Item_TisSByte_t115_m25199_gshared (Array_t * __this, int32_t ___index, MethodInfo* method)
{
	int8_t V_0 = 0x0;
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		int32_t L_3 = ___index;
		ArrayGetGenericValueImpl (__this, L_3, (&V_0));
		int8_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.SByte>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisSByte_t115_m25198_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.SByte>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisSByte_t115_m25200_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.SByte>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.SByte>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisSByte_t115_m25200_gshared (Array_t * __this, int8_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisSByte_t115_m25200(__this, ___item, method) (( void (*) (Array_t *, int8_t, MethodInfo*))Array_InternalArray__ICollection_Add_TisSByte_t115_m25200_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.SByte>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Add_TisSByte_t115_m25200_GenericMethod;
extern "C" void Array_InternalArray__ICollection_Add_TisSByte_t115_m25200_gshared (Array_t * __this, int8_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo SByte_t115_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.SByte>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisSByte_t115_m25201_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.SByte>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.SByte>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisSByte_t115_m25201_gshared (Array_t * __this, int8_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisSByte_t115_m25201(__this, ___item, method) (( bool (*) (Array_t *, int8_t, MethodInfo*))Array_InternalArray__ICollection_Contains_TisSByte_t115_m25201_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.SByte>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Contains_TisSByte_t115_m25201_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Contains_TisSByte_t115_m25201_gshared (Array_t * __this, int8_t ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		int8_t L_5 = ___item;
		int8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		int8_t L_8 = V_2;
		int8_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int8_t L_11 = V_2;
		int8_t L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.SByte>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisSByte_t115_m25202_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.SByte>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.SByte>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSByte_t115_m25202_gshared (Array_t * __this, SByteU5BU5D_t1838* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisSByte_t115_m25202(__this, ___array, ___index, method) (( void (*) (Array_t *, SByteU5BU5D_t1838*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisSByte_t115_m25202_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.SByte>(T[],System.Int32)
extern Il2CppGenericMethod Array_InternalArray__ICollection_CopyTo_TisSByte_t115_m25202_GenericMethod;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSByte_t115_m25202_gshared (Array_t * __this, SByteU5BU5D_t1838* ___array, int32_t ___index, MethodInfo* method)
{
	{
		SByteU5BU5D_t1838* L_0 = ___array;
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
		int32_t L_2 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_4 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_4, L_3, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		int32_t L_6 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		SByteU5BU5D_t1838* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = Array_GetLowerBound_m7182(L_7, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		SByteU5BU5D_t1838* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_GetLength_m478(L_9, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t395 * L_11 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_11, (String_t*) &_stringLiteral1172, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		SByteU5BU5D_t1838* L_12 = ___array;
		NullCheck(L_12);
		int32_t L_13 = Array_get_Rank_m5237(L_12, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_15 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_15, L_14, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_18 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_18, (String_t*) &_stringLiteral381, L_17, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		SByteU5BU5D_t1838* L_20 = ___array;
		int32_t L_21 = ___index;
		int32_t L_22 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		Array_Copy_m7220(NULL /*static, unused*/, __this, L_19, (Array_t *)(Array_t *)L_20, L_21, L_22, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.SByte>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisSByte_t115_m25203_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.SByte>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.SByte>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisSByte_t115_m25203_gshared (Array_t * __this, int8_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisSByte_t115_m25203(__this, ___item, method) (( bool (*) (Array_t *, int8_t, MethodInfo*))Array_InternalArray__ICollection_Remove_TisSByte_t115_m25203_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.SByte>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Remove_TisSByte_t115_m25203_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Remove_TisSByte_t115_m25203_gshared (Array_t * __this, int8_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.SByte>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisSByte_t115_m25204_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.SByte>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.SByte>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisSByte_t115_m25204_gshared (Array_t * __this, int8_t ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisSByte_t115_m25204(__this, ___item, method) (( int32_t (*) (Array_t *, int8_t, MethodInfo*))Array_InternalArray__IndexOf_TisSByte_t115_m25204_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.SByte>(T)
extern Il2CppGenericMethod Array_InternalArray__IndexOf_TisSByte_t115_m25204_GenericMethod;
extern "C" int32_t Array_InternalArray__IndexOf_TisSByte_t115_m25204_gshared (Array_t * __this, int8_t ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		int8_t L_5 = ___item;
		int8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		int8_t L_8 = V_2;
		int8_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		int8_t L_14 = ___item;
		int8_t L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.SByte>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisSByte_t115_m25205_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.SByte>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.SByte>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisSByte_t115_m25205_gshared (Array_t * __this, int32_t ___index, int8_t ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisSByte_t115_m25205(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int8_t, MethodInfo*))Array_InternalArray__Insert_TisSByte_t115_m25205_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.SByte>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__Insert_TisSByte_t115_m25205_GenericMethod;
extern "C" void Array_InternalArray__Insert_TisSByte_t115_m25205_gshared (Array_t * __this, int32_t ___index, int8_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.SByte>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisSByte_t115_m25206_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.SByte>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisSByte_t115_m25207_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.SByte>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.SByte>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisSByte_t115_m25207_gshared (Array_t * __this, int32_t ___index, int8_t ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisSByte_t115_m25207(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int8_t, MethodInfo*))Array_InternalArray__set_Item_TisSByte_t115_m25207_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.SByte>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__set_Item_TisSByte_t115_m25207_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisSByte_t115_m25207_gshared (Array_t * __this, int32_t ___index, int8_t ___item, MethodInfo* method)
{
	static bool Array_InternalArray__set_Item_TisSByte_t115_m25207_init;
	if (!Array_InternalArray__set_Item_TisSByte_t115_m25207_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Array_InternalArray__set_Item_TisSByte_t115_m25207_init = true;
	}
	ObjectU5BU5D_t76* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		V_0 = ((ObjectU5BU5D_t76*)IsInst(__this, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t76* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t76* L_4 = V_0;
		int32_t L_5 = ___index;
		int8_t L_6 = ___item;
		int8_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		ArraySetGenericValueImpl (__this, L_9, (&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.SByte>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisSByte_t115_m25206_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_199.h"
extern TypeInfo InternalEnumerator_1_t3466_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_199MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3466_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21629_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21629_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.SByte>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisSByte_t115_m25208_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.SByte>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.SByte>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSByte_t115_m25208_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisSByte_t115_m25208(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisSByte_t115_m25208_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.SByte>()
extern Il2CppGenericMethod Array_InternalArray__IEnumerable_GetEnumerator_TisSByte_t115_m25208_GenericMethod;
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSByte_t115_m25208_gshared (Array_t * __this, MethodInfo* method)
{
	{
		InternalEnumerator_1_t3466  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t3466 *, Array_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t3466  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.SByte>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIComparable_1_t2000_m25209_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.SByte>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2000_m25210_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.IComparable`1<System.SByte>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.SByte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2000_m25210(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.SByte>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.SByte>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIComparable_1_t2000_m25209_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.SByte>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIComparable_1_t2000_m25211_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.SByte>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.SByte>>(T)
#define Array_InternalArray__ICollection_Add_TisIComparable_1_t2000_m25211(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.SByte>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_1_t2000_il2cpp_TypeInfo;
extern Il2CppType IComparable_1_t2000_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.SByte>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIComparable_1_t2000_m25212_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.SByte>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.SByte>>(T)
#define Array_InternalArray__ICollection_Contains_TisIComparable_1_t2000_m25212(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.SByte>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.SByte>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t2000_m25213_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.SByte>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.SByte>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t2000_m25213(__this, ___array, ___index, method) (( void (*) (Array_t *, IComparable_1U5BU5D_t3801*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.SByte>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.SByte>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIComparable_1_t2000_m25214_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.SByte>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.SByte>>(T)
#define Array_InternalArray__ICollection_Remove_TisIComparable_1_t2000_m25214(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.SByte>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.SByte>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIComparable_1_t2000_m25215_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.SByte>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.SByte>>(T)
#define Array_InternalArray__IndexOf_TisIComparable_1_t2000_m25215(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.SByte>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.SByte>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIComparable_1_t2000_m25216_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.SByte>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.SByte>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIComparable_1_t2000_m25216(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.SByte>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.SByte>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIComparable_1_t2000_m25217_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.SByte>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIComparable_1_t2000_m25218_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.SByte>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.SByte>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIComparable_1_t2000_m25218(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.SByte>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.SByte>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIComparable_1_t2000_m25217_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_200.h"
extern TypeInfo InternalEnumerator_1_t3467_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_200MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3467_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21634_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21634_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.SByte>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t2000_m25219_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.SByte>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.SByte>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t2000_m25219(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.SByte>>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.SByte>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIEquatable_1_t2001_m25220_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.SByte>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2001_m25221_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.IEquatable`1<System.SByte>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.SByte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2001_m25221(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.SByte>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.SByte>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIEquatable_1_t2001_m25220_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.SByte>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIEquatable_1_t2001_m25222_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.SByte>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.SByte>>(T)
#define Array_InternalArray__ICollection_Add_TisIEquatable_1_t2001_m25222(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.SByte>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IEquatable_1_t2001_il2cpp_TypeInfo;
extern Il2CppType IEquatable_1_t2001_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.SByte>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIEquatable_1_t2001_m25223_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.SByte>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.SByte>>(T)
#define Array_InternalArray__ICollection_Contains_TisIEquatable_1_t2001_m25223(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.SByte>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.SByte>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t2001_m25224_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.SByte>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.SByte>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t2001_m25224(__this, ___array, ___index, method) (( void (*) (Array_t *, IEquatable_1U5BU5D_t3802*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.SByte>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.SByte>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIEquatable_1_t2001_m25225_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.SByte>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.SByte>>(T)
#define Array_InternalArray__ICollection_Remove_TisIEquatable_1_t2001_m25225(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.SByte>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.SByte>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIEquatable_1_t2001_m25226_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.SByte>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.SByte>>(T)
#define Array_InternalArray__IndexOf_TisIEquatable_1_t2001_m25226(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.SByte>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.SByte>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIEquatable_1_t2001_m25227_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.SByte>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.SByte>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIEquatable_1_t2001_m25227(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.SByte>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.SByte>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIEquatable_1_t2001_m25228_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.SByte>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIEquatable_1_t2001_m25229_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.SByte>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.SByte>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIEquatable_1_t2001_m25229(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.SByte>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.SByte>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIEquatable_1_t2001_m25228_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_201.h"
extern TypeInfo InternalEnumerator_1_t3468_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_201MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3468_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21639_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21639_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.SByte>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t2001_m25230_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.SByte>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.SByte>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t2001_m25230(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.SByte>>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// System.Array/Swapper
#include "mscorlib_System_Array_Swapper.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object,System.Object>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_TisObject_t_m22246_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, ObjectU5BU5D_t76* p1, int32_t p2, int32_t p3, Object_t* p4, MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m22246(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m22246_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
extern Il2CppGenericMethod Array_Sort_TisObject_t_TisObject_t_m22246_GenericMethod;
// System.Void System.Array::Sort<System.Object>(T[])
extern MethodInfo Array_Sort_TisObject_t_m25231_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(T[])
// System.Void System.Array::Sort<System.Object>(T[])
extern "C" void Array_Sort_TisObject_t_m25231_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, MethodInfo* method);
#define Array_Sort_TisObject_t_m25231(__this /* static, unused */, ___array, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, MethodInfo*))Array_Sort_TisObject_t_m25231_gshared)(__this /* static, unused */, ___array, method)
// System.Void System.Array::Sort<System.Object>(T[])
extern Il2CppGenericMethod Array_Sort_TisObject_t_m25231_GenericMethod;
extern "C" void Array_Sort_TisObject_t_m25231_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		ObjectU5BU5D_t76* L_3 = ___array;
		NullCheck(L_3);
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, (ObjectU5BU5D_t76*)(ObjectU5BU5D_t76*)NULL, 0, (((int32_t)(((Array_t *)L_3)->max_length))), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
extern MethodInfo Array_Sort_TisObject_t_TisObject_t_m25232_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
extern "C" void Array_Sort_TisObject_t_TisObject_t_m25232_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___keys, ObjectU5BU5D_t76* ___items, MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m25232(__this /* static, unused */, ___keys, ___items, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m25232_gshared)(__this /* static, unused */, ___keys, ___items, method)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
extern Il2CppGenericMethod Array_Sort_TisObject_t_TisObject_t_m25232_GenericMethod;
extern "C" void Array_Sort_TisObject_t_TisObject_t_m25232_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___keys, ObjectU5BU5D_t76* ___items, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1207, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t76* L_2 = ___keys;
		ObjectU5BU5D_t76* L_3 = ___items;
		ObjectU5BU5D_t76* L_4 = ___keys;
		NullCheck(L_4);
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, L_3, 0, (((int32_t)(((Array_t *)L_4)->max_length))), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
extern MethodInfo Array_Sort_TisObject_t_m25233_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
// System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
extern "C" void Array_Sort_TisObject_t_m25233_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t* ___comparer, MethodInfo* method);
#define Array_Sort_TisObject_t_m25233(__this /* static, unused */, ___array, ___comparer, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m25233_gshared)(__this /* static, unused */, ___array, ___comparer, method)
// System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
extern Il2CppGenericMethod Array_Sort_TisObject_t_m25233_GenericMethod;
extern "C" void Array_Sort_TisObject_t_m25233_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t* ___comparer, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		ObjectU5BU5D_t76* L_3 = ___array;
		NullCheck(L_3);
		Object_t* L_4 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, (ObjectU5BU5D_t76*)(ObjectU5BU5D_t76*)NULL, 0, (((int32_t)(((Array_t *)L_3)->max_length))), L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
extern MethodInfo Array_Sort_TisObject_t_TisObject_t_m25234_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
extern "C" void Array_Sort_TisObject_t_TisObject_t_m25234_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___keys, ObjectU5BU5D_t76* ___items, Object_t* ___comparer, MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m25234(__this /* static, unused */, ___keys, ___items, ___comparer, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, Object_t*, MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m25234_gshared)(__this /* static, unused */, ___keys, ___items, ___comparer, method)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
extern Il2CppGenericMethod Array_Sort_TisObject_t_TisObject_t_m25234_GenericMethod;
extern "C" void Array_Sort_TisObject_t_TisObject_t_m25234_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___keys, ObjectU5BU5D_t76* ___items, Object_t* ___comparer, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_1, (String_t*) &_stringLiteral1207, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t76* L_2 = ___keys;
		ObjectU5BU5D_t76* L_3 = ___items;
		ObjectU5BU5D_t76* L_4 = ___keys;
		NullCheck(L_4);
		Object_t* L_5 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, L_3, 0, (((int32_t)(((Array_t *)L_4)->max_length))), L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
extern MethodInfo Array_Sort_TisObject_t_m10972_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
// System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
extern "C" void Array_Sort_TisObject_t_m10972_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___index, int32_t ___length, MethodInfo* method);
#define Array_Sort_TisObject_t_m10972(__this /* static, unused */, ___array, ___index, ___length, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, MethodInfo*))Array_Sort_TisObject_t_m10972_gshared)(__this /* static, unused */, ___array, ___index, ___length, method)
// System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
extern Il2CppGenericMethod Array_Sort_TisObject_t_m10972_GenericMethod;
extern "C" void Array_Sort_TisObject_t_m10972_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___index, int32_t ___length, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		int32_t L_3 = ___index;
		int32_t L_4 = ___length;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, (ObjectU5BU5D_t76*)(ObjectU5BU5D_t76*)NULL, L_3, L_4, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
extern MethodInfo Array_Sort_TisObject_t_TisObject_t_m25235_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
extern "C" void Array_Sort_TisObject_t_TisObject_t_m25235_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___keys, ObjectU5BU5D_t76* ___items, int32_t ___index, int32_t ___length, MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m25235(__this /* static, unused */, ___keys, ___items, ___index, ___length, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, int32_t, int32_t, MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m25235_gshared)(__this /* static, unused */, ___keys, ___items, ___index, ___length, method)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
extern Il2CppGenericMethod Array_Sort_TisObject_t_TisObject_t_m25235_GenericMethod;
extern "C" void Array_Sort_TisObject_t_TisObject_t_m25235_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___keys, ObjectU5BU5D_t76* ___items, int32_t ___index, int32_t ___length, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___keys;
		ObjectU5BU5D_t76* L_1 = ___items;
		int32_t L_2 = ___index;
		int32_t L_3 = ___length;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m22431_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, Comparison_1_t2496 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m22431(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, Comparison_1_t2496 *, MethodInfo*))Array_Sort_TisObject_t_m22431_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod Array_Sort_TisObject_t_m22431_GenericMethod;
// System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
extern MethodInfo Array_Sort_TisObject_t_m25236_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
// System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
extern "C" void Array_Sort_TisObject_t_m25236_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Comparison_1_t2496 * ___comparison, MethodInfo* method);
#define Array_Sort_TisObject_t_m25236(__this /* static, unused */, ___array, ___comparison, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Comparison_1_t2496 *, MethodInfo*))Array_Sort_TisObject_t_m25236_gshared)(__this /* static, unused */, ___array, ___comparison, method)
// System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
extern Il2CppGenericMethod Array_Sort_TisObject_t_m25236_GenericMethod;
extern "C" void Array_Sort_TisObject_t_m25236_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Comparison_1_t2496 * ___comparison, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		ObjectU5BU5D_t76* L_3 = ___array;
		NullCheck(L_3);
		Comparison_1_t2496 * L_4 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, Comparison_1_t2496 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, (((int32_t)(((Array_t *)L_3)->max_length))), L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3.h"
extern TypeInfo Predicate_1_t2477_il2cpp_TypeInfo;
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
extern Il2CppType Predicate_1_t2477_0_0_0;
extern MethodInfo Predicate_1_Invoke_m11973_MethodInfo;
extern Il2CppGenericMethod Predicate_1_Invoke_m11973_GenericMethod;
// System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
extern MethodInfo Array_TrueForAll_TisObject_t_m25237_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
// System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
extern "C" bool Array_TrueForAll_TisObject_t_m25237_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method);
#define Array_TrueForAll_TisObject_t_m25237(__this /* static, unused */, ___array, ___match, method) (( bool (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Predicate_1_t2477 *, MethodInfo*))Array_TrueForAll_TisObject_t_m25237_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
extern Il2CppGenericMethod Array_TrueForAll_TisObject_t_m25237_GenericMethod;
extern "C" bool Array_TrueForAll_TisObject_t_m25237_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	Object_t * V_0 = {0};
	ObjectU5BU5D_t76* V_1 = {0};
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		Predicate_1_t2477 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral1212, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t76* L_4 = ___array;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0039;
	}

IL_0022:
	{
		ObjectU5BU5D_t76* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Predicate_1_t2477 * L_8 = ___match;
		Object_t * L_9 = V_0;
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), L_8, L_9);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		ObjectU5BU5D_t76* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5.h"
extern TypeInfo Action_1_t2791_il2cpp_TypeInfo;
extern TypeInfo Void_t75_il2cpp_TypeInfo;
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
extern Il2CppType Action_1_t2791_0_0_0;
extern MethodInfo Action_1_Invoke_m15097_MethodInfo;
extern Il2CppGenericMethod Action_1_Invoke_m15097_GenericMethod;
// System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
extern MethodInfo Array_ForEach_TisObject_t_m25238_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
// System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
extern "C" void Array_ForEach_TisObject_t_m25238_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Action_1_t2791 * ___action, MethodInfo* method);
#define Array_ForEach_TisObject_t_m25238(__this /* static, unused */, ___array, ___action, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Action_1_t2791 *, MethodInfo*))Array_ForEach_TisObject_t_m25238_gshared)(__this /* static, unused */, ___array, ___action, method)
// System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
extern Il2CppGenericMethod Array_ForEach_TisObject_t_m25238_GenericMethod;
extern "C" void Array_ForEach_TisObject_t_m25238_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Action_1_t2791 * ___action, MethodInfo* method)
{
	Object_t * V_0 = {0};
	ObjectU5BU5D_t76* V_1 = {0};
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		Action_1_t2791 * L_2 = ___action;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral1213, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t76* L_4 = ___array;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0035;
	}

IL_0022:
	{
		ObjectU5BU5D_t76* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Action_1_t2791 * L_8 = ___action;
		Object_t * L_9 = V_0;
		NullCheck(L_8);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), L_8, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_t76* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_gen.h"
extern TypeInfo Converter_2_t3469_il2cpp_TypeInfo;
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_genMethodDeclarations.h"
extern Il2CppType Converter_2_t3469_0_0_0;
extern MethodInfo Converter_2_Invoke_m21645_MethodInfo;
extern Il2CppGenericMethod Converter_2_Invoke_m21645_GenericMethod;
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern MethodInfo Array_ConvertAll_TisObject_t_TisObject_t_m25239_MethodInfo;
struct Array_t;
// Declaration TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern "C" ObjectU5BU5D_t76* Array_ConvertAll_TisObject_t_TisObject_t_m25239_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Converter_2_t3469 * ___converter, MethodInfo* method);
#define Array_ConvertAll_TisObject_t_TisObject_t_m25239(__this /* static, unused */, ___array, ___converter, method) (( ObjectU5BU5D_t76* (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Converter_2_t3469 *, MethodInfo*))Array_ConvertAll_TisObject_t_TisObject_t_m25239_gshared)(__this /* static, unused */, ___array, ___converter, method)
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern Il2CppGenericMethod Array_ConvertAll_TisObject_t_TisObject_t_m25239_GenericMethod;
extern "C" ObjectU5BU5D_t76* Array_ConvertAll_TisObject_t_TisObject_t_m25239_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Converter_2_t3469 * ___converter, MethodInfo* method)
{
	ObjectU5BU5D_t76* V_0 = {0};
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		Converter_2_t3469 * L_2 = ___converter;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral1214, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t76* L_4 = ___array;
		NullCheck(L_4);
		V_0 = ((ObjectU5BU5D_t76*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0041;
	}

IL_0029:
	{
		ObjectU5BU5D_t76* L_5 = V_0;
		int32_t L_6 = V_1;
		Converter_2_t3469 * L_7 = ___converter;
		ObjectU5BU5D_t76* L_8 = ___array;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		NullCheck(L_7);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), L_7, (*(Object_t **)(Object_t **)SZArrayLdElema(L_8, L_10)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6)) = (Object_t *)L_11;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t76* L_14 = ___array;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t76* L_15 = V_0;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Int32 System.Array::FindLastIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
// System.Int32 System.Array::FindLastIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
extern "C" int32_t Array_FindLastIndex_TisObject_t_m25240_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, int32_t p2, Predicate_1_t2477 * p3, MethodInfo* method);
#define Array_FindLastIndex_TisObject_t_m25240(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Predicate_1_t2477 *, MethodInfo*))Array_FindLastIndex_TisObject_t_m25240_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
extern Il2CppGenericMethod Array_FindLastIndex_TisObject_t_m25240_GenericMethod;
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
extern MethodInfo Array_FindLastIndex_TisObject_t_m25241_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
extern "C" int32_t Array_FindLastIndex_TisObject_t_m25241_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method);
#define Array_FindLastIndex_TisObject_t_m25241(__this /* static, unused */, ___array, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Predicate_1_t2477 *, MethodInfo*))Array_FindLastIndex_TisObject_t_m25241_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
extern Il2CppGenericMethod Array_FindLastIndex_TisObject_t_m25241_GenericMethod;
extern "C" int32_t Array_FindLastIndex_TisObject_t_m25241_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		ObjectU5BU5D_t76* L_3 = ___array;
		NullCheck(L_3);
		Predicate_1_t2477 * L_4 = ___match;
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Predicate_1_t2477 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ArgumentOutOfRangeException__ctor_m5412_MethodInfo;
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
extern MethodInfo Array_FindLastIndex_TisObject_t_m25240_MethodInfo;
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t Array_FindLastIndex_TisObject_t_m25240_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___startIndex, int32_t ___count, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		Predicate_1_t2477 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral1212, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = ___startIndex;
		ObjectU5BU5D_t76* L_5 = ___array;
		NullCheck(L_5);
		if ((((int32_t)L_4) > ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = ___startIndex;
		int32_t L_7 = ___count;
		ObjectU5BU5D_t76* L_8 = ___array;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))) <= ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t758 * L_9 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5412(L_9, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5412_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0030:
	{
		int32_t L_10 = ___startIndex;
		int32_t L_11 = ___count;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_10+(int32_t)L_11))-(int32_t)1));
		goto IL_004d;
	}

IL_0038:
	{
		Predicate_1_t2477 * L_12 = ___match;
		ObjectU5BU5D_t76* L_13 = ___array;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		NullCheck(L_12);
		bool L_16 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), L_12, (*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)));
		if (!L_16)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}

IL_0049:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18-(int32_t)1));
	}

IL_004d:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = ___startIndex;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ArgumentNullException__ctor_m10146_MethodInfo;
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern MethodInfo Array_FindLastIndex_TisObject_t_m25242_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern "C" int32_t Array_FindLastIndex_TisObject_t_m25242_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___startIndex, Predicate_1_t2477 * ___match, MethodInfo* method);
#define Array_FindLastIndex_TisObject_t_m25242(__this /* static, unused */, ___array, ___startIndex, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, Predicate_1_t2477 *, MethodInfo*))Array_FindLastIndex_TisObject_t_m25242_gshared)(__this /* static, unused */, ___array, ___startIndex, ___match, method)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern Il2CppGenericMethod Array_FindLastIndex_TisObject_t_m25242_GenericMethod;
extern "C" int32_t Array_FindLastIndex_TisObject_t_m25242_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___startIndex, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ArgumentNullException_t754 * L_1 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m10146(L_1, /*hidden argument*/&ArgumentNullException__ctor_m10146_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		ObjectU5BU5D_t76* L_2 = ___array;
		int32_t L_3 = ___startIndex;
		ObjectU5BU5D_t76* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = ___startIndex;
		Predicate_1_t2477 * L_6 = ___match;
		int32_t L_7 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Predicate_1_t2477 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, L_3, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)L_5)), L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Int32 System.Array::FindIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
// System.Int32 System.Array::FindIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
extern "C" int32_t Array_FindIndex_TisObject_t_m25243_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, int32_t p2, Predicate_1_t2477 * p3, MethodInfo* method);
#define Array_FindIndex_TisObject_t_m25243(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Predicate_1_t2477 *, MethodInfo*))Array_FindIndex_TisObject_t_m25243_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
extern Il2CppGenericMethod Array_FindIndex_TisObject_t_m25243_GenericMethod;
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
extern MethodInfo Array_FindIndex_TisObject_t_m25244_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
extern "C" int32_t Array_FindIndex_TisObject_t_m25244_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method);
#define Array_FindIndex_TisObject_t_m25244(__this /* static, unused */, ___array, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Predicate_1_t2477 *, MethodInfo*))Array_FindIndex_TisObject_t_m25244_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
extern Il2CppGenericMethod Array_FindIndex_TisObject_t_m25244_GenericMethod;
extern "C" int32_t Array_FindIndex_TisObject_t_m25244_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		ObjectU5BU5D_t76* L_3 = ___array;
		NullCheck(L_3);
		Predicate_1_t2477 * L_4 = ___match;
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Predicate_1_t2477 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
extern MethodInfo Array_FindIndex_TisObject_t_m25243_MethodInfo;
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t Array_FindIndex_TisObject_t_m25243_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___startIndex, int32_t ___count, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		Predicate_1_t2477 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral1212, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = ___startIndex;
		ObjectU5BU5D_t76* L_5 = ___array;
		NullCheck(L_5);
		if ((((int32_t)L_4) > ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = ___startIndex;
		int32_t L_7 = ___count;
		ObjectU5BU5D_t76* L_8 = ___array;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))) <= ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t758 * L_9 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5412(L_9, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5412_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0030:
	{
		int32_t L_10 = ___startIndex;
		V_0 = L_10;
		goto IL_0049;
	}

IL_0034:
	{
		Predicate_1_t2477 * L_11 = ___match;
		ObjectU5BU5D_t76* L_12 = ___array;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_11);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), L_11, (*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)));
		if (!L_15)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_0045:
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = ___startIndex;
		int32_t L_20 = ___count;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)L_19+(int32_t)L_20)))))
		{
			goto IL_0034;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern MethodInfo Array_FindIndex_TisObject_t_m25245_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern "C" int32_t Array_FindIndex_TisObject_t_m25245_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___startIndex, Predicate_1_t2477 * ___match, MethodInfo* method);
#define Array_FindIndex_TisObject_t_m25245(__this /* static, unused */, ___array, ___startIndex, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, Predicate_1_t2477 *, MethodInfo*))Array_FindIndex_TisObject_t_m25245_gshared)(__this /* static, unused */, ___array, ___startIndex, ___match, method)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern Il2CppGenericMethod Array_FindIndex_TisObject_t_m25245_GenericMethod;
extern "C" int32_t Array_FindIndex_TisObject_t_m25245_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___startIndex, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		int32_t L_3 = ___startIndex;
		ObjectU5BU5D_t76* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = ___startIndex;
		Predicate_1_t2477 * L_6 = ___match;
		int32_t L_7 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Predicate_1_t2477 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, L_3, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)L_5)), L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(!!0[],System.Int32,System.Int32,!!0,System.Collections.Generic.IComparer`1<!!0>)
// System.Int32 System.Array::BinarySearch<System.Object>(!!0[],System.Int32,System.Int32,!!0,System.Collections.Generic.IComparer`1<!!0>)
extern "C" int32_t Array_BinarySearch_TisObject_t_m25246_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, int32_t p2, Object_t * p3, Object_t* p4, MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m25246(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t *, Object_t*, MethodInfo*))Array_BinarySearch_TisObject_t_m25246_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
extern Il2CppGenericMethod Array_BinarySearch_TisObject_t_m25246_GenericMethod;
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
extern MethodInfo Array_BinarySearch_TisObject_t_m25247_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
extern "C" int32_t Array_BinarySearch_TisObject_t_m25247_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m25247(__this /* static, unused */, ___array, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, MethodInfo*))Array_BinarySearch_TisObject_t_m25247_gshared)(__this /* static, unused */, ___array, ___value, method)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
extern Il2CppGenericMethod Array_BinarySearch_TisObject_t_m25247_GenericMethod;
extern "C" int32_t Array_BinarySearch_TisObject_t_m25247_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		ObjectU5BU5D_t76* L_3 = ___array;
		NullCheck(L_3);
		Object_t * L_4 = ___value;
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), L_4, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Comparer_1_t2478_il2cpp_TypeInfo;
extern TypeInfo IComparer_1_t3837_il2cpp_TypeInfo;
extern TypeInfo Int32_t60_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1189_il2cpp_TypeInfo;
extern TypeInfo Exception_t110_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern Il2CppType Comparer_1_t2478_0_0_0;
extern Il2CppType IComparer_1_t3837_0_0_0;
extern MethodInfo IComparer_1_Compare_m22428_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m10559_MethodInfo;
extern Il2CppGenericMethod Comparer_1_get_Default_m11979_GenericMethod;
extern Il2CppGenericMethod IComparer_1_Compare_m22428_GenericMethod;
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
extern MethodInfo Array_BinarySearch_TisObject_t_m25246_MethodInfo;
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* Comparer_1_t2478_il2cpp_TypeInfo_var;
extern "C" int32_t Array_BinarySearch_TisObject_t_m25246_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t* ___comparer, MethodInfo* method)
{
	static bool Array_BinarySearch_TisObject_t_m25246_init;
	if (!Array_BinarySearch_TisObject_t_m25246_init)
	{
		Comparer_1_t2478_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t2478_0_0_0);
		Array_BinarySearch_TisObject_t_m25246_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t110 * V_4 = {0};
	int32_t V_5 = 0;
	Exception_t110 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t110 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1195, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_4 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_4, (String_t*) &_stringLiteral381, L_3, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___length;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_6 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_7 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_7, (String_t*) &_stringLiteral1084, L_6, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0040:
	{
		int32_t L_8 = ___index;
		ObjectU5BU5D_t76* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = ___length;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_11 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1196, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentException_t395 * L_12 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_12, L_11, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0058:
	{
		Object_t* L_13 = ___comparer;
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2478_il2cpp_TypeInfo_var);
		Comparer_1_t2478 * L_14 = (( Comparer_1_t2478 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		___comparer = L_14;
	}

IL_0065:
	{
		int32_t L_15 = ___index;
		V_0 = L_15;
		int32_t L_16 = ___index;
		int32_t L_17 = ___length;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_16+(int32_t)L_17))-(int32_t)1));
		V_2 = 0;
	}

IL_006f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0071:
		{
			int32_t L_18 = V_0;
			int32_t L_19 = V_1;
			int32_t L_20 = V_0;
			V_3 = ((int32_t)((int32_t)L_18+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19-(int32_t)L_20))/(int32_t)2))));
			Object_t* L_21 = ___comparer;
			Object_t * L_22 = ___value;
			ObjectU5BU5D_t76* L_23 = ___array;
			int32_t L_24 = V_3;
			NullCheck(L_23);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
			int32_t L_25 = L_24;
			NullCheck(L_21);
			int32_t L_26 = (int32_t)InterfaceFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), L_21, L_22, (*(Object_t **)(Object_t **)SZArrayLdElema(L_23, L_25)));
			V_2 = L_26;
			int32_t L_27 = V_2;
			if (L_27)
			{
				goto IL_0091;
			}
		}

IL_008c:
		{
			int32_t L_28 = V_3;
			V_5 = L_28;
			goto IL_00be;
		}

IL_0091:
		{
			int32_t L_29 = V_2;
			if ((((int32_t)L_29) >= ((int32_t)0)))
			{
				goto IL_009b;
			}
		}

IL_0095:
		{
			int32_t L_30 = V_3;
			V_1 = ((int32_t)((int32_t)L_30-(int32_t)1));
			goto IL_009f;
		}

IL_009b:
		{
			int32_t L_31 = V_3;
			V_0 = ((int32_t)((int32_t)L_31+(int32_t)1));
		}

IL_009f:
		{
			int32_t L_32 = V_0;
			int32_t L_33 = V_1;
			if ((((int32_t)L_32) <= ((int32_t)L_33)))
			{
				goto IL_0071;
			}
		}

IL_00a3:
		{
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t110 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t110_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00a5;
		throw e;
	}

CATCH_00a5:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t110 *)__exception_local);
		String_t* L_34 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1198, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		Exception_t110 * L_35 = V_4;
		InvalidOperationException_t1189 * L_36 = (InvalidOperationException_t1189 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1189_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m10559(L_36, L_34, L_35, /*hidden argument*/&InvalidOperationException__ctor_m10559_MethodInfo);
		il2cpp_codegen_raise_exception(L_36);
		goto IL_00bb;
	} // end catch (depth: 1)

IL_00bb:
	{
		int32_t L_37 = V_0;
		return ((~L_37));
	}

IL_00be:
	{
		int32_t L_38 = V_5;
		return L_38;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
extern MethodInfo Array_BinarySearch_TisObject_t_m25248_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
extern "C" int32_t Array_BinarySearch_TisObject_t_m25248_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, Object_t* ___comparer, MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m25248(__this /* static, unused */, ___array, ___value, ___comparer, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, Object_t*, MethodInfo*))Array_BinarySearch_TisObject_t_m25248_gshared)(__this /* static, unused */, ___array, ___value, ___comparer, method)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
extern Il2CppGenericMethod Array_BinarySearch_TisObject_t_m25248_GenericMethod;
extern "C" int32_t Array_BinarySearch_TisObject_t_m25248_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, Object_t* ___comparer, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		ObjectU5BU5D_t76* L_3 = ___array;
		NullCheck(L_3);
		Object_t * L_4 = ___value;
		Object_t* L_5 = ___comparer;
		int32_t L_6 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
extern MethodInfo Array_BinarySearch_TisObject_t_m25249_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
extern "C" int32_t Array_BinarySearch_TisObject_t_m25249_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___index, int32_t ___length, Object_t * ___value, MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m25249(__this /* static, unused */, ___array, ___index, ___length, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t *, MethodInfo*))Array_BinarySearch_TisObject_t_m25249_gshared)(__this /* static, unused */, ___array, ___index, ___length, ___value, method)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
extern Il2CppGenericMethod Array_BinarySearch_TisObject_t_m25249_GenericMethod;
extern "C" int32_t Array_BinarySearch_TisObject_t_m25249_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___index, int32_t ___length, Object_t * ___value, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
		int32_t L_1 = ___index;
		int32_t L_2 = ___length;
		Object_t * L_3 = ___value;
		int32_t L_4 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m10971_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10971(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10971_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
extern Il2CppGenericMethod Array_IndexOf_TisObject_t_m10971_GenericMethod;
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
extern MethodInfo Array_IndexOf_TisObject_t_m10992_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(T[],T)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
extern "C" int32_t Array_IndexOf_TisObject_t_m10992_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10992(__this /* static, unused */, ___array, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, MethodInfo*))Array_IndexOf_TisObject_t_m10992_gshared)(__this /* static, unused */, ___array, ___value, method)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
extern Il2CppGenericMethod Array_IndexOf_TisObject_t_m10992_GenericMethod;
extern "C" int32_t Array_IndexOf_TisObject_t_m10992_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		Object_t * L_3 = ___value;
		ObjectU5BU5D_t76* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, L_3, 0, (((int32_t)(((Array_t *)L_4)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
extern MethodInfo Array_IndexOf_TisObject_t_m25250_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m25250_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m25250(__this /* static, unused */, ___array, ___value, ___startIndex, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m25250_gshared)(__this /* static, unused */, ___array, ___value, ___startIndex, method)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
extern Il2CppGenericMethod Array_IndexOf_TisObject_t_m25250_GenericMethod;
extern "C" int32_t Array_IndexOf_TisObject_t_m25250_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		Object_t * L_3 = ___value;
		int32_t L_4 = ___startIndex;
		ObjectU5BU5D_t76* L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = ___startIndex;
		int32_t L_7 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, L_3, L_4, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))-(int32_t)L_6)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32)
// System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32)
extern "C" int32_t Array_LastIndexOf_TisObject_t_m25251_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, Object_t * p1, int32_t p2, MethodInfo* method);
#define Array_LastIndexOf_TisObject_t_m25251(__this /* static, unused */, p0, p1, p2, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, int32_t, MethodInfo*))Array_LastIndexOf_TisObject_t_m25251_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod Array_LastIndexOf_TisObject_t_m25251_GenericMethod;
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
extern MethodInfo Array_LastIndexOf_TisObject_t_m25252_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
extern "C" int32_t Array_LastIndexOf_TisObject_t_m25252_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, MethodInfo* method);
#define Array_LastIndexOf_TisObject_t_m25252(__this /* static, unused */, ___array, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, MethodInfo*))Array_LastIndexOf_TisObject_t_m25252_gshared)(__this /* static, unused */, ___array, ___value, method)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
extern Il2CppGenericMethod Array_LastIndexOf_TisObject_t_m25252_GenericMethod;
extern "C" int32_t Array_LastIndexOf_TisObject_t_m25252_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_0015;
		}
	}
	{
		return (-1);
	}

IL_0015:
	{
		ObjectU5BU5D_t76* L_3 = ___array;
		Object_t * L_4 = ___value;
		ObjectU5BU5D_t76* L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_3, L_4, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_LastIndexOf_TisObject_t_m25253_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_LastIndexOf_TisObject_t_m25253(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, int32_t, int32_t, MethodInfo*))Array_LastIndexOf_TisObject_t_m25253_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
extern Il2CppGenericMethod Array_LastIndexOf_TisObject_t_m25253_GenericMethod;
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32)
extern MethodInfo Array_LastIndexOf_TisObject_t_m25251_MethodInfo;
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32)
extern "C" int32_t Array_LastIndexOf_TisObject_t_m25251_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		Object_t * L_3 = ___value;
		int32_t L_4 = ___startIndex;
		int32_t L_5 = ___startIndex;
		int32_t L_6 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Object_t *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, L_2, L_3, L_4, ((int32_t)((int32_t)L_5+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo EqualityComparer_1_t2469_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2469_0_0_0;
extern MethodInfo Array_GetUpperBound_m7193_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22179_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m11938_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22179_GenericMethod;
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32,System.Int32)
extern MethodInfo Array_LastIndexOf_TisObject_t_m25253_MethodInfo;
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32,System.Int32)
extern TypeInfo* EqualityComparer_1_t2469_il2cpp_TypeInfo_var;
extern "C" int32_t Array_LastIndexOf_TisObject_t_m25253_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method)
{
	static bool Array_LastIndexOf_TisObject_t_m25253_init;
	if (!Array_LastIndexOf_TisObject_t_m25253_init)
	{
		EqualityComparer_1_t2469_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2469_0_0_0);
		Array_LastIndexOf_TisObject_t_m25253_init = true;
	}
	EqualityComparer_1_t2469 * V_0 = {0};
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = ___startIndex;
		ObjectU5BU5D_t76* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = Array_GetLowerBound_m7182(L_4, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = ___startIndex;
		ObjectU5BU5D_t76* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = Array_GetUpperBound_m7193(L_7, 0, /*hidden argument*/&Array_GetUpperBound_m7193_MethodInfo);
		if ((((int32_t)L_6) > ((int32_t)L_8)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_9 = ___startIndex;
		int32_t L_10 = ___count;
		ObjectU5BU5D_t76* L_11 = ___array;
		NullCheck(L_11);
		int32_t L_12 = Array_GetLowerBound_m7182(L_11, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))+(int32_t)1))) >= ((int32_t)L_12)))
		{
			goto IL_003a;
		}
	}

IL_0034:
	{
		ArgumentOutOfRangeException_t758 * L_13 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5412(L_13, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5412_MethodInfo);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2469_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2469 * L_14 = (( EqualityComparer_1_t2469 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = L_14;
		int32_t L_15 = ___startIndex;
		V_1 = L_15;
		goto IL_005a;
	}

IL_0044:
	{
		EqualityComparer_1_t2469 * L_16 = V_0;
		ObjectU5BU5D_t76* L_17 = ___array;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___value;
		NullCheck(L_16);
		bool L_21 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_22 = V_1;
		return L_22;
	}

IL_0056:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)((int32_t)L_23-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_24 = V_1;
		int32_t L_25 = ___startIndex;
		int32_t L_26 = ___count;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_25-(int32_t)L_26))+(int32_t)1)))))
		{
			goto IL_0044;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m22178_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m22178(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22178_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Array_Resize_TisObject_t_m22178_GenericMethod;
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern MethodInfo Array_FindAll_TisObject_t_m25254_MethodInfo;
struct Array_t;
// Declaration T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern "C" ObjectU5BU5D_t76* Array_FindAll_TisObject_t_m25254_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method);
#define Array_FindAll_TisObject_t_m25254(__this /* static, unused */, ___array, ___match, method) (( ObjectU5BU5D_t76* (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Predicate_1_t2477 *, MethodInfo*))Array_FindAll_TisObject_t_m25254_gshared)(__this /* static, unused */, ___array, ___match, method)
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern Il2CppGenericMethod Array_FindAll_TisObject_t_m25254_GenericMethod;
extern "C" ObjectU5BU5D_t76* Array_FindAll_TisObject_t_m25254_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t76* V_1 = {0};
	Object_t * V_2 = {0};
	ObjectU5BU5D_t76* V_3 = {0};
	int32_t V_4 = 0;
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		Predicate_1_t2477 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral1212, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		V_0 = 0;
		ObjectU5BU5D_t76* L_4 = ___array;
		NullCheck(L_4);
		V_1 = ((ObjectU5BU5D_t76*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (((int32_t)(((Array_t *)L_4)->max_length)))));
		ObjectU5BU5D_t76* L_5 = ___array;
		V_3 = L_5;
		V_4 = 0;
		goto IL_0052;
	}

IL_002e:
	{
		ObjectU5BU5D_t76* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_8));
		Predicate_1_t2477 * L_9 = ___match;
		Object_t * L_10 = V_2;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), L_9, L_10);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		ObjectU5BU5D_t76* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
		Object_t * L_15 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)) = (Object_t *)L_15;
	}

IL_004c:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0052:
	{
		int32_t L_17 = V_4;
		ObjectU5BU5D_t76* L_18 = V_3;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_19 = V_0;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (&V_1), L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		ObjectU5BU5D_t76* L_20 = V_1;
		return L_20;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
extern MethodInfo Array_Exists_TisObject_t_m25255_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
// System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
extern "C" bool Array_Exists_TisObject_t_m25255_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method);
#define Array_Exists_TisObject_t_m25255(__this /* static, unused */, ___array, ___match, method) (( bool (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Predicate_1_t2477 *, MethodInfo*))Array_Exists_TisObject_t_m25255_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
extern Il2CppGenericMethod Array_Exists_TisObject_t_m25255_GenericMethod;
extern "C" bool Array_Exists_TisObject_t_m25255_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	Object_t * V_0 = {0};
	ObjectU5BU5D_t76* V_1 = {0};
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		Predicate_1_t2477 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral1212, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t76* L_4 = ___array;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0039;
	}

IL_0022:
	{
		ObjectU5BU5D_t76* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Predicate_1_t2477 * L_8 = ___match;
		Object_t * L_9 = V_0;
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), L_8, L_9);
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		return 1;
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		ObjectU5BU5D_t76* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h"
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_gen.h"
extern TypeInfo ArrayReadOnlyList_1_t3470_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2467_il2cpp_TypeInfo;
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_genMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
extern Il2CppType ArrayReadOnlyList_1_t3470_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2467_0_0_0;
extern MethodInfo ArrayReadOnlyList_1__ctor_m21648_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m11868_MethodInfo;
extern Il2CppGenericMethod ArrayReadOnlyList_1__ctor_m21648_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m11868_GenericMethod;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
extern MethodInfo Array_AsReadOnly_TisObject_t_m25256_MethodInfo;
struct Array_t;
// Declaration System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
extern "C" ReadOnlyCollection_1_t2467 * Array_AsReadOnly_TisObject_t_m25256_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, MethodInfo* method);
#define Array_AsReadOnly_TisObject_t_m25256(__this /* static, unused */, ___array, method) (( ReadOnlyCollection_1_t2467 * (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, MethodInfo*))Array_AsReadOnly_TisObject_t_m25256_gshared)(__this /* static, unused */, ___array, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
extern Il2CppGenericMethod Array_AsReadOnly_TisObject_t_m25256_GenericMethod;
extern "C" ReadOnlyCollection_1_t2467 * Array_AsReadOnly_TisObject_t_m25256_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, MethodInfo* method)
{
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		ObjectU5BU5D_t76* L_2 = ___array;
		ArrayReadOnlyList_1_t3470 * L_3 = (ArrayReadOnlyList_1_t3470 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		(( void (*) (ArrayReadOnlyList_1_t3470 *, ObjectU5BU5D_t76*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(L_3, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		ReadOnlyCollection_1_t2467 * L_4 = (ReadOnlyCollection_1_t2467 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		(( void (*) (ReadOnlyCollection_1_t2467 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->method)(L_4, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
extern MethodInfo Array_Find_TisObject_t_m25257_MethodInfo;
struct Array_t;
// Declaration T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
extern "C" Object_t * Array_Find_TisObject_t_m25257_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method);
#define Array_Find_TisObject_t_m25257(__this /* static, unused */, ___array, ___match, method) (( Object_t * (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Predicate_1_t2477 *, MethodInfo*))Array_Find_TisObject_t_m25257_gshared)(__this /* static, unused */, ___array, ___match, method)
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
extern Il2CppGenericMethod Array_Find_TisObject_t_m25257_GenericMethod;
extern "C" Object_t * Array_Find_TisObject_t_m25257_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	Object_t * V_0 = {0};
	ObjectU5BU5D_t76* V_1 = {0};
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		Predicate_1_t2477 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral1212, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t76* L_4 = ___array;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0039;
	}

IL_0022:
	{
		ObjectU5BU5D_t76* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Predicate_1_t2477 * L_8 = ___match;
		Object_t * L_9 = V_0;
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), L_8, L_9);
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		Object_t * L_11 = V_0;
		return L_11;
	}

IL_0035:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t76* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_3));
		Object_t * L_15 = V_3;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

// T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
extern MethodInfo Array_FindLast_TisObject_t_m25258_MethodInfo;
struct Array_t;
// Declaration T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
// T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
extern "C" Object_t * Array_FindLast_TisObject_t_m25258_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method);
#define Array_FindLast_TisObject_t_m25258(__this /* static, unused */, ___array, ___match, method) (( Object_t * (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, Predicate_1_t2477 *, MethodInfo*))Array_FindLast_TisObject_t_m25258_gshared)(__this /* static, unused */, ___array, ___match, method)
// T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
extern Il2CppGenericMethod Array_FindLast_TisObject_t_m25258_GenericMethod;
extern "C" Object_t * Array_FindLast_TisObject_t_m25258_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, Predicate_1_t2477 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		ObjectU5BU5D_t76* L_0 = ___array;
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
		Predicate_1_t2477 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t754 * L_3 = (ArgumentNullException_t754 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t754_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3902(L_3, (String_t*) &_stringLiteral1212, /*hidden argument*/&ArgumentNullException__ctor_m3902_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t76* L_4 = ___array;
		NullCheck(L_4);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)1));
		goto IL_003f;
	}

IL_0024:
	{
		Predicate_1_t2477 * L_5 = ___match;
		ObjectU5BU5D_t76* L_6 = ___array;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_5);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), L_5, (*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_8)));
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_t76* L_10 = ___array;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12));
	}

IL_003b:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_003f:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_1));
		Object_t * L_15 = V_1;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Reflection.MethodInfo>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisMethodInfo_t_m25259_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisMethodInfo_t_m25260_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisMethodInfo_t_m25260(__this, ___index, method) (( MethodInfo_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Reflection.MethodInfo>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisMethodInfo_t_m25259_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.MethodInfo>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisMethodInfo_t_m25261_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.MethodInfo>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.MethodInfo>(T)
#define Array_InternalArray__ICollection_Add_TisMethodInfo_t_m25261(__this, ___item, method) (( void (*) (Array_t *, MethodInfo_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.MethodInfo>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.MethodInfo>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisMethodInfo_t_m25262_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.MethodInfo>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.MethodInfo>(T)
#define Array_InternalArray__ICollection_Contains_TisMethodInfo_t_m25262(__this, ___item, method) (( bool (*) (Array_t *, MethodInfo_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.MethodInfo>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.MethodInfo>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisMethodInfo_t_m25263_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.MethodInfo>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.MethodInfo>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisMethodInfo_t_m25263(__this, ___array, ___index, method) (( void (*) (Array_t *, MethodInfoU5BU5D_t1410*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.MethodInfo>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.MethodInfo>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisMethodInfo_t_m25264_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.MethodInfo>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.MethodInfo>(T)
#define Array_InternalArray__ICollection_Remove_TisMethodInfo_t_m25264(__this, ___item, method) (( bool (*) (Array_t *, MethodInfo_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.MethodInfo>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.MethodInfo>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisMethodInfo_t_m25265_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.MethodInfo>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.MethodInfo>(T)
#define Array_InternalArray__IndexOf_TisMethodInfo_t_m25265(__this, ___item, method) (( int32_t (*) (Array_t *, MethodInfo_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.MethodInfo>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Reflection.MethodInfo>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisMethodInfo_t_m25266_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Reflection.MethodInfo>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Reflection.MethodInfo>(System.Int32,T)
#define Array_InternalArray__Insert_TisMethodInfo_t_m25266(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, MethodInfo_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Reflection.MethodInfo>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Reflection.MethodInfo>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisMethodInfo_t_m25267_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Reflection.MethodInfo>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisMethodInfo_t_m25268_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Reflection.MethodInfo>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.MethodInfo>(System.Int32,T)
#define Array_InternalArray__set_Item_TisMethodInfo_t_m25268(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, MethodInfo_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.MethodInfo>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Reflection.MethodInfo>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisMethodInfo_t_m25267_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_202.h"
extern TypeInfo InternalEnumerator_1_t3472_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_202MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3472_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21669_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21669_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.MethodInfo>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisMethodInfo_t_m25269_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.MethodInfo>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.MethodInfo>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisMethodInfo_t_m25269(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.MethodInfo>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._MethodInfo>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_Tis_MethodInfo_t2376_m25270_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_Tis_MethodInfo_t2376_m25271_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MethodInfo_t2376_m25271(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._MethodInfo>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_Tis_MethodInfo_t2376_m25270_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._MethodInfo>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_Tis_MethodInfo_t2376_m25272_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._MethodInfo>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._MethodInfo>(T)
#define Array_InternalArray__ICollection_Add_Tis_MethodInfo_t2376_m25272(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._MethodInfo>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo _MethodInfo_t2376_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._MethodInfo>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_Tis_MethodInfo_t2376_m25273_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._MethodInfo>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._MethodInfo>(T)
#define Array_InternalArray__ICollection_Contains_Tis_MethodInfo_t2376_m25273(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._MethodInfo>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._MethodInfo>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_Tis_MethodInfo_t2376_m25274_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._MethodInfo>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._MethodInfo>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_Tis_MethodInfo_t2376_m25274(__this, ___array, ___index, method) (( void (*) (Array_t *, _MethodInfoU5BU5D_t3803*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._MethodInfo>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._MethodInfo>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_Tis_MethodInfo_t2376_m25275_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._MethodInfo>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._MethodInfo>(T)
#define Array_InternalArray__ICollection_Remove_Tis_MethodInfo_t2376_m25275(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._MethodInfo>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._MethodInfo>(T)
extern MethodInfo Array_InternalArray__IndexOf_Tis_MethodInfo_t2376_m25276_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._MethodInfo>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._MethodInfo>(T)
#define Array_InternalArray__IndexOf_Tis_MethodInfo_t2376_m25276(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._MethodInfo>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._MethodInfo>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_Tis_MethodInfo_t2376_m25277_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._MethodInfo>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._MethodInfo>(System.Int32,T)
#define Array_InternalArray__Insert_Tis_MethodInfo_t2376_m25277(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._MethodInfo>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._MethodInfo>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_Tis_MethodInfo_t2376_m25278_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_Tis_MethodInfo_t2376_m25279_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32,T)
#define Array_InternalArray__set_Item_Tis_MethodInfo_t2376_m25279(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._MethodInfo>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_Tis_MethodInfo_t2376_m25278_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_203.h"
extern TypeInfo InternalEnumerator_1_t3473_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_203MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3473_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21674_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21674_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._MethodInfo>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_Tis_MethodInfo_t2376_m25280_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._MethodInfo>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._MethodInfo>()
#define Array_InternalArray__IEnumerable_GetEnumerator_Tis_MethodInfo_t2376_m25280(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._MethodInfo>()
#ifndef _MSC_VER
#else
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisTableRange_t1432_m25281_GenericMethod;
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisTableRange_t1432_m25282_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern "C" TableRange_t1432  Array_InternalArray__get_Item_TisTableRange_t1432_m25282_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisTableRange_t1432_m25282(__this, ___index, method) (( TableRange_t1432  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisTableRange_t1432_m25282_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTableRange_t1432_m25282_GenericMethod;
extern "C" TableRange_t1432  Array_InternalArray__get_Item_TisTableRange_t1432_m25282_gshared (Array_t * __this, int32_t ___index, MethodInfo* method)
{
	TableRange_t1432  V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		int32_t L_3 = ___index;
		ArrayGetGenericValueImpl (__this, L_3, (&V_0));
		TableRange_t1432  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisTableRange_t1432_m25281_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisTableRange_t1432_m25283_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisTableRange_t1432_m25283_gshared (Array_t * __this, TableRange_t1432  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisTableRange_t1432_m25283(__this, ___item, method) (( void (*) (Array_t *, TableRange_t1432 , MethodInfo*))Array_InternalArray__ICollection_Add_TisTableRange_t1432_m25283_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Add_TisTableRange_t1432_m25283_GenericMethod;
extern "C" void Array_InternalArray__ICollection_Add_TisTableRange_t1432_m25283_gshared (Array_t * __this, TableRange_t1432  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo TableRange_t1432_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisTableRange_t1432_m25284_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisTableRange_t1432_m25284_gshared (Array_t * __this, TableRange_t1432  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisTableRange_t1432_m25284(__this, ___item, method) (( bool (*) (Array_t *, TableRange_t1432 , MethodInfo*))Array_InternalArray__ICollection_Contains_TisTableRange_t1432_m25284_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Contains_TisTableRange_t1432_m25284_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Contains_TisTableRange_t1432_m25284_gshared (Array_t * __this, TableRange_t1432  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TableRange_t1432  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		TableRange_t1432  L_5 = ___item;
		TableRange_t1432  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		TableRange_t1432  L_8 = V_2;
		TableRange_t1432  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		TableRange_t1432  L_11 = V_2;
		TableRange_t1432  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisTableRange_t1432_m25285_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTableRange_t1432_m25285_gshared (Array_t * __this, TableRangeU5BU5D_t1433* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisTableRange_t1432_m25285(__this, ___array, ___index, method) (( void (*) (Array_t *, TableRangeU5BU5D_t1433*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisTableRange_t1432_m25285_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
extern Il2CppGenericMethod Array_InternalArray__ICollection_CopyTo_TisTableRange_t1432_m25285_GenericMethod;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTableRange_t1432_m25285_gshared (Array_t * __this, TableRangeU5BU5D_t1433* ___array, int32_t ___index, MethodInfo* method)
{
	{
		TableRangeU5BU5D_t1433* L_0 = ___array;
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
		int32_t L_2 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_4 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_4, L_3, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		int32_t L_6 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		TableRangeU5BU5D_t1433* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = Array_GetLowerBound_m7182(L_7, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		TableRangeU5BU5D_t1433* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_GetLength_m478(L_9, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t395 * L_11 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_11, (String_t*) &_stringLiteral1172, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		TableRangeU5BU5D_t1433* L_12 = ___array;
		NullCheck(L_12);
		int32_t L_13 = Array_get_Rank_m5237(L_12, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_15 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_15, L_14, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_18 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_18, (String_t*) &_stringLiteral381, L_17, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		TableRangeU5BU5D_t1433* L_20 = ___array;
		int32_t L_21 = ___index;
		int32_t L_22 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		Array_Copy_m7220(NULL /*static, unused*/, __this, L_19, (Array_t *)(Array_t *)L_20, L_21, L_22, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisTableRange_t1432_m25286_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisTableRange_t1432_m25286_gshared (Array_t * __this, TableRange_t1432  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisTableRange_t1432_m25286(__this, ___item, method) (( bool (*) (Array_t *, TableRange_t1432 , MethodInfo*))Array_InternalArray__ICollection_Remove_TisTableRange_t1432_m25286_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Remove_TisTableRange_t1432_m25286_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Remove_TisTableRange_t1432_m25286_gshared (Array_t * __this, TableRange_t1432  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisTableRange_t1432_m25287_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisTableRange_t1432_m25287_gshared (Array_t * __this, TableRange_t1432  ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisTableRange_t1432_m25287(__this, ___item, method) (( int32_t (*) (Array_t *, TableRange_t1432 , MethodInfo*))Array_InternalArray__IndexOf_TisTableRange_t1432_m25287_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern Il2CppGenericMethod Array_InternalArray__IndexOf_TisTableRange_t1432_m25287_GenericMethod;
extern "C" int32_t Array_InternalArray__IndexOf_TisTableRange_t1432_m25287_gshared (Array_t * __this, TableRange_t1432  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TableRange_t1432  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		TableRange_t1432  L_5 = ___item;
		TableRange_t1432  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		TableRange_t1432  L_8 = V_2;
		TableRange_t1432  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		TableRange_t1432  L_14 = ___item;
		TableRange_t1432  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisTableRange_t1432_m25288_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisTableRange_t1432_m25288_gshared (Array_t * __this, int32_t ___index, TableRange_t1432  ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisTableRange_t1432_m25288(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TableRange_t1432 , MethodInfo*))Array_InternalArray__Insert_TisTableRange_t1432_m25288_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__Insert_TisTableRange_t1432_m25288_GenericMethod;
extern "C" void Array_InternalArray__Insert_TisTableRange_t1432_m25288_gshared (Array_t * __this, int32_t ___index, TableRange_t1432  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisTableRange_t1432_m25289_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisTableRange_t1432_m25290_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisTableRange_t1432_m25290_gshared (Array_t * __this, int32_t ___index, TableRange_t1432  ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisTableRange_t1432_m25290(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TableRange_t1432 , MethodInfo*))Array_InternalArray__set_Item_TisTableRange_t1432_m25290_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__set_Item_TisTableRange_t1432_m25290_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisTableRange_t1432_m25290_gshared (Array_t * __this, int32_t ___index, TableRange_t1432  ___item, MethodInfo* method)
{
	static bool Array_InternalArray__set_Item_TisTableRange_t1432_m25290_init;
	if (!Array_InternalArray__set_Item_TisTableRange_t1432_m25290_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Array_InternalArray__set_Item_TisTableRange_t1432_m25290_init = true;
	}
	ObjectU5BU5D_t76* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		V_0 = ((ObjectU5BU5D_t76*)IsInst(__this, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t76* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t76* L_4 = V_0;
		int32_t L_5 = ___index;
		TableRange_t1432  L_6 = ___item;
		TableRange_t1432  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		ArraySetGenericValueImpl (__this, L_9, (&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisTableRange_t1432_m25289_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_204.h"
extern TypeInfo InternalEnumerator_1_t3474_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_204MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3474_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21679_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21679_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t1432_m25291_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t1432_m25291_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t1432_m25291(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t1432_m25291_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
extern Il2CppGenericMethod Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t1432_m25291_GenericMethod;
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t1432_m25291_gshared (Array_t * __this, MethodInfo* method)
{
	{
		InternalEnumerator_1_t3474  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t3474 *, Array_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t3474  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// Mono.Globalization.Unicode.TailoringInfo
#include "mscorlib_Mono_Globalization_Unicode_TailoringInfo.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisTailoringInfo_t1435_m25292_GenericMethod;
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisTailoringInfo_t1435_m25293_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisTailoringInfo_t1435_m25293(__this, ___index, method) (( TailoringInfo_t1435 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisTailoringInfo_t1435_m25292_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.TailoringInfo>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisTailoringInfo_t1435_m25294_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.TailoringInfo>(T)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.TailoringInfo>(T)
#define Array_InternalArray__ICollection_Add_TisTailoringInfo_t1435_m25294(__this, ___item, method) (( void (*) (Array_t *, TailoringInfo_t1435 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.TailoringInfo>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo TailoringInfo_t1435_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.TailoringInfo>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisTailoringInfo_t1435_m25295_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.TailoringInfo>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.TailoringInfo>(T)
#define Array_InternalArray__ICollection_Contains_TisTailoringInfo_t1435_m25295(__this, ___item, method) (( bool (*) (Array_t *, TailoringInfo_t1435 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.TailoringInfo>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.TailoringInfo>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisTailoringInfo_t1435_m25296_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.TailoringInfo>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.TailoringInfo>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisTailoringInfo_t1435_m25296(__this, ___array, ___index, method) (( void (*) (Array_t *, TailoringInfoU5BU5D_t1440*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.TailoringInfo>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.TailoringInfo>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisTailoringInfo_t1435_m25297_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.TailoringInfo>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.TailoringInfo>(T)
#define Array_InternalArray__ICollection_Remove_TisTailoringInfo_t1435_m25297(__this, ___item, method) (( bool (*) (Array_t *, TailoringInfo_t1435 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.TailoringInfo>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.TailoringInfo>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisTailoringInfo_t1435_m25298_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.TailoringInfo>(T)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.TailoringInfo>(T)
#define Array_InternalArray__IndexOf_TisTailoringInfo_t1435_m25298(__this, ___item, method) (( int32_t (*) (Array_t *, TailoringInfo_t1435 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.TailoringInfo>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisTailoringInfo_t1435_m25299_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,T)
#define Array_InternalArray__Insert_TisTailoringInfo_t1435_m25299(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TailoringInfo_t1435 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisTailoringInfo_t1435_m25300_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisTailoringInfo_t1435_m25301_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,T)
#define Array_InternalArray__set_Item_TisTailoringInfo_t1435_m25301(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TailoringInfo_t1435 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.TailoringInfo>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisTailoringInfo_t1435_m25300_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_205.h"
extern TypeInfo InternalEnumerator_1_t3475_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_205MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3475_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21684_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21684_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.TailoringInfo>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisTailoringInfo_t1435_m25302_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.TailoringInfo>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.TailoringInfo>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisTailoringInfo_t1435_m25302(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.TailoringInfo>()
#ifndef _MSC_VER
#else
#endif

// Mono.Globalization.Unicode.Contraction
#include "mscorlib_Mono_Globalization_Unicode_Contraction.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.Contraction>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisContraction_t1436_m25303_GenericMethod;
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisContraction_t1436_m25304_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
#define Array_InternalArray__get_Item_TisContraction_t1436_m25304(__this, ___index, method) (( Contraction_t1436 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.Contraction>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisContraction_t1436_m25303_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.Contraction>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisContraction_t1436_m25305_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.Contraction>(T)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.Contraction>(T)
#define Array_InternalArray__ICollection_Add_TisContraction_t1436_m25305(__this, ___item, method) (( void (*) (Array_t *, Contraction_t1436 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.Contraction>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Contraction_t1436_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.Contraction>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisContraction_t1436_m25306_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.Contraction>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.Contraction>(T)
#define Array_InternalArray__ICollection_Contains_TisContraction_t1436_m25306(__this, ___item, method) (( bool (*) (Array_t *, Contraction_t1436 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.Contraction>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.Contraction>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisContraction_t1436_m25307_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.Contraction>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.Contraction>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisContraction_t1436_m25307(__this, ___array, ___index, method) (( void (*) (Array_t *, ContractionU5BU5D_t1442*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.Contraction>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.Contraction>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisContraction_t1436_m25308_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.Contraction>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.Contraction>(T)
#define Array_InternalArray__ICollection_Remove_TisContraction_t1436_m25308(__this, ___item, method) (( bool (*) (Array_t *, Contraction_t1436 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.Contraction>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.Contraction>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisContraction_t1436_m25309_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.Contraction>(T)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.Contraction>(T)
#define Array_InternalArray__IndexOf_TisContraction_t1436_m25309(__this, ___item, method) (( int32_t (*) (Array_t *, Contraction_t1436 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.Contraction>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.Contraction>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisContraction_t1436_m25310_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.Contraction>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.Contraction>(System.Int32,T)
#define Array_InternalArray__Insert_TisContraction_t1436_m25310(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Contraction_t1436 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.Contraction>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.Contraction>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisContraction_t1436_m25311_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.Contraction>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisContraction_t1436_m25312_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.Contraction>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.Contraction>(System.Int32,T)
#define Array_InternalArray__set_Item_TisContraction_t1436_m25312(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Contraction_t1436 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.Contraction>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.Contraction>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisContraction_t1436_m25311_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_206.h"
extern TypeInfo InternalEnumerator_1_t3476_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_206MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3476_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21689_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21689_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.Contraction>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisContraction_t1436_m25313_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.Contraction>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.Contraction>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisContraction_t1436_m25313(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.Contraction>()
#ifndef _MSC_VER
#else
#endif

// Mono.Globalization.Unicode.Level2Map
#include "mscorlib_Mono_Globalization_Unicode_Level2Map.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.Level2Map>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisLevel2Map_t1438_m25314_GenericMethod;
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisLevel2Map_t1438_m25315_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
#define Array_InternalArray__get_Item_TisLevel2Map_t1438_m25315(__this, ___index, method) (( Level2Map_t1438 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.Level2Map>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisLevel2Map_t1438_m25314_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.Level2Map>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisLevel2Map_t1438_m25316_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.Level2Map>(T)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.Level2Map>(T)
#define Array_InternalArray__ICollection_Add_TisLevel2Map_t1438_m25316(__this, ___item, method) (( void (*) (Array_t *, Level2Map_t1438 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.Level2Map>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Level2Map_t1438_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.Level2Map>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisLevel2Map_t1438_m25317_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.Level2Map>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.Level2Map>(T)
#define Array_InternalArray__ICollection_Contains_TisLevel2Map_t1438_m25317(__this, ___item, method) (( bool (*) (Array_t *, Level2Map_t1438 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.Level2Map>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.Level2Map>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisLevel2Map_t1438_m25318_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.Level2Map>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.Level2Map>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisLevel2Map_t1438_m25318(__this, ___array, ___index, method) (( void (*) (Array_t *, Level2MapU5BU5D_t1443*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.Level2Map>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.Level2Map>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisLevel2Map_t1438_m25319_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.Level2Map>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.Level2Map>(T)
#define Array_InternalArray__ICollection_Remove_TisLevel2Map_t1438_m25319(__this, ___item, method) (( bool (*) (Array_t *, Level2Map_t1438 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.Level2Map>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.Level2Map>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisLevel2Map_t1438_m25320_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.Level2Map>(T)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.Level2Map>(T)
#define Array_InternalArray__IndexOf_TisLevel2Map_t1438_m25320(__this, ___item, method) (( int32_t (*) (Array_t *, Level2Map_t1438 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.Level2Map>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.Level2Map>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisLevel2Map_t1438_m25321_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.Level2Map>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.Level2Map>(System.Int32,T)
#define Array_InternalArray__Insert_TisLevel2Map_t1438_m25321(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Level2Map_t1438 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.Level2Map>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.Level2Map>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisLevel2Map_t1438_m25322_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisLevel2Map_t1438_m25323_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32,T)
#define Array_InternalArray__set_Item_TisLevel2Map_t1438_m25323(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Level2Map_t1438 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.Level2Map>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisLevel2Map_t1438_m25322_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_207.h"
extern TypeInfo InternalEnumerator_1_t3477_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_207MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3477_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21694_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21694_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.Level2Map>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisLevel2Map_t1438_m25324_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.Level2Map>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.Level2Map>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisLevel2Map_t1438_m25324(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.Level2Map>()
#ifndef _MSC_VER
#else
#endif

// Mono.Math.BigInteger
#include "mscorlib_Mono_Math_BigInteger.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<Mono.Math.BigInteger>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisBigInteger_t1455_m25325_GenericMethod;
// T System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisBigInteger_t1455_m25326_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
// T System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#define Array_InternalArray__get_Item_TisBigInteger_t1455_m25326(__this, ___index, method) (( BigInteger_t1455 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<Mono.Math.BigInteger>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisBigInteger_t1455_m25325_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<Mono.Math.BigInteger>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisBigInteger_t1455_m25327_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<Mono.Math.BigInteger>(T)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Math.BigInteger>(T)
#define Array_InternalArray__ICollection_Add_TisBigInteger_t1455_m25327(__this, ___item, method) (( void (*) (Array_t *, BigInteger_t1455 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Math.BigInteger>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo BigInteger_t1455_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Math.BigInteger>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisBigInteger_t1455_m25328_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Math.BigInteger>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Math.BigInteger>(T)
#define Array_InternalArray__ICollection_Contains_TisBigInteger_t1455_m25328(__this, ___item, method) (( bool (*) (Array_t *, BigInteger_t1455 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Math.BigInteger>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Math.BigInteger>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisBigInteger_t1455_m25329_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Math.BigInteger>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Math.BigInteger>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisBigInteger_t1455_m25329(__this, ___array, ___index, method) (( void (*) (Array_t *, BigIntegerU5BU5D_t1462*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Math.BigInteger>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Math.BigInteger>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisBigInteger_t1455_m25330_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Math.BigInteger>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Math.BigInteger>(T)
#define Array_InternalArray__ICollection_Remove_TisBigInteger_t1455_m25330(__this, ___item, method) (( bool (*) (Array_t *, BigInteger_t1455 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Math.BigInteger>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<Mono.Math.BigInteger>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisBigInteger_t1455_m25331_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<Mono.Math.BigInteger>(T)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Math.BigInteger>(T)
#define Array_InternalArray__IndexOf_TisBigInteger_t1455_m25331(__this, ___item, method) (( int32_t (*) (Array_t *, BigInteger_t1455 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Math.BigInteger>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<Mono.Math.BigInteger>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisBigInteger_t1455_m25332_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<Mono.Math.BigInteger>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<Mono.Math.BigInteger>(System.Int32,T)
#define Array_InternalArray__Insert_TisBigInteger_t1455_m25332(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, BigInteger_t1455 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<Mono.Math.BigInteger>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<Mono.Math.BigInteger>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisBigInteger_t1455_m25333_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<Mono.Math.BigInteger>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisBigInteger_t1455_m25334_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<Mono.Math.BigInteger>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<Mono.Math.BigInteger>(System.Int32,T)
#define Array_InternalArray__set_Item_TisBigInteger_t1455_m25334(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, BigInteger_t1455 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<Mono.Math.BigInteger>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<Mono.Math.BigInteger>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisBigInteger_t1455_m25333_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_208.h"
extern TypeInfo InternalEnumerator_1_t3478_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_208MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3478_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21699_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21699_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Math.BigInteger>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisBigInteger_t1455_m25335_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Math.BigInteger>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Math.BigInteger>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisBigInteger_t1455_m25335(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Math.BigInteger>()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisSlot_t1512_m25336_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisSlot_t1512_m25337_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern "C" Slot_t1512  Array_InternalArray__get_Item_TisSlot_t1512_m25337_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t1512_m25337(__this, ___index, method) (( Slot_t1512  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisSlot_t1512_m25337_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSlot_t1512_m25337_GenericMethod;
extern "C" Slot_t1512  Array_InternalArray__get_Item_TisSlot_t1512_m25337_gshared (Array_t * __this, int32_t ___index, MethodInfo* method)
{
	Slot_t1512  V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		int32_t L_3 = ___index;
		ArrayGetGenericValueImpl (__this, L_3, (&V_0));
		Slot_t1512  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisSlot_t1512_m25336_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisSlot_t1512_m25338_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t1512_m25338_gshared (Array_t * __this, Slot_t1512  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisSlot_t1512_m25338(__this, ___item, method) (( void (*) (Array_t *, Slot_t1512 , MethodInfo*))Array_InternalArray__ICollection_Add_TisSlot_t1512_m25338_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Add_TisSlot_t1512_m25338_GenericMethod;
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t1512_m25338_gshared (Array_t * __this, Slot_t1512  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Slot_t1512_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisSlot_t1512_m25339_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t1512_m25339_gshared (Array_t * __this, Slot_t1512  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisSlot_t1512_m25339(__this, ___item, method) (( bool (*) (Array_t *, Slot_t1512 , MethodInfo*))Array_InternalArray__ICollection_Contains_TisSlot_t1512_m25339_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Contains_TisSlot_t1512_m25339_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t1512_m25339_gshared (Array_t * __this, Slot_t1512  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t1512  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		Slot_t1512  L_5 = ___item;
		Slot_t1512  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		Slot_t1512  L_8 = V_2;
		Slot_t1512  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		Slot_t1512  L_11 = V_2;
		Slot_t1512  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisSlot_t1512_m25340_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t1512_m25340_gshared (Array_t * __this, SlotU5BU5D_t1518* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisSlot_t1512_m25340(__this, ___array, ___index, method) (( void (*) (Array_t *, SlotU5BU5D_t1518*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisSlot_t1512_m25340_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
extern Il2CppGenericMethod Array_InternalArray__ICollection_CopyTo_TisSlot_t1512_m25340_GenericMethod;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t1512_m25340_gshared (Array_t * __this, SlotU5BU5D_t1518* ___array, int32_t ___index, MethodInfo* method)
{
	{
		SlotU5BU5D_t1518* L_0 = ___array;
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
		int32_t L_2 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_4 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_4, L_3, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		int32_t L_6 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		SlotU5BU5D_t1518* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = Array_GetLowerBound_m7182(L_7, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		SlotU5BU5D_t1518* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_GetLength_m478(L_9, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t395 * L_11 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_11, (String_t*) &_stringLiteral1172, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		SlotU5BU5D_t1518* L_12 = ___array;
		NullCheck(L_12);
		int32_t L_13 = Array_get_Rank_m5237(L_12, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_15 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_15, L_14, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_18 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_18, (String_t*) &_stringLiteral381, L_17, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		SlotU5BU5D_t1518* L_20 = ___array;
		int32_t L_21 = ___index;
		int32_t L_22 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		Array_Copy_m7220(NULL /*static, unused*/, __this, L_19, (Array_t *)(Array_t *)L_20, L_21, L_22, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisSlot_t1512_m25341_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t1512_m25341_gshared (Array_t * __this, Slot_t1512  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisSlot_t1512_m25341(__this, ___item, method) (( bool (*) (Array_t *, Slot_t1512 , MethodInfo*))Array_InternalArray__ICollection_Remove_TisSlot_t1512_m25341_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Remove_TisSlot_t1512_m25341_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t1512_m25341_gshared (Array_t * __this, Slot_t1512  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisSlot_t1512_m25342_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t1512_m25342_gshared (Array_t * __this, Slot_t1512  ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisSlot_t1512_m25342(__this, ___item, method) (( int32_t (*) (Array_t *, Slot_t1512 , MethodInfo*))Array_InternalArray__IndexOf_TisSlot_t1512_m25342_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
extern Il2CppGenericMethod Array_InternalArray__IndexOf_TisSlot_t1512_m25342_GenericMethod;
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t1512_m25342_gshared (Array_t * __this, Slot_t1512  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t1512  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		Slot_t1512  L_5 = ___item;
		Slot_t1512  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		Slot_t1512  L_8 = V_2;
		Slot_t1512  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		Slot_t1512  L_14 = ___item;
		Slot_t1512  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisSlot_t1512_m25343_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisSlot_t1512_m25343_gshared (Array_t * __this, int32_t ___index, Slot_t1512  ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisSlot_t1512_m25343(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t1512 , MethodInfo*))Array_InternalArray__Insert_TisSlot_t1512_m25343_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__Insert_TisSlot_t1512_m25343_GenericMethod;
extern "C" void Array_InternalArray__Insert_TisSlot_t1512_m25343_gshared (Array_t * __this, int32_t ___index, Slot_t1512  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisSlot_t1512_m25344_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisSlot_t1512_m25345_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisSlot_t1512_m25345_gshared (Array_t * __this, int32_t ___index, Slot_t1512  ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisSlot_t1512_m25345(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t1512 , MethodInfo*))Array_InternalArray__set_Item_TisSlot_t1512_m25345_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__set_Item_TisSlot_t1512_m25345_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisSlot_t1512_m25345_gshared (Array_t * __this, int32_t ___index, Slot_t1512  ___item, MethodInfo* method)
{
	static bool Array_InternalArray__set_Item_TisSlot_t1512_m25345_init;
	if (!Array_InternalArray__set_Item_TisSlot_t1512_m25345_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Array_InternalArray__set_Item_TisSlot_t1512_m25345_init = true;
	}
	ObjectU5BU5D_t76* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		V_0 = ((ObjectU5BU5D_t76*)IsInst(__this, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t76* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t76* L_4 = V_0;
		int32_t L_5 = ___index;
		Slot_t1512  L_6 = ___item;
		Slot_t1512  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		ArraySetGenericValueImpl (__this, L_9, (&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisSlot_t1512_m25344_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_209.h"
extern TypeInfo InternalEnumerator_1_t3482_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_209MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3482_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21706_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21706_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1512_m25346_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1512_m25346_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1512_m25346(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1512_m25346_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
extern Il2CppGenericMethod Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1512_m25346_GenericMethod;
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1512_m25346_gshared (Array_t * __this, MethodInfo* method)
{
	{
		InternalEnumerator_1_t3482  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t3482 *, Array_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t3482  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisSlot_t1519_m25347_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisSlot_t1519_m25348_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern "C" Slot_t1519  Array_InternalArray__get_Item_TisSlot_t1519_m25348_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t1519_m25348(__this, ___index, method) (( Slot_t1519  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisSlot_t1519_m25348_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSlot_t1519_m25348_GenericMethod;
extern "C" Slot_t1519  Array_InternalArray__get_Item_TisSlot_t1519_m25348_gshared (Array_t * __this, int32_t ___index, MethodInfo* method)
{
	Slot_t1519  V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		int32_t L_3 = ___index;
		ArrayGetGenericValueImpl (__this, L_3, (&V_0));
		Slot_t1519  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisSlot_t1519_m25347_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisSlot_t1519_m25349_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t1519_m25349_gshared (Array_t * __this, Slot_t1519  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisSlot_t1519_m25349(__this, ___item, method) (( void (*) (Array_t *, Slot_t1519 , MethodInfo*))Array_InternalArray__ICollection_Add_TisSlot_t1519_m25349_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Add_TisSlot_t1519_m25349_GenericMethod;
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t1519_m25349_gshared (Array_t * __this, Slot_t1519  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Slot_t1519_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisSlot_t1519_m25350_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t1519_m25350_gshared (Array_t * __this, Slot_t1519  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisSlot_t1519_m25350(__this, ___item, method) (( bool (*) (Array_t *, Slot_t1519 , MethodInfo*))Array_InternalArray__ICollection_Contains_TisSlot_t1519_m25350_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Contains_TisSlot_t1519_m25350_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t1519_m25350_gshared (Array_t * __this, Slot_t1519  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t1519  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		Slot_t1519  L_5 = ___item;
		Slot_t1519  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		Slot_t1519  L_8 = V_2;
		Slot_t1519  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		Slot_t1519  L_11 = V_2;
		Slot_t1519  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisSlot_t1519_m25351_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t1519_m25351_gshared (Array_t * __this, SlotU5BU5D_t1522* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisSlot_t1519_m25351(__this, ___array, ___index, method) (( void (*) (Array_t *, SlotU5BU5D_t1522*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisSlot_t1519_m25351_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
extern Il2CppGenericMethod Array_InternalArray__ICollection_CopyTo_TisSlot_t1519_m25351_GenericMethod;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t1519_m25351_gshared (Array_t * __this, SlotU5BU5D_t1522* ___array, int32_t ___index, MethodInfo* method)
{
	{
		SlotU5BU5D_t1522* L_0 = ___array;
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
		int32_t L_2 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_4 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_4, L_3, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		int32_t L_6 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		SlotU5BU5D_t1522* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = Array_GetLowerBound_m7182(L_7, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		SlotU5BU5D_t1522* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_GetLength_m478(L_9, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t395 * L_11 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_11, (String_t*) &_stringLiteral1172, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		SlotU5BU5D_t1522* L_12 = ___array;
		NullCheck(L_12);
		int32_t L_13 = Array_get_Rank_m5237(L_12, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_15 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_15, L_14, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_18 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_18, (String_t*) &_stringLiteral381, L_17, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		SlotU5BU5D_t1522* L_20 = ___array;
		int32_t L_21 = ___index;
		int32_t L_22 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		Array_Copy_m7220(NULL /*static, unused*/, __this, L_19, (Array_t *)(Array_t *)L_20, L_21, L_22, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisSlot_t1519_m25352_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t1519_m25352_gshared (Array_t * __this, Slot_t1519  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisSlot_t1519_m25352(__this, ___item, method) (( bool (*) (Array_t *, Slot_t1519 , MethodInfo*))Array_InternalArray__ICollection_Remove_TisSlot_t1519_m25352_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Remove_TisSlot_t1519_m25352_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t1519_m25352_gshared (Array_t * __this, Slot_t1519  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisSlot_t1519_m25353_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t1519_m25353_gshared (Array_t * __this, Slot_t1519  ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisSlot_t1519_m25353(__this, ___item, method) (( int32_t (*) (Array_t *, Slot_t1519 , MethodInfo*))Array_InternalArray__IndexOf_TisSlot_t1519_m25353_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
extern Il2CppGenericMethod Array_InternalArray__IndexOf_TisSlot_t1519_m25353_GenericMethod;
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t1519_m25353_gshared (Array_t * __this, Slot_t1519  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t1519  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		Slot_t1519  L_5 = ___item;
		Slot_t1519  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		Slot_t1519  L_8 = V_2;
		Slot_t1519  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		Slot_t1519  L_14 = ___item;
		Slot_t1519  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisSlot_t1519_m25354_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisSlot_t1519_m25354_gshared (Array_t * __this, int32_t ___index, Slot_t1519  ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisSlot_t1519_m25354(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t1519 , MethodInfo*))Array_InternalArray__Insert_TisSlot_t1519_m25354_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__Insert_TisSlot_t1519_m25354_GenericMethod;
extern "C" void Array_InternalArray__Insert_TisSlot_t1519_m25354_gshared (Array_t * __this, int32_t ___index, Slot_t1519  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisSlot_t1519_m25355_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisSlot_t1519_m25356_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisSlot_t1519_m25356_gshared (Array_t * __this, int32_t ___index, Slot_t1519  ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisSlot_t1519_m25356(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t1519 , MethodInfo*))Array_InternalArray__set_Item_TisSlot_t1519_m25356_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__set_Item_TisSlot_t1519_m25356_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisSlot_t1519_m25356_gshared (Array_t * __this, int32_t ___index, Slot_t1519  ___item, MethodInfo* method)
{
	static bool Array_InternalArray__set_Item_TisSlot_t1519_m25356_init;
	if (!Array_InternalArray__set_Item_TisSlot_t1519_m25356_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Array_InternalArray__set_Item_TisSlot_t1519_m25356_init = true;
	}
	ObjectU5BU5D_t76* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		V_0 = ((ObjectU5BU5D_t76*)IsInst(__this, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t76* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t76* L_4 = V_0;
		int32_t L_5 = ___index;
		Slot_t1519  L_6 = ___item;
		Slot_t1519  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		ArraySetGenericValueImpl (__this, L_9, (&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisSlot_t1519_m25355_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_210.h"
extern TypeInfo InternalEnumerator_1_t3483_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_210MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3483_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21711_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21711_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1519_m25357_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1519_m25357_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1519_m25357(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1519_m25357_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
extern Il2CppGenericMethod Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1519_m25357_GenericMethod;
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t1519_m25357_gshared (Array_t * __this, MethodInfo* method)
{
	{
		InternalEnumerator_1_t3483  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t3483 *, Array_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t3483  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Diagnostics.StackFrame>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisStackFrame_t793_m25358_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Diagnostics.StackFrame>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisStackFrame_t793_m25359_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Diagnostics.StackFrame>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Diagnostics.StackFrame>(System.Int32)
#define Array_InternalArray__get_Item_TisStackFrame_t793_m25359(__this, ___index, method) (( StackFrame_t793 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Diagnostics.StackFrame>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Diagnostics.StackFrame>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisStackFrame_t793_m25358_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Diagnostics.StackFrame>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisStackFrame_t793_m25360_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Diagnostics.StackFrame>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Diagnostics.StackFrame>(T)
#define Array_InternalArray__ICollection_Add_TisStackFrame_t793_m25360(__this, ___item, method) (( void (*) (Array_t *, StackFrame_t793 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Diagnostics.StackFrame>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo StackFrame_t793_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Diagnostics.StackFrame>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisStackFrame_t793_m25361_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Diagnostics.StackFrame>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Diagnostics.StackFrame>(T)
#define Array_InternalArray__ICollection_Contains_TisStackFrame_t793_m25361(__this, ___item, method) (( bool (*) (Array_t *, StackFrame_t793 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Diagnostics.StackFrame>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Diagnostics.StackFrame>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisStackFrame_t793_m25362_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Diagnostics.StackFrame>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Diagnostics.StackFrame>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisStackFrame_t793_m25362(__this, ___array, ___index, method) (( void (*) (Array_t *, StackFrameU5BU5D_t1530*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Diagnostics.StackFrame>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Diagnostics.StackFrame>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisStackFrame_t793_m25363_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Diagnostics.StackFrame>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Diagnostics.StackFrame>(T)
#define Array_InternalArray__ICollection_Remove_TisStackFrame_t793_m25363(__this, ___item, method) (( bool (*) (Array_t *, StackFrame_t793 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Diagnostics.StackFrame>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Diagnostics.StackFrame>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisStackFrame_t793_m25364_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Diagnostics.StackFrame>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Diagnostics.StackFrame>(T)
#define Array_InternalArray__IndexOf_TisStackFrame_t793_m25364(__this, ___item, method) (( int32_t (*) (Array_t *, StackFrame_t793 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Diagnostics.StackFrame>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Diagnostics.StackFrame>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisStackFrame_t793_m25365_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Diagnostics.StackFrame>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Diagnostics.StackFrame>(System.Int32,T)
#define Array_InternalArray__Insert_TisStackFrame_t793_m25365(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, StackFrame_t793 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Diagnostics.StackFrame>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Diagnostics.StackFrame>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisStackFrame_t793_m25366_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Diagnostics.StackFrame>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisStackFrame_t793_m25367_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Diagnostics.StackFrame>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Diagnostics.StackFrame>(System.Int32,T)
#define Array_InternalArray__set_Item_TisStackFrame_t793_m25367(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, StackFrame_t793 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Diagnostics.StackFrame>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Diagnostics.StackFrame>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisStackFrame_t793_m25366_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_211.h"
extern TypeInfo InternalEnumerator_1_t3484_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_211MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3484_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21716_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21716_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Diagnostics.StackFrame>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisStackFrame_t793_m25368_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Diagnostics.StackFrame>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Diagnostics.StackFrame>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisStackFrame_t793_m25368(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Diagnostics.StackFrame>()
#ifndef _MSC_VER
#else
#endif

// System.Globalization.Calendar
#include "mscorlib_System_Globalization_Calendar.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Globalization.Calendar>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisCalendar_t1531_m25369_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Globalization.Calendar>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisCalendar_t1531_m25370_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Globalization.Calendar>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Globalization.Calendar>(System.Int32)
#define Array_InternalArray__get_Item_TisCalendar_t1531_m25370(__this, ___index, method) (( Calendar_t1531 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Globalization.Calendar>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Globalization.Calendar>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisCalendar_t1531_m25369_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Globalization.Calendar>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisCalendar_t1531_m25371_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Globalization.Calendar>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Globalization.Calendar>(T)
#define Array_InternalArray__ICollection_Add_TisCalendar_t1531_m25371(__this, ___item, method) (( void (*) (Array_t *, Calendar_t1531 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Globalization.Calendar>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Calendar_t1531_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Globalization.Calendar>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisCalendar_t1531_m25372_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Globalization.Calendar>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Globalization.Calendar>(T)
#define Array_InternalArray__ICollection_Contains_TisCalendar_t1531_m25372(__this, ___item, method) (( bool (*) (Array_t *, Calendar_t1531 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Globalization.Calendar>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Globalization.Calendar>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisCalendar_t1531_m25373_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Globalization.Calendar>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Globalization.Calendar>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisCalendar_t1531_m25373(__this, ___array, ___index, method) (( void (*) (Array_t *, CalendarU5BU5D_t1536*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Globalization.Calendar>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Globalization.Calendar>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisCalendar_t1531_m25374_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Globalization.Calendar>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Globalization.Calendar>(T)
#define Array_InternalArray__ICollection_Remove_TisCalendar_t1531_m25374(__this, ___item, method) (( bool (*) (Array_t *, Calendar_t1531 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Globalization.Calendar>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Globalization.Calendar>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisCalendar_t1531_m25375_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Globalization.Calendar>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Globalization.Calendar>(T)
#define Array_InternalArray__IndexOf_TisCalendar_t1531_m25375(__this, ___item, method) (( int32_t (*) (Array_t *, Calendar_t1531 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Globalization.Calendar>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Globalization.Calendar>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisCalendar_t1531_m25376_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Globalization.Calendar>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Globalization.Calendar>(System.Int32,T)
#define Array_InternalArray__Insert_TisCalendar_t1531_m25376(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Calendar_t1531 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Globalization.Calendar>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Globalization.Calendar>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisCalendar_t1531_m25377_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Globalization.Calendar>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisCalendar_t1531_m25378_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Globalization.Calendar>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Globalization.Calendar>(System.Int32,T)
#define Array_InternalArray__set_Item_TisCalendar_t1531_m25378(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Calendar_t1531 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Globalization.Calendar>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Globalization.Calendar>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisCalendar_t1531_m25377_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Globalization.Calendar>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_212.h"
extern TypeInfo InternalEnumerator_1_t3485_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Globalization.Calendar>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_212MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3485_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21721_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21721_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Globalization.Calendar>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisCalendar_t1531_m25379_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Globalization.Calendar>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Globalization.Calendar>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisCalendar_t1531_m25379(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Globalization.Calendar>()
#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilder.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.ModuleBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisModuleBuilder_t1592_m25380_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisModuleBuilder_t1592_m25381_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisModuleBuilder_t1592_m25381(__this, ___index, method) (( ModuleBuilder_t1592 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.ModuleBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisModuleBuilder_t1592_m25380_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ModuleBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisModuleBuilder_t1592_m25382_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ModuleBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ModuleBuilder>(T)
#define Array_InternalArray__ICollection_Add_TisModuleBuilder_t1592_m25382(__this, ___item, method) (( void (*) (Array_t *, ModuleBuilder_t1592 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ModuleBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo ModuleBuilder_t1592_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ModuleBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisModuleBuilder_t1592_m25383_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ModuleBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ModuleBuilder>(T)
#define Array_InternalArray__ICollection_Contains_TisModuleBuilder_t1592_m25383(__this, ___item, method) (( bool (*) (Array_t *, ModuleBuilder_t1592 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ModuleBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ModuleBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisModuleBuilder_t1592_m25384_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ModuleBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ModuleBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisModuleBuilder_t1592_m25384(__this, ___array, ___index, method) (( void (*) (Array_t *, ModuleBuilderU5BU5D_t1578*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ModuleBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ModuleBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisModuleBuilder_t1592_m25385_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ModuleBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ModuleBuilder>(T)
#define Array_InternalArray__ICollection_Remove_TisModuleBuilder_t1592_m25385(__this, ___item, method) (( bool (*) (Array_t *, ModuleBuilder_t1592 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ModuleBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ModuleBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisModuleBuilder_t1592_m25386_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ModuleBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ModuleBuilder>(T)
#define Array_InternalArray__IndexOf_TisModuleBuilder_t1592_m25386(__this, ___item, method) (( int32_t (*) (Array_t *, ModuleBuilder_t1592 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ModuleBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ModuleBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisModuleBuilder_t1592_m25387_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ModuleBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ModuleBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_TisModuleBuilder_t1592_m25387(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, ModuleBuilder_t1592 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ModuleBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.ModuleBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisModuleBuilder_t1592_m25388_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisModuleBuilder_t1592_m25389_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_TisModuleBuilder_t1592_m25389(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, ModuleBuilder_t1592 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.ModuleBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisModuleBuilder_t1592_m25388_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_213.h"
extern TypeInfo InternalEnumerator_1_t3486_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_213MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3486_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21726_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21726_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ModuleBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisModuleBuilder_t1592_m25390_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ModuleBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ModuleBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisModuleBuilder_t1592_m25390(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ModuleBuilder>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_Tis_ModuleBuilder_t2377_m25391_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_Tis_ModuleBuilder_t2377_m25392_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ModuleBuilder_t2377_m25392(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_Tis_ModuleBuilder_t2377_m25391_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ModuleBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_Tis_ModuleBuilder_t2377_m25393_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ModuleBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ModuleBuilder>(T)
#define Array_InternalArray__ICollection_Add_Tis_ModuleBuilder_t2377_m25393(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ModuleBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo _ModuleBuilder_t2377_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ModuleBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_Tis_ModuleBuilder_t2377_m25394_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ModuleBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ModuleBuilder>(T)
#define Array_InternalArray__ICollection_Contains_Tis_ModuleBuilder_t2377_m25394(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ModuleBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ModuleBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_Tis_ModuleBuilder_t2377_m25395_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ModuleBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ModuleBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_Tis_ModuleBuilder_t2377_m25395(__this, ___array, ___index, method) (( void (*) (Array_t *, _ModuleBuilderU5BU5D_t3804*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ModuleBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ModuleBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_Tis_ModuleBuilder_t2377_m25396_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ModuleBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ModuleBuilder>(T)
#define Array_InternalArray__ICollection_Remove_Tis_ModuleBuilder_t2377_m25396(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ModuleBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ModuleBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_Tis_ModuleBuilder_t2377_m25397_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ModuleBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ModuleBuilder>(T)
#define Array_InternalArray__IndexOf_Tis_ModuleBuilder_t2377_m25397(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ModuleBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_Tis_ModuleBuilder_t2377_m25398_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_Tis_ModuleBuilder_t2377_m25398(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_Tis_ModuleBuilder_t2377_m25399_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_Tis_ModuleBuilder_t2377_m25400_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_Tis_ModuleBuilder_t2377_m25400(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._ModuleBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_Tis_ModuleBuilder_t2377_m25399_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_214.h"
extern TypeInfo InternalEnumerator_1_t3487_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_214MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3487_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21731_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21731_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ModuleBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_Tis_ModuleBuilder_t2377_m25401_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ModuleBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ModuleBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_Tis_ModuleBuilder_t2377_m25401(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ModuleBuilder>()
#ifndef _MSC_VER
#else
#endif

// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Reflection.Module>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisModule_t1409_m25402_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Reflection.Module>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisModule_t1409_m25403_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Reflection.Module>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Reflection.Module>(System.Int32)
#define Array_InternalArray__get_Item_TisModule_t1409_m25403(__this, ___index, method) (( Module_t1409 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Reflection.Module>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Reflection.Module>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisModule_t1409_m25402_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Module>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisModule_t1409_m25404_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Module>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Module>(T)
#define Array_InternalArray__ICollection_Add_TisModule_t1409_m25404(__this, ___item, method) (( void (*) (Array_t *, Module_t1409 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Module>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Module_t1409_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Module>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisModule_t1409_m25405_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Module>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Module>(T)
#define Array_InternalArray__ICollection_Contains_TisModule_t1409_m25405(__this, ___item, method) (( bool (*) (Array_t *, Module_t1409 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Module>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Module>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisModule_t1409_m25406_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Module>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Module>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisModule_t1409_m25406(__this, ___array, ___index, method) (( void (*) (Array_t *, ModuleU5BU5D_t1580*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Module>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Module>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisModule_t1409_m25407_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Module>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Module>(T)
#define Array_InternalArray__ICollection_Remove_TisModule_t1409_m25407(__this, ___item, method) (( bool (*) (Array_t *, Module_t1409 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Module>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Module>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisModule_t1409_m25408_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Module>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Module>(T)
#define Array_InternalArray__IndexOf_TisModule_t1409_m25408(__this, ___item, method) (( int32_t (*) (Array_t *, Module_t1409 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Module>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Reflection.Module>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisModule_t1409_m25409_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Reflection.Module>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Module>(System.Int32,T)
#define Array_InternalArray__Insert_TisModule_t1409_m25409(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Module_t1409 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Module>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Reflection.Module>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisModule_t1409_m25410_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Module>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisModule_t1409_m25411_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Reflection.Module>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Module>(System.Int32,T)
#define Array_InternalArray__set_Item_TisModule_t1409_m25411(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Module_t1409 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Module>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Reflection.Module>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisModule_t1409_m25410_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Reflection.Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_215.h"
extern TypeInfo InternalEnumerator_1_t3488_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_215MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3488_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21736_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21736_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Module>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisModule_t1409_m25412_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Module>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Module>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisModule_t1409_m25412(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Module>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._Module>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_Tis_Module_t2378_m25413_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Module>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_Tis_Module_t2378_m25414_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Module>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Module>(System.Int32)
#define Array_InternalArray__get_Item_Tis_Module_t2378_m25414(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Module>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._Module>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_Tis_Module_t2378_m25413_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._Module>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_Tis_Module_t2378_m25415_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._Module>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._Module>(T)
#define Array_InternalArray__ICollection_Add_Tis_Module_t2378_m25415(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._Module>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo _Module_t2378_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._Module>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_Tis_Module_t2378_m25416_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._Module>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._Module>(T)
#define Array_InternalArray__ICollection_Contains_Tis_Module_t2378_m25416(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._Module>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._Module>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_Tis_Module_t2378_m25417_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._Module>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._Module>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_Tis_Module_t2378_m25417(__this, ___array, ___index, method) (( void (*) (Array_t *, _ModuleU5BU5D_t3805*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._Module>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._Module>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_Tis_Module_t2378_m25418_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._Module>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._Module>(T)
#define Array_InternalArray__ICollection_Remove_Tis_Module_t2378_m25418(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._Module>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._Module>(T)
extern MethodInfo Array_InternalArray__IndexOf_Tis_Module_t2378_m25419_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._Module>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._Module>(T)
#define Array_InternalArray__IndexOf_Tis_Module_t2378_m25419(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._Module>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._Module>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_Tis_Module_t2378_m25420_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._Module>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._Module>(System.Int32,T)
#define Array_InternalArray__Insert_Tis_Module_t2378_m25420(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._Module>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._Module>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_Tis_Module_t2378_m25421_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._Module>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_Tis_Module_t2378_m25422_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._Module>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._Module>(System.Int32,T)
#define Array_InternalArray__set_Item_Tis_Module_t2378_m25422(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._Module>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._Module>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_Tis_Module_t2378_m25421_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_216.h"
extern TypeInfo InternalEnumerator_1_t3489_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_216MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3489_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21741_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21741_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._Module>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_Tis_Module_t2378_m25423_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._Module>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._Module>()
#define Array_InternalArray__IEnumerable_GetEnumerator_Tis_Module_t2378_m25423(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._Module>()
#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilder.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.ParameterBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisParameterBuilder_t1593_m25424_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisParameterBuilder_t1593_m25425_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisParameterBuilder_t1593_m25425(__this, ___index, method) (( ParameterBuilder_t1593 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.ParameterBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisParameterBuilder_t1593_m25424_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ParameterBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisParameterBuilder_t1593_m25426_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ParameterBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ParameterBuilder>(T)
#define Array_InternalArray__ICollection_Add_TisParameterBuilder_t1593_m25426(__this, ___item, method) (( void (*) (Array_t *, ParameterBuilder_t1593 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo ParameterBuilder_t1593_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ParameterBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisParameterBuilder_t1593_m25427_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ParameterBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ParameterBuilder>(T)
#define Array_InternalArray__ICollection_Contains_TisParameterBuilder_t1593_m25427(__this, ___item, method) (( bool (*) (Array_t *, ParameterBuilder_t1593 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ParameterBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisParameterBuilder_t1593_m25428_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ParameterBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ParameterBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisParameterBuilder_t1593_m25428(__this, ___array, ___index, method) (( void (*) (Array_t *, ParameterBuilderU5BU5D_t1583*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ParameterBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ParameterBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisParameterBuilder_t1593_m25429_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ParameterBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ParameterBuilder>(T)
#define Array_InternalArray__ICollection_Remove_TisParameterBuilder_t1593_m25429(__this, ___item, method) (( bool (*) (Array_t *, ParameterBuilder_t1593 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ParameterBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisParameterBuilder_t1593_m25430_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ParameterBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ParameterBuilder>(T)
#define Array_InternalArray__IndexOf_TisParameterBuilder_t1593_m25430(__this, ___item, method) (( int32_t (*) (Array_t *, ParameterBuilder_t1593 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ParameterBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisParameterBuilder_t1593_m25431_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ParameterBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ParameterBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_TisParameterBuilder_t1593_m25431(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, ParameterBuilder_t1593 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ParameterBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.ParameterBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisParameterBuilder_t1593_m25432_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisParameterBuilder_t1593_m25433_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_TisParameterBuilder_t1593_m25433(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, ParameterBuilder_t1593 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.ParameterBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisParameterBuilder_t1593_m25432_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_217.h"
extern TypeInfo InternalEnumerator_1_t3490_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_217MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3490_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21746_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21746_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ParameterBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisParameterBuilder_t1593_m25434_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ParameterBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ParameterBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisParameterBuilder_t1593_m25434(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ParameterBuilder>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_Tis_ParameterBuilder_t2379_m25435_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_Tis_ParameterBuilder_t2379_m25436_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ParameterBuilder_t2379_m25436(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_Tis_ParameterBuilder_t2379_m25435_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ParameterBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_Tis_ParameterBuilder_t2379_m25437_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ParameterBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ParameterBuilder>(T)
#define Array_InternalArray__ICollection_Add_Tis_ParameterBuilder_t2379_m25437(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo _ParameterBuilder_t2379_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ParameterBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_Tis_ParameterBuilder_t2379_m25438_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ParameterBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ParameterBuilder>(T)
#define Array_InternalArray__ICollection_Contains_Tis_ParameterBuilder_t2379_m25438(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ParameterBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_Tis_ParameterBuilder_t2379_m25439_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ParameterBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ParameterBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_Tis_ParameterBuilder_t2379_m25439(__this, ___array, ___index, method) (( void (*) (Array_t *, _ParameterBuilderU5BU5D_t3806*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ParameterBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ParameterBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_Tis_ParameterBuilder_t2379_m25440_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ParameterBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ParameterBuilder>(T)
#define Array_InternalArray__ICollection_Remove_Tis_ParameterBuilder_t2379_m25440(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ParameterBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_Tis_ParameterBuilder_t2379_m25441_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ParameterBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ParameterBuilder>(T)
#define Array_InternalArray__IndexOf_Tis_ParameterBuilder_t2379_m25441(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_Tis_ParameterBuilder_t2379_m25442_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_Tis_ParameterBuilder_t2379_m25442(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_Tis_ParameterBuilder_t2379_m25443_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_Tis_ParameterBuilder_t2379_m25444_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_Tis_ParameterBuilder_t2379_m25444(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._ParameterBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_Tis_ParameterBuilder_t2379_m25443_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_218.h"
extern TypeInfo InternalEnumerator_1_t3491_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_218MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3491_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21751_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21751_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ParameterBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_Tis_ParameterBuilder_t2379_m25445_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ParameterBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ParameterBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_Tis_ParameterBuilder_t2379_m25445(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ParameterBuilder>()
#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilder.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisGenericTypeParameterBuilder_t1590_m25446_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisGenericTypeParameterBuilder_t1590_m25447_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisGenericTypeParameterBuilder_t1590_m25447(__this, ___index, method) (( GenericTypeParameterBuilder_t1590 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisGenericTypeParameterBuilder_t1590_m25446_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisGenericTypeParameterBuilder_t1590_m25448_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
#define Array_InternalArray__ICollection_Add_TisGenericTypeParameterBuilder_t1590_m25448(__this, ___item, method) (( void (*) (Array_t *, GenericTypeParameterBuilder_t1590 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo GenericTypeParameterBuilder_t1590_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisGenericTypeParameterBuilder_t1590_m25449_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
#define Array_InternalArray__ICollection_Contains_TisGenericTypeParameterBuilder_t1590_m25449(__this, ___item, method) (( bool (*) (Array_t *, GenericTypeParameterBuilder_t1590 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.GenericTypeParameterBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisGenericTypeParameterBuilder_t1590_m25450_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.GenericTypeParameterBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.GenericTypeParameterBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisGenericTypeParameterBuilder_t1590_m25450(__this, ___array, ___index, method) (( void (*) (Array_t *, GenericTypeParameterBuilderU5BU5D_t1591*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.GenericTypeParameterBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisGenericTypeParameterBuilder_t1590_m25451_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
#define Array_InternalArray__ICollection_Remove_TisGenericTypeParameterBuilder_t1590_m25451(__this, ___item, method) (( bool (*) (Array_t *, GenericTypeParameterBuilder_t1590 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisGenericTypeParameterBuilder_t1590_m25452_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
#define Array_InternalArray__IndexOf_TisGenericTypeParameterBuilder_t1590_m25452(__this, ___item, method) (( int32_t (*) (Array_t *, GenericTypeParameterBuilder_t1590 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.GenericTypeParameterBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisGenericTypeParameterBuilder_t1590_m25453_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_TisGenericTypeParameterBuilder_t1590_m25453(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, GenericTypeParameterBuilder_t1590 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisGenericTypeParameterBuilder_t1590_m25454_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisGenericTypeParameterBuilder_t1590_m25455_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_TisGenericTypeParameterBuilder_t1590_m25455(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, GenericTypeParameterBuilder_t1590 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisGenericTypeParameterBuilder_t1590_m25454_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_219.h"
extern TypeInfo InternalEnumerator_1_t3492_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_219MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3492_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21756_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21756_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.GenericTypeParameterBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisGenericTypeParameterBuilder_t1590_m25456_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.GenericTypeParameterBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.GenericTypeParameterBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisGenericTypeParameterBuilder_t1590_m25456(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.GenericTypeParameterBuilder>()
#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilder.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.MethodBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisMethodBuilder_t1589_m25457_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.MethodBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisMethodBuilder_t1589_m25458_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Reflection.Emit.MethodBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.MethodBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisMethodBuilder_t1589_m25458(__this, ___index, method) (( MethodBuilder_t1589 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.MethodBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.MethodBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisMethodBuilder_t1589_m25457_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.MethodBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisMethodBuilder_t1589_m25459_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.MethodBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.MethodBuilder>(T)
#define Array_InternalArray__ICollection_Add_TisMethodBuilder_t1589_m25459(__this, ___item, method) (( void (*) (Array_t *, MethodBuilder_t1589 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.MethodBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo MethodBuilder_t1589_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.MethodBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisMethodBuilder_t1589_m25460_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.MethodBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.MethodBuilder>(T)
#define Array_InternalArray__ICollection_Contains_TisMethodBuilder_t1589_m25460(__this, ___item, method) (( bool (*) (Array_t *, MethodBuilder_t1589 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.MethodBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.MethodBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisMethodBuilder_t1589_m25461_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.MethodBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.MethodBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisMethodBuilder_t1589_m25461(__this, ___array, ___index, method) (( void (*) (Array_t *, MethodBuilderU5BU5D_t1595*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.MethodBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.MethodBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisMethodBuilder_t1589_m25462_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.MethodBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.MethodBuilder>(T)
#define Array_InternalArray__ICollection_Remove_TisMethodBuilder_t1589_m25462(__this, ___item, method) (( bool (*) (Array_t *, MethodBuilder_t1589 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.MethodBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.MethodBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisMethodBuilder_t1589_m25463_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.MethodBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.MethodBuilder>(T)
#define Array_InternalArray__IndexOf_TisMethodBuilder_t1589_m25463(__this, ___item, method) (( int32_t (*) (Array_t *, MethodBuilder_t1589 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.MethodBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.MethodBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisMethodBuilder_t1589_m25464_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.MethodBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.MethodBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_TisMethodBuilder_t1589_m25464(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, MethodBuilder_t1589 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.MethodBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.MethodBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisMethodBuilder_t1589_m25465_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.MethodBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisMethodBuilder_t1589_m25466_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.MethodBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.MethodBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_TisMethodBuilder_t1589_m25466(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, MethodBuilder_t1589 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.MethodBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.MethodBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisMethodBuilder_t1589_m25465_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_220.h"
extern TypeInfo InternalEnumerator_1_t3493_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_220MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3493_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21761_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21761_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.MethodBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisMethodBuilder_t1589_m25467_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.MethodBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.MethodBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisMethodBuilder_t1589_m25467(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.MethodBuilder>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._MethodBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_Tis_MethodBuilder_t2375_m25468_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_Tis_MethodBuilder_t2375_m25469_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MethodBuilder_t2375_m25469(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._MethodBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_Tis_MethodBuilder_t2375_m25468_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._MethodBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_Tis_MethodBuilder_t2375_m25470_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._MethodBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._MethodBuilder>(T)
#define Array_InternalArray__ICollection_Add_Tis_MethodBuilder_t2375_m25470(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._MethodBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo _MethodBuilder_t2375_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._MethodBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_Tis_MethodBuilder_t2375_m25471_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._MethodBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._MethodBuilder>(T)
#define Array_InternalArray__ICollection_Contains_Tis_MethodBuilder_t2375_m25471(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._MethodBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._MethodBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_Tis_MethodBuilder_t2375_m25472_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._MethodBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._MethodBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_Tis_MethodBuilder_t2375_m25472(__this, ___array, ___index, method) (( void (*) (Array_t *, _MethodBuilderU5BU5D_t3807*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._MethodBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._MethodBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_Tis_MethodBuilder_t2375_m25473_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._MethodBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._MethodBuilder>(T)
#define Array_InternalArray__ICollection_Remove_Tis_MethodBuilder_t2375_m25473(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._MethodBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._MethodBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_Tis_MethodBuilder_t2375_m25474_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._MethodBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._MethodBuilder>(T)
#define Array_InternalArray__IndexOf_Tis_MethodBuilder_t2375_m25474(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._MethodBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._MethodBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_Tis_MethodBuilder_t2375_m25475_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._MethodBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._MethodBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_Tis_MethodBuilder_t2375_m25475(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._MethodBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._MethodBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_Tis_MethodBuilder_t2375_m25476_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_Tis_MethodBuilder_t2375_m25477_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_Tis_MethodBuilder_t2375_m25477(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._MethodBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_Tis_MethodBuilder_t2375_m25476_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_221.h"
extern TypeInfo InternalEnumerator_1_t3494_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_221MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3494_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21766_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21766_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._MethodBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_Tis_MethodBuilder_t2375_m25478_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._MethodBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._MethodBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_Tis_MethodBuilder_t2375_m25478(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._MethodBuilder>()
#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.ConstructorBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisConstructorBuilder_t1584_m25479_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisConstructorBuilder_t1584_m25480_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisConstructorBuilder_t1584_m25480(__this, ___index, method) (( ConstructorBuilder_t1584 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.ConstructorBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisConstructorBuilder_t1584_m25479_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ConstructorBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisConstructorBuilder_t1584_m25481_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ConstructorBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ConstructorBuilder>(T)
#define Array_InternalArray__ICollection_Add_TisConstructorBuilder_t1584_m25481(__this, ___item, method) (( void (*) (Array_t *, ConstructorBuilder_t1584 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.ConstructorBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo ConstructorBuilder_t1584_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ConstructorBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisConstructorBuilder_t1584_m25482_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ConstructorBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ConstructorBuilder>(T)
#define Array_InternalArray__ICollection_Contains_TisConstructorBuilder_t1584_m25482(__this, ___item, method) (( bool (*) (Array_t *, ConstructorBuilder_t1584 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.ConstructorBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ConstructorBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisConstructorBuilder_t1584_m25483_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ConstructorBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ConstructorBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisConstructorBuilder_t1584_m25483(__this, ___array, ___index, method) (( void (*) (Array_t *, ConstructorBuilderU5BU5D_t1596*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.ConstructorBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ConstructorBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisConstructorBuilder_t1584_m25484_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ConstructorBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ConstructorBuilder>(T)
#define Array_InternalArray__ICollection_Remove_TisConstructorBuilder_t1584_m25484(__this, ___item, method) (( bool (*) (Array_t *, ConstructorBuilder_t1584 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.ConstructorBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ConstructorBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisConstructorBuilder_t1584_m25485_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ConstructorBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ConstructorBuilder>(T)
#define Array_InternalArray__IndexOf_TisConstructorBuilder_t1584_m25485(__this, ___item, method) (( int32_t (*) (Array_t *, ConstructorBuilder_t1584 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.ConstructorBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ConstructorBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisConstructorBuilder_t1584_m25486_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ConstructorBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ConstructorBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_TisConstructorBuilder_t1584_m25486(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, ConstructorBuilder_t1584 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.ConstructorBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.ConstructorBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisConstructorBuilder_t1584_m25487_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisConstructorBuilder_t1584_m25488_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_TisConstructorBuilder_t1584_m25488(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, ConstructorBuilder_t1584 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.ConstructorBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisConstructorBuilder_t1584_m25487_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_222.h"
extern TypeInfo InternalEnumerator_1_t3495_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_222MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3495_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21771_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21771_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ConstructorBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisConstructorBuilder_t1584_m25489_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ConstructorBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ConstructorBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisConstructorBuilder_t1584_m25489(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.ConstructorBuilder>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_Tis_ConstructorBuilder_t2369_m25490_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_Tis_ConstructorBuilder_t2369_m25491_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ConstructorBuilder_t2369_m25491(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_Tis_ConstructorBuilder_t2369_m25490_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ConstructorBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_Tis_ConstructorBuilder_t2369_m25492_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ConstructorBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ConstructorBuilder>(T)
#define Array_InternalArray__ICollection_Add_Tis_ConstructorBuilder_t2369_m25492(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._ConstructorBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo _ConstructorBuilder_t2369_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ConstructorBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_Tis_ConstructorBuilder_t2369_m25493_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ConstructorBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ConstructorBuilder>(T)
#define Array_InternalArray__ICollection_Contains_Tis_ConstructorBuilder_t2369_m25493(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._ConstructorBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ConstructorBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_Tis_ConstructorBuilder_t2369_m25494_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ConstructorBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ConstructorBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_Tis_ConstructorBuilder_t2369_m25494(__this, ___array, ___index, method) (( void (*) (Array_t *, _ConstructorBuilderU5BU5D_t3808*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._ConstructorBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ConstructorBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_Tis_ConstructorBuilder_t2369_m25495_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ConstructorBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ConstructorBuilder>(T)
#define Array_InternalArray__ICollection_Remove_Tis_ConstructorBuilder_t2369_m25495(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._ConstructorBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ConstructorBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_Tis_ConstructorBuilder_t2369_m25496_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ConstructorBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ConstructorBuilder>(T)
#define Array_InternalArray__IndexOf_Tis_ConstructorBuilder_t2369_m25496(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._ConstructorBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_Tis_ConstructorBuilder_t2369_m25497_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_Tis_ConstructorBuilder_t2369_m25497(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_Tis_ConstructorBuilder_t2369_m25498_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_Tis_ConstructorBuilder_t2369_m25499_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_Tis_ConstructorBuilder_t2369_m25499(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_Tis_ConstructorBuilder_t2369_m25498_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_223.h"
extern TypeInfo InternalEnumerator_1_t3496_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_223MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3496_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21776_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21776_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ConstructorBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_Tis_ConstructorBuilder_t2369_m25500_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ConstructorBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ConstructorBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_Tis_ConstructorBuilder_t2369_m25500(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._ConstructorBuilder>()
#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.PropertyBuilder
#include "mscorlib_System_Reflection_Emit_PropertyBuilder.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.PropertyBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisPropertyBuilder_t1594_m25501_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.PropertyBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisPropertyBuilder_t1594_m25502_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Reflection.Emit.PropertyBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.PropertyBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisPropertyBuilder_t1594_m25502(__this, ___index, method) (( PropertyBuilder_t1594 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.PropertyBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.PropertyBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisPropertyBuilder_t1594_m25501_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.PropertyBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisPropertyBuilder_t1594_m25503_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.PropertyBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.PropertyBuilder>(T)
#define Array_InternalArray__ICollection_Add_TisPropertyBuilder_t1594_m25503(__this, ___item, method) (( void (*) (Array_t *, PropertyBuilder_t1594 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.PropertyBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo PropertyBuilder_t1594_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.PropertyBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisPropertyBuilder_t1594_m25504_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.PropertyBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.PropertyBuilder>(T)
#define Array_InternalArray__ICollection_Contains_TisPropertyBuilder_t1594_m25504(__this, ___item, method) (( bool (*) (Array_t *, PropertyBuilder_t1594 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.PropertyBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.PropertyBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisPropertyBuilder_t1594_m25505_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.PropertyBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.PropertyBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisPropertyBuilder_t1594_m25505(__this, ___array, ___index, method) (( void (*) (Array_t *, PropertyBuilderU5BU5D_t1597*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.PropertyBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.PropertyBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisPropertyBuilder_t1594_m25506_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.PropertyBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.PropertyBuilder>(T)
#define Array_InternalArray__ICollection_Remove_TisPropertyBuilder_t1594_m25506(__this, ___item, method) (( bool (*) (Array_t *, PropertyBuilder_t1594 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.PropertyBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.PropertyBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisPropertyBuilder_t1594_m25507_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.PropertyBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.PropertyBuilder>(T)
#define Array_InternalArray__IndexOf_TisPropertyBuilder_t1594_m25507(__this, ___item, method) (( int32_t (*) (Array_t *, PropertyBuilder_t1594 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.PropertyBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.PropertyBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisPropertyBuilder_t1594_m25508_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.PropertyBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.PropertyBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_TisPropertyBuilder_t1594_m25508(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, PropertyBuilder_t1594 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.PropertyBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.PropertyBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisPropertyBuilder_t1594_m25509_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.PropertyBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisPropertyBuilder_t1594_m25510_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.PropertyBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.PropertyBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_TisPropertyBuilder_t1594_m25510(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, PropertyBuilder_t1594 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.PropertyBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.PropertyBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisPropertyBuilder_t1594_m25509_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Reflection.Emit.PropertyBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_224.h"
extern TypeInfo InternalEnumerator_1_t3497_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.PropertyBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_224MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3497_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21781_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21781_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.PropertyBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisPropertyBuilder_t1594_m25511_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.PropertyBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.PropertyBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisPropertyBuilder_t1594_m25511(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.PropertyBuilder>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_Tis_PropertyBuilder_t2380_m25512_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._PropertyBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_Tis_PropertyBuilder_t2380_m25513_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._PropertyBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._PropertyBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_PropertyBuilder_t2380_m25513(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._PropertyBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_Tis_PropertyBuilder_t2380_m25512_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._PropertyBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_Tis_PropertyBuilder_t2380_m25514_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._PropertyBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._PropertyBuilder>(T)
#define Array_InternalArray__ICollection_Add_Tis_PropertyBuilder_t2380_m25514(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._PropertyBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo _PropertyBuilder_t2380_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._PropertyBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_Tis_PropertyBuilder_t2380_m25515_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._PropertyBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._PropertyBuilder>(T)
#define Array_InternalArray__ICollection_Contains_Tis_PropertyBuilder_t2380_m25515(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._PropertyBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._PropertyBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_Tis_PropertyBuilder_t2380_m25516_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._PropertyBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._PropertyBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_Tis_PropertyBuilder_t2380_m25516(__this, ___array, ___index, method) (( void (*) (Array_t *, _PropertyBuilderU5BU5D_t3809*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._PropertyBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._PropertyBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_Tis_PropertyBuilder_t2380_m25517_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._PropertyBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._PropertyBuilder>(T)
#define Array_InternalArray__ICollection_Remove_Tis_PropertyBuilder_t2380_m25517(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._PropertyBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._PropertyBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_Tis_PropertyBuilder_t2380_m25518_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._PropertyBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._PropertyBuilder>(T)
#define Array_InternalArray__IndexOf_Tis_PropertyBuilder_t2380_m25518(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._PropertyBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_Tis_PropertyBuilder_t2380_m25519_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_Tis_PropertyBuilder_t2380_m25519(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_Tis_PropertyBuilder_t2380_m25520_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_Tis_PropertyBuilder_t2380_m25521_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_Tis_PropertyBuilder_t2380_m25521(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._PropertyBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_Tis_PropertyBuilder_t2380_m25520_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_225.h"
extern TypeInfo InternalEnumerator_1_t3498_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_225MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3498_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21786_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21786_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._PropertyBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_Tis_PropertyBuilder_t2380_m25522_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._PropertyBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._PropertyBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_Tis_PropertyBuilder_t2380_m25522(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._PropertyBuilder>()
#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilder.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.FieldBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisFieldBuilder_t1588_m25523_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.FieldBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisFieldBuilder_t1588_m25524_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Reflection.Emit.FieldBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.FieldBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisFieldBuilder_t1588_m25524(__this, ___index, method) (( FieldBuilder_t1588 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.FieldBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Reflection.Emit.FieldBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisFieldBuilder_t1588_m25523_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.FieldBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisFieldBuilder_t1588_m25525_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.FieldBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.FieldBuilder>(T)
#define Array_InternalArray__ICollection_Add_TisFieldBuilder_t1588_m25525(__this, ___item, method) (( void (*) (Array_t *, FieldBuilder_t1588 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Reflection.Emit.FieldBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo FieldBuilder_t1588_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.FieldBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisFieldBuilder_t1588_m25526_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.FieldBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.FieldBuilder>(T)
#define Array_InternalArray__ICollection_Contains_TisFieldBuilder_t1588_m25526(__this, ___item, method) (( bool (*) (Array_t *, FieldBuilder_t1588 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Reflection.Emit.FieldBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.FieldBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisFieldBuilder_t1588_m25527_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.FieldBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.FieldBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisFieldBuilder_t1588_m25527(__this, ___array, ___index, method) (( void (*) (Array_t *, FieldBuilderU5BU5D_t1598*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Reflection.Emit.FieldBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.FieldBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisFieldBuilder_t1588_m25528_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.FieldBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.FieldBuilder>(T)
#define Array_InternalArray__ICollection_Remove_TisFieldBuilder_t1588_m25528(__this, ___item, method) (( bool (*) (Array_t *, FieldBuilder_t1588 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Reflection.Emit.FieldBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.FieldBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisFieldBuilder_t1588_m25529_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.FieldBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.FieldBuilder>(T)
#define Array_InternalArray__IndexOf_TisFieldBuilder_t1588_m25529(__this, ___item, method) (( int32_t (*) (Array_t *, FieldBuilder_t1588 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Reflection.Emit.FieldBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.FieldBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisFieldBuilder_t1588_m25530_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.FieldBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.FieldBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_TisFieldBuilder_t1588_m25530(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, FieldBuilder_t1588 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Reflection.Emit.FieldBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.FieldBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisFieldBuilder_t1588_m25531_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.FieldBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisFieldBuilder_t1588_m25532_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.FieldBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.FieldBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_TisFieldBuilder_t1588_m25532(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, FieldBuilder_t1588 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Reflection.Emit.FieldBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Reflection.Emit.FieldBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisFieldBuilder_t1588_m25531_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_226.h"
extern TypeInfo InternalEnumerator_1_t3499_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_226MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3499_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21791_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21791_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.FieldBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisFieldBuilder_t1588_m25533_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.FieldBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.FieldBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisFieldBuilder_t1588_m25533(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Reflection.Emit.FieldBuilder>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._FieldBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_Tis_FieldBuilder_t2373_m25534_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_Tis_FieldBuilder_t2373_m25535_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_FieldBuilder_t2373_m25535(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.InteropServices._FieldBuilder>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_Tis_FieldBuilder_t2373_m25534_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._FieldBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_Tis_FieldBuilder_t2373_m25536_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._FieldBuilder>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._FieldBuilder>(T)
#define Array_InternalArray__ICollection_Add_Tis_FieldBuilder_t2373_m25536(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.InteropServices._FieldBuilder>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo _FieldBuilder_t2373_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._FieldBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_Tis_FieldBuilder_t2373_m25537_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._FieldBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._FieldBuilder>(T)
#define Array_InternalArray__ICollection_Contains_Tis_FieldBuilder_t2373_m25537(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.InteropServices._FieldBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._FieldBuilder>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_Tis_FieldBuilder_t2373_m25538_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._FieldBuilder>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._FieldBuilder>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_Tis_FieldBuilder_t2373_m25538(__this, ___array, ___index, method) (( void (*) (Array_t *, _FieldBuilderU5BU5D_t3810*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.InteropServices._FieldBuilder>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._FieldBuilder>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_Tis_FieldBuilder_t2373_m25539_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._FieldBuilder>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._FieldBuilder>(T)
#define Array_InternalArray__ICollection_Remove_Tis_FieldBuilder_t2373_m25539(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.InteropServices._FieldBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._FieldBuilder>(T)
extern MethodInfo Array_InternalArray__IndexOf_Tis_FieldBuilder_t2373_m25540_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._FieldBuilder>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._FieldBuilder>(T)
#define Array_InternalArray__IndexOf_Tis_FieldBuilder_t2373_m25540(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.InteropServices._FieldBuilder>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._FieldBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_Tis_FieldBuilder_t2373_m25541_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._FieldBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._FieldBuilder>(System.Int32,T)
#define Array_InternalArray__Insert_Tis_FieldBuilder_t2373_m25541(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.InteropServices._FieldBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._FieldBuilder>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_Tis_FieldBuilder_t2373_m25542_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_Tis_FieldBuilder_t2373_m25543_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32,T)
#define Array_InternalArray__set_Item_Tis_FieldBuilder_t2373_m25543(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.InteropServices._FieldBuilder>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_Tis_FieldBuilder_t2373_m25542_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_227.h"
extern TypeInfo InternalEnumerator_1_t3500_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_227MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3500_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21796_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21796_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._FieldBuilder>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_Tis_FieldBuilder_t2373_m25544_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._FieldBuilder>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._FieldBuilder>()
#define Array_InternalArray__IEnumerable_GetEnumerator_Tis_FieldBuilder_t2373_m25544(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.InteropServices._FieldBuilder>()
#ifndef _MSC_VER
#else
#endif

// System.Type
#include "mscorlib_System_Type.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Type>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_41.h"
// Declaration System.Int32 System.Array::IndexOf<System.Type>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Type>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisType_t_m24794(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, TypeU5BU5D_t658*, Type_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10971_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
extern Il2CppGenericMethod Array_IndexOf_TisType_t_m24794_GenericMethod;
// System.Int32 System.Array::IndexOf<System.Type>(T[],T)
extern MethodInfo Array_IndexOf_TisType_t_m10991_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Type>(T[],T)
// System.Int32 System.Array::IndexOf<System.Type>(T[],T)
#define Array_IndexOf_TisType_t_m10991(__this /* static, unused */, ___array, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, TypeU5BU5D_t658*, Type_t *, MethodInfo*))Array_IndexOf_TisObject_t_m10992_gshared)(__this /* static, unused */, ___array, ___value, method)
// System.Int32 System.Array::IndexOf<System.Type>(T[],T)
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_gen.h"
extern TypeInfo Getter_2_t3501_il2cpp_TypeInfo;
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_genMethodDeclarations.h"
extern Il2CppType Getter_2_t3501_0_0_0;
extern MethodInfo Getter_2_Invoke_m21802_MethodInfo;
extern Il2CppGenericMethod Getter_2_Invoke_m21802_GenericMethod;
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
extern MethodInfo MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m25545_MethodInfo;
struct MonoProperty_t;
// Declaration System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
extern "C" Object_t * MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m25545_gshared (Object_t * __this /* static, unused */, Getter_2_t3501 * ___getter, Object_t * ___obj, MethodInfo* method);
#define MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m25545(__this /* static, unused */, ___getter, ___obj, method) (( Object_t * (*) (Object_t * /* static, unused */, Getter_2_t3501 *, Object_t *, MethodInfo*))MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m25545_gshared)(__this /* static, unused */, ___getter, ___obj, method)
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
extern Il2CppGenericMethod MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m25545_GenericMethod;
extern "C" Object_t * MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m25545_gshared (Object_t * __this /* static, unused */, Getter_2_t3501 * ___getter, Object_t * ___obj, MethodInfo* method)
{
	{
		Getter_2_t3501 * L_0 = ___getter;
		Object_t * L_1 = ___obj;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1), L_0, ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_gen.h"
extern TypeInfo StaticGetter_1_t3502_il2cpp_TypeInfo;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_genMethodDeclarations.h"
extern Il2CppType StaticGetter_1_t3502_0_0_0;
extern MethodInfo StaticGetter_1_Invoke_m21806_MethodInfo;
extern Il2CppGenericMethod StaticGetter_1_Invoke_m21806_GenericMethod;
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
extern MethodInfo MonoProperty_StaticGetterAdapterFrame_TisObject_t_m25546_MethodInfo;
struct MonoProperty_t;
// Declaration System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
extern "C" Object_t * MonoProperty_StaticGetterAdapterFrame_TisObject_t_m25546_gshared (Object_t * __this /* static, unused */, StaticGetter_1_t3502 * ___getter, Object_t * ___obj, MethodInfo* method);
#define MonoProperty_StaticGetterAdapterFrame_TisObject_t_m25546(__this /* static, unused */, ___getter, ___obj, method) (( Object_t * (*) (Object_t * /* static, unused */, StaticGetter_1_t3502 *, Object_t *, MethodInfo*))MonoProperty_StaticGetterAdapterFrame_TisObject_t_m25546_gshared)(__this /* static, unused */, ___getter, ___obj, method)
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
extern Il2CppGenericMethod MonoProperty_StaticGetterAdapterFrame_TisObject_t_m25546_GenericMethod;
extern "C" Object_t * MonoProperty_StaticGetterAdapterFrame_TisObject_t_m25546_gshared (Object_t * __this /* static, unused */, StaticGetter_1_t3502 * ___getter, Object_t * ___obj, MethodInfo* method)
{
	{
		StaticGetter_1_t3502 * L_0 = ___getter;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), L_0);
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.Remoting.Messaging.Header>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisHeader_t1691_m25547_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisHeader_t1691_m25548_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32)
#define Array_InternalArray__get_Item_TisHeader_t1691_m25548(__this, ___index, method) (( Header_t1691 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.Remoting.Messaging.Header>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisHeader_t1691_m25547_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Messaging.Header>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisHeader_t1691_m25549_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Messaging.Header>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Messaging.Header>(T)
#define Array_InternalArray__ICollection_Add_TisHeader_t1691_m25549(__this, ___item, method) (( void (*) (Array_t *, Header_t1691 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Messaging.Header>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Header_t1691_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Messaging.Header>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisHeader_t1691_m25550_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Messaging.Header>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Messaging.Header>(T)
#define Array_InternalArray__ICollection_Contains_TisHeader_t1691_m25550(__this, ___item, method) (( bool (*) (Array_t *, Header_t1691 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Messaging.Header>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Messaging.Header>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisHeader_t1691_m25551_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Messaging.Header>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Messaging.Header>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisHeader_t1691_m25551(__this, ___array, ___index, method) (( void (*) (Array_t *, HeaderU5BU5D_t1694*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Messaging.Header>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Messaging.Header>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisHeader_t1691_m25552_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Messaging.Header>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Messaging.Header>(T)
#define Array_InternalArray__ICollection_Remove_TisHeader_t1691_m25552(__this, ___item, method) (( bool (*) (Array_t *, Header_t1691 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Messaging.Header>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Messaging.Header>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisHeader_t1691_m25553_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Messaging.Header>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Messaging.Header>(T)
#define Array_InternalArray__IndexOf_TisHeader_t1691_m25553(__this, ___item, method) (( int32_t (*) (Array_t *, Header_t1691 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Messaging.Header>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Messaging.Header>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisHeader_t1691_m25554_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Messaging.Header>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Messaging.Header>(System.Int32,T)
#define Array_InternalArray__Insert_TisHeader_t1691_m25554(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Header_t1691 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Messaging.Header>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.Remoting.Messaging.Header>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisHeader_t1691_m25555_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisHeader_t1691_m25556_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32,T)
#define Array_InternalArray__set_Item_TisHeader_t1691_m25556(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Header_t1691 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.Remoting.Messaging.Header>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisHeader_t1691_m25555_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_228.h"
extern TypeInfo InternalEnumerator_1_t3503_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_228MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3503_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21809_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21809_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Messaging.Header>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisHeader_t1691_m25557_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Messaging.Header>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Messaging.Header>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisHeader_t1691_m25557(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Messaging.Header>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisITrackingHandler_t1964_m25558_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisITrackingHandler_t1964_m25559_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisITrackingHandler_t1964_m25559(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisITrackingHandler_t1964_m25558_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Services.ITrackingHandler>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisITrackingHandler_t1964_m25560_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Services.ITrackingHandler>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Services.ITrackingHandler>(T)
#define Array_InternalArray__ICollection_Add_TisITrackingHandler_t1964_m25560(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Services.ITrackingHandler>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo ITrackingHandler_t1964_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Services.ITrackingHandler>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisITrackingHandler_t1964_m25561_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Services.ITrackingHandler>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Services.ITrackingHandler>(T)
#define Array_InternalArray__ICollection_Contains_TisITrackingHandler_t1964_m25561(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Services.ITrackingHandler>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Services.ITrackingHandler>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisITrackingHandler_t1964_m25562_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Services.ITrackingHandler>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Services.ITrackingHandler>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisITrackingHandler_t1964_m25562(__this, ___array, ___index, method) (( void (*) (Array_t *, ITrackingHandlerU5BU5D_t1963*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Services.ITrackingHandler>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Services.ITrackingHandler>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisITrackingHandler_t1964_m25563_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Services.ITrackingHandler>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Services.ITrackingHandler>(T)
#define Array_InternalArray__ICollection_Remove_TisITrackingHandler_t1964_m25563(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Services.ITrackingHandler>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Services.ITrackingHandler>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisITrackingHandler_t1964_m25564_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Services.ITrackingHandler>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Services.ITrackingHandler>(T)
#define Array_InternalArray__IndexOf_TisITrackingHandler_t1964_m25564(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Services.ITrackingHandler>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisITrackingHandler_t1964_m25565_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,T)
#define Array_InternalArray__Insert_TisITrackingHandler_t1964_m25565(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisITrackingHandler_t1964_m25566_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisITrackingHandler_t1964_m25567_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,T)
#define Array_InternalArray__set_Item_TisITrackingHandler_t1964_m25567(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisITrackingHandler_t1964_m25566_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_229.h"
extern TypeInfo InternalEnumerator_1_t3504_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_229MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3504_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21814_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21814_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Services.ITrackingHandler>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisITrackingHandler_t1964_m25568_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Services.ITrackingHandler>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Services.ITrackingHandler>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisITrackingHandler_t1964_m25568(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Services.ITrackingHandler>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIContextAttribute_t1959_m25569_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIContextAttribute_t1959_m25570_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisIContextAttribute_t1959_m25570(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIContextAttribute_t1959_m25569_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIContextAttribute_t1959_m25571_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
#define Array_InternalArray__ICollection_Add_TisIContextAttribute_t1959_m25571(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IContextAttribute_t1959_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIContextAttribute_t1959_m25572_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
#define Array_InternalArray__ICollection_Contains_TisIContextAttribute_t1959_m25572(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Contexts.IContextAttribute>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIContextAttribute_t1959_m25573_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Contexts.IContextAttribute>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Contexts.IContextAttribute>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIContextAttribute_t1959_m25573(__this, ___array, ___index, method) (( void (*) (Array_t *, IContextAttributeU5BU5D_t1717*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Remoting.Contexts.IContextAttribute>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIContextAttribute_t1959_m25574_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
#define Array_InternalArray__ICollection_Remove_TisIContextAttribute_t1959_m25574(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIContextAttribute_t1959_m25575_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
#define Array_InternalArray__IndexOf_TisIContextAttribute_t1959_m25575(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Remoting.Contexts.IContextAttribute>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIContextAttribute_t1959_m25576_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,T)
#define Array_InternalArray__Insert_TisIContextAttribute_t1959_m25576(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIContextAttribute_t1959_m25577_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIContextAttribute_t1959_m25578_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIContextAttribute_t1959_m25578(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIContextAttribute_t1959_m25577_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_230.h"
extern TypeInfo InternalEnumerator_1_t3505_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_230MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3505_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21819_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21819_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Contexts.IContextAttribute>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIContextAttribute_t1959_m25579_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Contexts.IContextAttribute>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Contexts.IContextAttribute>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIContextAttribute_t1959_m25579(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Remoting.Contexts.IContextAttribute>()
#ifndef _MSC_VER
#else
#endif

// System.DateTime
#include "mscorlib_System_DateTime.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.DateTime>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisDateTime_t524_m25580_GenericMethod;
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisDateTime_t524_m25581_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern "C" DateTime_t524  Array_InternalArray__get_Item_TisDateTime_t524_m25581_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDateTime_t524_m25581(__this, ___index, method) (( DateTime_t524  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDateTime_t524_m25581_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDateTime_t524_m25581_GenericMethod;
extern "C" DateTime_t524  Array_InternalArray__get_Item_TisDateTime_t524_m25581_gshared (Array_t * __this, int32_t ___index, MethodInfo* method)
{
	DateTime_t524  V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		int32_t L_3 = ___index;
		ArrayGetGenericValueImpl (__this, L_3, (&V_0));
		DateTime_t524  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.DateTime>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisDateTime_t524_m25580_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisDateTime_t524_m25582_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisDateTime_t524_m25582_gshared (Array_t * __this, DateTime_t524  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisDateTime_t524_m25582(__this, ___item, method) (( void (*) (Array_t *, DateTime_t524 , MethodInfo*))Array_InternalArray__ICollection_Add_TisDateTime_t524_m25582_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Add_TisDateTime_t524_m25582_GenericMethod;
extern "C" void Array_InternalArray__ICollection_Add_TisDateTime_t524_m25582_gshared (Array_t * __this, DateTime_t524  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo DateTime_t524_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisDateTime_t524_m25583_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisDateTime_t524_m25583_gshared (Array_t * __this, DateTime_t524  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisDateTime_t524_m25583(__this, ___item, method) (( bool (*) (Array_t *, DateTime_t524 , MethodInfo*))Array_InternalArray__ICollection_Contains_TisDateTime_t524_m25583_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Contains_TisDateTime_t524_m25583_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Contains_TisDateTime_t524_m25583_gshared (Array_t * __this, DateTime_t524  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t524  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		DateTime_t524  L_5 = ___item;
		DateTime_t524  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		DateTime_t524  L_8 = V_2;
		DateTime_t524  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		DateTime_t524  L_11 = V_2;
		DateTime_t524  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisDateTime_t524_m25584_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDateTime_t524_m25584_gshared (Array_t * __this, DateTimeU5BU5D_t1965* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisDateTime_t524_m25584(__this, ___array, ___index, method) (( void (*) (Array_t *, DateTimeU5BU5D_t1965*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisDateTime_t524_m25584_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
extern Il2CppGenericMethod Array_InternalArray__ICollection_CopyTo_TisDateTime_t524_m25584_GenericMethod;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDateTime_t524_m25584_gshared (Array_t * __this, DateTimeU5BU5D_t1965* ___array, int32_t ___index, MethodInfo* method)
{
	{
		DateTimeU5BU5D_t1965* L_0 = ___array;
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
		int32_t L_2 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_4 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_4, L_3, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		int32_t L_6 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		DateTimeU5BU5D_t1965* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = Array_GetLowerBound_m7182(L_7, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		DateTimeU5BU5D_t1965* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_GetLength_m478(L_9, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t395 * L_11 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_11, (String_t*) &_stringLiteral1172, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		DateTimeU5BU5D_t1965* L_12 = ___array;
		NullCheck(L_12);
		int32_t L_13 = Array_get_Rank_m5237(L_12, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_15 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_15, L_14, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_18 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_18, (String_t*) &_stringLiteral381, L_17, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		DateTimeU5BU5D_t1965* L_20 = ___array;
		int32_t L_21 = ___index;
		int32_t L_22 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		Array_Copy_m7220(NULL /*static, unused*/, __this, L_19, (Array_t *)(Array_t *)L_20, L_21, L_22, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisDateTime_t524_m25585_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisDateTime_t524_m25585_gshared (Array_t * __this, DateTime_t524  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisDateTime_t524_m25585(__this, ___item, method) (( bool (*) (Array_t *, DateTime_t524 , MethodInfo*))Array_InternalArray__ICollection_Remove_TisDateTime_t524_m25585_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Remove_TisDateTime_t524_m25585_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Remove_TisDateTime_t524_m25585_gshared (Array_t * __this, DateTime_t524  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisDateTime_t524_m25586_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisDateTime_t524_m25586_gshared (Array_t * __this, DateTime_t524  ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisDateTime_t524_m25586(__this, ___item, method) (( int32_t (*) (Array_t *, DateTime_t524 , MethodInfo*))Array_InternalArray__IndexOf_TisDateTime_t524_m25586_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
extern Il2CppGenericMethod Array_InternalArray__IndexOf_TisDateTime_t524_m25586_GenericMethod;
extern "C" int32_t Array_InternalArray__IndexOf_TisDateTime_t524_m25586_gshared (Array_t * __this, DateTime_t524  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t524  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		DateTime_t524  L_5 = ___item;
		DateTime_t524  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		DateTime_t524  L_8 = V_2;
		DateTime_t524  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		DateTime_t524  L_14 = ___item;
		DateTime_t524  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisDateTime_t524_m25587_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisDateTime_t524_m25587_gshared (Array_t * __this, int32_t ___index, DateTime_t524  ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisDateTime_t524_m25587(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, DateTime_t524 , MethodInfo*))Array_InternalArray__Insert_TisDateTime_t524_m25587_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__Insert_TisDateTime_t524_m25587_GenericMethod;
extern "C" void Array_InternalArray__Insert_TisDateTime_t524_m25587_gshared (Array_t * __this, int32_t ___index, DateTime_t524  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.DateTime>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisDateTime_t524_m25588_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisDateTime_t524_m25589_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisDateTime_t524_m25589_gshared (Array_t * __this, int32_t ___index, DateTime_t524  ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisDateTime_t524_m25589(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, DateTime_t524 , MethodInfo*))Array_InternalArray__set_Item_TisDateTime_t524_m25589_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__set_Item_TisDateTime_t524_m25589_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisDateTime_t524_m25589_gshared (Array_t * __this, int32_t ___index, DateTime_t524  ___item, MethodInfo* method)
{
	static bool Array_InternalArray__set_Item_TisDateTime_t524_m25589_init;
	if (!Array_InternalArray__set_Item_TisDateTime_t524_m25589_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Array_InternalArray__set_Item_TisDateTime_t524_m25589_init = true;
	}
	ObjectU5BU5D_t76* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		V_0 = ((ObjectU5BU5D_t76*)IsInst(__this, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t76* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t76* L_4 = V_0;
		int32_t L_5 = ___index;
		DateTime_t524  L_6 = ___item;
		DateTime_t524  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		ArraySetGenericValueImpl (__this, L_9, (&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.DateTime>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisDateTime_t524_m25588_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_231.h"
extern TypeInfo InternalEnumerator_1_t3506_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_231MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3506_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21824_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21824_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t524_m25590_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t524_m25590_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t524_m25590(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t524_m25590_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
extern Il2CppGenericMethod Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t524_m25590_GenericMethod;
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t524_m25590_gshared (Array_t * __this, MethodInfo* method)
{
	{
		InternalEnumerator_1_t3506  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t3506 *, Array_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t3506  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.DateTime>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIComparable_1_t2420_m25591_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.DateTime>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2420_m25592_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.IComparable`1<System.DateTime>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.DateTime>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2420_m25592(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.DateTime>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.DateTime>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIComparable_1_t2420_m25591_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.DateTime>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIComparable_1_t2420_m25593_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.DateTime>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.DateTime>>(T)
#define Array_InternalArray__ICollection_Add_TisIComparable_1_t2420_m25593(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.DateTime>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_1_t2420_il2cpp_TypeInfo;
extern Il2CppType IComparable_1_t2420_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.DateTime>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIComparable_1_t2420_m25594_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.DateTime>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.DateTime>>(T)
#define Array_InternalArray__ICollection_Contains_TisIComparable_1_t2420_m25594(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.DateTime>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.DateTime>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t2420_m25595_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.DateTime>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.DateTime>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t2420_m25595(__this, ___array, ___index, method) (( void (*) (Array_t *, IComparable_1U5BU5D_t3811*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.DateTime>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.DateTime>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIComparable_1_t2420_m25596_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.DateTime>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.DateTime>>(T)
#define Array_InternalArray__ICollection_Remove_TisIComparable_1_t2420_m25596(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.DateTime>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.DateTime>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIComparable_1_t2420_m25597_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.DateTime>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.DateTime>>(T)
#define Array_InternalArray__IndexOf_TisIComparable_1_t2420_m25597(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.DateTime>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.DateTime>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIComparable_1_t2420_m25598_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.DateTime>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.DateTime>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIComparable_1_t2420_m25598(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.DateTime>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.DateTime>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIComparable_1_t2420_m25599_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.DateTime>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIComparable_1_t2420_m25600_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.DateTime>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.DateTime>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIComparable_1_t2420_m25600(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.DateTime>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.DateTime>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIComparable_1_t2420_m25599_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_232.h"
extern TypeInfo InternalEnumerator_1_t3507_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_232MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3507_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21829_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21829_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.DateTime>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t2420_m25601_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.DateTime>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.DateTime>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t2420_m25601(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.DateTime>>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.DateTime>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIEquatable_1_t2421_m25602_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.DateTime>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2421_m25603_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.IEquatable`1<System.DateTime>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.DateTime>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2421_m25603(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.DateTime>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.DateTime>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIEquatable_1_t2421_m25602_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.DateTime>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIEquatable_1_t2421_m25604_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.DateTime>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.DateTime>>(T)
#define Array_InternalArray__ICollection_Add_TisIEquatable_1_t2421_m25604(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.DateTime>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IEquatable_1_t2421_il2cpp_TypeInfo;
extern Il2CppType IEquatable_1_t2421_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.DateTime>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIEquatable_1_t2421_m25605_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.DateTime>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.DateTime>>(T)
#define Array_InternalArray__ICollection_Contains_TisIEquatable_1_t2421_m25605(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.DateTime>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.DateTime>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t2421_m25606_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.DateTime>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.DateTime>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t2421_m25606(__this, ___array, ___index, method) (( void (*) (Array_t *, IEquatable_1U5BU5D_t3812*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.DateTime>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.DateTime>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIEquatable_1_t2421_m25607_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.DateTime>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.DateTime>>(T)
#define Array_InternalArray__ICollection_Remove_TisIEquatable_1_t2421_m25607(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.DateTime>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.DateTime>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIEquatable_1_t2421_m25608_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.DateTime>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.DateTime>>(T)
#define Array_InternalArray__IndexOf_TisIEquatable_1_t2421_m25608(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.DateTime>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.DateTime>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIEquatable_1_t2421_m25609_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.DateTime>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.DateTime>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIEquatable_1_t2421_m25609(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.DateTime>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.DateTime>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIEquatable_1_t2421_m25610_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.DateTime>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIEquatable_1_t2421_m25611_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.DateTime>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.DateTime>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIEquatable_1_t2421_m25611(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.DateTime>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.DateTime>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIEquatable_1_t2421_m25610_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_233.h"
extern TypeInfo InternalEnumerator_1_t3508_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_233MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3508_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21834_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21834_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.DateTime>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t2421_m25612_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.DateTime>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.DateTime>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t2421_m25612(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.DateTime>>()
#ifndef _MSC_VER
#else
#endif

// System.Decimal
#include "mscorlib_System_Decimal.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Decimal>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisDecimal_t763_m25613_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisDecimal_t763_m25614_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern "C" Decimal_t763  Array_InternalArray__get_Item_TisDecimal_t763_m25614_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDecimal_t763_m25614(__this, ___index, method) (( Decimal_t763  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDecimal_t763_m25614_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDecimal_t763_m25614_GenericMethod;
extern "C" Decimal_t763  Array_InternalArray__get_Item_TisDecimal_t763_m25614_gshared (Array_t * __this, int32_t ___index, MethodInfo* method)
{
	Decimal_t763  V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		int32_t L_3 = ___index;
		ArrayGetGenericValueImpl (__this, L_3, (&V_0));
		Decimal_t763  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Decimal>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisDecimal_t763_m25613_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisDecimal_t763_m25615_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisDecimal_t763_m25615_gshared (Array_t * __this, Decimal_t763  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisDecimal_t763_m25615(__this, ___item, method) (( void (*) (Array_t *, Decimal_t763 , MethodInfo*))Array_InternalArray__ICollection_Add_TisDecimal_t763_m25615_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Add_TisDecimal_t763_m25615_GenericMethod;
extern "C" void Array_InternalArray__ICollection_Add_TisDecimal_t763_m25615_gshared (Array_t * __this, Decimal_t763  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Decimal_t763_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisDecimal_t763_m25616_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisDecimal_t763_m25616_gshared (Array_t * __this, Decimal_t763  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisDecimal_t763_m25616(__this, ___item, method) (( bool (*) (Array_t *, Decimal_t763 , MethodInfo*))Array_InternalArray__ICollection_Contains_TisDecimal_t763_m25616_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Contains_TisDecimal_t763_m25616_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Contains_TisDecimal_t763_m25616_gshared (Array_t * __this, Decimal_t763  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_t763  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		Decimal_t763  L_5 = ___item;
		Decimal_t763  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		Decimal_t763  L_8 = V_2;
		Decimal_t763  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		Decimal_t763  L_11 = V_2;
		Decimal_t763  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisDecimal_t763_m25617_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDecimal_t763_m25617_gshared (Array_t * __this, DecimalU5BU5D_t1966* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisDecimal_t763_m25617(__this, ___array, ___index, method) (( void (*) (Array_t *, DecimalU5BU5D_t1966*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisDecimal_t763_m25617_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
extern Il2CppGenericMethod Array_InternalArray__ICollection_CopyTo_TisDecimal_t763_m25617_GenericMethod;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDecimal_t763_m25617_gshared (Array_t * __this, DecimalU5BU5D_t1966* ___array, int32_t ___index, MethodInfo* method)
{
	{
		DecimalU5BU5D_t1966* L_0 = ___array;
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
		int32_t L_2 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_4 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_4, L_3, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		int32_t L_6 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		DecimalU5BU5D_t1966* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = Array_GetLowerBound_m7182(L_7, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		DecimalU5BU5D_t1966* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_GetLength_m478(L_9, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t395 * L_11 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_11, (String_t*) &_stringLiteral1172, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		DecimalU5BU5D_t1966* L_12 = ___array;
		NullCheck(L_12);
		int32_t L_13 = Array_get_Rank_m5237(L_12, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_15 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_15, L_14, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_18 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_18, (String_t*) &_stringLiteral381, L_17, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		DecimalU5BU5D_t1966* L_20 = ___array;
		int32_t L_21 = ___index;
		int32_t L_22 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		Array_Copy_m7220(NULL /*static, unused*/, __this, L_19, (Array_t *)(Array_t *)L_20, L_21, L_22, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisDecimal_t763_m25618_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisDecimal_t763_m25618_gshared (Array_t * __this, Decimal_t763  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisDecimal_t763_m25618(__this, ___item, method) (( bool (*) (Array_t *, Decimal_t763 , MethodInfo*))Array_InternalArray__ICollection_Remove_TisDecimal_t763_m25618_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Remove_TisDecimal_t763_m25618_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Remove_TisDecimal_t763_m25618_gshared (Array_t * __this, Decimal_t763  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisDecimal_t763_m25619_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisDecimal_t763_m25619_gshared (Array_t * __this, Decimal_t763  ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisDecimal_t763_m25619(__this, ___item, method) (( int32_t (*) (Array_t *, Decimal_t763 , MethodInfo*))Array_InternalArray__IndexOf_TisDecimal_t763_m25619_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
extern Il2CppGenericMethod Array_InternalArray__IndexOf_TisDecimal_t763_m25619_GenericMethod;
extern "C" int32_t Array_InternalArray__IndexOf_TisDecimal_t763_m25619_gshared (Array_t * __this, Decimal_t763  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_t763  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		Decimal_t763  L_5 = ___item;
		Decimal_t763  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		Decimal_t763  L_8 = V_2;
		Decimal_t763  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		Decimal_t763  L_14 = ___item;
		Decimal_t763  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisDecimal_t763_m25620_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisDecimal_t763_m25620_gshared (Array_t * __this, int32_t ___index, Decimal_t763  ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisDecimal_t763_m25620(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Decimal_t763 , MethodInfo*))Array_InternalArray__Insert_TisDecimal_t763_m25620_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__Insert_TisDecimal_t763_m25620_GenericMethod;
extern "C" void Array_InternalArray__Insert_TisDecimal_t763_m25620_gshared (Array_t * __this, int32_t ___index, Decimal_t763  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Decimal>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisDecimal_t763_m25621_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisDecimal_t763_m25622_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisDecimal_t763_m25622_gshared (Array_t * __this, int32_t ___index, Decimal_t763  ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisDecimal_t763_m25622(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Decimal_t763 , MethodInfo*))Array_InternalArray__set_Item_TisDecimal_t763_m25622_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__set_Item_TisDecimal_t763_m25622_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisDecimal_t763_m25622_gshared (Array_t * __this, int32_t ___index, Decimal_t763  ___item, MethodInfo* method)
{
	static bool Array_InternalArray__set_Item_TisDecimal_t763_m25622_init;
	if (!Array_InternalArray__set_Item_TisDecimal_t763_m25622_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Array_InternalArray__set_Item_TisDecimal_t763_m25622_init = true;
	}
	ObjectU5BU5D_t76* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		V_0 = ((ObjectU5BU5D_t76*)IsInst(__this, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t76* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t76* L_4 = V_0;
		int32_t L_5 = ___index;
		Decimal_t763  L_6 = ___item;
		Decimal_t763  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		ArraySetGenericValueImpl (__this, L_9, (&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Decimal>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisDecimal_t763_m25621_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_234.h"
extern TypeInfo InternalEnumerator_1_t3509_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_234MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3509_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21839_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21839_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t763_m25623_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t763_m25623_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t763_m25623(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t763_m25623_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
extern Il2CppGenericMethod Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t763_m25623_GenericMethod;
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t763_m25623_gshared (Array_t * __this, MethodInfo* method)
{
	{
		InternalEnumerator_1_t3509  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t3509 *, Array_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t3509  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.Decimal>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIComparable_1_t2031_m25624_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2031_m25625_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2031_m25625(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.Decimal>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIComparable_1_t2031_m25624_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Decimal>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIComparable_1_t2031_m25626_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Decimal>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Decimal>>(T)
#define Array_InternalArray__ICollection_Add_TisIComparable_1_t2031_m25626(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.Decimal>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_1_t2031_il2cpp_TypeInfo;
extern Il2CppType IComparable_1_t2031_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Decimal>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIComparable_1_t2031_m25627_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Decimal>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Decimal>>(T)
#define Array_InternalArray__ICollection_Contains_TisIComparable_1_t2031_m25627(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.Decimal>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Decimal>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t2031_m25628_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Decimal>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Decimal>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t2031_m25628(__this, ___array, ___index, method) (( void (*) (Array_t *, IComparable_1U5BU5D_t3813*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.Decimal>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Decimal>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIComparable_1_t2031_m25629_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Decimal>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Decimal>>(T)
#define Array_InternalArray__ICollection_Remove_TisIComparable_1_t2031_m25629(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.Decimal>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Decimal>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIComparable_1_t2031_m25630_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Decimal>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Decimal>>(T)
#define Array_InternalArray__IndexOf_TisIComparable_1_t2031_m25630(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.Decimal>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Decimal>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIComparable_1_t2031_m25631_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Decimal>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Decimal>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIComparable_1_t2031_m25631(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.Decimal>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.Decimal>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIComparable_1_t2031_m25632_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Decimal>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIComparable_1_t2031_m25633_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Decimal>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Decimal>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIComparable_1_t2031_m25633(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.Decimal>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.Decimal>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIComparable_1_t2031_m25632_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_235.h"
extern TypeInfo InternalEnumerator_1_t3510_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_235MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3510_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21844_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21844_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Decimal>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t2031_m25634_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Decimal>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Decimal>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t2031_m25634(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.Decimal>>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.Decimal>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIEquatable_1_t2032_m25635_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2032_m25636_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2032_m25636(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.Decimal>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIEquatable_1_t2032_m25635_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Decimal>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIEquatable_1_t2032_m25637_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Decimal>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Decimal>>(T)
#define Array_InternalArray__ICollection_Add_TisIEquatable_1_t2032_m25637(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.Decimal>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IEquatable_1_t2032_il2cpp_TypeInfo;
extern Il2CppType IEquatable_1_t2032_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Decimal>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIEquatable_1_t2032_m25638_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Decimal>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Decimal>>(T)
#define Array_InternalArray__ICollection_Contains_TisIEquatable_1_t2032_m25638(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.Decimal>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Decimal>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t2032_m25639_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Decimal>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Decimal>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t2032_m25639(__this, ___array, ___index, method) (( void (*) (Array_t *, IEquatable_1U5BU5D_t3814*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.Decimal>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Decimal>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIEquatable_1_t2032_m25640_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Decimal>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Decimal>>(T)
#define Array_InternalArray__ICollection_Remove_TisIEquatable_1_t2032_m25640(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.Decimal>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Decimal>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIEquatable_1_t2032_m25641_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Decimal>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Decimal>>(T)
#define Array_InternalArray__IndexOf_TisIEquatable_1_t2032_m25641(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.Decimal>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Decimal>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIEquatable_1_t2032_m25642_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Decimal>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Decimal>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIEquatable_1_t2032_m25642(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.Decimal>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.Decimal>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIEquatable_1_t2032_m25643_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Decimal>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIEquatable_1_t2032_m25644_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Decimal>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Decimal>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIEquatable_1_t2032_m25644(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.Decimal>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.Decimal>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIEquatable_1_t2032_m25643_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_236.h"
extern TypeInfo InternalEnumerator_1_t3511_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_236MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3511_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21849_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21849_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Decimal>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t2032_m25645_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Decimal>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Decimal>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t2032_m25645(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.Decimal>>()
#ifndef _MSC_VER
#else
#endif

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.TimeSpan>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisTimeSpan_t1092_m25646_GenericMethod;
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisTimeSpan_t1092_m25647_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern "C" TimeSpan_t1092  Array_InternalArray__get_Item_TisTimeSpan_t1092_m25647_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisTimeSpan_t1092_m25647(__this, ___index, method) (( TimeSpan_t1092  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisTimeSpan_t1092_m25647_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTimeSpan_t1092_m25647_GenericMethod;
extern "C" TimeSpan_t1092  Array_InternalArray__get_Item_TisTimeSpan_t1092_m25647_gshared (Array_t * __this, int32_t ___index, MethodInfo* method)
{
	TimeSpan_t1092  V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		int32_t L_3 = ___index;
		ArrayGetGenericValueImpl (__this, L_3, (&V_0));
		TimeSpan_t1092  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisTimeSpan_t1092_m25646_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisTimeSpan_t1092_m25648_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisTimeSpan_t1092_m25648_gshared (Array_t * __this, TimeSpan_t1092  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisTimeSpan_t1092_m25648(__this, ___item, method) (( void (*) (Array_t *, TimeSpan_t1092 , MethodInfo*))Array_InternalArray__ICollection_Add_TisTimeSpan_t1092_m25648_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Add_TisTimeSpan_t1092_m25648_GenericMethod;
extern "C" void Array_InternalArray__ICollection_Add_TisTimeSpan_t1092_m25648_gshared (Array_t * __this, TimeSpan_t1092  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo TimeSpan_t1092_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisTimeSpan_t1092_m25649_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisTimeSpan_t1092_m25649_gshared (Array_t * __this, TimeSpan_t1092  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisTimeSpan_t1092_m25649(__this, ___item, method) (( bool (*) (Array_t *, TimeSpan_t1092 , MethodInfo*))Array_InternalArray__ICollection_Contains_TisTimeSpan_t1092_m25649_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Contains_TisTimeSpan_t1092_m25649_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Contains_TisTimeSpan_t1092_m25649_gshared (Array_t * __this, TimeSpan_t1092  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t1092  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		TimeSpan_t1092  L_5 = ___item;
		TimeSpan_t1092  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		TimeSpan_t1092  L_8 = V_2;
		TimeSpan_t1092  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		TimeSpan_t1092  L_11 = V_2;
		TimeSpan_t1092  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t1092_m25650_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t1092_m25650_gshared (Array_t * __this, TimeSpanU5BU5D_t1967* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t1092_m25650(__this, ___array, ___index, method) (( void (*) (Array_t *, TimeSpanU5BU5D_t1967*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t1092_m25650_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
extern Il2CppGenericMethod Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t1092_m25650_GenericMethod;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t1092_m25650_gshared (Array_t * __this, TimeSpanU5BU5D_t1967* ___array, int32_t ___index, MethodInfo* method)
{
	{
		TimeSpanU5BU5D_t1967* L_0 = ___array;
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
		int32_t L_2 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_4 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_4, L_3, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		int32_t L_6 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		TimeSpanU5BU5D_t1967* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = Array_GetLowerBound_m7182(L_7, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		TimeSpanU5BU5D_t1967* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_GetLength_m478(L_9, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t395 * L_11 = (ArgumentException_t395 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t395_il2cpp_TypeInfo));
		ArgumentException__ctor_m2307(L_11, (String_t*) &_stringLiteral1172, /*hidden argument*/&ArgumentException__ctor_m2307_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		TimeSpanU5BU5D_t1967* L_12 = ___array;
		NullCheck(L_12);
		int32_t L_13 = Array_get_Rank_m5237(L_12, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_15 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_15, L_14, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1173, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		ArgumentOutOfRangeException_t758 * L_18 = (ArgumentOutOfRangeException_t758 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t758_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3918(L_18, (String_t*) &_stringLiteral381, L_17, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		TimeSpanU5BU5D_t1967* L_20 = ___array;
		int32_t L_21 = ___index;
		int32_t L_22 = Array_GetLength_m478(__this, 0, /*hidden argument*/&Array_GetLength_m478_MethodInfo);
		Array_Copy_m7220(NULL /*static, unused*/, __this, L_19, (Array_t *)(Array_t *)L_20, L_21, L_22, /*hidden argument*/&Array_Copy_m7220_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisTimeSpan_t1092_m25651_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisTimeSpan_t1092_m25651_gshared (Array_t * __this, TimeSpan_t1092  ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisTimeSpan_t1092_m25651(__this, ___item, method) (( bool (*) (Array_t *, TimeSpan_t1092 , MethodInfo*))Array_InternalArray__ICollection_Remove_TisTimeSpan_t1092_m25651_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
extern Il2CppGenericMethod Array_InternalArray__ICollection_Remove_TisTimeSpan_t1092_m25651_GenericMethod;
extern "C" bool Array_InternalArray__ICollection_Remove_TisTimeSpan_t1092_m25651_gshared (Array_t * __this, TimeSpan_t1092  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisTimeSpan_t1092_m25652_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisTimeSpan_t1092_m25652_gshared (Array_t * __this, TimeSpan_t1092  ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisTimeSpan_t1092_m25652(__this, ___item, method) (( int32_t (*) (Array_t *, TimeSpan_t1092 , MethodInfo*))Array_InternalArray__IndexOf_TisTimeSpan_t1092_m25652_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
extern Il2CppGenericMethod Array_InternalArray__IndexOf_TisTimeSpan_t1092_m25652_GenericMethod;
extern "C" int32_t Array_InternalArray__IndexOf_TisTimeSpan_t1092_m25652_gshared (Array_t * __this, TimeSpan_t1092  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t1092  V_2 = {0};
	{
		int32_t L_0 = Array_get_Rank_m5237(__this, /*hidden argument*/&Array_get_Rank_m5237_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m7347(NULL /*static, unused*/, (String_t*) &_stringLiteral1171, /*hidden argument*/&Locale_GetText_m7347_MethodInfo);
		RankException_t1918 * L_2 = (RankException_t1918 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RankException_t1918_il2cpp_TypeInfo));
		RankException__ctor_m10777(L_2, L_1, /*hidden argument*/&RankException__ctor_m10777_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		ArrayGetGenericValueImpl (__this, L_4, (&V_2));
		TimeSpan_t1092  L_5 = ___item;
		TimeSpan_t1092  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		TimeSpan_t1092  L_8 = V_2;
		TimeSpan_t1092  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		TimeSpan_t1092  L_14 = ___item;
		TimeSpan_t1092  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck(Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m626_MethodInfo, Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_23 = Array_GetLowerBound_m7182(__this, 0, /*hidden argument*/&Array_GetLowerBound_m7182_MethodInfo);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisTimeSpan_t1092_m25653_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisTimeSpan_t1092_m25653_gshared (Array_t * __this, int32_t ___index, TimeSpan_t1092  ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisTimeSpan_t1092_m25653(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TimeSpan_t1092 , MethodInfo*))Array_InternalArray__Insert_TisTimeSpan_t1092_m25653_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__Insert_TisTimeSpan_t1092_m25653_GenericMethod;
extern "C" void Array_InternalArray__Insert_TisTimeSpan_t1092_m25653_gshared (Array_t * __this, int32_t ___index, TimeSpan_t1092  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t84 * L_0 = (NotSupportedException_t84 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t84_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5248(L_0, (String_t*) &_stringLiteral400, /*hidden argument*/&NotSupportedException__ctor_m5248_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.TimeSpan>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisTimeSpan_t1092_m25654_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisTimeSpan_t1092_m25655_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisTimeSpan_t1092_m25655_gshared (Array_t * __this, int32_t ___index, TimeSpan_t1092  ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisTimeSpan_t1092_m25655(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TimeSpan_t1092 , MethodInfo*))Array_InternalArray__set_Item_TisTimeSpan_t1092_m25655_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
extern Il2CppGenericMethod Array_InternalArray__set_Item_TisTimeSpan_t1092_m25655_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisTimeSpan_t1092_m25655_gshared (Array_t * __this, int32_t ___index, TimeSpan_t1092  ___item, MethodInfo* method)
{
	static bool Array_InternalArray__set_Item_TisTimeSpan_t1092_m25655_init;
	if (!Array_InternalArray__set_Item_TisTimeSpan_t1092_m25655_init)
	{
		ObjectU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t76_0_0_0);
		Array_InternalArray__set_Item_TisTimeSpan_t1092_m25655_init = true;
	}
	ObjectU5BU5D_t76* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = Array_get_Length_m5231(__this, /*hidden argument*/&Array_get_Length_m5231_MethodInfo);
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
		V_0 = ((ObjectU5BU5D_t76*)IsInst(__this, ObjectU5BU5D_t76_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t76* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t76* L_4 = V_0;
		int32_t L_5 = ___index;
		TimeSpan_t1092  L_6 = ___item;
		TimeSpan_t1092  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		ArraySetGenericValueImpl (__this, L_9, (&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisTimeSpan_t1092_m25654_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_237.h"
extern TypeInfo InternalEnumerator_1_t3512_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_237MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3512_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21854_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21854_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t1092_m25656_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t1092_m25656_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t1092_m25656(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t1092_m25656_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
extern Il2CppGenericMethod Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t1092_m25656_GenericMethod;
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t1092_m25656_gshared (Array_t * __this, MethodInfo* method)
{
	{
		InternalEnumerator_1_t3512  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t3512 *, Array_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t3512  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.TimeSpan>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIComparable_1_t2439_m25657_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2439_m25658_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2439_m25658(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IComparable`1<System.TimeSpan>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIComparable_1_t2439_m25657_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.TimeSpan>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIComparable_1_t2439_m25659_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.TimeSpan>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.TimeSpan>>(T)
#define Array_InternalArray__ICollection_Add_TisIComparable_1_t2439_m25659(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IComparable`1<System.TimeSpan>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_1_t2439_il2cpp_TypeInfo;
extern Il2CppType IComparable_1_t2439_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.TimeSpan>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIComparable_1_t2439_m25660_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.TimeSpan>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.TimeSpan>>(T)
#define Array_InternalArray__ICollection_Contains_TisIComparable_1_t2439_m25660(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IComparable`1<System.TimeSpan>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.TimeSpan>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t2439_m25661_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.TimeSpan>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.TimeSpan>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIComparable_1_t2439_m25661(__this, ___array, ___index, method) (( void (*) (Array_t *, IComparable_1U5BU5D_t3815*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IComparable`1<System.TimeSpan>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.TimeSpan>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIComparable_1_t2439_m25662_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.TimeSpan>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.TimeSpan>>(T)
#define Array_InternalArray__ICollection_Remove_TisIComparable_1_t2439_m25662(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IComparable`1<System.TimeSpan>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.TimeSpan>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIComparable_1_t2439_m25663_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.TimeSpan>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.TimeSpan>>(T)
#define Array_InternalArray__IndexOf_TisIComparable_1_t2439_m25663(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IComparable`1<System.TimeSpan>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.TimeSpan>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIComparable_1_t2439_m25664_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.TimeSpan>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.TimeSpan>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIComparable_1_t2439_m25664(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IComparable`1<System.TimeSpan>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.TimeSpan>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIComparable_1_t2439_m25665_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.TimeSpan>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIComparable_1_t2439_m25666_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.TimeSpan>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.TimeSpan>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIComparable_1_t2439_m25666(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IComparable`1<System.TimeSpan>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IComparable`1<System.TimeSpan>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIComparable_1_t2439_m25665_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_238.h"
extern TypeInfo InternalEnumerator_1_t3513_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_238MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3513_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21859_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21859_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.TimeSpan>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t2439_m25667_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.TimeSpan>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.TimeSpan>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIComparable_1_t2439_m25667(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IComparable`1<System.TimeSpan>>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.TimeSpan>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIEquatable_1_t2440_m25668_GenericMethod;
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2440_m25669_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2440_m25669(__this, ___index, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.IEquatable`1<System.TimeSpan>>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIEquatable_1_t2440_m25668_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.TimeSpan>>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIEquatable_1_t2440_m25670_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.TimeSpan>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.TimeSpan>>(T)
#define Array_InternalArray__ICollection_Add_TisIEquatable_1_t2440_m25670(__this, ___item, method) (( void (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.IEquatable`1<System.TimeSpan>>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IEquatable_1_t2440_il2cpp_TypeInfo;
extern Il2CppType IEquatable_1_t2440_0_0_0;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.TimeSpan>>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIEquatable_1_t2440_m25671_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.TimeSpan>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.TimeSpan>>(T)
#define Array_InternalArray__ICollection_Contains_TisIEquatable_1_t2440_m25671(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.IEquatable`1<System.TimeSpan>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.TimeSpan>>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t2440_m25672_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.TimeSpan>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.TimeSpan>>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIEquatable_1_t2440_m25672(__this, ___array, ___index, method) (( void (*) (Array_t *, IEquatable_1U5BU5D_t3816*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.IEquatable`1<System.TimeSpan>>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.TimeSpan>>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIEquatable_1_t2440_m25673_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.TimeSpan>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.TimeSpan>>(T)
#define Array_InternalArray__ICollection_Remove_TisIEquatable_1_t2440_m25673(__this, ___item, method) (( bool (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.IEquatable`1<System.TimeSpan>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.TimeSpan>>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIEquatable_1_t2440_m25674_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.TimeSpan>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.TimeSpan>>(T)
#define Array_InternalArray__IndexOf_TisIEquatable_1_t2440_m25674(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t*, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.IEquatable`1<System.TimeSpan>>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.TimeSpan>>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIEquatable_1_t2440_m25675_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.TimeSpan>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.TimeSpan>>(System.Int32,T)
#define Array_InternalArray__Insert_TisIEquatable_1_t2440_m25675(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.IEquatable`1<System.TimeSpan>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.TimeSpan>>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIEquatable_1_t2440_m25676_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIEquatable_1_t2440_m25677_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIEquatable_1_t2440_m25677(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t*, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.IEquatable`1<System.TimeSpan>>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIEquatable_1_t2440_m25676_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_239.h"
extern TypeInfo InternalEnumerator_1_t3514_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_239MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3514_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21864_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21864_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.TimeSpan>>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t2440_m25678_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.TimeSpan>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.TimeSpan>>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIEquatable_1_t2440_m25678(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.IEquatable`1<System.TimeSpan>>()
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
struct Array_t;
struct Array_t;
// System.Byte
#include "mscorlib_System_Byte.h"
// Declaration System.Void System.Array::GetGenericValueImpl<System.Byte>(System.Int32,!!0&)
// Declaration System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisTypeTag_t1734_m25679_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisTypeTag_t1734_m25680_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisByte_t114_m22727_gshared (Array_t * __this, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__get_Item_TisByte_t114_m22727(__this, ___index, method) (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t114_m22727_gshared)(__this, ___index, method)
// Declaration T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
#define Array_InternalArray__get_Item_TisTypeTag_t1734_m25680(__this, ___index, method) (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t114_m22727_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisTypeTag_t1734_m25679_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisTypeTag_t1734_m25681_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Byte>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Byte>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisByte_t114_m22728_gshared (Array_t * __this, uint8_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisByte_t114_m22728(__this, ___item, method) (( void (*) (Array_t *, uint8_t, MethodInfo*))Array_InternalArray__ICollection_Add_TisByte_t114_m22728_gshared)(__this, ___item, method)
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
#define Array_InternalArray__ICollection_Add_TisTypeTag_t1734_m25681(__this, ___item, method) (( void (*) (Array_t *, uint8_t, MethodInfo*))Array_InternalArray__ICollection_Add_TisByte_t114_m22728_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo TypeTag_t1734_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisTypeTag_t1734_m25682_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Byte>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Byte>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisByte_t114_m22729_gshared (Array_t * __this, uint8_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisByte_t114_m22729(__this, ___item, method) (( bool (*) (Array_t *, uint8_t, MethodInfo*))Array_InternalArray__ICollection_Contains_TisByte_t114_m22729_gshared)(__this, ___item, method)
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
#define Array_InternalArray__ICollection_Contains_TisTypeTag_t1734_m25682(__this, ___item, method) (( bool (*) (Array_t *, uint8_t, MethodInfo*))Array_InternalArray__ICollection_Contains_TisByte_t114_m22729_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisTypeTag_t1734_m25683_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Byte>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Byte>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisByte_t114_m22730_gshared (Array_t * __this, ByteU5BU5D_t66* ___array, int32_t ___index, MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisByte_t114_m22730(__this, ___array, ___index, method) (( void (*) (Array_t *, ByteU5BU5D_t66*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisByte_t114_m22730_gshared)(__this, ___array, ___index, method)
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisTypeTag_t1734_m25683(__this, ___array, ___index, method) (( void (*) (Array_t *, TypeTagU5BU5D_t1968*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisByte_t114_m22730_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisTypeTag_t1734_m25684_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Byte>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Byte>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisByte_t114_m22731_gshared (Array_t * __this, uint8_t ___item, MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisByte_t114_m22731(__this, ___item, method) (( bool (*) (Array_t *, uint8_t, MethodInfo*))Array_InternalArray__ICollection_Remove_TisByte_t114_m22731_gshared)(__this, ___item, method)
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
#define Array_InternalArray__ICollection_Remove_TisTypeTag_t1734_m25684(__this, ___item, method) (( bool (*) (Array_t *, uint8_t, MethodInfo*))Array_InternalArray__ICollection_Remove_TisByte_t114_m22731_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisTypeTag_t1734_m25685_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Byte>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Byte>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisByte_t114_m22732_gshared (Array_t * __this, uint8_t ___item, MethodInfo* method);
#define Array_InternalArray__IndexOf_TisByte_t114_m22732(__this, ___item, method) (( int32_t (*) (Array_t *, uint8_t, MethodInfo*))Array_InternalArray__IndexOf_TisByte_t114_m22732_gshared)(__this, ___item, method)
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
#define Array_InternalArray__IndexOf_TisTypeTag_t1734_m25685(__this, ___item, method) (( int32_t (*) (Array_t *, uint8_t, MethodInfo*))Array_InternalArray__IndexOf_TisByte_t114_m22732_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Runtime.Serialization.Formatters.Binary.TypeTag>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisTypeTag_t1734_m25686_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Byte>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Byte>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisByte_t114_m22733_gshared (Array_t * __this, int32_t ___index, uint8_t ___item, MethodInfo* method);
#define Array_InternalArray__Insert_TisByte_t114_m22733(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, uint8_t, MethodInfo*))Array_InternalArray__Insert_TisByte_t114_m22733_gshared)(__this, ___index, ___item, method)
// Declaration System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
#define Array_InternalArray__Insert_TisTypeTag_t1734_m25686(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, uint8_t, MethodInfo*))Array_InternalArray__Insert_TisByte_t114_m22733_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Byte>(System.Int32,!!0&)
// Declaration System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisTypeTag_t1734_m25687_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisTypeTag_t1734_m25688_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Byte>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Byte>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisByte_t114_m22735_gshared (Array_t * __this, int32_t ___index, uint8_t ___item, MethodInfo* method);
#define Array_InternalArray__set_Item_TisByte_t114_m22735(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, uint8_t, MethodInfo*))Array_InternalArray__set_Item_TisByte_t114_m22735_gshared)(__this, ___index, ___item, method)
// Declaration System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
#define Array_InternalArray__set_Item_TisTypeTag_t1734_m25688(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, uint8_t, MethodInfo*))Array_InternalArray__set_Item_TisByte_t114_m22735_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisTypeTag_t1734_m25687_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_240.h"
extern TypeInfo InternalEnumerator_1_t3515_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_240MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3515_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21869_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21869_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.Binary.TypeTag>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisTypeTag_t1734_m25689_MethodInfo;
struct Array_t;
struct Array_t;
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_42.h"
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Byte>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Byte>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisByte_t114_m22736_gshared (Array_t * __this, MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisByte_t114_m22736(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisByte_t114_m22736_gshared)(__this, method)
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.Binary.TypeTag>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.Binary.TypeTag>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisTypeTag_t1734_m25689(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisByte_t114_m22736_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Runtime.Serialization.Formatters.Binary.TypeTag>()
#ifndef _MSC_VER
#else
#endif

// System.MonoType
#include "mscorlib_System_MonoType.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.MonoType>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisMonoType_t_m25690_GenericMethod;
// T System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisMonoType_t_m25691_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
// T System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoType_t_m25691(__this, ___index, method) (( MonoType_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.MonoType>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisMonoType_t_m25690_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.MonoType>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisMonoType_t_m25692_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.MonoType>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.MonoType>(T)
#define Array_InternalArray__ICollection_Add_TisMonoType_t_m25692(__this, ___item, method) (( void (*) (Array_t *, MonoType_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.MonoType>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo MonoType_t_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.MonoType>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisMonoType_t_m25693_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.MonoType>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.MonoType>(T)
#define Array_InternalArray__ICollection_Contains_TisMonoType_t_m25693(__this, ___item, method) (( bool (*) (Array_t *, MonoType_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.MonoType>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.MonoType>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisMonoType_t_m25694_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.MonoType>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.MonoType>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisMonoType_t_m25694(__this, ___array, ___index, method) (( void (*) (Array_t *, MonoTypeU5BU5D_t1970*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.MonoType>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.MonoType>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisMonoType_t_m25695_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.MonoType>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.MonoType>(T)
#define Array_InternalArray__ICollection_Remove_TisMonoType_t_m25695(__this, ___item, method) (( bool (*) (Array_t *, MonoType_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.MonoType>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.MonoType>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisMonoType_t_m25696_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.MonoType>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.MonoType>(T)
#define Array_InternalArray__IndexOf_TisMonoType_t_m25696(__this, ___item, method) (( int32_t (*) (Array_t *, MonoType_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.MonoType>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.MonoType>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisMonoType_t_m25697_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.MonoType>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.MonoType>(System.Int32,T)
#define Array_InternalArray__Insert_TisMonoType_t_m25697(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, MonoType_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.MonoType>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.MonoType>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisMonoType_t_m25698_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.MonoType>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisMonoType_t_m25699_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.MonoType>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.MonoType>(System.Int32,T)
#define Array_InternalArray__set_Item_TisMonoType_t_m25699(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, MonoType_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.MonoType>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.MonoType>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisMonoType_t_m25698_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_241.h"
extern TypeInfo InternalEnumerator_1_t3516_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_241MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3516_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21874_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21874_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.MonoType>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisMonoType_t_m25700_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.MonoType>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.MonoType>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisMonoType_t_m25700(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.MonoType>()
#ifndef _MSC_VER
#else
#endif

// System.Security.Policy.StrongName
#include "mscorlib_System_Security_Policy_StrongName.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Security.Policy.StrongName>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisStrongName_t1811_m25701_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Security.Policy.StrongName>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisStrongName_t1811_m25702_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Security.Policy.StrongName>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Security.Policy.StrongName>(System.Int32)
#define Array_InternalArray__get_Item_TisStrongName_t1811_m25702(__this, ___index, method) (( StrongName_t1811 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Security.Policy.StrongName>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Security.Policy.StrongName>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisStrongName_t1811_m25701_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.StrongName>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisStrongName_t1811_m25703_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.StrongName>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.StrongName>(T)
#define Array_InternalArray__ICollection_Add_TisStrongName_t1811_m25703(__this, ___item, method) (( void (*) (Array_t *, StrongName_t1811 *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.StrongName>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo StrongName_t1811_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.StrongName>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisStrongName_t1811_m25704_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.StrongName>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.StrongName>(T)
#define Array_InternalArray__ICollection_Contains_TisStrongName_t1811_m25704(__this, ___item, method) (( bool (*) (Array_t *, StrongName_t1811 *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.StrongName>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.StrongName>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisStrongName_t1811_m25705_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.StrongName>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.StrongName>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisStrongName_t1811_m25705(__this, ___array, ___index, method) (( void (*) (Array_t *, StrongNameU5BU5D_t3520*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.StrongName>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.StrongName>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisStrongName_t1811_m25706_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.StrongName>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.StrongName>(T)
#define Array_InternalArray__ICollection_Remove_TisStrongName_t1811_m25706(__this, ___item, method) (( bool (*) (Array_t *, StrongName_t1811 *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.StrongName>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.StrongName>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisStrongName_t1811_m25707_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.StrongName>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.StrongName>(T)
#define Array_InternalArray__IndexOf_TisStrongName_t1811_m25707(__this, ___item, method) (( int32_t (*) (Array_t *, StrongName_t1811 *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.StrongName>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Security.Policy.StrongName>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisStrongName_t1811_m25708_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Security.Policy.StrongName>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Security.Policy.StrongName>(System.Int32,T)
#define Array_InternalArray__Insert_TisStrongName_t1811_m25708(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, StrongName_t1811 *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Security.Policy.StrongName>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Security.Policy.StrongName>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisStrongName_t1811_m25709_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Security.Policy.StrongName>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisStrongName_t1811_m25710_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Security.Policy.StrongName>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Security.Policy.StrongName>(System.Int32,T)
#define Array_InternalArray__set_Item_TisStrongName_t1811_m25710(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, StrongName_t1811 *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Security.Policy.StrongName>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Security.Policy.StrongName>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisStrongName_t1811_m25709_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_242.h"
extern TypeInfo InternalEnumerator_1_t3517_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_242MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3517_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21879_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21879_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.StrongName>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisStrongName_t1811_m25711_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.StrongName>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.StrongName>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisStrongName_t1811_m25711(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.StrongName>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Security.Policy.IBuiltInEvidence>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIBuiltInEvidence_t2411_m25712_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIBuiltInEvidence_t2411_m25713_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32)
#define Array_InternalArray__get_Item_TisIBuiltInEvidence_t2411_m25713(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Security.Policy.IBuiltInEvidence>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIBuiltInEvidence_t2411_m25712_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.IBuiltInEvidence>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIBuiltInEvidence_t2411_m25714_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.IBuiltInEvidence>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.IBuiltInEvidence>(T)
#define Array_InternalArray__ICollection_Add_TisIBuiltInEvidence_t2411_m25714(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.IBuiltInEvidence>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IBuiltInEvidence_t2411_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.IBuiltInEvidence>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIBuiltInEvidence_t2411_m25715_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.IBuiltInEvidence>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.IBuiltInEvidence>(T)
#define Array_InternalArray__ICollection_Contains_TisIBuiltInEvidence_t2411_m25715(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.IBuiltInEvidence>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.IBuiltInEvidence>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIBuiltInEvidence_t2411_m25716_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.IBuiltInEvidence>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.IBuiltInEvidence>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIBuiltInEvidence_t2411_m25716(__this, ___array, ___index, method) (( void (*) (Array_t *, IBuiltInEvidenceU5BU5D_t3817*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.IBuiltInEvidence>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.IBuiltInEvidence>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIBuiltInEvidence_t2411_m25717_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.IBuiltInEvidence>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.IBuiltInEvidence>(T)
#define Array_InternalArray__ICollection_Remove_TisIBuiltInEvidence_t2411_m25717(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.IBuiltInEvidence>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.IBuiltInEvidence>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIBuiltInEvidence_t2411_m25718_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.IBuiltInEvidence>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.IBuiltInEvidence>(T)
#define Array_InternalArray__IndexOf_TisIBuiltInEvidence_t2411_m25718(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.IBuiltInEvidence>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Security.Policy.IBuiltInEvidence>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIBuiltInEvidence_t2411_m25719_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Security.Policy.IBuiltInEvidence>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Security.Policy.IBuiltInEvidence>(System.Int32,T)
#define Array_InternalArray__Insert_TisIBuiltInEvidence_t2411_m25719(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Security.Policy.IBuiltInEvidence>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Security.Policy.IBuiltInEvidence>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIBuiltInEvidence_t2411_m25720_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIBuiltInEvidence_t2411_m25721_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIBuiltInEvidence_t2411_m25721(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Security.Policy.IBuiltInEvidence>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIBuiltInEvidence_t2411_m25720_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_243.h"
extern TypeInfo InternalEnumerator_1_t3518_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_243MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3518_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21884_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21884_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.IBuiltInEvidence>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIBuiltInEvidence_t2411_m25722_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.IBuiltInEvidence>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.IBuiltInEvidence>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIBuiltInEvidence_t2411_m25722(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.IBuiltInEvidence>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_GetGenericValueImpl_TisIIdentityPermissionFactory_t2412_m25723_GenericMethod;
// T System.Array::InternalArray__get_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32)
extern MethodInfo Array_InternalArray__get_Item_TisIIdentityPermissionFactory_t2412_m25724_MethodInfo;
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32)
#define Array_InternalArray__get_Item_TisIIdentityPermissionFactory_t2412_m25724(__this, ___index, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m22110_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T&)
extern MethodInfo Array_GetGenericValueImpl_TisIIdentityPermissionFactory_t2412_m25723_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.IIdentityPermissionFactory>(T)
extern MethodInfo Array_InternalArray__ICollection_Add_TisIIdentityPermissionFactory_t2412_m25725_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.IIdentityPermissionFactory>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.IIdentityPermissionFactory>(T)
#define Array_InternalArray__ICollection_Add_TisIIdentityPermissionFactory_t2412_m25725(__this, ___item, method) (( void (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Add_TisObject_t_m22114_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Policy.IIdentityPermissionFactory>(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IIdentityPermissionFactory_t2412_il2cpp_TypeInfo;
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.IIdentityPermissionFactory>(T)
extern MethodInfo Array_InternalArray__ICollection_Contains_TisIIdentityPermissionFactory_t2412_m25726_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.IIdentityPermissionFactory>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.IIdentityPermissionFactory>(T)
#define Array_InternalArray__ICollection_Contains_TisIIdentityPermissionFactory_t2412_m25726(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Contains_TisObject_t_m22116_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Policy.IIdentityPermissionFactory>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.IIdentityPermissionFactory>(T[],System.Int32)
extern MethodInfo Array_InternalArray__ICollection_CopyTo_TisIIdentityPermissionFactory_t2412_m25727_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.IIdentityPermissionFactory>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.IIdentityPermissionFactory>(T[],System.Int32)
#define Array_InternalArray__ICollection_CopyTo_TisIIdentityPermissionFactory_t2412_m25727(__this, ___array, ___index, method) (( void (*) (Array_t *, IIdentityPermissionFactoryU5BU5D_t3818*, int32_t, MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisObject_t_m22118_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Policy.IIdentityPermissionFactory>(T[],System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.IIdentityPermissionFactory>(T)
extern MethodInfo Array_InternalArray__ICollection_Remove_TisIIdentityPermissionFactory_t2412_m25728_MethodInfo;
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.IIdentityPermissionFactory>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.IIdentityPermissionFactory>(T)
#define Array_InternalArray__ICollection_Remove_TisIIdentityPermissionFactory_t2412_m25728(__this, ___item, method) (( bool (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__ICollection_Remove_TisObject_t_m22119_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Policy.IIdentityPermissionFactory>(T)
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.IIdentityPermissionFactory>(T)
extern MethodInfo Array_InternalArray__IndexOf_TisIIdentityPermissionFactory_t2412_m25729_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.IIdentityPermissionFactory>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.IIdentityPermissionFactory>(T)
#define Array_InternalArray__IndexOf_TisIIdentityPermissionFactory_t2412_m25729(__this, ___item, method) (( int32_t (*) (Array_t *, Object_t *, MethodInfo*))Array_InternalArray__IndexOf_TisObject_t_m22120_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Policy.IIdentityPermissionFactory>(T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T)
extern MethodInfo Array_InternalArray__Insert_TisIIdentityPermissionFactory_t2412_m25730_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T)
#define Array_InternalArray__Insert_TisIIdentityPermissionFactory_t2412_m25730(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__Insert_TisObject_t_m22121_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,!!0&)
extern Il2CppGenericMethod Array_SetGenericValueImpl_TisIIdentityPermissionFactory_t2412_m25731_GenericMethod;
// System.Void System.Array::InternalArray__set_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T)
extern MethodInfo Array_InternalArray__set_Item_TisIIdentityPermissionFactory_t2412_m25732_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T)
#define Array_InternalArray__set_Item_TisIIdentityPermissionFactory_t2412_m25732(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Object_t *, MethodInfo*))Array_InternalArray__set_Item_TisObject_t_m22123_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Security.Policy.IIdentityPermissionFactory>(System.Int32,T&)
extern MethodInfo Array_SetGenericValueImpl_TisIIdentityPermissionFactory_t2412_m25731_MethodInfo;
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_244.h"
extern TypeInfo InternalEnumerator_1_t3519_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_244MethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3519_0_0_0;
extern MethodInfo InternalEnumerator_1__ctor_m21889_MethodInfo;
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m21889_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.IIdentityPermissionFactory>()
extern MethodInfo Array_InternalArray__IEnumerable_GetEnumerator_TisIIdentityPermissionFactory_t2412_m25733_MethodInfo;
struct Array_t;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.IIdentityPermissionFactory>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.IIdentityPermissionFactory>()
#define Array_InternalArray__IEnumerable_GetEnumerator_TisIIdentityPermissionFactory_t2412_m25733(__this, method) (( Object_t* (*) (Array_t *, MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisObject_t_m22124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Policy.IIdentityPermissionFactory>()
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32,System.Int32)
extern "C" void Array_Resize_TisObject_t_m22177_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76** p0, int32_t p1, int32_t p2, MethodInfo* method);
#define Array_Resize_TisObject_t_m22177(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76**, int32_t, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22177_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Resize<System.Security.Policy.StrongName>(!!0[]&,System.Int32,System.Int32)
// System.Void System.Array::Resize<System.Security.Policy.StrongName>(!!0[]&,System.Int32,System.Int32)
#define Array_Resize_TisStrongName_t1811_m25734(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3520**, int32_t, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22177_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod Array_Resize_TisStrongName_t1811_m25734_GenericMethod;
// System.Void System.Array::Resize<System.Security.Policy.StrongName>(T[]&,System.Int32)
extern MethodInfo Array_Resize_TisStrongName_t1811_m25735_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Security.Policy.StrongName>(T[]&,System.Int32)
// System.Void System.Array::Resize<System.Security.Policy.StrongName>(T[]&,System.Int32)
#define Array_Resize_TisStrongName_t1811_m25735(__this /* static, unused */, ___array, ___newSize, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3520**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m22178_gshared)(__this /* static, unused */, ___array, ___newSize, method)
// System.Void System.Array::Resize<System.Security.Policy.StrongName>(T[]&,System.Int32)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo StrongNameU5BU5D_t3520_il2cpp_TypeInfo;
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern Il2CppType StrongNameU5BU5D_t3520_0_0_0;
extern MethodInfo Math_Min_m10563_MethodInfo;
extern MethodInfo Array_Copy_m5453_MethodInfo;
// System.Void System.Array::Resize<System.Security.Policy.StrongName>(T[]&,System.Int32,System.Int32)
extern MethodInfo Array_Resize_TisStrongName_t1811_m25734_MethodInfo;
// System.Void System.Array::Resize<System.Security.Policy.StrongName>(T[]&,System.Int32,System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_52.h"
extern TypeInfo EqualityComparer_1_t3524_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_52MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3524_0_0_0;
extern MethodInfo EqualityComparer_1_Equals_m25736_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m22019_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25736_GenericMethod;
// System.Int32 System.Array::IndexOf<System.Security.Policy.StrongName>(T[],T,System.Int32,System.Int32)
extern MethodInfo Array_IndexOf_TisStrongName_t1811_m25737_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Security.Policy.StrongName>(T[],T,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Security.Policy.StrongName>(T[],T,System.Int32,System.Int32)
#define Array_IndexOf_TisStrongName_t1811_m25737(__this /* static, unused */, ___array, ___value, ___startIndex, ___count, method) (( int32_t (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3520*, StrongName_t1811 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10971_gshared)(__this /* static, unused */, ___array, ___value, ___startIndex, ___count, method)
// System.Int32 System.Array::IndexOf<System.Security.Policy.StrongName>(T[],T,System.Int32,System.Int32)
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::Sort<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisStrongName_t1811_TisStrongName_t1811_m25738(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3520*, StrongNameU5BU5D_t3520*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m22246_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
extern Il2CppGenericMethod Array_Sort_TisStrongName_t1811_TisStrongName_t1811_m25738_GenericMethod;
// System.Void System.Array::Sort<System.Security.Policy.StrongName>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern MethodInfo Array_Sort_TisStrongName_t1811_m25739_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
// System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern "C" void Array_Sort_TisObject_t_m22247_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* ___array, int32_t ___index, int32_t ___length, Object_t* ___comparer, MethodInfo* method);
#define Array_Sort_TisObject_t_m22247(__this /* static, unused */, ___array, ___index, ___length, ___comparer, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m22247_gshared)(__this /* static, unused */, ___array, ___index, ___length, ___comparer, method)
// Declaration System.Void System.Array::Sort<System.Security.Policy.StrongName>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
// System.Void System.Array::Sort<System.Security.Policy.StrongName>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
#define Array_Sort_TisStrongName_t1811_m25739(__this /* static, unused */, ___array, ___index, ___length, ___comparer, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3520*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m22247_gshared)(__this /* static, unused */, ___array, ___index, ___length, ___comparer, method)
// System.Void System.Array::Sort<System.Security.Policy.StrongName>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo DoubleU5BU5D_t48_il2cpp_TypeInfo;
extern TypeInfo Double_t89_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t109_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t268_il2cpp_TypeInfo;
extern TypeInfo Char_t262_il2cpp_TypeInfo;
extern Il2CppType DoubleU5BU5D_t48_0_0_0;
extern Il2CppType Int32U5BU5D_t109_0_0_0;
extern Il2CppType CharU5BU5D_t268_0_0_0;
extern MethodInfo ArgumentException__ctor_m10140_MethodInfo;
extern MethodInfo Array_combsort_m7244_MethodInfo;
extern MethodInfo Array_combsort_m7245_MethodInfo;
extern MethodInfo Array_combsort_m7246_MethodInfo;
struct Array_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
struct Array_t;
// Declaration System.Array/Swapper System.Array::get_swapper<System.Object>(!!0[])
// System.Array/Swapper System.Array::get_swapper<System.Object>(!!0[])
extern "C" Swapper_t1405 * Array_get_swapper_TisObject_t_m22248_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, MethodInfo* method);
#define Array_get_swapper_TisObject_t_m22248(__this /* static, unused */, p0, method) (( Swapper_t1405 * (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, MethodInfo*))Array_get_swapper_TisObject_t_m22248_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Array/Swapper System.Array::get_swapper<System.Security.Policy.StrongName>(!!0[])
// System.Array/Swapper System.Array::get_swapper<System.Security.Policy.StrongName>(!!0[])
#define Array_get_swapper_TisStrongName_t1811_m25740(__this /* static, unused */, p0, method) (( Swapper_t1405 * (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3520*, MethodInfo*))Array_get_swapper_TisObject_t_m22248_gshared)(__this /* static, unused */, p0, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::qsort<System.Object,System.Object>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::qsort<System.Object,System.Object>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_qsort_TisObject_t_TisObject_t_m22249_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, ObjectU5BU5D_t76* p1, int32_t p2, int32_t p3, Object_t* p4, MethodInfo* method);
#define Array_qsort_TisObject_t_TisObject_t_m22249(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, int32_t, int32_t, Object_t*, MethodInfo*))Array_qsort_TisObject_t_TisObject_t_m22249_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
// Declaration System.Void System.Array::qsort<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::qsort<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_qsort_TisStrongName_t1811_TisStrongName_t1811_m25741(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3520*, StrongNameU5BU5D_t3520*, int32_t, int32_t, Object_t*, MethodInfo*))Array_qsort_TisObject_t_TisObject_t_m22249_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
extern Il2CppGenericMethod Array_get_swapper_TisStrongName_t1811_m25740_GenericMethod;
extern Il2CppGenericMethod Array_qsort_TisStrongName_t1811_TisStrongName_t1811_m25741_GenericMethod;
// System.Void System.Array::Sort<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern MethodInfo Array_Sort_TisStrongName_t1811_TisStrongName_t1811_m25738_MethodInfo;
// System.Void System.Array::Sort<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Swapper_t1405_il2cpp_TypeInfo;
// System.Array/Swapper
#include "mscorlib_System_Array_SwapperMethodDeclarations.h"
extern MethodInfo Array_int_swapper_m7239_MethodInfo;
extern MethodInfo Swapper__ctor_m7160_MethodInfo;
extern MethodInfo Array_double_swapper_m7242_MethodInfo;
extern MethodInfo Array_slow_swapper_m7241_MethodInfo;
// System.Array/Swapper System.Array::get_swapper<System.Security.Policy.StrongName>(T[])
extern MethodInfo Array_get_swapper_TisStrongName_t1811_m25740_MethodInfo;
// System.Array/Swapper System.Array::get_swapper<System.Security.Policy.StrongName>(T[])
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
struct Array_t;
// Declaration System.Int32 System.Array::compare<System.Object>(!!0,!!0,System.Collections.Generic.IComparer`1<!!0>)
// System.Int32 System.Array::compare<System.Object>(!!0,!!0,System.Collections.Generic.IComparer`1<!!0>)
extern "C" int32_t Array_compare_TisObject_t_m22426_gshared (Object_t * __this /* static, unused */, Object_t * p0, Object_t * p1, Object_t* p2, MethodInfo* method);
#define Array_compare_TisObject_t_m22426(__this /* static, unused */, p0, p1, p2, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, Object_t *, Object_t*, MethodInfo*))Array_compare_TisObject_t_m22426_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Int32 System.Array::compare<System.Security.Policy.StrongName>(!!0,!!0,System.Collections.Generic.IComparer`1<!!0>)
// System.Int32 System.Array::compare<System.Security.Policy.StrongName>(!!0,!!0,System.Collections.Generic.IComparer`1<!!0>)
#define Array_compare_TisStrongName_t1811_m25742(__this /* static, unused */, p0, p1, p2, method) (( int32_t (*) (Object_t * /* static, unused */, StrongName_t1811 *, StrongName_t1811 *, Object_t*, MethodInfo*))Array_compare_TisObject_t_m22426_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::swap<System.Object,System.Object>(!!0[],!!1[],System.Int32,System.Int32)
// System.Void System.Array::swap<System.Object,System.Object>(!!0[],!!1[],System.Int32,System.Int32)
extern "C" void Array_swap_TisObject_t_TisObject_t_m22427_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, ObjectU5BU5D_t76* p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_swap_TisObject_t_TisObject_t_m22427(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, ObjectU5BU5D_t76*, int32_t, int32_t, MethodInfo*))Array_swap_TisObject_t_TisObject_t_m22427_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::swap<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(!!0[],!!1[],System.Int32,System.Int32)
// System.Void System.Array::swap<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(!!0[],!!1[],System.Int32,System.Int32)
#define Array_swap_TisStrongName_t1811_TisStrongName_t1811_m25743(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3520*, StrongNameU5BU5D_t3520*, int32_t, int32_t, MethodInfo*))Array_swap_TisObject_t_TisObject_t_m22427_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
extern Il2CppGenericMethod Array_compare_TisStrongName_t1811_m25742_GenericMethod;
extern Il2CppGenericMethod Array_swap_TisStrongName_t1811_TisStrongName_t1811_m25743_GenericMethod;
// System.Void System.Array::qsort<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern MethodInfo Array_qsort_TisStrongName_t1811_TisStrongName_t1811_m25741_MethodInfo;
// System.Void System.Array::qsort<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparer_1_t3902_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t3903_il2cpp_TypeInfo;
extern TypeInfo IComparable_t124_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType IComparer_1_t3902_0_0_0;
extern Il2CppType IComparable_1_t3903_0_0_0;
extern Il2CppType StrongName_t1811_0_0_0;
extern MethodInfo IComparer_1_Compare_m25744_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m25745_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10941_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1995_MethodInfo;
extern MethodInfo String_Format_m1975_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5227_MethodInfo;
extern Il2CppGenericMethod IComparer_1_Compare_m25744_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m25745_GenericMethod;
// System.Int32 System.Array::compare<System.Security.Policy.StrongName>(T,T,System.Collections.Generic.IComparer`1<T>)
extern MethodInfo Array_compare_TisStrongName_t1811_m25742_MethodInfo;
// System.Int32 System.Array::compare<System.Security.Policy.StrongName>(T,T,System.Collections.Generic.IComparer`1<T>)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::swap<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(K[],V[],System.Int32,System.Int32)
extern MethodInfo Array_swap_TisStrongName_t1811_TisStrongName_t1811_m25743_MethodInfo;
// System.Void System.Array::swap<System.Security.Policy.StrongName,System.Security.Policy.StrongName>(K[],V[],System.Int32,System.Int32)
#ifndef _MSC_VER
#else
#endif

// System.Comparison`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Comparison_1_gen_33.h"
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::qsort<System.Object>(!!0[],System.Int32,System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::qsort<System.Object>(!!0[],System.Int32,System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_qsort_TisObject_t_m22430_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, int32_t p2, Comparison_1_t2496 * p3, MethodInfo* method);
#define Array_qsort_TisObject_t_m22430(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, Comparison_1_t2496 *, MethodInfo*))Array_qsort_TisObject_t_m22430_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::qsort<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::qsort<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Int32,System.Comparison`1<!!0>)
#define Array_qsort_TisStrongName_t1811_m25746(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3520*, int32_t, int32_t, Comparison_1_t3529 *, MethodInfo*))Array_qsort_TisObject_t_m22430_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
extern Il2CppGenericMethod Array_qsort_TisStrongName_t1811_m25746_GenericMethod;
// System.Void System.Array::Sort<System.Security.Policy.StrongName>(T[],System.Int32,System.Comparison`1<T>)
extern MethodInfo Array_Sort_TisStrongName_t1811_m25747_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Security.Policy.StrongName>(T[],System.Int32,System.Comparison`1<T>)
// System.Void System.Array::Sort<System.Security.Policy.StrongName>(T[],System.Int32,System.Comparison`1<T>)
#define Array_Sort_TisStrongName_t1811_m25747(__this /* static, unused */, ___array, ___length, ___comparison, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3520*, int32_t, Comparison_1_t3529 *, MethodInfo*))Array_Sort_TisObject_t_m22431_gshared)(__this /* static, unused */, ___array, ___length, ___comparison, method)
// System.Void System.Array::Sort<System.Security.Policy.StrongName>(T[],System.Int32,System.Comparison`1<T>)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Comparison_1_t3529_il2cpp_TypeInfo;
// System.Comparison`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Comparison_1_gen_33MethodDeclarations.h"
extern Il2CppType Comparison_1_t3529_0_0_0;
extern MethodInfo Comparison_1_Invoke_m22034_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::swap<System.Object>(!!0[],System.Int32,System.Int32)
// System.Void System.Array::swap<System.Object>(!!0[],System.Int32,System.Int32)
extern "C" void Array_swap_TisObject_t_m22432_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t76* p0, int32_t p1, int32_t p2, MethodInfo* method);
#define Array_swap_TisObject_t_m22432(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t76*, int32_t, int32_t, MethodInfo*))Array_swap_TisObject_t_m22432_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::swap<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Int32)
// System.Void System.Array::swap<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Int32)
#define Array_swap_TisStrongName_t1811_m25748(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t3520*, int32_t, int32_t, MethodInfo*))Array_swap_TisObject_t_m22432_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod Comparison_1_Invoke_m22034_GenericMethod;
extern Il2CppGenericMethod Array_swap_TisStrongName_t1811_m25748_GenericMethod;
// System.Void System.Array::qsort<System.Security.Policy.StrongName>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern MethodInfo Array_qsort_TisStrongName_t1811_m25746_MethodInfo;
// System.Void System.Array::qsort<System.Security.Policy.StrongName>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::swap<System.Security.Policy.StrongName>(T[],System.Int32,System.Int32)
extern MethodInfo Array_swap_TisStrongName_t1811_m25748_MethodInfo;
// System.Void System.Array::swap<System.Security.Policy.StrongName>(T[],System.Int32,System.Int32)
