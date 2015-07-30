#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CharacterInfo
struct CharacterInfo_t606;
struct CharacterInfo_t606_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m3296 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m3297 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m3298 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m3299 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m3300 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m3301 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m3302 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m3303 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomLeftUnFlipped_m3304 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomRightUnFlipped_m3305 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvTopRightUnFlipped_m3306 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvTopLeftUnFlipped_m3307 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomLeft_m3308 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomRight_m3309 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t15  CharacterInfo_get_uvTopRight_m3310 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t15  CharacterInfo_get_uvTopLeft_m3311 (CharacterInfo_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void CharacterInfo_t606_marshal(const CharacterInfo_t606& unmarshaled, CharacterInfo_t606_marshaled& marshaled);
void CharacterInfo_t606_marshal_back(const CharacterInfo_t606_marshaled& marshaled, CharacterInfo_t606& unmarshaled);
void CharacterInfo_t606_marshal_cleanup(CharacterInfo_t606_marshaled& marshaled);
