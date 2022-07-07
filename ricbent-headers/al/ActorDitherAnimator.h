#pragma once

namespace al { 

class ActorDitherAnimator
{
public:
    tryCreate(al::LiveActor*, al::Resource const*, char const*);
    loadParam(al::ByamlIter const&);
    ActorDitherAnimator(al::LiveActor*);
    initSphereByProgram(float, bool);
    setOneTimeCtrl();
    initSubJudgeTableByProgram(int);
    initSubJudgeBoundingBoxByProgram(char const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
    update();
    reset();
    getDitherAlpha() const;
    calcJudgeDistance() const;
    getJudgeDistanceCalculator() const;
    setClippingJudgeDistanceParam(char const*);
    getNearClipStartDistance() const;
    getNearClipEndDistance() const;
    resetClippingJudgeDistanceParam();
    setClippingJudgeSphereRadius(float);
    setClippingJudgeBoundingBox(sead::Vector3<float> const&);
    setClippingJudgeLocalOffset(sead::Vector3<float> const&);
    stopAutoCtrl();
    restartAutoCtrl();
    validateDitherAnim();
    invalidateDitherAnim();
    exeAuto();
    exeShowStart();
    exeShow();
    exeHideStart();
    exeHide();
    exeStop();
    exeValidateChange();
    exeInvalidateChange();
    getJudgeDistanceCalculatorHolder() const;
    ~ActorDitherAnimator();
    isValidNearClip() const;
};

} 
