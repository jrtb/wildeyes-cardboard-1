#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t603;
struct SkeletonBone_t603_marshaled;

void SkeletonBone_t603_marshal(const SkeletonBone_t603& unmarshaled, SkeletonBone_t603_marshaled& marshaled);
void SkeletonBone_t603_marshal_back(const SkeletonBone_t603_marshaled& marshaled, SkeletonBone_t603& unmarshaled);
void SkeletonBone_t603_marshal_cleanup(SkeletonBone_t603_marshaled& marshaled);
