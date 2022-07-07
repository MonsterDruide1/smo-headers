#pragma once

namespace al { 

class ConveyerStep
{
public:
    ConveyerStep(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setHost(al::LiveActor*);
    setConveyerKeyKeeper(al::ConveyerKeyKeeper const*, float);
    setTransByCoord(float, bool);
    setTransByCoord(float, bool, bool);
    setTransAndResetByCoord(float);
    exeWait();
};

} 
