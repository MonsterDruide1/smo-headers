#pragma once

class FishingFish
{
public:
    FishingFish(char const*);
    init(al::ActorInitInfo const&);
    movement();
    updateCollider();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startFishingUp(sead::Vector3<float> const&, sead::Vector3<float> const&, char const*);
    calcFishingPullRate() const;
    isEnableFishingUp() const;
    isFailureFishingUp() const;
    isValidAfterAppearDemoEvent() const;
    tryStartFishingUpWithEventDemo(sead::Vector3<float> const&, sead::Vector3<float> const&, char const*);
    cancelFishing();
    checkNeedMoveToBack() const;
    exeWait();
    exeMove();
    exeBrake();
    exeChase();
    exeTouch();
    exeTouchDummy();
    exeTouchAfter();
    exeFishingUpImmediatelyPrepare();
    exeRunaway();
    exeHitPullStart();
    exeHitPull();
    endHitPull();
    exeHitPullEnd();
    exeReset();
    exeResetAfterFishing();
    exeRevival();
};
