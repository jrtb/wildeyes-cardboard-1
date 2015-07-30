#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
struct Predicate_1_t3153;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t628;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m18903(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3153 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m11972_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::Invoke(T)
#define Predicate_1_Invoke_m18904(__this, ___obj, method) (( bool (*) (Predicate_1_t3153 *, MatchDesc_t628 *, MethodInfo*))Predicate_1_Invoke_m11973_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m18905(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3153 *, MatchDesc_t628 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m11974_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m18906(__this, ___result, method) (( bool (*) (Predicate_1_t3153 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m11975_gshared)(__this, ___result, method)
