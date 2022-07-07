#pragma once

class KoopaCapPlayer
{
public:
    KoopaCapPlayer(char const*);
    init(al::ActorInitInfo const&);
    startHideChase();
    appear();
    kill();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endEquipAndKill();
    isPlayingCatchDemo() const;
    isPlayerBinding() const;
    onFinish();
    offFinish();
    endEquipAndBlowDown();
    endEquipAndBlowDownWithoutHitReaction();
    exeHideChase();
    exeCatchPrepare();
    exeCatch();
    exeStart();
    exeWait();
    exeWaitBubble();
    exePunchStart();
    exePunchWait();
    exePunch();
    endPunch();
    exePunchEnd();
    exePunchFinishStart();
    exePunchFinish();
    exePunchFinishWait();
    exePunchFinishEnd();
    exeDamage();
    exeBlowDown();
    endBlowDown();
};
