#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct Transform_1_t3242;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t659;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m19643(__this, ___object, ___method, method) (( void (*) (Transform_1_t3242 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14782_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19644(__this, ___key, ___value, method) (( ConstructorDelegate_t659 * (*) (Transform_1_t3242 *, Type_t *, ConstructorDelegate_t659 *, MethodInfo*))Transform_1_Invoke_m14783_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19645(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3242 *, Type_t *, ConstructorDelegate_t659 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14784_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19646(__this, ___result, method) (( ConstructorDelegate_t659 * (*) (Transform_1_t3242 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14785_gshared)(__this, ___result, method)
