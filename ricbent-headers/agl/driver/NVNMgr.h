#pragma once

namespace agl { namespace driver { 

class NVNMgr
{
public:
    createInstance(sead::Heap*);
    NVNMgr();
    debugCallback_(sead::GraphicsNvn::NvnDebugCallbackParam const&);
    ~NVNMgr();
    initialize(sead::Heap*, sead::Heap*);
    registerSampler(NVNsampler const*, char const*);
    compareSamplerKey_(agl::driver::NVNMgr::SamplerKey const*, unsigned short const*);
    isEqual(NVNsampler const&, NVNsampler const&);
    registerSampler_(int, NVNsampler const*, unsigned int);
    compareSamplerKey_(agl::driver::NVNMgr::SamplerKey const*, agl::driver::NVNMgr::SamplerKey const*);
    countupSampler(unsigned int);
    releaseSampler(unsigned int);
    isEqual(unsigned int, NVNsampler const&) const;
    isEqual(NVNtexture const&, NVNtexture const&);
    registerTexture(NVNtexture const*, NVNtextureView const*, char const*);
    registerTexture_(int, NVNtexture const*, NVNtextureView const*, char const*);
    countupTexture(unsigned int);
    releaseTexture(unsigned int);
    offDirtyTextureCompressTexture_(unsigned int);
    waitDrawDone(agl::DrawContext*) const;
    clearCompressedFrameBufferColor(agl::DrawContext*, agl::TextureData const&);
    clearCompressedFrameBufferDepth(agl::DrawContext*, agl::TextureData const&);
    getNVNshaderStage(agl::ShaderType);
    getTextureFlags(bool, bool, NVNformat) const;
    toTile(agl::TextureData*);
    toTile(agl::TextureData*, void const*);
    toLinearSync(agl::GPUMemVoidAddr, agl::TextureData const&);
    setMemoryPoolSettingTexture(sead::BitFlag<unsigned int>*) const;
    enableTiledCaching(agl::DrawContext*, unsigned int, unsigned int) const;
    disableTiledCaching(agl::DrawContext*) const;
    beginTiledCachingDebug(agl::DrawContext*) const;
    endTiledCachingDebug(agl::DrawContext*) const;
    countDown(int);
    dampRegisteredTextureList() const;
    nvnMemoryPoolInitialize(NVNmemoryPool*, NVNmemoryPoolBuilder const*);
    nvnCommandBufferBindTexture(agl::DrawContext*, unsigned long, agl::ShaderLocation const&, int);
    nvnCommandBufferBindImage(agl::DrawContext*, unsigned long, agl::ShaderLocation const&, int);
    invalidateGPUCacheColor(agl::DrawContext*, int) const;
    invalidateGPUCacheDepth(agl::DrawContext*, int) const;
    nvnCommandBufferBarrier(agl::DrawContext*, agl::driver::NVNMgr::Barrier);
    nvnCommandBufferBarrier_Shader(agl::DrawContext*, bool);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
