#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t2477;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11972_gshared (Predicate_1_t2477 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m11972(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2477 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m11972_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11973_gshared (Predicate_1_t2477 * __this, Object_t * ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m11973(__this, ___obj, method) (( bool (*) (Predicate_1_t2477 *, Object_t *, MethodInfo*))Predicate_1_Invoke_m11973_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11974_gshared (Predicate_1_t2477 * __this, Object_t * ___obj, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m11974(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2477 *, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m11974_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11975_gshared (Predicate_1_t2477 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m11975(__this, ___result, method) (( bool (*) (Predicate_1_t2477 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m11975_gshared)(__this, ___result, method)
