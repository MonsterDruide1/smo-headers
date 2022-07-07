#pragma once

namespace sead { namespace Color4f {

setLerp(sead::Color4f const&, sead::Color4f const&, float);
setGammaCollection(sead::Color4f const&, float);
lerp(sead::Color4f const&, sead::Color4f const&, float);
operator+=(sead::Color4f const&);
operator-=(sead::Color4f const&);
operator*=(sead::Color4f const&);
operator/=(sead::Color4f const&);
operator+=(float);
operator-=(float);
operator*=(float);
operator/=(float);
adjustOverflow();
cElementMax;
cElementMin;
cBlack;
cGray;
cWhite;
cRed;
cGreen;
cBlue;
cYellow;
cMagenta;
cCyan;

} } 
