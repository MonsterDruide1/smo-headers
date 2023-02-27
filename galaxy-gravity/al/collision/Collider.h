#pragma once

#include <math/seadVector.h>
#include <math/seadMatrix.h>

#include "al/hio/HioNode.h"
#include "CollisionDirector.h"

namespace al
{
struct SphereInterpolator;
struct SphereHitInfo;
struct CollisionPartsFilterBase;
struct TriangleFilterBase;

class Collider : public al::HioNode, public IUseCollision {
public:
    Collider(al::CollisionDirector*, sead::Matrix34f const*, sead::Vector3f const*,
             sead::Vector3f const*, float, float, u32);
    void calcCheckPos(sead::Vector3f*);
    void calcMovePowerByContact(sead::Vector3f*, sead::Vector3f const&);
    void clear();
    void clearContactPlane();
    void clearStoredPlaneNum();
    sead::Vector3f collide(sead::Vector3f const&);
    void findCollidePos(int*, al::SphereInterpolator*, al::SphereHitInfo*, u32);
    void getCollisionDirector();
    void getPlane(int);
    void getRecentOnGroundNormal(u32);
    void obtainMomentFixReaction(al::SphereHitInfo*, sead::Vector3f*,
                                          sead::Vector3f*, bool, u32);
    void onInvalidate();
    void preCollide(al::SphereInterpolator*, sead::Vector3f*, float*, sead::Vector3f const&,
                    al::SphereHitInfo*, u32);
    void setCollisionPartsFilter(al::CollisionPartsFilterBase const*);
    void setTriangleFilter(al::TriangleFilterBase const *);
    void storeContactPlane(al::SphereHitInfo *);
    void storeCurrentHitInfo(al::SphereHitInfo *, u32);
    void updateRecentOnGroundInfo();
};
} // namespace al
