#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.WaitHandle
struct WaitHandle_t1332;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitHandle::.ctor()
extern "C" void WaitHandle__ctor_m10101 (WaitHandle_t1332 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
extern "C" void WaitHandle__cctor_m10102 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
extern "C" void WaitHandle_System_IDisposable_Dispose_m10103 (WaitHandle_t1332 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
extern "C" IntPtr_t WaitHandle_get_Handle_m10104 (WaitHandle_t1332 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
extern "C" void WaitHandle_set_Handle_m10105 (WaitHandle_t1332 * __this, IntPtr_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
extern "C" bool WaitHandle_WaitOne_internal_m10106 (WaitHandle_t1332 * __this, IntPtr_t ___handle, int32_t ___ms, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
extern "C" void WaitHandle_Dispose_m10107 (WaitHandle_t1332 * __this, bool ___explicitDisposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
extern "C" bool WaitHandle_WaitOne_m6503 (WaitHandle_t1332 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
extern "C" bool WaitHandle_WaitOne_m6535 (WaitHandle_t1332 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
extern "C" void WaitHandle_CheckDisposed_m10108 (WaitHandle_t1332 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
extern "C" void WaitHandle_Finalize_m10109 (WaitHandle_t1332 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
