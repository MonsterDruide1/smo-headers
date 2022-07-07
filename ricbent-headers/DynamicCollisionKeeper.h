#pragma once

class DynamicCollisionKeeper
{
public:
    DynamicCollisionKeeper();
    endInit();
    checkStrikePoint(al::HitInfo*, al::CollisionCheckInfoBase const&) const;
    checkStrikeSphere(al::SphereHitResultBuffer*, al::SphereCheckInfo const&, bool, sead::Vector3<float> const&) const;
    checkStrikeArrow(al::ArrowHitResultBuffer*, al::ArrowCheckInfo const&) const;
    checkStrikeSphereForPlayer(al::SphereHitResultBuffer*, al::SphereCheckInfo const&) const;
    checkStrikeDisk(al::DiskHitResultBuffer*, al::DiskCheckInfo const&) const;
    movement();
    addCollisionParts(al::CollisionParts*);
    connectToCollisionPartsList(al::CollisionParts*);
    disconnectToCollisionPartsList(al::CollisionParts*);
    searchWithSphere(al::SphereCheckInfo const&, sead::IDelegate1<al::CollisionParts*>&) const;
};
