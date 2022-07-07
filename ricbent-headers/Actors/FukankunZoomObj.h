#pragma once

class FukankunZoomObj
{
public:
    FukankunZoomObj(char const*);
    init(al::ActorInitInfo const&);
    onAppear();
    onKill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
};
