#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>
struct Transform_1_t3301;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20254_gshared (Transform_1_t3301 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m20254(__this, ___object, ___method, method) (( void (*) (Transform_1_t3301 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20254_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m20255_gshared (Transform_1_t3301 * __this, Object_t * ___key, KeyValuePair_2_t775  ___value, MethodInfo* method);
#define Transform_1_Invoke_m20255(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t3301 *, Object_t *, KeyValuePair_2_t775 , MethodInfo*))Transform_1_Invoke_m20255_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m20256_gshared (Transform_1_t3301 * __this, Object_t * ___key, KeyValuePair_2_t775  ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m20256(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3301 *, Object_t *, KeyValuePair_2_t775 , AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20256_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m20257_gshared (Transform_1_t3301 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m20257(__this, ___result, method) (( Object_t * (*) (Transform_1_t3301 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20257_gshared)(__this, ___result, method)
