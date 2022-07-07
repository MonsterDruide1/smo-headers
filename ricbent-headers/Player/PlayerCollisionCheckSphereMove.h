#pragma once

class PlayerCollisionCheckSphereMove
{
public:
    PlayerCollisionCheckSphereMove(al::CollisionDirector*, int);
    checkSphereMove(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    gatherCollisionParts(al::CollisionParts*);
    getNum() const;
    getTValue(unsigned int) const;
    getPos(unsigned int) const;
    getNormal(unsigned int) const;
    getCollisionParts(unsigned int) const;
    getMapCodeName(unsigned int) const;
    getWallCodeName(unsigned int) const;
    getMaterialCodeName(unsigned int) const;
    getCollisionDirector() const;
};
