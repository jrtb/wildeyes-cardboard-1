#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
struct Transform_1_t2784;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t220;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t367;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_24MethodDeclarations.h"
#define Transform_1__ctor_m15066(__this, ___object, ___method, method) (( void (*) (Transform_1_t2784 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m15067_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m15068(__this, ___key, ___value, method) (( KeyValuePair_2_t2757  (*) (Transform_1_t2784 *, Font_t220 *, List_1_t367 *, MethodInfo*))Transform_1_Invoke_m15069_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m15070(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2784 *, Font_t220 *, List_1_t367 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m15071_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m15072(__this, ___result, method) (( KeyValuePair_2_t2757  (*) (Transform_1_t2784 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m15073_gshared)(__this, ___result, method)
