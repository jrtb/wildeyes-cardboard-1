#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>>
struct Transform_1_t3260;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t660;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_86MethodDeclarations.h"
#define Transform_1__ctor_m19814(__this, ___object, ___method, method) (( void (*) (Transform_1_t3260 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m19815_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19816(__this, ___key, ___value, method) (( KeyValuePair_2_t3217  (*) (Transform_1_t3260 *, Type_t *, Object_t*, MethodInfo*))Transform_1_Invoke_m19817_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19818(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3260 *, Type_t *, Object_t*, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m19819_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19820(__this, ___result, method) (( KeyValuePair_2_t3217  (*) (Transform_1_t3260 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m19821_gshared)(__this, ___result, method)
