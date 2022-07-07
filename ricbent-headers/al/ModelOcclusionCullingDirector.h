#pragma once

namespace al { 

class ModelOcclusionCullingDirector
{
public:
    ModelOcclusionCullingDirector();
    ~ModelOcclusionCullingDirector();
    initialize(int, sead::Heap*);
    isEnable() const;
    addQuery(al::ModelOcclusionQuery*);
    removeQuery(al::ModelOcclusionQuery*);
    clearRequest();
    update();
    calc();
    updateViewGpu(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    draw(agl::DrawContext*, int) const;
};

} 
