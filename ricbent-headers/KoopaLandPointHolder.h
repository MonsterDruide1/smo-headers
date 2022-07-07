#pragma once

class KoopaLandPointHolder
{
public:
    KoopaLandPointHolder(al::ActorInitInfo const&);
    decidePointFarFrom(sead::Vector3<float> const&);
    invalidatePoint(int);
    decidePointEitherFarSide(sead::Vector3<float> const&);
    decidePointNearFrom(sead::Vector3<float> const&);
    reset();
    findNearestPointTrans(sead::Vector3<float> const&) const;
};
