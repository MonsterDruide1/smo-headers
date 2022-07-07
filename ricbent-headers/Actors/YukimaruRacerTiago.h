#pragma once

class YukimaruRacerTiago
{
public:
    YukimaruRacerTiago(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    movement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    start();
    exeWait();
    exeRun();
    updateMoveVec();
    calcCorrection(sead::Vector3<float> const&);
    calcError(sead::Vector3<float> const&) const;
    calcMoveVector(sead::Vector3<float> const&);
    calcMaxPerturbation(bool&, float&);
    calcReactionToPlayer(float);
    isTriggerJump() const;
    isHoldJump() const;
    calcInputVec(sead::Vector3<float>*) const;
    outputInfo();
};
