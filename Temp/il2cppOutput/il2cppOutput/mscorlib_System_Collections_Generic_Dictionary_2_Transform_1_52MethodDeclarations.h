#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct Transform_1_t3047;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53MethodDeclarations.h"
#define Transform_1__ctor_m17683(__this, ___object, ___method, method) (( void (*) (Transform_1_t3047 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17684_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17685(__this, ___key, ___value, method) (( KeyValuePair_2_t747  (*) (Transform_1_t3047 *, String_t*, String_t*, MethodInfo*))Transform_1_Invoke_m17686_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17687(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3047 *, String_t*, String_t*, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17688_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17689(__this, ___result, method) (( KeyValuePair_2_t747  (*) (Transform_1_t3047 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17690_gshared)(__this, ___result, method)
