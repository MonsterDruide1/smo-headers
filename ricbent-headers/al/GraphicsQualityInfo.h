#pragma once

namespace al { 

class GraphicsQualityInfo
{
public:
    GraphicsQualityInfo();
    applyProjectParam(al::GraphicsQualityParam const*);
    applyStageParam(al::GraphicsQualityParam const*);
    applyStageCommonParam(al::GraphicsQualityParam const*);
    applyPerfAreaParam(al::GpuPerfAreaParam const*);
    applyReduceParam(al::GraphicsQualityParam const*, int, int);
    getLppReduceBufferScale() const;
    calcRenderResolution(sead::Vector2<int>*, sead::Vector2<int> const&, al::ViewInfo const&) const;
    calcPseudoAAProjOffset(sead::Vector2<float>*, int, int) const;
};

} 
