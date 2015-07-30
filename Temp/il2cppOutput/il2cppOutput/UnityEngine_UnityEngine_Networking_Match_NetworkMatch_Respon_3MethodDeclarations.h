#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
struct ResponseDelegate_1_t3199;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ResponseDelegate_1__ctor_m19238_gshared (ResponseDelegate_1_t3199 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define ResponseDelegate_1__ctor_m19238(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t3199 *, Object_t *, IntPtr_t, MethodInfo*))ResponseDelegate_1__ctor_m19238_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern "C" void ResponseDelegate_1_Invoke_m19240_gshared (ResponseDelegate_1_t3199 * __this, Object_t * ___response, MethodInfo* method);
#define ResponseDelegate_1_Invoke_m19240(__this, ___response, method) (( void (*) (ResponseDelegate_1_t3199 *, Object_t *, MethodInfo*))ResponseDelegate_1_Invoke_m19240_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * ResponseDelegate_1_BeginInvoke_m19242_gshared (ResponseDelegate_1_t3199 * __this, Object_t * ___response, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define ResponseDelegate_1_BeginInvoke_m19242(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t3199 *, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))ResponseDelegate_1_BeginInvoke_m19242_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void ResponseDelegate_1_EndInvoke_m19244_gshared (ResponseDelegate_1_t3199 * __this, Object_t * ___result, MethodInfo* method);
#define ResponseDelegate_1_EndInvoke_m19244(__this, ___result, method) (( void (*) (ResponseDelegate_1_t3199 *, Object_t *, MethodInfo*))ResponseDelegate_1_EndInvoke_m19244_gshared)(__this, ___result, method)
