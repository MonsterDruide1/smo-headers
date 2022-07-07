#pragma once

namespace al { 

class AnimScaleController
{
public:
    AnimScaleController(al::AnimScaleParam const*);
    setAnimScaleParam(al::AnimScaleParam const*);
    startAnim();
    startVibration();
    startHitReaction();
    startAndSetScaleY(float);
    startAndSetScaleAnsVelocityY(float, float);
    startAndSetScaleVelocityY(float);
    startAndAddScaleVelocityY(float);
    startCrush();
    stopAnim();
    stopAndReset();
    resetScale();
    stopAndSetScale(sead::Vector3<float> const&);
    setScaleVelocityY(float);
    addScaleVelocityY(float);
    exeStop();
    exeAnim();
    updateScale(float, float);
    tryStop();
    exeVibration();
    exeHitReaction();
    exeCrush();
    isHitReaction(int) const;
    setOriginalScale(sead::Vector3<float> const&);
    update();
    ~AnimScaleController();
};

} 
