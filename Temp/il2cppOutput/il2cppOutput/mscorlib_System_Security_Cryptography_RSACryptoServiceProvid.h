#pragma once
#include <stdint.h>
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t1468;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t1475;
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t1196  : public RSA_t1066
{
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t1468 * ___store_2;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t1475 * ___rsa_7;
};
struct RSACryptoServiceProvider_t1196_StaticFields{
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;
};
