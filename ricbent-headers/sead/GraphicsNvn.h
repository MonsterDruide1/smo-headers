#pragma once

namespace sead { 

class GraphicsNvn
{
public:
    GraphicsNvn(sead::GraphicsNvn::CreateArg const&);
    defaultNvnDebugCallback_(sead::GraphicsNvn::NvnDebugCallbackParam const&);
    initializeDrawLockContext(sead::Heap*);
    initializeImpl(sead::Heap*);
    getNewSamplerId();
    getNewTextureId();
    setDisplayBufferWindowCrop(int, int, int, int);
    getDisplayBufferWindowCrop(int*, int*, int*, int*) const;
    registerQueue(NVNqueue*);
    registerDefaultCommandBuffer(NVNcommandBuffer*);
    registerDisplayBufferNvn(sead::DisplayBufferNvn*);
    applyDeferredFinalizes();
    nvnDebugCallback(NVNdebugCallbackSource, NVNdebugCallbackType, int, NVNdebugCallbackSeverity, char const*, void*);
    convertGPUTimeStampToSystemTick(NVNcounterData const*);
    convertNvnDebugLevel(unsigned int);
    setViewportImpl(float, float, float, float);
    setScissorImpl(float, float, float, float);
    setDepthTestEnableImpl(bool);
    setDepthWriteEnableImpl(bool);
    setDepthFuncImpl(sead::Graphics::DepthFunc);
    setVBlankWaitIntervalImpl(unsigned int);
    setCullingModeImpl(sead::Graphics::CullingMode);
    setBlendEnableImpl(bool);
    setBlendEnableMRTImpl(unsigned int, bool);
    setBlendFactorImpl(sead::Graphics::BlendFactor, sead::Graphics::BlendFactor, sead::Graphics::BlendFactor, sead::Graphics::BlendFactor);
    setBlendFactorMRTImpl(unsigned int, sead::Graphics::BlendFactor, sead::Graphics::BlendFactor, sead::Graphics::BlendFactor, sead::Graphics::BlendFactor);
    setBlendEquationImpl(sead::Graphics::BlendEquation, sead::Graphics::BlendEquation);
    setBlendEquationMRTImpl(unsigned int, sead::Graphics::BlendEquation, sead::Graphics::BlendEquation);
    setBlendConstantColorImpl(sead::Color4f const&);
    waitForVBlankImpl();
    setColorMaskImpl(bool, bool, bool, bool);
    setColorMaskMRTImpl(unsigned int, bool, bool, bool, bool);
    setAlphaTestEnableImpl(bool);
    setAlphaTestFuncImpl(sead::Graphics::AlphaFunc, float);
    setStencilTestEnableImpl(bool);
    setStencilTestFuncImpl(sead::Graphics::StencilFunc, int, unsigned int);
    setStencilTestOpImpl(sead::Graphics::StencilOp, sead::Graphics::StencilOp, sead::Graphics::StencilOp);
    setPolygonModeImpl(sead::Graphics::PolygonMode, sead::Graphics::PolygonMode);
    setPolygonOffsetEnableImpl(bool, bool, bool);
    ~GraphicsNvn();
    sBaseTime;
};

} 
