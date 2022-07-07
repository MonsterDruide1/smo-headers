#pragma once

class PlayerCeilingCheck
{
public:
    PlayerCeilingCheck(al::CollisionDirector*);
    setupCeilingCheckNormal();
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float, float);
    setupCeilingCheckGrab();
    setCollisionPartsFilter(al::CollisionPartsFilterBase const*);
};
