#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1037;
// System.Net.WebRequest
struct WebRequest_t1033;
// System.Uri
struct Uri_t26;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4418 (FileWebRequestCreator_t1037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1033 * FileWebRequestCreator_Create_m4419 (FileWebRequestCreator_t1037 * __this, Uri_t26 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
