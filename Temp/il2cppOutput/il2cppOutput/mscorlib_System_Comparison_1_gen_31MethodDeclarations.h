#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t3388;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t720;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m20950(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3388 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m12062_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
#define Comparison_1_Invoke_m20951(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3388 *, PersistentCall_t720 *, PersistentCall_t720 *, MethodInfo*))Comparison_1_Invoke_m12063_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m20952(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3388 *, PersistentCall_t720 *, PersistentCall_t720 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m12064_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m20953(__this, ___result, method) (( int32_t (*) (Comparison_1_t3388 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m12065_gshared)(__this, ___result, method)
