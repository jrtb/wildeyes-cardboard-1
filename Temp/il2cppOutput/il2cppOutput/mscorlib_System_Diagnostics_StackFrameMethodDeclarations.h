#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.StackFrame
struct StackFrame_t793;
// System.Reflection.MethodBase
struct MethodBase_t772;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackFrame::.ctor()
extern "C" void StackFrame__ctor_m8043 (StackFrame_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
extern "C" void StackFrame__ctor_m8044 (StackFrame_t793 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
extern "C" bool StackFrame_get_frame_info_m8045 (Object_t * __this /* static, unused */, int32_t ___skip, bool ___needFileInfo, MethodBase_t772 ** ___method, int32_t* ___iloffset, int32_t* ___native_offset, String_t** ___file, int32_t* ___line, int32_t* ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber()
extern "C" int32_t StackFrame_GetFileLineNumber_m4018 (StackFrame_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetFileName()
extern "C" String_t* StackFrame_GetFileName_m4017 (StackFrame_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
extern "C" String_t* StackFrame_GetSecureFileName_m8046 (StackFrame_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetILOffset()
extern "C" int32_t StackFrame_GetILOffset_m8047 (StackFrame_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod()
extern "C" MethodBase_t772 * StackFrame_GetMethod_m4014 (StackFrame_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetNativeOffset()
extern "C" int32_t StackFrame_GetNativeOffset_m8048 (StackFrame_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
extern "C" String_t* StackFrame_GetInternalMethodName_m8049 (StackFrame_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::ToString()
extern "C" String_t* StackFrame_ToString_m8050 (StackFrame_t793 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
