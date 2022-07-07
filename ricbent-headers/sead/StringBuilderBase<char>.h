#pragma once

namespace sead { namespace StringBuilderBase<char> {

create(int, sead::Heap*, int);
create(char const*, sead::Heap*, int);
copy(char const*, int);
endsWith(char const*) const;
format(char const*, ...);
appendWithFormat(char const*, ...);
formatImpl_(char*, int, char const*, std::__va_list);
copyAt(int, char const*, int);
cutOffCopy(char const*, int);
cutOffCopyAt(int, char const*, int);
copyAtWithTerminate(int, char const*, int);
append(char const*, int);
append(char, int);
chop(int);
chopMatchedChar(char);
chopMatchedChar(char const*);
chopUnprintableAsciiChar();
rstrip(char const*);
rstripUnprintableAsciiChars();
trim(int);
trimMatchedString(char const*);
replaceChar(char, char);
replaceCharList(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&);
convertFromMultiByteString(char const*, int);
convertFromWideCharString(char16_t const*, int);

} } 
