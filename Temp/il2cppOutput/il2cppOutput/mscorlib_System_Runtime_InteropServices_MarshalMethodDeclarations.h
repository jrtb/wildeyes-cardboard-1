#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.Marshal
struct Marshal_t1652;
// System.Array
struct Array_t;
// System.Char[]
struct CharU5BU5D_t268;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C" void Marshal__cctor_m9035 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C" void Marshal_copy_from_unmanaged_m9036 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C" void Marshal_Copy_m9037 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t268* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
