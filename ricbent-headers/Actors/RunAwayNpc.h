#pragma once

class RunAwayNpc
{
public:
    RunAwayNpc(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    exePatrol();
    getCurrentWaitActionName();
    reactToPlayer();
    exeReaction();
    exeSurprised();
    exeScaredToRun();
    exeScaredByRegularEnemy();
    exeRelieved();
    resetScareUneffectiveWindow();
    exePrepareToRunAway();
    exeRunAway();
    exeHiding();
    exeHidingAndTurning();
    exeTurn();
    exeTurnToPlacementFront();
    canSeeWithCylindricalLineOfSight(sead::Vector3<float> const&);
};
