#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t639;
// System.Uri
struct Uri_t26;
// UnityEngine.Coroutine
struct Coroutine_t271;
struct Coroutine_t271_marshaled;
// System.String
struct String_t;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t640;
// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t619;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
struct ResponseDelegate_1_t641;
// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t621;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
struct ResponseDelegate_1_t642;
// UnityEngine.Networking.Match.DestroyMatchRequest
struct DestroyMatchRequest_t623;
// UnityEngine.Networking.Match.DropConnectionRequest
struct DropConnectionRequest_t624;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t643;
// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t625;
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern "C" void NetworkMatch__ctor_m3481 (NetworkMatch_t639 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t26 * NetworkMatch_get_baseUri_m3482 (NetworkMatch_t639 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m3483 (NetworkMatch_t639 * __this, Uri_t26 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C" void NetworkMatch_SetProgramAppID_m3484 (NetworkMatch_t639 * __this, uint64_t ___programAppID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t271 * NetworkMatch_CreateMatch_m3485 (NetworkMatch_t639 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t640 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t271 * NetworkMatch_CreateMatch_m3486 (NetworkMatch_t639 * __this, CreateMatchRequest_t619 * ___req, ResponseDelegate_1_t640 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t271 * NetworkMatch_JoinMatch_m3487 (NetworkMatch_t639 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t641 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t271 * NetworkMatch_JoinMatch_m3488 (NetworkMatch_t639 * __this, JoinMatchRequest_t621 * ___req, ResponseDelegate_1_t641 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t271 * NetworkMatch_DestroyMatch_m3489 (NetworkMatch_t639 * __this, uint64_t ___netId, ResponseDelegate_1_t642 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t271 * NetworkMatch_DestroyMatch_m3490 (NetworkMatch_t639 * __this, DestroyMatchRequest_t623 * ___req, ResponseDelegate_1_t642 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t271 * NetworkMatch_DropConnection_m3491 (NetworkMatch_t639 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t642 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t271 * NetworkMatch_DropConnection_m3492 (NetworkMatch_t639 * __this, DropConnectionRequest_t624 * ___req, ResponseDelegate_1_t642 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t271 * NetworkMatch_ListMatches_m3493 (NetworkMatch_t639 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t643 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t271 * NetworkMatch_ListMatches_m3494 (NetworkMatch_t639 * __this, ListMatchRequest_t625 * ___req, ResponseDelegate_1_t643 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
