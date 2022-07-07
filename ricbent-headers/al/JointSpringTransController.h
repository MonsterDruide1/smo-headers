#pragma once

namespace al { 

class JointSpringTransController
{
public:
    JointSpringTransController();
    setChildLocalPos(sead::Vector3<float> const&);
    setChildLocalMtxPtr(sead::Matrix34<float> const*);
    setStability(float);
    setFriction(float);
    setLimitMinMax(sead::Vector3<float> const&, sead::Vector3<float> const&);
    setControlRate(float);
    addControlRate(float);
    subControlRate(float);
    setJointName(char const*);
    reset();
    calcChildPos(sead::Vector3<float>*, sead::Matrix34<float> const*) const;
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
