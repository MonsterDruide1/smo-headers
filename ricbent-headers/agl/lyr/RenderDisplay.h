#pragma once

namespace agl { namespace lyr { 

class RenderDisplay
{
public:
    RenderDisplay();
    ~RenderDisplay();
    freeFrameBuffer();
    initialize(int, sead::SafeStringBase<char> const&, sead::Vector2<int> const&, sead::Vector2<int> const&, sead::LogicalFrameBuffer*, int, int, bool, sead::Heap*);
    resetFrameBufferSize_(sead::Vector2<float> const&);
    calc();
    copyScanOutBuffer_() const;
    allocFrameBuffer(agl::MultiSampleType, agl::lyr::RenderDisplay*, agl::TextureFormat, int, agl::TextureFormat, int, bool, bool);
    clear();
    pushBack(agl::lyr::Layer*);
    erase(agl::lyr::Layer*);
    pushBackDL_(agl::DrawContext*, agl::lyr::RenderDL*, agl::lyr::Layer const*) const;
    beginDraw_(agl::DrawContext*) const;
    bindAndClearRenderBuffer(agl::DrawContext*) const;
    drawLayerDirect_(agl::DrawContext*, agl::lyr::Layer const*, agl::lyr::FrameworkType) const;
    preDrawLayer_(agl::DrawContext*, agl::lyr::Layer const*, agl::lyr::FrameworkType) const;
    drawRenderStep_(agl::DrawContext*, agl::lyr::Layer const*, unsigned int, agl::lyr::FrameworkType, bool, int) const;
    postDrawLayer_(agl::DrawContext*, agl::lyr::Layer const*, agl::lyr::FrameworkType) const;
    calcLayerDL_(agl::DrawContext*, agl::lyr::Layer const*, int) const;
    calcSubLayerDL_(agl::DrawContext*, agl::lyr::Layer const*, int) const;
    endDraw_(agl::DrawContext*) const;
    calcGPU_(agl::DrawContext*, agl::lyr::Layer const*, int) const;
    draw(agl::DrawContext*) const;
    calcDL(sead::PtrArray<agl::lyr::LayerJob>*);
    sortDL() const;
    calcGPU(sead::PtrArray<agl::lyr::LayerJob>*) const;
    callDisplayList(agl::DrawContext*, bool) const;
    dumpDisplayListInfo() const;
    dumpRawDisplayList() const;
    destroyDisplayList() const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    listenNodeEvent(sead::hostio::NodeEvent const*);
};

} } 
