#pragma once

class Bird
{
public:
    Bird(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    initGlideOn(sead::Matrix34<float> const*, sead::Vector3<float> const&);
    initGlideOff(sead::Matrix34<float> const*, sead::Vector3<float> const&, bool);
    makeActorAlive();
    appear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    updateCollider();
    startFlyAwayHomeLanding();
    startFlyAwayKoopa();
    startFlyAwayKoopa(sead::Vector3<float> const&);
    tryStartFlyAwayTRex(sead::Vector3<float> const&);
    exeFreeze();
    exeDelay();
    exeWait();
    endWait();
    exeFlyRail();
    exeFlyRailGoal();
    exeFlyAway();
    endFlyAway();
    exeReset();
    exeGatheringFallDown();
    endGatheringFallDown();
    exeGatheringFallDownSlow();
    exeGatheringLand();
    createForKoopaLv1(al::ActorInitInfo const&);
    createForGatheringSpot(char const*, al::ActorInitInfo const&, char const*);
    appearGatheringSpot(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    forceFlyAwayGatheringSpot();
    isWait() const;
    createBirdGlideDownUfo(char const*, al::ActorInitInfo const&);
    tryStartGlideDown();
    tryStartFlyAway();
};
