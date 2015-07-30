#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
struct Transform_1_t3192;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t635;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_71MethodDeclarations.h"
#define Transform_1__ctor_m19207(__this, ___object, ___method, method) (( void (*) (Transform_1_t3192 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m19208_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19209(__this, ___key, ___value, method) (( KeyValuePair_2_t3181  (*) (Transform_1_t3192 *, uint64_t, NetworkAccessToken_t635 *, MethodInfo*))Transform_1_Invoke_m19210_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19211(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3192 *, uint64_t, NetworkAccessToken_t635 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m19212_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19213(__this, ___result, method) (( KeyValuePair_2_t3181  (*) (Transform_1_t3192 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m19214_gshared)(__this, ___result, method)
