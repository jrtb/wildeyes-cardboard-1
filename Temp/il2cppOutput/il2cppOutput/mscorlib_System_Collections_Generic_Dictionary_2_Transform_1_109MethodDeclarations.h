#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
struct Transform_1_t3361;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t80;
struct Event_t80_marshaled;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_110MethodDeclarations.h"
#define Transform_1__ctor_m20742(__this, ___object, ___method, method) (( void (*) (Transform_1_t3361 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20743_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20744(__this, ___key, ___value, method) (( KeyValuePair_2_t3350  (*) (Transform_1_t3361 *, Event_t80 *, int32_t, MethodInfo*))Transform_1_Invoke_m20745_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20746(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3361 *, Event_t80 *, int32_t, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20747_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20748(__this, ___result, method) (( KeyValuePair_2_t3350  (*) (Transform_1_t3361 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20749_gshared)(__this, ___result, method)
