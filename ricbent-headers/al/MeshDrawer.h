#pragma once

namespace al { 

class MeshDrawer
{
public:
    MeshDrawer(al::MeshDrawerInitArg const&);
    getShadingModelObj() const;
    ~MeshDrawer();
    operator<(al::MeshDrawer const&) const;
    operator>(al::MeshDrawer const&) const;
    setMeshDrawInfo(al::MeshDrawer::GRAPHICS_CTX_ACTIVATE_TYPE, al::MeshDrawer::TEXTURE_ACTIVATE_TYPE, al::MeshDrawer::MATERIAL_ACTIVATE_TYPE, al::MeshDrawer::SHADER_ACTIVATE_TYPE, al::ModelCtrl const*);
    createDisplayList(sead::Heap*, al::MeshDrawer::GRAPHICS_CTX_ACTIVATE_TYPE, al::MeshDrawer::TEXTURE_ACTIVATE_TYPE, al::MeshDrawer::MATERIAL_ACTIVATE_TYPE, al::MeshDrawer::SHADER_ACTIVATE_TYPE, al::ModelCtrl const*);
    draw(agl::DrawContext*, nn::g3d::ViewVolume const*, int, int, al::ModelAdditionalInfo*) const;
    drawDepth(agl::DrawContext*, nn::g3d::ViewVolume const*, int, int, bool) const;
    drawCulling(agl::DrawContext*, nn::g3d::ViewVolume const*, int, int) const;
    drawDepthShadow(agl::DrawContext*, nn::g3d::ViewVolume const*, int, int, int, bool) const;
    drawMask(agl::DrawContext*, int, int, bool) const;
    addMesh(nn::g3d::ModelObj const*, nn::g3d::ShapeObj const*, al::ModelCtrl*);
    removeMesh(nn::g3d::ModelObj const*, nn::g3d::ShapeObj const*);
};

} 
