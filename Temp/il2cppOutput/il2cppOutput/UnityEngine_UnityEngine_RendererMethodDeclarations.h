#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t70;
// UnityEngine.Material
struct Material_t50;

// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" void Renderer_set_enabled_m351 (Renderer_t70 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t50 * Renderer_get_material_m285 (Renderer_t70 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" void Renderer_set_material_m350 (Renderer_t70 * __this, Material_t50 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m1944 (Renderer_t70 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m1945 (Renderer_t70 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
