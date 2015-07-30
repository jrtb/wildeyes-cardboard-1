#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t2637;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t90;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m13555(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2637 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m12525_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityAction_1_Invoke_m13556(__this, ___arg0, method) (( void (*) (UnityAction_1_t2637 *, BaseEventData_t90 *, MethodInfo*))UnityAction_1_Invoke_m12526_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m13557(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2637 *, BaseEventData_t90 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m12527_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m13558(__this, ___result, method) (( void (*) (UnityAction_1_t2637 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m12528_gshared)(__this, ___result, method)
