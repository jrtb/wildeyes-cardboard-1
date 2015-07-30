#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1200;
struct DSAParameters_t1200_marshaled;

void DSAParameters_t1200_marshal(const DSAParameters_t1200& unmarshaled, DSAParameters_t1200_marshaled& marshaled);
void DSAParameters_t1200_marshal_back(const DSAParameters_t1200_marshaled& marshaled, DSAParameters_t1200& unmarshaled);
void DSAParameters_t1200_marshal_cleanup(DSAParameters_t1200_marshaled& marshaled);
