#pragma once

class GrowSeedStateRevival
{
public:
    GrowSeedStateRevival(char const*, al::LiveActor*, sead::Quat<float>*);
    appear();
    kill();
    exeRevivalWait();
    exeRevival();
    ~GrowSeedStateRevival();
};
