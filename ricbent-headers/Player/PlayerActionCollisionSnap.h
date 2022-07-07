#pragma once

class PlayerActionCollisionSnap
{
public:
    PlayerActionCollisionSnap(al::LiveActor*, IUsePlayerCollision*);
    setup(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    makeSnapPose(sead::Matrix34<float>*);
    start();
    startCommon();
    startWallCatch();
    moveSnapPos(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, int);
    resetSnapPos(sead::Vector3<float> const&);
    setSnapPose(sead::Vector3<float> const&, sead::Vector3<float> const&);
    updateSnapPose();
    turnSnapFrontAxisUp(float);
    rotateSnapPoseAxisFront(float);
    rotateSnapPoseAxisSide(float);
    rotateSnapPoseWithAxis(sead::Vector3<float> const&, float);
    updateMove();
    restartMoveCurrentMtx(int);
    forceMoveEndNearestLeaveDir(sead::Vector3<float> const&);
    followCollision();
    skipMove();
    cancelMove();
    updateInertia();
    endFall(float, sead::Vector3<float> const&, float);
    isSnapPartsMoving() const;
    isSnapPartsValid() const;
    isSnapParts(al::CollisionParts const*) const;
    tryGetConnectedSensor() const;
    calcFollowDir(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};
