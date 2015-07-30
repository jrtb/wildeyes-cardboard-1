#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2294;
// System.UInt64[]
struct UInt64U5BU5D_t1795;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3161;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t3162;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct  Dictionary_2_t3163  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::table
	Int32U5BU5D_t109* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::linkSlots
	LinkU5BU5D_t2294* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::keySlots
	UInt64U5BU5D_t1795* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::valueSlots
	ObjectU5BU5D_t76* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::serialization_info
	SerializationInfo_t708 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t3163_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<>f__am$cacheB
	Transform_1_t3162 * ___U3CU3Ef__am$cacheB_15;
};
