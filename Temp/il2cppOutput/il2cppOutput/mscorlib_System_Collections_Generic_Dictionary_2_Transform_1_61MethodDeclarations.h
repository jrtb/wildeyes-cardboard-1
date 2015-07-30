#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Transform_1_t3129;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_62MethodDeclarations.h"
#define Transform_1__ctor_m18602(__this, ___object, ___method, method) (( void (*) (Transform_1_t3129 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18603_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18604(__this, ___key, ___value, method) (( KeyValuePair_2_t3120  (*) (Transform_1_t3129 *, String_t*, int64_t, MethodInfo*))Transform_1_Invoke_m18605_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18606(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3129 *, String_t*, int64_t, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18607_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18608(__this, ___result, method) (( KeyValuePair_2_t3120  (*) (Transform_1_t3129 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18609_gshared)(__this, ___result, method)
