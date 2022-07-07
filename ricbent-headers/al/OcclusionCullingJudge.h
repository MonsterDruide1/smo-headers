#pragma once

namespace al { 

class OcclusionCullingJudge
{
public:
    OcclusionCullingJudge(al::GraphicsSystemInfo*);
    ~OcclusionCullingJudge();
    draw(agl::DrawContext*, agl::TextureSampler const*, float, float) const;
    update();
    getDepth(sead::Vector2<float> const&, al::ViewInfo const&) const;
};

} 
