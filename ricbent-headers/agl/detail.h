#pragma once

namespace agl { namespace detail {

TextToReal(double*, char const*, bool*);
CreateUserDataNode(sead::Heap*, sead::SafeStringBase<char> const&, int const*, int);
CreateUserDataNode(sead::Heap*, sead::SafeStringBase<char> const&, unsigned int const*, int);
CreateUserDataNode(sead::Heap*, sead::SafeStringBase<char> const&, float const*, int);
CreateUserDataNode(sead::Heap*, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&);
CreateUserDataNode(sead::Heap*, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const*, int);
ReplaceDirectoryDelimiter(sead::BufferedSafeStringBase<char>*, char, bool);
CreateRelativePath(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&);
CreateAbsolutePath(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&);
IsFileOpen(sead::FileDevice*, sead::SafeStringBase<char> const&, bool);
GetFileTime(sead::SafeStringBase<char> const&);
NormalizePath(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&, char, bool);
LoadFile(void**, unsigned int*, sead::Heap*, int, sead::FileDevice*, sead::SafeStringBase<char> const&, int);
WriteXML(sead::Heap*, sead::FileDevice*, sead::SafeStringBase<char> const&, sead::XmlDocument*, void const*, unsigned int, unsigned int, bool);
DeleteXmlNodeRecursive(sead::XmlElement*);
CheckXMLBinaryPartOffset(unsigned char const*, unsigned int);
UpdateArrayNodeIndexAndLength(sead::Heap*, sead::XmlElement*);
IsFileOpen(sead::SafeStringBase<char> const&, bool);
LoadFile(void**, unsigned int*, sead::Heap*, int, sead::SafeStringBase<char> const&, int);
WriteXML(sead::Heap*, sead::SafeStringBase<char> const&, sead::XmlDocument*, void const*, unsigned int, unsigned int, bool);

} } 
