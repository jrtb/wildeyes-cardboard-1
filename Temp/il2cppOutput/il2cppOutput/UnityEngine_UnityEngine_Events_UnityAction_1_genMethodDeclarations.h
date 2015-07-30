#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t167;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t181;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m1841(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t167 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m12525_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Invoke(T0)
#define UnityAction_1_Invoke_m12560(__this, ___arg0, method) (( void (*) (UnityAction_1_t167 *, List_1_t181 *, MethodInfo*))UnityAction_1_Invoke_m12526_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m12561(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t167 *, List_1_t181 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m12527_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m12562(__this, ___result, method) (( void (*) (UnityAction_1_t167 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m12528_gshared)(__this, ___result, method)
