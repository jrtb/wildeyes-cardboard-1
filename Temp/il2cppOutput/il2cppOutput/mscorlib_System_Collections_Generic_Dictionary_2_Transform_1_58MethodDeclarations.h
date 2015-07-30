#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>
struct Transform_1_t3125;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54MethodDeclarations.h"
#define Transform_1__ctor_m18571(__this, ___object, ___method, method) (( void (*) (Transform_1_t3125 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18477_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18572(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t3125 *, String_t*, int64_t, MethodInfo*))Transform_1_Invoke_m18478_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18573(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3125 *, String_t*, int64_t, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18479_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18574(__this, ___result, method) (( String_t* (*) (Transform_1_t3125 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18480_gshared)(__this, ___result, method)
