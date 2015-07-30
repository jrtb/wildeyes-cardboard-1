#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Delegate
struct Delegate_t78;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Delegate[]
struct DelegateU5BU5D_t1402;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C" MethodInfo_t * Delegate_get_Method_m4026 (Delegate_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
extern "C" Object_t * Delegate_get_Target_m4027 (Delegate_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t78 * Delegate_CreateDelegate_internal_m7114 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, MethodInfo_t * ___info, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
extern "C" void Delegate_SetMulticastInvoke_m7115 (Delegate_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
extern "C" bool Delegate_arg_type_match_m7116 (Object_t * __this /* static, unused */, Type_t * ___delArgType, Type_t * ___argType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
extern "C" bool Delegate_return_type_match_m7117 (Object_t * __this /* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t78 * Delegate_CreateDelegate_m7118 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C" Delegate_t78 * Delegate_CreateDelegate_m4028 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t78 * Delegate_CreateDelegate_m7119 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo_t * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
extern "C" Delegate_t78 * Delegate_CreateDelegate_m7120 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
extern "C" MethodInfo_t * Delegate_GetCandidateMethod_m7121 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
extern "C" Delegate_t78 * Delegate_CreateDelegate_m7122 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
extern "C" Delegate_t78 * Delegate_CreateDelegate_m7123 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
extern "C" Delegate_t78 * Delegate_CreateDelegate_m7124 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
extern "C" Delegate_t78 * Delegate_CreateDelegate_m7125 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
extern "C" Object_t * Delegate_Clone_m599 (Delegate_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
extern "C" bool Delegate_Equals_m7126 (Delegate_t78 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
extern "C" int32_t Delegate_GetHashCode_m7127 (Delegate_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Delegate_GetObjectData_m7128 (Delegate_t78 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1402* Delegate_GetInvocationList_m7129 (Delegate_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" Delegate_t78 * Delegate_Combine_m304 (Object_t * __this /* static, unused */, Delegate_t78 * ___a, Delegate_t78 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
extern "C" Delegate_t78 * Delegate_Combine_m7130 (Object_t * __this /* static, unused */, DelegateU5BU5D_t1402* ___delegates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
extern "C" Delegate_t78 * Delegate_CombineImpl_m7131 (Delegate_t78 * __this, Delegate_t78 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" Delegate_t78 * Delegate_Remove_m305 (Object_t * __this /* static, unused */, Delegate_t78 * ___source, Delegate_t78 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t78 * Delegate_RemoveImpl_m7132 (Delegate_t78 * __this, Delegate_t78 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
