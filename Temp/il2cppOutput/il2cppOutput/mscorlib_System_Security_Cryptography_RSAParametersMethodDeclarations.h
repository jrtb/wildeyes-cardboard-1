#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1198;
struct RSAParameters_t1198_marshaled;

void RSAParameters_t1198_marshal(const RSAParameters_t1198& unmarshaled, RSAParameters_t1198_marshaled& marshaled);
void RSAParameters_t1198_marshal_back(const RSAParameters_t1198_marshaled& marshaled, RSAParameters_t1198& unmarshaled);
void RSAParameters_t1198_marshal_cleanup(RSAParameters_t1198_marshaled& marshaled);
