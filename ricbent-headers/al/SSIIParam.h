#pragma once

namespace al { namespace SSIIParam {

init();
operator==(al::SSIIParam const&) const;
operator=(al::SSIIParam const&);
interp(al::SSIIParam const&, al::SSIIParam const&, float);
isEnableDiffuse() const;
isEnableReflection() const;

} } 
