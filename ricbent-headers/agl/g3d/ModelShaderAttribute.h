#pragma once

namespace agl { namespace g3d { 

class ModelShaderAttribute
{
public:
    ModelShaderAttribute();
    calcFetchShaderBufferSize(int);
    clear();
    ModelShaderAttribute(int);
    ~ModelShaderAttribute();
    setFetchShaderBuffer(void*, unsigned long);
    bind(nn::g3d::ResMaterial const*, nn::g3d::ResShape const*, nn::g3d::ResShadingModel const*, nn::g3d::ResShaderProgram const*);
    bind_(nn::g3d::ResVertex const*, sead::UnsafeArray<agl::g3d::ModelShaderAttribute::Attribute, 16> const&, int);
    isSameVertexAttribute(agl::g3d::ModelShaderAttribute const&) const;
    getAttributeNum() const;
    getAttributeLocation(int) const;
    getAttributeBufferIndex(int) const;
    getAttributeFormat(int) const;
    getAttributeOffset(int) const;
    isSameVertexBuffer(agl::g3d::ModelShaderAttribute const&) const;
    setVertexBuffer(nn::gfx::TBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const*, int, int, int);
    activateVertexAttribute(agl::DrawContext*) const;
    activateVertexBuffer(agl::DrawContext*) const;
    searchAttributeIndex(int) const;
    getVertexBufferStride(int) const;
    getVertexBufferSize(int) const;
    getFetchShaderBufferSize() const;
    getFetchShaderBuffer();
    getFetchShaderBuffer() const;
    flushVertexBuffer();
};

} } 
