#pragma once

class HomeCap
{
public:
    HomeCap(char const*, HomeChair*, sead::PtrArray<HomeCapMovePoint> const&);
    init(al::ActorInitInfo const&);
    appearMoveOtherChair(al::LiveActor*);
    tryKillReturnHead();
    exeHide();
    exeMoveOtherChair();
    exeWaitOtherChair();
    exeWanderSign();
    exeMoveSouvenir();
    exeSleepWait();
    exeNoMoveSouvenirSleepWait();
    exeSleepStart();
    exeSleep();
    exeSleepEnd();
};
