#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CryptographicException
struct CryptographicException_t1201;
// System.String
struct String_t;
// System.Exception
struct Exception_t110;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Cryptography.CryptographicException::.ctor()
extern "C" void CryptographicException__ctor_m9462 (CryptographicException_t1201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
extern "C" void CryptographicException__ctor_m5309 (CryptographicException_t1201 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.Exception)
extern "C" void CryptographicException__ctor_m5313 (CryptographicException_t1201 * __this, String_t* ___message, Exception_t110 * ___inner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.String)
extern "C" void CryptographicException__ctor_m9463 (CryptographicException_t1201 * __this, String_t* ___format, String_t* ___insert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CryptographicException__ctor_m9464 (CryptographicException_t1201 * __this, SerializationInfo_t708 * ___info, StreamingContext_t709  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
