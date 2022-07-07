#pragma once

namespace agl { namespace lyr { 

class Layer
{
public:
    Layer();
    ~Layer();
    initialize_(sead::Heap*);
    updateDebugInfo_(unsigned int);
    copyCurrentCameraToDebugCamera_();
    getDebugCameraAtDist() const;
    resetBoundDebugCameraAt();
    setBoundDebugCameraAt(sead::Vector3<float> const&);
    copyCurrentProjectionToDebugProjection_();
    pushBackDrawMethod(unsigned int, agl::lyr::DrawMethod*);
    pushBackDrawMethod(agl::lyr::DrawMethod*);
    removeDrawMethodByObject(void const*);
    removeDrawMethod(agl::lyr::DrawMethod const*);
    removeDrawMethod(unsigned int, agl::lyr::DrawMethod const*);
    clearDrawMethod();
    getRenderCamera() const;
    getRenderProjection() const;
    getLogicalFrameBuffer() const;
    setLastDisplayListSize(unsigned long) const;
    setEnable(bool);
    setVisible(bool);
    setDisplayType(int);
    calc_(sead::Controller const*, int, bool);
    postCalcCommand_();
    isRenderingEnabled() const;
    clearColor_(agl::lyr::RenderInfo const&) const;
    drawRenderStep_(agl::lyr::RenderInfo const&) const;
    drawDebugCamera(agl::DrawContext*) const;
    drawDebugInfo_(agl::lyr::RenderInfo const&) const;
    setDebugCameraAtDist(float);
    setDebugCameraTwist(float);
    getDebugCameraTwist();
    getDebugCameraPtr();
    setDebugNear(float);
    setDebugFar(float);
    setDebugFovyDeg(float);
    genMessage(sead::hostio::Context*);
    genMessageCamera(sead::hostio::Context*);
    genMessageProjection(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    listenPropertyEventCamera(sead::hostio::Reflexible*, sead::hostio::PropertyEvent const*);
    listenPropertyEventProjection(sead::hostio::Reflexible*, sead::hostio::PropertyEvent const*);
    listenNodeEvent(sead::hostio::NodeEvent const*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    initializeImpl(sead::Heap*);
    calcImpl();
    postCalcCommandImpl();
    preDrawImpl(agl::lyr::RenderInfo const&) const;
    preDrawRenderStepImpl(agl::lyr::RenderInfo const&) const;
    preDrawRenderStepMethodImpl(agl::lyr::RenderInfo const&, agl::lyr::DrawMethod const&) const;
    postDrawRenderStepMethodImpl(agl::lyr::RenderInfo const&, agl::lyr::DrawMethod const&) const;
    postDrawRenderStepImpl(agl::lyr::RenderInfo const&) const;
    postDrawImpl(agl::lyr::RenderInfo const&) const;
    isRenderStepGPUCalc(int) const;
    isRenderStepNoDependency(int) const;
    isForceInvisible() const;
    isForceDisableClear() const;
    calcJobWeight();
    sCameraIdentity;
    sProjectionIdentity;
};

} } 
