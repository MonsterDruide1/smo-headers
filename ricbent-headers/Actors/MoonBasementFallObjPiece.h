#pragma once

class MoonBasementFallObjPiece
{
public:
    MoonBasementFallObjPiece(char const*);
    init(al::ActorInitInfo const&);
    appearScatter(float);
    kill();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeBound();
    exeRoll();
    appear();
};
