#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t107;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_6MethodDeclarations.h"
#define Func_2__ctor_m12878(__this, ___object, ___method, method) (( void (*) (Func_2_t107 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m12871_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m12879(__this, ___arg1, method) (( bool (*) (Func_2_t107 *, Object_t *, MethodInfo*))Func_2_Invoke_m12873_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m12880(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t107 *, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m12875_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m12881(__this, ___result, method) (( bool (*) (Func_2_t107 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m12877_gshared)(__this, ___result, method)
