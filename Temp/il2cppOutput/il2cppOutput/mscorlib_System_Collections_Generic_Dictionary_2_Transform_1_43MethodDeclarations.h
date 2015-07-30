#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct Transform_1_t3022;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t525;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44MethodDeclarations.h"
#define Transform_1__ctor_m17417(__this, ___object, ___method, method) (( void (*) (Transform_1_t3022 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17418_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17419(__this, ___key, ___value, method) (( KeyValuePair_2_t3015  (*) (Transform_1_t3022 *, String_t*, GUIStyle_t525 *, MethodInfo*))Transform_1_Invoke_m17420_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17421(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3022 *, String_t*, GUIStyle_t525 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17422_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17423(__this, ___result, method) (( KeyValuePair_2_t3015  (*) (Transform_1_t3022 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17424_gshared)(__this, ___result, method)
