#pragma once

namespace sead {

ParseFailed_(char**, int);
replaceStringImpl_<char>(char*, int*, int, char const*, int, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, bool*);
replaceStringImpl_<char16_t>(char16_t*, int*, int, char16_t const*, int, sead::SafeStringBase<char16_t> const&, sead::SafeStringBase<char16_t> const&, bool*);
operator+(sead::Color4u8 const&, sead::Color4u8 const&);
operator-(sead::Color4u8 const&, sead::Color4u8 const&);
operator*(sead::Color4u8 const&, sead::Color4u8 const&);
operator/(sead::Color4u8 const&, sead::Color4u8 const&);
operator|(sead::Color4u8 const&, sead::Color4u8 const&);
operator&(sead::Color4u8 const&, sead::Color4u8 const&);
operator+(sead::Color4u8 const&, unsigned char);
operator-(sead::Color4u8 const&, unsigned char);
operator*(sead::Color4u8 const&, float);
operator/(sead::Color4u8 const&, float);
operator|(sead::Color4u8 const&, unsigned char);
operator&(sead::Color4u8 const&, unsigned char);
operator==(sead::Color4u8 const&, sead::Color4u8 const&);
operator+(sead::Color4f const&, sead::Color4f const&);
operator-(sead::Color4f const&, sead::Color4f const&);
operator*(sead::Color4f const&, sead::Color4f const&);
operator/(sead::Color4f const&, sead::Color4f const&);
operator+(sead::Color4f const&, float);
operator-(sead::Color4f const&, float);
operator*(sead::Color4f const&, float);
operator/(sead::Color4f const&, float);
operator==(sead::Color4f const&, sead::Color4f const&);
operator-(sead::DateTime, sead::DateTime);
operator-(sead::DateTime, sead::DateSpan);
operator+(sead::DateTime, sead::DateSpan);
operator-(sead::DateTimeUtc, sead::DateTimeUtc);
operator-(sead::DateTimeUtc, sead::DateSpan);
operator+(sead::DateTimeUtc, sead::DateSpan);
cCounterClockwise;

} 
