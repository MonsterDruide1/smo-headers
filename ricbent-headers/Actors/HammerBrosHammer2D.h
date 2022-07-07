#pragma once

class HammerBrosHammer2D
{
public:
    HammerBrosHammer2D(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    appearInHand(sead::Vector3<float> const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
    thrown(sead::Vector3<float> const&);
    exeInHand();
    exeFlying();
    getActorDimensionKeeper() const;
};
