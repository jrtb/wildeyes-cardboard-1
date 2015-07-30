#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t332;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t71;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m2355(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t332 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m12525_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m2357(__this, ___arg0, method) (( void (*) (UnityAction_1_t332 *, Component_t71 *, MethodInfo*))UnityAction_1_Invoke_m12526_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m16722(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t332 *, Component_t71 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m12527_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m16723(__this, ___result, method) (( void (*) (UnityAction_1_t332 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m12528_gshared)(__this, ___result, method)
