#pragma once

class Imomu
{
public:
    Imomu(char const*);
    init(al::ActorInitInfo const&);
    control();
    tryResetHack(bool);
    updateCameraTarget();
    updateCollider();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endHack(bool);
    exeEnemy();
    exeHackMove();
    exeHackExpandSign();
    tryEndHackExpand(bool);
    exeHackExpand();
    updateExpandCore(bool*, bool*, bool*, float);
    exeHackExpandWait();
    exeHackExpandHold();
    exeHackEndExpandNoShrink();
    exeHackShrinkToBody();
    exeShrinkToHead();
    exeHackShrinkReaction();
    getVisibleBodyNum() const;
};
