#pragma once

namespace al { 

class SubMeshRangeArray
{
public:
    SubMeshRangeArray(nn::g3d::ShapeObj const&);
    getSubMeshRange(int) const;
    getBufferSize() const;
    updateSubMeshRange(nn::g3d::ViewVolume const&, nn::g3d::ShapeObj const&, int);
    drawShape(agl::DrawContext*, nn::g3d::ShapeObj const&) const;
    drawShapePrepareCulling(agl::DrawContext*, nn::g3d::ShapeObj const&, al::CulledIndexBuffer const&) const;
    countSubMeshRangeNum(int) const;
    calcIndexCountAllSubMesh(nn::g3d::ShapeObj const&, int) const;
};

} 
