#pragma once

namespace agl { 

class DrawContext
{
public:
    DrawContext();
    setCommandBuffer(agl::DisplayList*);
    ~DrawContext();
    flushCommandBuffer();
    setBoundRenderBuffer(agl::RenderBuffer const*);
    barrierTexture(unsigned int);
    barrierShader(unsigned int);
    isTextureDirty(unsigned int, int) const;
    setTextureDirty(int);
    changeShaderMode(agl::ShaderMode, agl::ShaderOptimizeType);
    setCommandBufferTemporary();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
