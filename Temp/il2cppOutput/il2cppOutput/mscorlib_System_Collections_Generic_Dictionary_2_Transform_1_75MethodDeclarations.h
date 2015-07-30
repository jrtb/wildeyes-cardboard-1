#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Transform_1_t3209;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_76MethodDeclarations.h"
#define Transform_1__ctor_m19377(__this, ___object, ___method, method) (( void (*) (Transform_1_t3209 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m19378_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19379(__this, ___key, ___value, method) (( KeyValuePair_2_t650  (*) (Transform_1_t3209 *, String_t*, Object_t *, MethodInfo*))Transform_1_Invoke_m19380_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19381(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3209 *, String_t*, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m19382_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19383(__this, ___result, method) (( KeyValuePair_2_t650  (*) (Transform_1_t3209 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m19384_gshared)(__this, ___result, method)
