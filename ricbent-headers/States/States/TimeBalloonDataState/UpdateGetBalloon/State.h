#pragma once

namespace TimeBalloonDataState { namespace UpdateGetBalloon { 

class State
{
public:
    State(TimeBalloonDataAccessorExecutor*, TimeBalloonDataAccessor*);
    appear();
    setting(unsigned long, unsigned long, unsigned long, int, int);
    exeUpdateRating();
    exeUpdateNotice();
    ~State();
};

} } 
