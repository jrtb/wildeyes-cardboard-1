#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2527;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12335_gshared (Predicate_1_t2527 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m12335(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2527 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m12335_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12336_gshared (Predicate_1_t2527 * __this, RaycastResult_t93  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m12336(__this, ___obj, method) (( bool (*) (Predicate_1_t2527 *, RaycastResult_t93 , MethodInfo*))Predicate_1_Invoke_m12336_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12337_gshared (Predicate_1_t2527 * __this, RaycastResult_t93  ___obj, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m12337(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2527 *, RaycastResult_t93 , AsyncCallback_t7 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m12337_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12338_gshared (Predicate_1_t2527 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m12338(__this, ___result, method) (( bool (*) (Predicate_1_t2527 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m12338_gshared)(__this, ___result, method)
