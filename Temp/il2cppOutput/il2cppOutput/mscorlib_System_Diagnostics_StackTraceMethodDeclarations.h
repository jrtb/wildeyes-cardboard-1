#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.StackTrace
struct StackTrace_t707;
// System.Exception
struct Exception_t110;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1530;
// System.Diagnostics.StackFrame
struct StackFrame_t793;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackTrace::.ctor()
extern "C" void StackTrace__ctor_m8051 (StackTrace_t707 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
extern "C" void StackTrace__ctor_m4003 (StackTrace_t707 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
extern "C" void StackTrace__ctor_m8052 (StackTrace_t707 * __this, Exception_t110 * ___e, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
extern "C" void StackTrace__ctor_m8053 (StackTrace_t707 * __this, Exception_t110 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
extern "C" void StackTrace__ctor_m8054 (StackTrace_t707 * __this, Exception_t110 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
extern "C" void StackTrace_init_frames_m8055 (StackTrace_t707 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
extern "C" StackFrameU5BU5D_t1530* StackTrace_get_trace_m8056 (Object_t * __this /* static, unused */, Exception_t110 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
extern "C" int32_t StackTrace_get_FrameCount_m4019 (StackTrace_t707 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
extern "C" StackFrame_t793 * StackTrace_GetFrame_m4013 (StackTrace_t707 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
extern "C" String_t* StackTrace_ToString_m8057 (StackTrace_t707 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
