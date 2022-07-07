#pragma once

class BubbleLauncher
{
public:
    BubbleLauncher(char const*);
    init(al::ActorInitInfo const&);
    onSwitch();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeCatch();
    tryCancel();
    exeReady();
    controlCameraReady();
    calcEffectMtx();
    endReady();
    exeShoot();
    controlCameraShoot();
    control();
};
