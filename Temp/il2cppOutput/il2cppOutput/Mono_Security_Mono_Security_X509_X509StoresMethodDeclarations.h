#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Stores
struct X509Stores_t1103;
// Mono.Security.X509.X509Store
struct X509Store_t1102;
// System.String
struct String_t;

// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C" void X509Stores__ctor_m5854 (X509Stores_t1103 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C" X509Store_t1102 * X509Stores_get_TrustedRoot_m5855 (X509Stores_t1103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::Open(System.String,System.Boolean)
extern "C" X509Store_t1102 * X509Stores_Open_m5402 (X509Stores_t1103 * __this, String_t* ___storeName, bool ___create, MethodInfo* method) IL2CPP_METHOD_ATTR;
