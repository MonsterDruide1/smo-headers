#pragma once

namespace al { 

class WheelMovement
{
public:
    WheelMovement(al::LiveActor*, al::ActorInitInfo const&);
    receiveMsg(al::LiveActor*, al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    update(al::LiveActor*);
    updateRotate();
    updateActorPoseAndTrans(al::LiveActor*);
    reset();
    reset(al::LiveActor*);
    ~WheelMovement();
};

} 
