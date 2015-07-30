#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t79;
struct Object_t79_marshaled;
// System.String
struct String_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t478;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m3146 (Object_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m3147 (Object_t * __this /* static, unused */, Object_t79 * ___obj, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m356 (Object_t * __this /* static, unused */, Object_t79 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m3148 (Object_t * __this /* static, unused */, Object_t79 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m2211 (Object_t * __this /* static, unused */, Object_t79 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t478* Object_FindObjectsOfType_m3149 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m547 (Object_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" void Object_set_name_m2285 (Object_t79 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" void Object_set_hideFlags_m2160 (Object_t79 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m593 (Object_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C" bool Object_Equals_m590 (Object_t79 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m592 (Object_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m3150 (Object_t * __this /* static, unused */, Object_t79 * ___lhs, Object_t79 * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m3151 (Object_t * __this /* static, unused */, Object_t79 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m3152 (Object_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m3153 (Object_t79 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" Object_t79 * Object_FindObjectOfType_m3154 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m314 (Object_t * __this /* static, unused */, Object_t79 * ___exists, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m306 (Object_t * __this /* static, unused */, Object_t79 * ___x, Object_t79 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m312 (Object_t * __this /* static, unused */, Object_t79 * ___x, Object_t79 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Object_t79_marshal(const Object_t79& unmarshaled, Object_t79_marshaled& marshaled);
void Object_t79_marshal_back(const Object_t79_marshaled& marshaled, Object_t79& unmarshaled);
void Object_t79_marshal_cleanup(Object_t79_marshaled& marshaled);
