#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t3042;
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
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_23.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8MethodDeclarations.h"
#define KeyCollection__ctor_m17627(__this, ___dictionary, method) (( void (*) (KeyCollection_t3042 *, Dictionary_2_t560 *, MethodInfo*))KeyCollection__ctor_m14751_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17628(__this, ___item, method) (( void (*) (KeyCollection_t3042 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14752_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17629(__this, method) (( void (*) (KeyCollection_t3042 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14753_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17630(__this, ___item, method) (( bool (*) (KeyCollection_t3042 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14754_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17631(__this, ___item, method) (( bool (*) (KeyCollection_t3042 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14755_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17632(__this, method) (( Object_t* (*) (KeyCollection_t3042 *, MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14756_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m17633(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3042 *, Array_t *, int32_t, MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m14757_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17634(__this, method) (( Object_t * (*) (KeyCollection_t3042 *, MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14758_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17635(__this, method) (( bool (*) (KeyCollection_t3042 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14759_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17636(__this, method) (( bool (*) (KeyCollection_t3042 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14760_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m17637(__this, method) (( Object_t * (*) (KeyCollection_t3042 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m14761_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m17638(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3042 *, StringU5BU5D_t87*, int32_t, MethodInfo*))KeyCollection_CopyTo_m14762_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
#define KeyCollection_GetEnumerator_m17639(__this, method) (( Enumerator_t3043  (*) (KeyCollection_t3042 *, MethodInfo*))KeyCollection_GetEnumerator_m14763_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::get_Count()
#define KeyCollection_get_Count_m17640(__this, method) (( int32_t (*) (KeyCollection_t3042 *, MethodInfo*))KeyCollection_get_Count_m14764_gshared)(__this, method)
