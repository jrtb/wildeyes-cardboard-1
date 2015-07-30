#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>
struct Transform_1_t3160;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_65MethodDeclarations.h"
#define Transform_1__ctor_m19203(__this, ___object, ___method, method) (( void (*) (Transform_1_t3160 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m19099_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19204(__this, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Transform_1_t3160 *, uint64_t, NetworkAccessToken_t635 *, MethodInfo*))Transform_1_Invoke_m19100_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19205(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3160 *, uint64_t, NetworkAccessToken_t635 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m19101_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19206(__this, ___result, method) (( DictionaryEntry_t1014  (*) (Transform_1_t3160 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m19102_gshared)(__this, ___result, method)
