#pragma once

namespace al { 

class PeripheryRendering
{
public:
    PeripheryRendering(al::GraphicsSystemInfo*);
    ~PeripheryRendering();
    drawReducedPeripheryZOnly(agl::DrawContext*, al::RenderVariables const*) const;
    drawReconstructPeriphery(agl::DrawContext*, al::RenderVariables const*) const;
};

} 
