﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t226;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t232;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t234;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2003(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t226 *, UnityAction_1_t232 *, UnityAction_1_t232 *, MethodInfo*))ObjectPool_1__ctor_m12496_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m15102(__this, method) (( int32_t (*) (ObjectPool_1_t226 *, MethodInfo*))ObjectPool_1_get_countAll_m12498_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15103(__this, ___value, method) (( void (*) (ObjectPool_1_t226 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m12500_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m15104(__this, method) (( int32_t (*) (ObjectPool_1_t226 *, MethodInfo*))ObjectPool_1_get_countActive_m12502_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15105(__this, method) (( int32_t (*) (ObjectPool_1_t226 *, MethodInfo*))ObjectPool_1_get_countInactive_m12504_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m2033(__this, method) (( List_1_t234 * (*) (ObjectPool_1_t226 *, MethodInfo*))ObjectPool_1_Get_m12506_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m2034(__this, ___element, method) (( void (*) (ObjectPool_1_t226 *, List_1_t234 *, MethodInfo*))ObjectPool_1_Release_m12508_gshared)(__this, ___element, method)
