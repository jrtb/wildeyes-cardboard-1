#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t3424;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1054;
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
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_50.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_47MethodDeclarations.h"
#define KeyCollection__ctor_m21327(__this, ___dictionary, method) (( void (*) (KeyCollection_t3424 *, Dictionary_2_t1054 *, MethodInfo*))KeyCollection__ctor_m21229_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21328(__this, ___item, method) (( void (*) (KeyCollection_t3424 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21230_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21329(__this, method) (( void (*) (KeyCollection_t3424 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21231_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21330(__this, ___item, method) (( bool (*) (KeyCollection_t3424 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21232_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21331(__this, ___item, method) (( bool (*) (KeyCollection_t3424 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21233_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21332(__this, method) (( Object_t* (*) (KeyCollection_t3424 *, MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21234_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m21333(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3424 *, Array_t *, int32_t, MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m21235_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21334(__this, method) (( Object_t * (*) (KeyCollection_t3424 *, MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21236_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21335(__this, method) (( bool (*) (KeyCollection_t3424 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21237_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21336(__this, method) (( bool (*) (KeyCollection_t3424 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21238_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m21337(__this, method) (( Object_t * (*) (KeyCollection_t3424 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m21239_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m21338(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3424 *, StringU5BU5D_t87*, int32_t, MethodInfo*))KeyCollection_CopyTo_m21240_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::GetEnumerator()
#define KeyCollection_GetEnumerator_m21339(__this, method) (( Enumerator_t3425  (*) (KeyCollection_t3424 *, MethodInfo*))KeyCollection_GetEnumerator_m21241_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::get_Count()
#define KeyCollection_get_Count_m21340(__this, method) (( int32_t (*) (KeyCollection_t3424 *, MethodInfo*))KeyCollection_get_Count_m21242_gshared)(__this, method)
