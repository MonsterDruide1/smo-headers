#pragma once

namespace agl { namespace lyr { 

class Renderer
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    Renderer();
    initialize(agl::lyr::Renderer::CreateArg const&, sead::Heap*, sead::Heap*);
    getDisplayName(int);
    ~Renderer();
    calc(bool);
    calcCommand(bool, unsigned int);
    isDisplayList_() const;
    postCalcCommand();
    calcGPU(bool) const;
    draw(agl::DrawContext*, int) const;
    setCallback(agl::lyr::Renderer::CallbackType, agl::lyr::DrawMethod*);
    removeDrawMethodByObject(void const*);
    removeDrawMethod(agl::lyr::DrawMethod const*);
    removeLayer(agl::lyr::Layer*);
    searchLayerIndex(agl::lyr::Layer const*) const;
    searchEmptyLayerIndexFromFront() const;
    searchEmptyLayerIndexFromBack() const;
    setFrameBufferClear(unsigned int, sead::Color4f const&, float, unsigned int, int);
    changeDebugCameraStateNext();
    changeDebugCameraState(agl::lyr::Renderer::DebugCameraState);
    resetDebugCamera();
    setDisplayControl(agl::lyr::Renderer::DisplayControl);
    initLayer_(agl::lyr::Layer*, int, sead::SafeStringBase<char> const&, int, sead::Heap*);
    lockLayerList_();
    unlockLayerList_();
    drawStatus(agl::lyr::RenderInfo const&) const;
    dumpDisplayListInfo() const;
    dumpRawDisplayList() const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    sInstance;
};

} } 
