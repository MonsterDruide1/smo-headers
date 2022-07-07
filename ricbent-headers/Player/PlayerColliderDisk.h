#pragma once

class PlayerColliderDisk
{
public:
    PlayerColliderDisk(al::CollisionDirector*, sead::Matrix34<float> const*, sead::Vector3<float> const*, sead::Vector3<float> const*, float, float, sead::Vector3<float> const&, float);
    clear();
    onInvalidate();
    calcCheckPosAndDir(sead::Vector3<float>*, sead::Vector3<float>*) const;
    collide(sead::Vector3<float> const&);
    calcMovePowerByContact(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    moveCollide(sead::Vector3<float>*, float*, float*, sead::Matrix34<float>*, sead::Vector3<float> const&, float, float, sead::Matrix34<float> const*, sead::Vector3<float> const&, float);
    changeCollisionMini();
    changeCollisionNormal();
    changeCollisionWallGrab();
    findCollidePos(al::DiskInterpolator*);
    calcResultVec(sead::Vector3<float>*, sead::Vector3<float> const&);
    calcBoundingCenter(sead::Vector3<float>*) const;
    getCollisionDirector() const;
};
