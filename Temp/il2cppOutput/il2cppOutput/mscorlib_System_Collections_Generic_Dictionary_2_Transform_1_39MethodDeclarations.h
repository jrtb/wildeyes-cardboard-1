#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
struct Transform_1_t2998;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17130_gshared (Transform_1_t2998 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m17130(__this, ___object, ___method, method) (( void (*) (Transform_1_t2998 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17130_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2987  Transform_1_Invoke_m17132_gshared (Transform_1_t2998 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m17132(__this, ___key, ___value, method) (( KeyValuePair_2_t2987  (*) (Transform_1_t2998 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m17132_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17134_gshared (Transform_1_t2998 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m17134(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2998 *, int32_t, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17134_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2987  Transform_1_EndInvoke_m17136_gshared (Transform_1_t2998 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m17136(__this, ___result, method) (( KeyValuePair_2_t2987  (*) (Transform_1_t2998 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17136_gshared)(__this, ___result, method)
