#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct Transform_1_t3289;
// System.Object
struct Object_t;
// System.String
struct String_t;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t662;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_96MethodDeclarations.h"
#define Transform_1__ctor_m20102(__this, ___object, ___method, method) (( void (*) (Transform_1_t3289 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20103_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20104(__this, ___key, ___value, method) (( KeyValuePair_2_t780  (*) (Transform_1_t3289 *, String_t*, GetDelegate_t662 *, MethodInfo*))Transform_1_Invoke_m20105_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20106(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3289 *, String_t*, GetDelegate_t662 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20107_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20108(__this, ___result, method) (( KeyValuePair_2_t780  (*) (Transform_1_t3289 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20109_gshared)(__this, ___result, method)
