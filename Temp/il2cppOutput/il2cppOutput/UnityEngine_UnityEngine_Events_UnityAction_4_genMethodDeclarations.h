#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t3372;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_4__ctor_m20789_gshared (UnityAction_4_t3372 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_4__ctor_m20789(__this, ___object, ___method, method) (( void (*) (UnityAction_4_t3372 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_4__ctor_m20789_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" void UnityAction_4_Invoke_m20790_gshared (UnityAction_4_t3372 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
#define UnityAction_4_Invoke_m20790(__this, ___arg0, ___arg1, ___arg2, ___arg3, method) (( void (*) (UnityAction_4_t3372 *, Object_t *, Object_t *, Object_t *, Object_t *, MethodInfo*))UnityAction_4_Invoke_m20790_gshared)(__this, ___arg0, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_4_BeginInvoke_m20791_gshared (UnityAction_4_t3372 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_4_BeginInvoke_m20791(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (( Object_t * (*) (UnityAction_4_t3372 *, Object_t *, Object_t *, Object_t *, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))UnityAction_4_BeginInvoke_m20791_gshared)(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_4_EndInvoke_m20792_gshared (UnityAction_4_t3372 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_4_EndInvoke_m20792(__this, ___result, method) (( void (*) (UnityAction_4_t3372 *, Object_t *, MethodInfo*))UnityAction_4_EndInvoke_m20792_gshared)(__this, ___result, method)
