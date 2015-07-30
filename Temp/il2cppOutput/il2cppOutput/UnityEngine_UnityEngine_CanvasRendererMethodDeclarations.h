#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t228;
// UnityEngine.Material
struct Material_t50;
// UnityEngine.Texture
struct Texture_t13;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t234;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t269;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C" void CanvasRenderer_SetColor_m2024 (CanvasRenderer_t228 * __this, Color_t12  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m3346 (Object_t * __this /* static, unused */, CanvasRenderer_t228 * ___self, Color_t12 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t12  CanvasRenderer_GetColor_m2022 (CanvasRenderer_t228 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern "C" void CanvasRenderer_set_isMask_m2372 (CanvasRenderer_t228 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C" void CanvasRenderer_SetMaterial_m2013 (CanvasRenderer_t228 * __this, Material_t50 * ___material, Texture_t13 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void CanvasRenderer_SetVertices_m2012 (CanvasRenderer_t228 * __this, List_1_t234 * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m3347 (CanvasRenderer_t228 * __this, Object_t * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVertices_m2124 (CanvasRenderer_t228 * __this, UIVertexU5BU5D_t269* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m3348 (CanvasRenderer_t228 * __this, UIVertexU5BU5D_t269* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m2008 (CanvasRenderer_t228 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m1994 (CanvasRenderer_t228 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
