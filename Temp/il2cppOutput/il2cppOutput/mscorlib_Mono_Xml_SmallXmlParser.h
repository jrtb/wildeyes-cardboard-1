#pragma once
#include <stdint.h>
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t1498;
// System.IO.TextReader
struct TextReader_t1499;
// System.Collections.Stack
struct Stack_t731;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t353;
// System.Char[]
struct CharU5BU5D_t268;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t1497;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t545;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.SmallXmlParser
struct  SmallXmlParser_t1495  : public Object_t
{
	// Mono.Xml.SmallXmlParser/IContentHandler Mono.Xml.SmallXmlParser::handler
	Object_t * ___handler_0;
	// System.IO.TextReader Mono.Xml.SmallXmlParser::reader
	TextReader_t1499 * ___reader_1;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::elementNames
	Stack_t731 * ___elementNames_2;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::xmlSpaces
	Stack_t731 * ___xmlSpaces_3;
	// System.String Mono.Xml.SmallXmlParser::xmlSpace
	String_t* ___xmlSpace_4;
	// System.Text.StringBuilder Mono.Xml.SmallXmlParser::buffer
	StringBuilder_t353 * ___buffer_5;
	// System.Char[] Mono.Xml.SmallXmlParser::nameBuffer
	CharU5BU5D_t268* ___nameBuffer_6;
	// System.Boolean Mono.Xml.SmallXmlParser::isWhitespace
	bool ___isWhitespace_7;
	// Mono.Xml.SmallXmlParser/AttrListImpl Mono.Xml.SmallXmlParser::attributes
	AttrListImpl_t1497 * ___attributes_8;
	// System.Int32 Mono.Xml.SmallXmlParser::line
	int32_t ___line_9;
	// System.Int32 Mono.Xml.SmallXmlParser::column
	int32_t ___column_10;
	// System.Boolean Mono.Xml.SmallXmlParser::resetColumn
	bool ___resetColumn_11;
};
struct SmallXmlParser_t1495_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.SmallXmlParser::<>f__switch$map18
	Dictionary_2_t545 * ___U3CU3Ef__switch$map18_12;
};
