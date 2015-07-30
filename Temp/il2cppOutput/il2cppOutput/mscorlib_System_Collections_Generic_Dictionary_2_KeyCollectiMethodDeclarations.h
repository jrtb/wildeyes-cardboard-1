#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t645;
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
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_32.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8MethodDeclarations.h"
#define KeyCollection__ctor_m19315(__this, ___dictionary, method) (( void (*) (KeyCollection_t755 *, Dictionary_2_t645 *, MethodInfo*))KeyCollection__ctor_m14751_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m19316(__this, ___item, method) (( void (*) (KeyCollection_t755 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14752_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m19317(__this, method) (( void (*) (KeyCollection_t755 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14753_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m19318(__this, ___item, method) (( bool (*) (KeyCollection_t755 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14754_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m19319(__this, ___item, method) (( bool (*) (KeyCollection_t755 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14755_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m19320(__this, method) (( Object_t* (*) (KeyCollection_t755 *, MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14756_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m19321(__this, ___array, ___index, method) (( void (*) (KeyCollection_t755 *, Array_t *, int32_t, MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m14757_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m19322(__this, method) (( Object_t * (*) (KeyCollection_t755 *, MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14758_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m19323(__this, method) (( bool (*) (KeyCollection_t755 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14759_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m19324(__this, method) (( bool (*) (KeyCollection_t755 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14760_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m19325(__this, method) (( Object_t * (*) (KeyCollection_t755 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m14761_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m19326(__this, ___array, ___index, method) (( void (*) (KeyCollection_t755 *, StringU5BU5D_t87*, int32_t, MethodInfo*))KeyCollection_CopyTo_m14762_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::GetEnumerator()
#define KeyCollection_GetEnumerator_m19327(__this, method) (( Enumerator_t3205  (*) (KeyCollection_t755 *, MethodInfo*))KeyCollection_GetEnumerator_m14763_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::get_Count()
#define KeyCollection_get_Count_m19328(__this, method) (( int32_t (*) (KeyCollection_t755 *, MethodInfo*))KeyCollection_get_Count_m14764_gshared)(__this, method)
