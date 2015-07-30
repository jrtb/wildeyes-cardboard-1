#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t564;
struct CacheIndex_t564_marshaled;

void CacheIndex_t564_marshal(const CacheIndex_t564& unmarshaled, CacheIndex_t564_marshaled& marshaled);
void CacheIndex_t564_marshal_back(const CacheIndex_t564_marshaled& marshaled, CacheIndex_t564& unmarshaled);
void CacheIndex_t564_marshal_cleanup(CacheIndex_t564_marshaled& marshaled);
