#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Transform_1_t3037;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49MethodDeclarations.h"
#define Transform_1__ctor_m17559(__this, ___object, ___method, method) (( void (*) (Transform_1_t3037 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17560_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17561(__this, ___key, ___value, method) (( KeyValuePair_2_t3028  (*) (Transform_1_t3037 *, String_t*, int32_t, MethodInfo*))Transform_1_Invoke_m17562_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17563(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3037 *, String_t*, int32_t, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17564_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17565(__this, ___result, method) (( KeyValuePair_2_t3028  (*) (Transform_1_t3037 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17566_gshared)(__this, ___result, method)
