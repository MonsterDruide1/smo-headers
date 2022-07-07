#pragma once

class Stacker
{
public:
    Stacker(char const*, MultiGateKeeperWatcher*);
    init(al::ActorInitInfo const&);
    startBattleStartDemo();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    blowCapOnHead(sead::Vector3<float> const&, sead::Vector3<float> const&);
    control();
    kill();
    calcAnim();
    isAlreadyDead() const;
    attackStartCap();
    attackEndCap();
    updateAnimFrameCapOnHead();
    restStartCap();
    restEndCap();
    updateCapOnHead();
    blowAllCapOnHead();
    exeBeforeStartDemo();
    exeDemoBattleStart();
    resetCapOnHead();
    exeNormalAttack();
    exePanic();
    exeDamage();
    exeInvincibleAttack();
    exeReset();
    exeDemoBattleEnd();
};
