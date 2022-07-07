#pragma once

class ExternalForceKeeper
{
public:
    ExternalForceKeeper();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    reset();
    calcForce(sead::Vector3<float>*) const;
};
