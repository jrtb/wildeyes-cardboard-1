﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct Transform_1_t3048;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17684_gshared (Transform_1_t3048 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m17684(__this, ___object, ___method, method) (( void (*) (Transform_1_t3048 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17684_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t747  Transform_1_Invoke_m17686_gshared (Transform_1_t3048 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m17686(__this, ___key, ___value, method) (( KeyValuePair_2_t747  (*) (Transform_1_t3048 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m17686_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17688_gshared (Transform_1_t3048 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m17688(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3048 *, Object_t *, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17688_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t747  Transform_1_EndInvoke_m17690_gshared (Transform_1_t3048 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m17690(__this, ___result, method) (( KeyValuePair_2_t747  (*) (Transform_1_t3048 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17690_gshared)(__this, ___result, method)
