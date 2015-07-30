#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>,System.Type>
struct Transform_1_t3256;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t660;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>,System.Type>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m19783(__this, ___object, ___method, method) (( void (*) (Transform_1_t3256 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14782_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>,System.Type>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19784(__this, ___key, ___value, method) (( Type_t * (*) (Transform_1_t3256 *, Type_t *, Object_t*, MethodInfo*))Transform_1_Invoke_m14783_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>,System.Type>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19785(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3256 *, Type_t *, Object_t*, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14784_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>,System.Type>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19786(__this, ___result, method) (( Type_t * (*) (Transform_1_t3256 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14785_gshared)(__this, ___result, method)
