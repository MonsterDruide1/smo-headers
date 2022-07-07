#pragma once

class BigBirdStateFlyAway
{
public:
    BigBirdStateFlyAway(al::LiveActor*);
    appear();
    exeGroundReaction();
    exeFlyReaction();
    exeFlyAwayPrepare();
    exeFlyAwayStart();
    exeFlyAway();
    ~BigBirdStateFlyAway();
};
