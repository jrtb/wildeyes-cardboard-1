#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3086;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18155_gshared (Predicate_1_t3086 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m18155(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3086 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m18155_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18156_gshared (Predicate_1_t3086 * __this, UICharInfo_t386  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m18156(__this, ___obj, method) (( bool (*) (Predicate_1_t3086 *, UICharInfo_t386 , MethodInfo*))Predicate_1_Invoke_m18156_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18157_gshared (Predicate_1_t3086 * __this, UICharInfo_t386  ___obj, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m18157(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3086 *, UICharInfo_t386 , AsyncCallback_t7 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m18157_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18158_gshared (Predicate_1_t3086 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m18158(__this, ___result, method) (( bool (*) (Predicate_1_t3086 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m18158_gshared)(__this, ___result, method)
