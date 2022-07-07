#pragma once

class FixMapPartsForceSafetyPoint
{
public:
    FixMapPartsForceSafetyPoint(char const*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
