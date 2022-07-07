#pragma once

namespace TimeBalloonDataState { namespace RateUpBalloon { 

class State
{
public:
    State(TimeBalloonDataAccessorExecutor*, TimeBalloonDataAccessor*);
    appear();
    setting(unsigned long, unsigned long, unsigned long, bool);
    exeUpdateRating();
    exeUpdateBufferQueuePlayed();
    ~State();
};

} } 
