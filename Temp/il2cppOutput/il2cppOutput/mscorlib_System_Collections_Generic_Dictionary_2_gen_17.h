#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2294;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Int64[]
struct Int64U5BU5D_t1406;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2704;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t708;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
struct Transform_1_t3101;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct  Dictionary_2_t3102  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::table
	Int32U5BU5D_t109* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::linkSlots
	LinkU5BU5D_t2294* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::keySlots
	ObjectU5BU5D_t76* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::valueSlots
	Int64U5BU5D_t1406* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::serialization_info
	SerializationInfo_t708 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t3102_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<>f__am$cacheB
	Transform_1_t3101 * ___U3CU3Ef__am$cacheB_15;
};
