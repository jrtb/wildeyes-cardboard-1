#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Transform_1_t3304;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20277_gshared (Transform_1_t3304 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m20277(__this, ___object, ___method, method) (( void (*) (Transform_1_t3304 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20277_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t775  Transform_1_Invoke_m20278_gshared (Transform_1_t3304 * __this, Object_t * ___key, KeyValuePair_2_t775  ___value, MethodInfo* method);
#define Transform_1_Invoke_m20278(__this, ___key, ___value, method) (( KeyValuePair_2_t775  (*) (Transform_1_t3304 *, Object_t *, KeyValuePair_2_t775 , MethodInfo*))Transform_1_Invoke_m20278_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m20279_gshared (Transform_1_t3304 * __this, Object_t * ___key, KeyValuePair_2_t775  ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m20279(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3304 *, Object_t *, KeyValuePair_2_t775 , AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20279_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t775  Transform_1_EndInvoke_m20280_gshared (Transform_1_t3304 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m20280(__this, ___result, method) (( KeyValuePair_2_t775  (*) (Transform_1_t3304 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20280_gshared)(__this, ___result, method)
