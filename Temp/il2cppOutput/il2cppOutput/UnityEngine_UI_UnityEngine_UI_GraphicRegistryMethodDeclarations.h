#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t239;
// UnityEngine.Canvas
struct Canvas_t229;
// UnityEngine.UI.Graphic
struct Graphic_t233;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t241;

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
extern "C" void GraphicRegistry__ctor_m1040 (GraphicRegistry_t239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
extern "C" void GraphicRegistry__cctor_m1041 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
extern "C" GraphicRegistry_t239 * GraphicRegistry_get_instance_m1042 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C" void GraphicRegistry_RegisterGraphicForCanvas_m1043 (Object_t * __this /* static, unused */, Canvas_t229 * ___c, Graphic_t233 * ___graphic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C" void GraphicRegistry_UnregisterGraphicForCanvas_m1044 (Object_t * __this /* static, unused */, Canvas_t229 * ___c, Graphic_t233 * ___graphic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
extern "C" Object_t* GraphicRegistry_GetGraphicsForCanvas_m1045 (Object_t * __this /* static, unused */, Canvas_t229 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
