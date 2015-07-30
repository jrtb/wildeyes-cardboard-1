﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t3040;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_18MethodDeclarations.h"
#define Transform_1__ctor_m17679(__this, ___object, ___method, method) (( void (*) (Transform_1_t3040 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14805_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17680(__this, ___key, ___value, method) (( DictionaryEntry_t1014  (*) (Transform_1_t3040 *, String_t*, String_t*, MethodInfo*))Transform_1_Invoke_m14806_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17681(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3040 *, String_t*, String_t*, AsyncCallback_t7 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14807_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17682(__this, ___result, method) (( DictionaryEntry_t1014  (*) (Transform_1_t3040 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14808_gshared)(__this, ___result, method)
