#pragma once

namespace al { 

class VastGridMesh
{
public:
    VastGridMesh(char const*, al::ViewVastGridCullingArray const*, int, al::IUseGridMesh*);
    ~VastGridMesh();
    updateVisibleMeshTree(al::SceneCameraInfo const*);
    buildNodeList(int, al::MeshQuadtree*, al::QuadNode*);
    estimateNodeCoverage(int, sead::Vector3<float> const&, float) const;
    getCoverageCheck() const;
    drawMesh(agl::DrawContext*, agl::ShaderProgram const&, int, bool) const;
};

} 
