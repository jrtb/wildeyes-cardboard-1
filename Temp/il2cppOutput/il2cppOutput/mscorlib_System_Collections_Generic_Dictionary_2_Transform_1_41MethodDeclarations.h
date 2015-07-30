#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>
struct Transform_1_t3021;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t525;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m17409(__this, ___object, ___method, method) (( void (*) (Transform_1_t3021 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14782_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17410(__this, ___key, ___value, method) (( GUIStyle_t525 * (*) (Transform_1_t3021 *, String_t*, GUIStyle_t525 *, MethodInfo*))Transform_1_Invoke_m14783_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17411(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3021 *, String_t*, GUIStyle_t525 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14784_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,UnityEngine.GUIStyle>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17412(__this, ___result, method) (( GUIStyle_t525 * (*) (Transform_1_t3021 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14785_gshared)(__this, ___result, method)
