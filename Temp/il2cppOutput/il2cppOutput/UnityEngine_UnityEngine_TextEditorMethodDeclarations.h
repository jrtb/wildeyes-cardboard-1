#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TextEditor
struct TextEditor_t381;
// System.String
struct String_t;

// System.Void UnityEngine.TextEditor::.ctor()
extern "C" void TextEditor__ctor_m2114 (TextEditor_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m3698 (TextEditor_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m2118 (TextEditor_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m3699 (TextEditor_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C" bool TextEditor_DeleteSelection_m3700 (TextEditor_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m3701 (TextEditor_t381 * __this, String_t* ___replace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m3702 (TextEditor_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Copy()
extern "C" void TextEditor_Copy_m2119 (TextEditor_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m3703 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Paste()
extern "C" bool TextEditor_Paste_m2115 (TextEditor_t381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
