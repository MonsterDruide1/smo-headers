#pragma once

class Coin2DCity
{
public:
    Coin2DCity(char const*, Coin2DCityDirector*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    startLight();
    endLight();
    exeWait();
    exeLight();
    exeGot();
    exeGotWait();
    getActorDimensionKeeper() const;
};
