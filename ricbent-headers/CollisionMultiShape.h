#pragma once

class CollisionMultiShape
{
public:
    CollisionMultiShape(al::IUseCollision const*, int);
    check(CollisionShapeKeeper*, sead::Matrix34<float> const*, float, sead::Vector3<float> const&, al::CollisionPartsFilterBase const*);
    callbackFromParts(al::CollisionParts*);
    callbackFromServer(al::KCPrismData const*, al::KCPrismHeader const*);
};
