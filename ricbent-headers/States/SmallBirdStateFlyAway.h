#pragma once

class SmallBirdStateFlyAway
{
public:
    SmallBirdStateFlyAway(al::LiveActor*);
    appear();
    startFlyAwayByKoopa();
    exeFlyAway();
    exeFlyAwayHomeLanding();
    exeFlyAwayKoopa();
    ~SmallBirdStateFlyAway();
};
