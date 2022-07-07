#pragma once

class Barrel2D
{
public:
    Barrel2D(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearByGenerator(sead::Vector3<float> const&, sead::Quat<float> const&, float);
    startMove();
    exeWait();
    exeMove();
    getActorDimensionKeeper() const;
};
