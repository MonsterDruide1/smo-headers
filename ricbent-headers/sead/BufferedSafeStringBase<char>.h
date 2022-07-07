#pragma once

namespace sead { namespace BufferedSafeStringBase<char> {

~BufferedSafeStringBase();
operator=(sead::SafeStringBase<char> const&);
assureTerminationImpl_() const;
formatImpl_(char*, int, char const*, std::__va_list);
formatV(char const*, std::__va_list);
format(char const*, ...);
appendWithFormatV(char const*, std::__va_list);
appendWithFormat(char const*, ...);

} } 
