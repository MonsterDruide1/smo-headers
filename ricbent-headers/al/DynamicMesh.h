#pragma once

namespace al { 

class DynamicMesh
{
public:
    DynamicMesh(unsigned int, nn::g3d::ResMaterial const*, nn::g3d::ResShadingModel const*, nn::g3d::ResShaderProgram const*);
    ~DynamicMesh();
    getVertexBuffer() const;
    getVertexBufferStride() const;
    getVertexBufferSize() const;
    getFormat(char const*) const;
    getOffset(char const*) const;
    begin();
    normal(sead::Vector3<float> const&);
    color(sead::Color4f const&);
    texCoord(sead::Vector2<float> const&, int);
    tangent(sead::Vector4<float> const&);
    weight(sead::Vector4<float> const&);
    skinId(sead::Vector4<unsigned int> const&);
    vertex(sead::Vector3<float> const&);
    end();
    beginModify(al::DynamicMesh*);
    normal(unsigned int, sead::Vector3<float> const&);
    color(unsigned int, sead::Color4f const&);
    texCoord(unsigned int, sead::Vector2<float> const&, int);
    tangent(unsigned int, sead::Vector4<float> const&);
    weight(unsigned int, sead::Vector4<float> const&);
    skinId(unsigned int, sead::Vector4<unsigned int> const&);
    vertex(unsigned int, sead::Vector3<float> const&);
    endModify();
    draw(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
};

} 
