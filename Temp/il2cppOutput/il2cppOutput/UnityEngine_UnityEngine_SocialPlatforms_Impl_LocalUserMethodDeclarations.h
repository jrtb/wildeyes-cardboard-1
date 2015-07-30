#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t493;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t694;

// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C" void LocalUser__ctor_m3609 (LocalUser_t493 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m3610 (LocalUser_t493 * __this, IUserProfileU5BU5D_t694* ___friends, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m3611 (LocalUser_t493 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m3612 (LocalUser_t493 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m3613 (LocalUser_t493 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
