#pragma once

class SmallBirdStateWait
{
public:
    SmallBirdStateWait(al::LiveActor*, al::ActorInitInfo const&);
    appear();
    exeWait();
    exeTurn();
    ~SmallBirdStateWait();
    getDefaultWaitActionName();
};
