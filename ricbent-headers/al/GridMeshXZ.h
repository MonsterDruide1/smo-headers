#pragma once

namespace al { 

class GridMeshXZ
{
public:
    getGridMeshType() const;
    calcVtxNum() const;
    calcMeshScaleLod(al::QuadNode const&, int) const;
    GridMeshXZ(char const*, int);
    procPattern(agl::GPUMemBlock<unsigned short>*);
    buildQuadMesh();
    finalize();
    makeInnerMeshIndex(agl::GPUMemBlock<unsigned short>*, int, sead::BoundBox2<int> const&);
    makeBoundaryMeshIndex(agl::GPUMemBlock<unsigned short>*, int, sead::BoundBox2<int> const&, sead::BoundBox2<int> const&);
    meshIndex2D(sead::BoundBox2<int> const&, int, int) const;
    selectMeshPattern(al::MeshQuadtree const&, al::QuadNode const&, float) const;
    activateVertexAttribute(agl::DrawContext*, int) const;
    drawTreeMesh(agl::DrawContext*, al::MeshQuadtree const&, al::QuadNode const&, float, int) const;
    drawArrayMesh(agl::DrawContext*, al::QuadNode const&, int, int, int, int, int) const;
    getGridNum() const;
    getLodNum() const;
    getIndexStream() const;
    getName() const;
};

} 
