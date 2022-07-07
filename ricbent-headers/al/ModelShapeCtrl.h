#pragma once

namespace al { 

class ModelShapeCtrl
{
public:
    ModelShapeCtrl();
    init(nn::g3d::ModelObj*, nn::g3d::ShapeObj*, nn::g3d::MaterialObj*);
    updateSubMeshRange(nn::g3d::ViewVolume const&, nn::g3d::ShapeObj const&, int);
    isChangeDrawStatePrepassCulling() const;
    setCulledIndexBuffer(al::CulledIndexBuffer*);
    setLodLevel(int);
    addToDrawerCulling();
    removeFromDrawerCulling();
    tryClearPrepassCullingIndirectData();
};

} 
