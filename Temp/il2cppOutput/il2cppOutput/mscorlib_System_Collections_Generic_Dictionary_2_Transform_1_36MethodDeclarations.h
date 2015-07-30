#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>
struct Transform_1_t2996;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t529;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m17121(__this, ___object, ___method, method) (( void (*) (Transform_1_t2996 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13902_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17122(__this, ___key, ___value, method) (( LayoutCache_t529 * (*) (Transform_1_t2996 *, int32_t, LayoutCache_t529 *, MethodInfo*))Transform_1_Invoke_m13903_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17123(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2996 *, int32_t, LayoutCache_t529 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13904_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17124(__this, ___result, method) (( LayoutCache_t529 * (*) (Transform_1_t2996 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13905_gshared)(__this, ___result, method)
