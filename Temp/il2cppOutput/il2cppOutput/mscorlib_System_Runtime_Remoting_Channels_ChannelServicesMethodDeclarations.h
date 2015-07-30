#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Channels.ChannelServices
struct ChannelServices_t1671;
// System.Runtime.Remoting.Channels.IChannel
struct IChannel_t1672;
// System.Object[]
struct ObjectU5BU5D_t76;

// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern "C" void ChannelServices__cctor_m9066 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern "C" void ChannelServices_RegisterChannel_m9067 (Object_t * __this /* static, unused */, Object_t * ___chnl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern "C" void ChannelServices_RegisterChannel_m9068 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern "C" ObjectU5BU5D_t76* ChannelServices_GetCurrentChannelInfo_m9069 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
