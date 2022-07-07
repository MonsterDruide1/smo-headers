#pragma once

namespace nn { namespace g3d { namespace ResMaterialAnim {

PreBind(nn::g3d::ResModel const*);
BindCheck(nn::g3d::ResModel const*) const;
BindTexture(nn::g3d::TextureRef (*)(char const*, void*), void*);
ForceBindTexture(nn::g3d::TextureRef const&, char const*);
ReleaseTexture();
BakeCurve(void*, unsigned long);
ResetCurve();
Reset();

} } } 
