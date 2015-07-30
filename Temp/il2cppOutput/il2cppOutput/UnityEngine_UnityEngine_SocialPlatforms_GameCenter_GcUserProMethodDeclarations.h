#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t504;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t683;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t492;

// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t683 * GcUserProfileData_ToUserProfile_m3597 (GcUserProfileData_t504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m3598 (GcUserProfileData_t504 * __this, UserProfileU5BU5D_t492** ___array, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
