#pragma once

class BossKnuckleThrowIce
{
public:
    BossKnuckleThrowIce(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    appear();
    appearOnHand(al::LiveActor const*);
    doBreak();
    doThrow(sead::Vector3<float> const&);
    isInAir() const;
    isBreak() const;
    exeAppear();
    exeWait();
    exeFly();
    exeBlowDown();
    exeBreak();
};
