#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t3045;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t560;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3547;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.String[]
struct StringU5BU5D_t87;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10MethodDeclarations.h"
#define ValueCollection__ctor_m17660(__this, ___dictionary, method) (( void (*) (ValueCollection_t3045 *, Dictionary_2_t560 *, MethodInfo*))ValueCollection__ctor_m14786_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17661(__this, ___item, method) (( void (*) (ValueCollection_t3045 *, String_t*, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14787_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17662(__this, method) (( void (*) (ValueCollection_t3045 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14788_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17663(__this, ___item, method) (( bool (*) (ValueCollection_t3045 *, String_t*, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14789_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17664(__this, ___item, method) (( bool (*) (ValueCollection_t3045 *, String_t*, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14790_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17665(__this, method) (( Object_t* (*) (ValueCollection_t3045 *, MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14791_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m17666(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3045 *, Array_t *, int32_t, MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m14792_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17667(__this, method) (( Object_t * (*) (ValueCollection_t3045 *, MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14793_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17668(__this, method) (( bool (*) (ValueCollection_t3045 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14794_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17669(__this, method) (( bool (*) (ValueCollection_t3045 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14795_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m17670(__this, method) (( Object_t * (*) (ValueCollection_t3045 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m14796_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m17671(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3045 *, StringU5BU5D_t87*, int32_t, MethodInfo*))ValueCollection_CopyTo_m14797_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::GetEnumerator()
#define ValueCollection_GetEnumerator_m17672(__this, method) (( Enumerator_t3046  (*) (ValueCollection_t3045 *, MethodInfo*))ValueCollection_GetEnumerator_m14798_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>::get_Count()
#define ValueCollection_get_Count_m17673(__this, method) (( int32_t (*) (ValueCollection_t3045 *, MethodInfo*))ValueCollection_get_Count_m14799_gshared)(__this, method)
