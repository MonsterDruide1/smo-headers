#pragma once

namespace al { 

class JointSpringController
{
public:
    JointSpringController();
    setChildLocalPos(sead::Vector3<float> const&);
    setChildLocalMtxPtr(sead::Matrix34<float> const*);
    setStability(float);
    setFriction(float);
    setLimitDegree(float);
    setControlRate(float);
    addControlRate(float);
    subControlRate(float);
    setJointName(char const*);
    load(al::ByamlIter const&);
    reset();
    calcChildPos(sead::Vector3<float>*, sead::Matrix34<float> const*) const;
    canCompute(sead::Matrix34<float>*, sead::Vector3<float>*);
    calcJointCallback(int, sead::Matrix34<float>*);
    compute(sead::Matrix34<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    getCtrlTypeName() const;
};

} 
