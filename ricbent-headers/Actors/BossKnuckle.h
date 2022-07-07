#pragma once

class BossKnuckle
{
public:
    BossKnuckle(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    appear();
    isFirstDemo() const;
    isEnableSkipDemo() const;
    skipDemo();
    finishStartDemo(bool);
    exeWait();
    turnToPlayer();
    updateBodySyncPos();
    syncHandIfWaiting();
    checkHackAndSetNerve();
    exeRelay();
    updatePlayerDemo();
    exeAttackBeatStart();
    exeAttackBeat();
    genMummyAgainstPlayer(int);
    relayNextNerve(al::Nerve const*, int, bool);
    exeAttackHandFall();
    countAliveIce();
    exeAttackHandFallFirstPainDemo();
    exeAttackSideStamp();
    exeRunAwayStart();
    exeRunAway();
    breakAirIce();
    startPlayerDemo();
    exeDamage();
    exeRestoreHand();
    exeAttackRocketPunch();
    genMummy(al::LiveActor const*, int);
    exeReturn();
    exeBeforeBattleStart();
    exeBeforeDemoBattleStartWait();
    exeDemoBattleStart();
    addDemoActorAll();
    exeDemoBattleEnd();
    exeAfterBattleEnd();
    breakAllIce();
};
