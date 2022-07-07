#pragma once

class SmallWanderBoss
{
public:
    SmallWanderBoss(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeFly();
    moveRailLocal();
    turnToPlayer();
    exeStop();
    exeHipDropFall();
    exeHipDropDown();
    exeAttack();
    exeAppearCoin();
};
