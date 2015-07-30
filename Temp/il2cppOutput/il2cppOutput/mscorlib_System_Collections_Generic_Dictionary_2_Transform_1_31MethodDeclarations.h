#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Transform_1_t2857;
// System.Object
struct Object_t;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t376;
// UnityEngine.Canvas
struct Canvas_t229;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m15827(__this, ___object, ___method, method) (( void (*) (Transform_1_t2857 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14782_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m15828(__this, ___key, ___value, method) (( IndexedSet_1_t376 * (*) (Transform_1_t2857 *, Canvas_t229 *, IndexedSet_1_t376 *, MethodInfo*))Transform_1_Invoke_m14783_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m15829(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2857 *, Canvas_t229 *, IndexedSet_1_t376 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14784_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m15830(__this, ___result, method) (( IndexedSet_1_t376 * (*) (Transform_1_t2857 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14785_gshared)(__this, ___result, method)
