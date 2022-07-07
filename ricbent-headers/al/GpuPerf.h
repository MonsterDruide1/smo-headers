#pragma once

namespace al { 

class GpuPerf
{
public:
    GpuPerf();
    beginPerf(agl::DrawContext*);
    endPerf(agl::DrawContext*);
    update();
    drawResult(agl::DrawContext*, sead::FrameBuffer const*) const;
};

} 
