#pragma once

namespace agl { namespace lyr { 

class RenderInfo
{
public:
    RenderInfo(agl::DrawContext*, int, agl::lyr::FrameworkType, agl::RenderBuffer const*, bool, agl::lyr::Layer const*);
    RenderInfo(agl::DrawContext*, int, agl::RenderBuffer const*);
    getFrameBuffer() const;
    bindFrameBufferAndApplyViewport(agl::DrawContext*) const;
    setUpPrimitiveRenderer() const;
};

} } 
