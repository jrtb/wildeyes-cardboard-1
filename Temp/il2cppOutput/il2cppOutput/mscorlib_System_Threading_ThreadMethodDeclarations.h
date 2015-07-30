#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Thread
struct Thread_t1678;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1668;
// System.Globalization.CultureInfo
struct CultureInfo_t757;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.Thread::.cctor()
extern "C" void Thread__cctor_m10076 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
extern "C" Context_t1668 * Thread_get_CurrentContext_m10077 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
extern "C" Thread_t1678 * Thread_CurrentThread_internal_m10078 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" Thread_t1678 * Thread_get_CurrentThread_m10079 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
extern "C" int32_t Thread_GetDomainID_m10080 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
extern "C" CultureInfo_t757 * Thread_GetCachedCurrentCulture_m10081 (Thread_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
extern "C" ByteU5BU5D_t66* Thread_GetSerializedCurrentCulture_m10082 (Thread_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentCulture_m10083 (Thread_t1678 * __this, CultureInfo_t757 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
extern "C" CultureInfo_t757 * Thread_GetCachedCurrentUICulture_m10084 (Thread_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
extern "C" ByteU5BU5D_t66* Thread_GetSerializedCurrentUICulture_m10085 (Thread_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentUICulture_m10086 (Thread_t1678 * __this, CultureInfo_t757 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C" CultureInfo_t757 * Thread_get_CurrentCulture_m10087 (Thread_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
extern "C" CultureInfo_t757 * Thread_get_CurrentUICulture_m10088 (Thread_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
extern "C" void Thread_Thread_free_internal_m10089 (Thread_t1678 * __this, IntPtr_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
extern "C" void Thread_Finalize_m10090 (Thread_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
extern "C" int32_t Thread_GetNewManagedId_m10091 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
extern "C" int32_t Thread_GetNewManagedId_internal_m10092 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C" int32_t Thread_get_ManagedThreadId_m10093 (Thread_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
extern "C" int32_t Thread_GetHashCode_m10094 (Thread_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
