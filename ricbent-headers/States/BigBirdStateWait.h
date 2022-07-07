#pragma once

class BigBirdStateWait
{
public:
    BigBirdStateWait(al::LiveActor*);
    appear();
    exeWaitLeft();
    exeTurnLeft();
    exeWaitRight();
    exeTurnRight();
    ~BigBirdStateWait();
    getDefaultWaitActionName();
};
