#pragma once
#include <stdint.h>
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t528;
// UnityEngineInternal.GenericStack
struct GenericStack_t523;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t529  : public Object_t
{
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t528 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t523 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t528 * ___windows_2;
};
