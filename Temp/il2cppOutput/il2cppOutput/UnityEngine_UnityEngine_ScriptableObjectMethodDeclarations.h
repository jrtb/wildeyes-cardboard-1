#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t485;
struct ScriptableObject_t485_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m2540 (ScriptableObject_t485 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m2541 (Object_t * __this /* static, unused */, ScriptableObject_t485 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t485 * ScriptableObject_CreateInstance_m2542 (Object_t * __this /* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t485 * ScriptableObject_CreateInstance_m2543 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t485 * ScriptableObject_CreateInstanceFromType_m2544 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t485_marshal(const ScriptableObject_t485& unmarshaled, ScriptableObject_t485_marshaled& marshaled);
void ScriptableObject_t485_marshal_back(const ScriptableObject_t485_marshaled& marshaled, ScriptableObject_t485& unmarshaled);
void ScriptableObject_t485_marshal_cleanup(ScriptableObject_t485_marshaled& marshaled);
