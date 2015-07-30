#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Font
struct Font_t220;
// UnityEngine.Material
struct Material_t50;
// System.Action`1<UnityEngine.Font>
struct Action_1_t368;

// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_add_textureRebuilt_m1988 (Object_t * __this /* static, unused */, Action_1_t368 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_remove_textureRebuilt_m3316 (Object_t * __this /* static, unused */, Action_1_t368 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t50 * Font_get_material_m2291 (Font_t220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m2145 (Font_t220 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C" void Font_InvokeTextureRebuilt_Internal_m3317 (Object_t * __this /* static, unused */, Font_t220 * ___font, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m2293 (Font_t220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m2295 (Font_t220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
