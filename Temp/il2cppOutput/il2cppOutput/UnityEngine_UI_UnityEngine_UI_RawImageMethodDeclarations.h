#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.RawImage
struct RawImage_t276;
// UnityEngine.Texture
struct Texture_t13;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t234;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.RawImage::.ctor()
extern "C" void RawImage__ctor_m1264 (RawImage_t276 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_mainTexture()
extern "C" Texture_t13 * RawImage_get_mainTexture_m1265 (RawImage_t276 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C" Texture_t13 * RawImage_get_texture_m1266 (RawImage_t276 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C" void RawImage_set_texture_m1267 (RawImage_t276 * __this, Texture_t13 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
extern "C" Rect_t18  RawImage_get_uvRect_m1268 (RawImage_t276 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
extern "C" void RawImage_set_uvRect_m1269 (RawImage_t276 * __this, Rect_t18  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::SetNativeSize()
extern "C" void RawImage_SetNativeSize_m1270 (RawImage_t276 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void RawImage_OnFillVBO_m1271 (RawImage_t276 * __this, List_1_t234 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
