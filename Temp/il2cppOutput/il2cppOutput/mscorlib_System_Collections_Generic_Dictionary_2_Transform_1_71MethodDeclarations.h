#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
struct Transform_1_t3193;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19208_gshared (Transform_1_t3193 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m19208(__this, ___object, ___method, method) (( void (*) (Transform_1_t3193 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m19208_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3181  Transform_1_Invoke_m19210_gshared (Transform_1_t3193 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m19210(__this, ___key, ___value, method) (( KeyValuePair_2_t3181  (*) (Transform_1_t3193 *, uint64_t, Object_t *, MethodInfo*))Transform_1_Invoke_m19210_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19212_gshared (Transform_1_t3193 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m19212(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3193 *, uint64_t, Object_t *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m19212_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3181  Transform_1_EndInvoke_m19214_gshared (Transform_1_t3193 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m19214(__this, ___result, method) (( KeyValuePair_2_t3181  (*) (Transform_1_t3193 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m19214_gshared)(__this, ___result, method)
