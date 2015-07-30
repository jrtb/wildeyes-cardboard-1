#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.BinaryReader
struct BinaryReader_t1546;
// System.IO.Stream
struct Stream_t1315;
// System.Text.Encoding
struct Encoding_t113;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Char[]
struct CharU5BU5D_t268;
// System.String
struct String_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C" void BinaryReader__ctor_m8240 (BinaryReader_t1546 * __this, Stream_t1315 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryReader__ctor_m8241 (BinaryReader_t1546 * __this, Stream_t1315 * ___input, Encoding_t113 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
extern "C" void BinaryReader_System_IDisposable_Dispose_m8242 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
extern "C" void BinaryReader_Dispose_m8243 (BinaryReader_t1546 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
extern "C" void BinaryReader_FillBuffer_m8244 (BinaryReader_t1546 * __this, int32_t ___numBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
extern "C" int32_t BinaryReader_Read_m8245 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t BinaryReader_Read_m8246 (BinaryReader_t1546 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t BinaryReader_Read_m8247 (BinaryReader_t1546 * __this, CharU5BU5D_t268* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C" int32_t BinaryReader_ReadCharBytes_m8248 (BinaryReader_t1546 * __this, CharU5BU5D_t268* ___buffer, int32_t ___index, int32_t ___count, int32_t* ___bytes_read, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
extern "C" int32_t BinaryReader_Read7BitEncodedInt_m8249 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
extern "C" bool BinaryReader_ReadBoolean_m8250 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
extern "C" uint8_t BinaryReader_ReadByte_m8251 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
extern "C" uint16_t BinaryReader_ReadChar_m8252 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
extern "C" Decimal_t763  BinaryReader_ReadDecimal_m8253 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
extern "C" double BinaryReader_ReadDouble_m8254 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
extern "C" int16_t BinaryReader_ReadInt16_m8255 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
extern "C" int32_t BinaryReader_ReadInt32_m8256 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
extern "C" int64_t BinaryReader_ReadInt64_m8257 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
extern "C" int8_t BinaryReader_ReadSByte_m8258 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
extern "C" String_t* BinaryReader_ReadString_m8259 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
extern "C" float BinaryReader_ReadSingle_m8260 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
extern "C" uint16_t BinaryReader_ReadUInt16_m8261 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
extern "C" uint32_t BinaryReader_ReadUInt32_m8262 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
extern "C" uint64_t BinaryReader_ReadUInt64_m8263 (BinaryReader_t1546 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
extern "C" void BinaryReader_CheckBuffer_m8264 (BinaryReader_t1546 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
