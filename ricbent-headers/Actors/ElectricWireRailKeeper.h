#pragma once

class ElectricWireRailKeeper
{
public:
    ElectricWireRailKeeper(char const*);
    ElectricWireRailKeeper(char const*, al::LiveActor*);
    isRailPointFaceToCameraDir(int) const;
    isRailPointPlacementPole(int) const;
    isRailPointEnableTargetEndCollision(int) const;
    isRailPointIgnore(int) const;
    isRailPointSpringFix(int) const;
    isRailPointIsNeedCamera(int) const;
    isRailPointIsNeedStartCameraHackEnd(int) const;
    isRailPointIsExpandRailSelectableAngle(int) const;
    isRailPointIsDisplayPointModelForce(int) const;
    tryGetRailPointOutDir(sead::Vector3<float>*, int) const;
    tryGetRailPointDestinationTrans(sead::Vector3<float>*, int) const;
    tryGetRailPointFastenerMoveLimitAreaFlag(int*, int) const;
    findRailPointCameraTicket(int) const;
    findRailPointStartCameraHackEndTicket(int) const;
    tryGetPlayerHeadPosOnVerticalMove(sead::Vector3<float>*) const;
    tryGetPlayerBottomPosOnVerticalMove(sead::Vector3<float>*) const;
    endCameraIfActive();
    getRailPointInfo(int) const;
    init(al::ActorInitInfo const&);
    appearBySwitch();
    killBySwitch();
    appear();
    kill();
    exeStandby();
    exeWait();
    isNerveStandby() const;
};
