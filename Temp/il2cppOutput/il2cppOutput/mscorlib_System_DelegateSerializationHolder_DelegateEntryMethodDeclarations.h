#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t1880;
// System.Delegate
struct Delegate_t78;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m10487 (DelegateEntry_t1880 * __this, Delegate_t78 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t78 * DelegateEntry_DeserializeDelegate_m10488 (DelegateEntry_t1880 * __this, SerializationInfo_t708 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
