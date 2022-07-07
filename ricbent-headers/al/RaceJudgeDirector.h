#pragma once

namespace al { 

class RaceJudgeDirector
{
public:
    RaceJudgeDirector(int, int);
    setCheckPoint(al::RaceCheckPoint*);
    reset();
    update();
    registerRacer(al::LiveActor*);
};

} 
