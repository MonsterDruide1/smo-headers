#pragma once

class Mummy
{
public:
    Mummy(char const*);
    init(al::ActorInitInfo const&);
    startSleep();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isHide();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    setKnuckleMode();
    appearWithTrans(sead::Vector3<float> const&);
    setupEffect();
    appearByTreasureBox(sead::Vector3<float> const&);
    startWalkByTreasureBox();
    sleep();
    exeSleepShineStop();
    exeSleepShine();
    exeSleep();
    exeWait();
    exeAppear();
    exeAppearAir();
    exeWalkStart();
    walk();
    exeWalk();
    isHideByTimeLimit() const;
    exeHeadLost();
    exeHalfReaction();
    exeHideStart();
    exeHide();
    exeBlowDown();
};
