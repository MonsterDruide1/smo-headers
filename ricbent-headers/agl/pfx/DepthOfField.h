#pragma once

namespace agl { namespace pfx { 

class DepthOfField
{
public:
    DepthOfField();
    ~DepthOfField();
    initialize(int, sead::Heap*);
    initVertex_(sead::Heap*);
    initIndex_(sead::Heap*);
    initializeContext(agl::pfx::DepthOfField::Context*, sead::Heap*);
    assignShaderProgramAll_();
    allocBuffer(agl::DrawContext*, int, agl::RenderBuffer const&) const;
    allocBuffer(agl::DrawContext*, int, agl::TextureFormat, int, int) const;
    freeBuffer(int) const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, float, float) const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const&, bool, float, float) const;
    drawColorMipMap_(agl::DrawContext*, agl::pfx::DepthOfField::DrawArg const&) const;
    drawDepthMipMap_(agl::DrawContext*, agl::pfx::DepthOfField::DrawArg const&) const;
    drawDebugBlur_(agl::DrawContext*, agl::pfx::DepthOfField::DrawArg const&) const;
    drawCompose_(agl::DrawContext*, agl::pfx::DepthOfField::DrawArg const&) const;
    drawVignetting_(agl::DrawContext*, agl::pfx::DepthOfField::DrawArg const&) const;
    bindRenderBuffer_(agl::DrawContext*, agl::RenderBuffer&, int, int) const;
    drawKick_(agl::DrawContext*, agl::pfx::DepthOfField::DrawArg const&) const;
    uniformComposeParam_(agl::DrawContext*, agl::pfx::DepthOfField::DrawArg const&, agl::ShaderProgram const*) const;
    uniformVignettingParam_(agl::DrawContext*, agl::pfx::DepthOfField::DrawArg const&, agl::ShaderProgram const*) const;
    uniformExpandReduceParam_(agl::DrawContext*, agl::pfx::DepthOfField::DrawArg const&, agl::ShaderProgram const*) const;
    setIndirectTextureData(agl::TextureData const*);
    postRead_();
    postCopyParameter(int, agl::utl::IParameterObj const*, agl::utl::IParameterObj const*, float);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    tempVignettingPostRead_(int, agl::pfx::DepthOfField::TempVignetting const&);
};

} } 
