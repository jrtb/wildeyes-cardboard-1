#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>
struct Transform_1_t3014;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_18MethodDeclarations.h"
#define Transform_1__ctor_m17413(__this, ___object, ___method, method) (( void (*) (Transform_1_t3014 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14805_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17414(__this, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Transform_1_t3014 *, String_t*, GUIStyle_t525 *, MethodInfo*))Transform_1_Invoke_m14806_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17415(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3014 *, String_t*, GUIStyle_t525 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14807_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17416(__this, ___result, method) (( DictionaryEntry_t1014  (*) (Transform_1_t3014 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14808_gshared)(__this, ___result, method)
