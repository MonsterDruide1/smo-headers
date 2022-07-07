#pragma once

class GrowFlowerStem
{
public:
    GrowFlowerStem(char const*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryStartActionReaction();
    tryStartActionWait();
};
