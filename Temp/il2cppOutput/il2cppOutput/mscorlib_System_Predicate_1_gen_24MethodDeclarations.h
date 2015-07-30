#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Byte[]>
struct Predicate_1_t3057;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m17828(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3057 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m11972_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Byte[]>::Invoke(T)
#define Predicate_1_Invoke_m17829(__this, ___obj, method) (( bool (*) (Predicate_1_t3057 *, ByteU5BU5D_t66*, MethodInfo*))Predicate_1_Invoke_m11973_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Byte[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m17830(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3057 *, ByteU5BU5D_t66*, AsyncCallback_t7 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m11974_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Byte[]>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m17831(__this, ___result, method) (( bool (*) (Predicate_1_t3057 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m11975_gshared)(__this, ___result, method)
