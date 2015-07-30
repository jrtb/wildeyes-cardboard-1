#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2805;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15252_gshared (Comparison_1_t2805 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m15252(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2805 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m15252_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15253_gshared (Comparison_1_t2805 * __this, UIVertex_t253  ___x, UIVertex_t253  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m15253(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2805 *, UIVertex_t253 , UIVertex_t253 , MethodInfo*))Comparison_1_Invoke_m15253_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15254_gshared (Comparison_1_t2805 * __this, UIVertex_t253  ___x, UIVertex_t253  ___y, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m15254(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2805 *, UIVertex_t253 , UIVertex_t253 , AsyncCallback_t7 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m15254_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15255_gshared (Comparison_1_t2805 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m15255(__this, ___result, method) (( int32_t (*) (Comparison_1_t2805 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m15255_gshared)(__this, ___result, method)
