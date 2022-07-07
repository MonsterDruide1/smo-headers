#pragma once

class TRexStatePatrolChase
{
public:
    TRexStatePatrolChase(char const*, TRex*, TRexPatrolRouteRider*, TRexPartialAnimCtrl*, TRexFootIK const*, TRexFootIK const*, TRexCollisionAnalyzer const*, TRexGroundHeightCtrl*, TRexNeckAnimInterpoleCtrl*, TRexHackTurnInfo*, al::LiveActorGroup*, sead::Vector3<float>*);
    appear();
    kill();
    isEndSwoonStartDashClash() const;
    isEndDeath() const;
    isValidSwingWatch() const;
    exeFindMario();
    resetRunLife();
    exeRun();
    exeRunAfter();
    exeRunHoldJump();
    exeTurnToPlayer();
    exeDashSign();
    exeDash();
    exeDashAfter();
    exeDashHoldJump();
    exeDashEndL();
    exeSwoonStartDashClash();
    exeDeath();
    ~TRexStatePatrolChase();
};
