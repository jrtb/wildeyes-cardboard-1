#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.FontUpdateTracker
struct FontUpdateTracker_t223;
// UnityEngine.UI.Text
struct Text_t224;
// UnityEngine.Font
struct Font_t220;

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
extern "C" void FontUpdateTracker__cctor_m974 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_TrackText_m975 (Object_t * __this /* static, unused */, Text_t224 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
extern "C" void FontUpdateTracker_RebuildForFont_m976 (Object_t * __this /* static, unused */, Font_t220 * ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
extern "C" void FontUpdateTracker_UntrackText_m977 (Object_t * __this /* static, unused */, Text_t224 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
