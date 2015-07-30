#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3095;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18298_gshared (Predicate_1_t3095 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m18298(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3095 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m18298_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18299_gshared (Predicate_1_t3095 * __this, UILineInfo_t384  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m18299(__this, ___obj, method) (( bool (*) (Predicate_1_t3095 *, UILineInfo_t384 , MethodInfo*))Predicate_1_Invoke_m18299_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18300_gshared (Predicate_1_t3095 * __this, UILineInfo_t384  ___obj, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m18300(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3095 *, UILineInfo_t384 , AsyncCallback_t7 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m18300_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18301_gshared (Predicate_1_t3095 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m18301(__this, ___result, method) (( bool (*) (Predicate_1_t3095 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m18301_gshared)(__this, ___result, method)
