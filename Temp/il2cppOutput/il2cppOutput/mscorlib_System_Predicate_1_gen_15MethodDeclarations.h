﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2802;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15242_gshared (Predicate_1_t2802 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m15242(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2802 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m15242_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15243_gshared (Predicate_1_t2802 * __this, UIVertex_t253  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m15243(__this, ___obj, method) (( bool (*) (Predicate_1_t2802 *, UIVertex_t253 , MethodInfo*))Predicate_1_Invoke_m15243_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15244_gshared (Predicate_1_t2802 * __this, UIVertex_t253  ___obj, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m15244(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2802 *, UIVertex_t253 , AsyncCallback_t7 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m15244_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15245_gshared (Predicate_1_t2802 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m15245(__this, ___result, method) (( bool (*) (Predicate_1_t2802 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m15245_gshared)(__this, ___result, method)
