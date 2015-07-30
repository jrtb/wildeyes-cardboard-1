#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
struct Transform_1_t2846;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t233;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_29MethodDeclarations.h"
#define Transform_1__ctor_m15749(__this, ___object, ___method, method) (( void (*) (Transform_1_t2846 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m15750_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m15751(__this, ___key, ___value, method) (( KeyValuePair_2_t2837  (*) (Transform_1_t2846 *, Graphic_t233 *, int32_t, MethodInfo*))Transform_1_Invoke_m15752_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m15753(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2846 *, Graphic_t233 *, int32_t, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m15754_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m15755(__this, ___result, method) (( KeyValuePair_2_t2837  (*) (Transform_1_t2846 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m15756_gshared)(__this, ___result, method)
