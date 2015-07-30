#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t3403;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t126;
// System.Collections.IEnumerator
struct IEnumerator_t31;
// System.Object[]
struct ObjectU5BU5D_t76;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m21103_gshared (Queue_1_t3403 * __this, MethodInfo* method);
#define Queue_1__ctor_m21103(__this, method) (( void (*) (Queue_1_t3403 *, MethodInfo*))Queue_1__ctor_m21103_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m21104_gshared (Queue_1_t3403 * __this, Array_t * ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m21104(__this, ___array, ___idx, method) (( void (*) (Queue_1_t3403 *, Array_t *, int32_t, MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m21104_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m21105_gshared (Queue_1_t3403 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m21105(__this, method) (( bool (*) (Queue_1_t3403 *, MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m21105_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m21106_gshared (Queue_1_t3403 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m21106(__this, method) (( Object_t * (*) (Queue_1_t3403 *, MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m21106_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21107_gshared (Queue_1_t3403 * __this, MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21107(__this, method) (( Object_t* (*) (Queue_1_t3403 *, MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21107_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m21108_gshared (Queue_1_t3403 * __this, MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m21108(__this, method) (( Object_t * (*) (Queue_1_t3403 *, MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m21108_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
extern "C" void Queue_1_Clear_m21109_gshared (Queue_1_t3403 * __this, MethodInfo* method);
#define Queue_1_Clear_m21109(__this, method) (( void (*) (Queue_1_t3403 *, MethodInfo*))Queue_1_Clear_m21109_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m21110_gshared (Queue_1_t3403 * __this, ObjectU5BU5D_t76* ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_CopyTo_m21110(__this, ___array, ___idx, method) (( void (*) (Queue_1_t3403 *, ObjectU5BU5D_t76*, int32_t, MethodInfo*))Queue_1_CopyTo_m21110_gshared)(__this, ___array, ___idx, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m21111_gshared (Queue_1_t3403 * __this, Object_t * ___item, MethodInfo* method);
#define Queue_1_Enqueue_m21111(__this, ___item, method) (( void (*) (Queue_1_t3403 *, Object_t *, MethodInfo*))Queue_1_Enqueue_m21111_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m21112_gshared (Queue_1_t3403 * __this, int32_t ___new_size, MethodInfo* method);
#define Queue_1_SetCapacity_m21112(__this, ___new_size, method) (( void (*) (Queue_1_t3403 *, int32_t, MethodInfo*))Queue_1_SetCapacity_m21112_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m21113_gshared (Queue_1_t3403 * __this, MethodInfo* method);
#define Queue_1_get_Count_m21113(__this, method) (( int32_t (*) (Queue_1_t3403 *, MethodInfo*))Queue_1_get_Count_m21113_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3404  Queue_1_GetEnumerator_m21114_gshared (Queue_1_t3403 * __this, MethodInfo* method);
#define Queue_1_GetEnumerator_m21114(__this, method) (( Enumerator_t3404  (*) (Queue_1_t3403 *, MethodInfo*))Queue_1_GetEnumerator_m21114_gshared)(__this, method)
