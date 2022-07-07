#pragma once

class KoopaFireBeamGround
{
public:
    KoopaFireBeamGround(char const*);
    init(al::ActorInitInfo const&);
    appearSign();
    appear();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeAppearSign();
    exeWait();
};
