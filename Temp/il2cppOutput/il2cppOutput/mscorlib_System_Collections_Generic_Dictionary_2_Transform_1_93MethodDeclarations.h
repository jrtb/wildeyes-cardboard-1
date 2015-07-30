#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct Transform_1_t3288;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t662;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m20094(__this, ___object, ___method, method) (( void (*) (Transform_1_t3288 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14782_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20095(__this, ___key, ___value, method) (( GetDelegate_t662 * (*) (Transform_1_t3288 *, String_t*, GetDelegate_t662 *, MethodInfo*))Transform_1_Invoke_m14783_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20096(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3288 *, String_t*, GetDelegate_t662 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14784_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20097(__this, ___result, method) (( GetDelegate_t662 * (*) (Transform_1_t3288 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14785_gshared)(__this, ___result, method)
