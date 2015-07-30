#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
struct Predicate_1_t2607;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t54;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m13232(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2607 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m11972_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::Invoke(T)
#define Predicate_1_Invoke_m13233(__this, ___obj, method) (( bool (*) (Predicate_1_t2607 *, BaseInputModule_t54 *, MethodInfo*))Predicate_1_Invoke_m11973_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m13234(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2607 *, BaseInputModule_t54 *, AsyncCallback_t7 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m11974_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m13235(__this, ___result, method) (( bool (*) (Predicate_1_t2607 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m11975_gshared)(__this, ___result, method)
