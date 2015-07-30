#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t9;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1402;
// System.Delegate
struct Delegate_t78;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m598 (MulticastDelegate_t9 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m595 (MulticastDelegate_t9 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m596 (MulticastDelegate_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1402* MulticastDelegate_GetInvocationList_m600 (MulticastDelegate_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t78 * MulticastDelegate_CombineImpl_m601 (MulticastDelegate_t9 * __this, Delegate_t78 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m7112 (MulticastDelegate_t9 * __this, MulticastDelegate_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t9 * MulticastDelegate_KPM_m7113 (Object_t * __this /* static, unused */, MulticastDelegate_t9 * ___needle, MulticastDelegate_t9 * ___haystack, MulticastDelegate_t9 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t78 * MulticastDelegate_RemoveImpl_m602 (MulticastDelegate_t9 * __this, Delegate_t78 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
