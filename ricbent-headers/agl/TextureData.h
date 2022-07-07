#pragma once

namespace agl { 

class TextureData
{
public:
    TextureData();
    initialize_(agl::TextureType, agl::TextureFormat, unsigned int, unsigned int, unsigned int, unsigned int, agl::TextureAttribute, agl::MultiSampleType, bool);
    initializeSize_(unsigned int, unsigned int, unsigned int);
    setMipLevelNum_(unsigned int, bool);
    getMinHeight_() const;
    getMinSlice_() const;
    getTextureFormatName() const;
    calcMipByteSize(unsigned int) const;
    isCompressedFormat() const;
    isRenderTargetCompressAvailable() const;
    isDepthFormat() const;
    hasStencil() const;
    invalidateCPUCache() const;
    flushCPUCache() const;
    copyToAll(agl::DrawContext*, agl::TextureData const*) const;
    copyTo_(agl::DrawContext*, agl::TextureData const*, int, int, int, int, bool) const;
    copyTo(agl::DrawContext*, agl::TextureData const*, int, int) const;
    copyTo(agl::DrawContext*, agl::TextureData const*, int, int, int, int) const;
    compressTo(agl::DrawContext*, agl::TextureData const*, int, int) const;
    compressTo(agl::DrawContext*, agl::TextureData const*, int, int, int, int) const;
    compressToHQ(agl::DrawContext*, agl::TextureData const*, int, int) const;
    compressToHQ(agl::DrawContext*, agl::TextureData const*, int, int, int, int) const;
    setDebugLabel(sead::SafeStringBase<char> const&);
    getDebugLabel() const;
    compressToAll(agl::DrawContext*, agl::TextureData const*) const;
    compressTo_(agl::DrawContext*, agl::TextureData::CompressToWork const&, bool) const;
    compressToAllHQ(agl::DrawContext*, agl::TextureData const*) const;
    compressToForce(agl::DrawContext*, agl::TextureData const*, int, int, int, int, int, int) const;
    generateMipMap(agl::DrawContext*) const;
    generateMipMapMinMax(agl::DrawContext*, bool) const;
    setImagePtr(agl::GPUMemVoidAddr, unsigned int);
    updateNVNtexture();
    shareImagePtr(agl::TextureData const&);
    setMipPtr(agl::GPUMemVoidAddr);
    setCompSel(agl::TextureCompSel, agl::TextureCompSel, agl::TextureCompSel, agl::TextureCompSel);
    setCompSelDefault();
    initializeFromNVNtexture(NVNtexture const&);
    initializeNVNtexture(NVNtexture*, agl::GPUMemVoidAddr) const;
    updateNVNtextureView(NVNtextureView const*);
    initializeNVNtextureBuilder(NVNtextureBuilder*) const;
    initializeGfxTexture(nn::gfx::TTexture<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
    forceChangeUNormToSRGB();
    forceChangeSRGBToUNorm();
    isSRGB() const;
    isUNorm() const;
    isEnableChangeToSRGB() const;
    isEnableChangeToUNorm() const;
    initializeCubeMapArray(agl::TextureFormat, unsigned int, unsigned int, unsigned int, unsigned int, agl::TextureAttribute);
};

} 
