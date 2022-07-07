#pragma once

class HomeCapStateMoveSouvenir
{
public:
    HomeCapStateMoveSouvenir(al::LiveActor*, sead::PtrArray<HomeCapMovePoint> const&);
    init();
    appear();
    tryMoveSouvenir();
    setReturnChair(al::LiveActor*);
    exeTurnNextMovePoint();
    exeWaitSouvenirAction();
    exeMoveSouvenirFront();
    exeTurnSouvenirDir();
    exeWaitSouvenirFront();
    exeActionSouvenirFront();
    exeReturnChairTurn();
    exeReturnChair();
    exeTurnChairFront();
    ~HomeCapStateMoveSouvenir();
};
