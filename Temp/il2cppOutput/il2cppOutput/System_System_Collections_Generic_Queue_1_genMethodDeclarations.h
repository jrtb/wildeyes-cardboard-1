#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t62;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3562;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Collections.Generic.Queue`1/Enumerator<System.Int32>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
extern "C" void Queue_1__ctor_m563_gshared (Queue_1_t62 * __this, MethodInfo* method);
#define Queue_1__ctor_m563(__this, method) (( void (*) (Queue_1_t62 *, MethodInfo*))Queue_1__ctor_m563_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m13069_gshared (Queue_1_t62 * __this, Array_t * ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m13069(__this, ___array, ___idx, method) (( void (*) (Queue_1_t62 *, Array_t *, int32_t, MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m13069_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m13070_gshared (Queue_1_t62 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m13070(__this, method) (( bool (*) (Queue_1_t62 *, MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m13070_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m13071_gshared (Queue_1_t62 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m13071(__this, method) (( Object_t * (*) (Queue_1_t62 *, MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m13071_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13072_gshared (Queue_1_t62 * __this, MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13072(__this, method) (( Object_t* (*) (Queue_1_t62 *, MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13072_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m13073_gshared (Queue_1_t62 * __this, MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m13073(__this, method) (( Object_t * (*) (Queue_1_t62 *, MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m13073_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
extern "C" void Queue_1_Clear_m577_gshared (Queue_1_t62 * __this, MethodInfo* method);
#define Queue_1_Clear_m577(__this, method) (( void (*) (Queue_1_t62 *, MethodInfo*))Queue_1_Clear_m577_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m576_gshared (Queue_1_t62 * __this, Int32U5BU5D_t109* ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_CopyTo_m576(__this, ___array, ___idx, method) (( void (*) (Queue_1_t62 *, Int32U5BU5D_t109*, int32_t, MethodInfo*))Queue_1_CopyTo_m576_gshared)(__this, ___array, ___idx, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m578_gshared (Queue_1_t62 * __this, int32_t ___item, MethodInfo* method);
#define Queue_1_Enqueue_m578(__this, ___item, method) (( void (*) (Queue_1_t62 *, int32_t, MethodInfo*))Queue_1_Enqueue_m578_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m13074_gshared (Queue_1_t62 * __this, int32_t ___new_size, MethodInfo* method);
#define Queue_1_SetCapacity_m13074(__this, ___new_size, method) (( void (*) (Queue_1_t62 *, int32_t, MethodInfo*))Queue_1_SetCapacity_m13074_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
extern "C" int32_t Queue_1_get_Count_m574_gshared (Queue_1_t62 * __this, MethodInfo* method);
#define Queue_1_get_Count_m574(__this, method) (( int32_t (*) (Queue_1_t62 *, MethodInfo*))Queue_1_get_Count_m574_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2594  Queue_1_GetEnumerator_m13075_gshared (Queue_1_t62 * __this, MethodInfo* method);
#define Queue_1_GetEnumerator_m13075(__this, method) (( Enumerator_t2594  (*) (Queue_1_t62 *, MethodInfo*))Queue_1_GetEnumerator_m13075_gshared)(__this, method)
