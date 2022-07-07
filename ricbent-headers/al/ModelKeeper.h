#pragma once

namespace al { 

class ModelKeeper
{
public:
    ModelKeeper();
    ~ModelKeeper();
    initResource(al::ActorResource const*);
    createMatAnimForProgram(int);
    getAnimResource() const;
    getModelResource() const;
    setDisplayRootJointMtxPtr(sead::Matrix34<float> const*);
    setModelLodCtrl(al::ModelLodCtrl*);
    setDitherAnimator(al::DitherAnimator*);
    initModel(int, al::GpuMemAllocator*, al::ModelShaderHolder*, al::ModelOcclusionCullingDirector*, al::ShadowDirector*, al::PrepassTriangleCulling*);
    show();
    hide();
    update();
    updateLast();
    calc(sead::Matrix34<float> const&, sead::Vector3<float> const&);
    getBaseMtx() const;
    getWorldMtxPtrByIndex(int) const;
};

} 
