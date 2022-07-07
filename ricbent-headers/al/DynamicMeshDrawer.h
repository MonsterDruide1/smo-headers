#pragma once

namespace al { 

class DynamicMeshDrawer
{
public:
    DynamicMeshDrawer(char const*, agl::DrawContext*, nn::g3d::ModelObj const*, nn::g3d::ShapeObj const*, al::ModelShader const*, int, int, int, al::DynamicMeshDrawer const*);
    getShadingModelObj() const;
    ~DynamicMeshDrawer();
    initForDepthShadow();
    clearDepthShadowFlag();
    preDrawToDepthShadow(al::DepthShadowDrawer*);
    setBoundingRadius(float);
    begin();
    normal(sead::Vector3<float> const&);
    color(sead::Color4f const&);
    texCoord(sead::Vector2<float> const&, int);
    tangent(sead::Vector4<float> const&);
    weight(sead::Vector4<float> const&);
    skinId(sead::Vector4<unsigned int> const&);
    vertex(sead::Vector3<float> const&);
    end();
    beginModify();
    normal(unsigned int, sead::Vector3<float> const&);
    color(unsigned int, sead::Color4f const&);
    texCoord(unsigned int, sead::Vector2<float> const&, int);
    tangent(unsigned int, sead::Vector4<float> const&);
    weight(unsigned int, sead::Vector4<float> const&);
    skinId(unsigned int, sead::Vector4<unsigned int> const&);
    vertex(unsigned int, sead::Vector3<float> const&);
    endModify();
    createDisplayList(agl::GPUMemAddr<unsigned char>*, al::DynamicMeshDrawer::GRAPHICS_CTX_ACTIVATE_TYPE, al::DynamicMeshDrawer::TEXTURE_ACTIVATE_TYPE, al::DynamicMeshDrawer::MATERIAL_ACTIVATE_TYPE, al::ModelCtrl const*, bool, bool);
    draw(nn::g3d::ViewVolume const*, int, int, al::ModelAdditionalInfo*) const;
    drawDepthShadow(nn::g3d::ViewVolume const*, int, int, int) const;
    isExistDrawMesh() const;
    addMesh(nn::g3d::ModelObj const*, nn::g3d::ShapeObj const*, al::ModelCtrl*);
    removeMesh(nn::g3d::ModelObj const*, nn::g3d::ShapeObj const*);
};

} 
