#pragma once

namespace al { 

class EffectEmitter
{
public:
    EffectEmitter(al::EffectSystemInfo const*, al::EffectResourceInfo*, int);
    initMtxPtr(al::JointMtxPtr);
    updateMtxPtr(al::JointMtxPtr);
    createEmitter(al::JointMtxPtr const*, sead::Vector3<float> const*, int, int, unsigned long);
    tryDeleteEmitter(bool);
    tryDeleteHandle(sead::ptcl::Handle*, bool);
    setStopCalcAndDraw(bool);
    isActive() const;
    isEnableEmit() const;
    isFirstFrame() const;
    resetFirstFrame();
};

} 
