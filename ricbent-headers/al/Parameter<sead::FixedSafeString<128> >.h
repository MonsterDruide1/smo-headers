#pragma once

namespace al { namespace Parameter<sead::FixedSafeString<128> > {

Parameter(sead::FixedSafeString<128> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, al::ParameterObj*, bool);
ptr() const;
ptr();
size() const;
getParamTypeStr() const;
getParamType() const;

} } 
