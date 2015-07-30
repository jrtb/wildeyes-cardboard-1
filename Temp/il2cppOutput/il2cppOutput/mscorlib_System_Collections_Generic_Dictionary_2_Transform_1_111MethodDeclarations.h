#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
struct Transform_1_t3413;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21260_gshared (Transform_1_t3413 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m21260(__this, ___object, ___method, method) (( void (*) (Transform_1_t3413 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m21260_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m21261_gshared (Transform_1_t3413 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m21261(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t3413 *, Object_t *, uint8_t, MethodInfo*))Transform_1_Invoke_m21261_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21262_gshared (Transform_1_t3413 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m21262(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3413 *, Object_t *, uint8_t, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m21262_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m21263_gshared (Transform_1_t3413 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m21263(__this, ___result, method) (( Object_t * (*) (Transform_1_t3413 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m21263_gshared)(__this, ___result, method)
