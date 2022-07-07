#pragma once

class Tank
{
public:
    Tank(char const*);
    init(al::ActorInitInfo const&);
    enableShoot();
    disableShoot();
    initAfterPlacement();
    appear();
    isExistAndNearRail();
    kill();
    control();
    die();
    calcAnim();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isMyBullet(al::HitSensor*);
    shootByPlayer(sead::Vector3<float> const&, float, int);
    isSwoon() const;
    appearCtrl();
    preInitHandleByMofumofu();
    appearAndDemoWait();
    endDemoWait();
    startShootByMofumofu();
    startBlowDownByMofumofu(al::HitSensor*);
    startRevive();
    startRevivePrepare();
    forceEndHackByMofumofu();
    setSubjectiveCameraLimitDegree(float, float);
    setSubjectiveCameraAimFollorRateV(float);
    isHacking() const;
    isRevivePrepare() const;
    isEnableStartAttack() const;
    exeWait();
    turn();
    exeAppear();
    exeMove();
    exeAttackSign();
    exeShoot();
    isEnableShoot();
    exeReset();
    exeReviveInsideScreenNoAutoRevive();
    exeReviveInsideScreen();
    exePressReaction();
    exePressDown();
    exeBlowDown();
    exeDamageCap();
    exeAttackHit();
    exeSwoon();
    exeHack();
    exeDemoWait();
    countAliveBullet() const;
};
