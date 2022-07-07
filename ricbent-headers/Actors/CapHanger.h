#pragma once

class CapHanger
{
public:
    CapHanger(char const*, bool);
    init(al::ActorInitInfo const&);
    initItem(int, int, al::ActorInitInfo const&);
    switchOn();
    switchOff();
    switchKill();
    initAfterPlacement();
    kill();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeKeep();
    exeRelease();
    isKeep(int) const;
    setPeachCastleCap(sead::Vector3<float> const&);
};
