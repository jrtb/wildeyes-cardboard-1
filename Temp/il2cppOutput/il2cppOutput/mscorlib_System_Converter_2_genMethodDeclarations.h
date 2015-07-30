#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t3469;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m21644_gshared (Converter_2_t3469 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Converter_2__ctor_m21644(__this, ___object, ___method, method) (( void (*) (Converter_2_t3469 *, Object_t *, IntPtr_t, MethodInfo*))Converter_2__ctor_m21644_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m21645_gshared (Converter_2_t3469 * __this, Object_t * ___input, MethodInfo* method);
#define Converter_2_Invoke_m21645(__this, ___input, method) (( Object_t * (*) (Converter_2_t3469 *, Object_t *, MethodInfo*))Converter_2_Invoke_m21645_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m21646_gshared (Converter_2_t3469 * __this, Object_t * ___input, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Converter_2_BeginInvoke_m21646(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t3469 *, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Converter_2_BeginInvoke_m21646_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m21647_gshared (Converter_2_t3469 * __this, Object_t * ___result, MethodInfo* method);
#define Converter_2_EndInvoke_m21647(__this, ___result, method) (( Object_t * (*) (Converter_2_t3469 *, Object_t *, MethodInfo*))Converter_2_EndInvoke_m21647_gshared)(__this, ___result, method)
