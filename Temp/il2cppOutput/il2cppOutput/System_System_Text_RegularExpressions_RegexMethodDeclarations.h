#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Regex
struct Regex_t111;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1123;
// System.Text.RegularExpressions.Match
struct Match_t1109;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t1120;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1119;
// System.String[]
struct StringU5BU5D_t87;
// System.Collections.IDictionary
struct IDictionary_t1010;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.RegularExpressions.Regex::.ctor()
extern "C" void Regex__ctor_m4814 (Regex_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" void Regex__ctor_m580 (Regex_t111 * __this, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" void Regex__ctor_m4815 (Regex_t111 * __this, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Regex__ctor_m4816 (Regex_t111 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.cctor()
extern "C" void Regex__cctor_m4817 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m4818 (Regex_t111 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
extern "C" String_t* Regex_Replace_m4025 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, String_t* ___replacement, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" String_t* Regex_Replace_m4819 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, String_t* ___replacement, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::validate_options(System.Text.RegularExpressions.RegexOptions)
extern "C" void Regex_validate_options_m4820 (Object_t * __this /* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::Init()
extern "C" void Regex_Init_m4821 (Regex_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitNewRegex()
extern "C" void Regex_InitNewRegex_m4822 (Regex_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::CreateMachineFactory(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" Object_t * Regex_CreateMachineFactory_m4823 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern "C" int32_t Regex_get_Options_m4824 (Regex_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern "C" bool Regex_get_RightToLeft_m4825 (Regex_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GroupNumberFromName(System.String)
extern "C" int32_t Regex_GroupNumberFromName_m4826 (Regex_t111 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GetGroupIndex(System.Int32)
extern "C" int32_t Regex_GetGroupIndex_m4827 (Regex_t111 * __this, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::default_startat(System.String)
extern "C" int32_t Regex_default_startat_m4828 (Regex_t111 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C" bool Regex_IsMatch_m4829 (Regex_t111 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern "C" bool Regex_IsMatch_m4830 (Regex_t111 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern "C" Match_t1109 * Regex_Match_m4831 (Regex_t111 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern "C" MatchCollection_t1120 * Regex_Matches_m4832 (Regex_t111 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern "C" MatchCollection_t1120 * Regex_Matches_m4833 (Regex_t111 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
extern "C" String_t* Regex_Replace_m582 (Regex_t111 * __this, String_t* ___input, String_t* ___replacement, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* Regex_Replace_m4834 (Regex_t111 * __this, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::ToString()
extern "C" String_t* Regex_ToString_m4835 (Regex_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_GroupCount()
extern "C" int32_t Regex_get_GroupCount_m4836 (Regex_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_Gap()
extern "C" int32_t Regex_get_Gap_m4837 (Regex_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Regex::CreateMachine()
extern "C" Object_t * Regex_CreateMachine_m4838 (Regex_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNamesArray(System.Int32,System.Collections.IDictionary)
extern "C" StringU5BU5D_t87* Regex_GetGroupNamesArray_m4839 (Object_t * __this /* static, unused */, int32_t ___groupCount, Object_t * ___mapping, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::get_GroupNumbers()
extern "C" Int32U5BU5D_t109* Regex_get_GroupNumbers_m4840 (Regex_t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
