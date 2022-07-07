#pragma once

namespace sead { namespace SafeStringBase<char> {

~SafeStringBase();
assureTerminationImpl_() const;
findIndex(sead::SafeStringBase<char> const&) const;
operator=(sead::SafeStringBase<char> const&);
rfindIndex(sead::SafeStringBase<char> const&) const;
cNullChar;
cLineBreakChar;
cEmptyString;

} } 
