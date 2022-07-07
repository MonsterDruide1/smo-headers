#pragma once

namespace sead { namespace SafeStringBase<char16_t> {

~SafeStringBase();
assureTerminationImpl_() const;
operator=(sead::SafeStringBase<char16_t> const&);
cNullChar;
cLineBreakChar;
cEmptyString;

} } 
