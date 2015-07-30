#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Guid
struct Guid_t777;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t353;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t761;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Guid::.ctor(System.Byte[])
extern "C" void Guid__ctor_m10534 (Guid_t777 * __this, ByteU5BU5D_t66* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void Guid__ctor_m10535 (Guid_t777 * __this, int32_t ___a, int16_t ___b, int16_t ___c, uint8_t ___d, uint8_t ___e, uint8_t ___f, uint8_t ___g, uint8_t ___h, uint8_t ___i, uint8_t ___j, uint8_t ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.cctor()
extern "C" void Guid__cctor_m10536 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckNull(System.Object)
extern "C" void Guid_CheckNull_m10537 (Object_t * __this /* static, unused */, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckLength(System.Byte[],System.Int32)
extern "C" void Guid_CheckLength_m10538 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___o, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckArray(System.Byte[],System.Int32)
extern "C" void Guid_CheckArray_m10539 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___o, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::Compare(System.Int32,System.Int32)
extern "C" int32_t Guid_Compare_m10540 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Object)
extern "C" int32_t Guid_CompareTo_m10541 (Guid_t777 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Object)
extern "C" bool Guid_Equals_m10542 (Guid_t777 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Guid)
extern "C" int32_t Guid_CompareTo_m10543 (Guid_t777 * __this, Guid_t777  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Guid)
extern "C" bool Guid_Equals_m10544 (Guid_t777 * __this, Guid_t777  ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::GetHashCode()
extern "C" int32_t Guid_GetHashCode_m10545 (Guid_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Guid::ToHex(System.Int32)
extern "C" uint16_t Guid_ToHex_m10546 (Object_t * __this /* static, unused */, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
extern "C" Guid_t777  Guid_NewGuid_m10547 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendInt(System.Text.StringBuilder,System.Int32)
extern "C" void Guid_AppendInt_m10548 (Object_t * __this /* static, unused */, StringBuilder_t353 * ___builder, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendShort(System.Text.StringBuilder,System.Int16)
extern "C" void Guid_AppendShort_m10549 (Object_t * __this /* static, unused */, StringBuilder_t353 * ___builder, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendByte(System.Text.StringBuilder,System.Byte)
extern "C" void Guid_AppendByte_m10550 (Object_t * __this /* static, unused */, StringBuilder_t353 * ___builder, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::BaseToString(System.Boolean,System.Boolean,System.Boolean)
extern "C" String_t* Guid_BaseToString_m10551 (Guid_t777 * __this, bool ___h, bool ___p, bool ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
extern "C" String_t* Guid_ToString_m10552 (Guid_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String)
extern "C" String_t* Guid_ToString_m3969 (Guid_t777 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Guid_ToString_m10553 (Guid_t777 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
