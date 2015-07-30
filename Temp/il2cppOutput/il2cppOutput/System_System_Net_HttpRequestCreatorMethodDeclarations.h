#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1043;
// System.Net.WebRequest
struct WebRequest_t1033;
// System.Uri
struct Uri_t26;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m4426 (HttpRequestCreator_t1043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1033 * HttpRequestCreator_Create_m4427 (HttpRequestCreator_t1043 * __this, Uri_t26 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
