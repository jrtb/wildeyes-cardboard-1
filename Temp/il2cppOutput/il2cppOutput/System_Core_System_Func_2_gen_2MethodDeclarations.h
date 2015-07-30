#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Object>
struct Func_2_t108;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m13040_gshared (Func_2_t108 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Func_2__ctor_m13040(__this, ___object, ___method, method) (( void (*) (Func_2_t108 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m13040_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m13042_gshared (Func_2_t108 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m13042(__this, ___arg1, method) (( Object_t * (*) (Func_2_t108 *, Object_t *, MethodInfo*))Func_2_Invoke_m13042_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m13044_gshared (Func_2_t108 * __this, Object_t * ___arg1, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m13044(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t108 *, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m13044_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m13046_gshared (Func_2_t108 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m13046(__this, ___result, method) (( Object_t * (*) (Func_2_t108 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m13046_gshared)(__this, ___result, method)
