#pragma once

class PackunFire
{
public:
    PackunFire(char const*);
    init(al::ActorInitInfo const&);
    killBySwitch();
    switchAppear();
    initAfterPlacement();
    control();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endCapture();
    exeStandby();
    exeWait();
    exeSearch();
    exeAttackSign();
    exeAttack();
    updateStickTurn();
    exeAttackHit();
    exeCapSearch();
    onCapSearchEnd();
    onChokeCapEnd();
    exeChoke();
    exeSwoon();
    exeVomit();
    exeSwallow();
    exeCaptureStart();
    exeCaptureHackStart();
    exeCaptureWait();
    exePressDown();
    exeBlowDown();
    exeReset();
    exeYoshiTongueEatBind();
};
