#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<CardboardEye,CardboardHead>
struct Func_2_t59;
// System.Object
struct Object_t;
// CardboardHead
struct CardboardHead_t4;
// CardboardEye
struct CardboardEye_t36;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<CardboardEye,CardboardHead>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"
#define Func_2__ctor_m546(__this, ___object, ___method, method) (( void (*) (Func_2_t59 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m13040_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<CardboardEye,CardboardHead>::Invoke(T)
#define Func_2_Invoke_m13041(__this, ___arg1, method) (( CardboardHead_t4 * (*) (Func_2_t59 *, CardboardEye_t36 *, MethodInfo*))Func_2_Invoke_m13042_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<CardboardEye,CardboardHead>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m13043(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t59 *, CardboardEye_t36 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m13044_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<CardboardEye,CardboardHead>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m13045(__this, ___result, method) (( CardboardHead_t4 * (*) (Func_2_t59 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m13046_gshared)(__this, ___result, method)
