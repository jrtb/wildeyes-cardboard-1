#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1753;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1750;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1743;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m9395 (MultiArrayFixupRecord_t1753 * __this, ObjectRecord_t1750 * ___objectToBeFixed, Int32U5BU5D_t109* ___indices, ObjectRecord_t1750 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m9396 (MultiArrayFixupRecord_t1753 * __this, ObjectManager_t1743 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
