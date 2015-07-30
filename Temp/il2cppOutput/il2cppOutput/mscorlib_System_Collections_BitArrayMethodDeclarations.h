#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.BitArray
struct BitArray_t1140;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;

// System.Void System.Collections.BitArray::.ctor(System.Int32)
extern "C" void BitArray__ctor_m5486 (BitArray_t1140 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Collections.BitArray::getByte(System.Int32)
extern "C" uint8_t BitArray_getByte_m7929 (BitArray_t1140 * __this, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.BitArray::get_Count()
extern "C" int32_t BitArray_get_Count_m7930 (BitArray_t1140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.BitArray::get_IsSynchronized()
extern "C" bool BitArray_get_IsSynchronized_m7931 (BitArray_t1140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.BitArray::get_Item(System.Int32)
extern "C" bool BitArray_get_Item_m5443 (BitArray_t1140 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::set_Item(System.Int32,System.Boolean)
extern "C" void BitArray_set_Item_m5487 (BitArray_t1140 * __this, int32_t ___index, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.BitArray::get_Length()
extern "C" int32_t BitArray_get_Length_m5442 (BitArray_t1140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.BitArray::get_SyncRoot()
extern "C" Object_t * BitArray_get_SyncRoot_m7932 (BitArray_t1140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::CopyTo(System.Array,System.Int32)
extern "C" void BitArray_CopyTo_m7933 (BitArray_t1140 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.BitArray::Get(System.Int32)
extern "C" bool BitArray_Get_m7934 (BitArray_t1140 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::Set(System.Int32,System.Boolean)
extern "C" void BitArray_Set_m7935 (BitArray_t1140 * __this, int32_t ___index, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.BitArray::GetEnumerator()
extern "C" Object_t * BitArray_GetEnumerator_m7936 (BitArray_t1140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
