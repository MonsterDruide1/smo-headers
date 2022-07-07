#pragma once

namespace al { 

class RadialBlurDirector
{
public:
    RadialBlurDirector();
    ~RadialBlurDirector();
    initialize(int, int, sead::Heap*);
    control();
    calcView(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    updateGPU();
    draw(agl::DrawContext*, int, agl::RenderBuffer const&) const;
    emitRadialBlur(sead::Vector3<float> const&, float, float, float, int, int, bool);
    emitRadialBlur(sead::Vector3<float> const&, sead::Vector3<float> const*, float, float, float, float, float, float, int, int, bool);
};

} 
