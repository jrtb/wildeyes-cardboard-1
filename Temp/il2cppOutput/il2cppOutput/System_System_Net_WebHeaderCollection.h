#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t1007;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1054;
// System.Boolean[]
struct BooleanU5BU5D_t1055;
// System.Collections.Specialized.NameValueCollection
#include "System_System_Collections_Specialized_NameValueCollection.h"
// System.Net.WebHeaderCollection
struct  WebHeaderCollection_t1034  : public NameValueCollection_t1023
{
	// System.Boolean System.Net.WebHeaderCollection::internallyCreated
	bool ___internallyCreated_15;
};
struct WebHeaderCollection_t1034_StaticFields{
	// System.Collections.Hashtable System.Net.WebHeaderCollection::restricted
	Hashtable_t1007 * ___restricted_12;
	// System.Collections.Hashtable System.Net.WebHeaderCollection::multiValue
	Hashtable_t1007 * ___multiValue_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> System.Net.WebHeaderCollection::restricted_response
	Dictionary_2_t1054 * ___restricted_response_14;
	// System.Boolean[] System.Net.WebHeaderCollection::allowed_chars
	BooleanU5BU5D_t1055* ___allowed_chars_16;
};
