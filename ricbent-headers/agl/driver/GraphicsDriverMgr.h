#pragma once

namespace agl { namespace driver { 

class GraphicsDriverMgr
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    GraphicsDriverMgr();
    ~GraphicsDriverMgr();
    initialize_(sead::Heap*);
    getDefaultCommandBuffer();
    waitDrawDone() const;
    setPointLimits(agl::DrawContext*, float, float) const;
    setPointSize(agl::DrawContext*, float) const;
    setLineWidth(agl::DrawContext*, float) const;
    setPrimitiveRestartIndex(agl::DrawContext*, agl::PrimitiveRestartIndex) const;
    setDepthClamp(agl::DrawContext*, bool) const;
    setPolygonOffset(agl::DrawContext*, float, float) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    dumpInfo() const;
    waitDrawDone(agl::DrawContext*) const;
    sInstance;
};

} } 
