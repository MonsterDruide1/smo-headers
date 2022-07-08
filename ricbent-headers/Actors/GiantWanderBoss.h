#pragma once

class GiantWanderBoss
{
public:
    GiantWanderBoss(char const*);
    init(al::ActorInitInfo const&);
    switchOn();
    initAfterPlacement();
    updateCorkInfo();
    calcOnCorkNum() const;
    isOnSwitchAll() const;
    startBattle(bool);
    setMagmaOn();
    kill();
    control();
    isActiveBattle() const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    isHitMagma(al::HitSensor*, al::HitSensor*) const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endAllRangeAttack();
    updateCollider();
    isFirstDemo() const;
    skipDemo();
    endDemo();
    getBulletMtx() const;
    hideAllMine();
    resetHideAllMine();
    killAttachedMine();
    addDemoActorAllMine();
    addDemoActorAllCork();
    killAllWeapon();
    calcCorkIndex(WaterLauncherCork const*) const;
    updateSwitchSave();
    getSwitchForCageShine(int) const;
    startDemoWorldEnter();
    exeStopBeforeBattle();
    exeRequestDemoBeforeBattle();
    exeOnGlass();
    exeDemoBattleStart();
    exeDemoBattleStartWorldEnter();
    exeDemoBattleStartLevel2();
    exeWaitDemoBattleEnd();
    exeDemoBattleEnd();
    exeDemoBattleEndCameraDemo();
    exeDemoFade();
    exeDemoFadeWait();
    exeDemoFadeOpen();
    exeFlyFirstRail();
    updateRumble();
    turnToPlayer(bool);
    updateRail();
    getCurrentRailKeeper() const;
    tryShot(int);
    exeFly();
    exeFlyFast();
    changeFly();
    exeAttack();
    exeAttackAndEscape();
    exeShotMineSpecialBefore();
    exeShotMineSpecialStart();
    exeShotMineSpecial();
    exeAttackAllRangeStart();
    turnToHorizon();
    exeAttackAllRangeLoop();
    startAllRangeAttack();
    endAttackAllRangeLoop();
    exeAttackAllRangeEnd();
    exeStopTrample();
    exeEscapeSign();
    exeDamageStop();
    exeDamageStopInEscape();
    exeHipDropFall();
    setCollisionShapeSmall();
    exeHipDropDown();
    exeGoToEscapeRailStart();
    setCollisionShapeNormal();
    exeGoToEscapeRail();
    exeEscapeRailStart();
    exeEscapeRail();
    tryEscapeCancel();
    exeEscapeRailAttack();
    exeEscapeCancelStart();
    exeEscapeCancel();
    exeEscapeInvincibleEnd();
    exeAngry();
    getRailRider() const;
    calcMagmaPos(sead::Vector3<float>*) const;
    getSceneObjName() const;
    isEnableSkipDemo() const;
    getPlayerCollider() const;
    ~GiantWanderBoss();
};