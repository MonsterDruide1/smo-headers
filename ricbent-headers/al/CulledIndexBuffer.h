#pragma once

namespace al { 

class CulledIndexBuffer
{
public:
    finalize();
    doCommandBufferClearIndirectData(agl::DrawContext*) const;
    calcGpu();
    isEnableCompute() const;
    isEnableCullingGs() const;
    isEnableDrawState() const;
    isEnableDraw() const;
    isDrawStateChange() const;
    isInListHide() const;
    isInListShow() const;
    CulledIndexBuffer(al::CulledIndexCreateArg const&);
    clearAllIndexPrimitiveRestart();
    setLodLevel(int);
    clearIndirectData();
    show();
    hide();
    prepareCulling(agl::DrawContext*) const;
    prepareDrawCullingSubMesh(agl::DrawContext*, int) const;
    drawElement(agl::DrawContext*) const;
    drawElementIndirect(agl::DrawContext*) const;
};

} 
