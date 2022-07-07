#pragma once

class FastenerRailKeeper
{
public:
    FastenerRailKeeper(char const*, al::LiveActor*);
    getRailPointInfo(int) const;
    isRailPointIgnore(int) const;
    isRailPointSpringFix(int) const;
    isRailPointFastenerKnob(int) const;
    isRailPointIsNeedCamera(int) const;
    isRailPointCutReach(int) const;
    isRailPointDisappearKnob(int) const;
    isRailPointShowCorner(int) const;
    isRailPointReachOpen(int) const;
    isRailPointKnobOpenOnly(int) const;
    isRailPointDisableReset(int) const;
    isRailPointKnobFollowPoseMeshNormal(int) const;
    isRailPointReachCancelHack(int) const;
    isRailPointIsNeedStartCameraHackEnd(int) const;
    tryGetRailPointFastenerMoveLimitAreaFlag(int*, int) const;
    tryGetRailPointUv(sead::Vector2<float>*, int) const;
    tryGetRailPointFront(sead::Vector3<float>*, int) const;
    tryGetRailPointDestinationTrans(sead::Vector3<float>*, int) const;
    findRailPointCameraTicket(int) const;
    findRailPointStartCameraHackEndTicket(int) const;
    endCameraIfActive();
    init(al::ActorInitInfo const&);
    appearBySwitch();
    killBySwitch();
    appear();
    kill();
    exeWait();
    calcMeshMtx(sead::Matrix34<float>*);
    calcMeshModelBaseMtx();
    getRailRider() const;
};
