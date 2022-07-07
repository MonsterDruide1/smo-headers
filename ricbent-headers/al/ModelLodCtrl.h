#pragma once

namespace al { 

class ModelLodCtrl
{
public:
    ModelLodCtrl(al::IUseCamera*, sead::Vector3<float> const*, sead::Matrix34<float> const*, sead::Vector3<float> const*, sead::BoundBox3<float> const&, int);
    init(al::ByamlIter const&);
    isValidate() const;
    isEnableMaterialLod() const;
    getModelLevel() const;
    getModelLevelNoClamp() const;
    getShadowLevel() const;
    getMaterialLevel() const;
    setDistanceScale(float);
    update();
};

} 
