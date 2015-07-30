#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t366;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern "C" void WillRenderCanvases__ctor_m1964 (WillRenderCanvases_t366 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m3338 (WillRenderCanvases_t366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t366(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m3339 (WillRenderCanvases_t366 * __this, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m3340 (WillRenderCanvases_t366 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
