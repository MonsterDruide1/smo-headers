#pragma once

namespace al { 

class TemporalInterlace
{
public:
    TemporalInterlace(al::ShaderHolder*, int, int);
    ~TemporalInterlace();
    update();
    calcGpu(al::Projection const*, int);
    drawReprojection(agl::DrawContext*, agl::RenderBuffer const&, agl::TextureData const*, agl::TextureData const*) const;
    getCurrentFrame() const;
    getPrevFrame() const;
    getPrevPrevFrame() const;
};

} 
