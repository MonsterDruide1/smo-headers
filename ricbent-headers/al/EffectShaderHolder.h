#pragma once

namespace al { 

class EffectShaderHolder
{
public:
    EffectShaderHolder(al::PtclSystem*, agl::DrawContext*, al::EffectEnvParam*);
    setGraphicsSystemInfo(al::GraphicsSystemInfo const*);
    swapUbo();
    updateShaderParamForCompute();
    updateShaderParam(sead::Matrix34<float> const&);
    bindCustomShaderUboForCompute(agl::DrawContext*);
    bindCustomShaderUbo(agl::DrawContext*);
    updateLight();
    setupTextureColor(agl::TextureData const*);
    setupTextureDepth(agl::TextureData const*);
    setupTextureLight(agl::TextureData const*);
    setupTextureExposure(agl::TextureData const*);
    setupTextureProg0(agl::TextureData const*);
    getTextureMaterialLight(int) const;
    getTextureNoise(int) const;
};

} 
