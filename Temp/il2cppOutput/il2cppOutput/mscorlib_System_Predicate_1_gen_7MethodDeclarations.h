#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Transform>
struct Predicate_1_t2568;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t38;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m12852(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2568 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m11972_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::Invoke(T)
#define Predicate_1_Invoke_m12853(__this, ___obj, method) (( bool (*) (Predicate_1_t2568 *, Transform_t38 *, MethodInfo*))Predicate_1_Invoke_m11973_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Transform>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m12854(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2568 *, Transform_t38 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m11974_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m12855(__this, ___result, method) (( bool (*) (Predicate_1_t2568 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m11975_gshared)(__this, ___result, method)
