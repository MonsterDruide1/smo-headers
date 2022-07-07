#pragma once

class HomeCapStateMoveChair
{
public:
    HomeCapStateMoveChair(al::LiveActor*);
    init();
    appear();
    appearMoveOtherChair(al::LiveActor*);
    getCapAppearPos(sead::Vector3<float>*);
    exeMove();
    ~HomeCapStateMoveChair();
};
