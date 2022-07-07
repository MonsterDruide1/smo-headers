#pragma once

namespace al { 

class EffectLayoutDrawer
{
public:
    EffectLayoutDrawer(al::EffectSystem*, char const*, int, unsigned int);
    draw() const;
    drawEffect(agl::DrawContext*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float) const;
    execute();
};

} 
