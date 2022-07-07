#pragma once

namespace al { 

class OccludedEffectDirector
{
public:
    OccludedEffectDirector(al::GraphicsSystemInfo*, int);
    clear();
    ~OccludedEffectDirector();
    findPresetIndexByName(char const*);
    createInfoByPresetName(char const*);
    movement();
    calcView(int, sead::Camera const*, al::Projection const*);
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&, agl::RenderTargetDepth const&) const;
};

} 
