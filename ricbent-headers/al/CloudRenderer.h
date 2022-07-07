#pragma once

namespace al { 

class CloudRenderer
{
public:
    CloudRenderer(al::GraphicsSystemInfo*, sead::Random*);
    ~CloudRenderer();
    calcGpu(al::GraphicsCalcGpuInfo const&);
    draw(agl::DrawContext*, int, al::HdrEncode const*, al::SimpleModelEnv const*, int) const;
    drawEtmDist(agl::DrawContext*) const;
    drawEtm(agl::DrawContext*) const;
};

} 
