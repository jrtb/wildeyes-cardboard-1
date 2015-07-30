#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Transform_1_t3417;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21291_gshared (Transform_1_t3417 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m21291(__this, ___object, ___method, method) (( void (*) (Transform_1_t3417 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m21291_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3408  Transform_1_Invoke_m21292_gshared (Transform_1_t3417 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m21292(__this, ___key, ___value, method) (( KeyValuePair_2_t3408  (*) (Transform_1_t3417 *, Object_t *, uint8_t, MethodInfo*))Transform_1_Invoke_m21292_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21293_gshared (Transform_1_t3417 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m21293(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3417 *, Object_t *, uint8_t, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m21293_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3408  Transform_1_EndInvoke_m21294_gshared (Transform_1_t3417 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m21294(__this, ___result, method) (( KeyValuePair_2_t3408  (*) (Transform_1_t3417 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m21294_gshared)(__this, ___result, method)
