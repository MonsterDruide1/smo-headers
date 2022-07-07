#pragma once

class RailCollision
{
public:
    RailCollision(char const*);
    init(al::ActorInitInfo const&);
    appendVertexUnit(bool);
    onAppear();
    offAppear();
    startClipped();
    endClipped();
    control();
    appear();
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeStandby();
    tryEmitEffect();
    updateIvyEffect();
    moveAndCreate();
    updateCollision();
    exeMove();
};
