#pragma once

namespace nn { namespace nex { 

class String
{
public:
    Format(char const*, ...);
    CreateCopy(char**) const;
    ReleaseCopy(char*);
    operator=(nn::nex::String const&);
    operator=(char const*);
    String();
    String(nn::nex::String::NoAllocTag);
    String(char const*);
    String(wchar_t const*);
    String(char16_t const*);
    String(nn::nex::String const&);
    ~String();
    operator=(wchar_t const*);
    operator=(char16_t const*);
    IsEqual(char const*, char const*);
    operator<(nn::nex::String const&) const;
    operator+=(nn::nex::String const&);
    Truncate(unsigned long) const;
    GetLength() const;
    Reserve(unsigned long);
    SetBufferPtr(char*);
    SetStringToPreReservedBuffer(char const*);
    GetWideCharLength() const;
    CopyString(char*, unsigned long) const;
    CreateCopy(wchar_t**) const;
    ReleaseCopy(wchar_t*);
    CopyString(wchar_t*, unsigned long) const;
    CreateCopy(char16_t**) const;
    ReleaseCopy(char16_t*);
    CopyString(char16_t*, unsigned long) const;
    ToUpper();
    ToLower();
    FindSubstringCase(char const*, int) const;
    FindSubstringNoCase(char const*) const;
    ByteArrayToBase64(unsigned char const*, unsigned long, char*, unsigned long);
    Base64ToByteArray(char const*, unsigned long, unsigned char*, unsigned long);
    Base64ToByteArray(nn::nex::String const&, unsigned char*, unsigned long);
    ContainsCase(nn::nex::String const&) const;
    ToUInt64() const;
    ContainsNoCase(nn::nex::String const&) const;
    SetDefaultStringEncoding(unsigned int);
    Trace(unsigned long);
    s_uiDefaultStringEncoding;
};

} } 
