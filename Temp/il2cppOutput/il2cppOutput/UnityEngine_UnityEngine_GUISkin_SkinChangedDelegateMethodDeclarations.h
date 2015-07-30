#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t540;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SkinChangedDelegate__ctor_m2750 (SkinChangedDelegate_t540 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern "C" void SkinChangedDelegate_Invoke_m2751 (SkinChangedDelegate_t540 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SkinChangedDelegate_t540(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SkinChangedDelegate_BeginInvoke_m2752 (SkinChangedDelegate_t540 * __this, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SkinChangedDelegate_EndInvoke_m2753 (SkinChangedDelegate_t540 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
