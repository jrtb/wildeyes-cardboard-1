#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>
struct Transform_1_t2679;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m14003(__this, ___object, ___method, method) (( void (*) (Transform_1_t2679 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13902_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m14004(__this, ___key, ___value, method) (( PointerEventData_t52 * (*) (Transform_1_t2679 *, int32_t, PointerEventData_t52 *, MethodInfo*))Transform_1_Invoke_m13903_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m14005(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2679 *, int32_t, PointerEventData_t52 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13904_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m14006(__this, ___result, method) (( PointerEventData_t52 * (*) (Transform_1_t2679 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13905_gshared)(__this, ___result, method)
