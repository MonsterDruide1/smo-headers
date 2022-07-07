#pragma once

class MotorcycleParkingLot
{
public:
    MotorcycleParkingLot(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
