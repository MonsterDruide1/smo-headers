#pragma once

namespace al { 

class DynamicMeshAttr
{
public:
    DynamicMeshAttr();
    clear();
    ~DynamicMeshAttr();
    setFetchShaderBuffer(void*, unsigned int);
    bind(nn::g3d::ResMaterial const*, nn::g3d::ResShape const*, al::DynamicMesh const*, nn::g3d::ResShadingModel const*, nn::g3d::ResShaderProgram const*);
    bind_(nn::g3d::ResVertex const*, al::DynamicMesh const*, sead::UnsafeArray<al::DynamicMeshAttr::Attribute, 16> const&, int);
    isSameVertexAttribute(al::DynamicMeshAttr const&) const;
    getAttributeNum() const;
    getAttributeLocation(int) const;
    getAttributeBufferIndex(int) const;
    getAttributeFormat(int) const;
    getAttributeOffset(int) const;
    isSameVertexBuffer(al::DynamicMeshAttr const&) const;
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

} 
