#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t3230;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadSafeDictionaryValueFactory_2__ctor_m19495_gshared (ThreadSafeDictionaryValueFactory_2_t3230 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2__ctor_m19495(__this, ___object, ___method, method) (( void (*) (ThreadSafeDictionaryValueFactory_2_t3230 *, Object_t *, IntPtr_t, MethodInfo*))ThreadSafeDictionaryValueFactory_2__ctor_m19495_gshared)(__this, ___object, ___method, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::Invoke(TKey)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_Invoke_m19497_gshared (ThreadSafeDictionaryValueFactory_2_t3230 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_Invoke_m19497(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t3230 *, Object_t *, MethodInfo*))ThreadSafeDictionaryValueFactory_2_Invoke_m19497_gshared)(__this, ___key, method)
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_BeginInvoke_m19499_gshared (ThreadSafeDictionaryValueFactory_2_t3230 * __this, Object_t * ___key, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_BeginInvoke_m19499(__this, ___key, ___callback, ___object, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t3230 *, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))ThreadSafeDictionaryValueFactory_2_BeginInvoke_m19499_gshared)(__this, ___key, ___callback, ___object, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_EndInvoke_m19501_gshared (ThreadSafeDictionaryValueFactory_2_t3230 * __this, Object_t * ___result, MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_EndInvoke_m19501(__this, ___result, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t3230 *, Object_t *, MethodInfo*))ThreadSafeDictionaryValueFactory_2_EndInvoke_m19501_gshared)(__this, ___result, method)
