#pragma once

namespace al { namespace Parameter<sead::FixedSafeString<256> > {

Parameter(sead::FixedSafeString<256> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, al::ParameterObj*, bool);
ptr() const;
ptr();
size() const;
getParamTypeStr() const;
getParamType() const;

} } 
