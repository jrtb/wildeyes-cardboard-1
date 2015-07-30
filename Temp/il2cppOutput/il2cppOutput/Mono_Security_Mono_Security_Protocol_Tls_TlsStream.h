#pragma once
#include <stdint.h>
// System.IO.MemoryStream
struct MemoryStream_t749;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// Mono.Security.Protocol.Tls.TlsStream
struct  TlsStream_t1317  : public Stream_t1315
{
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canRead
	bool ___canRead_1;
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canWrite
	bool ___canWrite_2;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.TlsStream::buffer
	MemoryStream_t749 * ___buffer_3;
	// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::temp
	ByteU5BU5D_t66* ___temp_4;
};
