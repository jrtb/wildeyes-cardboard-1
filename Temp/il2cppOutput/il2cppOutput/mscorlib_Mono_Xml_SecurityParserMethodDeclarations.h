#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SecurityParser
struct SecurityParser_t1494;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t1493;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1495;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t1496;

// System.Void Mono.Xml.SecurityParser::.ctor()
extern "C" void SecurityParser__ctor_m7796 (SecurityParser_t1494 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
extern "C" void SecurityParser_LoadXml_m7797 (SecurityParser_t1494 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
extern "C" SecurityElement_t1493 * SecurityParser_ToXml_m7798 (SecurityParser_t1494 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C" void SecurityParser_OnStartParsing_m7799 (SecurityParser_t1494 * __this, SmallXmlParser_t1495 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
extern "C" void SecurityParser_OnProcessingInstruction_m7800 (SecurityParser_t1494 * __this, String_t* ___name, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
extern "C" void SecurityParser_OnIgnorableWhitespace_m7801 (SecurityParser_t1494 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void SecurityParser_OnStartElement_m7802 (SecurityParser_t1494 * __this, String_t* ___name, Object_t * ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
extern "C" void SecurityParser_OnEndElement_m7803 (SecurityParser_t1494 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
extern "C" void SecurityParser_OnChars_m7804 (SecurityParser_t1494 * __this, String_t* ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C" void SecurityParser_OnEndParsing_m7805 (SecurityParser_t1494 * __this, SmallXmlParser_t1495 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
