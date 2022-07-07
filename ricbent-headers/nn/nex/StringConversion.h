#pragma once

namespace nn { namespace nex { namespace StringConversion {

Utf8ToWideChar(char const*, wchar_t*, unsigned long);
WideCharToUtf8(wchar_t const*, char*, unsigned long);
Utf8ToChar16(char const*, char16_t*, unsigned long);
Char16ToUtf8(char16_t const*, char*, unsigned long);
GetNeedWideCharBufferSize(char const*);
GetNeedUtf8BufferSize(wchar_t const*);
GetNeedUtf8BufferSize(char16_t const*);
ByteArrayToBase64(unsigned char const*, unsigned long, char*, unsigned long*);
Base64ToByteArray(char const*, unsigned long, unsigned char*, unsigned long*);
Char8_2T(char const*, char*, unsigned long);
T2Char8(char const*, char*, unsigned long);
T2Char8Alloc(char const*, char**);
Utf8ToT(char const*, char*, unsigned long);
TToUtf8(char const*, char*, unsigned long);
GetTToUtf8BufferSize(char const*);
T2Char16(char const*, char16_t*, unsigned long);
Char16_2T(char16_t const*, char*, unsigned long);
Char8ToUtf8Alloc(char const*, char**);
WideCharToUtf8Alloc(wchar_t const*, char**);
Utf8ToWideCharAlloc(char const*, wchar_t**);
T2Char8Release(char*);
Encode(unsigned char const*, unsigned long, char*, unsigned long);
Decode(char const*, unsigned char*, unsigned long);
GetCharValue(char);
StringToHex(char const*, unsigned char*, unsigned long);
HexToString(unsigned char const*, char*, unsigned long);
GetCharValue(wchar_t);
StringToHex(wchar_t const*, unsigned char*, unsigned long);
HexToString(unsigned char const*, wchar_t*, unsigned long);
base64_chars;
base64_values;

} } } 
