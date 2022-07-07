#pragma once

namespace al { 

class CollisionDirector
{
public:
    CollisionDirector(al::ExecuteDirector*);
    setPartsKeeper(al::ICollisionPartsKeeper*);
    endInit();
    setPartsFilter(al::CollisionPartsFilterBase const*);
    setTriFilter(al::TriangleFilterBase const*);
    checkStrikePoint(sead::Vector3<float> const&, al::HitInfo*);
    checkStrikeSphere(sead::Vector3<float> const&, float, bool, sead::Vector3<float> const&);
    checkStrikeArrow(sead::Vector3<float> const&, sead::Vector3<float> const&);
    checkStrikeSphereForPlayer(sead::Vector3<float> const&, float);
    checkStrikeDisk(sead::Vector3<float> const&, float, float, sead::Vector3<float> const&);
    getStrikeArrowInfo(unsigned int);
    getStrikeArrowInfoNum() const;
    getStrikeSphereInfo(unsigned int);
    getStrikeSphereInfoNum() const;
    getStrikeDiskInfo(unsigned int);
    getStrikeDiskInfoNum() const;
    getSphereHitInfoArrayForCollider(al::SphereHitInfo**, unsigned int*);
    getDiskHitInfoArrayForCollider(al::DiskHitInfo**, unsigned int*);
    execute();
    searchCollisionPartsWithSphere(sead::Vector3<float> const&, float, sead::IDelegate1<al::CollisionParts*>&, al::CollisionPartsFilterBase const*) const;
    validateCollisionPartsPtrArray(sead::PtrArray<al::CollisionParts>*);
    invalidateCollisionPartsPtrArray();
    getCollisionPartsPtrArray() const;
};

} 
