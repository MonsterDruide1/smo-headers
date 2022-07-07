#pragma once

namespace TimeBalloonDataState { namespace UpdateGetBalloonTutorial { 

class State
{
public:
    State(TimeBalloonDataAccessorExecutor*, TimeBalloonDataAccessor*);
    appear();
    exeUpdateRating();
    ~State();
};

} } 
