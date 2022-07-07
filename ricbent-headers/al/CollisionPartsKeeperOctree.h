#pragma once

namespace al { 

class CollisionPartsKeeperOctree
{
public:
    CollisionPartsKeeperOctree(int, int, float);
    endInit();
    insertMovingPartsListToOctNode();
    addCollisionParts(al::CollisionParts*);
    connectToCollisionPartsList(al::CollisionParts*);
    insertLooseOctree(al::CollisionPartsKeeperOctree::OctNode*, al::CollisionParts*);
    disconnectToCollisionPartsList(al::CollisionParts*);
    resetToCollisionPartsList(al::CollisionParts*);
    checkStrikePoint(al::HitInfo*, al::CollisionCheckInfoBase const&) const;
    checkStrikeSphere(al::SphereHitResultBuffer*, al::SphereCheckInfo const&, bool, sead::Vector3<float> const&) const;
    checkStrikeSphereRecursive(al::SphereHitResultBuffer*, al::SphereCheckInfo const&, al::CollisionPartsKeeperOctree::OctNode const*, bool, sead::Vector3<float> const&, unsigned int (*)(al::SphereHitResultBuffer*, sead::TList<al::CollisionParts*> const&, al::SphereCheckInfo const&, bool, sead::Vector3<float> const&)) const;
    checkStrikeSphereForPlayer(al::SphereHitResultBuffer*, al::SphereCheckInfo const&) const;
    checkStrikeDisk(al::DiskHitResultBuffer*, al::DiskCheckInfo const&) const;
    checkStrikeDiskRecursive(al::DiskHitResultBuffer*, al::DiskCheckInfo const&, al::CollisionPartsKeeperOctree::OctNode const*) const;
    searchWithSphere(al::SphereCheckInfo const&, sead::IDelegate1<al::CollisionParts*>&) const;
    searchWithSphereRecursive(al::SphereCheckInfo const&, sead::IDelegate1<al::CollisionParts*>&, al::CollisionPartsKeeperOctree::OctNode const*) const;
    checkStrikeArrow(al::ArrowHitResultBuffer*, al::ArrowCheckInfo const&) const;
    checkStrikeArrowRecursive(al::ArrowHitResultBuffer*, al::ArrowCheckInfo const&, al::CollisionPartsKeeperOctree::OctNode const*) const;
    movement();
    updateOctNodeCollisionPartsRecursive(al::CollisionPartsKeeperOctree::OctNode*);
    isFitsInBox(al::CollisionParts const*, sead::BoundBox3<float> const&) const;
    calcNodeCubeSizeHalf(int) const;
    isEnableSearchNextDepthNode(al::CollisionPartsKeeperOctree::OctNode const*);
    isSphereFitsInBox(sead::Vector3<float> const&, float, sead::BoundBox3<float> const&) const;
};

} 
