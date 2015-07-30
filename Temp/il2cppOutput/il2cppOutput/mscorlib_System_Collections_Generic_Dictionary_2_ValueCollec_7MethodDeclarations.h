#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
struct Enumerator_t2713;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2702;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14336_gshared (Enumerator_t2713 * __this, Dictionary_2_t2702 * ___host, MethodInfo* method);
#define Enumerator__ctor_m14336(__this, ___host, method) (( void (*) (Enumerator_t2713 *, Dictionary_2_t2702 *, MethodInfo*))Enumerator__ctor_m14336_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14337_gshared (Enumerator_t2713 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14337(__this, method) (( Object_t * (*) (Enumerator_t2713 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14337_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14338_gshared (Enumerator_t2713 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14338(__this, method) (( void (*) (Enumerator_t2713 *, MethodInfo*))Enumerator_Dispose_m14338_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14339_gshared (Enumerator_t2713 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14339(__this, method) (( bool (*) (Enumerator_t2713 *, MethodInfo*))Enumerator_MoveNext_m14339_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m14340_gshared (Enumerator_t2713 * __this, MethodInfo* method);
#define Enumerator_get_Current_m14340(__this, method) (( int32_t (*) (Enumerator_t2713 *, MethodInfo*))Enumerator_get_Current_m14340_gshared)(__this, method)
