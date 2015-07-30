#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils
struct ReflectionUtils_t670;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t671;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t664;
// System.Type[]
struct TypeU5BU5D_t658;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t672;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t673;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t659;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t662;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t663;

// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern "C" void ReflectionUtils__cctor_m3568 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m3569 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern "C" ConstructorInfo_t664 * ReflectionUtils_GetConstructorInfo_m3570 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t658* ___argsType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m3571 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m3572 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m3573 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m3574 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C" ConstructorDelegate_t659 * ReflectionUtils_GetContructor_m3575 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t658* ___argsType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C" ConstructorDelegate_t659 * ReflectionUtils_GetConstructorByReflection_m3576 (Object_t * __this /* static, unused */, ConstructorInfo_t664 * ___constructorInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C" ConstructorDelegate_t659 * ReflectionUtils_GetConstructorByReflection_m3577 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t658* ___argsType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t662 * ReflectionUtils_GetGetMethod_m3578 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C" GetDelegate_t662 * ReflectionUtils_GetGetMethod_m3579 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t662 * ReflectionUtils_GetGetMethodByReflection_m3580 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C" GetDelegate_t662 * ReflectionUtils_GetGetMethodByReflection_m3581 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t663 * ReflectionUtils_GetSetMethod_m3582 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C" SetDelegate_t663 * ReflectionUtils_GetSetMethod_m3583 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t663 * ReflectionUtils_GetSetMethodByReflection_m3584 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C" SetDelegate_t663 * ReflectionUtils_GetSetMethodByReflection_m3585 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
