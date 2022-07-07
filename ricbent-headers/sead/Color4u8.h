#pragma once

namespace sead { namespace Color4u8 {

setf(float, float, float, float);
setLerp(sead::Color4u8 const&, sead::Color4u8 const&, float);
setGammaCollection(sead::Color4u8 const&, float);
lerp(sead::Color4u8 const&, sead::Color4u8 const&, float);
operator+=(sead::Color4u8 const&);
operator-=(sead::Color4u8 const&);
operator*=(sead::Color4u8 const&);
operator/=(sead::Color4u8 const&);
operator|=(sead::Color4u8 const&);
operator&=(sead::Color4u8 const&);
operator+=(unsigned char);
operator-=(unsigned char);
operator*=(float);
operator/=(float);
operator|=(unsigned char);
operator&=(unsigned char);
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
