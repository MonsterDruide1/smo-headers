#pragma once

class PlayerStateWait
{
public:
    PlayerStateWait(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerModelChangerHakoniwa const*, PlayerJointControlKeeper const*, al::WaterSurfaceFinder const*, IUsePlayerHeightCheck const*, IJudge const*, PlayerAnimator*, PlayerTrigger*, PlayerCapManHeroEyesControl*, PlayerJointParamCenterDynamics*, PlayerJointParamGroundPose*);
    appear();
    kill();
    control();
    isWait() const;
    isEnableLookAt() const;
    isEnableCancelAction() const;
    isEnableCancelHipDropJump() const;
    isEnableRecoveryLife() const;
    isEnableReactionCapCatch() const;
    isAreaAnimCapManHeroEyes() const;
    isPlaySwitchOnAreaAnim() const;
    isLandStain() const;
    isSleep() const;
    attackHipDropKnockDown(al::HitSensor*, al::HitSensor*);
    tryClearIgnoreSwitchOnAreaAnim();
    requestAnimName(char const*);
    noticeCarryStart();
    initSceneStartAnim();
    tryConnectWait();
    getInverseKinematicsRate() const;
    exeLandStiffen();
    exeLand();
    exeWait();
    tryUpdateAreaAnim();
    tryChangeRequestAnim();
    tryChangeAreaAnim();
    tryGetSpecialStatusAnimName(char const**);
    exeWaitConnect2D();
    exeWaitRelaxStart();
    exeWaitRelax();
    exeWaitSnoozeStart();
    exeWaitSnooze();
    exeWaitSleepStart();
    exeWaitSleep();
    exeAreaAnimTurn();
    exeAreaAnimWait();
    exeRequestAnimWait();
    ~PlayerStateWait();
};
