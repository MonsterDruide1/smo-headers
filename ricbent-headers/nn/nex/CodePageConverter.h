#pragma once

namespace nn { namespace nex { namespace CodePageConverter {

MultiByteToWideChar(nn::nex::CodePage, char const*, wchar_t*, unsigned long);
GetMultiByteToWideCharSize(nn::nex::CodePage, char const*);
WideCharToMultiByte(nn::nex::CodePage, wchar_t const*, char*, unsigned long);
GetWideCharToMultiByteSize(nn::nex::CodePage, wchar_t const*);
MultiByteToChar16(nn::nex::CodePage, char const*, char16_t*, unsigned long);
GetMultiByteToChar16Size(nn::nex::CodePage, char const*);
Char16ToMultiByte(nn::nex::CodePage, char16_t const*, char*, unsigned long);
GetChar16ToMultiByteSize(nn::nex::CodePage, char16_t const*);

} } } 
