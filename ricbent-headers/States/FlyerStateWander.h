#pragma once

class FlyerStateWander
{
public:
    FlyerStateWander(al::LiveActor*, FlyerStateWanderParam const*);
    appear();
    exeWander();
    exeWait();
    ~FlyerStateWander();
};
