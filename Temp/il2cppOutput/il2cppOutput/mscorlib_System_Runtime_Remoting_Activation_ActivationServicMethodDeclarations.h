#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Activation.ActivationServices
struct ActivationServices_t1659;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t1658;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t1660;
// System.String
struct String_t;

// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m9052 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m9053 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t76* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern "C" ConstructionCall_t1660 * ActivationServices_CreateConstructionCall_m9054 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t76* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m9055 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
