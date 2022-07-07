#pragma once

namespace sead { namespace StringUtil {

tryParseU64(unsigned long*, sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
tryParseS64(long*, sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
tryParseU32(unsigned int*, sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
tryParseS32(int*, sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
tryParseU16(unsigned short*, sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
tryParseS16(short*, sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
tryParseU8(unsigned char*, sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
tryParseS8(signed char*, sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
tryParseF32(float*, sead::SafeStringBase<char> const&);
tryParseF64(double*, sead::SafeStringBase<char> const&);
parseU64(sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
parseS64(sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
parseU32(sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
parseS32(sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
parseU16(sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
parseS16(sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
parseU8(sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
parseS8(sead::SafeStringBase<char> const&, sead::StringUtil::CardinalNumber);
parseF32(sead::SafeStringBase<char> const&);
parseF64(sead::SafeStringBase<char> const&);
wcs16cpy(char16_t*, unsigned long, char16_t const*);
vsw16printf(char16_t*, unsigned long, char16_t const*, std::__va_list);
sw16printf(char16_t*, unsigned long, char16_t const*, ...);
vsnprintf(char*, unsigned long, char const*, std::__va_list);
snprintf(char*, unsigned long, char const*, ...);
convertSjisToUtf16(char16_t*, unsigned int, char const*, int);
convertUtf16ToSjis(char*, unsigned int, char16_t const*, int);
convertUtf8ToUtf16(char16_t*, unsigned int, char const*, int);
convertUtf16ToUtf8(char*, unsigned int, char16_t const*, int);
convertSjisToUtf8(char*, unsigned int, char const*, int);
convertUtf8ToSjis(char*, unsigned int, char const*, int);
compareChar16Pair(sead::StringUtil::Char16Pair const&, char16_t const&);
replace(char16_t, sead::Buffer<sead::StringUtil::Char16Pair const> const&);
toUpperCapital(char16_t);
toUpperCapitalFirstCharactor(sead::BufferedSafeStringBase<char16_t>*);
toLowerCapital(char16_t);
toLowerCapitalFirstCharactor(sead::BufferedSafeStringBase<char16_t>*);

} } 
