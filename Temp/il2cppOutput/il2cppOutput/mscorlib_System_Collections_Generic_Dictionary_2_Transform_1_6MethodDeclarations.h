#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
struct Transform_1_t2680;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t52;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"
#define Transform_1__ctor_m14011(__this, ___object, ___method, method) (( void (*) (Transform_1_t2680 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14012_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m14013(__this, ___key, ___value, method) (( KeyValuePair_2_t358  (*) (Transform_1_t2680 *, int32_t, PointerEventData_t52 *, MethodInfo*))Transform_1_Invoke_m14014_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m14015(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2680 *, int32_t, PointerEventData_t52 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14016_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m14017(__this, ___result, method) (( KeyValuePair_2_t358  (*) (Transform_1_t2680 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14018_gshared)(__this, ___result, method)
