#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t628;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t618;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct List_1_t627;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C" void MatchDesc__ctor_m3451 (MatchDesc_t628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m3452 (MatchDesc_t628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void MatchDesc_set_networkId_m3453 (MatchDesc_t628 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m3454 (MatchDesc_t628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C" void MatchDesc_set_name_m3455 (MatchDesc_t628 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m3456 (MatchDesc_t628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m3457 (MatchDesc_t628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C" void MatchDesc_set_maxSize_m3458 (MatchDesc_t628 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m3459 (MatchDesc_t628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m3460 (MatchDesc_t628 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m3461 (MatchDesc_t628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C" void MatchDesc_set_isPrivate_m3462 (MatchDesc_t628 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t618 * MatchDesc_get_matchAttributes_m3463 (MatchDesc_t628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C" uint16_t MatchDesc_get_hostNodeId_m3464 (MatchDesc_t628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t627 * MatchDesc_get_directConnectInfos_m3465 (MatchDesc_t628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C" void MatchDesc_set_directConnectInfos_m3466 (MatchDesc_t628 * __this, List_1_t627 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern "C" String_t* MatchDesc_ToString_m3467 (MatchDesc_t628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern "C" void MatchDesc_Parse_m3468 (MatchDesc_t628 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
