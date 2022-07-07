#pragma once

class Kuribo2D
{
public:
    Kuribo2D(char const*);
    init(al::ActorInitInfo const&);
    startWalk();
    reset();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    appearByGenerator(sead::Vector3<float> const&, sead::Vector3<float> const&);
    isWait() const;
    exeWait();
    exeFallAfterGenerate();
    exeWalk();
    exePressDown();
    exeBlowDown();
    getActorDimensionKeeper() const;
};
