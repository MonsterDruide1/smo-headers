#pragma once

class FrogStateWaitWander
{
public:
    FrogStateWaitWander(al::LiveActor*);
    appear();
    exeWait();
    exeWalk();
    exeFall();
    ~FrogStateWaitWander();
};
