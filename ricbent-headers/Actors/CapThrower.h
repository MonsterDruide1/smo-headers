#pragma once

class CapThrower
{
public:
    CapThrower(char const*);
    init(al::ActorInitInfo const&);
    startBattleStartDemo();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appear();
    control();
    kill();
    isValidCamera() const;
    exeBeforeStartDemo();
    exeBattleStartDemo();
    exeWalk();
    turnHeadToPlayer();
    exeCapThrow();
    exeDamage();
    exeInvincibleAttack();
    resetHead();
    exeBattleEndDemo();
    isNeedStartTowerCamera();
};
