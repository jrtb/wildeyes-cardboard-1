#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1561;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1332;
// System.AsyncCallback
struct AsyncCallback_t7;
// System.IAsyncResult
struct IAsyncResult_t6;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FileStreamAsyncResult__ctor_m8333 (FileStreamAsyncResult_t1561 * __this, AsyncCallback_t7 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C" void FileStreamAsyncResult_CBWrapper_m8334 (Object_t * __this /* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C" Object_t * FileStreamAsyncResult_get_AsyncState_m8335 (FileStreamAsyncResult_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1332 * FileStreamAsyncResult_get_AsyncWaitHandle_m8336 (FileStreamAsyncResult_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C" bool FileStreamAsyncResult_get_IsCompleted_m8337 (FileStreamAsyncResult_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
