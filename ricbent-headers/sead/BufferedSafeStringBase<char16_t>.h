#pragma once

namespace sead { namespace BufferedSafeStringBase<char16_t> {

~BufferedSafeStringBase();
operator=(sead::SafeStringBase<char16_t> const&);
assureTerminationImpl_() const;
formatImpl_(char16_t*, int, char16_t const*, std::__va_list);
formatV(char16_t const*, std::__va_list);
format(char16_t const*, ...);
appendWithFormatV(char16_t const*, std::__va_list);
appendWithFormat(char16_t const*, ...);

} } 
