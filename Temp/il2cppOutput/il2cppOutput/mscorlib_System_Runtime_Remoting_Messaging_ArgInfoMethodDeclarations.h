#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t1681;
// System.Reflection.MethodBase
struct MethodBase_t772;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"

// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern "C" void ArgInfo__ctor_m9101 (ArgInfo_t1681 * __this, MethodBase_t772 * ___method, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern "C" ObjectU5BU5D_t76* ArgInfo_GetInOutArgs_m9102 (ArgInfo_t1681 * __this, ObjectU5BU5D_t76* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
