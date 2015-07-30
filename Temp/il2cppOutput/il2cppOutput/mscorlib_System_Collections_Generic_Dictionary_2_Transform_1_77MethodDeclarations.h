#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,System.Type>
struct Transform_1_t3239;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t659;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,System.Type>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m19620(__this, ___object, ___method, method) (( void (*) (Transform_1_t3239 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14782_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,System.Type>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19621(__this, ___key, ___value, method) (( Type_t * (*) (Transform_1_t3239 *, Type_t *, ConstructorDelegate_t659 *, MethodInfo*))Transform_1_Invoke_m14783_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,System.Type>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19622(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3239 *, Type_t *, ConstructorDelegate_t659 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14784_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,System.Type>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19623(__this, ___result, method) (( Type_t * (*) (Transform_1_t3239 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14785_gshared)(__this, ___result, method)
