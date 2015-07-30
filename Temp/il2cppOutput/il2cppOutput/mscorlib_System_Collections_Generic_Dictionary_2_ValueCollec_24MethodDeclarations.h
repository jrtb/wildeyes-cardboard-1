#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t3112;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3102;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t3679;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Int64[]
struct Int64U5BU5D_t1406;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m18481_gshared (ValueCollection_t3112 * __this, Dictionary_2_t3102 * ___dictionary, MethodInfo* method);
#define ValueCollection__ctor_m18481(__this, ___dictionary, method) (( void (*) (ValueCollection_t3112 *, Dictionary_2_t3102 *, MethodInfo*))ValueCollection__ctor_m18481_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18482_gshared (ValueCollection_t3112 * __this, int64_t ___item, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18482(__this, ___item, method) (( void (*) (ValueCollection_t3112 *, int64_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18483_gshared (ValueCollection_t3112 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18483(__this, method) (( void (*) (ValueCollection_t3112 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18483_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18484_gshared (ValueCollection_t3112 * __this, int64_t ___item, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18484(__this, ___item, method) (( bool (*) (ValueCollection_t3112 *, int64_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18484_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18485_gshared (ValueCollection_t3112 * __this, int64_t ___item, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18485(__this, ___item, method) (( bool (*) (ValueCollection_t3112 *, int64_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18485_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18486_gshared (ValueCollection_t3112 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18486(__this, method) (( Object_t* (*) (ValueCollection_t3112 *, MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18486_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18487_gshared (ValueCollection_t3112 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m18487(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3112 *, Array_t *, int32_t, MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m18487_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18488_gshared (ValueCollection_t3112 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18488(__this, method) (( Object_t * (*) (ValueCollection_t3112 *, MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18488_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18489_gshared (ValueCollection_t3112 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18489(__this, method) (( bool (*) (ValueCollection_t3112 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18489_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18490_gshared (ValueCollection_t3112 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18490(__this, method) (( bool (*) (ValueCollection_t3112 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18490_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18491_gshared (ValueCollection_t3112 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m18491(__this, method) (( Object_t * (*) (ValueCollection_t3112 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m18491_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18492_gshared (ValueCollection_t3112 * __this, Int64U5BU5D_t1406* ___array, int32_t ___index, MethodInfo* method);
#define ValueCollection_CopyTo_m18492(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3112 *, Int64U5BU5D_t1406*, int32_t, MethodInfo*))ValueCollection_CopyTo_m18492_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t3113  ValueCollection_GetEnumerator_m18493_gshared (ValueCollection_t3112 * __this, MethodInfo* method);
#define ValueCollection_GetEnumerator_m18493(__this, method) (( Enumerator_t3113  (*) (ValueCollection_t3112 *, MethodInfo*))ValueCollection_GetEnumerator_m18493_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m18494_gshared (ValueCollection_t3112 * __this, MethodInfo* method);
#define ValueCollection_get_Count_m18494(__this, method) (( int32_t (*) (ValueCollection_t3112 *, MethodInfo*))ValueCollection_get_Count_m18494_gshared)(__this, method)
