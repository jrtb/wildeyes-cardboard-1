#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t165;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t167;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t181;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1842(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t165 *, UnityAction_1_t167 *, UnityAction_1_t167 *, MethodInfo*))ObjectPool_1__ctor_m12496_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m12497(__this, method) (( int32_t (*) (ObjectPool_1_t165 *, MethodInfo*))ObjectPool_1_get_countAll_m12498_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m12499(__this, ___value, method) (( void (*) (ObjectPool_1_t165 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m12500_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m12501(__this, method) (( int32_t (*) (ObjectPool_1_t165 *, MethodInfo*))ObjectPool_1_get_countActive_m12502_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m12503(__this, method) (( int32_t (*) (ObjectPool_1_t165 *, MethodInfo*))ObjectPool_1_get_countInactive_m12504_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m12505(__this, method) (( List_1_t181 * (*) (ObjectPool_1_t165 *, MethodInfo*))ObjectPool_1_Get_m12506_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m12507(__this, ___element, method) (( void (*) (ObjectPool_1_t165 *, List_1_t181 *, MethodInfo*))ObjectPool_1_Release_m12508_gshared)(__this, ___element, method)
