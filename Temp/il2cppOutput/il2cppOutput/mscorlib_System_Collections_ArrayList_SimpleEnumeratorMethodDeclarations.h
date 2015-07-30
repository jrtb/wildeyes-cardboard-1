#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/SimpleEnumerator
struct SimpleEnumerator_t1504;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1020;

// System.Void System.Collections.ArrayList/SimpleEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void SimpleEnumerator__ctor_m7839 (SimpleEnumerator_t1504 * __this, ArrayList_t1020 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SimpleEnumerator::.cctor()
extern "C" void SimpleEnumerator__cctor_m7840 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SimpleEnumerator::MoveNext()
extern "C" bool SimpleEnumerator_MoveNext_m7841 (SimpleEnumerator_t1504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SimpleEnumerator::get_Current()
extern "C" Object_t * SimpleEnumerator_get_Current_m7842 (SimpleEnumerator_t1504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
