#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2544;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2543;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m12496_gshared (ObjectPool_1_t2544 * __this, UnityAction_1_t2543 * ___actionOnGet, UnityAction_1_t2543 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m12496(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2544 *, UnityAction_1_t2543 *, UnityAction_1_t2543 *, MethodInfo*))ObjectPool_1__ctor_m12496_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m12498_gshared (ObjectPool_1_t2544 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m12498(__this, method) (( int32_t (*) (ObjectPool_1_t2544 *, MethodInfo*))ObjectPool_1_get_countAll_m12498_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m12500_gshared (ObjectPool_1_t2544 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m12500(__this, ___value, method) (( void (*) (ObjectPool_1_t2544 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m12500_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m12502_gshared (ObjectPool_1_t2544 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m12502(__this, method) (( int32_t (*) (ObjectPool_1_t2544 *, MethodInfo*))ObjectPool_1_get_countActive_m12502_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m12504_gshared (ObjectPool_1_t2544 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m12504(__this, method) (( int32_t (*) (ObjectPool_1_t2544 *, MethodInfo*))ObjectPool_1_get_countInactive_m12504_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m12506_gshared (ObjectPool_1_t2544 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m12506(__this, method) (( Object_t * (*) (ObjectPool_1_t2544 *, MethodInfo*))ObjectPool_1_Get_m12506_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m12508_gshared (ObjectPool_1_t2544 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m12508(__this, ___element, method) (( void (*) (ObjectPool_1_t2544 *, Object_t *, MethodInfo*))ObjectPool_1_Release_m12508_gshared)(__this, ___element, method)
