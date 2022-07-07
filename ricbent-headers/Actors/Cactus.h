#pragma once

class Cactus
{
public:
    Cactus(char const*);
    init(al::ActorInitInfo const&);
    calcColliderTrans(sead::Vector3<float>*);
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    calcAnim();
    exeWait();
    exeReaction();
    exeBlowDown();
    setRevival();
    exeBreak();
    exeRevival();
};
