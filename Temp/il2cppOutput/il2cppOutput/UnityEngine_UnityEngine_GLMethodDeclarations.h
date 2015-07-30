#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GL
struct GL_t512;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C" void GL_Vertex3_m489 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C" void GL_Begin_m488 (Object_t * __this /* static, unused */, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C" void GL_End_m490 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadPixelMatrix()
extern "C" void GL_LoadPixelMatrix_m487 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadPixelMatrixArgs(System.Single,System.Single,System.Single,System.Single)
extern "C" void GL_LoadPixelMatrixArgs_m2644 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadPixelMatrix(System.Single,System.Single,System.Single,System.Single)
extern "C" void GL_LoadPixelMatrix_m446 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C" void GL_PushMatrix_m445 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C" void GL_PopMatrix_m449 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C" void GL_Clear_m325 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12  ___backgroundColor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Clear_m2645 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12  ___backgroundColor, float ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Internal_Clear_m2646 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12  ___backgroundColor, float ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C" void GL_INTERNAL_CALL_Internal_Clear_m2647 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t12 * ___backgroundColor, float ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::InvalidateState()
extern "C" void GL_InvalidateState_m571 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::IssuePluginEvent(System.Int32)
extern "C" void GL_IssuePluginEvent_m570 (Object_t * __this /* static, unused */, int32_t ___eventID, MethodInfo* method) IL2CPP_METHOD_ATTR;
