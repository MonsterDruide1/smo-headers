#pragma once

class Megane
{
public:
    Megane(char const*);
    init(al::ActorInitInfo const&);
    notifyKillSwitch();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isNerveDieOrRebirth() const;
    isNormalNerveWithWaitHack() const;
    isNormalNerveWithoutWaitHack() const;
    tryReceiveMsgKillByShineGet(al::SensorMsg const*);
    prepareHack(al::HitSensor*, al::HitSensor*);
    endCameraSubjective();
    isHack() const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    isEnableTrample(al::HitSensor*, al::HitSensor*) const;
    updateCollider();
    exeWait();
    updateMovement();
    tryShiftFall();
    exeFind();
    exeRunAway();
    updateRunAwayDirection();
    exeFall();
    exeLand();
    shiftWaitOrRunAway();
    exeTrampled();
    exeWaitHack();
    exeHackStart();
    exeHack();
    isTriggerStare() const;
    isTriggerSubjective() const;
    exeHackSlow();
    exeHackSubjective();
    startCameraSubjective();
    faceToCameraFront();
    tryToggleSpectaclesNerve();
    shiftHackNerveOnGround();
    exeHackFall();
    exeHackLand();
    exeDie();
    exeRebirth();
    exeAppear();
    putOnSpectaclesForce();
    exeSpectaclesOff();
    exeSpectaclesOn();
    isWearingGlasses() const;
    control();
    updateDither();
    recordWallNormal();
};
