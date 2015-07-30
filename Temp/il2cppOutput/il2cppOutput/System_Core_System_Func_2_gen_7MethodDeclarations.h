#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Single>
struct Func_2_t2953;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m16724_gshared (Func_2_t2953 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Func_2__ctor_m16724(__this, ___object, ___method, method) (( void (*) (Func_2_t2953 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m16724_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m16725_gshared (Func_2_t2953 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m16725(__this, ___arg1, method) (( float (*) (Func_2_t2953 *, Object_t *, MethodInfo*))Func_2_Invoke_m16725_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m16727_gshared (Func_2_t2953 * __this, Object_t * ___arg1, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m16727(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2953 *, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m16727_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m16729_gshared (Func_2_t2953 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m16729(__this, ___result, method) (( float (*) (Func_2_t2953 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m16729_gshared)(__this, ___result, method)
