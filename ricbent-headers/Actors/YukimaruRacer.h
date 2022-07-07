#pragma once

class YukimaruRacer
{
public:
    YukimaruRacer(char const*);
    init(al::ActorInitInfo const&);
    start();
    initAfterPlacement();
    movement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeRun();
    updateMoveVec();
    isTriggerJump() const;
    isHoldJump() const;
    calcInputVec(sead::Vector3<float>*) const;
};
