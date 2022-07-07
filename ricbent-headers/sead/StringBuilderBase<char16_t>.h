#pragma once

namespace sead { namespace StringBuilderBase<char16_t> {

create(int, sead::Heap*, int);
create(char16_t const*, sead::Heap*, int);
copy(char16_t const*, int);
endsWith(char16_t const*) const;
format(char16_t const*, ...);
appendWithFormat(char16_t const*, ...);
formatImpl_(char16_t*, int, char16_t const*, std::__va_list);
copyAt(int, char16_t const*, int);
cutOffCopy(char16_t const*, int);
cutOffCopyAt(int, char16_t const*, int);
copyAtWithTerminate(int, char16_t const*, int);
append(char16_t const*, int);
append(char16_t, int);
chop(int);
chopMatchedChar(char16_t);
chopMatchedChar(char16_t const*);
chopUnprintableAsciiChar();
rstrip(char16_t const*);
rstripUnprintableAsciiChars();
trim(int);
trimMatchedString(char16_t const*);
replaceChar(char16_t, char16_t);
replaceCharList(sead::SafeStringBase<char16_t> const&, sead::SafeStringBase<char16_t> const&);
convertFromMultiByteString(char const*, int);
convertFromWideCharString(char16_t const*, int);

} } 
