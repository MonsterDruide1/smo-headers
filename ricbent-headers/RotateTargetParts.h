#pragma once

class RotateTargetParts
{
public:
    RotateTargetParts(RotateTarget const*);
    makeActorAlive();
    endClipped();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
