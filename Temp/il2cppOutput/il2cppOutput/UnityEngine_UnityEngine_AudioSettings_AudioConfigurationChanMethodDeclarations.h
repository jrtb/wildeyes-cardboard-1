#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t587;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t6;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AudioConfigurationChangeHandler__ctor_m3226 (AudioConfigurationChangeHandler_t587 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" void AudioConfigurationChangeHandler_Invoke_m3227 (AudioConfigurationChangeHandler_t587 * __this, bool ___deviceWasChanged, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t587(Il2CppObject* delegate, bool ___deviceWasChanged);
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m3228 (AudioConfigurationChangeHandler_t587 * __this, bool ___deviceWasChanged, AsyncCallback_t7 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m3229 (AudioConfigurationChangeHandler_t587 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
