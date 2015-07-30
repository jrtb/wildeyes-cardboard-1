#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.StringBuilder
struct StringBuilder_t353;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t268;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.IFormatProvider
struct IFormatProvider_t761;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C" void StringBuilder__ctor_m9945 (StringBuilder_t353 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void StringBuilder__ctor_m9946 (StringBuilder_t353 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, int32_t ___maxCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C" void StringBuilder__ctor_m1809 (StringBuilder_t353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" void StringBuilder__ctor_m3911 (StringBuilder_t353 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C" void StringBuilder__ctor_m1904 (StringBuilder_t353 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
extern "C" void StringBuilder__ctor_m5252 (StringBuilder_t353 * __this, String_t* ___value, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StringBuilder__ctor_m9947 (StringBuilder_t353 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData_m9948 (StringBuilder_t353 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
extern "C" int32_t StringBuilder_get_Capacity_m9949 (StringBuilder_t353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
extern "C" void StringBuilder_set_Capacity_m9950 (StringBuilder_t353 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" int32_t StringBuilder_get_Length_m5398 (StringBuilder_t353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C" void StringBuilder_set_Length_m5502 (StringBuilder_t353 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
extern "C" uint16_t StringBuilder_get_Chars_m9951 (StringBuilder_t353 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
extern "C" void StringBuilder_set_Chars_m9952 (StringBuilder_t353 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
extern "C" String_t* StringBuilder_ToString_m1813 (StringBuilder_t353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
extern "C" String_t* StringBuilder_ToString_m9953 (StringBuilder_t353 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C" StringBuilder_t353 * StringBuilder_Remove_m9954 (StringBuilder_t353 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String)
extern "C" StringBuilder_t353 * StringBuilder_Replace_m9955 (StringBuilder_t353 * __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C" StringBuilder_t353 * StringBuilder_Replace_m9956 (StringBuilder_t353 * __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" StringBuilder_t353 * StringBuilder_Append_m3917 (StringBuilder_t353 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
extern "C" StringBuilder_t353 * StringBuilder_Append_m5328 (StringBuilder_t353 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
extern "C" StringBuilder_t353 * StringBuilder_Append_m5265 (StringBuilder_t353 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" StringBuilder_t353 * StringBuilder_Append_m5253 (StringBuilder_t353 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" StringBuilder_t353 * StringBuilder_Append_m2148 (StringBuilder_t353 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
extern "C" StringBuilder_t353 * StringBuilder_Append_m9957 (StringBuilder_t353 * __this, uint16_t ___value, int32_t ___repeatCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
extern "C" StringBuilder_t353 * StringBuilder_Append_m9958 (StringBuilder_t353 * __this, CharU5BU5D_t268* ___value, int32_t ___startIndex, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
extern "C" StringBuilder_t353 * StringBuilder_Append_m5413 (StringBuilder_t353 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
extern "C" StringBuilder_t353 * StringBuilder_AppendLine_m1812 (StringBuilder_t353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
extern "C" StringBuilder_t353 * StringBuilder_AppendLine_m1811 (StringBuilder_t353 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
extern "C" StringBuilder_t353 * StringBuilder_AppendFormat_m6397 (StringBuilder_t353 * __this, String_t* ___format, ObjectU5BU5D_t76* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
extern "C" StringBuilder_t353 * StringBuilder_AppendFormat_m9959 (StringBuilder_t353 * __this, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t76* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C" StringBuilder_t353 * StringBuilder_AppendFormat_m5264 (StringBuilder_t353 * __this, String_t* ___format, Object_t * ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C" StringBuilder_t353 * StringBuilder_AppendFormat_m5355 (StringBuilder_t353 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
extern "C" StringBuilder_t353 * StringBuilder_AppendFormat_m5358 (StringBuilder_t353 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
extern "C" StringBuilder_t353 * StringBuilder_Insert_m9960 (StringBuilder_t353 * __this, int32_t ___index, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
extern "C" StringBuilder_t353 * StringBuilder_Insert_m9961 (StringBuilder_t353 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
extern "C" StringBuilder_t353 * StringBuilder_Insert_m9962 (StringBuilder_t353 * __this, int32_t ___index, String_t* ___value, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::InternalEnsureCapacity(System.Int32)
extern "C" void StringBuilder_InternalEnsureCapacity_m9963 (StringBuilder_t353 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
