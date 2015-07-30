#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t1881;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Delegate
struct Delegate_t78;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder__ctor_m10489 (DelegateSerializationHolder_t1881 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetDelegateData_m10490 (Object_t * __this /* static, unused */, Delegate_t78 * ___instance, SerializationInfo_t708 * ___info, StreamingContext_t709  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetObjectData_m10491 (DelegateSerializationHolder_t1881 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * DelegateSerializationHolder_GetRealObject_m10492 (DelegateSerializationHolder_t1881 * __this, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
