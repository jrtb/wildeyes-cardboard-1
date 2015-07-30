#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
struct Transform_1_t2681;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14012_gshared (Transform_1_t2681 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m14012(__this, ___object, ___method, method) (( void (*) (Transform_1_t2681 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14012_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t358  Transform_1_Invoke_m14014_gshared (Transform_1_t2681 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m14014(__this, ___key, ___value, method) (( KeyValuePair_2_t358  (*) (Transform_1_t2681 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m14014_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14016_gshared (Transform_1_t2681 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m14016(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2681 *, int32_t, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14016_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t358  Transform_1_EndInvoke_m14018_gshared (Transform_1_t2681 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m14018(__this, ___result, method) (( KeyValuePair_2_t358  (*) (Transform_1_t2681 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14018_gshared)(__this, ___result, method)
