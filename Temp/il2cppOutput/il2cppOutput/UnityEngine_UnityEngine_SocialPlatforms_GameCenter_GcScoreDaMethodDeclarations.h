#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t500;
struct GcScoreData_t500_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t686;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t686 * GcScoreData_ToScore_m3601 (GcScoreData_t500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t500_marshal(const GcScoreData_t500& unmarshaled, GcScoreData_t500_marshaled& marshaled);
void GcScoreData_t500_marshal_back(const GcScoreData_t500_marshaled& marshaled, GcScoreData_t500& unmarshaled);
void GcScoreData_t500_marshal_cleanup(GcScoreData_t500_marshaled& marshaled);
