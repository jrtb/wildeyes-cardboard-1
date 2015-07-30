#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t625;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t618;

// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C" void ListMatchRequest__ctor_m3432 (ListMatchRequest_t625 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m3433 (ListMatchRequest_t625 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C" void ListMatchRequest_set_pageSize_m3434 (ListMatchRequest_t625 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m3435 (ListMatchRequest_t625 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C" void ListMatchRequest_set_pageNum_m3436 (ListMatchRequest_t625 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m3437 (ListMatchRequest_t625 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C" void ListMatchRequest_set_nameFilter_m3438 (ListMatchRequest_t625 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t618 * ListMatchRequest_get_matchAttributeFilterLessThan_m3439 (ListMatchRequest_t625 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t618 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m3440 (ListMatchRequest_t625 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern "C" String_t* ListMatchRequest_ToString_m3441 (ListMatchRequest_t625 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
