#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>
struct Transform_1_t2654;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m14007(__this, ___object, ___method, method) (( void (*) (Transform_1_t2654 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13906_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m14008(__this, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Transform_1_t2654 *, int32_t, PointerEventData_t52 *, MethodInfo*))Transform_1_Invoke_m13907_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m14009(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2654 *, int32_t, PointerEventData_t52 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13908_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m14010(__this, ___result, method) (( DictionaryEntry_t1014  (*) (Transform_1_t2654 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13909_gshared)(__this, ___result, method)
