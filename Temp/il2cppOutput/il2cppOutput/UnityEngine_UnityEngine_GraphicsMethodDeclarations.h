#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Graphics
struct Graphics_t510;
// UnityEngine.Texture
struct Texture_t13;
// UnityEngine.Material
struct Material_t50;
// UnityEngine.RenderTexture
struct RenderTexture_t10;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.InternalDrawTextureArguments
#include "UnityEngine_UnityEngine_InternalDrawTextureArguments.h"

// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void Graphics_DrawTexture_m448 (Object_t * __this /* static, unused */, Rect_t18  ___screenRect, Texture_t13 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m2638 (Object_t * __this /* static, unused */, Rect_t18  ___screenRect, Texture_t13 * ___texture, Material_t50 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m2639 (Object_t * __this /* static, unused */, Rect_t18  ___screenRect, Texture_t13 * ___texture, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t50 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m2640 (Object_t * __this /* static, unused */, Rect_t18  ___screenRect, Texture_t13 * ___texture, Rect_t18  ___sourceRect, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t50 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C" void Graphics_DrawTexture_m2641 (Object_t * __this /* static, unused */, InternalDrawTextureArguments_t509 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" void Graphics_Blit_m543 (Object_t * __this /* static, unused */, Texture_t13 * ___source, RenderTexture_t10 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void Graphics_Blit_m544 (Object_t * __this /* static, unused */, Texture_t13 * ___source, RenderTexture_t10 * ___dest, Material_t50 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m2642 (Object_t * __this /* static, unused */, Texture_t13 * ___source, RenderTexture_t10 * ___dest, Material_t50 * ___mat, int32_t ___pass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m2643 (Object_t * __this /* static, unused */, Texture_t13 * ___source, RenderTexture_t10 * ___dest, Material_t50 * ___mat, int32_t ___pass, bool ___setRT, MethodInfo* method) IL2CPP_METHOD_ATTR;
