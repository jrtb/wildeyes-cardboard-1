#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<CardboardHead,System.Boolean>
struct Func_2_t2592;
// System.Object
struct Object_t;
// CardboardHead
struct CardboardHead_t4;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<CardboardHead,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_6MethodDeclarations.h"
#define Func_2__ctor_m13065(__this, ___object, ___method, method) (( void (*) (Func_2_t2592 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m12871_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<CardboardHead,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m13066(__this, ___arg1, method) (( bool (*) (Func_2_t2592 *, CardboardHead_t4 *, MethodInfo*))Func_2_Invoke_m12873_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<CardboardHead,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m13067(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2592 *, CardboardHead_t4 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m12875_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<CardboardHead,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m13068(__this, ___result, method) (( bool (*) (Func_2_t2592 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m12877_gshared)(__this, ___result, method)
