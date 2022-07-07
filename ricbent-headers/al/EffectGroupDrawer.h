#pragma once

namespace al { 

class EffectGroupDrawer
{
public:
    EffectGroupDrawer(al::EffectSystem*, char const*, int, bool, bool, bool);
    execute();
    drawEffectWithRenderPathAndCamPos(agl::DrawContext*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, sead::Vector3<float> const&, float, float, float, unsigned int);
    drawEffectWithRenderPath(agl::DrawContext*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float, unsigned int);
    calcShadowClipVolume(agl::sdw::DepthShadow*, unsigned int);
};

} 
