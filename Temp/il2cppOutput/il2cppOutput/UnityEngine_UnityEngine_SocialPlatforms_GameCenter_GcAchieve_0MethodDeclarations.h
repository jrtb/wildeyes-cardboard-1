#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t498;
struct GcAchievementData_t498_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t685;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t685 * GcAchievementData_ToAchievement_m3600 (GcAchievementData_t498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t498_marshal(const GcAchievementData_t498& unmarshaled, GcAchievementData_t498_marshaled& marshaled);
void GcAchievementData_t498_marshal_back(const GcAchievementData_t498_marshaled& marshaled, GcAchievementData_t498& unmarshaled);
void GcAchievementData_t498_marshal_cleanup(GcAchievementData_t498_marshaled& marshaled);
